package ui;

import flixel.addons.ui.*;
import flixel.FlxG;
import haxe.xml.Fast;
import flixel.util.FlxAxes;
import characters.Character;

class InGameUI extends FlxUI {

	private var healthBar:FlxUIBar;
	private var inventoryButton:FlxUIButton;
	private var inventoryBar:InventoryBar;
	public var mainTextBox:FlxUIText;

	public function new(player:Player) {
		super(null/*U.xml("InGame")*/, player);
		
		// Remove the scroll factor so it follows the camera
		this.scrollFactor.x = 0;
		this.scrollFactor.y = 0;


		// Show inventory button
		this.inventoryButton = new FlxUIButton(100, 100, "Inventory", function() {
			this.callEvent("ONCLICK", this, "SHOW_INVENTORY");
		});

		// Inventory bar
		this.inventoryBar = new InventoryBar(0, FlxG.camera.height-34, "assets/images/inventoryBar.png");

		// Text box currently showing the time
		this.mainTextBox = new FlxUIText(
			/*X:Float = */FlxG.camera.width-150, 
			/*Y:Float = */10, 
			/*FieldWidth:Float = */150, 
			/*?Text:String*/"", 
			/*Size:Int = */20);
		this.setHealthBar(player.character);

		this.add(this.inventoryButton);
		this.add(this.inventoryBar);
		this.add(this.mainTextBox);
	}

	override public function update(elapsed:Float) {
		super.update(elapsed);
		
		// Updating the time
		this.mainTextBox.text = "Time : " + Shared.clock.getCurrentHour() + ":" + Shared.clock.getCurrentMinute();
	}

	public function link(character:characters.Character) {
		// Inventory bar
		this.inventoryBar.destroy();
		this.inventoryBar = new InventoryBar(0, FlxG.camera.height-34, "assets/images/inventoryBar.png");
		this.add(this.inventoryBar);

		this.setHealthBar(character);
	}

	public function setHealthBar(character:Character) {
		if (this.healthBar == null) {
			this.healthBar = new FlxUIBar(0, FlxG.camera.height-10, null, 100, 10, character, "health", 0, 100);
			this.add(this.healthBar);
		} else {
			this.healthBar.setParent(character, "health");	
		}
	}

	public function showInventory(inventory:items.Inventory) {
		trace("Size of inventory : ");
		trace(inventory.getSize());
	}
}