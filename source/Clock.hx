package;

import flixel.util.FlxTimer;

class Clock extends FlxTimer {
    
    private var daysInMonth:Int = 25;
    private var _months:Array<String> = ["Spring", "Summer", "Autumn", "Winter"];
    private var _dayStates:Map<Float, String> = [
        2.0   => "Morning",
        12.0  => "Afternoon", 
        18.0  => "Evening",
        22.0  => "Night" 
    ]; // ----- Id, StartTime?? -----

    public function new() {
        super();

    }

    public function getYear() {

    }

    public function getCurrentSeason() {
        
    }

    public function getDay() {
        
    }

    public function getHours() {
        
    }

    public function getMinute() {
        
    }

    public function getSeconds() {
        
    }
}