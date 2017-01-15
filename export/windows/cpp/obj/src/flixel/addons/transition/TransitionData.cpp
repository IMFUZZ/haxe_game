// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_08537cdcafeb1abd_31_new,"flixel.addons.transition.TransitionData","new",0xeede78c1,"flixel.addons.transition.TransitionData.new","flixel/addons/transition/TransitionData.hx",31,0x1113eace)
HX_DEFINE_STACK_FRAME(_hx_pos_08537cdcafeb1abd_42_destroy,"flixel.addons.transition.TransitionData","destroy",0x4b6319db,"flixel.addons.transition.TransitionData.destroy","flixel/addons/transition/TransitionData.hx",42,0x1113eace)
namespace flixel{
namespace addons{
namespace transition{

void TransitionData_obj::__construct(::String __o_TransType,hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration, ::flixel::math::FlxPoint Direction, ::Dynamic TileData, ::flixel::math::FlxRect Region){
::String TransType = __o_TransType.Default(HX_HCSTRING("fade","\x7c","\xb5","\xb5","\x43"));
int Color = __o_Color.Default(-1);
Float Duration = __o_Duration.Default(((Float)1.0));
            	HX_GC_STACKFRAME(&_hx_pos_08537cdcafeb1abd_31_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(TransType,"TransType")
            	HX_STACK_ARG(Color,"Color")
            	HX_STACK_ARG(Duration,"Duration")
            	HX_STACK_ARG(Direction,"Direction")
            	HX_STACK_ARG(TileData,"TileData")
            	HX_STACK_ARG(Region,"Region")
HXLINE(  36)		this->duration = ((Float)1.0);
HXLINE(  54)		this->type = TransType;
HXLINE(  55)		this->tileData = TileData;
HXLINE(  56)		this->duration = Duration;
HXLINE(  57)		this->color = Color;
HXLINE(  58)		this->direction = Direction;
HXLINE(  59)		if (hx::IsNull( this->direction )) {
HXLINE(  59)			this->direction =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,(int)0,(int)0);
            		}
HXLINE(  60)		{
HXLINE(  60)			HX_VARI( Float,Value) = this->direction->x;
HXDLIN(  60)			HX_VAR( Float,lowerBound);
HXDLIN(  60)			if ((Value < (int)-1)) {
HXLINE(  60)				lowerBound = (int)-1;
            			}
            			else {
HXLINE(  60)				lowerBound = Value;
            			}
            		}
HXLINE(  61)		{
HXLINE(  61)			HX_VARI_NAME( Float,Value1,"Value") = this->direction->y;
HXDLIN(  61)			HX_VAR_NAME( Float,lowerBound1,"lowerBound");
HXDLIN(  61)			if ((Value1 < (int)-1)) {
HXLINE(  61)				lowerBound1 = (int)-1;
            			}
            			else {
HXLINE(  61)				lowerBound1 = Value1;
            			}
            		}
HXLINE(  62)		this->tweenOptions =  ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("onComplete",f8,d4,7e,5d),null()));
HXLINE(  63)		this->region = Region;
HXLINE(  64)		if (hx::IsNull( Region )) {
HXLINE(  66)			this->region =  ::flixel::math::FlxRect_obj::__alloc( HX_CTX ,(int)0,(int)0,::flixel::FlxG_obj::width,::flixel::FlxG_obj::height);
            		}
            	}

Dynamic TransitionData_obj::__CreateEmpty() { return new TransitionData_obj; }

void *TransitionData_obj::_hx_vtable = 0;

Dynamic TransitionData_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TransitionData_obj > _hx_result = new TransitionData_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool TransitionData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3775d187;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_addons_transition_TransitionData__hx_flixel_util_IFlxDestroyable= {
	( void (hx::Object::*)())&::flixel::addons::transition::TransitionData_obj::destroy,
};

void *TransitionData_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_addons_transition_TransitionData__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void TransitionData_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_08537cdcafeb1abd_42_destroy)
            	HX_STACK_THIS(this)
HXLINE(  43)		this->tileData = null();
HXLINE(  44)		this->direction = null();
HXLINE(  45)		this->tweenOptions->__SetField(HX_("onComplete",f8,d4,7e,5d),null(),hx::paccDynamic);
HXLINE(  46)		this->tweenOptions->__SetField(HX_("ease",ee,8b,0c,43),null(),hx::paccDynamic);
HXLINE(  47)		this->tweenOptions = null();
HXLINE(  48)		this->region = null();
HXLINE(  49)		this->direction = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TransitionData_obj,destroy,(void))


