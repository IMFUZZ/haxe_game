package;

import neko.Random;
import flixel.FlxCamera;

class Map {

    private var random:Random;

    private var _size:Int;
    private var _displacement:Float;
    private var _valueRange:Int; 
    public var table:Array<Array<Int>>;

    public function new(a_size:Int, a_displacement:Float) {
        //  Must be 2^n + 1
        _size = a_size;
        _displacement = a_displacement;
        table = new Array();
        random = new Random();
    }

    public function generate(a_seed:Int):Void {
        clear();
        random.setSeed(a_seed);
        table[0][0] = random.float();
        table[0][_size-1] = random.float();
        table[_size-1][0] = random.float();
        table[_size-1][_size-1] = random.float();
        table = divide(table, 0, 0, _size-1, _size-1, _displacement)
        for (x in 0..._size) {
            table.append(new Array());
            for y in range(0, _size) {
                table[x].append("");
            }
        }
        transformToValueRange(255);
    }

    public function clear():Void {
        trace(table.length);
        #if (cpp||php)
            table.splice(0, table.length);
        #else
            untyped table.length = 0;
        #end
        trace(table.length);
    }

    private function divide(a_table:Array<Array<Int>>, x1:Int, y1:Int, x2:Int, y2:Int, a_displacement:Float):Void {
        var diffX = x2 - x1;
        var diffY = y2 - y1;
        var cx = Std.Int(x1+diffX/2);
        var cy = Std.Int(y1+diffY/2);
        var d2 = a_displacement/2;
        if (diffX > 1) {
            a_table[cy][cx] = (a_table[y1][x1] + a_table[y2][x2] + a_table[y1][x2] + a_table[y2][x1])/4 + random.float() * a_displacement - d2;
            if (a_table[y1][cx] == "") { 
                a_table[y1][cx] = (a_table[y1][x1] + a_table[y1][x2])/2 + random.float() * a_displacement - d2; 
            }
            if (a_table[y2][cx] == "") { 
                a_table[y2][cx] = (a_table[y2][x1] + a_table[y2][x2])/2 + random.float() * a_displacement - d2; 
            }
            if (a_table[cy][x1] == "") { 
                a_table[cy][x1] = (a_table[y1][x1] + a_table[y2][x1])/2 + random.float() * a_displacement - d2; 
            }
            if (a_table[cy][x2] == "") { 
                a_table[cy][x2] = (a_table[y1][x2] + a_table[y2][x2])/2 + random.float() * a_displacement - d2; 
            }
            var new_displacement = a_displacement/_displacement;
            a_table = divide(a_table, x1, y1, cx, cy, new_displacement);
            a_table = divide(a_table, cx, y1, x2, cy, new_displacement);
            a_table = divide(a_table, x1, cy, cx, y2, new_displacement);
            a_table = divide(a_table, cx, cy, x2, y2, new_displacement);
        }
        return a_table;
    } 

    public function transformToValueRange(a_valueRange:Int) {
        s = null;
        b = null;
        for (y in 0...table.length) {
            for (x in 0...table[y].length){
                if (s == null || table[y][x] < s){
                    s = table[y][x];
                }
                if (b == null || table[y][x] > b) {
                    b = table[y][x];
                }
            }
        }
    }

    public function getViewable(a_camera:FlxCamera, tileSize:Int):Array<Array<Int>> {
        var indexAStart = Std.Int((a_camera.x / tileSize) * a_camera.zoom);
        var indexAEnd   = Std.Int(((a_camera.x + a_camera.width) / tileSize) * a_camera.zoom);
        var indexBStart = Std.Int((a_camera.y / tileSize) * a_camera.zoom);
        var indexBEnd   = Std.Int(((a_camera.y + a_camera.height) / tileSize) * a_camera.zoom);
        var tempTable   = new Array();
        for (y in indexBStart...indexBEnd) {
            tempTable.append(new Array());
            for (x in indexAStart...indexAEnd) {
                tempTable[y].append(table[y][x]);
            }
        }
        return tempTable;
}