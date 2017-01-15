// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_nape_dynamics_ArbiterType
#include <nape/dynamics/ArbiterType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9cb01e5310f2f742_181_new,"nape.dynamics.ArbiterType","new",0x498d4181,"nape.dynamics.ArbiterType.new","nape/dynamics/ArbiterType.hx",181,0xeb73a8ef)
HX_DEFINE_STACK_FRAME(_hx_pos_9cb01e5310f2f742_192_toString,"nape.dynamics.ArbiterType","toString",0x6622a7eb,"nape.dynamics.ArbiterType.toString","nape/dynamics/ArbiterType.hx",192,0xeb73a8ef)
HX_DEFINE_STACK_FRAME(_hx_pos_9cb01e5310f2f742_202_get_COLLISION,"nape.dynamics.ArbiterType","get_COLLISION",0xcc73708a,"nape.dynamics.ArbiterType.get_COLLISION","nape/dynamics/ArbiterType.hx",202,0xeb73a8ef)
HX_DEFINE_STACK_FRAME(_hx_pos_9cb01e5310f2f742_215_get_SENSOR,"nape.dynamics.ArbiterType","get_SENSOR",0xf261b302,"nape.dynamics.ArbiterType.get_SENSOR","nape/dynamics/ArbiterType.hx",215,0xeb73a8ef)
HX_DEFINE_STACK_FRAME(_hx_pos_9cb01e5310f2f742_228_get_FLUID,"nape.dynamics.ArbiterType","get_FLUID",0x93db6e22,"nape.dynamics.ArbiterType.get_FLUID","nape/dynamics/ArbiterType.hx",228,0xeb73a8ef)
namespace nape{
namespace dynamics{

void ArbiterType_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_9cb01e5310f2f742_181_new)
            	HX_STACK_THIS(this)
            	}

Dynamic ArbiterType_obj::__CreateEmpty() { return new ArbiterType_obj; }

void *ArbiterType_obj::_hx_vtable = 0;

Dynamic ArbiterType_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ArbiterType_obj > _hx_result = new ArbiterType_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ArbiterType_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x665b3f43;
}

::String ArbiterType_obj::toString(){
            	HX_GC_STACKFRAME(&_hx_pos_9cb01e5310f2f742_192_toString)
            	HX_STACK_THIS(this)
HXLINE( 192)		if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_COLLISION )) {
HXLINE( 192)			::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 192)			::zpp_nape::util::ZPP_Flags_obj::ArbiterType_COLLISION =  ::nape::dynamics::ArbiterType_obj::__alloc( HX_CTX );
HXDLIN( 192)			::zpp_nape::util::ZPP_Flags_obj::internal = false;
            		}
HXDLIN( 192)		if (hx::IsEq( hx::ObjectPtr<OBJ_>(this),::zpp_nape::util::ZPP_Flags_obj::ArbiterType_COLLISION )) {
HXLINE( 192)			return HX_("COLLISION",52,18,93,d6);
            		}
            		else {
HXLINE( 193)			if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_SENSOR )) {
HXLINE( 193)				::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 193)				::zpp_nape::util::ZPP_Flags_obj::ArbiterType_SENSOR =  ::nape::dynamics::ArbiterType_obj::__alloc( HX_CTX );
HXDLIN( 193)				::zpp_nape::util::ZPP_Flags_obj::internal = false;
            			}
HXDLIN( 193)			if (hx::IsEq( hx::ObjectPtr<OBJ_>(this),::zpp_nape::util::ZPP_Flags_obj::ArbiterType_SENSOR )) {
HXLINE( 193)				return HX_("SENSOR",3a,de,12,1e);
            			}
            			else {
HXLINE( 194)				if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_FLUID )) {
HXLINE( 194)					::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXDLIN( 194)					::zpp_nape::util::ZPP_Flags_obj::ArbiterType_FLUID =  ::nape::dynamics::ArbiterType_obj::__alloc( HX_CTX );
HXDLIN( 194)					::zpp_nape::util::ZPP_Flags_obj::internal = false;
            				}
HXDLIN( 194)				if (hx::IsEq( hx::ObjectPtr<OBJ_>(this),::zpp_nape::util::ZPP_Flags_obj::ArbiterType_FLUID )) {
HXLINE( 194)					return HX_("FLUID",ea,91,89,80);
            				}
            				else {
HXLINE( 195)					return HX_("",00,00,00,00);
            				}
            			}
            		}
