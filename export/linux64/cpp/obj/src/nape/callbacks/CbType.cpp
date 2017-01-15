// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_callbacks_OptionType
#include <nape/callbacks/OptionType.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintList
#include <nape/constraint/ConstraintList.h>
#endif
#ifndef INCLUDED_nape_phys_InteractorList
#include <nape/phys/InteractorList.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Interactor
#include <zpp_nape/util/ZNPList_ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ConstraintList
#include <zpp_nape/util/ZPP_ConstraintList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_InteractorList
#include <zpp_nape/util/ZPP_InteractorList.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dd95da42b58a4b9a_179_new,"nape.callbacks.CbType","new",0x0178d531,"nape.callbacks.CbType.new","nape/callbacks/CbType.hx",179,0x6262b7dd)
HX_DEFINE_STACK_FRAME(_hx_pos_dd95da42b58a4b9a_190_get_id,"nape.callbacks.CbType","get_id",0x562b06f3,"nape.callbacks.CbType.get_id","nape/callbacks/CbType.hx",190,0x6262b7dd)
HX_DEFINE_STACK_FRAME(_hx_pos_dd95da42b58a4b9a_268_including,"nape.callbacks.CbType","including",0x301a38f6,"nape.callbacks.CbType.including","nape/callbacks/CbType.hx",268,0x6262b7dd)
HX_DEFINE_STACK_FRAME(_hx_pos_dd95da42b58a4b9a_284_excluding,"nape.callbacks.CbType","excluding",0x204d0a28,"nape.callbacks.CbType.excluding","nape/callbacks/CbType.hx",284,0x6262b7dd)
HX_DEFINE_STACK_FRAME(_hx_pos_dd95da42b58a4b9a_299_get_userData,"nape.callbacks.CbType","get_userData",0x1328a32d,"nape.callbacks.CbType.get_userData","nape/callbacks/CbType.hx",299,0x6262b7dd)
HX_DEFINE_STACK_FRAME(_hx_pos_dd95da42b58a4b9a_314_get_interactors,"nape.callbacks.CbType","get_interactors",0x9600f9e2,"nape.callbacks.CbType.get_interactors","nape/callbacks/CbType.hx",314,0x6262b7dd)
HX_DEFINE_STACK_FRAME(_hx_pos_dd95da42b58a4b9a_329_get_constraints,"nape.callbacks.CbType","get_constraints",0x7157835e,"nape.callbacks.CbType.get_constraints","nape/callbacks/CbType.hx",329,0x6262b7dd)
HX_DEFINE_STACK_FRAME(_hx_pos_dd95da42b58a4b9a_339_toString,"nape.callbacks.CbType","toString",0xef31b63b,"nape.callbacks.CbType.toString","nape/callbacks/CbType.hx",339,0x6262b7dd)
HX_DEFINE_STACK_FRAME(_hx_pos_dd95da42b58a4b9a_213_get_ANY_BODY,"nape.callbacks.CbType","get_ANY_BODY",0xb409b14d,"nape.callbacks.CbType.get_ANY_BODY","nape/callbacks/CbType.hx",213,0x6262b7dd)
HX_DEFINE_STACK_FRAME(_hx_pos_dd95da42b58a4b9a_226_get_ANY_CONSTRAINT,"nape.callbacks.CbType","get_ANY_CONSTRAINT",0xb49fb548,"nape.callbacks.CbType.get_ANY_CONSTRAINT","nape/callbacks/CbType.hx",226,0x6262b7dd)
HX_DEFINE_STACK_FRAME(_hx_pos_dd95da42b58a4b9a_239_get_ANY_SHAPE,"nape.callbacks.CbType","get_ANY_SHAPE",0x999e81f6,"nape.callbacks.CbType.get_ANY_SHAPE","nape/callbacks/CbType.hx",239,0x6262b7dd)
HX_DEFINE_STACK_FRAME(_hx_pos_dd95da42b58a4b9a_252_get_ANY_COMPOUND,"nape.callbacks.CbType","get_ANY_COMPOUND",0x0756f396,"nape.callbacks.CbType.get_ANY_COMPOUND","nape/callbacks/CbType.hx",252,0x6262b7dd)
namespace nape{
namespace callbacks{

void CbType_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_dd95da42b58a4b9a_179_new)
            	HX_STACK_THIS(this)
HXLINE( 183)		this->zpp_inner = null();
HXLINE( 198)		this->zpp_inner =  ::zpp_nape::callbacks::ZPP_CbType_obj::__alloc( HX_CTX );
HXLINE( 199)		this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
            	}

Dynamic CbType_obj::__CreateEmpty() { return new CbType_obj; }

void *CbType_obj::_hx_vtable = 0;

Dynamic CbType_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CbType_obj > _hx_result = new CbType_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CbType_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2d8a165b;
}

