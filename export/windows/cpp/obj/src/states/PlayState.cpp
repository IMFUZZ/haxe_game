#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_CustomController
#include <CustomController.h>
#endif
#ifndef INCLUDED_MapGenerator
#include <MapGenerator.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Shared
#include <Shared.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_nape_FlxNapeSpace
#include <flixel/addons/nape/FlxNapeSpace.h>
#endif
#ifndef INCLUDED_flixel_addons_nape_FlxNapeSprite
#include <flixel/addons/nape/FlxNapeSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_nape_FlxNapeTilemap
#include <flixel/addons/nape/FlxNapeTilemap.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapAutoTiling
#include <flixel/tile/FlxTilemapAutoTiling.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
namespace states{

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("states.PlayState","new",0x0e695aa3,"states.PlayState.new","states/PlayState.hx",21,0x36e487ae)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(21)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	super::__construct(tmp);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > _result_ = new PlayState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > _result_ = new PlayState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("states.PlayState","create",0x0cd56899,"states.PlayState.create","states/PlayState.hx",28,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		this->super::create();
		HX_STACK_LINE(30)
		this->_init();
		HX_STACK_LINE(31)
		::MapGenerator tmp = ::MapGenerator_obj::__new((int)513,((Float)1.4));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(31)
		this->_mapGenerator = tmp;
		HX_STACK_LINE(32)
		::MapGenerator tmp1 = this->_mapGenerator;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(32)
		this->_worldMap = tmp1->generate();
		HX_STACK_LINE(33)
		::flixel::addons::nape::FlxNapeTilemap tmp2 = ::flixel::addons::nape::FlxNapeTilemap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		this->_tilemap = tmp2;
		HX_STACK_LINE(34)
		::flixel::addons::nape::FlxNapeTilemap tmp3 = this->_tilemap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		hx::TCast< ::flixel::tile::FlxTilemap >::cast(tmp3->loadMapFrom2DArray(this->_worldMap,HX_HCSTRING("assets/images/tilemap.png","\x9e","\x1e","\x4d","\x9b"),(int)16,(int)16,null(),null(),null(),null()));
		HX_STACK_LINE(35)
		::flixel::addons::nape::FlxNapeTilemap tmp4 = this->_tilemap;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		this->add(tmp4);
		HX_STACK_LINE(37)
		::flixel::FlxSprite tmp5 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(37)
		this->_tileSelected = tmp5;
		HX_STACK_LINE(38)
		::flixel::FlxSprite tmp6 = this->_tileSelected;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(38)
		tmp6->makeGraphic((int)16,(int)16,(int)0,null(),null());
		HX_STACK_LINE(39)
		::flixel::FlxSprite tmp7 = this->_tileSelected;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(39)
		int tmp8 = (int)15;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(39)
		int tmp9 = (int)15;		HX_STACK_VAR(tmp9,"tmp9");
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","states/PlayState.hx",39,0x36e487ae)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a") , ((Dynamic)((int)1)),false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , (int)-65536,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(39)
		Dynamic tmp10 = _Function_1_1::Block();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(39)
		::flixel::util::FlxSpriteUtil_obj::drawRect(tmp7,(int)0,(int)0,tmp8,tmp9,(int)0,tmp10,null());
		HX_STACK_LINE(40)
		::flixel::FlxSprite tmp11 = this->_tileSelected;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(40)
		this->add(tmp11);
		HX_STACK_LINE(42)
		::Player tmp12 = ::Shared_obj::player;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(42)
		this->add(tmp12);
		HX_STACK_LINE(43)
		::flixel::FlxCamera tmp13 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(43)
		::Player tmp14 = ::Shared_obj::player;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(43)
		tmp13->follow(tmp14,null(),(int)3);
		HX_STACK_LINE(44)
		::flixel::FlxCamera tmp15 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(44)
		tmp15->set_antialiasing(false);
	}
return null();
}


