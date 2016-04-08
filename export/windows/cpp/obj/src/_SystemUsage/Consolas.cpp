#include <hxcpp.h>

#ifndef INCLUDED__SystemUsage_Consolas
#include <_SystemUsage/Consolas.h>
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
namespace _SystemUsage{

Void Consolas_obj::__construct(::String __o_filename,::openfl::_legacy::text::FontStyle style,::openfl::_legacy::text::FontType type)
{
HX_STACK_FRAME("_SystemUsage.Consolas","new",0x250b9e8d,"_SystemUsage.Consolas.new","SystemUsage.hx",13,0xb7ccfe6c)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_filename,"filename")
HX_STACK_ARG(style,"style")
HX_STACK_ARG(type,"type")
::String filename = __o_filename.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(13)
	::String tmp = filename;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	::openfl::_legacy::text::FontStyle tmp1 = style;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	::openfl::_legacy::text::FontType tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(13)
	super::__construct(tmp,tmp1,tmp2);
}
;
	return null();
}

//Consolas_obj::~Consolas_obj() { }

Dynamic Consolas_obj::__CreateEmpty() { return  new Consolas_obj; }
hx::ObjectPtr< Consolas_obj > Consolas_obj::__new(::String __o_filename,::openfl::_legacy::text::FontStyle style,::openfl::_legacy::text::FontType type)
{  hx::ObjectPtr< Consolas_obj > _result_ = new Consolas_obj();
	_result_->__construct(__o_filename,style,type);
	return _result_;}

Dynamic Consolas_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Consolas_obj > _result_ = new Consolas_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::String Consolas_obj::resourceName;


Consolas_obj::Consolas_obj()
{
}

bool Consolas_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = resourceName; return true;  }
	}
	return false;
}

bool Consolas_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Consolas_obj::resourceName,HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Consolas_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Consolas_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Consolas_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Consolas_obj::resourceName,"resourceName");
};

#endif

hx::Class Consolas_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90"),
	::String(null()) };

void Consolas_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("_SystemUsage.Consolas","\x1b","\x54","\xc4","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Consolas_obj::__GetStatic;
	__mClass->mSetStaticField = &Consolas_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Consolas_obj >;
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

void Consolas_obj::__boot()
{
	resourceName= HX_HCSTRING("NME_font__SystemUsage_Consolas","\x55","\xb9","\xfd","\x54");
}

} // end namespace _SystemUsage
