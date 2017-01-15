#ifndef INCLUDED_Shared
#define INCLUDED_Shared

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Clock)
HX_DECLARE_CLASS0(Darkness)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS0(Shared)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)


class HXCPP_CLASS_ATTRIBUTES  Shared_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Shared_obj OBJ_;
		Shared_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="Shared")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Shared_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Shared_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Shared","\xc5","\xd2","\xbf","\x51"); }

		static void __boot();
		static int TILE_WIDTH;
		static int TILE_HEIGHT;
		static ::Player player;
		static ::Clock clock;
		static ::Darkness darkness;
		static ::haxe::ds::IntMap supportedKeys;
		static ::haxe::ds::IntMap supportedButtons;
		static Void init( );
		static Dynamic init_dyn();

};


#endif /* INCLUDED_Shared */ 
