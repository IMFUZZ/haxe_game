package gametime;

import flixel.util.FlxTimer;

class Clock extends FlxTimer {
    
    private var _secondsInADay:Int = 1000;
    private var currentDay:Int = 0;  
    private var currentYear:Int = 0; 
    private var currentMonth:Int = 0;
    private var _daysInMonth:Int = 25;
    private var _monthsInYear:Int = 12;
    private var _seasons:Array<String> = ["Spring", "Summer", "Autumn", "Winter"];

    override public function new() {
        super();
    }

    public function startTime() {
        super.start(this._secondsInADay, this._onComplete, 0);
    }

    private function _onComplete(timer:FlxTimer) {
        this.addDays(1);
    }

    public function addDays(numberOfDays:Int){
        this.currentDay += numberOfDays;
        if (this.currentDay%this._daysInMonth == 0) {
            this.currentMonth += Std.int(this.currentDay/this._daysInMonth)%this._monthsInYear;
            if (this.currentMonth%this._monthsInYear == 0) {
                this.currentYear += Std.int(this.currentDay/(this._daysInMonth*this._monthsInYear));
                this.currentDay = this.currentDay%(this._daysInMonth*this._monthsInYear);
            }
        }
    }

    override public function update(elapsed:Float) {
        super.update(elapsed);
    }

    public function getCurrentYear():Int {
        return this.currentYear;
    }

    public function getCurrentMonth():Int {
        return this.currentMonth;
    }

    public function getCurrentSeason():String {
        return this._seasons[Std.int(this.currentDay / (this._daysInMonth*this._monthsInYear)/this._seasons.length)];
    }

    public function getCurrentDay():Int {
        return this.currentDay;
    }

    public function getCurrentHour():Int {
        return Std.int(this.progress * 24);
    }

    public function getCurrentMinute():Int {
        return Std.int((this.progress * 1440) - (this.getCurrentHour() * 60));
    }

    public function createTimeStamp():TimeStamp {
        return new TimeStamp(this);
    }
}