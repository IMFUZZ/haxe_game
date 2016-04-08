#include <hxcpp.h>

#ifndef INCLUDED_CustomController
#include <CustomController.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Shared
#include <Shared.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
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
#ifndef INCLUDED_flixel_addons_nape_FlxNapeSprite
#include <flixel/addons/nape/FlxNapeSprite.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxBaseGamepadList
#include <flixel/input/gamepad/lists/FlxBaseGamepadList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogList
#include <flixel/input/gamepad/lists/FlxGamepadAnalogList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogValueList
#include <flixel/input/gamepad/lists/FlxGamepadAnalogValueList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadButtonList
#include <flixel/input/gamepad/lists/FlxGamepadButtonList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif

Void CustomController_obj::__construct()
{
HX_STACK_FRAME("CustomController","new",0x4133f33f,"CustomController.new","CustomController.hx",39,0x79fa7911)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(40)
	::haxe::ds::IntMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		::haxe::ds::IntMap tmp1 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		::haxe::ds::IntMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		tmp = tmp2;
	}
	HX_STACK_LINE(40)
	this->keyboardActionsOnPressed = tmp;
	HX_STACK_LINE(41)
	::haxe::ds::IntMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		::haxe::ds::IntMap tmp2 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		::haxe::ds::IntMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(41)
	this->keyboardActionsOnJustPressed = tmp1;
	HX_STACK_LINE(42)
	::haxe::ds::IntMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		::haxe::ds::IntMap tmp3 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(42)
		::haxe::ds::IntMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(42)
		tmp2 = tmp4;
	}
	HX_STACK_LINE(42)
	this->keyboardActionsOnJustReleased = tmp2;
	HX_STACK_LINE(43)
	::haxe::ds::IntMap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(43)
	{
		HX_STACK_LINE(43)
		::haxe::ds::IntMap tmp4 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(43)
		::haxe::ds::IntMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(43)
		tmp3 = tmp5;
	}
	HX_STACK_LINE(43)
	this->gamepadActionsOnPressed = tmp3;
	HX_STACK_LINE(44)
	::haxe::ds::IntMap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(44)
	{
		HX_STACK_LINE(44)
		::haxe::ds::IntMap tmp5 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(44)
		::haxe::ds::IntMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(44)
		tmp4 = tmp6;
	}
	HX_STACK_LINE(44)
	this->gamepadActionsOnJustPressed = tmp4;
	HX_STACK_LINE(45)
	::haxe::ds::IntMap tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		::haxe::ds::IntMap tmp6 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(45)
		::haxe::ds::IntMap tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(45)
		tmp5 = tmp7;
	}
	HX_STACK_LINE(45)
	this->gamepadActionsOnJustReleased = tmp5;
	HX_STACK_LINE(46)
	this->initDefaultActions();
}
;
	return null();
}

//CustomController_obj::~CustomController_obj() { }

Dynamic CustomController_obj::__CreateEmpty() { return  new CustomController_obj; }
hx::ObjectPtr< CustomController_obj > CustomController_obj::__new()
{  hx::ObjectPtr< CustomController_obj > _result_ = new CustomController_obj();
	_result_->__construct();
	return _result_;}

Dynamic CustomController_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CustomController_obj > _result_ = new CustomController_obj();
	_result_->__construct();
	return _result_;}

Void CustomController_obj::insertKeyboardActionOnPressed( int a_actionKey,Dynamic a_action){
{
		HX_STACK_FRAME("CustomController","insertKeyboardActionOnPressed",0xbf4c112c,"CustomController.insertKeyboardActionOnPressed","CustomController.hx",19,0x79fa7911)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a_actionKey,"a_actionKey")
		HX_STACK_ARG(a_action,"a_action")
		HX_STACK_LINE(20)
		::haxe::ds::IntMap tmp = this->keyboardActionsOnPressed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(20)
		int tmp1 = a_actionKey;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(20)
		Dynamic tmp2 = a_action;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(20)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CustomController_obj,insertKeyboardActionOnPressed,(void))

Void CustomController_obj::insertKeyboardActionOnJustPressed( int a_actionKey,Dynamic a_action){
{
		HX_STACK_FRAME("CustomController","insertKeyboardActionOnJustPressed",0xdbcf5960,"CustomController.insertKeyboardActionOnJustPressed","CustomController.hx",22,0x79fa7911)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a_actionKey,"a_actionKey")
		HX_STACK_ARG(a_action,"a_action")
		HX_STACK_LINE(23)
		::haxe::ds::IntMap tmp = this->keyboardActionsOnJustPressed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(23)
		int tmp1 = a_actionKey;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		Dynamic tmp2 = a_action;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(23)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CustomController_obj,insertKeyboardActionOnJustPressed,(void))

