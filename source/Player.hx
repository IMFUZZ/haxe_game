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

class Player extends FlxNapeSprite {

	private var dragJoint:PivotJoint;
	private var _walkSpeed:Float = 6;
	private var _runSpeed:Float = 1;
	private var _currentSpeed:Vec2;

	public var isRunning:Bool = false;

	public function new(?a_x:Float=0, ?a_y:Float=0) {
		super(a_x, a_y);

		_currentSpeed = new Vec2(0, 0);

		loadGraphic("assets/images/character.png", true, 16, 32);

		createCircularBody(8, BodyType.DYNAMIC);
		setBodyMaterial(0, 0, 0);

		body.userData.type = "player";
		body.allowRotation = false;

		// dragJoint = new PivotJoint(FlxNapeSpace.space.world, null, Vec2.weak(), Vec2.weak());
		// dragJoint.space = FlxNapeSpace.space;
		// dragJoint.active = false;
		// dragJoint.stiff = false;

	}

	public function beforeUpdate():Void {

	}    

	override public function update(elapsed:Float):Void {
		super.update(elapsed);
	} 

	public function afterUpdate():Void {
		updateRun();
		if (_currentSpeed.y != 0 && _currentSpeed.x != 0) _currentSpeed.normalise();
		body.velocity.x = (5000 * (_currentSpeed.x * (FlxG.elapsed))) * _runSpeed;
		body.velocity.y = (5000 * (_currentSpeed.y * (FlxG.elapsed))) * _runSpeed;
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