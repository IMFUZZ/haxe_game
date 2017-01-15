#include <hxcpp.h>

#ifndef INCLUDED_Clock
#include <Clock.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_TimeEvent
#include <TimeEvent.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

Void Clock_obj::__construct()
{
HX_STACK_FRAME("Clock","new",0xae3589a0,"Clock.new","Clock.hx",5,0x2c6789d0)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(10)
	this->_seasons = Array_obj< ::String >::__new().Add(HX_HCSTRING("Spring","\xed","\x4a","\x2a","\xf8")).Add(HX_HCSTRING("Summer","\x8f","\x21","\xe0","\xd5")).Add(HX_HCSTRING("Autumn","\x36","\x3a","\x1a","\xa8")).Add(HX_HCSTRING("Winter","\x65","\x23","\x2d","\x87"));
	HX_STACK_LINE(9)
	this->daysInMonth = (int)25;
	HX_STACK_LINE(8)
	this->currentYear = (int)0;
	HX_STACK_LINE(7)
	this->currentDay = (int)0;
	HX_STACK_LINE(14)
	super::__construct();
	HX_STACK_LINE(15)
	this->_timeEvent = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(16)
	Dynamic tmp = this->_onComplete_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	this->start((int)40,tmp,(int)0);
}
;
	return null();
}

//Clock_obj::~Clock_obj() { }

Dynamic Clock_obj::__CreateEmpty() { return  new Clock_obj; }
hx::ObjectPtr< Clock_obj > Clock_obj::__new()
{  hx::ObjectPtr< Clock_obj > _result_ = new Clock_obj();
	_result_->__construct();
	return _result_;}

Dynamic Clock_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Clock_obj > _result_ = new Clock_obj();
	_result_->__construct();
	return _result_;}

