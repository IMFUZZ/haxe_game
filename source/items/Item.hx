package items;

import flixel.addons.nape.FlxNapeSprite;
import flixel.FlxSprite;
import gametime.TimeStamp;
import nape.phys.Material;
import nape.phys.BodyType;
import flixel.input.mouse.FlxMouseEventManager;
import flixel.system.FlxAssets;

class Item extends FlxNapeSprite {

	public var name:String;
	public var icon:FlxSprite;
	public var description:String;
	public var creationTime:TimeStamp;
	public var stackSize:Int = 1;
	public var quantity:Int = 1;
	public var mouseIsOver:Bool = false;
	
	public function new(a_x:Float = 0, a_y:Float = 0, ?a_stackSize:Int = 1, ?a_simpleGraphic:FlxGraphicAsset, a_createRectangularBody:Bool = true, a_enablePhysics:Bool = true) {
		super(a_x, a_y, a_simpleGraphic, a_createRectangularBody, a_enablePhysics);
		this.color = 0xCCCCCC;
		this.name = "Item";
		this.creationTime = Shared.clock.createTimeStamp();
		this.stackSize = a_stackSize;
		FlxMouseEventManager.add(this, onMouseDown, onMouseUp, onMouseOver, onMouseOut); 
	}

	override public function update(elapsed:Float) {
		super.update(elapsed);
		if (mouseIsOver) {
			this.highlight(flixel.math.FlxMath.distanceBetween(Shared.player.character, this) < Shared.TILE_WIDTH*4);
		} else {
			this.highlight(false);
		}
	}

	public function stack(item:Item):Bool {
		if (item.name != this.name || this.quantity >= this.stackSize) {
			return false;	
		}
		this.quantity++;
		return true;
	}

	public function highlight(val:Bool) {
		this.color = (val) ? 0xFFFFFF : 0xCCCCCC;
	}

	function onMouseDown(sprite:FlxSprite) {
		Shared.player.character.takeItem(this);
	}

	function onMouseUp(sprite:FlxSprite) {
		trace("MouseUp");
	}

	function onMouseOver(sprite:FlxSprite) {
		mouseIsOver = true;
	}
	
	function onMouseOut(sprite:FlxSprite) {
		mouseIsOver = false;
	}
}