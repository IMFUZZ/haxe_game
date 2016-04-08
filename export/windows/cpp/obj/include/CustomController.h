#ifndef INCLUDED_CustomController
#define INCLUDED_CustomController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(CustomController)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepad)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)


class HXCPP_CLASS_ATTRIBUTES  CustomController_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CustomController_obj OBJ_;
		CustomController_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="CustomController")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CustomController_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CustomController_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("CustomController","\xcd","\xe7","\xd3","\xa3"); }

		::haxe::ds::IntMap keyboardActionsOnPressed;
		::haxe::ds::IntMap keyboardActionsOnJustPressed;
		::haxe::ds::IntMap keyboardActionsOnJustReleased;
		::haxe::ds::IntMap gamepadActionsOnPressed;
		::haxe::ds::IntMap gamepadActionsOnJustPressed;
		::haxe::ds::IntMap gamepadActionsOnJustReleased;
		::flixel::input::gamepad::FlxGamepad gamepad;
		virtual Void insertKeyboardActionOnPressed( int a_actionKey,Dynamic a_action);
		Dynamic insertKeyboardActionOnPressed_dyn();

		virtual Void insertKeyboardActionOnJustPressed( int a_actionKey,Dynamic a_action);
		Dynamic insertKeyboardActionOnJustPressed_dyn();

		virtual Void insertKeyboardActionOnJustReleased( int a_actionKey,Dynamic a_action);
		Dynamic insertKeyboardActionOnJustReleased_dyn();

		virtual Void insertGamepadActionOnPressed( int a_actionKey,Dynamic a_action);
		Dynamic insertGamepadActionOnPressed_dyn();

		virtual Void insertGamepadActionOnJustPressed( int a_actionKey,Dynamic a_action);
		Dynamic insertGamepadActionOnJustPressed_dyn();

		virtual Void insertGamepadActionOnJustReleased( int a_actionKey,Dynamic a_action);
		Dynamic insertGamepadActionOnJustReleased_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void initDefaultActions( );
		Dynamic initDefaultActions_dyn();

};


#endif /* INCLUDED_CustomController */ 
