// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleVert
#include <zpp_nape/geom/ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimpleVert
#include <zpp_nape/util/ZNPNode_ZPP_SimpleVert.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ec8b91de38cbe726_15588_new,"zpp_nape.util.ZNPNode_ZPP_SimpleVert","new",0x66910346,"zpp_nape.util.ZNPNode_ZPP_SimpleVert.new","zpp_nape/util/Lists.hx",15588,0x9f4e6754)
HX_DEFINE_STACK_FRAME(_hx_pos_ec8b91de38cbe726_15616_alloc,"zpp_nape.util.ZNPNode_ZPP_SimpleVert","alloc",0x77afdcdb,"zpp_nape.util.ZNPNode_ZPP_SimpleVert.alloc","zpp_nape/util/Lists.hx",15616,0x9f4e6754)
HX_DEFINE_STACK_FRAME(_hx_pos_ec8b91de38cbe726_15620_free,"zpp_nape.util.ZNPNode_ZPP_SimpleVert","free",0x5311f306,"zpp_nape.util.ZNPNode_ZPP_SimpleVert.free","zpp_nape/util/Lists.hx",15620,0x9f4e6754)
HX_DEFINE_STACK_FRAME(_hx_pos_ec8b91de38cbe726_15627_elem,"zpp_nape.util.ZNPNode_ZPP_SimpleVert","elem",0x52642ee9,"zpp_nape.util.ZNPNode_ZPP_SimpleVert.elem","zpp_nape/util/Lists.hx",15627,0x9f4e6754)
HX_DEFINE_STACK_FRAME(_hx_pos_ec8b91de38cbe726_15589_boot,"zpp_nape.util.ZNPNode_ZPP_SimpleVert","boot",0x506ada8c,"zpp_nape.util.ZNPNode_ZPP_SimpleVert.boot","zpp_nape/util/Lists.hx",15589,0x9f4e6754)
namespace zpp_nape{
namespace util{

void ZNPNode_ZPP_SimpleVert_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ec8b91de38cbe726_15588_new)
            	HX_STACK_THIS(this)
HXLINE(15622)		this->elt = null();
HXLINE(15613)		this->next = null();
            	}

Dynamic ZNPNode_ZPP_SimpleVert_obj::__CreateEmpty() { return new ZNPNode_ZPP_SimpleVert_obj; }

void *ZNPNode_ZPP_SimpleVert_obj::_hx_vtable = 0;

Dynamic ZNPNode_ZPP_SimpleVert_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ZNPNode_ZPP_SimpleVert_obj > _hx_result = new ZNPNode_ZPP_SimpleVert_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ZNPNode_ZPP_SimpleVert_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x07c53798;
}

void ZNPNode_ZPP_SimpleVert_obj::alloc(){
            	HX_STACKFRAME(&_hx_pos_ec8b91de38cbe726_15616_alloc)
            	HX_STACK_THIS(this)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_SimpleVert_obj,alloc,(void))

void ZNPNode_ZPP_SimpleVert_obj::free(){
            	HX_STACKFRAME(&_hx_pos_ec8b91de38cbe726_15620_free)
            	HX_STACK_THIS(this)
HXLINE(15620)		this->elt = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_SimpleVert_obj,free,(void))

 ::zpp_nape::geom::ZPP_SimpleVert ZNPNode_ZPP_SimpleVert_obj::elem(){
            	HX_STACKFRAME(&_hx_pos_ec8b91de38cbe726_15627_elem)
            	HX_STACK_THIS(this)
HXLINE(15627)		return this->elt;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_SimpleVert_obj,elem,return )

 ::zpp_nape::util::ZNPNode_ZPP_SimpleVert ZNPNode_ZPP_SimpleVert_obj::zpp_pool;