HXLINE( 192)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ArbiterType_obj,toString,return )

 ::nape::dynamics::ArbiterType ArbiterType_obj::get_COLLISION(){
            	HX_GC_STACKFRAME(&_hx_pos_9cb01e5310f2f742_202_get_COLLISION)
HXLINE( 203)		if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_COLLISION )) {
HXLINE( 204)			::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXLINE( 205)			::zpp_nape::util::ZPP_Flags_obj::ArbiterType_COLLISION =  ::nape::dynamics::ArbiterType_obj::__alloc( HX_CTX );
HXLINE( 206)			::zpp_nape::util::ZPP_Flags_obj::internal = false;
            		}
HXLINE( 208)		return ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_COLLISION;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ArbiterType_obj,get_COLLISION,return )

 ::nape::dynamics::ArbiterType ArbiterType_obj::get_SENSOR(){
            	HX_GC_STACKFRAME(&_hx_pos_9cb01e5310f2f742_215_get_SENSOR)
HXLINE( 216)		if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_SENSOR )) {
HXLINE( 217)			::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXLINE( 218)			::zpp_nape::util::ZPP_Flags_obj::ArbiterType_SENSOR =  ::nape::dynamics::ArbiterType_obj::__alloc( HX_CTX );
HXLINE( 219)			::zpp_nape::util::ZPP_Flags_obj::internal = false;
            		}
HXLINE( 221)		return ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_SENSOR;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ArbiterType_obj,get_SENSOR,return )

 ::nape::dynamics::ArbiterType ArbiterType_obj::get_FLUID(){
            	HX_GC_STACKFRAME(&_hx_pos_9cb01e5310f2f742_228_get_FLUID)
HXLINE( 229)		if (hx::IsNull( ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_FLUID )) {
HXLINE( 230)			::zpp_nape::util::ZPP_Flags_obj::internal = true;
HXLINE( 231)			::zpp_nape::util::ZPP_Flags_obj::ArbiterType_FLUID =  ::nape::dynamics::ArbiterType_obj::__alloc( HX_CTX );
HXLINE( 232)			::zpp_nape::util::ZPP_Flags_obj::internal = false;
            		}
HXLINE( 234)		return ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_FLUID;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ArbiterType_obj,get_FLUID,return )


hx::ObjectPtr< ArbiterType_obj > ArbiterType_obj::__new() {
	hx::ObjectPtr< ArbiterType_obj > __this = new ArbiterType_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ArbiterType_obj > ArbiterType_obj::__alloc(hx::Ctx *_hx_ctx) {
	ArbiterType_obj *__this = (ArbiterType_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ArbiterType_obj), false, "nape.dynamics.ArbiterType"));
	*(void **)__this = ArbiterType_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ArbiterType_obj::ArbiterType_obj()
{
}

hx::Val ArbiterType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool ArbiterType_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"FLUID") ) { if (inCallProp == hx::paccAlways) { outValue = get_FLUID(); return true; } }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"SENSOR") ) { if (inCallProp == hx::paccAlways) { outValue = get_SENSOR(); return true; } }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"COLLISION") ) { if (inCallProp == hx::paccAlways) { outValue = get_COLLISION(); return true; } }
		if (HX_FIELD_EQ(inName,"get_FLUID") ) { outValue = get_FLUID_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_SENSOR") ) { outValue = get_SENSOR_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_COLLISION") ) { outValue = get_COLLISION_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ArbiterType_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ArbiterType_obj_sStaticStorageInfo = 0;
#endif

static ::String ArbiterType_obj_sMemberFields[] = {
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void ArbiterType_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArbiterType_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ArbiterType_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArbiterType_obj::__mClass,"__mClass");
};

#endif

hx::Class ArbiterType_obj::__mClass;

static ::String ArbiterType_obj_sStaticFields[] = {
	HX_HCSTRING("get_COLLISION","\x29","\xec","\xf6","\x97"),
	HX_HCSTRING("get_SENSOR","\x03","\x4e","\x9a","\x0e"),
	HX_HCSTRING("get_FLUID","\x41","\xee","\x32","\xc4"),
	::String(null())
};

void ArbiterType_obj::__register()
{
	hx::Object *dummy = new ArbiterType_obj;
	ArbiterType_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.dynamics.ArbiterType","\x0f","\x6d","\x94","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ArbiterType_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ArbiterType_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ArbiterType_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ArbiterType_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ArbiterType_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ArbiterType_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArbiterType_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArbiterType_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace nape
} // end namespace dynamics