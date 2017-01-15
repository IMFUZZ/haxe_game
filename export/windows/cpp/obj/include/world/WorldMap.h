// Generated by Haxe 3.4.0
#ifndef INCLUDED_world_WorldMap
#define INCLUDED_world_WorldMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
HX_DECLARE_CLASS1(characters,Character)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,nape,FlxNapeSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS1(world,WorldMap)

namespace world{


class HXCPP_CLASS_ATTRIBUTES WorldMap_obj : public  ::flixel::group::FlxTypedGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedGroup_obj super;
		typedef WorldMap_obj OBJ_;
		WorldMap_obj();

	public:
		enum { _hx_ClassId = 0x76189b38 };

		void __construct(hx::Null< Float >  __o_a_x,hx::Null< Float >  __o_a_y, ::openfl::_legacy::display::BitmapData a_bitmapData);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="world.WorldMap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"world.WorldMap"); }
		static hx::ObjectPtr< WorldMap_obj > __new(hx::Null< Float >  __o_a_x,hx::Null< Float >  __o_a_y, ::openfl::_legacy::display::BitmapData a_bitmapData);
		static hx::ObjectPtr< WorldMap_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_a_x,hx::Null< Float >  __o_a_y, ::openfl::_legacy::display::BitmapData a_bitmapData);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WorldMap_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("WorldMap","\x8a","\x27","\x3d","\x7e"); }

		 ::openfl::_legacy::display::BitmapData bitmap;
		 ::flixel::FlxSprite map;
		void addCharacterLocation( ::characters::Character a_character);
		::Dynamic addCharacterLocation_dyn();

};

} // end namespace world

#endif /* INCLUDED_world_WorldMap */ 