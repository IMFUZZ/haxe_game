#ifndef INCLUDED_SystemUsage
#define INCLUDED_SystemUsage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
HX_DECLARE_CLASS0(SystemUsage)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextField)


class HXCPP_CLASS_ATTRIBUTES  SystemUsage_obj : public ::openfl::_legacy::text::TextField_obj{
	public:
		typedef ::openfl::_legacy::text::TextField_obj super;
		typedef SystemUsage_obj OBJ_;
		SystemUsage_obj();
		Void __construct(hx::Null< Float >  __o_a_x,hx::Null< Float >  __o_a_y,hx::Null< int >  __o_a_color);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="SystemUsage")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SystemUsage_obj > __new(hx::Null< Float >  __o_a_x,hx::Null< Float >  __o_a_y,hx::Null< int >  __o_a_color);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SystemUsage_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SystemUsage","\x92","\x4b","\xd8","\x92"); }

		static ::String CONSOLAS;
		Array< Float > times;
		Float memoryPeak;
		virtual Void _onEnter( Dynamic _);
		Dynamic _onEnter_dyn();

};


#endif /* INCLUDED_SystemUsage */ 
