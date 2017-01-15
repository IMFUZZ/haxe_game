#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_debug_SystemUsage
#include <debug/SystemUsage.h>
#endif
#ifndef INCLUDED_debug__SystemUsage_Consolas
#include <debug/_SystemUsage/Consolas.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_system_System
#include <openfl/_legacy/system/System.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_Font
#include <openfl/_legacy/text/Font.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_FontStyle
#include <openfl/_legacy/text/FontStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_FontType
#include <openfl/_legacy/text/FontType.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
namespace debug{

Void SystemUsage_obj::__construct(hx::Null< Float >  __o_a_x,hx::Null< Float >  __o_a_y,hx::Null< int >  __o_a_color)
{
HX_STACK_FRAME("debug.SystemUsage","new",0xb9ade969,"debug.SystemUsage.new","debug/SystemUsage.hx",15,0x178995e8)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_a_x,"a_x")
HX_STACK_ARG(__o_a_y,"a_y")
HX_STACK_ARG(__o_a_color,"a_color")
Float a_x = __o_a_x.Default(((Float)10.0));
Float a_y = __o_a_y.Default(((Float)10.0));
int a_color = __o_a_color.Default(16777215);
{
	HX_STACK_LINE(19)
	this->memoryPeak = ((Float)0);
	HX_STACK_LINE(22)
	super::__construct();
	HX_STACK_LINE(24)
	::openfl::_legacy::text::Font_obj::registerFont(hx::ClassOf< ::debug::_SystemUsage::Consolas >());
	HX_STACK_LINE(25)
	::debug::_SystemUsage::Consolas tmp = ::debug::_SystemUsage::Consolas_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	::String tmp1 = tmp->fontName;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	int tmp2 = a_color;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	::openfl::_legacy::text::TextFormat tmp3 = ::openfl::_legacy::text::TextFormat_obj::__new(tmp1,(int)18,tmp2,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	this->set_defaultTextFormat(tmp3);
	HX_STACK_LINE(26)
	this->times = Array_obj< Float >::__new();
	HX_STACK_LINE(27)
	Float tmp4 = a_x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(27)
	this->set_x(tmp4);
	HX_STACK_LINE(28)
	Float tmp5 = a_y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(28)
	this->set_y(tmp5);
	HX_STACK_LINE(29)
	this->set_width((int)600);
	HX_STACK_LINE(30)
	this->set_height((int)70);
	HX_STACK_LINE(31)
	this->set_selectable(false);
	HX_STACK_LINE(32)
	::String tmp6 = ::openfl::_legacy::events::Event_obj::ENTER_FRAME;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(32)
	Dynamic tmp7 = this->_onEnter_dyn();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(32)
	this->addEventListener(tmp6,tmp7,null(),null(),null());
}
;
	return null();
}

//SystemUsage_obj::~SystemUsage_obj() { }

Dynamic SystemUsage_obj::__CreateEmpty() { return  new SystemUsage_obj; }
hx::ObjectPtr< SystemUsage_obj > SystemUsage_obj::__new(hx::Null< Float >  __o_a_x,hx::Null< Float >  __o_a_y,hx::Null< int >  __o_a_color)
{  hx::ObjectPtr< SystemUsage_obj > _result_ = new SystemUsage_obj();
	_result_->__construct(__o_a_x,__o_a_y,__o_a_color);
	return _result_;}

Dynamic SystemUsage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SystemUsage_obj > _result_ = new SystemUsage_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void SystemUsage_obj::_onEnter( Dynamic _){
{
		HX_STACK_FRAME("debug.SystemUsage","_onEnter",0xe61deb51,"debug.SystemUsage._onEnter","debug/SystemUsage.hx",35,0x178995e8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(36)
		Float tmp = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		Float now = tmp;		HX_STACK_VAR(now,"now");
		HX_STACK_LINE(37)
		int tmp1 = ::openfl::_legacy::_system::System_obj::get_totalMemory();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		Float tmp2 = (Float(tmp1) / Float((int)1024));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		Float tmp3 = (Float(tmp2) / Float((int)1024));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(37)
		Float tmp4 = (tmp3 * (int)100);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(37)
		int tmp5 = ::Math_obj::round(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(37)
		Float tmp6 = (Float(tmp5) / Float((int)100));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(37)
		Float memory = tmp6;		HX_STACK_VAR(memory,"memory");
		HX_STACK_LINE(39)
		Float tmp7 = now;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(39)
		this->times->push(tmp7);
		HX_STACK_LINE(40)
		while((true)){
			HX_STACK_LINE(40)
			Float tmp8 = this->times->__get((int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(40)
			Float tmp9 = (now - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(40)
			bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(40)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(40)
			if ((tmp11)){
				HX_STACK_LINE(40)
				break;
			}
			HX_STACK_LINE(41)
			this->times->shift();
		}
		HX_STACK_LINE(43)
		Float tmp8 = memory;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(43)
		Float tmp9 = this->memoryPeak;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(43)
		bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(43)
		if ((tmp10)){
			HX_STACK_LINE(43)
			this->memoryPeak = memory;
		}
		HX_STACK_LINE(44)
		bool tmp11 = this->get_visible();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(44)
		if ((tmp11)){
			HX_STACK_LINE(45)
			int tmp12 = this->times->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(45)
			::String tmp13 = (HX_HCSTRING("FPS : ","\x9d","\xda","\xfe","\x43") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(45)
			::String tmp14 = (tmp13 + HX_HCSTRING("\nMEM : ","\x7b","\x5b","\xf5","\x56"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(46)
			Float tmp15 = memory;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(45)
			::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(45)
			::String tmp17 = (tmp16 + HX_HCSTRING(" MB\n","\xf5","\x7a","\x61","\x15"));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(45)
			::String tmp18 = (tmp17 + HX_HCSTRING("MEM peak : ","\xdc","\x64","\x03","\xe4"));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(47)
			Float tmp19 = this->memoryPeak;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(45)
			::String tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(45)
			::String tmp21 = (tmp20 + HX_HCSTRING(" MB","\x75","\x8b","\x18","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(45)
			this->set_text(tmp21);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SystemUsage_obj,_onEnter,(void))

::String SystemUsage_obj::CONSOLAS;


SystemUsage_obj::SystemUsage_obj()
{
}

void SystemUsage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SystemUsage);
	HX_MARK_MEMBER_NAME(times,"times");
	HX_MARK_MEMBER_NAME(memoryPeak,"memoryPeak");
	::openfl::_legacy::text::TextField_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SystemUsage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(times,"times");
	HX_VISIT_MEMBER_NAME(memoryPeak,"memoryPeak");
	::openfl::_legacy::text::TextField_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SystemUsage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"times") ) { return times; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_onEnter") ) { return _onEnter_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"memoryPeak") ) { return memoryPeak; }
	}
	return super::__Field(inName,inCallProp);
}

bool SystemUsage_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"CONSOLAS") ) { outValue = CONSOLAS; return true;  }
	}
	return false;
}

Dynamic SystemUsage_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"times") ) { times=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"memoryPeak") ) { memoryPeak=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SystemUsage_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"CONSOLAS") ) { CONSOLAS=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void SystemUsage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("times","\xc6","\xbf","\x35","\x10"));
	outFields->push(HX_HCSTRING("memoryPeak","\xc0","\xe9","\x95","\xf0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(SystemUsage_obj,times),HX_HCSTRING("times","\xc6","\xbf","\x35","\x10")},
	{hx::fsFloat,(int)offsetof(SystemUsage_obj,memoryPeak),HX_HCSTRING("memoryPeak","\xc0","\xe9","\x95","\xf0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &SystemUsage_obj::CONSOLAS,HX_HCSTRING("CONSOLAS","\xc0","\x8d","\xdd","\xfb")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("times","\xc6","\xbf","\x35","\x10"),
	HX_HCSTRING("memoryPeak","\xc0","\xe9","\x95","\xf0"),
	HX_HCSTRING("_onEnter","\xfa","\x64","\x7c","\x40"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SystemUsage_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SystemUsage_obj::CONSOLAS,"CONSOLAS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SystemUsage_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SystemUsage_obj::CONSOLAS,"CONSOLAS");
};

#endif

hx::Class SystemUsage_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("CONSOLAS","\xc0","\x8d","\xdd","\xfb"),
	::String(null()) };

void SystemUsage_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("debug.SystemUsage","\xf7","\x00","\x79","\x32");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SystemUsage_obj::__GetStatic;
	__mClass->mSetStaticField = &SystemUsage_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SystemUsage_obj >;
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

} // end namespace debug
