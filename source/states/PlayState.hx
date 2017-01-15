package states;

import flixel.FlxG;
import characters.Character;
import world.Darkness;
import flixel.input.FlxInput.FlxInputState;
import flixel.group.FlxGroup;

class PlayState extends flixel.FlxState {

	public var darkness:Darkness;
	
	private var _stateIC:InputController;
	private var _sprites:FlxTypedGroup<flixel.FlxObject>;
	private var _worldTileMap:world.WorldTilemap;

	override public function create():Void {
		super.create();
		FlxG.camera.zoom = 1;
		FlxG.camera.pixelPerfectRender = true;
		Shared.player.initUI();

		// Initializes all the controls available in the playState
		this._initControls();

		// Starting the game time
		Shared.clock.startTime();
		Shared.clock.time = 40;

		// Initializes the physics engine space
		flixel.addons.nape.FlxNapeSpace.init();

		// Initializes the group of sprites to be printed (Necessary for sorting)	
		this._sprites = new FlxTypedGroup<flixel.FlxObject>();

		// Initializes the darkness layer for the day/night cycle
		this.darkness = new Darkness(0, 0);

		// Initializes the world tilemap
		this._worldTileMap = Shared.mapGenerator.generate(10, "assets/images/tilemap.png");

		// *TEMP* setting the player of the player
		Shared.player.setCharacter(new Character(Shared.mapGenerator.spawnPoint.x, Shared.mapGenerator.spawnPoint.y, "assets/images/character.png"));
		this._sprites.add(Shared.player.character);
		this._sprites.add(Shared.player.character.tileSelected);
		
		// *TEMP* adding a test character in the world
		this._sprites.add(new Character(100, 100, "assets/images/character.png"));
		
		// Organizing the layers
		this.add(this._worldTileMap);
		this.add(this._sprites);
		this.add(this.darkness);
		this.add(Shared.player.UI);
	}

	override public function update(elapsed:Float):Void {
		super.update(elapsed);

		// These should probably not be updated if paused
		Shared.clock.update(elapsed);
		Shared.player.update(elapsed);
		this.darkness.update(elapsed);
		
		this._stateIC.updateControls(FlxG.keys, FlxG.mouse, FlxG.gamepads.firstActive);
		
		// Sort the sprites to draw last so it is executed right before the super.update()
		this._sprites.sort(flixel.util.FlxSort.byY);
	}

	private function _initControls() {
		this._stateIC = new InputController([FlxInputState.PRESSED, FlxInputState.JUST_PRESSED, FlxInputState.JUST_RELEASED]);
		this._stateIC.addKeyboardEvent(FlxInputState.JUST_PRESSED, "PAGEUP", function(params:Dynamic) {
			Shared.player.openSubState("worldMap");
			return 0;
		});
		this._stateIC.addMouseEvent(FlxInputState.JUST_PRESSED, "RIGHTCLICK", function(params:Dynamic) {
			this._sprites.add(new items.Gold(FlxG.mouse.x, FlxG.mouse.y));
			return 0;
		});
		this._stateIC.addKeyboardEvent(FlxInputState.JUST_PRESSED, "ONE", function(params:Dynamic) {
			FlxG.fullscreen = !FlxG.fullscreen;
			return 0;
		});
		this._stateIC.addKeyboardEvent(FlxInputState.JUST_PRESSED, "TWO", function(params:Dynamic) {
			this._worldTileMap.pixelPerfectRender = !this._worldTileMap.pixelPerfectRender;
			return 0;
		});
	} 
}