Void Clock_obj::_onComplete( ::flixel::util::FlxTimer timer){
{
		HX_STACK_FRAME("Clock","_onComplete",0x58259b57,"Clock._onComplete","Clock.hx",20,0x2c6789d0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(timer,"timer")
		HX_STACK_LINE(20)
		this->addDay(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Clock_obj,_onComplete,(void))

Void Clock_obj::addDay( Dynamic __o_numberOfDays){
Dynamic numberOfDays = __o_numberOfDays.Default(1);
	HX_STACK_FRAME("Clock","addDay",0x8682d57b,"Clock.addDay","Clock.hx",23,0x2c6789d0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(numberOfDays,"numberOfDays")
{
		HX_STACK_LINE(24)
		(this->currentDay)++;
		HX_STACK_LINE(25)
		int tmp = this->currentDay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(25)
		bool tmp1 = (tmp >= (int)100);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		if ((tmp1)){
			HX_STACK_LINE(26)
			(this->currentYear)++;
			HX_STACK_LINE(27)
			this->currentDay = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Clock_obj,addDay,(void))

Void Clock_obj::update( Float elapsed){
{
		HX_STACK_FRAME("Clock","update",0x6e8b14c9,"Clock.update","Clock.hx",31,0x2c6789d0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(32)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		this->super::update(tmp);
	}
return null();
}


int Clock_obj::getCurrentYear( ){
	HX_STACK_FRAME("Clock","getCurrentYear",0xa24a4460,"Clock.getCurrentYear","Clock.hx",35,0x2c6789d0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	int tmp = this->currentYear;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Clock_obj,getCurrentYear,return )

::String Clock_obj::getCurrentSeason( ){
	HX_STACK_FRAME("Clock","getCurrentSeason",0x16891586,"Clock.getCurrentSeason","Clock.hx",39,0x2c6789d0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(40)
	int tmp = this->currentDay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	Float tmp1 = (Float(tmp) / Float((int)25));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	::String tmp3 = this->_seasons->__get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(40)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Clock_obj,getCurrentSeason,return )

int Clock_obj::getCurrentSeasonIndex( ){
	HX_STACK_FRAME("Clock","getCurrentSeasonIndex",0xfc7f2fac,"Clock.getCurrentSeasonIndex","Clock.hx",43,0x2c6789d0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(44)
	int tmp = this->currentDay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	Float tmp1 = (Float(tmp) / Float((int)25));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(44)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Clock_obj,getCurrentSeasonIndex,return )

int Clock_obj::getCurrentDay( ){
	HX_STACK_FRAME("Clock","getCurrentDay",0x47d72119,"Clock.getCurrentDay","Clock.hx",47,0x2c6789d0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	int tmp = this->currentDay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Clock_obj,getCurrentDay,return )

int Clock_obj::getCurrentHour( ){
	HX_STACK_FRAME("Clock","getCurrentHour",0x97154bc7,"Clock.getCurrentHour","Clock.hx",51,0x2c6789d0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(52)
	Float tmp = this->time;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	if ((tmp1)){
		HX_STACK_LINE(52)
		Float tmp3 = this->_timeCounter;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(52)
		Float tmp4 = this->time;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(52)
		tmp2 = (Float(tmp3) / Float(tmp4));
	}
	else{
		HX_STACK_LINE(52)
		tmp2 = (int)0;
	}
	HX_STACK_LINE(52)
	Float tmp3 = (tmp2 * (int)24);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(52)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(52)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Clock_obj,getCurrentHour,return )

int Clock_obj::getCurrentMinute( ){
	HX_STACK_FRAME("Clock","getCurrentMinute",0x06988c37,"Clock.getCurrentMinute","Clock.hx",55,0x2c6789d0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	Float tmp = this->time;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	if ((tmp1)){
		HX_STACK_LINE(56)
		Float tmp3 = this->_timeCounter;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(56)
		Float tmp4 = this->time;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(56)
		tmp2 = (Float(tmp3) / Float(tmp4));
	}
	else{
		HX_STACK_LINE(56)
		tmp2 = (int)0;
	}
	HX_STACK_LINE(56)
	Float tmp3 = (tmp2 * (int)1440);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(56)
	int tmp4 = this->getCurrentHour();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(56)
	int tmp5 = (tmp4 * (int)60);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(56)
	Float tmp6 = (tmp3 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(56)
	int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(56)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(Clock_obj,getCurrentMinute,return )

int Clock_obj::addTimeEvent( ::TimeEvent a_timeEvent,Dynamic a_Event){
	HX_STACK_FRAME("Clock","addTimeEvent",0x1b46dd2c,"Clock.addTimeEvent","Clock.hx",60,0x2c6789d0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a_timeEvent,"a_timeEvent")
	HX_STACK_ARG(a_Event,"a_Event")
	HX_STACK_LINE(60)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(Clock_obj,addTimeEvent,return )


Clock_obj::Clock_obj()
{
}

void Clock_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Clock);
	HX_MARK_MEMBER_NAME(currentDay,"currentDay");
	HX_MARK_MEMBER_NAME(currentYear,"currentYear");
	HX_MARK_MEMBER_NAME(daysInMonth,"daysInMonth");
	HX_MARK_MEMBER_NAME(_seasons,"_seasons");
	HX_MARK_MEMBER_NAME(_timeEvent,"_timeEvent");
	::flixel::util::FlxTimer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Clock_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentDay,"currentDay");
	HX_VISIT_MEMBER_NAME(currentYear,"currentYear");
	HX_VISIT_MEMBER_NAME(daysInMonth,"daysInMonth");
	HX_VISIT_MEMBER_NAME(_seasons,"_seasons");
	HX_VISIT_MEMBER_NAME(_timeEvent,"_timeEvent");
	::flixel::util::FlxTimer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Clock_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"addDay") ) { return addDay_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_seasons") ) { return _seasons; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"currentDay") ) { return currentDay; }
		if (HX_FIELD_EQ(inName,"_timeEvent") ) { return _timeEvent; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentYear") ) { return currentYear; }
		if (HX_FIELD_EQ(inName,"daysInMonth") ) { return daysInMonth; }
		if (HX_FIELD_EQ(inName,"_onComplete") ) { return _onComplete_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addTimeEvent") ) { return addTimeEvent_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getCurrentDay") ) { return getCurrentDay_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getCurrentYear") ) { return getCurrentYear_dyn(); }
		if (HX_FIELD_EQ(inName,"getCurrentHour") ) { return getCurrentHour_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getCurrentSeason") ) { return getCurrentSeason_dyn(); }
		if (HX_FIELD_EQ(inName,"getCurrentMinute") ) { return getCurrentMinute_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getCurrentSeasonIndex") ) { return getCurrentSeasonIndex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Clock_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_seasons") ) { _seasons=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"currentDay") ) { currentDay=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_timeEvent") ) { _timeEvent=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentYear") ) { currentYear=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"daysInMonth") ) { daysInMonth=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Clock_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("currentDay","\xa3","\xfb","\x26","\xc7"));
	outFields->push(HX_HCSTRING("currentYear","\x96","\xa2","\xd9","\x88"));
	outFields->push(HX_HCSTRING("daysInMonth","\x44","\xfb","\x4a","\x0f"));
	outFields->push(HX_HCSTRING("_seasons","\x71","\x8c","\x1e","\x70"));
	outFields->push(HX_HCSTRING("_timeEvent","\x8e","\x18","\x58","\x86"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Clock_obj,currentDay),HX_HCSTRING("currentDay","\xa3","\xfb","\x26","\xc7")},
	{hx::fsInt,(int)offsetof(Clock_obj,currentYear),HX_HCSTRING("currentYear","\x96","\xa2","\xd9","\x88")},
	{hx::fsInt,(int)offsetof(Clock_obj,daysInMonth),HX_HCSTRING("daysInMonth","\x44","\xfb","\x4a","\x0f")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Clock_obj,_seasons),HX_HCSTRING("_seasons","\x71","\x8c","\x1e","\x70")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Clock_obj,_timeEvent),HX_HCSTRING("_timeEvent","\x8e","\x18","\x58","\x86")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("currentDay","\xa3","\xfb","\x26","\xc7"),
	HX_HCSTRING("currentYear","\x96","\xa2","\xd9","\x88"),
	HX_HCSTRING("daysInMonth","\x44","\xfb","\x4a","\x0f"),
	HX_HCSTRING("_seasons","\x71","\x8c","\x1e","\x70"),
	HX_HCSTRING("_timeEvent","\x8e","\x18","\x58","\x86"),
	HX_HCSTRING("_onComplete","\x17","\xa2","\x08","\x30"),
	HX_HCSTRING("addDay","\xbb","\x46","\xfd","\x9e"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("getCurrentYear","\xa0","\xf5","\x77","\x10"),
	HX_HCSTRING("getCurrentSeason","\xc6","\x96","\x75","\xb0"),
	HX_HCSTRING("getCurrentSeasonIndex","\x6c","\x26","\x76","\x8b"),
	HX_HCSTRING("getCurrentDay","\xd9","\x57","\x99","\x23"),
	HX_HCSTRING("getCurrentHour","\x07","\xfd","\x42","\x05"),
	HX_HCSTRING("getCurrentMinute","\x77","\x0d","\x85","\xa0"),
	HX_HCSTRING("addTimeEvent","\x6c","\xbe","\x09","\x2a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Clock_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Clock_obj::__mClass,"__mClass");
};

#endif

hx::Class Clock_obj::__mClass;

void Clock_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Clock","\xae","\x79","\x90","\xdb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Clock_obj >;
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

