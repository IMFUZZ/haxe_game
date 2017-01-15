#ifndef INCLUDED_Darkness
#define INCLUDED_Darkness

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(Darkness)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Darkness_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Darkness_obj OBJ_;
		Darkness_obj();
		Void __construct(Dynamic __o_a_x,Dynamic __o_a_y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Darkness")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Darkness_obj > __new(Dynamic __o_a_x,Dynamic __o_a_y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Darkness_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Darkness","\x2d","\x04","\x9a","\x6c"); }

		Array< ::Dynamic > _lightSources;
		virtual Void update( Float elapsed);

		virtual Void addLightSource( ::flixel::FlxSprite a_lightSource);
		Dynamic addLightSource_dyn();

		virtual Void updateLightSources( Float elapsed);
		Dynamic updateLightSources_dyn();

		virtual Void stampLightSources( Float elapsed);
		Dynamic stampLightSources_dyn();

};


#endif /* INCLUDED_Darkness */ 
