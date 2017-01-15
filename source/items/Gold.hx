package items;

import flixel.FlxSprite;

class Gold extends Item {
	override public function new(a_x:Float = 0, a_y:Float = 0) {
		super(a_x, a_y, 10000, "assets/images/gold.png", false, false);
		this.createCircularBody(8, nape.phys.BodyType.STATIC);
		this.body.allowRotation = false;
		this.name = "Gold";
		this.icon = new FlxSprite(0, 0, "assets/images/gold.png");
	}
}