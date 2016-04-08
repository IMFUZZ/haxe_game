package;

import flixel.FlxSprite;
import openfl.geom.Rectangle;

class QuadTree extends Rectangle {

	private var MAX_OBJECTS = 10;
	private var MAX_LEVELS = 5;

	private var _level:Int; 
	private var _objects:Array<FlxSprite>;
	private var _nodes:Vector<QuadTree>;

	public function new(a_level:Int, a_x:Float, a_y:Float, a_width:Float, a_height:Float) {
		super(a_x, a_y, a_width, a_height);
		_level = a_level;
		_objects = new Array();
		_nodes = new Vector(4);
	}

	public function clear() {
		/*
				NEED TO TEST THE SPLICE FOR C++
		*/
		trace(_objects.length);
		#if (cpp||php)
			_objects.splice(0, _objects.length);
		#else
			untyped _objects.length = 0;
		#end
		trace(_objects.length);

		for (x in 0...nodes.length) {
			nodes[x].clear();
			nodes[x] = null;
		}
	}

	public function split() {
		var subWidth:Float = width/2;
		var subHeight:Float = height/2;
		var subX:Float = x;
		var subY:Float = y;

		nodes[0] = new QuadTree(_level+1, new Rectangle(x + subWidth, y, subWidth, subHeight));
		nodes[1] = new QuadTree(_level+1, new Rectangle(x, y, subWidth, subHeight));
		nodes[2] = new QuadTree(_level+1, new Rectangle(x, y + subHeight, subWidth, subHeight));
		nodes[3] = new QuadTree(_level+1, new Rectangle(x + subWidth, y + subHeight, subWidth, subHeight));
	}

	public function getIndex(a_sprite:FlxSprite):Int {
		var index:Int = -1;
		var verticalMidpoint = x + (width / 2);
		var horizontalMidpoint = y + (height / 2);

		var canFitTopQuadrant = (a_sprite.y < horizontalMidpoint && a_sprite.graphics.height < horizontalMidpoint);
		var canFitBottomQuadrant = (a_sprite.y > horizontalMidpoint);

		if (a_sprite.x < verticalMidpoint && a_sprite.x + a_sprite.graphics.width < verticalMidpoint) {
			if (canFitTopQuadrant) {
				index = 1;
			} else if (canFitBottomQuadrant) {
				index = 2;
			}
		} else {
			if (canFitTopQuadrant) {
				index = 0;
			} else if (canFitBottomQuadrant) {
				index = 3;
			}
		}
		return index;
	}

	public function insert(a_sprite:FlxSprite) {

		if (nodes[0] != null) {
			var index = getIndex(a_sprite);
			if (index != -1) {
				nodes[index].insert(a_sprite);
				return;
			}
		}
		_objects.push(a_sprite);

		if (_objects.size() > MAX_OBJECTS && _level < MAX_LEVELS) {
			if (nodes[0] == null) {
				split();
			}
			var i:Int = 0;
			while (i < _objects.length) {
				var index:Int = getIndex(_objects[i]);
				if (index != -1) {
					nodes[index].insert(_objects.remove(_objects[i]));
					_objects.remove(_objects[i]);
				} else {
					i++;
				}
			}   
		}
	}

	public function retrieve(a_foundObjects:Array<FlxSprite>, a_sprite:FlxSprite):Array<FlxSprite> {
		var index:Int = getIndex(a_sprite);
		
		if (index != -1 && nodes[0] != null) {
			nodes[index].retrieve(a_foundObjects, a_sprite);
		}

		a_foundObjects.concat(_objects);
		return a_foundObjects;
	}
}