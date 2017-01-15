// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#include <flixel/input/gamepad/FlxGamepadAttachment.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_Manufacturer
#include <flixel/input/gamepad/mappings/Manufacturer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1d930114df1f84ac_11_new,"flixel.input.gamepad.mappings.FlxGamepadMapping","new",0xf72cefab,"flixel.input.gamepad.mappings.FlxGamepadMapping.new","flixel/input/gamepad/mappings/FlxGamepadMapping.hx",11,0x5edd1803)
HX_DEFINE_STACK_FRAME(_hx_pos_1d930114df1f84ac_41_initValues,"flixel.input.gamepad.mappings.FlxGamepadMapping","initValues",0xb7dc8f27,"flixel.input.gamepad.mappings.FlxGamepadMapping.initValues","flixel/input/gamepad/mappings/FlxGamepadMapping.hx",41,0x5edd1803)
HX_DEFINE_STACK_FRAME(_hx_pos_1d930114df1f84ac_45_getAnalogStick,"flixel.input.gamepad.mappings.FlxGamepadMapping","getAnalogStick",0x7f97569f,"flixel.input.gamepad.mappings.FlxGamepadMapping.getAnalogStick","flixel/input/gamepad/mappings/FlxGamepadMapping.hx",45,0x5edd1803)
HX_DEFINE_STACK_FRAME(_hx_pos_1d930114df1f84ac_61_getID,"flixel.input.gamepad.mappings.FlxGamepadMapping","getID",0xc83859fc,"flixel.input.gamepad.mappings.FlxGamepadMapping.getID","flixel/input/gamepad/mappings/FlxGamepadMapping.hx",61,0x5edd1803)
HX_DEFINE_STACK_FRAME(_hx_pos_1d930114df1f84ac_69_getRawID,"flixel.input.gamepad.mappings.FlxGamepadMapping","getRawID",0xe7780022,"flixel.input.gamepad.mappings.FlxGamepadMapping.getRawID","flixel/input/gamepad/mappings/FlxGamepadMapping.hx",69,0x5edd1803)
HX_DEFINE_STACK_FRAME(_hx_pos_1d930114df1f84ac_74_isAxisForMotion,"flixel.input.gamepad.mappings.FlxGamepadMapping","isAxisForMotion",0x69ad82bf,"flixel.input.gamepad.mappings.FlxGamepadMapping.isAxisForMotion","flixel/input/gamepad/mappings/FlxGamepadMapping.hx",74,0x5edd1803)
HX_DEFINE_STACK_FRAME(_hx_pos_1d930114df1f84ac_82_isAxisFlipped,"flixel.input.gamepad.mappings.FlxGamepadMapping","isAxisFlipped",0x941958e2,"flixel.input.gamepad.mappings.FlxGamepadMapping.isAxisFlipped","flixel/input/gamepad/mappings/FlxGamepadMapping.hx",82,0x5edd1803)
HX_DEFINE_STACK_FRAME(_hx_pos_1d930114df1f84ac_92_axisIndexToRawID,"flixel.input.gamepad.mappings.FlxGamepadMapping","axisIndexToRawID",0x3c47e36c,"flixel.input.gamepad.mappings.FlxGamepadMapping.axisIndexToRawID","flixel/input/gamepad/mappings/FlxGamepadMapping.hx",92,0x5edd1803)
HX_DEFINE_STACK_FRAME(_hx_pos_1d930114df1f84ac_97_checkForFakeAxis,"flixel.input.gamepad.mappings.FlxGamepadMapping","checkForFakeAxis",0xd918b8ec,"flixel.input.gamepad.mappings.FlxGamepadMapping.checkForFakeAxis","flixel/input/gamepad/mappings/FlxGamepadMapping.hx",97,0x5edd1803)
HX_DEFINE_STACK_FRAME(_hx_pos_1d930114df1f84ac_103_set_attachment,"flixel.input.gamepad.mappings.FlxGamepadMapping","set_attachment",0x9aaad735,"flixel.input.gamepad.mappings.FlxGamepadMapping.set_attachment","flixel/input/gamepad/mappings/FlxGamepadMapping.hx",103,0x5edd1803)
namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{

void FlxGamepadMapping_obj::__construct( ::flixel::input::gamepad::FlxGamepadAttachment attachment){
            	HX_STACKFRAME(&_hx_pos_1d930114df1f84ac_11_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(attachment,"attachment")
HXLINE(  20)		this->attachment = ::flixel::input::gamepad::FlxGamepadAttachment_obj::NONE_dyn();
HXLINE(  14)		this->supportsPointer = false;
HXLINE(  13)		this->supportsMotion = false;
HXLINE(  26)		if (hx::IsNotNull( attachment )) {
HXLINE(  27)			this->set_attachment(attachment);
            		}
HXLINE(  38)		this->initValues();
            	}

Dynamic FlxGamepadMapping_obj::__CreateEmpty() { return new FlxGamepadMapping_obj; }

void *FlxGamepadMapping_obj::_hx_vtable = 0;

Dynamic FlxGamepadMapping_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxGamepadMapping_obj > _hx_result = new FlxGamepadMapping_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxGamepadMapping_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5f3facff;
}

void FlxGamepadMapping_obj::initValues(){
            	HX_STACKFRAME(&_hx_pos_1d930114df1f84ac_41_initValues)
            	HX_STACK_THIS(this)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadMapping_obj,initValues,(void))

 ::flixel::input::gamepad::FlxGamepadAnalogStick FlxGamepadMapping_obj::getAnalogStick(int ID){
            	HX_STACKFRAME(&_hx_pos_1d930114df1f84ac_45_getAnalogStick)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE(  45)		switch((int)(ID)){
            			case (int)19: {
HXLINE(  45)				return this->leftStick;
            			}
            			break;
            			case (int)20: {
HXLINE(  45)				return this->rightStick;
            			}
            			break;
            			default:{
HXLINE(  45)				return null();
            			}
            		}
HXDLIN(  45)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadMapping_obj,getAnalogStick,return )

int FlxGamepadMapping_obj::getID(int rawID){
            	HX_STACKFRAME(&_hx_pos_1d930114df1f84ac_61_getID)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rawID,"rawID")
HXLINE(  61)		return (int)-1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadMapping_obj,getID,return )

