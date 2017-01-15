package;

import flixel.input.FlxInput.FlxInputState;
import flixel.input.keyboard.FlxKeyboard;
import flixel.input.gamepad.FlxGamepad;
import flixel.input.mouse.FlxMouse;
import flixel.FlxG;

class InputController {
	
	private var _keyboardEvents:Map<Int, Map<String, Dynamic->Int>>;
	private var _mouseEvents:Map<Int, Map<String, Dynamic->Int>>;
	private var _gamepadEvents:Map<Int, Map<String, Dynamic->Int>>;

	public function new(flxInputStates:Array<FlxInputState>) {
		this._keyboardEvents = new Map();
		this._mouseEvents = new Map();
		this._gamepadEvents = new Map();
		for (flxInputState in flxInputStates) {
			this._keyboardEvents.set(cast(flxInputState, Int), new Map());	
			this._mouseEvents.set(cast(flxInputState, Int), new Map());	
			this._gamepadEvents.set(cast(flxInputState, Int), new Map());	
		}
	}

	public function addKeyboardEvent(state:FlxInputState, key:String, action:Dynamic->Int) {
		this._keyboardEvents.get(cast(state, Int)).set(key, action);
	}

	public function addMouseEvent(state:FlxInputState, button:String, action:Dynamic->Int) {
		this._mouseEvents.get(cast(state, Int)).set(button, action);
	}

	public function addGamepadEvent(state:FlxInputState, button:String, action:Dynamic->Int) {
		this._gamepadEvents.get(cast(state, Int)).set(button, action);
	}

	public function updateControls(a_keys:FlxKeyboard, a_mouse:FlxMouse, a_gamepad:FlxGamepad) {
		var stateMap;
		var action;
		for (flxInputState in this._keyboardEvents.keys()) {
			stateMap = this._keyboardEvents.get(flxInputState);
			for (key in stateMap.keys()) {
				if (a_keys.checkStatus(Shared.supportedKeys.get(key), flxInputState)) {
					stateMap.get(key)(null);
				}
			}
		}
		for (flxInputState in this._mouseEvents.keys()) {
			stateMap = this._mouseEvents.get(flxInputState);
			for (key in stateMap.keys()) {
				switch (key) {
					case "LEFTCLICK":
						switch (flxInputState) {
							case FlxInputState.PRESSED:
								if (a_mouse.pressed) {
									stateMap.get(key)(null);
								}
								break;
							case FlxInputState.JUST_PRESSED:
								if (a_mouse.justPressed) {
									stateMap.get(key)(null);
								}
								break;
							case FlxInputState.JUST_RELEASED:
								if (a_mouse.justReleased) {
									stateMap.get(key)(null);
								}
								break;
						}
						break;
					case "RIGHTCLICK":
						switch (flxInputState) {
							case FlxInputState.PRESSED:
								if (a_mouse.pressedRight) {
									stateMap.get(key)(null);
								}
								break;
							case FlxInputState.JUST_PRESSED:
								if (a_mouse.justPressedRight) {
									stateMap.get(key)(null);
								}
								break;
							case FlxInputState.JUST_RELEASED:
								if (a_mouse.justReleasedRight) {
									stateMap.get(key)(null);
								}
								break;
						}
						break;
					case "MIDDLECLICK":
						switch (flxInputState) {
							case FlxInputState.PRESSED:
								if (a_mouse.pressedMiddle) {
									stateMap.get(key)(null);
								}
								break;
							case FlxInputState.JUST_PRESSED:
								if (a_mouse.justPressedMiddle) {
									stateMap.get(key)(null);
								}
								break;
							case FlxInputState.JUST_RELEASED:
								if (a_mouse.justReleasedMiddle) {
									stateMap.get(key)(null);
								}
								break;
						}
						break;
				}		
			}
		}
		for (flxInputState in this._gamepadEvents.keys()) {
			stateMap = this._gamepadEvents.get(flxInputState);
			for (key in stateMap.keys()) {
				if (a_gamepad.checkStatus(Shared.supportedKeys.get(key), flxInputState)) {
					stateMap.get(key)(null);
				}
			}
		}
	}
}