package states;

import flixel.FlxG;
import flixel.FlxCamera;
import flixel.FlxBasic;
import flixel.addons.ui.FlxUISubState;
import flixel.addons.ui.FlxUISprite;
import world.WorldMap;
import flixel.input.FlxInput.FlxInputState;
import flixel.FlxSprite;
import flixel.group.FlxGroup;
import flixel.util.FlxColor;

class WorldMapUIState extends FlxUISubState {
	
	public var worldMapSprite:FlxUISprite;
	public var mapCursor:FlxSprite;
	private var _stateIC:InputController;
	private var _flxGroup:FlxGroup = new FlxGroup();

	override public function new(?a_color:FlxColor = FlxColor.BLACK) {
		super(a_color);

		this._initControls();

		// Resetting this state's camera and adding it to the FlxG.cameras
		this.camera = new FlxCamera(0, 0, FlxG.width, FlxG.height);
		FlxG.cameras.add(this.camera);

		// World map sprite
		this.worldMapSprite = new FlxUISprite(0, 0, Shared.mapGenerator.worldMap.bitmap);

		// MapCursor sprite representing the position of the player's character
		this.mapCursor = new FlxSprite(
			Std.int(Shared.player.character.body.position.x/Shared.TILE_WIDTH), 
			Std.int(Shared.player.character.body.position.y/Shared.TILE_HEIGHT)
		);
		this.mapCursor.makeGraphic(1, 1, 0xFFFF0000);
		this.camera.follow(this.mapCursor, 1);
		this.camera.zoom = 2;

		// Organizing the layers
		this._flxGroup.add(this.worldMapSprite);
		this._flxGroup.add(this.mapCursor);
		this.add(this._flxGroup);
	}

	override public function update(elapsed:Float):Void {
		super.update(elapsed);
		Shared.player.update(elapsed);
		this._stateIC.updateControls(FlxG.keys, FlxG.mouse, FlxG.gamepads.firstActive);
	}

	public function _initControls() {
		this._stateIC = new InputController([FlxInputState.PRESSED, FlxInputState.JUST_PRESSED, FlxInputState.JUST_RELEASED]);
		this._stateIC.addKeyboardEvent(FlxInputState.JUST_PRESSED, "PAGEUP", function(params:Dynamic) {
			FlxG.cameras.remove(this.camera);
			this.close();
			return 0;
		});
	}
}