int FlxGamepadMapping_obj::getRawID(int ID){
            	HX_STACKFRAME(&_hx_pos_1d930114df1f84ac_69_getRawID)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE(  69)		return (int)-1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadMapping_obj,getRawID,return )

bool FlxGamepadMapping_obj::isAxisForMotion(int ID){
            	HX_STACKFRAME(&_hx_pos_1d930114df1f84ac_74_isAxisForMotion)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE(  74)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadMapping_obj,isAxisForMotion,return )

bool FlxGamepadMapping_obj::isAxisFlipped(int axisID){
            	HX_STACKFRAME(&_hx_pos_1d930114df1f84ac_82_isAxisFlipped)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(axisID,"axisID")
HXLINE(  82)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadMapping_obj,isAxisFlipped,return )

int FlxGamepadMapping_obj::axisIndexToRawID(int axisID){
            	HX_STACKFRAME(&_hx_pos_1d930114df1f84ac_92_axisIndexToRawID)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(axisID,"axisID")
HXLINE(  92)		return (int)-1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadMapping_obj,axisIndexToRawID,return )

int FlxGamepadMapping_obj::checkForFakeAxis(int ID){
            	HX_STACKFRAME(&_hx_pos_1d930114df1f84ac_97_checkForFakeAxis)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE(  97)		return (int)-1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadMapping_obj,checkForFakeAxis,return )

 ::flixel::input::gamepad::FlxGamepadAttachment FlxGamepadMapping_obj::set_attachment( ::flixel::input::gamepad::FlxGamepadAttachment attachment){
            	HX_STACKFRAME(&_hx_pos_1d930114df1f84ac_103_set_attachment)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(attachment,"attachment")
HXLINE( 103)		return (this->attachment = attachment);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadMapping_obj,set_attachment,return )


