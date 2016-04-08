#ifndef INCLUDED_flixel_addons_nape_FlxNapeTilemap
#define INCLUDED_flixel_addons_nape_FlxNapeTilemap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS3(flixel,addons,nape,FlxNapeTilemap)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,tile,FlxBaseTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemapAutoTiling)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,phys,Material)
namespace flixel{
namespace addons{
namespace nape{


class HXCPP_CLASS_ATTRIBUTES  FlxNapeTilemap_obj : public ::flixel::tile::FlxTilemap_obj{
	public:
		typedef ::flixel::tile::FlxTilemap_obj super;
		typedef FlxNapeTilemap_obj OBJ_;
		FlxNapeTilemap_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.addons.nape.FlxNapeTilemap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxNapeTilemap_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxNapeTilemap_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxNapeTilemap","\xf4","\x48","\xb6","\x87"); }

		::nape::phys::Body body;
		Array< int > _binaryData;
		virtual Void update( Float elapsed);

		virtual ::flixel::tile::FlxBaseTilemap loadMapFromCSV( ::String MapData,Dynamic TileGraphic,hx::Null< int >  TileWidth,hx::Null< int >  TileHeight,::flixel::tile::FlxTilemapAutoTiling AutoTile,hx::Null< int >  StartingIndex,hx::Null< int >  DrawIndex,hx::Null< int >  CollideIndex);

		virtual ::flixel::tile::FlxBaseTilemap loadMapFromArray( Array< int > MapData,int WidthInTiles,int HeightInTiles,Dynamic TileGraphic,hx::Null< int >  TileWidth,hx::Null< int >  TileHeight,::flixel::tile::FlxTilemapAutoTiling AutoTile,hx::Null< int >  StartingIndex,hx::Null< int >  DrawIndex,hx::Null< int >  CollideIndex);

		virtual ::flixel::tile::FlxBaseTilemap loadMapFrom2DArray( Array< ::Dynamic > MapData,Dynamic TileGraphic,hx::Null< int >  TileWidth,hx::Null< int >  TileHeight,::flixel::tile::FlxTilemapAutoTiling AutoTile,hx::Null< int >  StartingIndex,hx::Null< int >  DrawIndex,hx::Null< int >  CollideIndex);

		virtual Void addSolidTile( int X,int Y,::nape::phys::Material mat);
		Dynamic addSolidTile_dyn();

		virtual Void placeCustomPolygon( Array< int > tileIndices,Array< ::Dynamic > vertices,::nape::phys::Material mat);
		Dynamic placeCustomPolygon_dyn();

		virtual Void setupCollideIndex( hx::Null< int >  CollideIndex,::nape::phys::Material mat);
		Dynamic setupCollideIndex_dyn();

		virtual Void setupTileIndices( Array< int > tileIndices,::nape::phys::Material mat);
		Dynamic setupTileIndices_dyn();

		virtual Void constructCollider( ::nape::phys::Material mat);
		Dynamic constructCollider_dyn();

		virtual ::flixel::math::FlxRect constructRectangle( int StartX,int StartY,int EndY);
		Dynamic constructRectangle_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace nape

#endif /* INCLUDED_flixel_addons_nape_FlxNapeTilemap */ 
