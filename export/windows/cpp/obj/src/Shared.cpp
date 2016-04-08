#include <hxcpp.h>

#ifndef INCLUDED_CustomController
#include <CustomController.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Shared
#include <Shared.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_nape_FlxNapeSprite
#include <flixel/addons/nape/FlxNapeSprite.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif

Void Shared_obj::__construct()
{
	return null();
}

//Shared_obj::~Shared_obj() { }

Dynamic Shared_obj::__CreateEmpty() { return  new Shared_obj; }
hx::ObjectPtr< Shared_obj > Shared_obj::__new()
{  hx::ObjectPtr< Shared_obj > _result_ = new Shared_obj();
	_result_->__construct();
	return _result_;}

Dynamic Shared_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Shared_obj > _result_ = new Shared_obj();
	_result_->__construct();
	return _result_;}

int Shared_obj::TILE_WIDTH;

int Shared_obj::TILE_HEIGHT;

::Player Shared_obj::player;

::CustomController Shared_obj::controller;

::haxe::ds::IntMap Shared_obj::supportedKeys;

::haxe::ds::IntMap Shared_obj::supportedButtons;

Void Shared_obj::init( ){
{
		HX_STACK_FRAME("Shared","init",0x721eed59,"Shared.init","Shared.hx",146,0x60c9b919)
		HX_STACK_LINE(147)
		::Player tmp = ::Player_obj::__new((int)100,(int)100);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(147)
		::Shared_obj::player = tmp;
		HX_STACK_LINE(148)
		::CustomController tmp1 = ::CustomController_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(148)
		::Shared_obj::controller = tmp1;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Shared_obj,init,(void))


Shared_obj::Shared_obj()
{
}

bool Shared_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { outValue = player; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"controller") ) { outValue = controller; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"supportedKeys") ) { outValue = supportedKeys; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"supportedButtons") ) { outValue = supportedButtons; return true;  }
	}
	return false;
}

bool Shared_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=ioValue.Cast< ::Player >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"controller") ) { controller=ioValue.Cast< ::CustomController >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"supportedKeys") ) { supportedKeys=ioValue.Cast< ::haxe::ds::IntMap >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"supportedButtons") ) { supportedButtons=ioValue.Cast< ::haxe::ds::IntMap >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Shared_obj::TILE_WIDTH,HX_HCSTRING("TILE_WIDTH","\xd5","\x5e","\xc1","\xb3")},
	{hx::fsInt,(void *) &Shared_obj::TILE_HEIGHT,HX_HCSTRING("TILE_HEIGHT","\x18","\x14","\xc1","\x4b")},
	{hx::fsObject /*::Player*/ ,(void *) &Shared_obj::player,HX_HCSTRING("player","\x61","\xeb","\xb8","\x37")},
	{hx::fsObject /*::CustomController*/ ,(void *) &Shared_obj::controller,HX_HCSTRING("controller","\x9c","\x98","\xbe","\x04")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(void *) &Shared_obj::supportedKeys,HX_HCSTRING("supportedKeys","\x42","\x83","\xb3","\xd2")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(void *) &Shared_obj::supportedButtons,HX_HCSTRING("supportedButtons","\xb3","\xf5","\x31","\x71")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shared_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Shared_obj::TILE_WIDTH,"TILE_WIDTH");
	HX_MARK_MEMBER_NAME(Shared_obj::TILE_HEIGHT,"TILE_HEIGHT");
	HX_MARK_MEMBER_NAME(Shared_obj::player,"player");
	HX_MARK_MEMBER_NAME(Shared_obj::controller,"controller");
	HX_MARK_MEMBER_NAME(Shared_obj::supportedKeys,"supportedKeys");
	HX_MARK_MEMBER_NAME(Shared_obj::supportedButtons,"supportedButtons");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shared_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Shared_obj::TILE_WIDTH,"TILE_WIDTH");
	HX_VISIT_MEMBER_NAME(Shared_obj::TILE_HEIGHT,"TILE_HEIGHT");
	HX_VISIT_MEMBER_NAME(Shared_obj::player,"player");
	HX_VISIT_MEMBER_NAME(Shared_obj::controller,"controller");
	HX_VISIT_MEMBER_NAME(Shared_obj::supportedKeys,"supportedKeys");
	HX_VISIT_MEMBER_NAME(Shared_obj::supportedButtons,"supportedButtons");
};

#endif

