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


class HXCPP_CLASS_ATTRIBUTES  Clock_obj : public ::flixel::util::FlxTimer_obj{
	public:
		typedef ::flixel::util::FlxTimer_obj super;
		typedef Clock_obj OBJ_;
		Clock_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Clock")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Clock_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Clock_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Clock","\xae","\x79","\x90","\xdb"); }

		int currentDay;
		int currentYear;
		int daysInMonth;
		Array< ::String > _seasons;
		Array< ::Dynamic > _timeEvent;
		virtual Void _onComplete( ::flixel::util::FlxTimer timer);
		Dynamic _onComplete_dyn();

		virtual Void addDay( Dynamic numberOfDays);
		Dynamic addDay_dyn();

		virtual Void update( Float elapsed);

		virtual int getCurrentYear( );
		Dynamic getCurrentYear_dyn();

		virtual ::String getCurrentSeason( );
		Dynamic getCurrentSeason_dyn();

		virtual int getCurrentSeasonIndex( );
		Dynamic getCurrentSeasonIndex_dyn();

		virtual int getCurrentDay( );
		Dynamic getCurrentDay_dyn();

		virtual int getCurrentHour( );
		Dynamic getCurrentHour_dyn();

		virtual int getCurrentMinute( );
		Dynamic getCurrentMinute_dyn();

		virtual int addTimeEvent( ::TimeEvent a_timeEvent,Dynamic a_Event);
		Dynamic addTimeEvent_dyn();

};


#endif /* INCLUDED_Clock */ 
