package;

import states.MenuState;
import debug.SystemUsage;
import flixel.FlxGame;
import openfl.display.Sprite;
import flixel.addons.nape.FlxNapeSpace;

class Main extends Sprite {
	public function new() {
		super();

        addChild(new FlxGame(640, 480, MenuState));
        addChild(new SystemUsage());
	}
}