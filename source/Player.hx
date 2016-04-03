package;

import flixel.FlxG;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.util.FlxColor;
import flixel.input.FlxInput;
import flixel.input.keyboard.FlxKey;
import flixel.addons.nape.FlxNapeSpace;
import flixel.addons.nape.FlxNapeSprite;
import nape.constraint.PivotJoint;
import nape.geom.Vec2;
import nape.phys.Material;

class Player extends FlxNapeSprite {

    private var dragJoint:PivotJoint;
    private var _movingSpeed:Int = 10;
    private var _maxSpeed:Int = 25;

    public function new(?a_x:Float=0, ?a_y:Float=0) {
        super(a_x, a_y);

        makeGraphic(32, 64, FlxColor.BLUE);

        createCircularBody(16);
        setBodyMaterial(0, 0, 0);

        body.userData.type = "player";
        body.allowRotation = false;

        dragJoint = new PivotJoint(FlxNapeSpace.space.world, null, Vec2.weak(), Vec2.weak());
        dragJoint.space = FlxNapeSpace.space;
        dragJoint.active = false;
        dragJoint.stiff = false;
    }

    public function beforeUpdate():Void {
        body.velocity.x = 0;
        body.velocity.y = 0;
        _movingSpeed = 10;
    }    

    override public function update(elapsed:Float):Void {
        super.update(elapsed);
    } 

    public function afterUpdate():Void {
        if (body.velocity.y != 0 && body.velocity.x != 0) body.velocity.normalise();
        body.velocity.x *= _movingSpeed * FlxG.elapsed * 1000;
        body.velocity.y *= _movingSpeed * FlxG.elapsed * 1000;
    }    

    public function moveUp():Int {
        if (body.velocity.y != -1) body.velocity.y--;
        return 0;
    }
    public function moveDown():Int {
        if (body.velocity.y != 1) body.velocity.y++;
        return 0;
    }
    public function moveLeft():Int {
        if (body.velocity.x != -1) body.velocity.x--;
        return 0;
    }
    public function moveRight():Int {
        if (body.velocity.x != 1) body.velocity.x++;
        return 0;
    }    
    public function run():Int {
        _movingSpeed = Std.int(1.5 * _movingSpeed);
        return 0;
    }
}