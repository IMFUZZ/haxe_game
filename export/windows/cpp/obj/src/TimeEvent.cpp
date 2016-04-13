#include <hxcpp.h>

#ifndef INCLUDED_TimeEvent
#include <TimeEvent.h>
#endif

Void TimeEvent_obj::__construct()
{
	return null();
}

//TimeEvent_obj::~TimeEvent_obj() { }

Dynamic TimeEvent_obj::__CreateEmpty() { return  new TimeEvent_obj; }
hx::ObjectPtr< TimeEvent_obj > TimeEvent_obj::__new()
{  hx::ObjectPtr< TimeEvent_obj > _result_ = new TimeEvent_obj();
	_result_->__construct();
	return _result_;}

Dynamic TimeEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TimeEvent_obj > _result_ = new TimeEvent_obj();
	_result_->__construct();
	return _result_;}


TimeEvent_obj::TimeEvent_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TimeEvent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TimeEvent_obj::__mClass,"__mClass");
};

#endif

hx::Class TimeEvent_obj::__mClass;

void TimeEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("TimeEvent","\xad","\x7c","\x88","\xcc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TimeEvent_obj >;
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

