package states;

import flixel.addons.nape.FlxNapeSpace;
import flixel.addons.nape.FlxNapeTilemap;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.math.FlxPoint;
import flixel.text.FlxText;
import flixel.tile.FlxTilemap;
import flixel.util.FlxColor;
import nape.geom.Vec2;
import nape.geom.Vec2List;
import nape.phys.Body;
import openfl.display.BlendMode;
import openfl.display.FPS;
import flixel.FlxCamera;
import flixel.math.FlxRect;
using flixel.util.FlxSpriteUtil;

class PlayState extends FlxState {

	override public function create():Void {
		super.create();

        FlxNapeSpace.init();
        Shared.init();
        FlxNapeSpace.drawDebug = true;

        add(Shared.player);
        Shared.controller.insertAction(W, Shared.player.moveUp);
        Shared.controller.insertAction(S, Shared.player.moveDown);
        Shared.controller.insertAction(A, Shared.player.moveLeft);
        Shared.controller.insertAction(D, Shared.player.moveRight);
        Shared.controller.insertAction(UP, Shared.player.moveUp);
        Shared.controller.insertAction(DOWN, Shared.player.moveDown);
        Shared.controller.insertAction(LEFT, Shared.player.moveLeft);
        Shared.controller.insertAction(RIGHT, Shared.player.moveRight);
        Shared.controller.insertAction(SHIFT, Shared.player.run);
        Shared.controller.insertAction(ESCAPE, function() { Sys.exit(0); return 0; });
	}

	override public function update(elapsed:Float):Void {
		super.update(elapsed);
        Shared.player.beforeUpdate();
        Shared.controller.update();
        Shared.player.update(elapsed);
        Shared.player.afterUpdate();
	}
}
