// Generated by Haxe 3.4.0
#ifndef INCLUDED_world_MapGenerator
#define INCLUDED_world_MapGenerator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS3(flixel,addons,nape,FlxNapeTilemap)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,tile,FlxBaseTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS1(world,MapGenerator)
HX_DECLARE_CLASS1(world,WorldMap)
HX_DECLARE_CLASS1(world,WorldTilemap)

namespace world{


class HXCPP_CLASS_ATTRIBUTES MapGenerator_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef MapGenerator_obj OBJ_;
		MapGenerator_obj();

	public:
		enum { _hx_ClassId = 0x7fe57fc1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="world.MapGenerator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"world.MapGenerator"); }
		static hx::ObjectPtr< MapGenerator_obj > __new();
		static hx::ObjectPtr< MapGenerator_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MapGenerator_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("MapGenerator","\x37","\xe6","\xb2","\xf1"); }

		int _size;
		Float _displacement;
		int _valueRange;
		::Array< ::Dynamic> table;
		 ::nape::geom::Vec2 spawnPoint;
		 ::world::WorldTilemap worldMapTileMap;
		 ::world::WorldMap worldMap;
		 ::world::WorldTilemap generate(int a_size,::String tileFilePath);
		::Dynamic generate_dyn();

		 ::world::WorldMap getWorldMap();
		::Dynamic getWorldMap_dyn();

		void generateTileMap(::String tileFilePath);
		::Dynamic generateTileMap_dyn();

		void saveWorldMap(::String format,::Array< ::Dynamic> table);
		::Dynamic saveWorldMap_dyn();

		void generateWorldMapBitmap();
		::Dynamic generateWorldMapBitmap_dyn();

		void clear();
		::Dynamic clear_dyn();

		::Array< ::Dynamic> divide(::Array< ::Dynamic> a_table,int x1,int y1,int x2,int y2,Float a_displacement);
		::Dynamic divide_dyn();

		::Array< ::Dynamic> transformToValueRange(int a_valueRange);
		::Dynamic transformToValueRange_dyn();

		::Array< ::Dynamic> getViewable(int tileSize);
		::Dynamic getViewable_dyn();

};

} // end namespace world

#endif /* INCLUDED_world_MapGenerator */ 