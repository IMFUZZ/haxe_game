// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_space_ZPP_AABBNode
#include <zpp_nape/space/ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_AABBNode
#include <zpp_nape/util/ZNPNode_ZPP_AABBNode.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e8a57255061b6315_15803_new,"zpp_nape.util.ZNPNode_ZPP_AABBNode","new",0x5c4e8725,"zpp_nape.util.ZNPNode_ZPP_AABBNode.new","zpp_nape/util/Lists.hx",15803,0x9f4e6754)
HX_DEFINE_STACK_FRAME(_hx_pos_e8a57255061b6315_15831_alloc,"zpp_nape.util.ZNPNode_ZPP_AABBNode","alloc",0x7abd567a,"zpp_nape.util.ZNPNode_ZPP_AABBNode.alloc","zpp_nape/util/Lists.hx",15831,0x9f4e6754)
HX_DEFINE_STACK_FRAME(_hx_pos_e8a57255061b6315_15835_free,"zpp_nape.util.ZNPNode_ZPP_AABBNode","free",0x6327d247,"zpp_nape.util.ZNPNode_ZPP_AABBNode.free","zpp_nape/util/Lists.hx",15835,0x9f4e6754)
HX_DEFINE_STACK_FRAME(_hx_pos_e8a57255061b6315_15842_elem,"zpp_nape.util.ZNPNode_ZPP_AABBNode","elem",0x627a0e2a,"zpp_nape.util.ZNPNode_ZPP_AABBNode.elem","zpp_nape/util/Lists.hx",15842,0x9f4e6754)
HX_DEFINE_STACK_FRAME(_hx_pos_e8a57255061b6315_15804_boot,"zpp_nape.util.ZNPNode_ZPP_AABBNode","boot",0x6080b9cd,"zpp_nape.util.ZNPNode_ZPP_AABBNode.boot","zpp_nape/util/Lists.hx",15804,0x9f4e6754)
namespace zpp_nape{
namespace util{

void ZNPNode_ZPP_AABBNode_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e8a57255061b6315_15803_new)
            	HX_STACK_THIS(this)
HXLINE(15837)		this->elt = null();
HXLINE(15828)		this->next = null();
            	}

Dynamic ZNPNode_ZPP_AABBNode_obj::__CreateEmpty() { return new ZNPNode_ZPP_AABBNode_obj; }

void *ZNPNode_ZPP_AABBNode_obj::_hx_vtable = 0;

Dynamic ZNPNode_ZPP_AABBNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ZNPNode_ZPP_AABBNode_obj > _hx_result = new ZNPNode_ZPP_AABBNode_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ZNPNode_ZPP_AABBNode_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3306995b;
}

void ZNPNode_ZPP_AABBNode_obj::alloc(){
            	HX_STACKFRAME(&_hx_pos_e8a57255061b6315_15831_alloc)
            	HX_STACK_THIS(this)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_AABBNode_obj,alloc,(void))

void ZNPNode_ZPP_AABBNode_obj::free(){
            	HX_STACKFRAME(&_hx_pos_e8a57255061b6315_15835_free)
            	HX_STACK_THIS(this)
HXLINE(15835)		this->elt = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_AABBNode_obj,free,(void))

 ::zpp_nape::space::ZPP_AABBNode ZNPNode_ZPP_AABBNode_obj::elem(){
            	HX_STACKFRAME(&_hx_pos_e8a57255061b6315_15842_elem)
            	HX_STACK_THIS(this)
HXLINE(15842)		return this->elt;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_AABBNode_obj,elem,return )

 ::zpp_nape::util::ZNPNode_ZPP_AABBNode ZNPNode_ZPP_AABBNode_obj::zpp_pool;


hx::ObjectPtr< ZNPNode_ZPP_AABBNode_obj > ZNPNode_ZPP_AABBNode_obj::__new() {
	hx::ObjectPtr< ZNPNode_ZPP_AABBNode_obj > __this = new ZNPNode_ZPP_AABBNode_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ZNPNode_ZPP_AABBNode_obj > ZNPNode_ZPP_AABBNode_obj::__alloc(hx::Ctx *_hx_ctx) {
	ZNPNode_ZPP_AABBNode_obj *__this = (ZNPNode_ZPP_AABBNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ZNPNode_ZPP_AABBNode_obj), true, "zpp_nape.util.ZNPNode_ZPP_AABBNode"));
	*(void **)__this = ZNPNode_ZPP_AABBNode_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ZNPNode_ZPP_AABBNode_obj::ZNPNode_ZPP_AABBNode_obj()
{
}

void ZNPNode_ZPP_AABBNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPNode_ZPP_AABBNode);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(elt,"elt");
	HX_MARK_END_CLASS();
}

void ZNPNode_ZPP_AABBNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(elt,"elt");
}

hx::Val ZNPNode_ZPP_AABBNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

bool ZNPNode_ZPP_AABBNode_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true; }
	}
	return false;
}

hx::Val ZNPNode_ZPP_AABBNode_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { elt=inValue.Cast<  ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::zpp_nape::util::ZNPNode_ZPP_AABBNode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZNPNode_ZPP_AABBNode_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast<  ::zpp_nape::util::ZNPNode_ZPP_AABBNode >(); return true; }
	}
	return false;
}

void ZNPNode_ZPP_AABBNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("elt","\x2d","\x02","\x4d","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ZNPNode_ZPP_AABBNode_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_AABBNode*/ ,(int)offsetof(ZNPNode_ZPP_AABBNode_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsObject /*::zpp_nape::space::ZPP_AABBNode*/ ,(int)offsetof(ZNPNode_ZPP_AABBNode_obj,elt),HX_HCSTRING("elt","\x2d","\x02","\x4d","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo ZNPNode_ZPP_AABBNode_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_AABBNode*/ ,(void *) &ZNPNode_ZPP_AABBNode_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ZNPNode_ZPP_AABBNode_obj_sMemberFields[] = {
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("elt","\x2d","\x02","\x4d","\x00"),
	HX_HCSTRING("elem","\x8f","\xd8","\x14","\x43"),
	::String(null()) };

static void ZNPNode_ZPP_AABBNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_AABBNode_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_AABBNode_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ZNPNode_ZPP_AABBNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_AABBNode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_AABBNode_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZNPNode_ZPP_AABBNode_obj::__mClass;

static ::String ZNPNode_ZPP_AABBNode_obj_sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	::String(null())
};

void ZNPNode_ZPP_AABBNode_obj::__register()
{
	hx::Object *dummy = new ZNPNode_ZPP_AABBNode_obj;
	ZNPNode_ZPP_AABBNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZNPNode_ZPP_AABBNode","\xb3","\x10","\x11","\x67");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZNPNode_ZPP_AABBNode_obj::__GetStatic;
	__mClass->mSetStaticField = &ZNPNode_ZPP_AABBNode_obj::__SetStatic;
	__mClass->mMarkFunc = ZNPNode_ZPP_AABBNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ZNPNode_ZPP_AABBNode_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ZNPNode_ZPP_AABBNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZNPNode_ZPP_AABBNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ZNPNode_ZPP_AABBNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ZNPNode_ZPP_AABBNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ZNPNode_ZPP_AABBNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ZNPNode_ZPP_AABBNode_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e8a57255061b6315_15804_boot)
HXLINE(15804)		zpp_pool = null();
            	}
}

} // end namespace zpp_nape
} // end namespace util