package;

import flixel.FlxG;
import flixel.input.FlxInput;
import flixel.input.keyboard.FlxKey;
import flixel.input.gamepad.FlxGamepad;
import flixel.input.gamepad.FlxGamepadInputID;

class CustomController {

	public var keyboardEventsOnPressed:Map<Int, Void->Int>;
	public var keyboardEventsOnJustPressed:Map<Int, Void->Int>;
	public var keyboardEventsOnJustReleased:Map<Int, Void->Int>;
	public var gamepadEventsOnPressed:Map<Int, Void->Int>;
	public var gamepadEventsOnJustPressed:Map<Int, Void->Int>;
	public var gamepadEventsOnJustReleased:Map<Int, Void->Int>;
	public var gamepad:FlxGamepad;

	public function addKeyboardEventOnPressed(a_actionKey:Int, a_action:Void->Int) {
		keyboardEventsOnPressed.set(a_actionKey, a_action);
	}
	public function addKeyboardEventOnJustPressed(a_actionKey:Int, a_action:Void->Int) {
		keyboardEventsOnJustPressed.set(a_actionKey, a_action);
	}
	public function addKeyboardEventOnJustReleased(a_actionKey:Int, a_action:Void->Int) {
		keyboardEventsOnJustReleased.set(a_actionKey, a_action);
	}

	public function addGamepadEventOnPressed(a_actionKey:Int, a_action:Void->Int) {
		gamepadEventsOnPressed.set(a_actionKey, a_action);
	}
	public function addGamepadEventOnJustPressed(a_actionKey:Int, a_action:Void->Int) {
		gamepadEventsOnJustPressed.set(a_actionKey, a_action);
	}
	public function addGamepadEventOnJustReleased(a_actionKey:Int, a_action:Void->Int) {
		gamepadEventsOnJustReleased.set(a_actionKey, a_action);
	}

	public function new() {
		keyboardEventsOnPressed 		= new Map();
		keyboardEventsOnJustPressed 	= new Map();
		keyboardEventsOnJustReleased 	= new Map();
		gamepadEventsOnPressed 		= new Map();
		gamepadEventsOnJustPressed 	= new Map();
		gamepadEventsOnJustReleased 	= new Map();
		initDefaultEvents();
	}

	public function update() {
		gamepad = FlxG.gamepads.firstActive;
		if (gamepad != null) {
			if (gamepad.analog.value.LEFT_STICK_Y != 0 || gamepad.analog.value.LEFT_STICK_X != 0) {
				gamepadEventsOnPressed.get(FlxGamepadInputID.LEFT_ANALOG_STICK)();
			}
			if (gamepad.analog.value.RIGHT_STICK_Y != 0 || gamepad.analog.value.RIGHT_STICK_X != 0) {
				gamepadEventsOnPressed.get(FlxGamepadInputID.RIGHT_ANALOG_STICK)();
			}
			for (buttonID in gamepadEventsOnPressed.keys()) {
				if (Reflect.getProperty(gamepad.pressed, Shared.supportedButtons.get(buttonID))) {
					gamepadEventsOnPressed.get(buttonID)();
				}
			}
			for (buttonID in gamepadEventsOnJustPressed.keys()) {
				if (Reflect.getProperty(gamepad.justPressed, Shared.supportedButtons.get(buttonID))) {
					gamepadEventsOnJustPressed.get(buttonID)();
				}
			}
			for (buttonID in gamepadEventsOnJustReleased.keys()) {
				if (Reflect.getProperty(gamepad.justReleased, Shared.supportedButtons.get(buttonID))) {
					gamepadEventsOnJustReleased.get(buttonID)();
				}
			}
		}
		for (keyID in keyboardEventsOnPressed.keys()) {
			if (Reflect.getProperty(FlxG.keys.pressed, Shared.supportedKeys.get(keyID))) {
				keyboardEventsOnPressed.get(keyID)();
			}
		}
		for (keyID in keyboardEventsOnJustPressed.keys()) {
			if (Reflect.getProperty(FlxG.keys.justPressed, Shared.supportedKeys.get(keyID))) {
				keyboardEventsOnJustPressed.get(keyID)();
			}
		}
		for (keyID in keyboardEventsOnJustReleased.keys()) {
			if (Reflect.getProperty(FlxG.keys.justReleased, Shared.supportedKeys.get(keyID))) {
				keyboardEventsOnJustReleased.get(keyID)();
			}
		}
	}

