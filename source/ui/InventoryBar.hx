package ui;

import flixel.addons.ui.*;
import flixel.FlxSprite;
import flixel.util.FlxAxes;
import flixel.input.mouse.FlxMouseEventManager;
import flixel.system.FlxAssets;

class InventoryBar extends FlxUISprite {
	
	public var originalImage:FlxGraphicAsset;

	override public function new(x:Float = 0, y:Float = 0, ?simpleGraphic:Dynamic) {
		super(x, y, simpleGraphic);
		this.originalImage = simpleGraphic;
		this.screenCenter(FlxAxes.X);
		FlxMouseEventManager.add(this, onMouseDown, onMouseUp, onMouseOver, onMouseOut); 
	}

	override public function update(elapsed:Float) {
		super.update(elapsed);
		var inventory = Shared.player.character.inventory;
		if (inventory != null) {
			for (x in 0...inventory.items.length) {
				var item = inventory.items[x];
				if (item != null) {
					this.stamp(item.icon, (x*34)+1, 1);
					this.stamp(new FlxUIText((x*34)+1, 1, /*FieldWidth:Float = */34, ""+item.quantity, /*Size:Int = */16), (x*34)+1, 1);
				}
			}
		}
	}

	public function onMouseDown(sprite:FlxSprite) {
			
	}

	public function onMouseUp(sprite:FlxSprite) {
		
	}

	public function onMouseOver(sprite:FlxSprite) {
		
	}

	public function onMouseOut(sprite:FlxSprite) {
		
	}
}