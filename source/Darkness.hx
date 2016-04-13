package;

import flixel.addons.nape.FlxNapeSprite;
import flixel.FlxG;
import openfl.display.BlendMode;
import flixel.util.FlxColor;
import flixel.FlxSprite;
using flixel.util.FlxSpriteUtil;

class Darkness extends FlxSprite {
    
    private var _lightSources:Array<FlxSprite>;

    override public function new(?a_x:Float=0, ?a_y:Float=0) {
        super(a_x, a_y);

        _lightSources = new Array();
        this.makeGraphic(FlxG.camera.width, FlxG.camera.height, FlxColor.BLACK);
        this.blend = BlendMode.MULTIPLY;
        this.scrollFactor.x = 0;
        this.scrollFactor.y = 0;
    }

    override public function update(elapsed:Float):Void {
        super.update(elapsed);
        this.updateLightSources(elapsed);
    } 

    public function addLightSource(a_lightSource:FlxSprite):Void {
        _lightSources.push(a_lightSource);
    }

    public function updateLightSources(elapsed):Void {
        if (Shared.clock.progress > 0.15 && Shared.clock.progress < 0.50) {
            this.fill(FlxColor.WHITE.getDarkened(1.0 - ((Shared.clock.progress-0.15) * 4.25)));
            this.stampLightSources(elapsed);
        } else if (Shared.clock.progress < 0.15) {
            this.fill(FlxColor.BLACK);
            this.stampLightSources(elapsed);
        } else if (Shared.clock.progress > 0.75) {
            this.fill(FlxColor.WHITE.getDarkened((Shared.clock.progress - 0.75) * 4.25));
            this.stampLightSources(elapsed);
        } else {
            this.fill(FlxColor.WHITE);
        }
    }

    private function stampLightSources(elapsed) {
        for (_light in _lightSources) {
            _light.update(elapsed);
            this.stamp(_light, Std.int(_light.x - FlxG.camera.scroll.x), Std.int(_light.y - FlxG.camera.scroll.y));
        }
    }
}