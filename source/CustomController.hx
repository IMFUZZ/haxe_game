package;

import flixel.FlxG;
import flixel.input.FlxInput;
import flixel.input.keyboard.FlxKey;
import flixel.input.gamepad.FlxGamepad;
import flixel.input.gamepad.FlxGamepadInputID;

class CustomController {

	public var keyboardActionsOnPressed:Map<Int, Void->Int>;
	public var keyboardActionsOnJustPressed:Map<Int, Void->Int>;
	public var keyboardActionsOnJustReleased:Map<Int, Void->Int>;
	public var gamepadActionsOnPressed:Map<Int, Void->Int>;
	public var gamepadActionsOnJustPressed:Map<Int, Void->Int>;
	public var gamepadActionsOnJustReleased:Map<Int, Void->Int>;
	public var gamepad:FlxGamepad;

	public function insertKeyboardActionOnPressed(a_actionKey:Int, a_action:Void->Int) {
		keyboardActionsOnPressed.set(a_actionKey, a_action);
	}
	public function insertKeyboardActionOnJustPressed(a_actionKey:Int, a_action:Void->Int) {
		keyboardActionsOnJustPressed.set(a_actionKey, a_action);
	}
	public function insertKeyboardActionOnJustReleased(a_actionKey:Int, a_action:Void->Int) {
		keyboardActionsOnJustReleased.set(a_actionKey, a_action);
	}

	public function insertGamepadActionOnPressed(a_actionKey:Int, a_action:Void->Int) {
		gamepadActionsOnPressed.set(a_actionKey, a_action);
	}
	public function insertGamepadActionOnJustPressed(a_actionKey:Int, a_action:Void->Int) {
		gamepadActionsOnJustPressed.set(a_actionKey, a_action);
	}
	public function insertGamepadActionOnJustReleased(a_actionKey:Int, a_action:Void->Int) {
		gamepadActionsOnJustReleased.set(a_actionKey, a_action);
	}

	public function new() {
		keyboardActionsOnPressed = new Map();
		keyboardActionsOnJustPressed = new Map();
		keyboardActionsOnJustReleased = new Map();
		gamepadActionsOnPressed = new Map();
		gamepadActionsOnJustPressed = new Map();
		gamepadActionsOnJustReleased = new Map();
		initDefaultActions();
	}

	public function update() {
		gamepad = FlxG.gamepads.firstActive;
		if (gamepad != null) {
			if (gamepad.analog.value.LEFT_STICK_Y != 0 || gamepad.analog.value.LEFT_STICK_X != 0) {
				gamepadActionsOnPressed.get(FlxGamepadInputID.LEFT_ANALOG_STICK)();
			}
			if (gamepad.analog.value.RIGHT_STICK_Y != 0 || gamepad.analog.value.RIGHT_STICK_X != 0) {
				gamepadActionsOnPressed.get(FlxGamepadInputID.RIGHT_ANALOG_STICK)();
			}
			for (buttonID in gamepadActionsOnPressed.keys()) {
				if (Reflect.getProperty(gamepad.pressed, Shared.supportedButtons.get(buttonID))) {
					gamepadActionsOnPressed.get(buttonID)();
				}
			}
			for (buttonID in gamepadActionsOnJustPressed.keys()) {
				if (Reflect.getProperty(gamepad.justPressed, Shared.supportedButtons.get(buttonID))) {
					gamepadActionsOnJustPressed.get(buttonID)();
				}
			}
			for (buttonID in gamepadActionsOnJustReleased.keys()) {
				if (Reflect.getProperty(gamepad.justReleased, Shared.supportedButtons.get(buttonID))) {
					gamepadActionsOnJustReleased.get(buttonID)();
				}
			}
		}
		for (keyID in keyboardActionsOnPressed.keys()) {
			if (Reflect.getProperty(FlxG.keys.pressed, Shared.supportedKeys.get(keyID))) {
				keyboardActionsOnPressed.get(keyID)();
			}
		}
		for (keyID in keyboardActionsOnJustPressed.keys()) {
			if (Reflect.getProperty(FlxG.keys.justPressed, Shared.supportedKeys.get(keyID))) {
				keyboardActionsOnJustPressed.get(keyID)();
			}
		}
		for (keyID in keyboardActionsOnJustReleased.keys()) {
			if (Reflect.getProperty(FlxG.keys.justReleased, Shared.supportedKeys.get(keyID))) {
				keyboardActionsOnJustReleased.get(keyID)();
			}
		}
	}

	private function initDefaultActions() {
		// Default keyboard actions
		insertKeyboardActionOnPressed(FlxKey.W, function () { Shared.player.move(0, -1); return 0; });
		insertKeyboardActionOnPressed(FlxKey.S, function () { Shared.player.move(0, 1); return 0; });
		insertKeyboardActionOnPressed(FlxKey.A, function () { Shared.player.move(-1, 0); return 0; });
		insertKeyboardActionOnPressed(FlxKey.D, function () { Shared.player.move(1, 0); return 0; });
		insertKeyboardActionOnPressed(FlxKey.UP, function () { Shared.player.move(0, -1); return 0; });
		insertKeyboardActionOnPressed(FlxKey.DOWN, function () { Shared.player.move(0, 1); return 0; });
		insertKeyboardActionOnPressed(FlxKey.LEFT, function () { Shared.player.move(-1, 0); return 0; });
		insertKeyboardActionOnPressed(FlxKey.RIGHT, function () { Shared.player.move(1, 0); return 0; });
		insertKeyboardActionOnPressed(FlxKey.ESCAPE, function() { Sys.exit(0); return 0; });
		insertKeyboardActionOnPressed(FlxKey.SHIFT, function() { Shared.player.isRunning = true; return 0; });
		insertKeyboardActionOnJustReleased(FlxKey.SHIFT, function() { Shared.player.isRunning = false; return 0; });
		insertKeyboardActionOnPressed(FlxKey.PAGEUP, function() { if (FlxG.camera.zoom < 3.0) FlxG.camera.zoom += 0.1; return 0; });
		insertKeyboardActionOnPressed(FlxKey.PAGEDOWN, function() { if (FlxG.camera.zoom > 1.0) FlxG.camera.zoom -= 0.1; return 0; });
		// Default gamepad actions
		insertGamepadActionOnPressed(FlxGamepadInputID.LEFT_ANALOG_STICK, function() {
			Shared.player.move(gamepad.analog.value.LEFT_STICK_X, gamepad.analog.value.LEFT_STICK_Y);
			return 0;
		});
		insertGamepadActionOnPressed(FlxGamepadInputID.RIGHT_ANALOG_STICK, function() {
			trace("Right analog stick");
			return 0;
		});
		// insertGamepadActionOnPressed(FlxGamepadInputID.A, function() { Shared.player.run(); return 0; });
		insertGamepadActionOnPressed(FlxGamepadInputID.START, function() { Sys.exit(0); return 0; });
		insertGamepadActionOnJustPressed(FlxGamepadInputID.DPAD_UP, function() { trace("Hello!!"); return 0; });
		
	}
}