package;

import flixel.FlxG;
import flixel.FlxGame;
import states.TitleScreenState;
import debug.SystemUsage;
import openfl.display.Sprite;

class Main extends Sprite {
	public function new() {
		super();
		addChild(new FlxGame(FlxG.width, FlxG.height, TitleScreenState, 1, 60, 60, false, true));
		addChild(new SystemUsage());
	}
}