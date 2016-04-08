package debug;

import haxe.Timer;
import openfl.display.FPS;
import openfl.events.Event;
import openfl.system.System;
import openfl.text.TextField;
import openfl.text.TextFormat;
import openfl.text.Font;
import openfl.Assets;

@:font("assets/fonts/consolas.ttf")
private class Consolas extends Font {}

class SystemUsage extends TextField {

	public static var CONSOLAS(default, null):String;
	private var times:Array<Float>;
	private var memoryPeak:Float = 0;

	public function new(a_x:Float = 10.0, a_y:Float = 10.0, a_color:Int = 0xFFFFFF) {
		super();

		Font.registerFont(Consolas);
		defaultTextFormat = new TextFormat((new Consolas()).fontName, 18, a_color);
		times = [];
		x = a_x;
		y = a_y;
		width = 600;
		height = 70;
		selectable = false;
		addEventListener(Event.ENTER_FRAME, _onEnter);
	}

	private function _onEnter(_) {
		var now = Timer.stamp();
		var memory:Float = Math.round(System.totalMemory/1024/1024*100)/100;

		times.push(now);
		while (times[0] < now-1) {
			times.shift();
		}
		if (memory > memoryPeak) memoryPeak = memory;
		if (visible) {
			text = "FPS : " + times.length + 
			"\nMEM : " + memory + " MB\n" + 
			"MEM peak : " + memoryPeak + " MB";
		}
	}
}