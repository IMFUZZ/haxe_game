// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_PreFlag
#include <nape/callbacks/PreFlag.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9dee940dc70a01b9_182_new,"nape.callbacks.PreFlag","new",0xdcfcc45b,"nape.callbacks.PreFlag.new","nape/callbacks/PreFlag.hx",182,0x68e91137)
HX_DEFINE_STACK_FRAME(_hx_pos_9dee940dc70a01b9_193_toString,"nape.callbacks.PreFlag","toString",0x8f088ed1,"nape.callbacks.PreFlag.toString","nape/callbacks/PreFlag.hx",193,0x68e91137)
HX_DEFINE_STACK_FRAME(_hx_pos_9dee940dc70a01b9_204_get_ACCEPT,"nape.callbacks.PreFlag","get_ACCEPT",0x2d320036,"nape.callbacks.PreFlag.get_ACCEPT","nape/callbacks/PreFlag.hx",204,0x68e91137)
HX_DEFINE_STACK_FRAME(_hx_pos_9dee940dc70a01b9_217_get_IGNORE,"nape.callbacks.PreFlag","get_IGNORE",0xb4f42640,"nape.callbacks.PreFlag.get_IGNORE","nape/callbacks/PreFlag.hx",217,0x68e91137)
HX_DEFINE_STACK_FRAME(_hx_pos_9dee940dc70a01b9_231_get_ACCEPT_ONCE,"nape.callbacks.PreFlag","get_ACCEPT_ONCE",0x3c57dd6a,"nape.callbacks.PreFlag.get_ACCEPT_ONCE","nape/callbacks/PreFlag.hx",231,0x68e91137)
HX_DEFINE_STACK_FRAME(_hx_pos_9dee940dc70a01b9_245_get_IGNORE_ONCE,"nape.callbacks.PreFlag","get_IGNORE_ONCE",0xe49d9320,"nape.callbacks.PreFlag.get_IGNORE_ONCE","nape/callbacks/PreFlag.hx",245,0x68e91137)
namespace nape{
namespace callbacks{

void PreFlag_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_9dee940dc70a01b9_182_new)
            	HX_STACK_THIS(this)
            	}

Dynamic PreFlag_obj::__CreateEmpty() { return new PreFlag_obj; }

void *PreFlag_obj::_hx_vtable = 0;

Dynamic PreFlag_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PreFlag_obj > _hx_result = new PreFlag_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PreFlag_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4eda2969;
}

::String PreFlag_obj::toString(){
            	HX_GC_STACKFRAME(&_hx_pos_9dee940dc70a01b9_193_toString)
            	HX_STACK_THIS(this)
HXLINE( 193)		if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT )) {
HXLINE( 193)			::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 193)			::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT =  ::nape::callbacks::PreFlag_obj::__alloc( HX_CTX );
HXDLIN( 193)			::zpp_nape::util::ZPP_Flags_obj::internal = false;
            		}
HXDLIN( 193)		if (hx::IsEq( hx::ObjectPtr<OBJ_>(this),::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT )) {
HXLINE( 193)			return HX_("ACCEPT",08,3f,89,bd);
            		}
            		else {
HXLINE( 194)			if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE )) {
HXLINE( 194)				::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 194)				::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE =  ::nape::callbacks::PreFlag_obj::__alloc( HX_CTX );
HXDLIN( 194)				::zpp_nape::util::ZPP_Flags_obj::internal = false;
            			}
HXDLIN( 194)			if (hx::IsEq( hx::ObjectPtr<OBJ_>(this),::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE )) {
HXLINE( 194)				return HX_("IGNORE",12,65,4b,45);
            			}
            			else {
HXLINE( 195)				if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE )) {
HXLINE( 195)					::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 195)					::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE =  ::nape::callbacks::PreFlag_obj::__alloc( HX_CTX );
HXDLIN( 195)					::zpp_nape::util::ZPP_Flags_obj::internal = false;
            				}
HXDLIN( 195)				if (hx::IsEq( hx::ObjectPtr<OBJ_>(this),::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE )) {
HXLINE( 195)					return HX_("ACCEPT_ONCE",58,a5,f1,27);
            				}
            				else {
HXLINE( 196)					if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE )) {
HXLINE( 196)						::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 196)						::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE =  ::nape::callbacks::PreFlag_obj::__alloc( HX_CTX );
HXDLIN( 196)						::zpp_nape::util::ZPP_Flags_obj::internal = false;
            					}
HXDLIN( 196)					if (hx::IsEq( hx::ObjectPtr<OBJ_>(this),::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE )) {
HXLINE( 196)						return HX_("IGNORE_ONCE",0e,5b,37,d0);
            					}
            					else {
HXLINE( 197)						return HX_("",00,00,00,00);
            					}
            				}
            			}
            		}
