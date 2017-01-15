// Generated by Haxe 3.3.0
#ifndef INCLUDED_Clock
#define INCLUDED_Clock

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
HX_DECLARE_CLASS0(Clock)
HX_DECLARE_CLASS0(TimeEvent)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES Clock_obj : public ::flixel::util::FlxTimer_obj
{
	public:
		typedef ::flixel::util::FlxTimer_obj super;
		typedef Clock_obj OBJ_;
		Clock_obj();
		void __construct();

	public:
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Clock")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Clock_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Clock_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Clock","\xae","\x79","\x90","\xdb"); }

		Int currentDay;
		Int currentYear;
		Int daysInMonth;
		::Array< ::String > _seasons;
		::Array< ::Dynamic> _timeEvent;
		void _onComplete(::flixel::util::FlxTimer timer);
		::Dynamic _onComplete_dyn();

		void addDay( ::Dynamic numberOfDays);
		::Dynamic addDay_dyn();

		void update(Float elapsed);

		Int getCurrentYear();
		::Dynamic getCurrentYear_dyn();

		::String getCurrentSeason();
		::Dynamic getCurrentSeason_dyn();

		Int getCurrentDay();
		::Dynamic getCurrentDay_dyn();

		Int getCurrentHour();
		::Dynamic getCurrentHour_dyn();

		Int getCurrentMinute();
		::Dynamic getCurrentMinute_dyn();

		Int addTimeEvent(::TimeEvent a_timeEvent, ::Dynamic a_Event);
		::Dynamic addTimeEvent_dyn();

};


#endif /* INCLUDED_Clock */ 