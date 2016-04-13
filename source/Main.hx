package;

import flixel.FlxGame;
import states.MenuState;
import debug.SystemUsage;
import openfl.display.Sprite;

class Main extends Sprite {
	public function new() {
		super();
		addChild(new FlxGame(640, 360, MenuState));
		addChild(new SystemUsage());
	}
}