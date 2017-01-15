// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTweenManager
#include <flixel/tweens/FlxTweenManager.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadMotion
#include <flixel/tweens/motion/QuadMotion.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5ddd1b5fef28e4a4_8_new,"flixel.tweens.motion.QuadMotion","new",0xf59e5933,"flixel.tweens.motion.QuadMotion.new","flixel/tweens/motion/QuadMotion.hx",8,0x8023a31c)
HX_DEFINE_STACK_FRAME(_hx_pos_5ddd1b5fef28e4a4_37_setMotion,"flixel.tweens.motion.QuadMotion","setMotion",0xe116648b,"flixel.tweens.motion.QuadMotion.setMotion","flixel/tweens/motion/QuadMotion.hx",37,0x8023a31c)
HX_DEFINE_STACK_FRAME(_hx_pos_5ddd1b5fef28e4a4_61_update,"flixel.tweens.motion.QuadMotion","update",0xec780316,"flixel.tweens.motion.QuadMotion.update","flixel/tweens/motion/QuadMotion.hx",61,0x8023a31c)
HX_DEFINE_STACK_FRAME(_hx_pos_5ddd1b5fef28e4a4_72_get_distance,"flixel.tweens.motion.QuadMotion","get_distance",0x3f988c0b,"flixel.tweens.motion.QuadMotion.get_distance","flixel/tweens/motion/QuadMotion.hx",72,0x8023a31c)
namespace flixel{
namespace tweens{
namespace motion{

void QuadMotion_obj::__construct( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager){
            	HX_STACKFRAME(&_hx_pos_5ddd1b5fef28e4a4_8_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Options,"Options")
            	HX_STACK_ARG(manager,"manager")
HXLINE(  22)		this->_controlY = ((Float)0);
HXLINE(  21)		this->_controlX = ((Float)0);
HXLINE(  20)		this->_toY = ((Float)0);
HXLINE(  19)		this->_toX = ((Float)0);
HXLINE(  18)		this->_fromY = ((Float)0);
HXLINE(  17)		this->_fromX = ((Float)0);
HXLINE(  16)		this->_distance = ((Float)-1);
HXLINE(   8)		super::__construct(Options,manager);
            	}

Dynamic QuadMotion_obj::__CreateEmpty() { return new QuadMotion_obj; }

void *QuadMotion_obj::_hx_vtable = 0;

Dynamic QuadMotion_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< QuadMotion_obj > _hx_result = new QuadMotion_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool QuadMotion_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1d3e1cbf) {
		if (inClassId<=(int)0x123505a1) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x123505a1;
		} else {
			return inClassId==(int)0x1d3e1cbf;
		}
	} else {
		return inClassId==(int)0x726fe8d0;
	}
}

 ::flixel::tweens::motion::QuadMotion QuadMotion_obj::setMotion(Float FromX,Float FromY,Float ControlX,Float ControlY,Float ToX,Float ToY,Float DurationOrSpeed,hx::Null< bool >  __o_UseDuration){
bool UseDuration = __o_UseDuration.Default(true);
            	HX_STACKFRAME(&_hx_pos_5ddd1b5fef28e4a4_37_setMotion)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(FromX,"FromX")
            	HX_STACK_ARG(FromY,"FromY")
            	HX_STACK_ARG(ControlX,"ControlX")
            	HX_STACK_ARG(ControlY,"ControlY")
            	HX_STACK_ARG(ToX,"ToX")
            	HX_STACK_ARG(ToY,"ToY")
            	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
            	HX_STACK_ARG(UseDuration,"UseDuration")
HXLINE(  38)		this->_distance = (int)-1;
HXLINE(  39)		this->x = (this->_fromX = FromX);
HXLINE(  40)		this->y = (this->_fromY = FromY);
HXLINE(  41)		this->_controlX = ControlX;
HXLINE(  42)		this->_controlY = ControlY;
HXLINE(  43)		this->_toX = ToX;
HXLINE(  44)		this->_toY = ToY;
HXLINE(  46)		if (UseDuration) {
HXLINE(  48)			this->duration = DurationOrSpeed;
            		}
            		else {
HXLINE(  52)			this->duration = ((Float)this->get_distance() / (Float)DurationOrSpeed);
            		}
HXLINE(  55)		this->start();
HXLINE(  57)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC8(QuadMotion_obj,setMotion,return )

void QuadMotion_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_5ddd1b5fef28e4a4_61_update)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(elapsed,"elapsed")
HXLINE(  62)		this->super::update(elapsed);
HXLINE(  63)		this->x = ((((this->_fromX * ((int)1 - this->scale)) * ((int)1 - this->scale)) + (((this->_controlX * (int)2) * ((int)1 - this->scale)) * this->scale)) + ((this->_toX * this->scale) * this->scale));
HXLINE(  64)		this->y = ((((this->_fromY * ((int)1 - this->scale)) * ((int)1 - this->scale)) + (((this->_controlY * (int)2) * ((int)1 - this->scale)) * this->scale)) + ((this->_toY * this->scale) * this->scale));
HXLINE(  65)		if (this->finished) {
HXLINE(  67)			this->postUpdate();
            		}
            	}