Void CustomController_obj::insertKeyboardActionOnJustReleased( int a_actionKey,Dynamic a_action){
{
		HX_STACK_FRAME("CustomController","insertKeyboardActionOnJustReleased",0x8074e83f,"CustomController.insertKeyboardActionOnJustReleased","CustomController.hx",25,0x79fa7911)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a_actionKey,"a_actionKey")
		HX_STACK_ARG(a_action,"a_action")
		HX_STACK_LINE(26)
		::haxe::ds::IntMap tmp = this->keyboardActionsOnJustReleased;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(26)
		int tmp1 = a_actionKey;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		Dynamic tmp2 = a_action;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(26)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CustomController_obj,insertKeyboardActionOnJustReleased,(void))

Void CustomController_obj::insertGamepadActionOnPressed( int a_actionKey,Dynamic a_action){
{
		HX_STACK_FRAME("CustomController","insertGamepadActionOnPressed",0x06bd5266,"CustomController.insertGamepadActionOnPressed","CustomController.hx",29,0x79fa7911)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a_actionKey,"a_actionKey")
		HX_STACK_ARG(a_action,"a_action")
		HX_STACK_LINE(30)
		::haxe::ds::IntMap tmp = this->gamepadActionsOnPressed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		int tmp1 = a_actionKey;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		Dynamic tmp2 = a_action;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(30)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CustomController_obj,insertGamepadActionOnPressed,(void))

Void CustomController_obj::insertGamepadActionOnJustPressed( int a_actionKey,Dynamic a_action){
{
		HX_STACK_FRAME("CustomController","insertGamepadActionOnJustPressed",0xa0b2bf9a,"CustomController.insertGamepadActionOnJustPressed","CustomController.hx",32,0x79fa7911)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a_actionKey,"a_actionKey")
		HX_STACK_ARG(a_action,"a_action")
		HX_STACK_LINE(33)
		::haxe::ds::IntMap tmp = this->gamepadActionsOnJustPressed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		int tmp1 = a_actionKey;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		Dynamic tmp2 = a_action;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CustomController_obj,insertGamepadActionOnJustPressed,(void))

Void CustomController_obj::insertGamepadActionOnJustReleased( int a_actionKey,Dynamic a_action){
{
		HX_STACK_FRAME("CustomController","insertGamepadActionOnJustReleased",0x028af4c5,"CustomController.insertGamepadActionOnJustReleased","CustomController.hx",35,0x79fa7911)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a_actionKey,"a_actionKey")
		HX_STACK_ARG(a_action,"a_action")
		HX_STACK_LINE(36)
		::haxe::ds::IntMap tmp = this->gamepadActionsOnJustReleased;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		int tmp1 = a_actionKey;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		Dynamic tmp2 = a_action;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CustomController_obj,insertGamepadActionOnJustReleased,(void))

