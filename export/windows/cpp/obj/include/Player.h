#ifndef INCLUDED_Player
#define INCLUDED_Player

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_nape_FlxNapeSprite
#include <flixel/addons/nape/FlxNapeSprite.h>
#endif
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,nape,FlxNapeSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(nape,geom,Vec2)


class HXCPP_CLASS_ATTRIBUTES  Player_obj : public ::flixel::addons::nape::FlxNapeSprite_obj{
	public:
		typedef ::flixel::addons::nape::FlxNapeSprite_obj super;
		typedef Player_obj OBJ_;
		Player_obj();
		Void __construct(Dynamic __o_a_x,Dynamic __o_a_y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Player")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Player_obj > __new(Dynamic __o_a_x,Dynamic __o_a_y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Player_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c"); }

		Float _runSpeed;
		::nape::geom::Vec2 _currentSpeed;
		bool isRunning;
		virtual Void beforeUpdate( );
		Dynamic beforeUpdate_dyn();

		virtual Void update( Float elapsed);

		virtual Void afterUpdate( );
		Dynamic afterUpdate_dyn();

		virtual int move( Dynamic a_x,Dynamic a_y);
		Dynamic move_dyn();

		virtual Void updateRun( );
		Dynamic updateRun_dyn();

};


#endif /* INCLUDED_Player */ 
