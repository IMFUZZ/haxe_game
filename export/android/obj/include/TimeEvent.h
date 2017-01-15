#ifndef INCLUDED_TimeEvent
#define INCLUDED_TimeEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(TimeEvent)


class HXCPP_CLASS_ATTRIBUTES  TimeEvent_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TimeEvent_obj OBJ_;
		TimeEvent_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="TimeEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TimeEvent_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TimeEvent_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("TimeEvent","\xad","\x7c","\x88","\xcc"); }

};


#endif /* INCLUDED_TimeEvent */ 
