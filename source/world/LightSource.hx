package world;

import flixel.addons.nape.FlxNapeSprite;

class LightSource extends FlxNapeSprite {
    
    public var lightOverlay:FlxNapeSprite;

    override public function new(a_lightOverlay:FlxNapeSprite, a_image:FlxNapeSprite, ?a_x:Float=0, ?a_y:Float=0) {
        super(a_x, a_y);

        Shared.darkness.addLightSource(a_lightOverlay);
    }

    override public function update(elapsed:Float):Void {
        super.update(elapsed);
    } 

}