	private function initDefaultEvents() {
		// Default keyboard actions
		addKeyboardEventOnPressed(FlxKey.W, function () { Shared.player.move(0, -1); return 0; });
		addKeyboardEventOnPressed(FlxKey.S, function () { Shared.player.move(0, 1); return 0; });
		addKeyboardEventOnPressed(FlxKey.A, function () { Shared.player.move(-1, 0); return 0; });
		addKeyboardEventOnPressed(FlxKey.D, function () { Shared.player.move(1, 0); return 0; });

		addKeyboardEventOnJustPressed(FlxKey.ONE, function () { trace(Shared.clock.getCurrentYear()); return 0; });
		addKeyboardEventOnJustPressed(FlxKey.TWO, function () { trace(Shared.clock.getCurrentSeason()); return 0; });
		addKeyboardEventOnJustPressed(FlxKey.THREE, function () { trace(Shared.clock.getCurrentDay()); return 0; });
		addKeyboardEventOnJustPressed(FlxKey.FOUR, function () { trace(Shared.clock.getCurrentHour()); return 0; });
		addKeyboardEventOnJustPressed(FlxKey.FIVE, function () { trace(Shared.clock.getCurrentMinute()); return 0; });

		addKeyboardEventOnPressed(FlxKey.UP, function () { Shared.player.move(0, -1); return 0; });
		addKeyboardEventOnPressed(FlxKey.DOWN, function () { Shared.player.move(0, 1); return 0; });
		addKeyboardEventOnPressed(FlxKey.LEFT, function () { Shared.player.move(-1, 0); return 0; });
		addKeyboardEventOnPressed(FlxKey.RIGHT, function () { Shared.player.move(1, 0); return 0; });
		addKeyboardEventOnPressed(FlxKey.ESCAPE, function() { Sys.exit(0); return 0; });
		addKeyboardEventOnJustPressed(FlxKey.SHIFT, function() { Shared.player.isRunning = true; return 0; });
		addKeyboardEventOnJustReleased(FlxKey.SHIFT, function() { Shared.player.isRunning = false; return 0; });
		addKeyboardEventOnPressed(FlxKey.PAGEUP, function() { if (FlxG.camera.zoom < 3.0) FlxG.camera.zoom += 0.1; return 0; });
		addKeyboardEventOnPressed(FlxKey.PAGEDOWN, function() { if (FlxG.camera.zoom > 1.0) FlxG.camera.zoom -= 0.1; return 0; });
		// Default gamepad actions
		addGamepadEventOnPressed(FlxGamepadInputID.LEFT_ANALOG_STICK, function() {
			Shared.player.move(gamepad.analog.value.LEFT_STICK_X, gamepad.analog.value.LEFT_STICK_Y);
			return 0;
		});
		addGamepadEventOnPressed(FlxGamepadInputID.RIGHT_ANALOG_STICK, function() {
			trace("Right analog stick");
			return 0;
		});
		addGamepadEventOnPressed(FlxGamepadInputID.START, function() { Sys.exit(0); return 0; });
		addGamepadEventOnJustPressed(FlxGamepadInputID.A, function() { Shared.player.isRunning = true; return 0; });
		addGamepadEventOnJustReleased(FlxGamepadInputID.A, function() { Shared.player.isRunning = false; return 0; });
		addGamepadEventOnJustPressed(FlxGamepadInputID.DPAD_UP, function() { trace("Hello!!"); return 0; });
		
	}
}