hx::ObjectPtr< TransitionData_obj > TransitionData_obj::__new(::String __o_TransType,hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration, ::flixel::math::FlxPoint Direction, ::Dynamic TileData, ::flixel::math::FlxRect Region) {
	hx::ObjectPtr< TransitionData_obj > __this = new TransitionData_obj();
	__this->__construct(__o_TransType,__o_Color,__o_Duration,Direction,TileData,Region);
	return __this;
}

hx::ObjectPtr< TransitionData_obj > TransitionData_obj::__alloc(hx::Ctx *_hx_ctx,::String __o_TransType,hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration, ::flixel::math::FlxPoint Direction, ::Dynamic TileData, ::flixel::math::FlxRect Region) {
	TransitionData_obj *__this = (TransitionData_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TransitionData_obj), true, "flixel.addons.transition.TransitionData"));
	*(void **)__this = TransitionData_obj::_hx_vtable;
	__this->__construct(__o_TransType,__o_Color,__o_Duration,Direction,TileData,Region);
	return __this;
}

TransitionData_obj::TransitionData_obj()
{
}

void TransitionData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TransitionData);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(tileData,"tileData");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(direction,"direction");
	HX_MARK_MEMBER_NAME(tweenOptions,"tweenOptions");
	HX_MARK_MEMBER_NAME(region,"region");
	HX_MARK_END_CLASS();
}

void TransitionData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(tileData,"tileData");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(direction,"direction");
	HX_VISIT_MEMBER_NAME(tweenOptions,"tweenOptions");
	HX_VISIT_MEMBER_NAME(region,"region");
}

hx::Val TransitionData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return hx::Val( color); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"region") ) { return hx::Val( region); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tileData") ) { return hx::Val( tileData); }
		if (HX_FIELD_EQ(inName,"duration") ) { return hx::Val( duration); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { return hx::Val( direction); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tweenOptions") ) { return hx::Val( tweenOptions); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TransitionData_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"region") ) { region=inValue.Cast<  ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tileData") ) { tileData=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { direction=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tweenOptions") ) { tweenOptions=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TransitionData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("tileData","\x78","\x7c","\x69","\x7c"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"));
	outFields->push(HX_HCSTRING("direction","\x3f","\x62","\x40","\x10"));
	outFields->push(HX_HCSTRING("tweenOptions","\x33","\xa4","\xbd","\x09"));
	outFields->push(HX_HCSTRING("region","\xf4","\xc0","\x8c","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TransitionData_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TransitionData_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TransitionData_obj,tileData),HX_HCSTRING("tileData","\x78","\x7c","\x69","\x7c")},
	{hx::fsInt,(int)offsetof(TransitionData_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsFloat,(int)offsetof(TransitionData_obj,duration),HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(TransitionData_obj,direction),HX_HCSTRING("direction","\x3f","\x62","\x40","\x10")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TransitionData_obj,tweenOptions),HX_HCSTRING("tweenOptions","\x33","\xa4","\xbd","\x09")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(TransitionData_obj,region),HX_HCSTRING("region","\xf4","\xc0","\x8c","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TransitionData_obj_sStaticStorageInfo = 0;
#endif

static ::String TransitionData_obj_sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("tileData","\x78","\x7c","\x69","\x7c"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"),
	HX_HCSTRING("direction","\x3f","\x62","\x40","\x10"),
	HX_HCSTRING("tweenOptions","\x33","\xa4","\xbd","\x09"),
	HX_HCSTRING("region","\xf4","\xc0","\x8c","\x00"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void TransitionData_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TransitionData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TransitionData_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TransitionData_obj::__mClass,"__mClass");
};

#endif

hx::Class TransitionData_obj::__mClass;

void TransitionData_obj::__register()
{
	hx::Object *dummy = new TransitionData_obj;
	TransitionData_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.transition.TransitionData","\x4f","\x04","\xa9","\xb0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TransitionData_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TransitionData_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TransitionData_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TransitionData_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TransitionData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TransitionData_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace transition