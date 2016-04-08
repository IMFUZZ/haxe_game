package;

import flixel.FlxG;

class MapGenerator {

    private var _size:Int;
    private var _displacement:Float;
    private var _valueRange:Int; 
    public var table:Array<Array<Int>>;

    public function new(a_size:Int, a_displacement:Float):Void {
        //  Must be 2^n + 1
        _size = a_size;
        _displacement = a_displacement;
        table = new Array();
    }

    public function generate():Array<Array<Int>> {
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
        var worldMap:Array<Array<Int>> = transformToValueRange(4);
        return worldMap;
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
                if ((table[y][x]) <= 0) table[y][x] = 1;
                else table[y][x] = Std.int((table[y][x]-s) / diff * a_valueRange);
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