#ifndef INCLUDED__SystemUsage_Consolas
#define INCLUDED__SystemUsage_Consolas

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_text_Font
#include <openfl/_legacy/text/Font.h>
#endif
HX_DECLARE_CLASS1(_SystemUsage,Consolas)
HX_DECLARE_CLASS3(openfl,_legacy,text,Font)
HX_DECLARE_CLASS3(openfl,_legacy,text,FontStyle)
HX_DECLARE_CLASS3(openfl,_legacy,text,FontType)
namespace _SystemUsage{


class HXCPP_CLASS_ATTRIBUTES  Consolas_obj : public ::openfl::_legacy::text::Font_obj{
	public:
		typedef ::openfl::_legacy::text::Font_obj super;
		typedef Consolas_obj OBJ_;
		Consolas_obj();
		Void __construct(::String __o_filename,::openfl::_legacy::text::FontStyle style,::openfl::_legacy::text::FontType type);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="_SystemUsage.Consolas")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Consolas_obj > __new(::String __o_filename,::openfl::_legacy::text::FontStyle style,::openfl::_legacy::text::FontType type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Consolas_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Consolas","\xe0","\xb9","\x09","\x7c"); }

		static void __boot();
		static ::String resourceName;
};

} // end namespace _SystemUsage

#endif /* INCLUDED__SystemUsage_Consolas */ 