Float QuadMotion_obj::get_distance(){
            	HX_STACKFRAME(&_hx_pos_5ddd1b5fef28e4a4_72_get_distance)
            	HX_STACK_THIS(this)
HXLINE(  73)		if ((this->_distance >= (int)0)) {
HXLINE(  74)			return this->_distance;
            		}
HXLINE(  76)		HX_VARI(  ::flixel::math::FlxPoint,point) = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN(  76)		point->_inPool = false;
HXLINE(  77)		HX_VARI_NAME(  ::flixel::math::FlxPoint,point1,"point") = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN(  77)		point1->_inPool = false;
HXLINE(  78)		point->set_x(((this->x - ((int)2 * this->_controlX)) + this->_toX));
HXLINE(  79)		point->set_y(((this->y - ((int)2 * this->_controlY)) + this->_toY));
HXLINE(  80)		point1->set_x((((int)2 * this->_controlX) - ((int)2 * this->x)));
HXLINE(  81)		point1->set_y((((int)2 * this->_controlY) - ((int)2 * this->y)));
HXLINE(  82)		HX_VARI( Float,a) = ((int)4 * ((point->x * point->x) + (point->y * point->y)));
HXDLIN(  82)		HX_VARI( Float,b) = ((int)4 * ((point->x * point1->x) + (point->y * point1->y)));
HXDLIN(  82)		HX_VARI( Float,c) = ((point1->x * point1->x) + (point1->y * point1->y));
HXDLIN(  82)		HX_VARI( Float,abc) = ((int)2 * ::Math_obj::sqrt(((a + b) + c)));
HXDLIN(  82)		HX_VARI( Float,a2) = ::Math_obj::sqrt(a);
HXDLIN(  82)		HX_VARI( Float,a32) = (((int)2 * a) * a2);
HXDLIN(  82)		HX_VARI( Float,c2) = ((int)2 * ::Math_obj::sqrt(c));
HXDLIN(  82)		HX_VARI( Float,ba) = ((Float)b / (Float)a2);
HXLINE(  91)		point->put();
HXLINE(  92)		point1->put();
HXLINE(  94)		return ((Float)(((a32 * abc) + ((a2 * b) * (abc - c2))) + (((((int)4 * c) * a) - (b * b)) * ::Math_obj::log(((Float)((((int)2 * a2) + ba) + abc) / (Float)(ba + c2))))) / (Float)((int)4 * a32));
            	}


HX_DEFINE_DYNAMIC_FUNC0(QuadMotion_obj,get_distance,return )


hx::ObjectPtr< QuadMotion_obj > QuadMotion_obj::__new( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager) {
	hx::ObjectPtr< QuadMotion_obj > __this = new QuadMotion_obj();
	__this->__construct(Options,manager);
	return __this;
}

hx::ObjectPtr< QuadMotion_obj > QuadMotion_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager) {
	QuadMotion_obj *__this = (QuadMotion_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(QuadMotion_obj), true, "flixel.tweens.motion.QuadMotion"));
	*(void **)__this = QuadMotion_obj::_hx_vtable;
	__this->__construct(Options,manager);
	return __this;
}

QuadMotion_obj::QuadMotion_obj()
{
}

