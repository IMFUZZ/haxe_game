#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",23,0xb30d7781)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(23)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
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
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",28,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		this->super::create();
		HX_STACK_LINE(31)
		::flixel::addons::nape::FlxNapeSpace_obj::init();
		HX_STACK_LINE(32)
		::flixel::addons::nape::FlxNapeSpace_obj::set_drawDebug(true);
		HX_STACK_LINE(34)
		::Player tmp = ::Player_obj::__new((int)100,(int)100);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		this->_player = tmp;
		HX_STACK_LINE(35)
		::Player tmp1 = this->_player;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		this->add(tmp1);
		HX_STACK_LINE(37)
		::haxe::ds::IntMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			::haxe::ds::IntMap tmp3 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(37)
			::haxe::ds::IntMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(37)
			tmp2 = tmp4;
		}
		HX_STACK_LINE(37)
		this->keysAction = tmp2;
		HX_STACK_LINE(38)
		::haxe::ds::IntMap tmp3 = this->keysAction;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		::Player tmp4 = this->_player;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(38)
		Dynamic tmp5 = tmp4->moveUp_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(38)
		tmp3->set((int)87,tmp5);
		HX_STACK_LINE(39)
		::haxe::ds::IntMap tmp6 = this->keysAction;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(39)
		::Player tmp7 = this->_player;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(39)
		Dynamic tmp8 = tmp7->moveDown_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(39)
		tmp6->set((int)83,tmp8);
		HX_STACK_LINE(40)
		::haxe::ds::IntMap tmp9 = this->keysAction;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(40)
		::Player tmp10 = this->_player;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(40)
		Dynamic tmp11 = tmp10->moveLeft_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(40)
		tmp9->set((int)65,tmp11);
		HX_STACK_LINE(41)
		::haxe::ds::IntMap tmp12 = this->keysAction;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(41)
		::Player tmp13 = this->_player;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(41)
		Dynamic tmp14 = tmp13->moveRight_dyn();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(41)
		tmp12->set((int)68,tmp14);
		HX_STACK_LINE(46)
		::haxe::ds::IntMap tmp15 = this->keysAction;		HX_STACK_VAR(tmp15,"tmp15");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		bool run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","PlayState.hx",46,0xb30d7781)
			{
				HX_STACK_LINE(46)
				::Sys_obj::exit((int)0);
				HX_STACK_LINE(46)
				return false;
			}
			return null();
		}
		HX_END_LOCAL_FUNC0(return)

		HX_STACK_LINE(46)
		tmp15->set((int)27, Dynamic(new _Function_1_1()));
	}
return null();
}


Void PlayState_obj::update( Float elapsed){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",49,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(49)
		::PlayState _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(50)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		this->super::update(tmp);
		HX_STACK_LINE(51)
		::Player tmp1 = this->_player;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		tmp1->beforeUpdate();
		HX_STACK_LINE(52)
		::flixel::input::keyboard::FlxKeyboard tmp2 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp2,"tmp2");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::PlayState,_g)
		int __ArgCount() const { return 1; }
		bool run(::flixel::input::FlxInput key){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","PlayState.hx",52,0xb30d7781)
			HX_STACK_ARG(key,"key")
			{
				HX_STACK_LINE(53)
				int tmp3 = key->ID;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(53)
				bool tmp4 = _g->keysAction->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(53)
				if ((tmp4)){
					HX_STACK_LINE(53)
					int tmp5 = key->ID;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(53)
					Dynamic tmp6 = _g->keysAction->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(53)
					Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(53)
					bool tmp8 = tmp7().Cast< bool >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(53)
					bool err = tmp8;		HX_STACK_VAR(err,"err");
				}
				HX_STACK_LINE(54)
				return true;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(52)
		::Lambda_obj::foreach(tmp2->getIsDown(), Dynamic(new _Function_1_1(_g)));
		HX_STACK_LINE(57)
		::Player tmp3 = this->_player;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(57)
		Float tmp4 = elapsed;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(57)
		tmp3->update(tmp4);
		HX_STACK_LINE(58)
		::Player tmp5 = this->_player;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(58)
		tmp5->afterUpdate();
	}
return null();
}



PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(_player,"_player");
	HX_MARK_MEMBER_NAME(keysAction,"keysAction");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_player,"_player");
	HX_VISIT_MEMBER_NAME(keysAction,"keysAction");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_player") ) { return _player; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"keysAction") ) { return keysAction; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_player") ) { _player=inValue.Cast< ::Player >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"keysAction") ) { keysAction=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_player","\x00","\xfd","\x2f","\xa6"));
	outFields->push(HX_HCSTRING("keysAction","\xca","\x80","\x35","\x9a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Player*/ ,(int)offsetof(PlayState_obj,_player),HX_HCSTRING("_player","\x00","\xfd","\x2f","\xa6")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(PlayState_obj,keysAction),HX_HCSTRING("keysAction","\xca","\x80","\x35","\x9a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_player","\x00","\xfd","\x2f","\xa6"),
	HX_HCSTRING("keysAction","\xca","\x80","\x35","\x9a"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
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
	__mClass->mName = HX_HCSTRING("PlayState","\x5d","\x83","\xc2","\x46");
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

