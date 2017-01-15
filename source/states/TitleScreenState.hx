package states;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.FlxState;
import flixel.ui.FlxButton;
import flixel.util.FlxAxes;


import flixel.addons.ui.FlxUIState;
import flixel.addons.ui.FlxUISprite;
import flixel.addons.ui.FlxUIButton;

class TitleScreenState extends FlxUIState {
	
	private var _btnPlay:FlxUIButton;
	private var _btnQuit:FlxUIButton;

	/*
		Initializes a `TitleScreenState` and the elements contained in `Shared`  
	*/
	override public function new():Void {
		super();

		// Initializing all the Shared elements
		Shared.init();

		// Adjusting for the size of the default widgets 
		FlxG.camera.zoom = 2;

		// --- Play button ---
		this._btnPlay = new FlxUIButton(0, 300, "Play", _play, true, false, FlxColor.WHITE);
		this._btnPlay.screenCenter(FlxAxes.X);
		this.add(_btnPlay);

		// --- Quit button ---
		this._btnQuit = new FlxUIButton(0, 320, "Quit", _quit, true, false, FlxColor.WHITE);
		this._btnQuit.screenCenter(FlxAxes.X);
		this.add(_btnQuit);
	}

	/*
		Launches the game (Switch the state to a new `PlayState`)
	*/
	private function _play():Void {
		FlxG.switchState(new PlayState());
	}

	/*
		Quits the application
	*/
	private function _quit():Void {
		flash.system.System.exit(0);
	}
}