hx::ObjectPtr< ZNPNode_ZPP_SimpleVert_obj > ZNPNode_ZPP_SimpleVert_obj::__new() {
	hx::ObjectPtr< ZNPNode_ZPP_SimpleVert_obj > __this = new ZNPNode_ZPP_SimpleVert_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ZNPNode_ZPP_SimpleVert_obj > ZNPNode_ZPP_SimpleVert_obj::__alloc(hx::Ctx *_hx_ctx) {
	ZNPNode_ZPP_SimpleVert_obj *__this = (ZNPNode_ZPP_SimpleVert_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ZNPNode_ZPP_SimpleVert_obj), true, "zpp_nape.util.ZNPNode_ZPP_SimpleVert"));
	*(void **)__this = ZNPNode_ZPP_SimpleVert_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ZNPNode_ZPP_SimpleVert_obj::ZNPNode_ZPP_SimpleVert_obj()
{
}

void ZNPNode_ZPP_SimpleVert_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPNode_ZPP_SimpleVert);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(elt,"elt");
	HX_MARK_END_CLASS();
}

void ZNPNode_ZPP_SimpleVert_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(elt,"elt");
}

hx::Val ZNPNode_ZPP_SimpleVert_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { return hx::Val( elt); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return hx::Val( next); }
		if (HX_FIELD_EQ(inName,"free") ) { return hx::Val( free_dyn()); }
		if (HX_FIELD_EQ(inName,"elem") ) { return hx::Val( elem_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return hx::Val( alloc_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZNPNode_ZPP_SimpleVert_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true; }
	}
	return false;
}

hx::Val ZNPNode_ZPP_SimpleVert_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { elt=inValue.Cast<  ::zpp_nape::geom::ZPP_SimpleVert >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::zpp_nape::util::ZNPNode_ZPP_SimpleVert >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZNPNode_ZPP_SimpleVert_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast<  ::zpp_nape::util::ZNPNode_ZPP_SimpleVert >(); return true; }
	}
	return false;
}

void ZNPNode_ZPP_SimpleVert_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("elt","\x2d","\x02","\x4d","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ZNPNode_ZPP_SimpleVert_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_SimpleVert*/ ,(int)offsetof(ZNPNode_ZPP_SimpleVert_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_SimpleVert*/ ,(int)offsetof(ZNPNode_ZPP_SimpleVert_obj,elt),HX_HCSTRING("elt","\x2d","\x02","\x4d","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo ZNPNode_ZPP_SimpleVert_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_SimpleVert*/ ,(void *) &ZNPNode_ZPP_SimpleVert_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ZNPNode_ZPP_SimpleVert_obj_sMemberFields[] = {
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("elt","\x2d","\x02","\x4d","\x00"),
	HX_HCSTRING("elem","\x8f","\xd8","\x14","\x43"),
	::String(null()) };

static void ZNPNode_ZPP_SimpleVert_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_SimpleVert_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_SimpleVert_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ZNPNode_ZPP_SimpleVert_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_SimpleVert_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_SimpleVert_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZNPNode_ZPP_SimpleVert_obj::__mClass;

static ::String ZNPNode_ZPP_SimpleVert_obj_sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	::String(null())
};

void ZNPNode_ZPP_SimpleVert_obj::__register()
{
	hx::Object *dummy = new ZNPNode_ZPP_SimpleVert_obj;
	ZNPNode_ZPP_SimpleVert_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPNode_ZPP_SimpleVert","\x54","\xa8","\xb8","\xdc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZNPNode_ZPP_SimpleVert_obj::__GetStatic;
	__mClass->mSetStaticField = &ZNPNode_ZPP_SimpleVert_obj::__SetStatic;
	__mClass->mMarkFunc = ZNPNode_ZPP_SimpleVert_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ZNPNode_ZPP_SimpleVert_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ZNPNode_ZPP_SimpleVert_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPNode_ZPP_SimpleVert_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ZNPNode_ZPP_SimpleVert_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ZNPNode_ZPP_SimpleVert_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ZNPNode_ZPP_SimpleVert_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ZNPNode_ZPP_SimpleVert_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ec8b91de38cbe726_15589_boot)
HXLINE(15589)		zpp_pool = null();
            	}
}

} // end namespace zpp_nape
} // end namespace util