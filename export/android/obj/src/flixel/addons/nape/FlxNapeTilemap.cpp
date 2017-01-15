#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_addons_nape_FlxNapeSpace
#include <flixel/addons/nape/FlxNapeSpace.h>
#endif
#ifndef INCLUDED_flixel_addons_nape_FlxNapeTilemap
#include <flixel/addons/nape/FlxNapeTilemap.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapAutoTiling
#include <flixel/tile/FlxTilemapAutoTiling.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
#endif
#ifndef INCLUDED_nape_phys_BodyType
#include <nape/phys/BodyType.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_nape_shape_Polygon
#include <nape/shape/Polygon.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace flixel{
namespace addons{
namespace nape{

Void FlxNapeTilemap_obj::__construct()
{
HX_STACK_FRAME("flixel.addons.nape.FlxNapeTilemap","new",0x18284b03,"flixel.addons.nape.FlxNapeTilemap.new","flixel/addons/nape/FlxNapeTilemap.hx",27,0x86ce3ecc)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(28)
	super::__construct();
	HX_STACK_LINE(29)
	::nape::phys::BodyType tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		::nape::phys::BodyType tmp1 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(29)
		if ((tmp2)){
			HX_STACK_LINE(29)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(29)
			::nape::phys::BodyType tmp3 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(29)
			::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = tmp3;
			HX_STACK_LINE(29)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(29)
		tmp = ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
	}
	HX_STACK_LINE(29)
	::nape::phys::Body tmp1 = ::nape::phys::Body_obj::__new(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	this->body = tmp1;
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		::nape::phys::Body tmp2 = this->body;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(30)
		::nape::phys::Body _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(30)
		::nape::space::Space tmp3 = ::flixel::addons::nape::FlxNapeSpace_obj::space;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(30)
		::nape::space::Space space = tmp3;		HX_STACK_VAR(space,"space");
		HX_STACK_LINE(30)
		{
			HX_STACK_LINE(30)
			_this->zpp_inner->immutable_midstep(HX_HCSTRING("Body::space","\x84","\xf7","\xbc","\x26"));
			HX_STACK_LINE(30)
			::zpp_nape::space::ZPP_Space tmp4 = _this->zpp_inner->space;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(30)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(30)
			::nape::space::Space tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(30)
			if ((tmp5)){
				HX_STACK_LINE(30)
				tmp6 = null();
			}
			else{
				HX_STACK_LINE(30)
				::zpp_nape::space::ZPP_Space tmp7 = _this->zpp_inner->space;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(30)
				tmp6 = tmp7->outer;
			}
			HX_STACK_LINE(30)
			::nape::space::Space tmp7 = space;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(30)
			bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(30)
			if ((tmp8)){
				HX_STACK_LINE(30)
				::zpp_nape::space::ZPP_Space tmp9 = _this->zpp_inner->space;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(30)
				bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(30)
				::nape::space::Space tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(30)
				if ((tmp10)){
					HX_STACK_LINE(30)
					tmp11 = null();
				}
				else{
					HX_STACK_LINE(30)
					::zpp_nape::space::ZPP_Space tmp12 = _this->zpp_inner->space;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(30)
					tmp11 = tmp12->outer;
				}
				HX_STACK_LINE(30)
				bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(30)
				if ((tmp12)){
					HX_STACK_LINE(30)
					::zpp_nape::space::ZPP_Component tmp13 = _this->zpp_inner->component;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(30)
					tmp13->woken = false;
				}
				HX_STACK_LINE(30)
				::zpp_nape::space::ZPP_Space tmp13 = _this->zpp_inner->space;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(30)
				bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(30)
				::nape::space::Space tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(30)
				if ((tmp14)){
					HX_STACK_LINE(30)
					tmp15 = null();
				}
				else{
					HX_STACK_LINE(30)
					::zpp_nape::space::ZPP_Space tmp16 = _this->zpp_inner->space;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(30)
					tmp15 = tmp16->outer;
				}
				HX_STACK_LINE(30)
				bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(30)
				if ((tmp16)){
					HX_STACK_LINE(30)
					::zpp_nape::space::ZPP_Space tmp17 = _this->zpp_inner->space;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(30)
					bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(30)
					::nape::space::Space tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(30)
					if ((tmp18)){
						HX_STACK_LINE(30)
						tmp19 = null();
					}
					else{
						HX_STACK_LINE(30)
						::zpp_nape::space::ZPP_Space tmp20 = _this->zpp_inner->space;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(30)
						tmp19 = tmp20->outer;
					}
					HX_STACK_LINE(30)
					::nape::phys::BodyList tmp20 = tmp19->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(30)
					::nape::phys::Body tmp21 = _this;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(30)
					tmp20->remove(tmp21);
				}
				HX_STACK_LINE(30)
				bool tmp17 = (space != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(30)
				if ((tmp17)){
					HX_STACK_LINE(30)
					::nape::phys::BodyList tmp18 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(30)
					::nape::phys::BodyList _this1 = tmp18;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(30)
					bool tmp19 = _this1->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(30)
					if ((tmp19)){
						HX_STACK_LINE(30)
						::nape::phys::Body tmp20 = _this;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(30)
						_this1->push(tmp20);
					}
					else{
						HX_STACK_LINE(30)
						::nape::phys::Body tmp20 = _this;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(30)
						_this1->unshift(tmp20);
					}
				}
			}
		}
		HX_STACK_LINE(30)
		::zpp_nape::space::ZPP_Space tmp4 = _this->zpp_inner->space;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(30)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(30)
		if ((tmp5)){
			HX_STACK_LINE(30)
			Dynamic();
		}
		else{
			HX_STACK_LINE(30)
			::zpp_nape::space::ZPP_Space tmp6 = _this->zpp_inner->space;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(30)
			tmp6->outer;
		}
	}
}
;
	return null();
}

//FlxNapeTilemap_obj::~FlxNapeTilemap_obj() { }

Dynamic FlxNapeTilemap_obj::__CreateEmpty() { return  new FlxNapeTilemap_obj; }
hx::ObjectPtr< FlxNapeTilemap_obj > FlxNapeTilemap_obj::__new()
{  hx::ObjectPtr< FlxNapeTilemap_obj > _result_ = new FlxNapeTilemap_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxNapeTilemap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxNapeTilemap_obj > _result_ = new FlxNapeTilemap_obj();
	_result_->__construct();
	return _result_;}

Void FlxNapeTilemap_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeTilemap","update",0x1b771346,"flixel.addons.nape.FlxNapeTilemap.update","flixel/addons/nape/FlxNapeTilemap.hx",34,0x86ce3ecc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(35)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		{
			HX_STACK_LINE(35)
			::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(35)
			{
				HX_STACK_LINE(35)
				::nape::phys::Body tmp2 = this->body;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(35)
				::nape::phys::Body _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(35)
				::nape::geom::Vec2 tmp3 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(35)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(35)
				if ((tmp4)){
					HX_STACK_LINE(35)
					_this->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(35)
				tmp1 = _this->zpp_inner->wrap_pos;
			}
			HX_STACK_LINE(35)
			::nape::geom::Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(35)
			{
				HX_STACK_LINE(35)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(35)
				bool tmp2 = (_this1->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(35)
				if ((tmp2)){
					HX_STACK_LINE(35)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(35)
			tmp = _this->zpp_inner->x;
		}
		HX_STACK_LINE(35)
		this->set_x(tmp);
		HX_STACK_LINE(36)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		{
			HX_STACK_LINE(36)
			::nape::geom::Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(36)
			{
				HX_STACK_LINE(36)
				::nape::phys::Body tmp3 = this->body;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(36)
				::nape::phys::Body _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(36)
				::nape::geom::Vec2 tmp4 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(36)
				bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(36)
				if ((tmp5)){
					HX_STACK_LINE(36)
					_this->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(36)
				tmp2 = _this->zpp_inner->wrap_pos;
			}
			HX_STACK_LINE(36)
			::nape::geom::Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(36)
			{
				HX_STACK_LINE(36)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(36)
				bool tmp3 = (_this1->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(36)
				if ((tmp3)){
					HX_STACK_LINE(36)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(36)
			tmp1 = _this->zpp_inner->y;
		}
		HX_STACK_LINE(36)
		this->set_y(tmp1);
		HX_STACK_LINE(37)
		Float tmp2 = elapsed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		this->super::update(tmp2);
	}
return null();
}


::flixel::tile::FlxBaseTilemap FlxNapeTilemap_obj::loadMapFromCSV( ::String MapData,Dynamic TileGraphic,hx::Null< int >  __o_TileWidth,hx::Null< int >  __o_TileHeight,::flixel::tile::FlxTilemapAutoTiling AutoTile,hx::Null< int >  __o_StartingIndex,hx::Null< int >  __o_DrawIndex,hx::Null< int >  __o_CollideIndex){
int TileWidth = __o_TileWidth.Default(0);
int TileHeight = __o_TileHeight.Default(0);
int StartingIndex = __o_StartingIndex.Default(0);
int DrawIndex = __o_DrawIndex.Default(1);
int CollideIndex = __o_CollideIndex.Default(1);
	HX_STACK_FRAME("flixel.addons.nape.FlxNapeTilemap","loadMapFromCSV",0xb704bd43,"flixel.addons.nape.FlxNapeTilemap.loadMapFromCSV","flixel/addons/nape/FlxNapeTilemap.hx",42,0x86ce3ecc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(MapData,"MapData")
	HX_STACK_ARG(TileGraphic,"TileGraphic")
	HX_STACK_ARG(TileWidth,"TileWidth")
	HX_STACK_ARG(TileHeight,"TileHeight")
	HX_STACK_ARG(AutoTile,"AutoTile")
	HX_STACK_ARG(StartingIndex,"StartingIndex")
	HX_STACK_ARG(DrawIndex,"DrawIndex")
	HX_STACK_ARG(CollideIndex,"CollideIndex")
{
		HX_STACK_LINE(43)
		::String tmp = MapData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		Dynamic tmp1 = TileGraphic;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(43)
		int tmp2 = TileWidth;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(43)
		int tmp3 = TileHeight;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(43)
		::flixel::tile::FlxTilemapAutoTiling tmp4 = AutoTile;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(43)
		int tmp5 = StartingIndex;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(43)
		int tmp6 = DrawIndex;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(43)
		int tmp7 = CollideIndex;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(43)
		this->super::loadMapFromCSV(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7);
		HX_STACK_LINE(44)
		this->_binaryData = Array_obj< int >::__new();
		HX_STACK_LINE(45)
		int tmp8 = this->_data->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(45)
		::flixel::util::FlxArrayUtil_obj::setLength_Int(this->_binaryData,tmp8);
		HX_STACK_LINE(46)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


::flixel::tile::FlxBaseTilemap FlxNapeTilemap_obj::loadMapFromArray( Array< int > MapData,int WidthInTiles,int HeightInTiles,Dynamic TileGraphic,hx::Null< int >  __o_TileWidth,hx::Null< int >  __o_TileHeight,::flixel::tile::FlxTilemapAutoTiling AutoTile,hx::Null< int >  __o_StartingIndex,hx::Null< int >  __o_DrawIndex,hx::Null< int >  __o_CollideIndex){
int TileWidth = __o_TileWidth.Default(0);
int TileHeight = __o_TileHeight.Default(0);
int StartingIndex = __o_StartingIndex.Default(0);
int DrawIndex = __o_DrawIndex.Default(1);
int CollideIndex = __o_CollideIndex.Default(1);
	HX_STACK_FRAME("flixel.addons.nape.FlxNapeTilemap","loadMapFromArray",0xfd66dc56,"flixel.addons.nape.FlxNapeTilemap.loadMapFromArray","flixel/addons/nape/FlxNapeTilemap.hx",51,0x86ce3ecc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(MapData,"MapData")
	HX_STACK_ARG(WidthInTiles,"WidthInTiles")
	HX_STACK_ARG(HeightInTiles,"HeightInTiles")
	HX_STACK_ARG(TileGraphic,"TileGraphic")
	HX_STACK_ARG(TileWidth,"TileWidth")
	HX_STACK_ARG(TileHeight,"TileHeight")
	HX_STACK_ARG(AutoTile,"AutoTile")
	HX_STACK_ARG(StartingIndex,"StartingIndex")
	HX_STACK_ARG(DrawIndex,"DrawIndex")
	HX_STACK_ARG(CollideIndex,"CollideIndex")
{
		HX_STACK_LINE(52)
		int tmp = WidthInTiles;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		int tmp1 = HeightInTiles;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		Dynamic tmp2 = TileGraphic;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		int tmp3 = TileWidth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(52)
		int tmp4 = TileHeight;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(52)
		::flixel::tile::FlxTilemapAutoTiling tmp5 = AutoTile;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(52)
		int tmp6 = StartingIndex;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(52)
		int tmp7 = DrawIndex;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(52)
		int tmp8 = CollideIndex;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(52)
		this->super::loadMapFromArray(MapData,tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8);
		HX_STACK_LINE(53)
		this->_binaryData = Array_obj< int >::__new();
		HX_STACK_LINE(54)
		int tmp9 = this->_data->length;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(54)
		::flixel::util::FlxArrayUtil_obj::setLength_Int(this->_binaryData,tmp9);
		HX_STACK_LINE(55)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


::flixel::tile::FlxBaseTilemap FlxNapeTilemap_obj::loadMapFrom2DArray( Array< ::Dynamic > MapData,Dynamic TileGraphic,hx::Null< int >  __o_TileWidth,hx::Null< int >  __o_TileHeight,::flixel::tile::FlxTilemapAutoTiling AutoTile,hx::Null< int >  __o_StartingIndex,hx::Null< int >  __o_DrawIndex,hx::Null< int >  __o_CollideIndex){
int TileWidth = __o_TileWidth.Default(0);
int TileHeight = __o_TileHeight.Default(0);
int StartingIndex = __o_StartingIndex.Default(0);
int DrawIndex = __o_DrawIndex.Default(1);
int CollideIndex = __o_CollideIndex.Default(1);
	HX_STACK_FRAME("flixel.addons.nape.FlxNapeTilemap","loadMapFrom2DArray",0x4a7fc884,"flixel.addons.nape.FlxNapeTilemap.loadMapFrom2DArray","flixel/addons/nape/FlxNapeTilemap.hx",60,0x86ce3ecc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(MapData,"MapData")
	HX_STACK_ARG(TileGraphic,"TileGraphic")
	HX_STACK_ARG(TileWidth,"TileWidth")
	HX_STACK_ARG(TileHeight,"TileHeight")
	HX_STACK_ARG(AutoTile,"AutoTile")
	HX_STACK_ARG(StartingIndex,"StartingIndex")
	HX_STACK_ARG(DrawIndex,"DrawIndex")
	HX_STACK_ARG(CollideIndex,"CollideIndex")
{
		HX_STACK_LINE(61)
		Dynamic tmp = TileGraphic;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(61)
		int tmp1 = TileWidth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(61)
		int tmp2 = TileHeight;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(61)
		::flixel::tile::FlxTilemapAutoTiling tmp3 = AutoTile;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(61)
		int tmp4 = StartingIndex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(61)
		int tmp5 = DrawIndex;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(61)
		int tmp6 = CollideIndex;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(61)
		this->super::loadMapFrom2DArray(MapData,tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);
		HX_STACK_LINE(62)
		this->_binaryData = Array_obj< int >::__new();
		HX_STACK_LINE(63)
		int tmp7 = this->_data->length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(63)
		::flixel::util::FlxArrayUtil_obj::setLength_Int(this->_binaryData,tmp7);
		HX_STACK_LINE(64)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


Void FlxNapeTilemap_obj::addSolidTile( int X,int Y,::nape::phys::Material mat){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeTilemap","addSolidTile",0x1b4b5795,"flixel.addons.nape.FlxNapeTilemap.addSolidTile","flixel/addons/nape/FlxNapeTilemap.hx",77,0x86ce3ecc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_ARG(mat,"mat")
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			::nape::phys::Body tmp = this->body;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(78)
			::nape::phys::Body _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(78)
			{
				HX_STACK_LINE(78)
				_this->zpp_inner->immutable_midstep(HX_HCSTRING("Body::space","\x84","\xf7","\xbc","\x26"));
				HX_STACK_LINE(78)
				::zpp_nape::space::ZPP_Space tmp1 = _this->zpp_inner->space;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(78)
				bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(78)
				::nape::space::Space tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(78)
				if ((tmp2)){
					HX_STACK_LINE(78)
					tmp3 = null();
				}
				else{
					HX_STACK_LINE(78)
					::zpp_nape::space::ZPP_Space tmp4 = _this->zpp_inner->space;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(78)
					tmp3 = tmp4->outer;
				}
				HX_STACK_LINE(78)
				bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(78)
				if ((tmp4)){
					HX_STACK_LINE(78)
					::zpp_nape::space::ZPP_Space tmp5 = _this->zpp_inner->space;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(78)
					bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(78)
					::nape::space::Space tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(78)
					if ((tmp6)){
						HX_STACK_LINE(78)
						tmp7 = null();
					}
					else{
						HX_STACK_LINE(78)
						::zpp_nape::space::ZPP_Space tmp8 = _this->zpp_inner->space;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(78)
						tmp7 = tmp8->outer;
					}
					HX_STACK_LINE(78)
					bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(78)
					if ((tmp8)){
						HX_STACK_LINE(78)
						::zpp_nape::space::ZPP_Component tmp9 = _this->zpp_inner->component;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(78)
						tmp9->woken = false;
					}
					HX_STACK_LINE(78)
					::zpp_nape::space::ZPP_Space tmp9 = _this->zpp_inner->space;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(78)
					bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(78)
					::nape::space::Space tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(78)
					if ((tmp10)){
						HX_STACK_LINE(78)
						tmp11 = null();
					}
					else{
						HX_STACK_LINE(78)
						::zpp_nape::space::ZPP_Space tmp12 = _this->zpp_inner->space;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(78)
						tmp11 = tmp12->outer;
					}
					HX_STACK_LINE(78)
					bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(78)
					if ((tmp12)){
						HX_STACK_LINE(78)
						::zpp_nape::space::ZPP_Space tmp13 = _this->zpp_inner->space;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(78)
						bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(78)
						::nape::space::Space tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(78)
						if ((tmp14)){
							HX_STACK_LINE(78)
							tmp15 = null();
						}
						else{
							HX_STACK_LINE(78)
							::zpp_nape::space::ZPP_Space tmp16 = _this->zpp_inner->space;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(78)
							tmp15 = tmp16->outer;
						}
						HX_STACK_LINE(78)
						::nape::phys::BodyList tmp16 = tmp15->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(78)
						::nape::phys::Body tmp17 = _this;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(78)
						tmp16->remove(tmp17);
					}
					HX_STACK_LINE(78)
					bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(78)
					if ((tmp13)){
						HX_STACK_LINE(78)
						::zpp_nape::space::ZPP_Space tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(78)
						::nape::phys::BodyList _this1 = tmp14->wrap_bodies;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(78)
						bool tmp15 = _this1->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(78)
						if ((tmp15)){
							HX_STACK_LINE(78)
							::nape::phys::Body tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(78)
							_this1->push(tmp16);
						}
						else{
							HX_STACK_LINE(78)
							::nape::phys::Body tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(78)
							_this1->unshift(tmp16);
						}
					}
				}
			}
			HX_STACK_LINE(78)
			::zpp_nape::space::ZPP_Space tmp1 = _this->zpp_inner->space;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(78)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(78)
			if ((tmp2)){
				HX_STACK_LINE(78)
				Dynamic();
			}
			else{
				HX_STACK_LINE(78)
				::zpp_nape::space::ZPP_Space tmp3 = _this->zpp_inner->space;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(78)
				tmp3->outer;
			}
		}
		HX_STACK_LINE(79)
		bool tmp = (mat == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		if ((tmp)){
			HX_STACK_LINE(81)
			::nape::phys::Material tmp1 = ::nape::phys::Material_obj::__new(null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(81)
			mat = tmp1;
		}
		HX_STACK_LINE(83)
		int tmp1 = this->_tileWidth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		hx::MultEq(X,tmp1);
		HX_STACK_LINE(84)
		int tmp2 = this->_tileHeight;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		hx::MultEq(Y,tmp2);
		HX_STACK_LINE(85)
		Array< ::Dynamic > vertices = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(vertices,"vertices");
		HX_STACK_LINE(87)
		::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(87)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(87)
			{
				HX_STACK_LINE(87)
				::nape::geom::Vec2 tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(87)
				bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(87)
				if ((tmp5)){
					HX_STACK_LINE(87)
					::nape::geom::Vec2 tmp6 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(87)
					ret = tmp6;
				}
				else{
					HX_STACK_LINE(87)
					::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(87)
					ret = tmp6;
					HX_STACK_LINE(87)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(87)
					ret->zpp_pool = null();
				}
			}
			HX_STACK_LINE(87)
			bool tmp4 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(87)
			if ((tmp4)){
				HX_STACK_LINE(87)
				::zpp_nape::geom::ZPP_Vec2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(87)
				{
					HX_STACK_LINE(87)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(87)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(87)
					{
						HX_STACK_LINE(87)
						::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(87)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(87)
						if ((tmp7)){
							HX_STACK_LINE(87)
							::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(87)
							ret1 = tmp8;
						}
						else{
							HX_STACK_LINE(87)
							::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(87)
							ret1 = tmp8;
							HX_STACK_LINE(87)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(87)
							ret1->next = null();
						}
						HX_STACK_LINE(87)
						ret1->weak = false;
					}
					HX_STACK_LINE(87)
					ret1->_immutable = immutable;
					HX_STACK_LINE(87)
					{
						HX_STACK_LINE(87)
						ret1->x = X;
						HX_STACK_LINE(87)
						ret1->y = Y;
						HX_STACK_LINE(87)
						{
						}
					}
					HX_STACK_LINE(87)
					tmp5 = ret1;
				}
				HX_STACK_LINE(87)
				ret->zpp_inner = tmp5;
				HX_STACK_LINE(87)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(87)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(87)
				{
					HX_STACK_LINE(87)
					{
						HX_STACK_LINE(87)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(87)
						bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(87)
						if ((tmp6)){
							HX_STACK_LINE(87)
							_this->_validate();
						}
					}
					HX_STACK_LINE(87)
					tmp5 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(87)
				int tmp6 = X;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(87)
				bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(87)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(87)
				if ((tmp7)){
					HX_STACK_LINE(87)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(87)
					{
						HX_STACK_LINE(87)
						{
							HX_STACK_LINE(87)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(87)
							bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(87)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(87)
							bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(87)
							if ((tmp12)){
								HX_STACK_LINE(87)
								_this->_validate();
							}
						}
						HX_STACK_LINE(87)
						Float tmp10 = ret->zpp_inner->y;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(87)
						tmp9 = tmp10;
					}
					HX_STACK_LINE(87)
					int tmp10 = Y;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(87)
					tmp8 = (tmp9 == tmp10);
				}
				else{
					HX_STACK_LINE(87)
					tmp8 = false;
				}
				HX_STACK_LINE(87)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(87)
				if ((tmp9)){
					HX_STACK_LINE(87)
					{
						HX_STACK_LINE(87)
						ret->zpp_inner->x = X;
						HX_STACK_LINE(87)
						ret->zpp_inner->y = Y;
						HX_STACK_LINE(87)
						{
						}
					}
					HX_STACK_LINE(87)
					{
						HX_STACK_LINE(87)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(87)
						bool tmp10 = (_this->_invalidate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(87)
						if ((tmp10)){
							HX_STACK_LINE(87)
							::zpp_nape::geom::ZPP_Vec2 tmp11 = _this;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(87)
							_this->_invalidate(tmp11);
						}
					}
				}
				HX_STACK_LINE(87)
				ret;
			}
			HX_STACK_LINE(87)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(87)
			tmp3 = ret;
		}
		HX_STACK_LINE(87)
		vertices->push(tmp3);
		HX_STACK_LINE(88)
		::nape::geom::Vec2 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(88)
		{
			HX_STACK_LINE(88)
			int tmp5 = X;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(88)
			int tmp6 = this->_tileWidth;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(88)
			int tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(88)
			Float x = tmp7;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(88)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(88)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(88)
			{
				HX_STACK_LINE(88)
				::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(88)
				bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(88)
				if ((tmp9)){
					HX_STACK_LINE(88)
					::nape::geom::Vec2 tmp10 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(88)
					ret = tmp10;
				}
				else{
					HX_STACK_LINE(88)
					::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(88)
					ret = tmp10;
					HX_STACK_LINE(88)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(88)
					ret->zpp_pool = null();
				}
			}
			HX_STACK_LINE(88)
			bool tmp8 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(88)
			if ((tmp8)){
				HX_STACK_LINE(88)
				::zpp_nape::geom::ZPP_Vec2 tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(88)
				{
					HX_STACK_LINE(88)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(88)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(88)
					{
						HX_STACK_LINE(88)
						::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(88)
						bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(88)
						if ((tmp11)){
							HX_STACK_LINE(88)
							::zpp_nape::geom::ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(88)
							ret1 = tmp12;
						}
						else{
							HX_STACK_LINE(88)
							::zpp_nape::geom::ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(88)
							ret1 = tmp12;
							HX_STACK_LINE(88)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(88)
							ret1->next = null();
						}
						HX_STACK_LINE(88)
						ret1->weak = false;
					}
					HX_STACK_LINE(88)
					ret1->_immutable = immutable;
					HX_STACK_LINE(88)
					{
						HX_STACK_LINE(88)
						ret1->x = x;
						HX_STACK_LINE(88)
						ret1->y = Y;
						HX_STACK_LINE(88)
						{
						}
					}
					HX_STACK_LINE(88)
					tmp9 = ret1;
				}
				HX_STACK_LINE(88)
				ret->zpp_inner = tmp9;
				HX_STACK_LINE(88)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(88)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(88)
				{
					HX_STACK_LINE(88)
					{
						HX_STACK_LINE(88)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(88)
						bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(88)
						if ((tmp10)){
							HX_STACK_LINE(88)
							_this->_validate();
						}
					}
					HX_STACK_LINE(88)
					tmp9 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(88)
				Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(88)
				bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(88)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(88)
				if ((tmp11)){
					HX_STACK_LINE(88)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(88)
					{
						HX_STACK_LINE(88)
						{
							HX_STACK_LINE(88)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(88)
							bool tmp14 = (_this->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(88)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(88)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(88)
							if ((tmp16)){
								HX_STACK_LINE(88)
								_this->_validate();
							}
						}
						HX_STACK_LINE(88)
						Float tmp14 = ret->zpp_inner->y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(88)
						tmp13 = tmp14;
					}
					HX_STACK_LINE(88)
					int tmp14 = Y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(88)
					tmp12 = (tmp13 == tmp14);
				}
				else{
					HX_STACK_LINE(88)
					tmp12 = false;
				}
				HX_STACK_LINE(88)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(88)
				if ((tmp13)){
					HX_STACK_LINE(88)
					{
						HX_STACK_LINE(88)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(88)
						ret->zpp_inner->y = Y;
						HX_STACK_LINE(88)
						{
						}
					}
					HX_STACK_LINE(88)
					{
						HX_STACK_LINE(88)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(88)
						bool tmp14 = (_this->_invalidate != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(88)
						if ((tmp14)){
							HX_STACK_LINE(88)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = _this;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(88)
							_this->_invalidate(tmp15);
						}
					}
				}
				HX_STACK_LINE(88)
				ret;
			}
			HX_STACK_LINE(88)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(88)
			tmp4 = ret;
		}
		HX_STACK_LINE(88)
		vertices->push(tmp4);
		HX_STACK_LINE(89)
		::nape::geom::Vec2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			int tmp6 = X;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(89)
			int tmp7 = this->_tileWidth;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(89)
			int tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(89)
			Float x = tmp8;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(89)
			int tmp9 = Y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(89)
			int tmp10 = this->_tileHeight;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(89)
			int tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(89)
			Float y = tmp11;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(89)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(89)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(89)
			{
				HX_STACK_LINE(89)
				::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(89)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(89)
				if ((tmp13)){
					HX_STACK_LINE(89)
					::nape::geom::Vec2 tmp14 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(89)
					ret = tmp14;
				}
				else{
					HX_STACK_LINE(89)
					::nape::geom::Vec2 tmp14 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(89)
					ret = tmp14;
					HX_STACK_LINE(89)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(89)
					ret->zpp_pool = null();
				}
			}
			HX_STACK_LINE(89)
			bool tmp12 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(89)
			if ((tmp12)){
				HX_STACK_LINE(89)
				::zpp_nape::geom::ZPP_Vec2 tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(89)
				{
					HX_STACK_LINE(89)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(89)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(89)
					{
						HX_STACK_LINE(89)
						::zpp_nape::geom::ZPP_Vec2 tmp14 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(89)
						bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(89)
						if ((tmp15)){
							HX_STACK_LINE(89)
							::zpp_nape::geom::ZPP_Vec2 tmp16 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(89)
							ret1 = tmp16;
						}
						else{
							HX_STACK_LINE(89)
							::zpp_nape::geom::ZPP_Vec2 tmp16 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(89)
							ret1 = tmp16;
							HX_STACK_LINE(89)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(89)
							ret1->next = null();
						}
						HX_STACK_LINE(89)
						ret1->weak = false;
					}
					HX_STACK_LINE(89)
					ret1->_immutable = immutable;
					HX_STACK_LINE(89)
					{
						HX_STACK_LINE(89)
						ret1->x = x;
						HX_STACK_LINE(89)
						ret1->y = y;
						HX_STACK_LINE(89)
						{
						}
					}
					HX_STACK_LINE(89)
					tmp13 = ret1;
				}
				HX_STACK_LINE(89)
				ret->zpp_inner = tmp13;
				HX_STACK_LINE(89)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(89)
				Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(89)
				{
					HX_STACK_LINE(89)
					{
						HX_STACK_LINE(89)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(89)
						bool tmp14 = (_this->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(89)
						if ((tmp14)){
							HX_STACK_LINE(89)
							_this->_validate();
						}
					}
					HX_STACK_LINE(89)
					tmp13 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(89)
				Float tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(89)
				bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(89)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(89)
				if ((tmp15)){
					HX_STACK_LINE(89)
					Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(89)
					{
						HX_STACK_LINE(89)
						{
							HX_STACK_LINE(89)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(89)
							bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(89)
							bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(89)
							bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(89)
							if ((tmp20)){
								HX_STACK_LINE(89)
								_this->_validate();
							}
						}
						HX_STACK_LINE(89)
						Float tmp18 = ret->zpp_inner->y;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(89)
						tmp17 = tmp18;
					}
					HX_STACK_LINE(89)
					Float tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(89)
					tmp16 = (tmp17 == tmp18);
				}
				else{
					HX_STACK_LINE(89)
					tmp16 = false;
				}
				HX_STACK_LINE(89)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(89)
				if ((tmp17)){
					HX_STACK_LINE(89)
					{
						HX_STACK_LINE(89)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(89)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(89)
						{
						}
					}
					HX_STACK_LINE(89)
					{
						HX_STACK_LINE(89)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(89)
						bool tmp18 = (_this->_invalidate != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(89)
						if ((tmp18)){
							HX_STACK_LINE(89)
							::zpp_nape::geom::ZPP_Vec2 tmp19 = _this;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(89)
							_this->_invalidate(tmp19);
						}
					}
				}
				HX_STACK_LINE(89)
				ret;
			}
			HX_STACK_LINE(89)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(89)
			tmp5 = ret;
		}
		HX_STACK_LINE(89)
		vertices->push(tmp5);
		HX_STACK_LINE(90)
		::nape::geom::Vec2 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(90)
		{
			HX_STACK_LINE(90)
			int tmp7 = Y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(90)
			int tmp8 = this->_tileHeight;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(90)
			int tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(90)
			Float y = tmp9;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(90)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(90)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(90)
			{
				HX_STACK_LINE(90)
				::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(90)
				bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(90)
				if ((tmp11)){
					HX_STACK_LINE(90)
					::nape::geom::Vec2 tmp12 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(90)
					ret = tmp12;
				}
				else{
					HX_STACK_LINE(90)
					::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(90)
					ret = tmp12;
					HX_STACK_LINE(90)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(90)
					ret->zpp_pool = null();
				}
			}
			HX_STACK_LINE(90)
			bool tmp10 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(90)
			if ((tmp10)){
				HX_STACK_LINE(90)
				::zpp_nape::geom::ZPP_Vec2 tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(90)
				{
					HX_STACK_LINE(90)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(90)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(90)
					{
						HX_STACK_LINE(90)
						::zpp_nape::geom::ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(90)
						bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(90)
						if ((tmp13)){
							HX_STACK_LINE(90)
							::zpp_nape::geom::ZPP_Vec2 tmp14 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(90)
							ret1 = tmp14;
						}
						else{
							HX_STACK_LINE(90)
							::zpp_nape::geom::ZPP_Vec2 tmp14 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(90)
							ret1 = tmp14;
							HX_STACK_LINE(90)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(90)
							ret1->next = null();
						}
						HX_STACK_LINE(90)
						ret1->weak = false;
					}
					HX_STACK_LINE(90)
					ret1->_immutable = immutable;
					HX_STACK_LINE(90)
					{
						HX_STACK_LINE(90)
						ret1->x = X;
						HX_STACK_LINE(90)
						ret1->y = y;
						HX_STACK_LINE(90)
						{
						}
					}
					HX_STACK_LINE(90)
					tmp11 = ret1;
				}
				HX_STACK_LINE(90)
				ret->zpp_inner = tmp11;
				HX_STACK_LINE(90)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(90)
				Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(90)
				{
					HX_STACK_LINE(90)
					{
						HX_STACK_LINE(90)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(90)
						bool tmp12 = (_this->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(90)
						if ((tmp12)){
							HX_STACK_LINE(90)
							_this->_validate();
						}
					}
					HX_STACK_LINE(90)
					tmp11 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(90)
				int tmp12 = X;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(90)
				bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(90)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(90)
				if ((tmp13)){
					HX_STACK_LINE(90)
					Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(90)
					{
						HX_STACK_LINE(90)
						{
							HX_STACK_LINE(90)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(90)
							bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(90)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(90)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(90)
							if ((tmp18)){
								HX_STACK_LINE(90)
								_this->_validate();
							}
						}
						HX_STACK_LINE(90)
						Float tmp16 = ret->zpp_inner->y;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(90)
						tmp15 = tmp16;
					}
					HX_STACK_LINE(90)
					Float tmp16 = y;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(90)
					tmp14 = (tmp15 == tmp16);
				}
				else{
					HX_STACK_LINE(90)
					tmp14 = false;
				}
				HX_STACK_LINE(90)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(90)
				if ((tmp15)){
					HX_STACK_LINE(90)
					{
						HX_STACK_LINE(90)
						ret->zpp_inner->x = X;
						HX_STACK_LINE(90)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(90)
						{
						}
					}
					HX_STACK_LINE(90)
					{
						HX_STACK_LINE(90)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(90)
						bool tmp16 = (_this->_invalidate != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(90)
						if ((tmp16)){
							HX_STACK_LINE(90)
							::zpp_nape::geom::ZPP_Vec2 tmp17 = _this;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(90)
							_this->_invalidate(tmp17);
						}
					}
				}
				HX_STACK_LINE(90)
				ret;
			}
			HX_STACK_LINE(90)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(90)
			tmp6 = ret;
		}
		HX_STACK_LINE(90)
		vertices->push(tmp6);
		HX_STACK_LINE(92)
		{
			HX_STACK_LINE(92)
			::nape::phys::Body tmp7 = this->body;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(92)
			::nape::shape::ShapeList tmp8 = tmp7->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(92)
			::nape::shape::ShapeList _this = tmp8;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(92)
			::nape::shape::Polygon tmp9 = ::nape::shape::Polygon_obj::__new(vertices,mat,null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(92)
			::nape::shape::Shape obj = tmp9;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(92)
			bool tmp10 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(92)
			if ((tmp10)){
				HX_STACK_LINE(92)
				::nape::shape::Shape tmp11 = obj;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(92)
				_this->push(tmp11);
			}
			else{
				HX_STACK_LINE(92)
				::nape::shape::Shape tmp11 = obj;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(92)
				_this->unshift(tmp11);
			}
		}
		HX_STACK_LINE(94)
		{
			HX_STACK_LINE(94)
			::nape::phys::Body tmp7 = this->body;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(94)
			::nape::phys::Body _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(94)
			::nape::space::Space tmp8 = ::flixel::addons::nape::FlxNapeSpace_obj::space;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(94)
			::nape::space::Space space = tmp8;		HX_STACK_VAR(space,"space");
			HX_STACK_LINE(94)
			{
				HX_STACK_LINE(94)
				_this->zpp_inner->immutable_midstep(HX_HCSTRING("Body::space","\x84","\xf7","\xbc","\x26"));
				HX_STACK_LINE(94)
				::zpp_nape::space::ZPP_Space tmp9 = _this->zpp_inner->space;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(94)
				bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(94)
				::nape::space::Space tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(94)
				if ((tmp10)){
					HX_STACK_LINE(94)
					tmp11 = null();
				}
				else{
					HX_STACK_LINE(94)
					::zpp_nape::space::ZPP_Space tmp12 = _this->zpp_inner->space;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(94)
					tmp11 = tmp12->outer;
				}
				HX_STACK_LINE(94)
				::nape::space::Space tmp12 = space;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(94)
				bool tmp13 = (tmp11 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(94)
				if ((tmp13)){
					HX_STACK_LINE(94)
					::zpp_nape::space::ZPP_Space tmp14 = _this->zpp_inner->space;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(94)
					bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(94)
					::nape::space::Space tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(94)
					if ((tmp15)){
						HX_STACK_LINE(94)
						tmp16 = null();
					}
					else{
						HX_STACK_LINE(94)
						::zpp_nape::space::ZPP_Space tmp17 = _this->zpp_inner->space;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(94)
						tmp16 = tmp17->outer;
					}
					HX_STACK_LINE(94)
					bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(94)
					if ((tmp17)){
						HX_STACK_LINE(94)
						::zpp_nape::space::ZPP_Component tmp18 = _this->zpp_inner->component;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(94)
						tmp18->woken = false;
					}
					HX_STACK_LINE(94)
					::zpp_nape::space::ZPP_Space tmp18 = _this->zpp_inner->space;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(94)
					bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(94)
					::nape::space::Space tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(94)
					if ((tmp19)){
						HX_STACK_LINE(94)
						tmp20 = null();
					}
					else{
						HX_STACK_LINE(94)
						::zpp_nape::space::ZPP_Space tmp21 = _this->zpp_inner->space;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(94)
						tmp20 = tmp21->outer;
					}
					HX_STACK_LINE(94)
					bool tmp21 = (tmp20 != null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(94)
					if ((tmp21)){
						HX_STACK_LINE(94)
						::zpp_nape::space::ZPP_Space tmp22 = _this->zpp_inner->space;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(94)
						bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(94)
						::nape::space::Space tmp24;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(94)
						if ((tmp23)){
							HX_STACK_LINE(94)
							tmp24 = null();
						}
						else{
							HX_STACK_LINE(94)
							::zpp_nape::space::ZPP_Space tmp25 = _this->zpp_inner->space;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(94)
							tmp24 = tmp25->outer;
						}
						HX_STACK_LINE(94)
						::nape::phys::BodyList tmp25 = tmp24->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(94)
						::nape::phys::Body tmp26 = _this;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(94)
						tmp25->remove(tmp26);
					}
					HX_STACK_LINE(94)
					bool tmp22 = (space != null());		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(94)
					if ((tmp22)){
						HX_STACK_LINE(94)
						::nape::phys::BodyList tmp23 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(94)
						::nape::phys::BodyList _this1 = tmp23;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(94)
						bool tmp24 = _this1->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(94)
						if ((tmp24)){
							HX_STACK_LINE(94)
							::nape::phys::Body tmp25 = _this;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(94)
							_this1->push(tmp25);
						}
						else{
							HX_STACK_LINE(94)
							::nape::phys::Body tmp25 = _this;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(94)
							_this1->unshift(tmp25);
						}
					}
				}
			}
			HX_STACK_LINE(94)
			::zpp_nape::space::ZPP_Space tmp9 = _this->zpp_inner->space;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(94)
			bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(94)
			if ((tmp10)){
				HX_STACK_LINE(94)
				Dynamic();
			}
			else{
				HX_STACK_LINE(94)
				::zpp_nape::space::ZPP_Space tmp11 = _this->zpp_inner->space;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(94)
				tmp11->outer;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxNapeTilemap_obj,addSolidTile,(void))

Void FlxNapeTilemap_obj::placeCustomPolygon( Array< int > tileIndices,Array< ::Dynamic > vertices,::nape::phys::Material mat){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeTilemap","placeCustomPolygon",0xd2040a3f,"flixel.addons.nape.FlxNapeTilemap.placeCustomPolygon","flixel/addons/nape/FlxNapeTilemap.hx",98,0x86ce3ecc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tileIndices,"tileIndices")
		HX_STACK_ARG(vertices,"vertices")
		HX_STACK_ARG(mat,"mat")
		HX_STACK_LINE(99)
		{
			HX_STACK_LINE(99)
			::nape::phys::Body tmp = this->body;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(99)
			::nape::phys::Body _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(99)
			{
				HX_STACK_LINE(99)
				_this->zpp_inner->immutable_midstep(HX_HCSTRING("Body::space","\x84","\xf7","\xbc","\x26"));
				HX_STACK_LINE(99)
				::zpp_nape::space::ZPP_Space tmp1 = _this->zpp_inner->space;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(99)
				bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(99)
				::nape::space::Space tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(99)
				if ((tmp2)){
					HX_STACK_LINE(99)
					tmp3 = null();
				}
				else{
					HX_STACK_LINE(99)
					::zpp_nape::space::ZPP_Space tmp4 = _this->zpp_inner->space;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(99)
					tmp3 = tmp4->outer;
				}
				HX_STACK_LINE(99)
				bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(99)
				if ((tmp4)){
					HX_STACK_LINE(99)
					::zpp_nape::space::ZPP_Space tmp5 = _this->zpp_inner->space;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(99)
					bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(99)
					::nape::space::Space tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(99)
					if ((tmp6)){
						HX_STACK_LINE(99)
						tmp7 = null();
					}
					else{
						HX_STACK_LINE(99)
						::zpp_nape::space::ZPP_Space tmp8 = _this->zpp_inner->space;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(99)
						tmp7 = tmp8->outer;
					}
					HX_STACK_LINE(99)
					bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(99)
					if ((tmp8)){
						HX_STACK_LINE(99)
						::zpp_nape::space::ZPP_Component tmp9 = _this->zpp_inner->component;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(99)
						tmp9->woken = false;
					}
					HX_STACK_LINE(99)
					::zpp_nape::space::ZPP_Space tmp9 = _this->zpp_inner->space;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(99)
					bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(99)
					::nape::space::Space tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(99)
					if ((tmp10)){
						HX_STACK_LINE(99)
						tmp11 = null();
					}
					else{
						HX_STACK_LINE(99)
						::zpp_nape::space::ZPP_Space tmp12 = _this->zpp_inner->space;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(99)
						tmp11 = tmp12->outer;
					}
					HX_STACK_LINE(99)
					bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(99)
					if ((tmp12)){
						HX_STACK_LINE(99)
						::zpp_nape::space::ZPP_Space tmp13 = _this->zpp_inner->space;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(99)
						bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(99)
						::nape::space::Space tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(99)
						if ((tmp14)){
							HX_STACK_LINE(99)
							tmp15 = null();
						}
						else{
							HX_STACK_LINE(99)
							::zpp_nape::space::ZPP_Space tmp16 = _this->zpp_inner->space;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(99)
							tmp15 = tmp16->outer;
						}
						HX_STACK_LINE(99)
						::nape::phys::BodyList tmp16 = tmp15->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(99)
						::nape::phys::Body tmp17 = _this;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(99)
						tmp16->remove(tmp17);
					}
					HX_STACK_LINE(99)
					bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(99)
					if ((tmp13)){
						HX_STACK_LINE(99)
						::zpp_nape::space::ZPP_Space tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(99)
						::nape::phys::BodyList _this1 = tmp14->wrap_bodies;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(99)
						bool tmp15 = _this1->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(99)
						if ((tmp15)){
							HX_STACK_LINE(99)
							::nape::phys::Body tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(99)
							_this1->push(tmp16);
						}
						else{
							HX_STACK_LINE(99)
							::nape::phys::Body tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(99)
							_this1->unshift(tmp16);
						}
					}
				}
			}
			HX_STACK_LINE(99)
			::zpp_nape::space::ZPP_Space tmp1 = _this->zpp_inner->space;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(99)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(99)
			if ((tmp2)){
				HX_STACK_LINE(99)
				Dynamic();
			}
			else{
				HX_STACK_LINE(99)
				::zpp_nape::space::ZPP_Space tmp3 = _this->zpp_inner->space;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(99)
				tmp3->outer;
			}
		}
		HX_STACK_LINE(100)
		::nape::shape::Polygon polygon;		HX_STACK_VAR(polygon,"polygon");
		HX_STACK_LINE(101)
		{
			HX_STACK_LINE(101)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(101)
			while((true)){
				HX_STACK_LINE(101)
				bool tmp = (_g < tileIndices->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(101)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(101)
				if ((tmp1)){
					HX_STACK_LINE(101)
					break;
				}
				HX_STACK_LINE(101)
				int tmp2 = tileIndices->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(101)
				int index = tmp2;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(101)
				++(_g);
				HX_STACK_LINE(103)
				int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(103)
				Array< ::Dynamic > coords = this->getTileCoords(tmp3,false);		HX_STACK_VAR(coords,"coords");
				HX_STACK_LINE(104)
				{
					HX_STACK_LINE(104)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(104)
					while((true)){
						HX_STACK_LINE(104)
						bool tmp4 = (_g1 < coords->length);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(104)
						bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(104)
						if ((tmp5)){
							HX_STACK_LINE(104)
							break;
						}
						HX_STACK_LINE(104)
						::flixel::math::FlxPoint tmp6 = coords->__get(_g1).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(104)
						::flixel::math::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(104)
						++(_g1);
						HX_STACK_LINE(106)
						::nape::shape::Polygon tmp7 = ::nape::shape::Polygon_obj::__new(vertices,mat,null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(106)
						polygon = tmp7;
						HX_STACK_LINE(107)
						::nape::geom::Vec2 tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(107)
						{
							HX_STACK_LINE(107)
							Float x = point->x;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(107)
							Float y = point->y;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(107)
							bool weak = false;		HX_STACK_VAR(weak,"weak");
							HX_STACK_LINE(107)
							::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(107)
							{
								HX_STACK_LINE(107)
								::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(107)
								bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(107)
								if ((tmp10)){
									HX_STACK_LINE(107)
									::nape::geom::Vec2 tmp11 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(107)
									ret = tmp11;
								}
								else{
									HX_STACK_LINE(107)
									::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(107)
									ret = tmp11;
									HX_STACK_LINE(107)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
									HX_STACK_LINE(107)
									ret->zpp_pool = null();
								}
							}
							HX_STACK_LINE(107)
							bool tmp9 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(107)
							if ((tmp9)){
								HX_STACK_LINE(107)
								::zpp_nape::geom::ZPP_Vec2 tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(107)
								{
									HX_STACK_LINE(107)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(107)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(107)
									{
										HX_STACK_LINE(107)
										::zpp_nape::geom::ZPP_Vec2 tmp11 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(107)
										bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(107)
										if ((tmp12)){
											HX_STACK_LINE(107)
											::zpp_nape::geom::ZPP_Vec2 tmp13 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(107)
											ret1 = tmp13;
										}
										else{
											HX_STACK_LINE(107)
											::zpp_nape::geom::ZPP_Vec2 tmp13 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(107)
											ret1 = tmp13;
											HX_STACK_LINE(107)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(107)
											ret1->next = null();
										}
										HX_STACK_LINE(107)
										ret1->weak = false;
									}
									HX_STACK_LINE(107)
									ret1->_immutable = immutable;
									HX_STACK_LINE(107)
									{
										HX_STACK_LINE(107)
										ret1->x = x;
										HX_STACK_LINE(107)
										ret1->y = y;
										HX_STACK_LINE(107)
										{
										}
									}
									HX_STACK_LINE(107)
									tmp10 = ret1;
								}
								HX_STACK_LINE(107)
								ret->zpp_inner = tmp10;
								HX_STACK_LINE(107)
								ret->zpp_inner->outer = ret;
							}
							else{
								HX_STACK_LINE(107)
								Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(107)
								{
									HX_STACK_LINE(107)
									{
										HX_STACK_LINE(107)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(107)
										bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(107)
										if ((tmp11)){
											HX_STACK_LINE(107)
											_this->_validate();
										}
									}
									HX_STACK_LINE(107)
									tmp10 = ret->zpp_inner->x;
								}
								HX_STACK_LINE(107)
								Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(107)
								bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(107)
								bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(107)
								if ((tmp12)){
									HX_STACK_LINE(107)
									Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(107)
									{
										HX_STACK_LINE(107)
										{
											HX_STACK_LINE(107)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(107)
											bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(107)
											bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(107)
											bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(107)
											if ((tmp17)){
												HX_STACK_LINE(107)
												_this->_validate();
											}
										}
										HX_STACK_LINE(107)
										Float tmp15 = ret->zpp_inner->y;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(107)
										tmp14 = tmp15;
									}
									HX_STACK_LINE(107)
									Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(107)
									tmp13 = (tmp14 == tmp15);
								}
								else{
									HX_STACK_LINE(107)
									tmp13 = false;
								}
								HX_STACK_LINE(107)
								bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(107)
								if ((tmp14)){
									HX_STACK_LINE(107)
									{
										HX_STACK_LINE(107)
										ret->zpp_inner->x = x;
										HX_STACK_LINE(107)
										ret->zpp_inner->y = y;
										HX_STACK_LINE(107)
										{
										}
									}
									HX_STACK_LINE(107)
									{
										HX_STACK_LINE(107)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(107)
										bool tmp15 = (_this->_invalidate != null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(107)
										if ((tmp15)){
											HX_STACK_LINE(107)
											::zpp_nape::geom::ZPP_Vec2 tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(107)
											_this->_invalidate(tmp16);
										}
									}
								}
								HX_STACK_LINE(107)
								ret;
							}
							HX_STACK_LINE(107)
							ret->zpp_inner->weak = weak;
							HX_STACK_LINE(107)
							tmp8 = ret;
						}
						HX_STACK_LINE(107)
						polygon->translate(tmp8);
						HX_STACK_LINE(108)
						{
							HX_STACK_LINE(108)
							::nape::phys::Body tmp9 = this->body;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(108)
							::nape::shape::ShapeList tmp10 = tmp9->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(108)
							::nape::shape::ShapeList _this = tmp10;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(108)
							bool tmp11 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(108)
							if ((tmp11)){
								HX_STACK_LINE(108)
								::nape::shape::Polygon tmp12 = polygon;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(108)
								_this->push(tmp12);
							}
							else{
								HX_STACK_LINE(108)
								::nape::shape::Polygon tmp12 = polygon;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(108)
								_this->unshift(tmp12);
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(113)
		{
			HX_STACK_LINE(113)
			::nape::phys::Body tmp = this->body;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(113)
			::nape::phys::Body _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(113)
			::nape::space::Space tmp1 = ::flixel::addons::nape::FlxNapeSpace_obj::space;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(113)
			::nape::space::Space space = tmp1;		HX_STACK_VAR(space,"space");
			HX_STACK_LINE(113)
			{
				HX_STACK_LINE(113)
				_this->zpp_inner->immutable_midstep(HX_HCSTRING("Body::space","\x84","\xf7","\xbc","\x26"));
				HX_STACK_LINE(113)
				::zpp_nape::space::ZPP_Space tmp2 = _this->zpp_inner->space;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(113)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(113)
				::nape::space::Space tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(113)
				if ((tmp3)){
					HX_STACK_LINE(113)
					tmp4 = null();
				}
				else{
					HX_STACK_LINE(113)
					::zpp_nape::space::ZPP_Space tmp5 = _this->zpp_inner->space;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(113)
					tmp4 = tmp5->outer;
				}
				HX_STACK_LINE(113)
				::nape::space::Space tmp5 = space;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(113)
				bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(113)
				if ((tmp6)){
					HX_STACK_LINE(113)
					::zpp_nape::space::ZPP_Space tmp7 = _this->zpp_inner->space;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(113)
					bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(113)
					::nape::space::Space tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(113)
					if ((tmp8)){
						HX_STACK_LINE(113)
						tmp9 = null();
					}
					else{
						HX_STACK_LINE(113)
						::zpp_nape::space::ZPP_Space tmp10 = _this->zpp_inner->space;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(113)
						tmp9 = tmp10->outer;
					}
					HX_STACK_LINE(113)
					bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(113)
					if ((tmp10)){
						HX_STACK_LINE(113)
						::zpp_nape::space::ZPP_Component tmp11 = _this->zpp_inner->component;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(113)
						tmp11->woken = false;
					}
					HX_STACK_LINE(113)
					::zpp_nape::space::ZPP_Space tmp11 = _this->zpp_inner->space;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(113)
					bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(113)
					::nape::space::Space tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(113)
					if ((tmp12)){
						HX_STACK_LINE(113)
						tmp13 = null();
					}
					else{
						HX_STACK_LINE(113)
						::zpp_nape::space::ZPP_Space tmp14 = _this->zpp_inner->space;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(113)
						tmp13 = tmp14->outer;
					}
					HX_STACK_LINE(113)
					bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(113)
					if ((tmp14)){
						HX_STACK_LINE(113)
						::zpp_nape::space::ZPP_Space tmp15 = _this->zpp_inner->space;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(113)
						bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(113)
						::nape::space::Space tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(113)
						if ((tmp16)){
							HX_STACK_LINE(113)
							tmp17 = null();
						}
						else{
							HX_STACK_LINE(113)
							::zpp_nape::space::ZPP_Space tmp18 = _this->zpp_inner->space;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(113)
							tmp17 = tmp18->outer;
						}
						HX_STACK_LINE(113)
						::nape::phys::BodyList tmp18 = tmp17->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(113)
						::nape::phys::Body tmp19 = _this;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(113)
						tmp18->remove(tmp19);
					}
					HX_STACK_LINE(113)
					bool tmp15 = (space != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(113)
					if ((tmp15)){
						HX_STACK_LINE(113)
						::nape::phys::BodyList tmp16 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(113)
						::nape::phys::BodyList _this1 = tmp16;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(113)
						bool tmp17 = _this1->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(113)
						if ((tmp17)){
							HX_STACK_LINE(113)
							::nape::phys::Body tmp18 = _this;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(113)
							_this1->push(tmp18);
						}
						else{
							HX_STACK_LINE(113)
							::nape::phys::Body tmp18 = _this;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(113)
							_this1->unshift(tmp18);
						}
					}
				}
			}
			HX_STACK_LINE(113)
			::zpp_nape::space::ZPP_Space tmp2 = _this->zpp_inner->space;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(113)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(113)
			if ((tmp3)){
				HX_STACK_LINE(113)
				Dynamic();
			}
			else{
				HX_STACK_LINE(113)
				::zpp_nape::space::ZPP_Space tmp4 = _this->zpp_inner->space;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(113)
				tmp4->outer;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxNapeTilemap_obj,placeCustomPolygon,(void))

Void FlxNapeTilemap_obj::setupCollideIndex( hx::Null< int >  __o_CollideIndex,::nape::phys::Material mat){
int CollideIndex = __o_CollideIndex.Default(1);
	HX_STACK_FRAME("flixel.addons.nape.FlxNapeTilemap","setupCollideIndex",0x6c5466b4,"flixel.addons.nape.FlxNapeTilemap.setupCollideIndex","flixel/addons/nape/FlxNapeTilemap.hx",124,0x86ce3ecc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(CollideIndex,"CollideIndex")
	HX_STACK_ARG(mat,"mat")
{
		HX_STACK_LINE(125)
		bool tmp = (this->_data == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(125)
		if ((tmp)){
			HX_STACK_LINE(128)
			return null();
		}
		HX_STACK_LINE(130)
		int tileIndex = (int)0;		HX_STACK_VAR(tileIndex,"tileIndex");
		HX_STACK_LINE(132)
		{
			HX_STACK_LINE(132)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(132)
			int tmp1 = this->heightInTiles;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(132)
			int _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(132)
			while((true)){
				HX_STACK_LINE(132)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(132)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(132)
				if ((tmp3)){
					HX_STACK_LINE(132)
					break;
				}
				HX_STACK_LINE(132)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(132)
				int y = tmp4;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(134)
				{
					HX_STACK_LINE(134)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(134)
					int tmp5 = this->widthInTiles;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(134)
					int _g2 = tmp5;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(134)
					while((true)){
						HX_STACK_LINE(134)
						bool tmp6 = (_g3 < _g2);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(134)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(134)
						if ((tmp7)){
							HX_STACK_LINE(134)
							break;
						}
						HX_STACK_LINE(134)
						int tmp8 = (_g3)++;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(134)
						int x = tmp8;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(136)
						int tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(136)
						int tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(136)
						int tmp11 = this->widthInTiles;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(136)
						int tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(136)
						int tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(136)
						tileIndex = tmp13;
						HX_STACK_LINE(137)
						int tmp14 = this->_data->__get(tileIndex);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(137)
						int tmp15 = CollideIndex;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(137)
						bool tmp16 = (tmp14 >= tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(137)
						int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(137)
						if ((tmp16)){
							HX_STACK_LINE(137)
							tmp17 = (int)1;
						}
						else{
							HX_STACK_LINE(137)
							tmp17 = (int)0;
						}
						HX_STACK_LINE(137)
						this->_binaryData[tileIndex] = tmp17;
					}
				}
			}
		}
		HX_STACK_LINE(140)
		::nape::phys::Material tmp1 = mat;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(140)
		this->constructCollider(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxNapeTilemap_obj,setupCollideIndex,(void))

Void FlxNapeTilemap_obj::setupTileIndices( Array< int > tileIndices,::nape::phys::Material mat){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeTilemap","setupTileIndices",0xa5da1199,"flixel.addons.nape.FlxNapeTilemap.setupTileIndices","flixel/addons/nape/FlxNapeTilemap.hx",150,0x86ce3ecc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tileIndices,"tileIndices")
		HX_STACK_ARG(mat,"mat")
		HX_STACK_LINE(151)
		bool tmp = (this->_data == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(151)
		if ((tmp)){
			HX_STACK_LINE(154)
			return null();
		}
		HX_STACK_LINE(156)
		int tileIndex = (int)0;		HX_STACK_VAR(tileIndex,"tileIndex");
		HX_STACK_LINE(157)
		{
			HX_STACK_LINE(157)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(157)
			int tmp1 = this->heightInTiles;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(157)
			int _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(157)
			while((true)){
				HX_STACK_LINE(157)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(157)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(157)
				if ((tmp3)){
					HX_STACK_LINE(157)
					break;
				}
				HX_STACK_LINE(157)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(157)
				int y = tmp4;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(159)
				{
					HX_STACK_LINE(159)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(159)
					int tmp5 = this->widthInTiles;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(159)
					int _g2 = tmp5;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(159)
					while((true)){
						HX_STACK_LINE(159)
						bool tmp6 = (_g3 < _g2);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(159)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(159)
						if ((tmp7)){
							HX_STACK_LINE(159)
							break;
						}
						HX_STACK_LINE(159)
						int tmp8 = (_g3)++;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(159)
						int x = tmp8;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(161)
						int tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(161)
						int tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(161)
						int tmp11 = this->widthInTiles;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(161)
						int tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(161)
						int tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(161)
						tileIndex = tmp13;
						HX_STACK_LINE(162)
						int tmp14 = this->_data->__get(tileIndex);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(162)
						bool tmp15 = ::Lambda_obj::has(tileIndices,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(162)
						int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(162)
						if ((tmp15)){
							HX_STACK_LINE(162)
							tmp16 = (int)1;
						}
						else{
							HX_STACK_LINE(162)
							tmp16 = (int)0;
						}
						HX_STACK_LINE(162)
						this->_binaryData[tileIndex] = tmp16;
					}
				}
			}
		}
		HX_STACK_LINE(165)
		::nape::phys::Material tmp1 = mat;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(165)
		this->constructCollider(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxNapeTilemap_obj,setupTileIndices,(void))

Void FlxNapeTilemap_obj::constructCollider( ::nape::phys::Material mat){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeTilemap","constructCollider",0x412a144e,"flixel.addons.nape.FlxNapeTilemap.constructCollider","flixel/addons/nape/FlxNapeTilemap.hx",179,0x86ce3ecc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mat,"mat")
		HX_STACK_LINE(180)
		bool tmp = (mat == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(180)
		if ((tmp)){
			HX_STACK_LINE(182)
			::nape::phys::Material tmp1 = ::nape::phys::Material_obj::__new(null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(182)
			mat = tmp1;
		}
		HX_STACK_LINE(184)
		int tileIndex = (int)0;		HX_STACK_VAR(tileIndex,"tileIndex");
		HX_STACK_LINE(185)
		int startRow = (int)-1;		HX_STACK_VAR(startRow,"startRow");
		HX_STACK_LINE(186)
		int endRow = (int)-1;		HX_STACK_VAR(endRow,"endRow");
		HX_STACK_LINE(187)
		Array< ::Dynamic > rects = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(rects,"rects");
		HX_STACK_LINE(191)
		{
			HX_STACK_LINE(191)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(191)
			int tmp1 = this->widthInTiles;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(191)
			int _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(191)
			while((true)){
				HX_STACK_LINE(191)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(191)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(191)
				if ((tmp3)){
					HX_STACK_LINE(191)
					break;
				}
				HX_STACK_LINE(191)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(191)
				int x = tmp4;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(193)
				{
					HX_STACK_LINE(193)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(193)
					int tmp5 = this->heightInTiles;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(193)
					int _g2 = tmp5;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(193)
					while((true)){
						HX_STACK_LINE(193)
						bool tmp6 = (_g3 < _g2);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(193)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(193)
						if ((tmp7)){
							HX_STACK_LINE(193)
							break;
						}
						HX_STACK_LINE(193)
						int tmp8 = (_g3)++;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(193)
						int y = tmp8;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(195)
						int tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(195)
						int tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(195)
						int tmp11 = this->widthInTiles;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(195)
						int tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(195)
						int tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(195)
						tileIndex = tmp13;
						HX_STACK_LINE(197)
						int tmp14 = this->_binaryData->__get(tileIndex);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(197)
						bool tmp15 = (tmp14 == (int)1);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(197)
						if ((tmp15)){
							HX_STACK_LINE(200)
							bool tmp16 = (startRow == (int)-1);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(200)
							if ((tmp16)){
								HX_STACK_LINE(202)
								startRow = y;
							}
							HX_STACK_LINE(205)
							this->_binaryData[tileIndex] = (int)-1;
						}
						else{
							HX_STACK_LINE(209)
							int tmp16 = this->_binaryData->__get(tileIndex);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(209)
							bool tmp17 = (tmp16 == (int)0);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(209)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(209)
							bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(209)
							if ((tmp18)){
								HX_STACK_LINE(209)
								int tmp20 = this->_binaryData->__get(tileIndex);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(209)
								int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(209)
								tmp19 = (tmp21 == (int)-1);
							}
							else{
								HX_STACK_LINE(209)
								tmp19 = true;
							}
							HX_STACK_LINE(209)
							if ((tmp19)){
								HX_STACK_LINE(212)
								bool tmp20 = (startRow != (int)-1);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(212)
								if ((tmp20)){
									HX_STACK_LINE(214)
									int tmp21 = (y - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(214)
									endRow = tmp21;
									HX_STACK_LINE(215)
									int tmp22 = x;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(215)
									int tmp23 = startRow;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(215)
									int tmp24 = endRow;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(215)
									::flixel::math::FlxRect tmp25 = this->constructRectangle(tmp22,tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(215)
									rects->push(tmp25);
									HX_STACK_LINE(216)
									startRow = (int)-1;
									HX_STACK_LINE(217)
									endRow = (int)-1;
								}
							}
						}
					}
				}
				HX_STACK_LINE(222)
				bool tmp5 = (startRow != (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(222)
				if ((tmp5)){
					HX_STACK_LINE(224)
					int tmp6 = this->heightInTiles;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(224)
					int tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(224)
					endRow = tmp7;
					HX_STACK_LINE(225)
					int tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(225)
					int tmp9 = startRow;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(225)
					int tmp10 = endRow;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(225)
					::flixel::math::FlxRect tmp11 = this->constructRectangle(tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(225)
					rects->push(tmp11);
					HX_STACK_LINE(226)
					startRow = (int)-1;
					HX_STACK_LINE(227)
					endRow = (int)-1;
				}
			}
		}
		HX_STACK_LINE(231)
		{
			HX_STACK_LINE(231)
			::nape::phys::Body tmp1 = this->body;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(231)
			::nape::phys::Body _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(231)
			{
				HX_STACK_LINE(231)
				_this->zpp_inner->immutable_midstep(HX_HCSTRING("Body::space","\x84","\xf7","\xbc","\x26"));
				HX_STACK_LINE(231)
				::zpp_nape::space::ZPP_Space tmp2 = _this->zpp_inner->space;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(231)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(231)
				::nape::space::Space tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(231)
				if ((tmp3)){
					HX_STACK_LINE(231)
					tmp4 = null();
				}
				else{
					HX_STACK_LINE(231)
					::zpp_nape::space::ZPP_Space tmp5 = _this->zpp_inner->space;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(231)
					tmp4 = tmp5->outer;
				}
				HX_STACK_LINE(231)
				bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(231)
				if ((tmp5)){
					HX_STACK_LINE(231)
					::zpp_nape::space::ZPP_Space tmp6 = _this->zpp_inner->space;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(231)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(231)
					::nape::space::Space tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(231)
					if ((tmp7)){
						HX_STACK_LINE(231)
						tmp8 = null();
					}
					else{
						HX_STACK_LINE(231)
						::zpp_nape::space::ZPP_Space tmp9 = _this->zpp_inner->space;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(231)
						tmp8 = tmp9->outer;
					}
					HX_STACK_LINE(231)
					bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(231)
					if ((tmp9)){
						HX_STACK_LINE(231)
						::zpp_nape::space::ZPP_Component tmp10 = _this->zpp_inner->component;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(231)
						tmp10->woken = false;
					}
					HX_STACK_LINE(231)
					::zpp_nape::space::ZPP_Space tmp10 = _this->zpp_inner->space;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(231)
					bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(231)
					::nape::space::Space tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(231)
					if ((tmp11)){
						HX_STACK_LINE(231)
						tmp12 = null();
					}
					else{
						HX_STACK_LINE(231)
						::zpp_nape::space::ZPP_Space tmp13 = _this->zpp_inner->space;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(231)
						tmp12 = tmp13->outer;
					}
					HX_STACK_LINE(231)
					bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(231)
					if ((tmp13)){
						HX_STACK_LINE(231)
						::zpp_nape::space::ZPP_Space tmp14 = _this->zpp_inner->space;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(231)
						bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(231)
						::nape::space::Space tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(231)
						if ((tmp15)){
							HX_STACK_LINE(231)
							tmp16 = null();
						}
						else{
							HX_STACK_LINE(231)
							::zpp_nape::space::ZPP_Space tmp17 = _this->zpp_inner->space;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(231)
							tmp16 = tmp17->outer;
						}
						HX_STACK_LINE(231)
						::nape::phys::BodyList tmp17 = tmp16->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(231)
						::nape::phys::Body tmp18 = _this;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(231)
						tmp17->remove(tmp18);
					}
					HX_STACK_LINE(231)
					bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(231)
					if ((tmp14)){
						HX_STACK_LINE(231)
						::zpp_nape::space::ZPP_Space tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(231)
						::nape::phys::BodyList _this1 = tmp15->wrap_bodies;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(231)
						bool tmp16 = _this1->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(231)
						if ((tmp16)){
							HX_STACK_LINE(231)
							::nape::phys::Body tmp17 = _this;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(231)
							_this1->push(tmp17);
						}
						else{
							HX_STACK_LINE(231)
							::nape::phys::Body tmp17 = _this;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(231)
							_this1->unshift(tmp17);
						}
					}
				}
			}
			HX_STACK_LINE(231)
			::zpp_nape::space::ZPP_Space tmp2 = _this->zpp_inner->space;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(231)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(231)
			if ((tmp3)){
				HX_STACK_LINE(231)
				Dynamic();
			}
			else{
				HX_STACK_LINE(231)
				::zpp_nape::space::ZPP_Space tmp4 = _this->zpp_inner->space;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(231)
				tmp4->outer;
			}
		}
		HX_STACK_LINE(233)
		Array< ::Dynamic > vertices;		HX_STACK_VAR(vertices,"vertices");
		HX_STACK_LINE(234)
		{
			HX_STACK_LINE(234)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(234)
			while((true)){
				HX_STACK_LINE(234)
				bool tmp1 = (_g < rects->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(234)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(234)
				if ((tmp2)){
					HX_STACK_LINE(234)
					break;
				}
				HX_STACK_LINE(234)
				::flixel::math::FlxRect tmp3 = rects->__get(_g).StaticCast< ::flixel::math::FlxRect >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(234)
				::flixel::math::FlxRect rect = tmp3;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(234)
				++(_g);
				HX_STACK_LINE(236)
				vertices = Array_obj< ::Dynamic >::__new();
				HX_STACK_LINE(237)
				int tmp4 = this->_tileWidth;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(237)
				hx::MultEq(rect->x,tmp4);
				HX_STACK_LINE(238)
				int tmp5 = this->_tileHeight;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(238)
				hx::MultEq(rect->y,tmp5);
				HX_STACK_LINE(239)
				(rect->width)++;
				HX_STACK_LINE(240)
				int tmp6 = this->_tileWidth;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(240)
				hx::MultEq(rect->width,tmp6);
				HX_STACK_LINE(241)
				(rect->height)++;
				HX_STACK_LINE(242)
				int tmp7 = this->_tileHeight;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(242)
				hx::MultEq(rect->height,tmp7);
				HX_STACK_LINE(244)
				::nape::geom::Vec2 tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(244)
				{
					HX_STACK_LINE(244)
					Float x = rect->x;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(244)
					Float y = rect->y;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(244)
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(244)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(244)
					{
						HX_STACK_LINE(244)
						::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(244)
						bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(244)
						if ((tmp10)){
							HX_STACK_LINE(244)
							::nape::geom::Vec2 tmp11 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(244)
							ret = tmp11;
						}
						else{
							HX_STACK_LINE(244)
							::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(244)
							ret = tmp11;
							HX_STACK_LINE(244)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
							HX_STACK_LINE(244)
							ret->zpp_pool = null();
						}
					}
					HX_STACK_LINE(244)
					bool tmp9 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(244)
					if ((tmp9)){
						HX_STACK_LINE(244)
						::zpp_nape::geom::ZPP_Vec2 tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(244)
						{
							HX_STACK_LINE(244)
							bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
							HX_STACK_LINE(244)
							::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(244)
							{
								HX_STACK_LINE(244)
								::zpp_nape::geom::ZPP_Vec2 tmp11 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(244)
								bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(244)
								if ((tmp12)){
									HX_STACK_LINE(244)
									::zpp_nape::geom::ZPP_Vec2 tmp13 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(244)
									ret1 = tmp13;
								}
								else{
									HX_STACK_LINE(244)
									::zpp_nape::geom::ZPP_Vec2 tmp13 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(244)
									ret1 = tmp13;
									HX_STACK_LINE(244)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
									HX_STACK_LINE(244)
									ret1->next = null();
								}
								HX_STACK_LINE(244)
								ret1->weak = false;
							}
							HX_STACK_LINE(244)
							ret1->_immutable = immutable;
							HX_STACK_LINE(244)
							{
								HX_STACK_LINE(244)
								ret1->x = x;
								HX_STACK_LINE(244)
								ret1->y = y;
								HX_STACK_LINE(244)
								{
								}
							}
							HX_STACK_LINE(244)
							tmp10 = ret1;
						}
						HX_STACK_LINE(244)
						ret->zpp_inner = tmp10;
						HX_STACK_LINE(244)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(244)
						Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(244)
						{
							HX_STACK_LINE(244)
							{
								HX_STACK_LINE(244)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(244)
								bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(244)
								if ((tmp11)){
									HX_STACK_LINE(244)
									_this->_validate();
								}
							}
							HX_STACK_LINE(244)
							tmp10 = ret->zpp_inner->x;
						}
						HX_STACK_LINE(244)
						Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(244)
						bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(244)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(244)
						if ((tmp12)){
							HX_STACK_LINE(244)
							Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(244)
							{
								HX_STACK_LINE(244)
								{
									HX_STACK_LINE(244)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(244)
									bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(244)
									bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(244)
									bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(244)
									if ((tmp17)){
										HX_STACK_LINE(244)
										_this->_validate();
									}
								}
								HX_STACK_LINE(244)
								Float tmp15 = ret->zpp_inner->y;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(244)
								tmp14 = tmp15;
							}
							HX_STACK_LINE(244)
							Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(244)
							tmp13 = (tmp14 == tmp15);
						}
						else{
							HX_STACK_LINE(244)
							tmp13 = false;
						}
						HX_STACK_LINE(244)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(244)
						if ((tmp14)){
							HX_STACK_LINE(244)
							{
								HX_STACK_LINE(244)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(244)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(244)
								{
								}
							}
							HX_STACK_LINE(244)
							{
								HX_STACK_LINE(244)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(244)
								bool tmp15 = (_this->_invalidate != null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(244)
								if ((tmp15)){
									HX_STACK_LINE(244)
									::zpp_nape::geom::ZPP_Vec2 tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(244)
									_this->_invalidate(tmp16);
								}
							}
						}
						HX_STACK_LINE(244)
						ret;
					}
					HX_STACK_LINE(244)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(244)
					tmp8 = ret;
				}
				HX_STACK_LINE(244)
				vertices->push(tmp8);
				HX_STACK_LINE(245)
				::nape::geom::Vec2 tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(245)
				{
					HX_STACK_LINE(245)
					Float x = rect->width;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(245)
					Float y = rect->y;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(245)
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(245)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(245)
					{
						HX_STACK_LINE(245)
						::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(245)
						bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(245)
						if ((tmp11)){
							HX_STACK_LINE(245)
							::nape::geom::Vec2 tmp12 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(245)
							ret = tmp12;
						}
						else{
							HX_STACK_LINE(245)
							::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(245)
							ret = tmp12;
							HX_STACK_LINE(245)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
							HX_STACK_LINE(245)
							ret->zpp_pool = null();
						}
					}
					HX_STACK_LINE(245)
					bool tmp10 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(245)
					if ((tmp10)){
						HX_STACK_LINE(245)
						::zpp_nape::geom::ZPP_Vec2 tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(245)
						{
							HX_STACK_LINE(245)
							bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
							HX_STACK_LINE(245)
							::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(245)
							{
								HX_STACK_LINE(245)
								::zpp_nape::geom::ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(245)
								bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(245)
								if ((tmp13)){
									HX_STACK_LINE(245)
									::zpp_nape::geom::ZPP_Vec2 tmp14 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(245)
									ret1 = tmp14;
								}
								else{
									HX_STACK_LINE(245)
									::zpp_nape::geom::ZPP_Vec2 tmp14 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(245)
									ret1 = tmp14;
									HX_STACK_LINE(245)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
									HX_STACK_LINE(245)
									ret1->next = null();
								}
								HX_STACK_LINE(245)
								ret1->weak = false;
							}
							HX_STACK_LINE(245)
							ret1->_immutable = immutable;
							HX_STACK_LINE(245)
							{
								HX_STACK_LINE(245)
								ret1->x = x;
								HX_STACK_LINE(245)
								ret1->y = y;
								HX_STACK_LINE(245)
								{
								}
							}
							HX_STACK_LINE(245)
							tmp11 = ret1;
						}
						HX_STACK_LINE(245)
						ret->zpp_inner = tmp11;
						HX_STACK_LINE(245)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(245)
						Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(245)
						{
							HX_STACK_LINE(245)
							{
								HX_STACK_LINE(245)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(245)
								bool tmp12 = (_this->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(245)
								if ((tmp12)){
									HX_STACK_LINE(245)
									_this->_validate();
								}
							}
							HX_STACK_LINE(245)
							tmp11 = ret->zpp_inner->x;
						}
						HX_STACK_LINE(245)
						Float tmp12 = x;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(245)
						bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(245)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(245)
						if ((tmp13)){
							HX_STACK_LINE(245)
							Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(245)
							{
								HX_STACK_LINE(245)
								{
									HX_STACK_LINE(245)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(245)
									bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(245)
									bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(245)
									bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(245)
									if ((tmp18)){
										HX_STACK_LINE(245)
										_this->_validate();
									}
								}
								HX_STACK_LINE(245)
								Float tmp16 = ret->zpp_inner->y;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(245)
								tmp15 = tmp16;
							}
							HX_STACK_LINE(245)
							Float tmp16 = y;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(245)
							tmp14 = (tmp15 == tmp16);
						}
						else{
							HX_STACK_LINE(245)
							tmp14 = false;
						}
						HX_STACK_LINE(245)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(245)
						if ((tmp15)){
							HX_STACK_LINE(245)
							{
								HX_STACK_LINE(245)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(245)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(245)
								{
								}
							}
							HX_STACK_LINE(245)
							{
								HX_STACK_LINE(245)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(245)
								bool tmp16 = (_this->_invalidate != null());		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(245)
								if ((tmp16)){
									HX_STACK_LINE(245)
									::zpp_nape::geom::ZPP_Vec2 tmp17 = _this;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(245)
									_this->_invalidate(tmp17);
								}
							}
						}
						HX_STACK_LINE(245)
						ret;
					}
					HX_STACK_LINE(245)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(245)
					tmp9 = ret;
				}
				HX_STACK_LINE(245)
				vertices->push(tmp9);
				HX_STACK_LINE(246)
				::nape::geom::Vec2 tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(246)
				{
					HX_STACK_LINE(246)
					Float x = rect->width;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(246)
					Float y = rect->height;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(246)
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(246)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(246)
					{
						HX_STACK_LINE(246)
						::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(246)
						bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(246)
						if ((tmp12)){
							HX_STACK_LINE(246)
							::nape::geom::Vec2 tmp13 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(246)
							ret = tmp13;
						}
						else{
							HX_STACK_LINE(246)
							::nape::geom::Vec2 tmp13 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(246)
							ret = tmp13;
							HX_STACK_LINE(246)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
							HX_STACK_LINE(246)
							ret->zpp_pool = null();
						}
					}
					HX_STACK_LINE(246)
					bool tmp11 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(246)
					if ((tmp11)){
						HX_STACK_LINE(246)
						::zpp_nape::geom::ZPP_Vec2 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(246)
						{
							HX_STACK_LINE(246)
							bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
							HX_STACK_LINE(246)
							::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(246)
							{
								HX_STACK_LINE(246)
								::zpp_nape::geom::ZPP_Vec2 tmp13 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(246)
								bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(246)
								if ((tmp14)){
									HX_STACK_LINE(246)
									::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(246)
									ret1 = tmp15;
								}
								else{
									HX_STACK_LINE(246)
									::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(246)
									ret1 = tmp15;
									HX_STACK_LINE(246)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
									HX_STACK_LINE(246)
									ret1->next = null();
								}
								HX_STACK_LINE(246)
								ret1->weak = false;
							}
							HX_STACK_LINE(246)
							ret1->_immutable = immutable;
							HX_STACK_LINE(246)
							{
								HX_STACK_LINE(246)
								ret1->x = x;
								HX_STACK_LINE(246)
								ret1->y = y;
								HX_STACK_LINE(246)
								{
								}
							}
							HX_STACK_LINE(246)
							tmp12 = ret1;
						}
						HX_STACK_LINE(246)
						ret->zpp_inner = tmp12;
						HX_STACK_LINE(246)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(246)
						Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(246)
						{
							HX_STACK_LINE(246)
							{
								HX_STACK_LINE(246)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(246)
								bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(246)
								if ((tmp13)){
									HX_STACK_LINE(246)
									_this->_validate();
								}
							}
							HX_STACK_LINE(246)
							tmp12 = ret->zpp_inner->x;
						}
						HX_STACK_LINE(246)
						Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(246)
						bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(246)
						bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(246)
						if ((tmp14)){
							HX_STACK_LINE(246)
							Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(246)
							{
								HX_STACK_LINE(246)
								{
									HX_STACK_LINE(246)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(246)
									bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(246)
									bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(246)
									bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(246)
									if ((tmp19)){
										HX_STACK_LINE(246)
										_this->_validate();
									}
								}
								HX_STACK_LINE(246)
								Float tmp17 = ret->zpp_inner->y;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(246)
								tmp16 = tmp17;
							}
							HX_STACK_LINE(246)
							Float tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(246)
							tmp15 = (tmp16 == tmp17);
						}
						else{
							HX_STACK_LINE(246)
							tmp15 = false;
						}
						HX_STACK_LINE(246)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(246)
						if ((tmp16)){
							HX_STACK_LINE(246)
							{
								HX_STACK_LINE(246)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(246)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(246)
								{
								}
							}
							HX_STACK_LINE(246)
							{
								HX_STACK_LINE(246)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(246)
								bool tmp17 = (_this->_invalidate != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(246)
								if ((tmp17)){
									HX_STACK_LINE(246)
									::zpp_nape::geom::ZPP_Vec2 tmp18 = _this;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(246)
									_this->_invalidate(tmp18);
								}
							}
						}
						HX_STACK_LINE(246)
						ret;
					}
					HX_STACK_LINE(246)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(246)
					tmp10 = ret;
				}
				HX_STACK_LINE(246)
				vertices->push(tmp10);
				HX_STACK_LINE(247)
				::nape::geom::Vec2 tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(247)
				{
					HX_STACK_LINE(247)
					Float x = rect->x;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(247)
					Float y = rect->height;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(247)
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(247)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(247)
					{
						HX_STACK_LINE(247)
						::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(247)
						bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(247)
						if ((tmp13)){
							HX_STACK_LINE(247)
							::nape::geom::Vec2 tmp14 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(247)
							ret = tmp14;
						}
						else{
							HX_STACK_LINE(247)
							::nape::geom::Vec2 tmp14 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(247)
							ret = tmp14;
							HX_STACK_LINE(247)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
							HX_STACK_LINE(247)
							ret->zpp_pool = null();
						}
					}
					HX_STACK_LINE(247)
					bool tmp12 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(247)
					if ((tmp12)){
						HX_STACK_LINE(247)
						::zpp_nape::geom::ZPP_Vec2 tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(247)
						{
							HX_STACK_LINE(247)
							bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
							HX_STACK_LINE(247)
							::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(247)
							{
								HX_STACK_LINE(247)
								::zpp_nape::geom::ZPP_Vec2 tmp14 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(247)
								bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(247)
								if ((tmp15)){
									HX_STACK_LINE(247)
									::zpp_nape::geom::ZPP_Vec2 tmp16 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(247)
									ret1 = tmp16;
								}
								else{
									HX_STACK_LINE(247)
									::zpp_nape::geom::ZPP_Vec2 tmp16 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(247)
									ret1 = tmp16;
									HX_STACK_LINE(247)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
									HX_STACK_LINE(247)
									ret1->next = null();
								}
								HX_STACK_LINE(247)
								ret1->weak = false;
							}
							HX_STACK_LINE(247)
							ret1->_immutable = immutable;
							HX_STACK_LINE(247)
							{
								HX_STACK_LINE(247)
								ret1->x = x;
								HX_STACK_LINE(247)
								ret1->y = y;
								HX_STACK_LINE(247)
								{
								}
							}
							HX_STACK_LINE(247)
							tmp13 = ret1;
						}
						HX_STACK_LINE(247)
						ret->zpp_inner = tmp13;
						HX_STACK_LINE(247)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(247)
						Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(247)
						{
							HX_STACK_LINE(247)
							{
								HX_STACK_LINE(247)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(247)
								bool tmp14 = (_this->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(247)
								if ((tmp14)){
									HX_STACK_LINE(247)
									_this->_validate();
								}
							}
							HX_STACK_LINE(247)
							tmp13 = ret->zpp_inner->x;
						}
						HX_STACK_LINE(247)
						Float tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(247)
						bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(247)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(247)
						if ((tmp15)){
							HX_STACK_LINE(247)
							Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(247)
							{
								HX_STACK_LINE(247)
								{
									HX_STACK_LINE(247)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(247)
									bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(247)
									bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(247)
									bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(247)
									if ((tmp20)){
										HX_STACK_LINE(247)
										_this->_validate();
									}
								}
								HX_STACK_LINE(247)
								Float tmp18 = ret->zpp_inner->y;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(247)
								tmp17 = tmp18;
							}
							HX_STACK_LINE(247)
							Float tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(247)
							tmp16 = (tmp17 == tmp18);
						}
						else{
							HX_STACK_LINE(247)
							tmp16 = false;
						}
						HX_STACK_LINE(247)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(247)
						if ((tmp17)){
							HX_STACK_LINE(247)
							{
								HX_STACK_LINE(247)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(247)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(247)
								{
								}
							}
							HX_STACK_LINE(247)
							{
								HX_STACK_LINE(247)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(247)
								bool tmp18 = (_this->_invalidate != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(247)
								if ((tmp18)){
									HX_STACK_LINE(247)
									::zpp_nape::geom::ZPP_Vec2 tmp19 = _this;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(247)
									_this->_invalidate(tmp19);
								}
							}
						}
						HX_STACK_LINE(247)
						ret;
					}
					HX_STACK_LINE(247)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(247)
					tmp11 = ret;
				}
				HX_STACK_LINE(247)
				vertices->push(tmp11);
				HX_STACK_LINE(248)
				{
					HX_STACK_LINE(248)
					::nape::phys::Body tmp12 = this->body;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(248)
					::nape::shape::ShapeList tmp13 = tmp12->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(248)
					::nape::shape::ShapeList _this = tmp13;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(248)
					::nape::shape::Polygon tmp14 = ::nape::shape::Polygon_obj::__new(vertices,mat,null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(248)
					::nape::shape::Shape obj = tmp14;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(248)
					bool tmp15 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(248)
					if ((tmp15)){
						HX_STACK_LINE(248)
						::nape::shape::Shape tmp16 = obj;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(248)
						_this->push(tmp16);
					}
					else{
						HX_STACK_LINE(248)
						::nape::shape::Shape tmp16 = obj;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(248)
						_this->unshift(tmp16);
					}
				}
				HX_STACK_LINE(249)
				{
					HX_STACK_LINE(249)
					bool tmp12 = rect->_inPool;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(249)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(249)
					if ((tmp13)){
						HX_STACK_LINE(249)
						rect->_inPool = true;
						HX_STACK_LINE(249)
						rect->_weak = false;
						HX_STACK_LINE(249)
						::flixel::util::FlxPool_flixel_math_FlxRect tmp14 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(249)
						::flixel::math::FlxRect tmp15 = rect;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(249)
						tmp14->putUnsafe(tmp15);
					}
				}
			}
		}
		HX_STACK_LINE(252)
		{
			HX_STACK_LINE(252)
			::nape::phys::Body tmp1 = this->body;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(252)
			::nape::phys::Body _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(252)
			::nape::space::Space tmp2 = ::flixel::addons::nape::FlxNapeSpace_obj::space;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(252)
			::nape::space::Space space = tmp2;		HX_STACK_VAR(space,"space");
			HX_STACK_LINE(252)
			{
				HX_STACK_LINE(252)
				_this->zpp_inner->immutable_midstep(HX_HCSTRING("Body::space","\x84","\xf7","\xbc","\x26"));
				HX_STACK_LINE(252)
				::zpp_nape::space::ZPP_Space tmp3 = _this->zpp_inner->space;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(252)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(252)
				::nape::space::Space tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(252)
				if ((tmp4)){
					HX_STACK_LINE(252)
					tmp5 = null();
				}
				else{
					HX_STACK_LINE(252)
					::zpp_nape::space::ZPP_Space tmp6 = _this->zpp_inner->space;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(252)
					tmp5 = tmp6->outer;
				}
				HX_STACK_LINE(252)
				::nape::space::Space tmp6 = space;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(252)
				bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(252)
				if ((tmp7)){
					HX_STACK_LINE(252)
					::zpp_nape::space::ZPP_Space tmp8 = _this->zpp_inner->space;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(252)
					bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(252)
					::nape::space::Space tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(252)
					if ((tmp9)){
						HX_STACK_LINE(252)
						tmp10 = null();
					}
					else{
						HX_STACK_LINE(252)
						::zpp_nape::space::ZPP_Space tmp11 = _this->zpp_inner->space;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(252)
						tmp10 = tmp11->outer;
					}
					HX_STACK_LINE(252)
					bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(252)
					if ((tmp11)){
						HX_STACK_LINE(252)
						::zpp_nape::space::ZPP_Component tmp12 = _this->zpp_inner->component;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(252)
						tmp12->woken = false;
					}
					HX_STACK_LINE(252)
					::zpp_nape::space::ZPP_Space tmp12 = _this->zpp_inner->space;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(252)
					bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(252)
					::nape::space::Space tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(252)
					if ((tmp13)){
						HX_STACK_LINE(252)
						tmp14 = null();
					}
					else{
						HX_STACK_LINE(252)
						::zpp_nape::space::ZPP_Space tmp15 = _this->zpp_inner->space;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(252)
						tmp14 = tmp15->outer;
					}
					HX_STACK_LINE(252)
					bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(252)
					if ((tmp15)){
						HX_STACK_LINE(252)
						::zpp_nape::space::ZPP_Space tmp16 = _this->zpp_inner->space;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(252)
						bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(252)
						::nape::space::Space tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(252)
						if ((tmp17)){
							HX_STACK_LINE(252)
							tmp18 = null();
						}
						else{
							HX_STACK_LINE(252)
							::zpp_nape::space::ZPP_Space tmp19 = _this->zpp_inner->space;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(252)
							tmp18 = tmp19->outer;
						}
						HX_STACK_LINE(252)
						::nape::phys::BodyList tmp19 = tmp18->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(252)
						::nape::phys::Body tmp20 = _this;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(252)
						tmp19->remove(tmp20);
					}
					HX_STACK_LINE(252)
					bool tmp16 = (space != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(252)
					if ((tmp16)){
						HX_STACK_LINE(252)
						::nape::phys::BodyList tmp17 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(252)
						::nape::phys::BodyList _this1 = tmp17;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(252)
						bool tmp18 = _this1->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(252)
						if ((tmp18)){
							HX_STACK_LINE(252)
							::nape::phys::Body tmp19 = _this;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(252)
							_this1->push(tmp19);
						}
						else{
							HX_STACK_LINE(252)
							::nape::phys::Body tmp19 = _this;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(252)
							_this1->unshift(tmp19);
						}
					}
				}
			}
			HX_STACK_LINE(252)
			::zpp_nape::space::ZPP_Space tmp3 = _this->zpp_inner->space;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(252)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(252)
			if ((tmp4)){
				HX_STACK_LINE(252)
				Dynamic();
			}
			else{
				HX_STACK_LINE(252)
				::zpp_nape::space::ZPP_Space tmp5 = _this->zpp_inner->space;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(252)
				tmp5->outer;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxNapeTilemap_obj,constructCollider,(void))

::flixel::math::FlxRect FlxNapeTilemap_obj::constructRectangle( int StartX,int StartY,int EndY){
	HX_STACK_FRAME("flixel.addons.nape.FlxNapeTilemap","constructRectangle",0x0bd715d5,"flixel.addons.nape.FlxNapeTilemap.constructRectangle","flixel/addons/nape/FlxNapeTilemap.hx",264,0x86ce3ecc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(StartX,"StartX")
	HX_STACK_ARG(StartY,"StartY")
	HX_STACK_ARG(EndY,"EndY")
	HX_STACK_LINE(266)
	(StartX)++;
	HX_STACK_LINE(267)
	bool rectFinished = false;		HX_STACK_VAR(rectFinished,"rectFinished");
	HX_STACK_LINE(268)
	int tileIndex = (int)0;		HX_STACK_VAR(tileIndex,"tileIndex");
	HX_STACK_LINE(270)
	{
		HX_STACK_LINE(270)
		int _g1 = StartX;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(270)
		int tmp = this->widthInTiles;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(270)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(270)
		while((true)){
			HX_STACK_LINE(270)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(270)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(270)
			if ((tmp2)){
				HX_STACK_LINE(270)
				break;
			}
			HX_STACK_LINE(270)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(270)
			int x = tmp3;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(272)
			{
				HX_STACK_LINE(272)
				int _g3 = StartY;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(272)
				int tmp4 = (EndY + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(272)
				int _g2 = tmp4;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(272)
				while((true)){
					HX_STACK_LINE(272)
					bool tmp5 = (_g3 < _g2);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(272)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(272)
					if ((tmp6)){
						HX_STACK_LINE(272)
						break;
					}
					HX_STACK_LINE(272)
					int tmp7 = (_g3)++;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(272)
					int y = tmp7;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(274)
					int tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(274)
					int tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(274)
					int tmp10 = this->widthInTiles;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(274)
					int tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(274)
					int tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(274)
					tileIndex = tmp12;
					HX_STACK_LINE(276)
					int tmp13 = this->_binaryData->__get(tileIndex);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(276)
					bool tmp14 = (tmp13 == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(276)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(276)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(276)
					if ((tmp15)){
						HX_STACK_LINE(276)
						int tmp17 = this->_binaryData->__get(tileIndex);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(276)
						int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(276)
						tmp16 = (tmp18 == (int)-1);
					}
					else{
						HX_STACK_LINE(276)
						tmp16 = true;
					}
					HX_STACK_LINE(276)
					if ((tmp16)){
						HX_STACK_LINE(278)
						rectFinished = true;
						HX_STACK_LINE(279)
						break;
					}
				}
			}
			HX_STACK_LINE(282)
			bool tmp4 = rectFinished;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(282)
			if ((tmp4)){
				HX_STACK_LINE(285)
				{
					HX_STACK_LINE(285)
					int _g2 = StartX;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(285)
					while((true)){
						HX_STACK_LINE(285)
						bool tmp5 = (_g2 < x);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(285)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(285)
						if ((tmp6)){
							HX_STACK_LINE(285)
							break;
						}
						HX_STACK_LINE(285)
						int tmp7 = (_g2)++;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(285)
						int u = tmp7;		HX_STACK_VAR(u,"u");
						HX_STACK_LINE(287)
						{
							HX_STACK_LINE(287)
							int _g4 = StartY;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(287)
							int tmp8 = (EndY + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(287)
							int _g3 = tmp8;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(287)
							while((true)){
								HX_STACK_LINE(287)
								bool tmp9 = (_g4 < _g3);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(287)
								bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(287)
								if ((tmp10)){
									HX_STACK_LINE(287)
									break;
								}
								HX_STACK_LINE(287)
								int tmp11 = (_g4)++;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(287)
								int v = tmp11;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(289)
								int tmp12 = u;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(289)
								int tmp13 = v;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(289)
								int tmp14 = this->widthInTiles;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(289)
								int tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(289)
								int tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(289)
								tileIndex = tmp16;
								HX_STACK_LINE(290)
								this->_binaryData[tileIndex] = (int)-1;
							}
						}
					}
				}
				HX_STACK_LINE(295)
				::flixel::math::FlxRect tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(295)
				{
					HX_STACK_LINE(295)
					::flixel::math::FlxRect tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(295)
					{
						HX_STACK_LINE(295)
						::flixel::util::FlxPool_flixel_math_FlxRect tmp7 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(295)
						::flixel::math::FlxRect tmp8 = tmp7->get();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(295)
						::flixel::math::FlxRect _this = tmp8;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(295)
						int tmp9 = (StartX - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(295)
						_this->x = tmp9;
						HX_STACK_LINE(295)
						_this->y = StartY;
						HX_STACK_LINE(295)
						int tmp10 = (x - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(295)
						_this->width = tmp10;
						HX_STACK_LINE(295)
						_this->height = EndY;
						HX_STACK_LINE(295)
						tmp6 = _this;
					}
					HX_STACK_LINE(295)
					::flixel::math::FlxRect rect = tmp6;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(295)
					rect->_inPool = false;
					HX_STACK_LINE(295)
					tmp5 = rect;
				}
				HX_STACK_LINE(295)
				return tmp5;
			}
		}
	}
	HX_STACK_LINE(299)
	{
		HX_STACK_LINE(299)
		int _g1 = StartX;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(299)
		int tmp = this->widthInTiles;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(299)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(299)
		while((true)){
			HX_STACK_LINE(299)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(299)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(299)
			if ((tmp2)){
				HX_STACK_LINE(299)
				break;
			}
			HX_STACK_LINE(299)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(299)
			int u = tmp3;		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(301)
			{
				HX_STACK_LINE(301)
				int _g3 = StartY;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(301)
				int tmp4 = (EndY + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(301)
				int _g2 = tmp4;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(301)
				while((true)){
					HX_STACK_LINE(301)
					bool tmp5 = (_g3 < _g2);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(301)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(301)
					if ((tmp6)){
						HX_STACK_LINE(301)
						break;
					}
					HX_STACK_LINE(301)
					int tmp7 = (_g3)++;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(301)
					int v = tmp7;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(303)
					int tmp8 = u;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(303)
					int tmp9 = v;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(303)
					int tmp10 = this->widthInTiles;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(303)
					int tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(303)
					int tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(303)
					tileIndex = tmp12;
					HX_STACK_LINE(304)
					this->_binaryData[tileIndex] = (int)-1;
				}
			}
		}
	}
	HX_STACK_LINE(307)
	::flixel::math::FlxRect tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(307)
	{
		HX_STACK_LINE(307)
		::flixel::math::FlxRect tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(307)
		{
			HX_STACK_LINE(307)
			::flixel::util::FlxPool_flixel_math_FlxRect tmp2 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(307)
			::flixel::math::FlxRect tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(307)
			::flixel::math::FlxRect _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(307)
			int tmp4 = (StartX - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(307)
			_this->x = tmp4;
			HX_STACK_LINE(307)
			_this->y = StartY;
			HX_STACK_LINE(307)
			int tmp5 = this->widthInTiles;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(307)
			int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(307)
			_this->width = tmp6;
			HX_STACK_LINE(307)
			_this->height = EndY;
			HX_STACK_LINE(307)
			tmp1 = _this;
		}
		HX_STACK_LINE(307)
		::flixel::math::FlxRect rect = tmp1;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(307)
		rect->_inPool = false;
		HX_STACK_LINE(307)
		tmp = rect;
	}
	HX_STACK_LINE(307)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxNapeTilemap_obj,constructRectangle,return )


FlxNapeTilemap_obj::FlxNapeTilemap_obj()
{
}

void FlxNapeTilemap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxNapeTilemap);
	HX_MARK_MEMBER_NAME(body,"body");
	HX_MARK_MEMBER_NAME(_binaryData,"_binaryData");
	::flixel::tile::FlxTilemap_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxNapeTilemap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(body,"body");
	HX_VISIT_MEMBER_NAME(_binaryData,"_binaryData");
	::flixel::tile::FlxTilemap_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxNapeTilemap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { return body; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_binaryData") ) { return _binaryData; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addSolidTile") ) { return addSolidTile_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadMapFromCSV") ) { return loadMapFromCSV_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"loadMapFromArray") ) { return loadMapFromArray_dyn(); }
		if (HX_FIELD_EQ(inName,"setupTileIndices") ) { return setupTileIndices_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setupCollideIndex") ) { return setupCollideIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"constructCollider") ) { return constructCollider_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loadMapFrom2DArray") ) { return loadMapFrom2DArray_dyn(); }
		if (HX_FIELD_EQ(inName,"placeCustomPolygon") ) { return placeCustomPolygon_dyn(); }
		if (HX_FIELD_EQ(inName,"constructRectangle") ) { return constructRectangle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxNapeTilemap_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast< ::nape::phys::Body >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_binaryData") ) { _binaryData=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxNapeTilemap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41"));
	outFields->push(HX_HCSTRING("_binaryData","\xea","\x9f","\xc6","\xb6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::phys::Body*/ ,(int)offsetof(FlxNapeTilemap_obj,body),HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxNapeTilemap_obj,_binaryData),HX_HCSTRING("_binaryData","\xea","\x9f","\xc6","\xb6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41"),
	HX_HCSTRING("_binaryData","\xea","\x9f","\xc6","\xb6"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("loadMapFromCSV","\x06","\x2b","\x38","\x8f"),
	HX_HCSTRING("loadMapFromArray","\xd9","\x80","\xa3","\xdb"),
	HX_HCSTRING("loadMapFrom2DArray","\xc7","\xd3","\x90","\xac"),
	HX_HCSTRING("addSolidTile","\x98","\xbe","\x14","\xe1"),
	HX_HCSTRING("placeCustomPolygon","\x82","\x15","\x15","\x34"),
	HX_HCSTRING("setupCollideIndex","\xd1","\xb4","\x27","\x03"),
	HX_HCSTRING("setupTileIndices","\x1c","\xb6","\x16","\x84"),
	HX_HCSTRING("constructCollider","\x6b","\x62","\xfd","\xd7"),
	HX_HCSTRING("constructRectangle","\x18","\x21","\xe8","\x6d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxNapeTilemap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxNapeTilemap_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxNapeTilemap_obj::__mClass;

void FlxNapeTilemap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.nape.FlxNapeTilemap","\x91","\x0d","\xc8","\x42");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxNapeTilemap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace nape
