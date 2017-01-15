#include <hxcpp.h>

#ifndef INCLUDED_Clock
#include <Clock.h>
#endif
#ifndef INCLUDED_Darkness
#include <Darkness.h>
#endif
#ifndef INCLUDED_Shared
#include <Shared.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif

Void Darkness_obj::__construct(Dynamic __o_a_x,Dynamic __o_a_y)
{
HX_STACK_FRAME("Darkness","new",0x63afbf9f,"Darkness.new","Darkness.hx",14,0xb26258b1)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_a_x,"a_x")
HX_STACK_ARG(__o_a_y,"a_y")
Dynamic a_x = __o_a_x.Default(0);
Dynamic a_y = __o_a_y.Default(0);
{
	HX_STACK_LINE(15)
	Dynamic tmp = a_x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	Dynamic tmp1 = a_y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(15)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(17)
	this->_lightSources = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(18)
	::flixel::FlxCamera tmp2 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(18)
	int tmp3 = tmp2->width;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(18)
	::flixel::FlxCamera tmp4 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(18)
	int tmp5 = tmp4->height;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(18)
	this->makeGraphic(tmp3,tmp5,(int)-16777216,null(),null());
	HX_STACK_LINE(19)
	this->set_blend(::openfl::_legacy::display::BlendMode_obj::MULTIPLY);
	HX_STACK_LINE(20)
	::flixel::math::FlxPoint tmp6 = this->scrollFactor;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(20)
	tmp6->set_x((int)0);
	HX_STACK_LINE(21)
	::flixel::math::FlxPoint tmp7 = this->scrollFactor;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(21)
	tmp7->set_y((int)0);
}
;
	return null();
}

//Darkness_obj::~Darkness_obj() { }

Dynamic Darkness_obj::__CreateEmpty() { return  new Darkness_obj; }
hx::ObjectPtr< Darkness_obj > Darkness_obj::__new(Dynamic __o_a_x,Dynamic __o_a_y)
{  hx::ObjectPtr< Darkness_obj > _result_ = new Darkness_obj();
	_result_->__construct(__o_a_x,__o_a_y);
	return _result_;}

