package debug;

class CustomError {
	
	private var _errors:Map<Int, String> = [
		0 => "No error",
		1 => "Undefined error",
		2 => "Custom error"
	]; 

	static function trace(a_errorCode):Void {
		if (_errors.exists(a_errorCode)) {
			trace(Date.now() + " : ");
			trace("Error code : " + Std.string(a_errorCode) + "\n");
			trace("Error message -> " + _errors.get(a_errorCode) + "\n"); 
		} else {
			trace("\nUNDEFINED --- The error code received does not exists in the list of custom errors!\n");
		}
		
	}

	// DEFINE HOW TO ADD NEW CUSTOM ERRORS
	// static function insertErrorType():Void {
	//     _errors.set();
	// }
}