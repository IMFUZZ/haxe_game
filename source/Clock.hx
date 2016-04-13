package;

import flixel.util.FlxTimer;

class Clock extends FlxTimer {
    
    private var currentDay:Int = 0;  
    private var currentYear:Int = 0;
    private var daysInMonth:Int = 25;
    private var _seasons:Array<String> = ["Spring", "Summer", "Autumn", "Winter"];
    private var _timeEvent:Array<TimeEvent>;

    override public function new() {
        super();
        _timeEvent = new Array();
        start(40, _onComplete, 0);
    }

    private function _onComplete(timer:FlxTimer) {
        addDay();
    }

    public function addDay(?numberOfDays:Int = 1){
        currentDay++;
        if (currentDay >= 100) {
            currentYear++;
            currentDay = 0;
        }
    }

    override public function update(elapsed:Float) {
        super.update(elapsed);    
    }

    public function getCurrentYear():Int {
        return currentYear;
    }

    public function getCurrentSeason():String {
        return _seasons[Std.int(currentDay / 25)];
    }

    public function getCurrentDay():Int {
        return currentDay;
    }

    public function getCurrentHour():Int {
        return Std.int(progress * 24);
    }

    public function getCurrentMinute():Int {
        return Std.int((progress * 1440) - (getCurrentHour() * 60));
    }

    public function addTimeEvent(a_timeEvent:TimeEvent, a_Event:Void->Int):Int {
        return 0;
    }
}