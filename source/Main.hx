package;

import flixel.FlxGame;
import states.MenuState;
import debug.SystemUsage;
import openfl.display.Sprite;

class Main extends Sprite {
	public function new() {
		super();

		addChild(new FlxGame(896, 504, MenuState));
		addChild(new SystemUsage());
	}
}