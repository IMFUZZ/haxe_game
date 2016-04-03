package;

import flixel.input.FlxBaseKeyList;

class Shared {

    public static var controller:CustomController; 
    public static var player:Player;
    public static var supportedKeys:Map<Int, String> = [
        -2  => "ANY",
        -1  => "NONE",
        65  => "A",
        66  => "B",
        67  => "C",
        68  => "D",
        69  => "E",
        70  => "F",
        71  => "G",
        72  => "H",
        73  => "I",
        74  => "J",
        75  => "K",
        76  => "L",
        77  => "M",
        78  => "N",
        79  => "O",
        80  => "P",
        81  => "Q",
        82  => "R",
        83  => "S",
        84  => "T",
        85  => "U",
        86  => "V",
        87  => "W",
        88  => "X",
        89  => "Y",
        90  => "Z",
        48  => "ZERO",
        49  => "ONE",
        50  => "TWO",
        51  => "THREE",
        52  => "FOUR",
        53  => "FIVE",
        54  => "SIX",
        55  => "SEVEN",
        56  => "EIGHT",
        57  => "NINE",
        33  => "PAGEUP",
        34  => "PAGEDOWN",
        36  => "HOME",
        35  => "END",
        45  => "INSERT",
        27  => "ESCAPE",
        189 => "MINUS",
        187 => "PLUS",
        46  => "DELETE",
        8   => "BACKSPACE",
        219 => "LBRACKET",
        221 => "RBRACKET",
        220 => "BACKSLASH",
        20  => "CAPSLOCK",
        186 => "SEMICOLON",
        222 => "QUOTE",
        13  => "ENTER",
        16  => "SHIFT",
        188 => "COMMA",
        190 => "PERIOD",
        191 => "SLASH",
        192 => "GRAVEACCENT",
        17  => "CONTROL",
        18  => "ALT",
        32  => "SPACE",
        38  => "UP",
        40  => "DOWN",
        37  => "LEFT",
        39  => "RIGHT",
        9   => "TAB",
        301 => "PRINTSCREEN",
        112 => "F1",
        113 => "F2",
        114 => "F3",
        115 => "F4",
        116 => "F5",
        117 => "F6",
        118 => "F7",
        119 => "F8",
        120 => "F9",
        121 => "F10",
        122 => "F11",
        123 => "F12",
        96  => "NUMPADZERO",
        97  => "NUMPADONE",
        98  => "NUMPADTWO",
        99  => "NUMPADTHREE",
        100 => "NUMPADFOUR",
        101 => "NUMPADFIVE",
        102 => "NUMPADSIX",
        103 => "NUMPADSEVEN",
        104 => "NUMPADEIGHT",
        105 => "NUMPADNINE",
        109 => "NUMPADMINUS",
        107 => "NUMPADPLUS",
        110 => "NUMPADPERIOD",
        106 => "NUMPADMULTIPLY" 
    ];

    public static function init() {
        controller = new CustomController(); 
        player = new Player(100, 100);
    }
}