package characters;

import flixel.FlxG;
import flixel.FlxSprite;
using flixel.util.FlxSpriteUtil;
import flixel.addons.nape.FlxNapeSpace;
import flixel.addons.nape.FlxNapeSprite;
import nape.constraint.PivotJoint;
import nape.geom.Vec2;
import nape.phys.Material;
import nape.phys.BodyType;
import flixel.util.FlxColor;
import flixel.input.mouse.FlxMouseEventManager;
import flixel.math.FlxMath;
import items.Inventory;
import items.Item;

class Character extends FlxNapeSprite {
	public var owner:Player;
	public var inventory:Inventory = new Inventory(12);
	public var tileSelected:FlxSprite = new FlxSprite(0, 0);
	public var isRunning:Bool = false;
	private var _runSpeed:Float = 1;
	private var _currentSpeed:Vec2 = new Vec2(0, 0);
	
	public function new(a_x:Float, a_y:Float, a_texturePath:String) {
		super(a_x, a_y);
		this.health = 100;
		this.loadGraphic(a_texturePath, true, Shared.TILE_WIDTH, Shared.TILE_HEIGHT*2);
		this.createCircularBody(Shared.TILE_WIDTH/2, BodyType.DYNAMIC);
		this.origin.set(Shared.TILE_WIDTH/2, Shared.TILE_HEIGHT+Shared.TILE_HEIGHT/2);
		this.body.allowRotation = false;
		this.tileSelected.makeGraphic(Shared.TILE_WIDTH, Shared.TILE_HEIGHT, FlxColor.TRANSPARENT);
		FlxSpriteUtil.drawRect(tileSelected, 0, 0, Shared.TILE_WIDTH - 1, Shared.TILE_HEIGHT - 1, FlxColor.TRANSPARENT, { thickness: 1, color: FlxColor.RED });
		FlxMouseEventManager.add(this, onMouseDown, onMouseUp, onMouseOver, onMouseOut); 
	}

	override public function update(elapsed:Float) {
		super.update(elapsed);
		tileSelected.x = Math.floor(FlxG.mouse.x / Shared.TILE_WIDTH) * Shared.TILE_WIDTH;
		tileSelected.y = Math.floor(FlxG.mouse.y / Shared.TILE_HEIGHT) * Shared.TILE_HEIGHT;
		tileSelected.update(elapsed);

		this.afterUpdate(elapsed);
	}

	public function afterUpdate(elapsed:Float) {
		updateRun();
		if (_currentSpeed.y != 0 && _currentSpeed.x != 0) _currentSpeed.normalise();
		body.velocity.x = (10000 * (_currentSpeed.x * (elapsed))) * _runSpeed;
		body.velocity.y = (10000 * (_currentSpeed.y * (elapsed))) * _runSpeed;
		_currentSpeed.x = 0;
		_currentSpeed.y = 0;
	}

	private function updateRun() {
		if (isRunning) _runSpeed = 2;
		else _runSpeed = 1;
	}

	public function move(?a_x:Float = 0, ?a_y:Float = 0):Int {
		if (a_x != 0) _currentSpeed.x = a_x;
		if (a_y != 0) _currentSpeed.y = a_y;
		return 0;
	}

	public function die() {
		FlxG.state.remove(this);
		FlxG.state.remove(this.tileSelected);
	}

	function onMouseDown(sprite:FlxSprite) {
		Shared.player.setCharacter(this);
	}

	function onMouseUp(sprite:FlxSprite) {
		trace("MouseUp");
	}

	function onMouseOver(sprite:FlxSprite) {
		trace("MouseOver");
	}

	function onMouseOut(sprite:FlxSprite) {
		trace("MouseOut");
	}

	public function takeItem(item:Item) {
		if (this.inventory.addItem(item)) {
			trace(this.inventory.getSize());
			item.kill();
			trace("Added in inventory!");
		} else {
			trace("Not enough place in inventory!");
		}
	}

	public function setOwner(a_player:Player) {
		this.owner = a_player;
	}
}