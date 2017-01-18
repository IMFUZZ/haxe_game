package world;

import flixel.FlxG;
import sys.io.File;
import sys.FileSystem;
import nape.geom.Vec2;
import flixel.addons.nape.FlxNapeTilemap;
import flash.display.BitmapData;
import flash.utils.ByteArray;
import sys.io.FileOutput;
import world.WorldMap;


class MapGenerator {

    private var _size:Int;
    private var _displacement:Float = 1.4;
    private var _valueRange:Int; 
    public var table:Array<Array<Int>>;
    public var spawnPoint:Vec2;
    public var worldMapTileMap:WorldTilemap;
    public var worldMap:WorldMap;

    public function new():Void {
        spawnPoint = new Vec2(-1, -1);
        table = new Array();
    }

    public function generate(a_size:Int, tileFilePath:String):WorldTilemap {
        // Must be 2^n + 1
        _size = Std.int(Math.pow(2, a_size)+1);
        clear();
        for (x in 0..._size) {
            table.push(new Array());
            for (y in 0..._size) {
                table[x].push(-1);
            }
        }
        table[0][0] = Std.int(Math.random());
        table[0][_size-1] = Std.int(Math.random());
        table[_size-1][0] = Std.int(Math.random());
        table[_size-1][_size-1] = Std.int(Math.random());
        table = divide(table, 0, 0, _size-1, _size-1, _displacement);
        table = transformToValueRange(8);

        this.generateTileMap(tileFilePath);
        this.generateWorldMapBitmap();
        this.saveWorldMap("txt", table);
        this.saveWorldMap("png", table);

        return worldMapTileMap;
    }

    public function getWorldMap():WorldMap {
        return worldMap;
    }

    public function generateTileMap(tileFilePath:String) {
        worldMapTileMap = new WorldTilemap();
        worldMapTileMap.loadMapFrom2DArray(table, tileFilePath, Shared.TILE_WIDTH, Shared.TILE_HEIGHT);
        /*worldMapTileMap.setupCollideIndex(8);
        worldMapTileMap.setupCollideIndex(7);*/
    }

    public function saveWorldMap(format:String, table:Array<Array<Int>>) {
        var file = null;
        switch (format) {
            case "png":
                var b:ByteArray = worldMap.bitmap.encode("png", 1);
                file = File.write("assets/images/worldMap.png", true);
                file.writeString(b.toString());
                file.close();
            case "txt":        
            default:
                FileSystem.createDirectory("save");
                file = File.write("save/world.txt", false);
                file.writeString(StringTools.replace(table.toString(), "],", "],\n"));
                file.close();
        }        
    }

    public function generateWorldMapBitmap() {
        var maxSize = (FlxG.bitmap.maxTextureSize <= _size) ? FlxG.bitmap.maxTextureSize : _size;
        var worldMapBitmap:BitmapData = new BitmapData(maxSize, maxSize, false, 0x00FF00);
        for (x in 0...maxSize) {
            for (y in 0...maxSize) {
                var color = 0x000000;
                switch(table[y][x]) {
                    case 1: color = 0x0653e3;
                    case 2: color = 0x4ea1ed;
                    case 3: color = 0xda9c38;
                    case 4: color = 0x4cab2a;
                    case 5: color = 0x2d7114;
                    case 6: color = 0x747574;
                    case 7: color = 0xd0d0d0;
                    case 8: color = 0xf7f7f7;
                    default: color = 0x000000;
                }
                worldMapBitmap.setPixel(x, y, color);
            }
        }
        worldMap = new WorldMap(0, 0, worldMapBitmap);
    }

    public function clear():Void {
        #if (cpp||php)
            table.splice(0, table.length);
        #else
            untyped table.length = 0;
        #end
    }

    private function divide(a_table:Array<Array<Int>>, x1:Int, y1:Int, x2:Int, y2:Int, a_displacement:Float):Array<Array<Int>> {
        var diffX = x2 - x1;
        var diffY = y2 - y1;
        var cx = Std.int(x1+diffX/2);
        var cy = Std.int(y1+diffY/2);
        var d2 = a_displacement/2;
        if (diffX > 1) {
            a_table[cy][cx] = Std.int((a_table[y1][x1] + a_table[y2][x2] + a_table[y1][x2] + a_table[y2][x1])/4 + (Math.random()*10) * a_displacement - d2);
            if (a_table[y1][cx] == -1) { 
                a_table[y1][cx] = Std.int((a_table[y1][x1] + a_table[y1][x2])/2 + (Math.random()*10) * a_displacement - d2); 
            }
            if (a_table[y2][cx] == -1) { 
                a_table[y2][cx] = Std.int((a_table[y2][x1] + a_table[y2][x2])/2 + (Math.random()*10) * a_displacement - d2); 
            }
            if (a_table[cy][x1] == -1) { 
                a_table[cy][x1] = Std.int((a_table[y1][x1] + a_table[y2][x1])/2 + (Math.random()*10) * a_displacement - d2); 
            }
            if (a_table[cy][x2] == -1) { 
                a_table[cy][x2] = Std.int((a_table[y1][x2] + a_table[y2][x2])/2 + (Math.random()*10) * a_displacement - d2); 
            }
            var new_displacement = a_displacement/_displacement;
            a_table = divide(a_table, x1, y1, cx, cy, new_displacement);
            a_table = divide(a_table, cx, y1, x2, cy, new_displacement);
            a_table = divide(a_table, x1, cy, cx, y2, new_displacement);
            a_table = divide(a_table, cx, cy, x2, y2, new_displacement);
        }
        return a_table;
    } 

    public function transformToValueRange(a_valueRange:Int):Array<Array<Int>> {
        var s = -1;
        var b = -1;
        for (y in 0...table.length) {
            for (x in 0...table[y].length){
                if (s == -1 || table[y][x] < s){
                    s = table[y][x];
                }
                if (b == -1 || table[y][x] > b) {
                    b = table[y][x];
                }
            }
        }
        var diff = b-s;
        for (y in 0...table.length) {
            for (x in 0...table[y].length) {
                table[y][x] = Std.int((table[y][x]-s) / diff * a_valueRange);
                if (table[y][x] == 0) { table[y][x] = 1; }
                if ((spawnPoint.x == -1) && (spawnPoint.y == -1) && (x > _size / 3) && (y > _size / 3) && (table[y][x] == 4)) {
                    spawnPoint.x = x * Shared.TILE_WIDTH;
                    spawnPoint.y = y * Shared.TILE_HEIGHT;
                }
            }
        }
        return table;
    }

    public function getViewable(tileSize:Int):Array<Array<Int>> {
        var indexAStart:Int = Std.int((FlxG.camera.x / Shared.TILE_WIDTH) * FlxG.camera.zoom);
        var indexAEnd:Int   = Std.int(((FlxG.camera.x + FlxG.camera.width) / Shared.TILE_WIDTH) * FlxG.camera.zoom);
        var indexBStart:Int = Std.int((FlxG.camera.y / Shared.TILE_HEIGHT) * FlxG.camera.zoom);
        var indexBEnd:Int   = Std.int(((FlxG.camera.y + FlxG.camera.height) / Shared.TILE_HEIGHT) * FlxG.camera.zoom);
        var tempTable:Array<Array<Int>>   = new Array();
        for (y in indexBStart...indexBEnd) {
            tempTable.push(new Array());
            for (x in indexAStart...indexAEnd) {
                tempTable[y].push(table[y][x]);
            }
        }
        return tempTable;
    }
}