hx::Val QuadMotion_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_toX") ) { return hx::Val( _toX); }
		if (HX_FIELD_EQ(inName,"_toY") ) { return hx::Val( _toY); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_fromX") ) { return hx::Val( _fromX); }
		if (HX_FIELD_EQ(inName,"_fromY") ) { return hx::Val( _fromY); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_distance()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_distance") ) { return hx::Val( _distance); }
		if (HX_FIELD_EQ(inName,"_controlX") ) { return hx::Val( _controlX); }
		if (HX_FIELD_EQ(inName,"_controlY") ) { return hx::Val( _controlY); }
		if (HX_FIELD_EQ(inName,"setMotion") ) { return hx::Val( setMotion_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_distance") ) { return hx::Val( get_distance_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val QuadMotion_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_toX") ) { _toX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_toY") ) { _toY=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_fromX") ) { _fromX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fromY") ) { _fromY=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_distance") ) { _distance=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_controlX") ) { _controlX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_controlY") ) { _controlY=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void QuadMotion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"));
	outFields->push(HX_HCSTRING("_distance","\x94","\x8a","\x8f","\xb3"));
	outFields->push(HX_HCSTRING("_fromX","\xef","\x5e","\x75","\x02"));
	outFields->push(HX_HCSTRING("_fromY","\xf0","\x5e","\x75","\x02"));
	outFields->push(HX_HCSTRING("_toX","\x7e","\xab","\x23","\x3f"));
	outFields->push(HX_HCSTRING("_toY","\x7f","\xab","\x23","\x3f"));
	outFields->push(HX_HCSTRING("_controlX","\xba","\x7d","\x52","\x7f"));
	outFields->push(HX_HCSTRING("_controlY","\xbb","\x7d","\x52","\x7f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo QuadMotion_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(QuadMotion_obj,_distance),HX_HCSTRING("_distance","\x94","\x8a","\x8f","\xb3")},
	{hx::fsFloat,(int)offsetof(QuadMotion_obj,_fromX),HX_HCSTRING("_fromX","\xef","\x5e","\x75","\x02")},
	{hx::fsFloat,(int)offsetof(QuadMotion_obj,_fromY),HX_HCSTRING("_fromY","\xf0","\x5e","\x75","\x02")},
	{hx::fsFloat,(int)offsetof(QuadMotion_obj,_toX),HX_HCSTRING("_toX","\x7e","\xab","\x23","\x3f")},
	{hx::fsFloat,(int)offsetof(QuadMotion_obj,_toY),HX_HCSTRING("_toY","\x7f","\xab","\x23","\x3f")},
	{hx::fsFloat,(int)offsetof(QuadMotion_obj,_controlX),HX_HCSTRING("_controlX","\xba","\x7d","\x52","\x7f")},
	{hx::fsFloat,(int)offsetof(QuadMotion_obj,_controlY),HX_HCSTRING("_controlY","\xbb","\x7d","\x52","\x7f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *QuadMotion_obj_sStaticStorageInfo = 0;
#endif

static ::String QuadMotion_obj_sMemberFields[] = {
	HX_HCSTRING("_distance","\x94","\x8a","\x8f","\xb3"),
	HX_HCSTRING("_fromX","\xef","\x5e","\x75","\x02"),
	HX_HCSTRING("_fromY","\xf0","\x5e","\x75","\x02"),
	HX_HCSTRING("_toX","\x7e","\xab","\x23","\x3f"),
	HX_HCSTRING("_toY","\x7f","\xab","\x23","\x3f"),
	HX_HCSTRING("_controlX","\xba","\x7d","\x52","\x7f"),
	HX_HCSTRING("_controlY","\xbb","\x7d","\x52","\x7f"),
	HX_HCSTRING("setMotion","\x78","\xfb","\x04","\x2b"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("get_distance","\x3e","\x47","\x13","\x21"),
	::String(null()) };

static void QuadMotion_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QuadMotion_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void QuadMotion_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuadMotion_obj::__mClass,"__mClass");
};

#endif

hx::Class QuadMotion_obj::__mClass;

void QuadMotion_obj::__register()
{
	hx::Object *dummy = new QuadMotion_obj;
	QuadMotion_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tweens.motion.QuadMotion","\xc1","\x43","\x2f","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = QuadMotion_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(QuadMotion_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< QuadMotion_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = QuadMotion_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = QuadMotion_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = QuadMotion_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace tweens
} // end namespace motion