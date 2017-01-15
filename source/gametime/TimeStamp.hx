package gametime;

class TimeStamp {

	public var hours:Int;
	public var minutes:Int;
	public var day:Int;
	public var month:Int;
	public var year:Int;
	
	public function new(clock:Clock) {
		this.hours = clock.getCurrentHour();
		this.minutes = clock.getCurrentMinute();
		this.day = clock.getCurrentDay();
		this.year = clock.getCurrentYear();
	}
}