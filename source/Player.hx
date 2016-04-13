package;

import flixel.FlxG;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.util.FlxColor;
import flixel.input.FlxInput;
import flixel.input.keyboard.FlxKey;
import flixel.addons.nape.FlxNapeSpace;
import flixel.addons.nape.FlxNapeSprite;
import nape.constraint.PivotJoint;
import nape.geom.Vec2;
import nape.phys.Material;
import nape.phys.BodyType;

class Player {
	public var inventory:Array<Item>;
	public var sprite:FlxNapeSprite;
	public var isRunning:Bool = false;
	private var _runSpeed:Float = 1;
	private var _currentSpeed:Vec2;

	public var health:Int;

	public function new(a_x:Float, a_y:Float) {

		sprite = new FlxNapeSprite(a_x, a_y);
		_currentSpeed = new Vec2(0, 0);

		sprite.loadGraphic("assets/images/character.png", true, 16, 32);

		sprite.createCircularBody(8, BodyType.DYNAMIC);
		sprite.setBodyMaterial(0, 0, 0);

		sprite.body.userData.type = "player";
		sprite.body.allowRotation = false;
	}

	public function beforeUpdate():Void {

	}    

	public function update(elapsed:Float):Void {
		sprite.update(elapsed);
	} 

	public function afterUpdate():Void {
		updateRun();
		if (_currentSpeed.y != 0 && _currentSpeed.x != 0) _currentSpeed.normalise();
		sprite.body.velocity.x = (5000 * (_currentSpeed.x * (FlxG.elapsed))) * _runSpeed;
		sprite.body.velocity.y = (5000 * (_currentSpeed.y * (FlxG.elapsed))) * _runSpeed;
		_currentSpeed.x = 0;
		_currentSpeed.y = 0;
	}

	public function move(?a_x:Float = 0, ?a_y:Float = 0):Int {
		if (a_x != 0) _currentSpeed.x = a_x;
		if (a_y != 0) _currentSpeed.y = a_y;
		return 0;
	}

	private function updateRun() {
		if (isRunning) _runSpeed = 1.5;
		else _runSpeed = 1;
	}
}