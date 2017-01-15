#ifndef INCLUDED_Player
#define INCLUDED_Player

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Character)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,nape,FlxNapeSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Player_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Player_obj OBJ_;
		Player_obj();
		Void __construct(Float a_x,Float a_y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Player")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Player_obj > __new(Float a_x,Float a_y);
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

		::Character character;
		::flixel::FlxSprite tileSelected;
		virtual Void update( Float elapsed);
		Dynamic update_dyn();

};


#endif /* INCLUDED_Player */ 