Void CustomController_obj::update( ){
{
		HX_STACK_FRAME("CustomController","update",0x1ecd388a,"CustomController.update","CustomController.hx",49,0x79fa7911)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		::flixel::input::gamepad::FlxGamepadManager tmp = ::flixel::FlxG_obj::gamepads;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		this->gamepad = tmp->firstActive;
		HX_STACK_LINE(51)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		if ((tmp2)){
			HX_STACK_LINE(52)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(52)
			{
				HX_STACK_LINE(52)
				::flixel::input::gamepad::FlxGamepad tmp4 = this->gamepad;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(52)
				::flixel::input::gamepad::lists::FlxGamepadAnalogValueList tmp5 = tmp4->analog->value;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(52)
				::flixel::input::gamepad::FlxGamepad _this = tmp5->gamepad;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(52)
				::flixel::input::gamepad::FlxGamepadAnalogStick tmp6 = _this->mapping->getAnalogStick((int)19);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(52)
				tmp3 = _this->getYAxisRaw(tmp6);
			}
			HX_STACK_LINE(52)
			bool tmp4 = (tmp3 != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(52)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(52)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(52)
			if ((tmp5)){
				HX_STACK_LINE(52)
				Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(52)
				{
					HX_STACK_LINE(52)
					::flixel::input::gamepad::FlxGamepad tmp8 = this->gamepad;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(52)
					::flixel::input::gamepad::FlxGamepad tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(52)
					::flixel::input::gamepad::lists::FlxGamepadAnalogValueList tmp10 = tmp9->analog->value;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(52)
					::flixel::input::gamepad::lists::FlxGamepadAnalogValueList tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(52)
					::flixel::input::gamepad::FlxGamepad _this = tmp11->gamepad;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(52)
					::flixel::input::gamepad::FlxGamepadAnalogStick tmp12 = _this->mapping->getAnalogStick((int)19);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(52)
					::flixel::input::gamepad::FlxGamepadAnalogStick tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(52)
					::flixel::input::gamepad::FlxGamepadAnalogStick tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(52)
					Float tmp15 = _this->getAnalogXAxisValue(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(52)
					tmp7 = tmp15;
				}
				HX_STACK_LINE(52)
				tmp6 = (tmp7 != (int)0);
			}
			else{
				HX_STACK_LINE(52)
				tmp6 = true;
			}
			HX_STACK_LINE(52)
			if ((tmp6)){
				HX_STACK_LINE(53)
				::haxe::ds::IntMap tmp7 = this->gamepadActionsOnPressed;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(53)
				Dynamic tmp8 = tmp7->get((int)19);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(53)
				Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(53)
				tmp9().Cast< int >();
			}
			HX_STACK_LINE(55)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(55)
			{
				HX_STACK_LINE(55)
				::flixel::input::gamepad::FlxGamepad tmp8 = this->gamepad;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(55)
				::flixel::input::gamepad::lists::FlxGamepadAnalogValueList tmp9 = tmp8->analog->value;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(55)
				::flixel::input::gamepad::FlxGamepad _this = tmp9->gamepad;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(55)
				::flixel::input::gamepad::FlxGamepadAnalogStick tmp10 = _this->mapping->getAnalogStick((int)20);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(55)
				tmp7 = _this->getYAxisRaw(tmp10);
			}
			HX_STACK_LINE(55)
			bool tmp8 = (tmp7 != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(55)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(55)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(55)
			if ((tmp9)){
				HX_STACK_LINE(55)
				Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(55)
				{
					HX_STACK_LINE(55)
					::flixel::input::gamepad::FlxGamepad tmp12 = this->gamepad;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(55)
					::flixel::input::gamepad::FlxGamepad tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(55)
					::flixel::input::gamepad::lists::FlxGamepadAnalogValueList tmp14 = tmp13->analog->value;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(55)
					::flixel::input::gamepad::lists::FlxGamepadAnalogValueList tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(55)
					::flixel::input::gamepad::FlxGamepad _this = tmp15->gamepad;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(55)
					::flixel::input::gamepad::FlxGamepadAnalogStick tmp16 = _this->mapping->getAnalogStick((int)20);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(55)
					::flixel::input::gamepad::FlxGamepadAnalogStick tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(55)
					::flixel::input::gamepad::FlxGamepadAnalogStick tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(55)
					Float tmp19 = _this->getAnalogXAxisValue(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(55)
					tmp11 = tmp19;
				}
				HX_STACK_LINE(55)
				tmp10 = (tmp11 != (int)0);
			}
			else{
				HX_STACK_LINE(55)
				tmp10 = true;
			}
			HX_STACK_LINE(55)
			if ((tmp10)){
				HX_STACK_LINE(56)
				::haxe::ds::IntMap tmp11 = this->gamepadActionsOnPressed;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(56)
				Dynamic tmp12 = tmp11->get((int)20);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(56)
				Dynamic tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(56)
				tmp13().Cast< int >();
			}
			HX_STACK_LINE(58)
			::haxe::ds::IntMap tmp11 = this->gamepadActionsOnPressed;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(58)
			Dynamic tmp12 = tmp11->keys();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(58)
			for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp12);  __it->hasNext(); ){
				int buttonID = __it->next();
				{
					HX_STACK_LINE(59)
					::flixel::input::gamepad::FlxGamepad tmp13 = this->gamepad;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(59)
					::flixel::input::gamepad::lists::FlxGamepadButtonList tmp14 = tmp13->pressed;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(59)
					::haxe::ds::IntMap tmp15 = ::Shared_obj::supportedButtons;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(59)
					int tmp16 = buttonID;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(59)
					::String tmp17 = tmp15->get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(59)
					::String tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(59)
					Dynamic tmp19 = ::Reflect_obj::getProperty(tmp14,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(59)
					if ((tmp19)){
						HX_STACK_LINE(60)
						::haxe::ds::IntMap tmp20 = this->gamepadActionsOnPressed;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(60)
						int tmp21 = buttonID;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(60)
						Dynamic tmp22 = tmp20->get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(60)
						Dynamic tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(60)
						tmp23().Cast< int >();
					}
				}
;
			}
			HX_STACK_LINE(63)
			::haxe::ds::IntMap tmp13 = this->gamepadActionsOnJustPressed;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(63)
			Dynamic tmp14 = tmp13->keys();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(63)
			for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp14);  __it->hasNext(); ){
				int buttonID = __it->next();
				{
					HX_STACK_LINE(64)
					::flixel::input::gamepad::FlxGamepad tmp15 = this->gamepad;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(64)
					::flixel::input::gamepad::lists::FlxGamepadButtonList tmp16 = tmp15->justPressed;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(64)
					::haxe::ds::IntMap tmp17 = ::Shared_obj::supportedButtons;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(64)
					int tmp18 = buttonID;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(64)
					::String tmp19 = tmp17->get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(64)
					::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(64)
					Dynamic tmp21 = ::Reflect_obj::getProperty(tmp16,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(64)
					if ((tmp21)){
						HX_STACK_LINE(65)
						::haxe::ds::IntMap tmp22 = this->gamepadActionsOnJustPressed;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(65)
						int tmp23 = buttonID;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(65)
						Dynamic tmp24 = tmp22->get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(65)
						Dynamic tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(65)
						tmp25().Cast< int >();
					}
				}
;
			}
			HX_STACK_LINE(68)
			::haxe::ds::IntMap tmp15 = this->gamepadActionsOnJustReleased;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(68)
			Dynamic tmp16 = tmp15->keys();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(68)
			for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp16);  __it->hasNext(); ){
				int buttonID = __it->next();
				{
					HX_STACK_LINE(69)
					::flixel::input::gamepad::FlxGamepad tmp17 = this->gamepad;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(69)
					::flixel::input::gamepad::lists::FlxGamepadButtonList tmp18 = tmp17->justReleased;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(69)
					::haxe::ds::IntMap tmp19 = ::Shared_obj::supportedButtons;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(69)
					int tmp20 = buttonID;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(69)
					::String tmp21 = tmp19->get(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(69)
					::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(69)
					Dynamic tmp23 = ::Reflect_obj::getProperty(tmp18,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(69)
					if ((tmp23)){
						HX_STACK_LINE(70)
						::haxe::ds::IntMap tmp24 = this->gamepadActionsOnJustReleased;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(70)
						int tmp25 = buttonID;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(70)
						Dynamic tmp26 = tmp24->get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(70)
						Dynamic tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(70)
						tmp27().Cast< int >();
					}
				}
;
			}
		}
		HX_STACK_LINE(74)
		::haxe::ds::IntMap tmp3 = this->keyboardActionsOnPressed;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(74)
		Dynamic tmp4 = tmp3->keys();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(74)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp4);  __it->hasNext(); ){
			int keyID = __it->next();
			{
				HX_STACK_LINE(75)
				::flixel::input::keyboard::FlxKeyboard tmp5 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(75)
				::flixel::input::keyboard::FlxKeyList tmp6 = tmp5->pressed;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(75)
				::haxe::ds::IntMap tmp7 = ::Shared_obj::supportedKeys;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(75)
				int tmp8 = keyID;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(75)
				::String tmp9 = tmp7->get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(75)
				::String tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(75)
				Dynamic tmp11 = ::Reflect_obj::getProperty(tmp6,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(75)
				if ((tmp11)){
					HX_STACK_LINE(76)
					::haxe::ds::IntMap tmp12 = this->keyboardActionsOnPressed;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(76)
					int tmp13 = keyID;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(76)
					Dynamic tmp14 = tmp12->get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(76)
					Dynamic tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(76)
					tmp15().Cast< int >();
				}
			}
;
		}
		HX_STACK_LINE(79)
		::haxe::ds::IntMap tmp5 = this->keyboardActionsOnJustPressed;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(79)
		Dynamic tmp6 = tmp5->keys();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(79)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp6);  __it->hasNext(); ){
			int keyID = __it->next();
			{
				HX_STACK_LINE(80)
				::flixel::input::keyboard::FlxKeyboard tmp7 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(80)
				::flixel::input::keyboard::FlxKeyList tmp8 = tmp7->justPressed;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(80)
				::haxe::ds::IntMap tmp9 = ::Shared_obj::supportedKeys;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(80)
				int tmp10 = keyID;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(80)
				::String tmp11 = tmp9->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(80)
				::String tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(80)
				Dynamic tmp13 = ::Reflect_obj::getProperty(tmp8,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(80)
				if ((tmp13)){
					HX_STACK_LINE(81)
					::haxe::ds::IntMap tmp14 = this->keyboardActionsOnJustPressed;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(81)
					int tmp15 = keyID;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(81)
					Dynamic tmp16 = tmp14->get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(81)
					Dynamic tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(81)
					tmp17().Cast< int >();
				}
			}
;
		}
		HX_STACK_LINE(84)
		::haxe::ds::IntMap tmp7 = this->keyboardActionsOnJustReleased;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(84)
		Dynamic tmp8 = tmp7->keys();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(84)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp8);  __it->hasNext(); ){
			int keyID = __it->next();
			{
				HX_STACK_LINE(85)
				::flixel::input::keyboard::FlxKeyboard tmp9 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(85)
				::flixel::input::keyboard::FlxKeyList tmp10 = tmp9->justReleased;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(85)
				::haxe::ds::IntMap tmp11 = ::Shared_obj::supportedKeys;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(85)
				int tmp12 = keyID;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(85)
				::String tmp13 = tmp11->get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(85)
				::String tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(85)
				Dynamic tmp15 = ::Reflect_obj::getProperty(tmp10,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(85)
				if ((tmp15)){
					HX_STACK_LINE(86)
					::haxe::ds::IntMap tmp16 = this->keyboardActionsOnJustReleased;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(86)
					int tmp17 = keyID;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(86)
					Dynamic tmp18 = tmp16->get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(86)
					Dynamic tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(86)
					tmp19().Cast< int >();
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CustomController_obj,update,(void))

Void CustomController_obj::initDefaultActions( ){
{
		HX_STACK_FRAME("CustomController","initDefaultActions",0xe8d4586d,"CustomController.initDefaultActions","CustomController.hx",91,0x79fa7911)
		HX_STACK_THIS(this)
		HX_STACK_LINE(91)
		::CustomController _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		int run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","CustomController.hx",93,0x79fa7911)
			{
				HX_STACK_LINE(93)
				::Player tmp = ::Shared_obj::player;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(93)
				tmp->move((int)0,(int)-1);
				HX_STACK_LINE(93)
				return (int)0;
			}
			return null();
		}
		HX_END_LOCAL_FUNC0(return)

		HX_STACK_LINE(93)
		this->insertKeyboardActionOnPressed((int)87, Dynamic(new _Function_1_1()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
		int __ArgCount() const { return 0; }
		int run(){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","CustomController.hx",94,0x79fa7911)
			{
				HX_STACK_LINE(94)
				::Player tmp = ::Shared_obj::player;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(94)
				tmp->move((int)0,(int)1);
				HX_STACK_LINE(94)
				return (int)0;
			}
			return null();
		}
		HX_END_LOCAL_FUNC0(return)

		HX_STACK_LINE(94)
		this->insertKeyboardActionOnPressed((int)83, Dynamic(new _Function_1_2()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_3)
		int __ArgCount() const { return 0; }
		int run(){
			HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","CustomController.hx",95,0x79fa7911)
			{
				HX_STACK_LINE(95)
				::Player tmp = ::Shared_obj::player;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(95)
				tmp->move((int)-1,(int)0);
				HX_STACK_LINE(95)
				return (int)0;
			}
			return null();
		}
		HX_END_LOCAL_FUNC0(return)

		HX_STACK_LINE(95)
		this->insertKeyboardActionOnPressed((int)65, Dynamic(new _Function_1_3()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_4)
		int __ArgCount() const { return 0; }
		int run(){
			HX_STACK_FRAME("*","_Function_1_4",0x5200ed3a,"*._Function_1_4","CustomController.hx",96,0x79fa7911)
			{
				HX_STACK_LINE(96)
				::Player tmp = ::Shared_obj::player;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(96)
				tmp->move((int)1,(int)0);
				HX_STACK_LINE(96)
				return (int)0;
			}
			return null();
		}
		HX_END_LOCAL_FUNC0(return)

		HX_STACK_LINE(96)
		this->insertKeyboardActionOnPressed((int)68, Dynamic(new _Function_1_4()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_5)
		int __ArgCount() const { return 0; }
		int run(){
			HX_STACK_FRAME("*","_Function_1_5",0x5200ed3b,"*._Function_1_5","CustomController.hx",97,0x79fa7911)
			{
				HX_STACK_LINE(97)
				::Player tmp = ::Shared_obj::player;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(97)
				tmp->move((int)0,(int)-1);
				HX_STACK_LINE(97)
				return (int)0;
			}
			return null();
		}
		HX_END_LOCAL_FUNC0(return)

		HX_STACK_LINE(97)
		this->insertKeyboardActionOnPressed((int)38, Dynamic(new _Function_1_5()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_6)
		int __ArgCount() const { return 0; }
		int run(){
			HX_STACK_FRAME("*","_Function_1_6",0x5200ed3c,"*._Function_1_6","CustomController.hx",98,0x79fa7911)
			{
				HX_STACK_LINE(98)
				::Player tmp = ::Shared_obj::player;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(98)
				tmp->move((int)0,(int)1);
				HX_STACK_LINE(98)
				return (int)0;
			}
			return null();
		}
		HX_END_LOCAL_FUNC0(return)

		HX_STACK_LINE(98)
		this->insertKeyboardActionOnPressed((int)40, Dynamic(new _Function_1_6()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_7)
		int __ArgCount() const { return 0; }
		int run(){
			HX_STACK_FRAME("*","_Function_1_7",0x5200ed3d,"*._Function_1_7","CustomController.hx",99,0x79fa7911)
			{
				HX_STACK_LINE(99)
				::Player tmp = ::Shared_obj::player;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(99)
				tmp->move((int)-1,(int)0);
				HX_STACK_LINE(99)
				return (int)0;
			}
			return null();
		}
		HX_END_LOCAL_FUNC0(return)

		HX_STACK_LINE(99)
		this->insertKeyboardActionOnPressed((int)37, Dynamic(new _Function_1_7()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_8)
		int __ArgCount() const { return 0; }
		int run(){
			HX_STACK_FRAME("*","_Function_1_8",0x5200ed3e,"*._Function_1_8","CustomController.hx",100,0x79fa7911)
			{
				HX_STACK_LINE(100)
				::Player tmp = ::Shared_obj::player;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(100)
				tmp->move((int)1,(int)0);
				HX_STACK_LINE(100)
				return (int)0;
			}
			return null();
		}
		HX_END_LOCAL_FUNC0(return)

		HX_STACK_LINE(100)
		this->insertKeyboardActionOnPressed((int)39, Dynamic(new _Function_1_8()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_9)
		int __ArgCount() const { return 0; }
		int run(){
			HX_STACK_FRAME("*","_Function_1_9",0x5200ed3f,"*._Function_1_9","CustomController.hx",101,0x79fa7911)
			{
				HX_STACK_LINE(101)
				::Sys_obj::exit((int)0);
				HX_STACK_LINE(101)
				return (int)0;
			}
			return null();
		}
		HX_END_LOCAL_FUNC0(return)

		HX_STACK_LINE(101)
		this->insertKeyboardActionOnPressed((int)27, Dynamic(new _Function_1_9()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_10)
		int __ArgCount() const { return 0; }
		int run(){
			HX_STACK_FRAME("*","_Function_1_10",0x6ecea319,"*._Function_1_10","CustomController.hx",102,0x79fa7911)
			{
				HX_STACK_LINE(102)
				::Player tmp = ::Shared_obj::player;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(102)
				tmp->isRunning = true;
				HX_STACK_LINE(102)
				return (int)0;
			}
			return null();
		}
		HX_END_LOCAL_FUNC0(return)

		HX_STACK_LINE(102)
		this->insertKeyboardActionOnPressed((int)16, Dynamic(new _Function_1_10()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_11)
		int __ArgCount() const { return 0; }
		int run(){
			HX_STACK_FRAME("*","_Function_1_11",0x6ecea31a,"*._Function_1_11","CustomController.hx",103,0x79fa7911)
			{
				HX_STACK_LINE(103)
				::Player tmp = ::Shared_obj::player;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(103)
				tmp->isRunning = false;
				HX_STACK_LINE(103)
				return (int)0;
			}
			return null();
		}
		HX_END_LOCAL_FUNC0(return)

		HX_STACK_LINE(103)
		this->insertKeyboardActionOnJustReleased((int)16, Dynamic(new _Function_1_11()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_12)
		int __ArgCount() const { return 0; }
		int run(){
			HX_STACK_FRAME("*","_Function_1_12",0x6ecea31b,"*._Function_1_12","CustomController.hx",104,0x79fa7911)
			{
				HX_STACK_LINE(104)
				::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(104)
				Float tmp1 = tmp->zoom;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(104)
				bool tmp2 = (tmp1 < ((Float)3.0));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(104)
				if ((tmp2)){
					HX_STACK_LINE(104)
					::flixel::FlxCamera tmp3 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(104)
					::flixel::FlxCamera _g1 = tmp3;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(104)
					Float tmp4 = (_g1->zoom + ((Float)0.1));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(104)
					_g1->set_zoom(tmp4);
				}
				HX_STACK_LINE(104)
				return (int)0;
			}
			return null();
		}
		HX_END_LOCAL_FUNC0(return)

		HX_STACK_LINE(104)
		this->insertKeyboardActionOnPressed((int)33, Dynamic(new _Function_1_12()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_13)
		int __ArgCount() const { return 0; }
		int run(){
			HX_STACK_FRAME("*","_Function_1_13",0x6ecea31c,"*._Function_1_13","CustomController.hx",105,0x79fa7911)
			{
				HX_STACK_LINE(105)
				::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(105)
				Float tmp1 = tmp->zoom;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(105)
				bool tmp2 = (tmp1 > ((Float)1.0));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(105)
				if ((tmp2)){
					HX_STACK_LINE(105)
					::flixel::FlxCamera tmp3 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(105)
					::flixel::FlxCamera _g1 = tmp3;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(105)
					Float tmp4 = (_g1->zoom - ((Float)0.1));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(105)
					_g1->set_zoom(tmp4);
				}
				HX_STACK_LINE(105)
				return (int)0;
			}
			return null();
		}
		HX_END_LOCAL_FUNC0(return)

		HX_STACK_LINE(105)
		this->insertKeyboardActionOnPressed((int)34, Dynamic(new _Function_1_13()));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_14,::CustomController,_g)
		int __ArgCount() const { return 0; }
		int run(){
			HX_STACK_FRAME("*","_Function_1_14",0x6ecea31d,"*._Function_1_14","CustomController.hx",107,0x79fa7911)
			{
				HX_STACK_LINE(108)
				::Player tmp = ::Shared_obj::player;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(108)
				Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(108)
				{
					HX_STACK_LINE(108)
					::flixel::input::gamepad::lists::FlxGamepadAnalogList tmp2 = _g->gamepad->analog;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(108)
					::flixel::input::gamepad::FlxGamepad tmp3 = tmp2->value->gamepad;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(108)
					::flixel::input::gamepad::FlxGamepad _this = tmp3;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(108)
					::flixel::input::gamepad::FlxGamepadAnalogStick tmp4 = _this->mapping->getAnalogStick((int)19);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(108)
					tmp1 = _this->getAnalogXAxisValue(tmp4);
				}
				HX_STACK_LINE(108)
				Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(108)
				{
					HX_STACK_LINE(108)
					::flixel::input::gamepad::lists::FlxGamepadAnalogList tmp3 = _g->gamepad->analog;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(108)
					::flixel::input::gamepad::FlxGamepad tmp4 = tmp3->value->gamepad;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(108)
					::flixel::input::gamepad::FlxGamepad _this = tmp4;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(108)
					::flixel::input::gamepad::FlxGamepadAnalogStick tmp5 = _this->mapping->getAnalogStick((int)19);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(108)
					tmp2 = _this->getYAxisRaw(tmp5);
				}
				HX_STACK_LINE(108)
				tmp->move(tmp1,tmp2);
				HX_STACK_LINE(109)
				return (int)0;
			}
			return null();
		}
		HX_END_LOCAL_FUNC0(return)

		HX_STACK_LINE(107)
		this->insertGamepadActionOnPressed((int)19, Dynamic(new _Function_1_14(_g)));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_15)
		int __ArgCount() const { return 0; }
		int run(){
			HX_STACK_FRAME("*","_Function_1_15",0x6ecea31e,"*._Function_1_15","CustomController.hx",111,0x79fa7911)
			{
				HX_STACK_LINE(112)
				Dynamic tmp = hx::SourceInfo(HX_HCSTRING("CustomController.hx","\x11","\x79","\xfa","\x79"),112,HX_HCSTRING("CustomController","\xcd","\xe7","\xd3","\xa3"),HX_HCSTRING("initDefaultActions","\x6c","\x68","\x4a","\x45"));		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(112)
				::haxe::Log_obj::trace(HX_HCSTRING("Right analog stick","\x44","\x2e","\xe0","\x2d"),tmp);
				HX_STACK_LINE(113)
				return (int)0;
			}
			return null();
		}
		HX_END_LOCAL_FUNC0(return)

		HX_STACK_LINE(111)
		this->insertGamepadActionOnPressed((int)20, Dynamic(new _Function_1_15()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_16)
		int __ArgCount() const { return 0; }
		int run(){
			HX_STACK_FRAME("*","_Function_1_16",0x6ecea31f,"*._Function_1_16","CustomController.hx",116,0x79fa7911)
			{
				HX_STACK_LINE(116)
				::Sys_obj::exit((int)0);
				HX_STACK_LINE(116)
				return (int)0;
			}
			return null();
		}
		HX_END_LOCAL_FUNC0(return)

		HX_STACK_LINE(116)
		this->insertGamepadActionOnPressed((int)7, Dynamic(new _Function_1_16()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_17)
		int __ArgCount() const { return 0; }
		int run(){
			HX_STACK_FRAME("*","_Function_1_17",0x6ecea320,"*._Function_1_17","CustomController.hx",117,0x79fa7911)
			{
				HX_STACK_LINE(117)
				Dynamic tmp = hx::SourceInfo(HX_HCSTRING("CustomController.hx","\x11","\x79","\xfa","\x79"),117,HX_HCSTRING("CustomController","\xcd","\xe7","\xd3","\xa3"),HX_HCSTRING("initDefaultActions","\x6c","\x68","\x4a","\x45"));		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(117)
				::haxe::Log_obj::trace(HX_HCSTRING("Hello!!","\x52","\xe0","\x12","\x8b"),tmp);
				HX_STACK_LINE(117)
				return (int)0;
			}
			return null();
		}
		HX_END_LOCAL_FUNC0(return)

		HX_STACK_LINE(117)
		this->insertGamepadActionOnJustPressed((int)11, Dynamic(new _Function_1_17()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CustomController_obj,initDefaultActions,(void))


CustomController_obj::CustomController_obj()
{
}

void CustomController_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CustomController);
	HX_MARK_MEMBER_NAME(keyboardActionsOnPressed,"keyboardActionsOnPressed");
	HX_MARK_MEMBER_NAME(keyboardActionsOnJustPressed,"keyboardActionsOnJustPressed");
	HX_MARK_MEMBER_NAME(keyboardActionsOnJustReleased,"keyboardActionsOnJustReleased");
	HX_MARK_MEMBER_NAME(gamepadActionsOnPressed,"gamepadActionsOnPressed");
	HX_MARK_MEMBER_NAME(gamepadActionsOnJustPressed,"gamepadActionsOnJustPressed");
	HX_MARK_MEMBER_NAME(gamepadActionsOnJustReleased,"gamepadActionsOnJustReleased");
	HX_MARK_MEMBER_NAME(gamepad,"gamepad");
	HX_MARK_END_CLASS();
}

void CustomController_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(keyboardActionsOnPressed,"keyboardActionsOnPressed");
	HX_VISIT_MEMBER_NAME(keyboardActionsOnJustPressed,"keyboardActionsOnJustPressed");
	HX_VISIT_MEMBER_NAME(keyboardActionsOnJustReleased,"keyboardActionsOnJustReleased");
	HX_VISIT_MEMBER_NAME(gamepadActionsOnPressed,"gamepadActionsOnPressed");
	HX_VISIT_MEMBER_NAME(gamepadActionsOnJustPressed,"gamepadActionsOnJustPressed");
	HX_VISIT_MEMBER_NAME(gamepadActionsOnJustReleased,"gamepadActionsOnJustReleased");
	HX_VISIT_MEMBER_NAME(gamepad,"gamepad");
}

Dynamic CustomController_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { return gamepad; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"initDefaultActions") ) { return initDefaultActions_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"gamepadActionsOnPressed") ) { return gamepadActionsOnPressed; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"keyboardActionsOnPressed") ) { return keyboardActionsOnPressed; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"gamepadActionsOnJustPressed") ) { return gamepadActionsOnJustPressed; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"keyboardActionsOnJustPressed") ) { return keyboardActionsOnJustPressed; }
		if (HX_FIELD_EQ(inName,"gamepadActionsOnJustReleased") ) { return gamepadActionsOnJustReleased; }
		if (HX_FIELD_EQ(inName,"insertGamepadActionOnPressed") ) { return insertGamepadActionOnPressed_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"keyboardActionsOnJustReleased") ) { return keyboardActionsOnJustReleased; }
		if (HX_FIELD_EQ(inName,"insertKeyboardActionOnPressed") ) { return insertKeyboardActionOnPressed_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"insertGamepadActionOnJustPressed") ) { return insertGamepadActionOnJustPressed_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"insertKeyboardActionOnJustPressed") ) { return insertKeyboardActionOnJustPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"insertGamepadActionOnJustReleased") ) { return insertGamepadActionOnJustReleased_dyn(); }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"insertKeyboardActionOnJustReleased") ) { return insertKeyboardActionOnJustReleased_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CustomController_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { gamepad=inValue.Cast< ::flixel::input::gamepad::FlxGamepad >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"gamepadActionsOnPressed") ) { gamepadActionsOnPressed=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"keyboardActionsOnPressed") ) { keyboardActionsOnPressed=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"gamepadActionsOnJustPressed") ) { gamepadActionsOnJustPressed=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"keyboardActionsOnJustPressed") ) { keyboardActionsOnJustPressed=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gamepadActionsOnJustReleased") ) { gamepadActionsOnJustReleased=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"keyboardActionsOnJustReleased") ) { keyboardActionsOnJustReleased=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CustomController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("keyboardActionsOnPressed","\x4d","\x16","\xe1","\x7e"));
	outFields->push(HX_HCSTRING("keyboardActionsOnJustPressed","\x01","\x03","\x04","\x8b"));
	outFields->push(HX_HCSTRING("keyboardActionsOnJustReleased","\x7e","\xab","\x54","\x1f"));
	outFields->push(HX_HCSTRING("gamepadActionsOnPressed","\x47","\x4e","\x0e","\x50"));
	outFields->push(HX_HCSTRING("gamepadActionsOnJustPressed","\xfb","\xbf","\xc5","\xf2"));
	outFields->push(HX_HCSTRING("gamepadActionsOnJustReleased","\x44","\x49","\x18","\x81"));
	outFields->push(HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(CustomController_obj,keyboardActionsOnPressed),HX_HCSTRING("keyboardActionsOnPressed","\x4d","\x16","\xe1","\x7e")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(CustomController_obj,keyboardActionsOnJustPressed),HX_HCSTRING("keyboardActionsOnJustPressed","\x01","\x03","\x04","\x8b")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(CustomController_obj,keyboardActionsOnJustReleased),HX_HCSTRING("keyboardActionsOnJustReleased","\x7e","\xab","\x54","\x1f")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(CustomController_obj,gamepadActionsOnPressed),HX_HCSTRING("gamepadActionsOnPressed","\x47","\x4e","\x0e","\x50")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(CustomController_obj,gamepadActionsOnJustPressed),HX_HCSTRING("gamepadActionsOnJustPressed","\xfb","\xbf","\xc5","\xf2")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(CustomController_obj,gamepadActionsOnJustReleased),HX_HCSTRING("gamepadActionsOnJustReleased","\x44","\x49","\x18","\x81")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepad*/ ,(int)offsetof(CustomController_obj,gamepad),HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("keyboardActionsOnPressed","\x4d","\x16","\xe1","\x7e"),
	HX_HCSTRING("keyboardActionsOnJustPressed","\x01","\x03","\x04","\x8b"),
	HX_HCSTRING("keyboardActionsOnJustReleased","\x7e","\xab","\x54","\x1f"),
	HX_HCSTRING("gamepadActionsOnPressed","\x47","\x4e","\x0e","\x50"),
	HX_HCSTRING("gamepadActionsOnJustPressed","\xfb","\xbf","\xc5","\xf2"),
	HX_HCSTRING("gamepadActionsOnJustReleased","\x44","\x49","\x18","\x81"),
	HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"),
	HX_HCSTRING("insertKeyboardActionOnPressed","\x8d","\x93","\xb0","\x1f"),
	HX_HCSTRING("insertKeyboardActionOnJustPressed","\x41","\x20","\x7b","\x2f"),
	HX_HCSTRING("insertKeyboardActionOnJustReleased","\x3e","\x26","\x17","\x63"),
	HX_HCSTRING("insertGamepadActionOnPressed","\x25","\xf7","\x88","\x38"),
	HX_HCSTRING("insertGamepadActionOnJustPressed","\xd9","\x2f","\xa9","\xc4"),
	HX_HCSTRING("insertGamepadActionOnJustReleased","\xa6","\xbb","\x36","\x56"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("initDefaultActions","\x6c","\x68","\x4a","\x45"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CustomController_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CustomController_obj::__mClass,"__mClass");
};

#endif

hx::Class CustomController_obj::__mClass;

void CustomController_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("CustomController","\xcd","\xe7","\xd3","\xa3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CustomController_obj >;
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