hx::ObjectPtr< FlxGamepadMapping_obj > FlxGamepadMapping_obj::__new( ::flixel::input::gamepad::FlxGamepadAttachment attachment) {
	hx::ObjectPtr< FlxGamepadMapping_obj > __this = new FlxGamepadMapping_obj();
	__this->__construct(attachment);
	return __this;
}

hx::ObjectPtr< FlxGamepadMapping_obj > FlxGamepadMapping_obj::__alloc(hx::Ctx *_hx_ctx, ::flixel::input::gamepad::FlxGamepadAttachment attachment) {
	FlxGamepadMapping_obj *__this = (FlxGamepadMapping_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxGamepadMapping_obj), true, "flixel.input.gamepad.mappings.FlxGamepadMapping"));
	*(void **)__this = FlxGamepadMapping_obj::_hx_vtable;
	__this->__construct(attachment);
	return __this;
}

FlxGamepadMapping_obj::FlxGamepadMapping_obj()
{
}

void FlxGamepadMapping_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGamepadMapping);
	HX_MARK_MEMBER_NAME(supportsMotion,"supportsMotion");
	HX_MARK_MEMBER_NAME(supportsPointer,"supportsPointer");
	HX_MARK_MEMBER_NAME(leftStick,"leftStick");
	HX_MARK_MEMBER_NAME(rightStick,"rightStick");
	HX_MARK_MEMBER_NAME(attachment,"attachment");
	HX_MARK_MEMBER_NAME(manufacturer,"manufacturer");
	HX_MARK_END_CLASS();
}

void FlxGamepadMapping_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(supportsMotion,"supportsMotion");
	HX_VISIT_MEMBER_NAME(supportsPointer,"supportsPointer");
	HX_VISIT_MEMBER_NAME(leftStick,"leftStick");
	HX_VISIT_MEMBER_NAME(rightStick,"rightStick");
	HX_VISIT_MEMBER_NAME(attachment,"attachment");
	HX_VISIT_MEMBER_NAME(manufacturer,"manufacturer");
}