HXLINE( 193)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(PreFlag_obj,toString,return )

 ::nape::callbacks::PreFlag PreFlag_obj::get_ACCEPT(){
            	HX_GC_STACKFRAME(&_hx_pos_9dee940dc70a01b9_204_get_ACCEPT)
HXLINE( 205)		if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT )) {
HXLINE( 206)			::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXLINE( 207)			::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT =  ::nape::callbacks::PreFlag_obj::__alloc( HX_CTX );
HXLINE( 208)			::zpp_nape::util::ZPP_Flags_obj::internal = false;
            		}
HXLINE( 210)		return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PreFlag_obj,get_ACCEPT,return )

 ::nape::callbacks::PreFlag PreFlag_obj::get_IGNORE(){
            	HX_GC_STACKFRAME(&_hx_pos_9dee940dc70a01b9_217_get_IGNORE)
HXLINE( 218)		if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE )) {
HXLINE( 219)			::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXLINE( 220)			::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE =  ::nape::callbacks::PreFlag_obj::__alloc( HX_CTX );
HXLINE( 221)			::zpp_nape::util::ZPP_Flags_obj::internal = false;
            		}
HXLINE( 223)		return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PreFlag_obj,get_IGNORE,return )

 ::nape::callbacks::PreFlag PreFlag_obj::get_ACCEPT_ONCE(){
            	HX_GC_STACKFRAME(&_hx_pos_9dee940dc70a01b9_231_get_ACCEPT_ONCE)
HXLINE( 232)		if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE )) {
HXLINE( 233)			::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXLINE( 234)			::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE =  ::nape::callbacks::PreFlag_obj::__alloc( HX_CTX );
HXLINE( 235)			::zpp_nape::util::ZPP_Flags_obj::internal = false;
            		}
HXLINE( 237)		return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PreFlag_obj,get_ACCEPT_ONCE,return )

 ::nape::callbacks::PreFlag PreFlag_obj::get_IGNORE_ONCE(){
            	HX_GC_STACKFRAME(&_hx_pos_9dee940dc70a01b9_245_get_IGNORE_ONCE)
HXLINE( 246)		if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE )) {
HXLINE( 247)			::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXLINE( 248)			::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE =  ::nape::callbacks::PreFlag_obj::__alloc( HX_CTX );
HXLINE( 249)			::zpp_nape::util::ZPP_Flags_obj::internal = false;
            		}
HXLINE( 251)		return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PreFlag_obj,get_IGNORE_ONCE,return )


hx::ObjectPtr< PreFlag_obj > PreFlag_obj::__new() {
	hx::ObjectPtr< PreFlag_obj > __this = new PreFlag_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< PreFlag_obj > PreFlag_obj::__alloc(hx::Ctx *_hx_ctx) {
	PreFlag_obj *__this = (PreFlag_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(PreFlag_obj), false, "nape.callbacks.PreFlag"));
	*(void **)__this = PreFlag_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PreFlag_obj::PreFlag_obj()
{
}

hx::Val PreFlag_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool PreFlag_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"ACCEPT") ) { if (inCallProp == hx::paccAlways) { outValue = get_ACCEPT(); return true; } }
		if (HX_FIELD_EQ(inName,"IGNORE") ) { if (inCallProp == hx::paccAlways) { outValue = get_IGNORE(); return true; } }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_ACCEPT") ) { outValue = get_ACCEPT_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_IGNORE") ) { outValue = get_IGNORE_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ACCEPT_ONCE") ) { if (inCallProp == hx::paccAlways) { outValue = get_ACCEPT_ONCE(); return true; } }
		if (HX_FIELD_EQ(inName,"IGNORE_ONCE") ) { if (inCallProp == hx::paccAlways) { outValue = get_IGNORE_ONCE(); return true; } }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_ACCEPT_ONCE") ) { outValue = get_ACCEPT_ONCE_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_IGNORE_ONCE") ) { outValue = get_IGNORE_ONCE_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *PreFlag_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *PreFlag_obj_sStaticStorageInfo = 0;
#endif

static ::String PreFlag_obj_sMemberFields[] = {
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void PreFlag_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PreFlag_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PreFlag_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PreFlag_obj::__mClass,"__mClass");
};

#endif

hx::Class PreFlag_obj::__mClass;

static ::String PreFlag_obj_sStaticFields[] = {
	HX_HCSTRING("get_ACCEPT","\xd1","\xae","\x10","\xae"),
	HX_HCSTRING("get_IGNORE","\xdb","\xd4","\xd2","\x35"),
	HX_HCSTRING("get_ACCEPT_ONCE","\xef","\x5c","\xd3","\xe8"),
	HX_HCSTRING("get_IGNORE_ONCE","\xa5","\x12","\x19","\x91"),
	::String(null())
};

void PreFlag_obj::__register()
{
	hx::Object *dummy = new PreFlag_obj;
	PreFlag_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.callbacks.PreFlag","\xe9","\xfa","\xde","\x21");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PreFlag_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = PreFlag_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(PreFlag_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(PreFlag_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PreFlag_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PreFlag_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PreFlag_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PreFlag_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace nape
} // end namespace callbacks