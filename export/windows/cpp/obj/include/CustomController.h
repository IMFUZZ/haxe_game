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

		::haxe::ds::IntMap keyboardEventsOnPressed;
		::haxe::ds::IntMap keyboardEventsOnJustPressed;
		::haxe::ds::IntMap keyboardEventsOnJustReleased;
		::haxe::ds::IntMap gamepadEventsOnPressed;
		::haxe::ds::IntMap gamepadEventsOnJustPressed;
		::haxe::ds::IntMap gamepadEventsOnJustReleased;
		::flixel::input::gamepad::FlxGamepad gamepad;
		virtual Void addKeyboardEventOnPressed( int a_actionKey,Dynamic a_action);
		Dynamic addKeyboardEventOnPressed_dyn();

		virtual Void addKeyboardEventOnJustPressed( int a_actionKey,Dynamic a_action);
		Dynamic addKeyboardEventOnJustPressed_dyn();

		virtual Void addKeyboardEventOnJustReleased( int a_actionKey,Dynamic a_action);
		Dynamic addKeyboardEventOnJustReleased_dyn();

		virtual Void addGamepadEventOnPressed( int a_actionKey,Dynamic a_action);
		Dynamic addGamepadEventOnPressed_dyn();

		virtual Void addGamepadEventOnJustPressed( int a_actionKey,Dynamic a_action);
		Dynamic addGamepadEventOnJustPressed_dyn();

		virtual Void addGamepadEventOnJustReleased( int a_actionKey,Dynamic a_action);
		Dynamic addGamepadEventOnJustReleased_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void initDefaultEvents( );
		Dynamic initDefaultEvents_dyn();

};


#endif /* INCLUDED_CustomController */ 