hx::Class Shared_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("TILE_WIDTH","\xd5","\x5e","\xc1","\xb3"),
	HX_HCSTRING("TILE_HEIGHT","\x18","\x14","\xc1","\x4b"),
	HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),
	HX_HCSTRING("controller","\x9c","\x98","\xbe","\x04"),
	HX_HCSTRING("supportedKeys","\x42","\x83","\xb3","\xd2"),
	HX_HCSTRING("supportedButtons","\xb3","\xf5","\x31","\x71"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	::String(null()) };

void Shared_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Shared","\xc5","\xd2","\xbf","\x51");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Shared_obj::__GetStatic;
	__mClass->mSetStaticField = &Shared_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Shared_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void Shared_obj::__boot()
{
	TILE_WIDTH= (int)16;
	TILE_HEIGHT= (int)16;
struct _Function_0_1{
	inline static ::haxe::ds::IntMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Shared.hx",10,0x60c9b919)
		{
			HX_STACK_LINE(10)
			::haxe::ds::IntMap tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(10)
			{
				HX_STACK_LINE(10)
				::haxe::ds::IntMap tmp1 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(10)
				::haxe::ds::IntMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(10)
				tmp = tmp2;
			}
			HX_STACK_LINE(10)
			::haxe::ds::IntMap _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(10)
			_g->set((int)-2,HX_HCSTRING("ANY","\xcc","\x96","\x31","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)-1,HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"));
			HX_STACK_LINE(10)
			_g->set((int)65,HX_HCSTRING("A","\x41","\x00","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)66,HX_HCSTRING("B","\x42","\x00","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)67,HX_HCSTRING("C","\x43","\x00","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)68,HX_HCSTRING("D","\x44","\x00","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)69,HX_HCSTRING("E","\x45","\x00","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)70,HX_HCSTRING("F","\x46","\x00","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)71,HX_HCSTRING("G","\x47","\x00","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)72,HX_HCSTRING("H","\x48","\x00","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)73,HX_HCSTRING("I","\x49","\x00","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)74,HX_HCSTRING("J","\x4a","\x00","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)75,HX_HCSTRING("K","\x4b","\x00","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)76,HX_HCSTRING("L","\x4c","\x00","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)77,HX_HCSTRING("M","\x4d","\x00","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)78,HX_HCSTRING("N","\x4e","\x00","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)79,HX_HCSTRING("O","\x4f","\x00","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)80,HX_HCSTRING("P","\x50","\x00","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)81,HX_HCSTRING("Q","\x51","\x00","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)82,HX_HCSTRING("R","\x52","\x00","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)83,HX_HCSTRING("S","\x53","\x00","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)84,HX_HCSTRING("T","\x54","\x00","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)85,HX_HCSTRING("U","\x55","\x00","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)86,HX_HCSTRING("V","\x56","\x00","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)87,HX_HCSTRING("W","\x57","\x00","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)88,HX_HCSTRING("X","\x58","\x00","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)89,HX_HCSTRING("Y","\x59","\x00","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)90,HX_HCSTRING("Z","\x5a","\x00","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)48,HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b"));
			HX_STACK_LINE(10)
			_g->set((int)49,HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)50,HX_HCSTRING("TWO","\x6c","\x09","\x40","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)51,HX_HCSTRING("THREE","\x3e","\x8c","\x7e","\x8d"));
			HX_STACK_LINE(10)
			_g->set((int)52,HX_HCSTRING("FOUR","\xe6","\x2b","\x81","\x2e"));
			HX_STACK_LINE(10)
			_g->set((int)53,HX_HCSTRING("FIVE","\x32","\x9f","\x7c","\x2e"));
			HX_STACK_LINE(10)
			_g->set((int)54,HX_HCSTRING("SIX","\x02","\x3b","\x3f","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)55,HX_HCSTRING("SEVEN","\xed","\x5c","\x1f","\xf8"));
			HX_STACK_LINE(10)
			_g->set((int)56,HX_HCSTRING("EIGHT","\x2f","\xb9","\x1c","\xeb"));
			HX_STACK_LINE(10)
			_g->set((int)57,HX_HCSTRING("NINE","\x32","\x4d","\xc6","\x33"));
			HX_STACK_LINE(10)
			_g->set((int)33,HX_HCSTRING("PAGEUP","\x6a","\x5e","\xbb","\x98"));
			HX_STACK_LINE(10)
			_g->set((int)34,HX_HCSTRING("PAGEDOWN","\x31","\x36","\xe2","\xb9"));
			HX_STACK_LINE(10)
			_g->set((int)36,HX_HCSTRING("HOME","\x1f","\x92","\xd3","\x2f"));
			HX_STACK_LINE(10)
			_g->set((int)35,HX_HCSTRING("END","\xbb","\x9f","\x34","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)45,HX_HCSTRING("INSERT","\x39","\xef","\x5f","\x50"));
			HX_STACK_LINE(10)
			_g->set((int)27,HX_HCSTRING("ESCAPE","\x81","\xef","\x5c","\x8d"));
			HX_STACK_LINE(10)
			_g->set((int)189,HX_HCSTRING("MINUS","\x50","\xb8","\x56","\x86"));
			HX_STACK_LINE(10)
			_g->set((int)187,HX_HCSTRING("PLUS","\x5a","\x07","\x1b","\x35"));
			HX_STACK_LINE(10)
			_g->set((int)46,HX_HCSTRING("DELETE","\x2b","\x6c","\x5b","\x1d"));
			HX_STACK_LINE(10)
			_g->set((int)8,HX_HCSTRING("BACKSPACE","\x1f","\xf5","\x42","\xc6"));
			HX_STACK_LINE(10)
			_g->set((int)219,HX_HCSTRING("LBRACKET","\x3c","\x3b","\x54","\x16"));
			HX_STACK_LINE(10)
			_g->set((int)221,HX_HCSTRING("RBRACKET","\xf6","\xe7","\x82","\x6d"));
			HX_STACK_LINE(10)
			_g->set((int)220,HX_HCSTRING("BACKSLASH","\x96","\x28","\x9e","\xc3"));
			HX_STACK_LINE(10)
			_g->set((int)20,HX_HCSTRING("CAPSLOCK","\x8c","\x6c","\x6e","\x80"));
			HX_STACK_LINE(10)
			_g->set((int)186,HX_HCSTRING("SEMICOLON","\x11","\x86","\x2a","\x49"));
			HX_STACK_LINE(10)
			_g->set((int)222,HX_HCSTRING("QUOTE","\x1c","\x5b","\xe0","\xdb"));
			HX_STACK_LINE(10)
			_g->set((int)13,HX_HCSTRING("ENTER","\xf8","\xa4","\x74","\xee"));
			HX_STACK_LINE(10)
			_g->set((int)16,HX_HCSTRING("SHIFT","\x62","\x24","\x11","\xfa"));
			HX_STACK_LINE(10)
			_g->set((int)188,HX_HCSTRING("COMMA","\xb5","\x69","\x4b","\xc8"));
			HX_STACK_LINE(10)
			_g->set((int)190,HX_HCSTRING("PERIOD","\x01","\x0d","\x9e","\xed"));
			HX_STACK_LINE(10)
			_g->set((int)191,HX_HCSTRING("SLASH","\x1d","\xf8","\xaf","\xfc"));
			HX_STACK_LINE(10)
			_g->set((int)192,HX_HCSTRING("GRAVEACCENT","\x6f","\x63","\x9a","\x0e"));
			HX_STACK_LINE(10)
			_g->set((int)17,HX_HCSTRING("CONTROL","\x3d","\x3f","\x55","\x99"));
			HX_STACK_LINE(10)
			_g->set((int)18,HX_HCSTRING("ALT","\x09","\x95","\x31","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)32,HX_HCSTRING("SPACE","\xa6","\xc4","\x54","\xff"));
			HX_STACK_LINE(10)
			_g->set((int)38,HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)40,HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d"));
			HX_STACK_LINE(10)
			_g->set((int)37,HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"));
			HX_STACK_LINE(10)
			_g->set((int)39,HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"));
			HX_STACK_LINE(10)
			_g->set((int)9,HX_HCSTRING("TAB","\x35","\xf6","\x3f","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)301,HX_HCSTRING("PRINTSCREEN","\x39","\x7f","\x7c","\x10"));
			HX_STACK_LINE(10)
			_g->set((int)112,HX_HCSTRING("F1","\x2b","\x3d","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)113,HX_HCSTRING("F2","\x2c","\x3d","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)114,HX_HCSTRING("F3","\x2d","\x3d","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)115,HX_HCSTRING("F4","\x2e","\x3d","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)116,HX_HCSTRING("F5","\x2f","\x3d","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)117,HX_HCSTRING("F6","\x30","\x3d","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)118,HX_HCSTRING("F7","\x31","\x3d","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)119,HX_HCSTRING("F8","\x32","\x3d","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)120,HX_HCSTRING("F9","\x33","\x3d","\x00","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)121,HX_HCSTRING("F10","\xa5","\x48","\x35","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)122,HX_HCSTRING("F11","\xa6","\x48","\x35","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)123,HX_HCSTRING("F12","\xa7","\x48","\x35","\x00"));
			HX_STACK_LINE(10)
			_g->set((int)96,HX_HCSTRING("NUMPADZERO","\x75","\x90","\xdd","\x33"));
			HX_STACK_LINE(10)
			_g->set((int)97,HX_HCSTRING("NUMPADONE","\x99","\xe5","\x09","\x5c"));
			HX_STACK_LINE(10)
			_g->set((int)98,HX_HCSTRING("NUMPADTWO","\xbf","\xb8","\x0d","\x5c"));
			HX_STACK_LINE(10)
			_g->set((int)99,HX_HCSTRING("NUMPADTHREE","\x51","\xf6","\x94","\xbb"));
			HX_STACK_LINE(10)
			_g->set((int)100,HX_HCSTRING("NUMPADFOUR","\x33","\xe5","\xac","\x26"));
			HX_STACK_LINE(10)
			_g->set((int)101,HX_HCSTRING("NUMPADFIVE","\x7f","\x58","\xa8","\x26"));
			HX_STACK_LINE(10)
			_g->set((int)102,HX_HCSTRING("NUMPADSIX","\x55","\xea","\x0c","\x5c"));
			HX_STACK_LINE(10)
			_g->set((int)103,HX_HCSTRING("NUMPADSEVEN","\x00","\xc7","\x35","\x26"));
			HX_STACK_LINE(10)
			_g->set((int)104,HX_HCSTRING("NUMPADEIGHT","\x42","\x23","\x33","\x19"));
			HX_STACK_LINE(10)
			_g->set((int)105,HX_HCSTRING("NUMPADNINE","\x7f","\x06","\xf2","\x2b"));
			HX_STACK_LINE(10)
			_g->set((int)109,HX_HCSTRING("NUMPADMINUS","\x63","\x22","\x6d","\xb4"));
			HX_STACK_LINE(10)
			_g->set((int)107,HX_HCSTRING("NUMPADPLUS","\xa7","\xc0","\x46","\x2d"));
			HX_STACK_LINE(10)
			_g->set((int)110,HX_HCSTRING("NUMPADPERIOD","\x8e","\x73","\x24","\x13"));
			HX_STACK_LINE(10)
			_g->set((int)106,HX_HCSTRING("NUMPADMULTIPLY","\xf1","\x55","\xe9","\x54"));
			HX_STACK_LINE(10)
			return _g;
		}
		return null();
	}
};
	supportedKeys= _Function_0_1::Block();
struct _Function_0_2{
	inline static ::haxe::ds::IntMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Shared.hx",107,0x60c9b919)
		{
			HX_STACK_LINE(107)
			::haxe::ds::IntMap tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(107)
			{
				HX_STACK_LINE(107)
				::haxe::ds::IntMap tmp1 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(107)
				::haxe::ds::IntMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(107)
				tmp = tmp2;
			}
			HX_STACK_LINE(107)
			::haxe::ds::IntMap _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(107)
			_g->set((int)-2,HX_HCSTRING("ANY","\xcc","\x96","\x31","\x00"));
			HX_STACK_LINE(107)
			_g->set((int)-1,HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"));
			HX_STACK_LINE(107)
			_g->set((int)0,HX_HCSTRING("A","\x41","\x00","\x00","\x00"));
			HX_STACK_LINE(107)
			_g->set((int)1,HX_HCSTRING("B","\x42","\x00","\x00","\x00"));
			HX_STACK_LINE(107)
			_g->set((int)2,HX_HCSTRING("X","\x58","\x00","\x00","\x00"));
			HX_STACK_LINE(107)
			_g->set((int)3,HX_HCSTRING("Y","\x59","\x00","\x00","\x00"));
			HX_STACK_LINE(107)
			_g->set((int)4,HX_HCSTRING("LEFT_SHOULDER","\xd8","\xb1","\xa9","\x01"));
			HX_STACK_LINE(107)
			_g->set((int)5,HX_HCSTRING("RIGHT_SHOULDER","\x83","\x9f","\x28","\x11"));
			HX_STACK_LINE(107)
			_g->set((int)6,HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b"));
			HX_STACK_LINE(107)
			_g->set((int)7,HX_HCSTRING("START","\x42","\xac","\xf9","\x01"));
			HX_STACK_LINE(107)
			_g->set((int)8,HX_HCSTRING("LEFT_STICK_CLICK","\x21","\x9d","\x4a","\xbf"));
			HX_STACK_LINE(107)
			_g->set((int)9,HX_HCSTRING("RIGHT_STICK_CLICK","\x56","\x4c","\x25","\x0b"));
			HX_STACK_LINE(107)
			_g->set((int)10,HX_HCSTRING("GUIDE","\x9c","\xf2","\xd9","\x19"));
			HX_STACK_LINE(107)
			_g->set((int)11,HX_HCSTRING("DPAD_UP","\x6b","\x00","\x87","\xa2"));
			HX_STACK_LINE(107)
			_g->set((int)12,HX_HCSTRING("DPAD_DOWN","\x72","\x1a","\x5b","\x87"));
			HX_STACK_LINE(107)
			_g->set((int)13,HX_HCSTRING("DPAD_LEFT","\x17","\x2a","\x9d","\x8c"));
			HX_STACK_LINE(107)
			_g->set((int)14,HX_HCSTRING("DPAD_RIGHT","\xac","\xb7","\xf4","\xf3"));
			HX_STACK_LINE(107)
			_g->set((int)15,HX_HCSTRING("LEFT_TRIGGER_BUTTON","\xf1","\x61","\x33","\x1b"));
			HX_STACK_LINE(107)
			_g->set((int)16,HX_HCSTRING("RIGHT_TRIGGER_BUTTON","\xdc","\x61","\xf8","\x02"));
			HX_STACK_LINE(107)
			_g->set((int)17,HX_HCSTRING("LEFT_TRIGGER","\xa0","\x31","\xc6","\xeb"));
			HX_STACK_LINE(107)
			_g->set((int)18,HX_HCSTRING("RIGHT_TRIGGER","\x55","\xe2","\x81","\x00"));
			HX_STACK_LINE(107)
			_g->set((int)19,HX_HCSTRING("LEFT_ANALOG_STICK","\x19","\x49","\x58","\xa5"));
			HX_STACK_LINE(107)
			_g->set((int)20,HX_HCSTRING("RIGHT_ANALOG_STICK","\x44","\xe8","\xd6","\xb8"));
			HX_STACK_LINE(107)
			_g->set((int)21,HX_HCSTRING("DPAD","\x6f","\x6f","\x2f","\x2d"));
			HX_STACK_LINE(107)
			_g->set((int)22,HX_HCSTRING("LEFT_TRIGGER_FAKE","\xd4","\x89","\xc9","\xfd"));
			HX_STACK_LINE(107)
			_g->set((int)23,HX_HCSTRING("RIGHT_TRIGGER_FAKE","\xff","\x28","\x48","\x11"));
			HX_STACK_LINE(107)
			_g->set((int)24,HX_HCSTRING("LEFT_STICK_FAKE","\xbc","\x9c","\x8e","\xca"));
			HX_STACK_LINE(107)
			_g->set((int)25,HX_HCSTRING("RIGHT_STICK_FAKE","\x27","\x8b","\xe4","\xe9"));
			HX_STACK_LINE(107)
			_g->set((int)26,HX_HCSTRING("TILT_PITCH","\xde","\x59","\xc1","\x1b"));
			HX_STACK_LINE(107)
			_g->set((int)27,HX_HCSTRING("TILT_ROLL","\xff","\x5e","\x73","\x5e"));
			HX_STACK_LINE(107)
			_g->set((int)28,HX_HCSTRING("POINTER_X","\xf6","\x08","\xfa","\x28"));
			HX_STACK_LINE(107)
			_g->set((int)29,HX_HCSTRING("POINTER_Y","\xf7","\x08","\xfa","\x28"));
			HX_STACK_LINE(107)
			_g->set((int)30,HX_HCSTRING("EXTRA_0","\x61","\xa1","\xbe","\xf8"));
			HX_STACK_LINE(107)
			_g->set((int)31,HX_HCSTRING("EXTRA_1","\x62","\xa1","\xbe","\xf8"));
			HX_STACK_LINE(107)
			_g->set((int)32,HX_HCSTRING("EXTRA_2","\x63","\xa1","\xbe","\xf8"));
			HX_STACK_LINE(107)
			_g->set((int)33,HX_HCSTRING("EXTRA_3","\x64","\xa1","\xbe","\xf8"));
			HX_STACK_LINE(107)
			return _g;
		}
		return null();
	}
};
	supportedButtons= _Function_0_2::Block();
}

