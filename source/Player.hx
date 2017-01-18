package;

import flixel.FlxCamera;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.addons.ui.FlxUISubState;
import flixel.input.FlxInput.FlxInputState;
import characters.Character;
import items.Item;
import ui.InGameUI;
import flixel.FlxCamera;

import flixel.addons.ui.interfaces.IEventGetter;
import flixel.addons.ui.interfaces.IFlxUIWidget;

class Player implements IEventGetter {
	public var _playerIC:InputController;
	public var _characterIC:InputController;
	public var _menuIC:InputController;
	public var character:Character;
	public var UI:InGameUI;

	public function new() {
		this.initControls();
	}

	public function initUI() {
		this.UI = new InGameUI(this);
	}

	public function openSubState(key:String) {
		var state = null;
		switch (key) {
			case "worldMap":
				state = new states.WorldMapUIState(flixel.util.FlxColor.BLACK);
		}
		if (state != null) {
			FlxG.state.openSubState(state);
		} else {
			trace("Tried to open a null subState");
		}
	}

	public function setCharacter(a_character:Character) {
		this.character = a_character;
		this.character.setOwner(this);
		//this.UI.setHealthBar(this.character);
		this.UI.link(this.character);
		FlxG.camera.follow(Shared.player.character, 1);
	}

	public function initControls() {
		this._playerIC = new InputController([FlxInputState.PRESSED, FlxInputState.JUST_PRESSED, FlxInputState.JUST_RELEASED]);
		this._characterIC = new InputController([FlxInputState.PRESSED, FlxInputState.JUST_PRESSED, FlxInputState.JUST_RELEASED]);
		this._menuIC = new InputController([FlxInputState.PRESSED, FlxInputState.JUST_PRESSED, FlxInputState.JUST_RELEASED]);

		// General player control
		this._playerIC.addKeyboardEvent(FlxInputState.JUST_PRESSED, "ESCAPE", function(params:Dynamic) {
			flash.system.System.exit(0);
			return 0;
		});

		this._playerIC.addKeyboardEvent(FlxInputState.JUST_PRESSED, "T", function(params:Dynamic) {
			trace(Shared.clock.getCurrentHour());
			trace(Shared.clock.getCurrentMinute());
			return 0;
		});

		this._playerIC.addKeyboardEvent(FlxInputState.JUST_PRESSED, "Z", function(params:Dynamic) {
			FlxG.camera.shake(0.01, 0.1);
			this.character.hurt(1);
			trace(this.character.health);
			return 0;
		});

		this._playerIC.addKeyboardEvent(FlxInputState.JUST_PRESSED, "L", function(params:Dynamic) {
			this.character.body.position.x = 100;
			this.character.body.position.y = 100;
			return 0;
		});

		// Character control
		this._characterIC.addKeyboardEvent(FlxInputState.PRESSED, "W", function(params:Dynamic) {
			this.character.move(0, -1);
			return 0;
		});
		this._characterIC.addKeyboardEvent(FlxInputState.PRESSED, "S", function(params:Dynamic) {
			this.character.move(0, 1);
			return 0;
		});
		this._characterIC.addKeyboardEvent(FlxInputState.PRESSED, "A", function(params:Dynamic) {
			this.character.move(-1, 0);
			return 0;
		});
		this._characterIC.addKeyboardEvent(FlxInputState.PRESSED, "D", function(params:Dynamic) {
			this.character.move(1, 0);
			return 0;
		});
		this._characterIC.addKeyboardEvent(FlxInputState.JUST_PRESSED, "SHIFT", function(params:Dynamic) {
			this.character.isRunning = true;
			return 0;
		});
		this._characterIC.addKeyboardEvent(FlxInputState.JUST_RELEASED, "SHIFT", function(params:Dynamic) {
			this.character.isRunning = false;
			return 0;
		});
	};
	
	public function updateControls() {
		this._playerIC.updateControls(FlxG.keys, FlxG.mouse, FlxG.gamepads.firstActive);
		if (this.character != null) {
			this._characterIC.updateControls(FlxG.keys, FlxG.mouse, FlxG.gamepads.firstActive);
		}
	};

	public function update(elapsed:Float):Void {
		this.updateControls();
	} 

	public function getEvent(event:String, sender:IFlxUIWidget, data:Dynamic, ?params:Array<Dynamic>):Void {
		trace(event);
		if (Std.is(data, String)) {
			var str:String = cast(data, String);
			switch (str) {
				case "SHOW_INVENTORY": this.UI.showInventory(this.character.inventory);
			}
		}
	}

	public function getRequest(name:String, sender:IFlxUIWidget, data:Dynamic, ?params:Array<Dynamic>):Dynamic {
		// TODO : Implement a basic request system (like getEvent but return something)
		return 0;
	}
}