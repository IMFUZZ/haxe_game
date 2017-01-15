package world;

import flixel.FlxG;
import flixel.FlxSprite;
using flixel.util.FlxSpriteUtil;
import flixel.system.FlxAssets;
import flash.display.BitmapData;
import flixel.group.FlxGroup;

class WorldMap extends FlxGroup {

	public var bitmap:BitmapData;
	public var map:FlxSprite;

	override public function new(a_x:Float = 0, a_y:Float = 0, a_bitmapData:BitmapData) {
		super();
		this.map = new FlxSprite(a_x, a_y, a_bitmapData);
		this.bitmap = a_bitmapData;
	}

	public function addCharacterLocation(a_character:characters.Character) {
		var locationDot = new FlxSprite(a_character.x, a_character.y);
		locationDot.makeGraphic(1, 1, 0xFF0000FF);
		add(locationDot);
	}
}