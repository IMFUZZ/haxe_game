// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_constraint_ZPP_UserBody
#include <zpp_nape/constraint/ZPP_UserBody.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6613671abe510440_569_new,"zpp_nape.constraint.ZPP_UserBody","new",0xf94b08b4,"zpp_nape.constraint.ZPP_UserBody.new","zpp_nape/constraint/UserConstraint.hx",569,0x968ba4a6)
namespace zpp_nape{
namespace constraint{

void ZPP_UserBody_obj::__construct(int cnt, ::zpp_nape::phys::ZPP_Body body){
            	HX_STACKFRAME(&_hx_pos_6613671abe510440_569_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(cnt,"cnt")
            	HX_STACK_ARG(body,"body")
HXLINE( 571)		this->body = null();
HXLINE( 570)		this->cnt = (int)0;
HXLINE( 573)		this->cnt = cnt;
HXLINE( 574)		this->body = body;
            	}

Dynamic ZPP_UserBody_obj::__CreateEmpty() { return new ZPP_UserBody_obj; }

void *ZPP_UserBody_obj::_hx_vtable = 0;

Dynamic ZPP_UserBody_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ZPP_UserBody_obj > _hx_result = new ZPP_UserBody_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ZPP_UserBody_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x44e18e5c;
}


hx::ObjectPtr< ZPP_UserBody_obj > ZPP_UserBody_obj::__new(int cnt, ::zpp_nape::phys::ZPP_Body body) {
	hx::ObjectPtr< ZPP_UserBody_obj > __this = new ZPP_UserBody_obj();
	__this->__construct(cnt,body);
	return __this;
}

hx::ObjectPtr< ZPP_UserBody_obj > ZPP_UserBody_obj::__alloc(hx::Ctx *_hx_ctx,int cnt, ::zpp_nape::phys::ZPP_Body body) {
	ZPP_UserBody_obj *__this = (ZPP_UserBody_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ZPP_UserBody_obj), true, "zpp_nape.constraint.ZPP_UserBody"));
	*(void **)__this = ZPP_UserBody_obj::_hx_vtable;
	__this->__construct(cnt,body);
	return __this;
}

ZPP_UserBody_obj::ZPP_UserBody_obj()
{
}

void ZPP_UserBody_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_UserBody);
	HX_MARK_MEMBER_NAME(cnt,"cnt");
	HX_MARK_MEMBER_NAME(body,"body");
	HX_MARK_END_CLASS();
}

void ZPP_UserBody_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cnt,"cnt");
	HX_VISIT_MEMBER_NAME(body,"body");
}

hx::Val ZPP_UserBody_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cnt") ) { return hx::Val( cnt); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { return hx::Val( body); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ZPP_UserBody_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cnt") ) { cnt=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast<  ::zpp_nape::phys::ZPP_Body >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_UserBody_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("cnt","\x69","\x7f","\x4b","\x00"));
	outFields->push(HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ZPP_UserBody_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ZPP_UserBody_obj,cnt),HX_HCSTRING("cnt","\x69","\x7f","\x4b","\x00")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZPP_UserBody_obj,body),HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ZPP_UserBody_obj_sStaticStorageInfo = 0;
#endif

static ::String ZPP_UserBody_obj_sMemberFields[] = {
	HX_HCSTRING("cnt","\x69","\x7f","\x4b","\x00"),
	HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41"),
	::String(null()) };

static void ZPP_UserBody_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_UserBody_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ZPP_UserBody_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_UserBody_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_UserBody_obj::__mClass;

void ZPP_UserBody_obj::__register()
{
	hx::Object *dummy = new ZPP_UserBody_obj;
	ZPP_UserBody_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.constraint.ZPP_UserBody","\xc2","\xde","\x8b","\x90");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ZPP_UserBody_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ZPP_UserBody_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_UserBody_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ZPP_UserBody_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ZPP_UserBody_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ZPP_UserBody_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace zpp_nape
} // end namespace constraint