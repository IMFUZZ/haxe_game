// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_ToiEvent
#include <zpp_nape/geom/ZPP_ToiEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_ToiEvent
#include <zpp_nape/util/ZNPNode_ZPP_ToiEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_90c5d10dc8502d83_16104_new,"zpp_nape.util.ZNPNode_ZPP_ToiEvent","new",0x1c46ee2f,"zpp_nape.util.ZNPNode_ZPP_ToiEvent.new","zpp_nape/util/Lists.hx",16104,0x9f4e6754)
HX_DEFINE_STACK_FRAME(_hx_pos_90c5d10dc8502d83_16132_alloc,"zpp_nape.util.ZNPNode_ZPP_ToiEvent","alloc",0x76e51404,"zpp_nape.util.ZNPNode_ZPP_ToiEvent.alloc","zpp_nape/util/Lists.hx",16132,0x9f4e6754)
HX_DEFINE_STACK_FRAME(_hx_pos_90c5d10dc8502d83_16136_free,"zpp_nape.util.ZNPNode_ZPP_ToiEvent","free",0x9c8993fd,"zpp_nape.util.ZNPNode_ZPP_ToiEvent.free","zpp_nape/util/Lists.hx",16136,0x9f4e6754)
HX_DEFINE_STACK_FRAME(_hx_pos_90c5d10dc8502d83_16143_elem,"zpp_nape.util.ZNPNode_ZPP_ToiEvent","elem",0x9bdbcfe0,"zpp_nape.util.ZNPNode_ZPP_ToiEvent.elem","zpp_nape/util/Lists.hx",16143,0x9f4e6754)
HX_DEFINE_STACK_FRAME(_hx_pos_90c5d10dc8502d83_16105_boot,"zpp_nape.util.ZNPNode_ZPP_ToiEvent","boot",0x99e27b83,"zpp_nape.util.ZNPNode_ZPP_ToiEvent.boot","zpp_nape/util/Lists.hx",16105,0x9f4e6754)
namespace zpp_nape{
namespace util{

void ZNPNode_ZPP_ToiEvent_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_90c5d10dc8502d83_16104_new)
            	HX_STACK_THIS(this)
HXLINE(16138)		this->elt = null();
HXLINE(16129)		this->next = null();
            	}

Dynamic ZNPNode_ZPP_ToiEvent_obj::__CreateEmpty() { return new ZNPNode_ZPP_ToiEvent_obj; }

void *ZNPNode_ZPP_ToiEvent_obj::_hx_vtable = 0;

Dynamic ZNPNode_ZPP_ToiEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ZNPNode_ZPP_ToiEvent_obj > _hx_result = new ZNPNode_ZPP_ToiEvent_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ZNPNode_ZPP_ToiEvent_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1ac22101;
}

void ZNPNode_ZPP_ToiEvent_obj::alloc(){
            	HX_STACKFRAME(&_hx_pos_90c5d10dc8502d83_16132_alloc)
            	HX_STACK_THIS(this)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_ToiEvent_obj,alloc,(void))

void ZNPNode_ZPP_ToiEvent_obj::free(){
            	HX_STACKFRAME(&_hx_pos_90c5d10dc8502d83_16136_free)
            	HX_STACK_THIS(this)
HXLINE(16136)		this->elt = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_ToiEvent_obj,free,(void))

 ::zpp_nape::geom::ZPP_ToiEvent ZNPNode_ZPP_ToiEvent_obj::elem(){
            	HX_STACKFRAME(&_hx_pos_90c5d10dc8502d83_16143_elem)
            	HX_STACK_THIS(this)
HXLINE(16143)		return this->elt;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_ToiEvent_obj,elem,return )

 ::zpp_nape::util::ZNPNode_ZPP_ToiEvent ZNPNode_ZPP_ToiEvent_obj::zpp_pool;


hx::ObjectPtr< ZNPNode_ZPP_ToiEvent_obj > ZNPNode_ZPP_ToiEvent_obj::__new() {
	hx::ObjectPtr< ZNPNode_ZPP_ToiEvent_obj > __this = new ZNPNode_ZPP_ToiEvent_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ZNPNode_ZPP_ToiEvent_obj > ZNPNode_ZPP_ToiEvent_obj::__alloc(hx::Ctx *_hx_ctx) {
	ZNPNode_ZPP_ToiEvent_obj *__this = (ZNPNode_ZPP_ToiEvent_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ZNPNode_ZPP_ToiEvent_obj), true, "zpp_nape.util.ZNPNode_ZPP_ToiEvent"));
	*(void **)__this = ZNPNode_ZPP_ToiEvent_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ZNPNode_ZPP_ToiEvent_obj::ZNPNode_ZPP_ToiEvent_obj()
{
}

void ZNPNode_ZPP_ToiEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPNode_ZPP_ToiEvent);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(elt,"elt");
	HX_MARK_END_CLASS();
}

void ZNPNode_ZPP_ToiEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(elt,"elt");
}

hx::Val ZNPNode_ZPP_ToiEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

bool ZNPNode_ZPP_ToiEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true; }
	}
	return false;
}

hx::Val ZNPNode_ZPP_ToiEvent_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { elt=inValue.Cast<  ::zpp_nape::geom::ZPP_ToiEvent >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::zpp_nape::util::ZNPNode_ZPP_ToiEvent >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZNPNode_ZPP_ToiEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast<  ::zpp_nape::util::ZNPNode_ZPP_ToiEvent >(); return true; }
	}
	return false;
}

void ZNPNode_ZPP_ToiEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("elt","\x2d","\x02","\x4d","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ZNPNode_ZPP_ToiEvent_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_ToiEvent*/ ,(int)offsetof(ZNPNode_ZPP_ToiEvent_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_ToiEvent*/ ,(int)offsetof(ZNPNode_ZPP_ToiEvent_obj,elt),HX_HCSTRING("elt","\x2d","\x02","\x4d","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo ZNPNode_ZPP_ToiEvent_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_ToiEvent*/ ,(void *) &ZNPNode_ZPP_ToiEvent_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ZNPNode_ZPP_ToiEvent_obj_sMemberFields[] = {
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("elt","\x2d","\x02","\x4d","\x00"),
	HX_HCSTRING("elem","\x8f","\xd8","\x14","\x43"),
	::String(null()) };

static void ZNPNode_ZPP_ToiEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_ToiEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_ToiEvent_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ZNPNode_ZPP_ToiEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_ToiEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_ToiEvent_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZNPNode_ZPP_ToiEvent_obj::__mClass;

static ::String ZNPNode_ZPP_ToiEvent_obj_sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	::String(null())
};

void ZNPNode_ZPP_ToiEvent_obj::__register()
{
	hx::Object *dummy = new ZNPNode_ZPP_ToiEvent_obj;
	ZNPNode_ZPP_ToiEvent_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPNode_ZPP_ToiEvent","\xbd","\xaa","\x32","\x8b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZNPNode_ZPP_ToiEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &ZNPNode_ZPP_ToiEvent_obj::__SetStatic;
	__mClass->mMarkFunc = ZNPNode_ZPP_ToiEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ZNPNode_ZPP_ToiEvent_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ZNPNode_ZPP_ToiEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPNode_ZPP_ToiEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ZNPNode_ZPP_ToiEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ZNPNode_ZPP_ToiEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ZNPNode_ZPP_ToiEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ZNPNode_ZPP_ToiEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_90c5d10dc8502d83_16105_boot)
HXLINE(16105)		zpp_pool = null();
            	}
}

} // end namespace zpp_nape
} // end namespace util