int CbType_obj::get_id(){
            	HX_STACKFRAME(&_hx_pos_dd95da42b58a4b9a_190_get_id)
            	HX_STACK_THIS(this)
HXLINE( 190)		return this->zpp_inner->id;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,get_id,return )

 ::nape::callbacks::OptionType CbType_obj::including( ::Dynamic includes){
            	HX_GC_STACKFRAME(&_hx_pos_dd95da42b58a4b9a_268_including)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(includes,"includes")
HXLINE( 268)		return  ::nape::callbacks::OptionType_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this),null())->including(includes);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CbType_obj,including,return )

 ::nape::callbacks::OptionType CbType_obj::excluding( ::Dynamic excludes){
            	HX_GC_STACKFRAME(&_hx_pos_dd95da42b58a4b9a_284_excluding)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(excludes,"excludes")
HXLINE( 284)		return  ::nape::callbacks::OptionType_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this),null())->excluding(excludes);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CbType_obj,excluding,return )

 ::Dynamic CbType_obj::get_userData(){
            	HX_STACKFRAME(&_hx_pos_dd95da42b58a4b9a_299_get_userData)
            	HX_STACK_THIS(this)
HXLINE( 300)		if (hx::IsNull( this->zpp_inner->userData )) {
HXLINE( 301)			this->zpp_inner->userData =  ::Dynamic(hx::Anon_obj::Create(0));
            		}
HXLINE( 303)		return this->zpp_inner->userData;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,get_userData,return )

 ::nape::phys::InteractorList CbType_obj::get_interactors(){
            	HX_STACKFRAME(&_hx_pos_dd95da42b58a4b9a_314_get_interactors)
            	HX_STACK_THIS(this)
HXLINE( 315)		if (hx::IsNull( this->zpp_inner->wrap_interactors )) {
HXLINE( 316)			this->zpp_inner->wrap_interactors = ::zpp_nape::util::ZPP_InteractorList_obj::get(this->zpp_inner->interactors,true);
            		}
HXLINE( 318)		return this->zpp_inner->wrap_interactors;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,get_interactors,return )

 ::nape::constraint::ConstraintList CbType_obj::get_constraints(){
            	HX_STACKFRAME(&_hx_pos_dd95da42b58a4b9a_329_get_constraints)
            	HX_STACK_THIS(this)
HXLINE( 330)		if (hx::IsNull( this->zpp_inner->wrap_constraints )) {
HXLINE( 331)			this->zpp_inner->wrap_constraints = ::zpp_nape::util::ZPP_ConstraintList_obj::get(this->zpp_inner->constraints,true);
            		}
HXLINE( 333)		return this->zpp_inner->wrap_constraints;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,get_constraints,return )

::String CbType_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_dd95da42b58a4b9a_339_toString)
            	HX_STACK_THIS(this)
HXLINE( 339)		if (hx::IsEq( hx::ObjectPtr<OBJ_>(this),::zpp_nape::callbacks::ZPP_CbType_obj::ANY_BODY )) {
HXLINE( 339)			return HX_("ANY_BODY",35,a4,09,a6);
            		}
            		else {
HXLINE( 340)			if (hx::IsEq( hx::ObjectPtr<OBJ_>(this),::zpp_nape::callbacks::ZPP_CbType_obj::ANY_SHAPE )) {
HXLINE( 339)				return HX_("ANY_SHAPE",0e,1a,93,67);
            			}
            			else {
HXLINE( 341)				if (hx::IsEq( hx::ObjectPtr<OBJ_>(this),::zpp_nape::callbacks::ZPP_CbType_obj::ANY_COMPOUND )) {
HXLINE( 339)					return HX_("ANY_COMPOUND",7e,7a,2e,f2);
            				}
            				else {
HXLINE( 342)					if (hx::IsEq( hx::ObjectPtr<OBJ_>(this),::zpp_nape::callbacks::ZPP_CbType_obj::ANY_CONSTRAINT )) {
HXLINE( 339)						return HX_("ANY_CONSTRAINT",30,c6,94,a9);
            					}
            					else {
HXLINE( 339)						return (HX_("CbType#",ea,50,10,bf) + this->zpp_inner->id);
            					}
            				}
            			}
            		}