Dynamic Darkness_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Darkness_obj > _result_ = new Darkness_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Darkness_obj::update( Float elapsed){
{
		HX_STACK_FRAME("Darkness","update",0x922d682a,"Darkness.update","Darkness.hx",24,0xb26258b1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(25)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(25)
		this->super::update(tmp);
		HX_STACK_LINE(26)
		Float tmp1 = elapsed;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		this->updateLightSources(tmp1);
	}
return null();
}


Void Darkness_obj::addLightSource( ::flixel::FlxSprite a_lightSource){
{
		HX_STACK_FRAME("Darkness","addLightSource",0x864f6cd1,"Darkness.addLightSource","Darkness.hx",29,0xb26258b1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a_lightSource,"a_lightSource")
		HX_STACK_LINE(30)
		::flixel::FlxSprite tmp = a_lightSource;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		this->_lightSources->push(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Darkness_obj,addLightSource,(void))

Void Darkness_obj::updateLightSources( Float elapsed){
{
		HX_STACK_FRAME("Darkness","updateLightSources",0x27cb584c,"Darkness.updateLightSources","Darkness.hx",33,0xb26258b1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(34)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		{
			HX_STACK_LINE(34)
			::Clock tmp1 = ::Shared_obj::clock;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(34)
			::Clock _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(34)
			bool tmp2 = (_this->time > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(34)
			if ((tmp2)){
				HX_STACK_LINE(34)
				tmp = (Float(_this->_timeCounter) / Float(_this->time));
			}
			else{
				HX_STACK_LINE(34)
				tmp = (int)0;
			}
		}
		HX_STACK_LINE(34)
		bool tmp1 = (tmp > ((Float)0.15));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(34)
		if ((tmp1)){
			HX_STACK_LINE(34)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(34)
			{
				HX_STACK_LINE(34)
				::Clock tmp4 = ::Shared_obj::clock;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(34)
				::Clock tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(34)
				::Clock _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(34)
				bool tmp6 = (_this->time > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(34)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(34)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(34)
				if ((tmp8)){
					HX_STACK_LINE(34)
					Float tmp9 = (Float(_this->_timeCounter) / Float(_this->time));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(34)
					tmp3 = tmp9;
				}
				else{
					HX_STACK_LINE(34)
					tmp3 = (int)0;
				}
			}
			HX_STACK_LINE(34)
			tmp2 = (tmp3 < ((Float)0.50));
		}
		else{
			HX_STACK_LINE(34)
			tmp2 = false;
		}
		HX_STACK_LINE(34)
		if ((tmp2)){
			HX_STACK_LINE(35)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(35)
			{
				HX_STACK_LINE(35)
				::Clock tmp4 = ::Shared_obj::clock;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(35)
				::Clock _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(35)
				bool tmp5 = (_this->time > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(35)
				if ((tmp5)){
					HX_STACK_LINE(35)
					tmp3 = (Float(_this->_timeCounter) / Float(_this->time));
				}
				else{
					HX_STACK_LINE(35)
					tmp3 = (int)0;
				}
			}
			HX_STACK_LINE(35)
			Float tmp4 = (tmp3 - ((Float)0.15));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(35)
			Float tmp5 = (tmp4 * ((Float)4.25));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(35)
			Float tmp6 = (((Float)1.0) - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(35)
			int tmp7 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::getDarkened((int)-1,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(35)
			::flixel::util::FlxSpriteUtil_obj::fill(hx::ObjectPtr<OBJ_>(this),tmp7);
			HX_STACK_LINE(36)
			Float tmp8 = elapsed;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(36)
			this->stampLightSources(tmp8);
		}
		else{
			HX_STACK_LINE(37)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(37)
			{
				HX_STACK_LINE(37)
				::Clock tmp4 = ::Shared_obj::clock;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(37)
				::Clock _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(37)
				bool tmp5 = (_this->time > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(37)
				if ((tmp5)){
					HX_STACK_LINE(37)
					tmp3 = (Float(_this->_timeCounter) / Float(_this->time));
				}
				else{
					HX_STACK_LINE(37)
					tmp3 = (int)0;
				}
			}
			HX_STACK_LINE(37)
			bool tmp4 = (tmp3 < ((Float)0.15));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(37)
			if ((tmp4)){
				HX_STACK_LINE(38)
				::flixel::util::FlxSpriteUtil_obj::fill(hx::ObjectPtr<OBJ_>(this),(int)-16777216);
				HX_STACK_LINE(39)
				Float tmp5 = elapsed;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(39)
				this->stampLightSources(tmp5);
			}
			else{
				HX_STACK_LINE(40)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(40)
				{
					HX_STACK_LINE(40)
					::Clock tmp6 = ::Shared_obj::clock;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(40)
					::Clock _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(40)
					bool tmp7 = (_this->time > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(40)
					if ((tmp7)){
						HX_STACK_LINE(40)
						tmp5 = (Float(_this->_timeCounter) / Float(_this->time));
					}
					else{
						HX_STACK_LINE(40)
						tmp5 = (int)0;
					}
				}
				HX_STACK_LINE(40)
				bool tmp6 = (tmp5 > ((Float)0.75));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(40)
				if ((tmp6)){
					HX_STACK_LINE(41)
					Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(41)
					{
						HX_STACK_LINE(41)
						::Clock tmp8 = ::Shared_obj::clock;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(41)
						::Clock _this = tmp8;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(41)
						bool tmp9 = (_this->time > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(41)
						if ((tmp9)){
							HX_STACK_LINE(41)
							tmp7 = (Float(_this->_timeCounter) / Float(_this->time));
						}
						else{
							HX_STACK_LINE(41)
							tmp7 = (int)0;
						}
					}
					HX_STACK_LINE(41)
					Float tmp8 = (tmp7 - ((Float)0.75));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(41)
					Float tmp9 = (tmp8 * ((Float)4.25));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(41)
					int tmp10 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::getDarkened((int)-1,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(41)
					::flixel::util::FlxSpriteUtil_obj::fill(hx::ObjectPtr<OBJ_>(this),tmp10);
					HX_STACK_LINE(42)
					Float tmp11 = elapsed;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(42)
					this->stampLightSources(tmp11);
				}
				else{
					HX_STACK_LINE(44)
					::flixel::util::FlxSpriteUtil_obj::fill(hx::ObjectPtr<OBJ_>(this),(int)-1);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Darkness_obj,updateLightSources,(void))

Void Darkness_obj::stampLightSources( Float elapsed){
{
		HX_STACK_FRAME("Darkness","stampLightSources",0xd2eec124,"Darkness.stampLightSources","Darkness.hx",49,0xb26258b1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(49)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(49)
		Array< ::Dynamic > _g1 = this->_lightSources;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(49)
		while((true)){
			HX_STACK_LINE(49)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(49)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(49)
			if ((tmp1)){
				HX_STACK_LINE(49)
				break;
			}
			HX_STACK_LINE(49)
			::flixel::FlxSprite tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(49)
			::flixel::FlxSprite _light = tmp2;		HX_STACK_VAR(_light,"_light");
			HX_STACK_LINE(49)
			++(_g);
			HX_STACK_LINE(50)
			Float tmp3 = elapsed;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(50)
			_light->update(tmp3);
			HX_STACK_LINE(51)
			::flixel::FlxSprite tmp4 = _light;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(51)
			Float tmp5 = _light->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(51)
			::flixel::FlxCamera tmp6 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(51)
			Float tmp7 = tmp6->scroll->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(51)
			Float tmp8 = (tmp5 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(51)
			int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(51)
			Float tmp10 = _light->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(51)
			::flixel::FlxCamera tmp11 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(51)
			Float tmp12 = tmp11->scroll->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(51)
			Float tmp13 = (tmp10 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(51)
			int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(51)
			this->stamp(tmp4,tmp9,tmp14);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Darkness_obj,stampLightSources,(void))


Darkness_obj::Darkness_obj()
{
}

void Darkness_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Darkness);
	HX_MARK_MEMBER_NAME(_lightSources,"_lightSources");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Darkness_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_lightSources,"_lightSources");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Darkness_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_lightSources") ) { return _lightSources; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"addLightSource") ) { return addLightSource_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"stampLightSources") ) { return stampLightSources_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"updateLightSources") ) { return updateLightSources_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Darkness_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_lightSources") ) { _lightSources=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Darkness_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_lightSources","\xe1","\x9f","\xe9","\xfb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Darkness_obj,_lightSources),HX_HCSTRING("_lightSources","\xe1","\x9f","\xe9","\xfb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_lightSources","\xe1","\x9f","\xe9","\xfb"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("addLightSource","\xb0","\x01","\x57","\x2c"),
	HX_HCSTRING("updateLightSources","\xab","\x48","\x88","\x91"),
	HX_HCSTRING("stampLightSources","\xa5","\x41","\x42","\xd2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Darkness_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Darkness_obj::__mClass,"__mClass");
};

#endif

hx::Class Darkness_obj::__mClass;

void Darkness_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Darkness","\x2d","\x04","\x9a","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Darkness_obj >;
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

