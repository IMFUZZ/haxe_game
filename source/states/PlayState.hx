package states;

import flixel.addons.nape.FlxNapeSpace;
import flixel.addons.nape.FlxNapeTilemap;
import flixel.FlxG;
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
import flixel.util.FlxTimer;
import flixel.FlxSprite;

class PlayState extends FlxState {

	private var _tileSelected:FlxSprite;
	private var _shadowLayer:FlxSprite;
	public var testLight:FlxSprite;
	private var _tilemap:FlxNapeTilemap;
	private var _mapGenerator:MapGenerator;
	private var _worldMap:Array<Array<Int>>;

	override public function create():Void {
		super.create();
		_init();
		_mapGenerator = new MapGenerator(10, 1.4);
		_worldMap = _mapGenerator.generate();
		_tilemap = new FlxNapeTilemap();
		_tilemap.loadMapFrom2DArray(_worldMap, "assets/images/tilemap.png", 16, 16);
		add(_tilemap);

		_tileSelected = new FlxSprite(0, 0);
		_tileSelected.makeGraphic(Shared.TILE_WIDTH, Shared.TILE_HEIGHT, FlxColor.TRANSPARENT);
		FlxSpriteUtil.drawRect(_tileSelected, 0, 0, Shared.TILE_WIDTH - 1, Shared.TILE_HEIGHT - 1, FlxColor.TRANSPARENT, { thickness: 1, color: FlxColor.RED });
		add(_tileSelected);

		add(Shared.player.sprite);
		add(Shared.darkness);

		FlxG.camera.follow(Shared.player.sprite, 1);
	}

	override public function update(elapsed:Float):Void {
		super.update(elapsed);

		Shared.clock.update(elapsed);
		Shared.player.beforeUpdate();
		Shared.controller.update();

		_tileSelected.x = Math.floor(FlxG.mouse.x / Shared.TILE_WIDTH) * Shared.TILE_WIDTH;
		_tileSelected.y = Math.floor(FlxG.mouse.y / Shared.TILE_HEIGHT) * Shared.TILE_HEIGHT;

		Shared.player.update(elapsed);
		Shared.player.afterUpdate();
		Shared.darkness.update(elapsed);
	}

	private function _init() {
		FlxNapeSpace.init();
		FlxNapeSpace.drawDebug = true;
		Shared.init();
		FlxG.camera.zoom = 1.5;
		FlxG.camera.antialiasing = false;
	}

}