HXDLIN( 339)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,toString,return )

 ::nape::callbacks::CbType CbType_obj::get_ANY_BODY(){
            	HX_STACKFRAME(&_hx_pos_dd95da42b58a4b9a_213_get_ANY_BODY)
HXLINE( 213)		return ::zpp_nape::callbacks::ZPP_CbType_obj::ANY_BODY;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,get_ANY_BODY,return )

 ::nape::callbacks::CbType CbType_obj::get_ANY_CONSTRAINT(){
            	HX_STACKFRAME(&_hx_pos_dd95da42b58a4b9a_226_get_ANY_CONSTRAINT)
HXLINE( 226)		return ::zpp_nape::callbacks::ZPP_CbType_obj::ANY_CONSTRAINT;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,get_ANY_CONSTRAINT,return )

 ::nape::callbacks::CbType CbType_obj::get_ANY_SHAPE(){
            	HX_STACKFRAME(&_hx_pos_dd95da42b58a4b9a_239_get_ANY_SHAPE)
HXLINE( 239)		return ::zpp_nape::callbacks::ZPP_CbType_obj::ANY_SHAPE;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,get_ANY_SHAPE,return )

 ::nape::callbacks::CbType CbType_obj::get_ANY_COMPOUND(){
            	HX_STACKFRAME(&_hx_pos_dd95da42b58a4b9a_252_get_ANY_COMPOUND)
HXLINE( 252)		return ::zpp_nape::callbacks::ZPP_CbType_obj::ANY_COMPOUND;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,get_ANY_COMPOUND,return )


hx::ObjectPtr< CbType_obj > CbType_obj::__new() {
	hx::ObjectPtr< CbType_obj > __this = new CbType_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< CbType_obj > CbType_obj::__alloc(hx::Ctx *_hx_ctx) {
	CbType_obj *__this = (CbType_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CbType_obj), true, "nape.callbacks.CbType"));
	*(void **)__this = CbType_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CbType_obj::CbType_obj()
{
}

void CbType_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CbType);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void CbType_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

hx::Val CbType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_id()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_id") ) { return hx::Val( get_id_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_userData()); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return hx::Val( zpp_inner); }
		if (HX_FIELD_EQ(inName,"including") ) { return hx::Val( including_dyn()); }
		if (HX_FIELD_EQ(inName,"excluding") ) { return hx::Val( excluding_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interactors") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_interactors()); }
		if (HX_FIELD_EQ(inName,"constraints") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_constraints()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_userData") ) { return hx::Val( get_userData_dyn()); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_interactors") ) { return hx::Val( get_interactors_dyn()); }
		if (HX_FIELD_EQ(inName,"get_constraints") ) { return hx::Val( get_constraints_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool CbType_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"ANY_BODY") ) { if (inCallProp == hx::paccAlways) { outValue = get_ANY_BODY(); return true; } }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ANY_SHAPE") ) { if (inCallProp == hx::paccAlways) { outValue = get_ANY_SHAPE(); return true; } }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_ANY_BODY") ) { outValue = get_ANY_BODY_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ANY_COMPOUND") ) { if (inCallProp == hx::paccAlways) { outValue = get_ANY_COMPOUND(); return true; } }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_ANY_SHAPE") ) { outValue = get_ANY_SHAPE_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ANY_CONSTRAINT") ) { if (inCallProp == hx::paccAlways) { outValue = get_ANY_CONSTRAINT(); return true; } }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_ANY_COMPOUND") ) { outValue = get_ANY_COMPOUND_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_ANY_CONSTRAINT") ) { outValue = get_ANY_CONSTRAINT_dyn(); return true; }
	}
	return false;
}

hx::Val CbType_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast<  ::zpp_nape::callbacks::ZPP_CbType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CbType_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("userData","\x15","\x96","\x28","\x05"));
	outFields->push(HX_HCSTRING("interactors","\xfa","\xc7","\x5d","\x3c"));
	outFields->push(HX_HCSTRING("constraints","\x76","\x51","\xb4","\x17"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CbType_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_CbType*/ ,(int)offsetof(CbType_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *CbType_obj_sStaticStorageInfo = 0;
#endif

static ::String CbType_obj_sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("get_id","\x24","\xf3","\x2f","\xa3"),
	HX_HCSTRING("including","\x65","\x41","\x54","\xfc"),
	HX_HCSTRING("excluding","\x97","\x12","\x87","\xec"),
	HX_HCSTRING("get_userData","\x1e","\x4a","\x42","\xba"),
	HX_HCSTRING("get_interactors","\x91","\x7f","\x3f","\xfd"),
	HX_HCSTRING("get_constraints","\x0d","\x09","\x96","\xd8"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void CbType_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CbType_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CbType_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CbType_obj::__mClass,"__mClass");
};

#endif

hx::Class CbType_obj::__mClass;

static ::String CbType_obj_sStaticFields[] = {
	HX_HCSTRING("get_ANY_BODY","\x3e","\x58","\x23","\x5b"),
	HX_HCSTRING("get_ANY_CONSTRAINT","\xf9","\xa6","\x2e","\x45"),
	HX_HCSTRING("get_ANY_SHAPE","\xe5","\xed","\xf6","\x28"),
	HX_HCSTRING("get_ANY_COMPOUND","\x07","\x67","\xcd","\xf6"),
	::String(null())
};

void CbType_obj::__register()
{
	hx::Object *dummy = new CbType_obj;
	CbType_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.callbacks.CbType","\xbf","\x68","\xe0","\x4c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CbType_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CbType_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CbType_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CbType_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CbType_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CbType_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CbType_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CbType_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace nape
} // end namespace callbacks