Void PlayState_obj::update( Float elapsed){
{
		HX_STACK_FRAME("states.PlayState","update",0x17cb87a6,"states.PlayState.update","states/PlayState.hx",47,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(48)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		this->super::update(tmp);
		HX_STACK_LINE(49)
		::Player tmp1 = ::Shared_obj::player;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		tmp1->beforeUpdate();
		HX_STACK_LINE(50)
		::CustomController tmp2 = ::Shared_obj::controller;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		tmp2->update();
		HX_STACK_LINE(52)
		::flixel::FlxSprite tmp3 = this->_tileSelected;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(52)
		::flixel::input::mouse::FlxMouse tmp4 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(52)
		int tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(52)
		Float tmp6 = (Float(tmp5) / Float((int)16));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(52)
		int tmp7 = ::Math_obj::floor(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(52)
		int tmp8 = (tmp7 * (int)16);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(52)
		tmp3->set_x(tmp8);
		HX_STACK_LINE(53)
		::flixel::FlxSprite tmp9 = this->_tileSelected;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(53)
		::flixel::input::mouse::FlxMouse tmp10 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(53)
		int tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(53)
		Float tmp12 = (Float(tmp11) / Float((int)16));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(53)
		int tmp13 = ::Math_obj::floor(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(53)
		int tmp14 = (tmp13 * (int)16);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(53)
		tmp9->set_y(tmp14);
		HX_STACK_LINE(54)
		::Player tmp15 = ::Shared_obj::player;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(54)
		Float tmp16 = elapsed;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(54)
		tmp15->update(tmp16);
		HX_STACK_LINE(55)
		::Player tmp17 = ::Shared_obj::player;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(55)
		tmp17->afterUpdate();
	}
return null();
}


Void PlayState_obj::_init( ){
{
		HX_STACK_FRAME("states.PlayState","_init",0xdf0b37f2,"states.PlayState._init","states/PlayState.hx",59,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		::flixel::addons::nape::FlxNapeSpace_obj::init();
		HX_STACK_LINE(61)
		::flixel::addons::nape::FlxNapeSpace_obj::set_drawDebug(true);
		HX_STACK_LINE(62)
		::Shared_obj::init();
		HX_STACK_LINE(63)
		{
			HX_STACK_LINE(63)
			::flixel::math::FlxRect tmp = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(63)
			::flixel::math::FlxRect _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(63)
			_this->width = (int)1920;
			HX_STACK_LINE(63)
			_this->height = (int)1080;
			HX_STACK_LINE(63)
			_this;
		}
		HX_STACK_LINE(64)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		tmp->set_zoom((int)2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,_init,(void))


PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(_tileSelected,"_tileSelected");
	HX_MARK_MEMBER_NAME(_tilemap,"_tilemap");
	HX_MARK_MEMBER_NAME(_mapGenerator,"_mapGenerator");
	HX_MARK_MEMBER_NAME(_worldMap,"_worldMap");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_tileSelected,"_tileSelected");
	HX_VISIT_MEMBER_NAME(_tilemap,"_tilemap");
	HX_VISIT_MEMBER_NAME(_mapGenerator,"_mapGenerator");
	HX_VISIT_MEMBER_NAME(_worldMap,"_worldMap");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_init") ) { return _init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_tilemap") ) { return _tilemap; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_worldMap") ) { return _worldMap; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_tileSelected") ) { return _tileSelected; }
		if (HX_FIELD_EQ(inName,"_mapGenerator") ) { return _mapGenerator; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_tilemap") ) { _tilemap=inValue.Cast< ::flixel::addons::nape::FlxNapeTilemap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_worldMap") ) { _worldMap=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_tileSelected") ) { _tileSelected=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mapGenerator") ) { _mapGenerator=inValue.Cast< ::MapGenerator >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_tileSelected","\x88","\x22","\x2e","\x6c"));
	outFields->push(HX_HCSTRING("_tilemap","\xaf","\x49","\x47","\x7f"));
	outFields->push(HX_HCSTRING("_mapGenerator","\xf6","\x2c","\x0f","\x0c"));
	outFields->push(HX_HCSTRING("_worldMap","\xc9","\x62","\x21","\xec"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,_tileSelected),HX_HCSTRING("_tileSelected","\x88","\x22","\x2e","\x6c")},
	{hx::fsObject /*::flixel::addons::nape::FlxNapeTilemap*/ ,(int)offsetof(PlayState_obj,_tilemap),HX_HCSTRING("_tilemap","\xaf","\x49","\x47","\x7f")},
	{hx::fsObject /*::MapGenerator*/ ,(int)offsetof(PlayState_obj,_mapGenerator),HX_HCSTRING("_mapGenerator","\xf6","\x2c","\x0f","\x0c")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PlayState_obj,_worldMap),HX_HCSTRING("_worldMap","\xc9","\x62","\x21","\xec")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_tileSelected","\x88","\x22","\x2e","\x6c"),
	HX_HCSTRING("_tilemap","\xaf","\x49","\x47","\x7f"),
	HX_HCSTRING("_mapGenerator","\xf6","\x2c","\x0f","\x0c"),
	HX_HCSTRING("_worldMap","\xc9","\x62","\x21","\xec"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("_init","\xef","\x56","\xcc","\xf8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#endif

hx::Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("states.PlayState","\x31","\xcd","\x20","\x04");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PlayState_obj >;
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

} // end namespace states
