package world;

import flixel.addons.nape.FlxNapeSprite;
import flixel.FlxG;
import openfl.display.BlendMode;
import flixel.util.FlxColor;
import flixel.FlxSprite;
using flixel.util.FlxSpriteUtil;

class Darkness extends FlxSprite {
    
    private var _lightSources:Array<FlxSprite> = new Array();
    private var _dayCycleCos:Float = 0;
    private var _dayColor:FlxColor = FlxColor.WHITE;
    private var _nightColor:FlxColor = FlxColor.BLUE;


    override public function new(?a_x:Float=0, ?a_y:Float=0) {
        super(a_x, a_y);
        _lightSources.push(new FlxSprite(0, 0, "assets/images/light.png"));
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
        if (Std.int(Shared.clock.progress*100)%2 == 0) {
            _dayCycleCos = Math.abs(Math.cos(Shared.clock.progress*Math.PI));
            _dayColor = FlxColor.WHITE.getDarkened(Math.pow(_dayCycleCos, 3));
            _nightColor = FlxColor.BLUE.getDarkened(1-Math.pow(_dayCycleCos, 3));
        }
        this.fill(FlxColor.add(_nightColor, _dayColor));
        if (_dayCycleCos > 0.75) {
            this.stampLightSources(elapsed);
        }
    }

    private function stampLightSources(elapsed) {
        for (_light in _lightSources) {
            _light.update(elapsed);
            this.stamp(_light, Std.int(_light.x - FlxG.camera.scroll.x), Std.int(_light.y - FlxG.camera.scroll.y));
        }
    }
}