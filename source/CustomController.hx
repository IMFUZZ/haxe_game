package;

import flixel.FlxG;
import flixel.input.FlxInput;
import flixel.input.keyboard.FlxKey;
import flixel.input.gamepad.FlxGamepad;

class CustomController {

    public var pressedKeysActions:Map<Int, Void->Int>;
    public var gamepad:FlxGamepad;

    public function new() {
        pressedKeysActions = new Map();
    }

    public function insertAction(a_actionKey:FlxKey, a_action:Void->Int) {
        pressedKeysActions.set(a_actionKey, a_action);
    }

    public function update() {
        
        gamepad = FlxG.gamepads.firstActive;
        if (gamepad != null) {
            var pressed = gamepad.pressed;
            // trace(gamepad.analog.value.LEFT_STICK_X);
            // trace(gamepad.analog.value.LEFT_STICK_Y);
        }
        for (keyID in pressedKeysActions.keys()) {
            if (Reflect.getProperty(FlxG.keys.pressed, Shared.supportedKeys.get(keyID))) {
                pressedKeysActions.get(keyID)();
            }
        }
    }
}