package states;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;

class MenuState extends FlxState {
	
	private var _btnPlay:FlxButton;

	override public function create():Void {
		super.create();
		_btnPlay = new FlxButton(0, 0, "Play", _clickPlay);
		_btnPlay.screenCenter();
		add(_btnPlay);
	}

	override public function update(elapsed:Float):Void {
		super.update(elapsed);
	}

	private function _clickPlay():Void {
		FlxG.switchState(new PlayState());
	}
}