hx::Val FlxGamepadMapping_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getID") ) { return hx::Val( getID_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getRawID") ) { return hx::Val( getRawID_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"leftStick") ) { return hx::Val( leftStick); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rightStick") ) { return hx::Val( rightStick); }
		if (HX_FIELD_EQ(inName,"attachment") ) { return hx::Val( attachment); }
		if (HX_FIELD_EQ(inName,"initValues") ) { return hx::Val( initValues_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"manufacturer") ) { return hx::Val( manufacturer); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"isAxisFlipped") ) { return hx::Val( isAxisFlipped_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"supportsMotion") ) { return hx::Val( supportsMotion); }
		if (HX_FIELD_EQ(inName,"getAnalogStick") ) { return hx::Val( getAnalogStick_dyn()); }
		if (HX_FIELD_EQ(inName,"set_attachment") ) { return hx::Val( set_attachment_dyn()); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"supportsPointer") ) { return hx::Val( supportsPointer); }
		if (HX_FIELD_EQ(inName,"isAxisForMotion") ) { return hx::Val( isAxisForMotion_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"axisIndexToRawID") ) { return hx::Val( axisIndexToRawID_dyn()); }
		if (HX_FIELD_EQ(inName,"checkForFakeAxis") ) { return hx::Val( checkForFakeAxis_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxGamepadMapping_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"leftStick") ) { leftStick=inValue.Cast<  ::flixel::input::gamepad::FlxGamepadAnalogStick >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rightStick") ) { rightStick=inValue.Cast<  ::flixel::input::gamepad::FlxGamepadAnalogStick >(); return inValue; }
		if (HX_FIELD_EQ(inName,"attachment") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_attachment(inValue) );attachment=inValue.Cast<  ::flixel::input::gamepad::FlxGamepadAttachment >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"manufacturer") ) { manufacturer=inValue.Cast<  ::flixel::input::gamepad::mappings::Manufacturer >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"supportsMotion") ) { supportsMotion=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"supportsPointer") ) { supportsPointer=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGamepadMapping_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("supportsMotion","\xda","\x76","\xa1","\x62"));
	outFields->push(HX_HCSTRING("supportsPointer","\x99","\x5f","\x50","\x15"));
	outFields->push(HX_HCSTRING("leftStick","\xc9","\x67","\xf1","\x98"));
	outFields->push(HX_HCSTRING("rightStick","\xd4","\x5f","\xd6","\x86"));
	outFields->push(HX_HCSTRING("attachment","\xe3","\x07","\x73","\xdd"));
	outFields->push(HX_HCSTRING("manufacturer","\x51","\x1a","\x55","\x14"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxGamepadMapping_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxGamepadMapping_obj,supportsMotion),HX_HCSTRING("supportsMotion","\xda","\x76","\xa1","\x62")},
	{hx::fsBool,(int)offsetof(FlxGamepadMapping_obj,supportsPointer),HX_HCSTRING("supportsPointer","\x99","\x5f","\x50","\x15")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepadAnalogStick*/ ,(int)offsetof(FlxGamepadMapping_obj,leftStick),HX_HCSTRING("leftStick","\xc9","\x67","\xf1","\x98")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepadAnalogStick*/ ,(int)offsetof(FlxGamepadMapping_obj,rightStick),HX_HCSTRING("rightStick","\xd4","\x5f","\xd6","\x86")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepadAttachment*/ ,(int)offsetof(FlxGamepadMapping_obj,attachment),HX_HCSTRING("attachment","\xe3","\x07","\x73","\xdd")},
	{hx::fsObject /*::flixel::input::gamepad::mappings::Manufacturer*/ ,(int)offsetof(FlxGamepadMapping_obj,manufacturer),HX_HCSTRING("manufacturer","\x51","\x1a","\x55","\x14")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxGamepadMapping_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxGamepadMapping_obj_sMemberFields[] = {
	HX_HCSTRING("supportsMotion","\xda","\x76","\xa1","\x62"),
	HX_HCSTRING("supportsPointer","\x99","\x5f","\x50","\x15"),
	HX_HCSTRING("leftStick","\xc9","\x67","\xf1","\x98"),
	HX_HCSTRING("rightStick","\xd4","\x5f","\xd6","\x86"),
	HX_HCSTRING("attachment","\xe3","\x07","\x73","\xdd"),
	HX_HCSTRING("manufacturer","\x51","\x1a","\x55","\x14"),
	HX_HCSTRING("initValues","\x12","\x5f","\xfc","\x53"),
	HX_HCSTRING("getAnalogStick","\x0a","\xf8","\x74","\x58"),
	HX_HCSTRING("getID","\xf1","\x91","\x60","\x91"),
	HX_HCSTRING("getRawID","\x4d","\x6f","\xfd","\x43"),
	HX_HCSTRING("isAxisForMotion","\xf4","\x1e","\xbd","\x52"),
	HX_HCSTRING("isAxisFlipped","\xd7","\x0d","\xda","\x83"),
	HX_HCSTRING("axisIndexToRawID","\x97","\xf5","\xe0","\x40"),
	HX_HCSTRING("checkForFakeAxis","\x17","\xcb","\xb1","\xdd"),
	HX_HCSTRING("set_attachment","\xa0","\x78","\x88","\x73"),
	::String(null()) };

static void FlxGamepadMapping_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepadMapping_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxGamepadMapping_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepadMapping_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxGamepadMapping_obj::__mClass;

void FlxGamepadMapping_obj::__register()
{
	hx::Object *dummy = new FlxGamepadMapping_obj;
	FlxGamepadMapping_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.mappings.FlxGamepadMapping","\x39","\x3e","\x23","\x61");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxGamepadMapping_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxGamepadMapping_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxGamepadMapping_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxGamepadMapping_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxGamepadMapping_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxGamepadMapping_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings