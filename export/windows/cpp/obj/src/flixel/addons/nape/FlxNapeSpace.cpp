#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_addons_nape_FlxNapeSpace
#include <flixel/addons/nape/FlxNapeSpace.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_PluginFrontEnd
#include <flixel/system/frontEnds/PluginFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
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
#ifndef INCLUDED_nape_space_Broadphase
#include <nape/space/Broadphase.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace flixel{
namespace addons{
namespace nape{

Void FlxNapeSpace_obj::__construct()
{
HX_STACK_FRAME("flixel.addons.nape.FlxNapeSpace","new",0xf97484db,"flixel.addons.nape.FlxNapeSpace.new","flixel/addons/nape/FlxNapeSpace.hx",25,0x92717a34)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(25)
	super::__construct();
}
;
	return null();
}

//FlxNapeSpace_obj::~FlxNapeSpace_obj() { }

Dynamic FlxNapeSpace_obj::__CreateEmpty() { return  new FlxNapeSpace_obj; }
hx::ObjectPtr< FlxNapeSpace_obj > FlxNapeSpace_obj::__new()
{  hx::ObjectPtr< FlxNapeSpace_obj > _result_ = new FlxNapeSpace_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxNapeSpace_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxNapeSpace_obj > _result_ = new FlxNapeSpace_obj();
	_result_->__construct();
	return _result_;}

Void FlxNapeSpace_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeSpace","update",0x4d9a906e,"flixel.addons.nape.FlxNapeSpace.update","flixel/addons/nape/FlxNapeSpace.hx",176,0x92717a34)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(177)
		::nape::space::Space tmp = ::flixel::addons::nape::FlxNapeSpace_obj::space;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(177)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(177)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(177)
		if ((tmp1)){
			HX_STACK_LINE(177)
			tmp2 = (elapsed > (int)0);
		}
		else{
			HX_STACK_LINE(177)
			tmp2 = false;
		}
		HX_STACK_LINE(177)
		if ((tmp2)){
			HX_STACK_LINE(179)
			::nape::space::Space tmp3 = ::flixel::addons::nape::FlxNapeSpace_obj::space;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(179)
			Float tmp4 = elapsed;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(179)
			int tmp5 = ::flixel::addons::nape::FlxNapeSpace_obj::velocityIterations;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(179)
			int tmp6 = ::flixel::addons::nape::FlxNapeSpace_obj::positionIterations;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(179)
			tmp3->step(tmp4,tmp5,tmp6);
		}
	}
return null();
}


Void FlxNapeSpace_obj::draw( ){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeSpace","draw",0x45ed6329,"flixel.addons.nape.FlxNapeSpace.draw","flixel/addons/nape/FlxNapeSpace.hx",187,0x92717a34)
		HX_STACK_THIS(this)
	}
return null();
}


::nape::space::Space FlxNapeSpace_obj::space;

int FlxNapeSpace_obj::velocityIterations;

int FlxNapeSpace_obj::positionIterations;

bool FlxNapeSpace_obj::drawDebug;

Void FlxNapeSpace_obj::init( ){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeSpace","init",0x49387235,"flixel.addons.nape.FlxNapeSpace.init","flixel/addons/nape/FlxNapeSpace.hx",65,0x92717a34)
		HX_STACK_LINE(66)
		::flixel::_system::frontEnds::PluginFrontEnd tmp = ::flixel::FlxG_obj::plugins;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		::flixel::addons::nape::FlxNapeSpace tmp1 = ::flixel::addons::nape::FlxNapeSpace_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		tmp->__Field(HX_HCSTRING("add_flixel_addons_nape_FlxNapeSpace","\x9c","\xaf","\x79","\x7a"), hx::paccDynamic )(tmp1);
		HX_STACK_LINE(68)
		::nape::space::Space tmp2 = ::flixel::addons::nape::FlxNapeSpace_obj::space;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(68)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(68)
		if ((tmp3)){
			HX_STACK_LINE(70)
			::nape::geom::Vec2 tmp4 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(70)
			::nape::space::Space tmp5 = ::nape::space::Space_obj::__new(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(70)
			::flixel::addons::nape::FlxNapeSpace_obj::space = tmp5;
		}
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			::flixel::_system::frontEnds::SignalFrontEnd tmp4 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(73)
			Dynamic tmp5 = ::flixel::addons::nape::FlxNapeSpace_obj::onStateSwitch_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(73)
			tmp4->__Field(HX_HCSTRING("stateSwitched","\x84","\x32","\x02","\x37"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp5);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxNapeSpace_obj,init,(void))

::nape::phys::Body FlxNapeSpace_obj::createWalls( hx::Null< Float >  __o_minX,hx::Null< Float >  __o_minY,hx::Null< Float >  __o_maxX,hx::Null< Float >  __o_maxY,hx::Null< Float >  __o_thickness,::nape::phys::Material material){
Float minX = __o_minX.Default(0);
Float minY = __o_minY.Default(0);
Float maxX = __o_maxX.Default(0);
Float maxY = __o_maxY.Default(0);
Float thickness = __o_thickness.Default(10);
	HX_STACK_FRAME("flixel.addons.nape.FlxNapeSpace","createWalls",0x1f8c6b08,"flixel.addons.nape.FlxNapeSpace.createWalls","flixel/addons/nape/FlxNapeSpace.hx",96,0x92717a34)
	HX_STACK_ARG(minX,"minX")
	HX_STACK_ARG(minY,"minY")
	HX_STACK_ARG(maxX,"maxX")
	HX_STACK_ARG(maxY,"maxY")
	HX_STACK_ARG(thickness,"thickness")
	HX_STACK_ARG(material,"material")
{
		HX_STACK_LINE(97)
		bool tmp = (maxX == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(97)
		if ((tmp)){
			HX_STACK_LINE(99)
			int tmp1 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(99)
			maxX = tmp1;
		}
		HX_STACK_LINE(102)
		bool tmp1 = (maxY == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(102)
		if ((tmp1)){
			HX_STACK_LINE(104)
			int tmp2 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(104)
			maxY = tmp2;
		}
		HX_STACK_LINE(107)
		bool tmp2 = (material == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(107)
		if ((tmp2)){
			HX_STACK_LINE(109)
			::nape::phys::Material tmp3 = ::nape::phys::Material_obj::__new(((Float)0.4),((Float)0.2),((Float)0.38),((Float)0.7),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(109)
			material = tmp3;
		}
		HX_STACK_LINE(112)
		::nape::phys::BodyType tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(112)
		{
			HX_STACK_LINE(112)
			::nape::phys::BodyType tmp4 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(112)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(112)
			if ((tmp5)){
				HX_STACK_LINE(112)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(112)
				::nape::phys::BodyType tmp6 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(112)
				::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = tmp6;
				HX_STACK_LINE(112)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(112)
			tmp3 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
		}
		HX_STACK_LINE(112)
		::nape::phys::Body tmp4 = ::nape::phys::Body_obj::__new(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(112)
		::nape::phys::Body walls = tmp4;		HX_STACK_VAR(walls,"walls");
		HX_STACK_LINE(115)
		{
			HX_STACK_LINE(115)
			::nape::shape::ShapeList tmp5 = walls->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(115)
			::nape::shape::ShapeList _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(115)
			Float tmp6 = (minX - thickness);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(115)
			Float tmp7 = minY;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(115)
			Float tmp8 = thickness;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(115)
			Float tmp9 = maxY;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(115)
			Float tmp10 = minY;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(115)
			Float tmp11 = ::Math_obj::abs(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(115)
			Float tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(115)
			::nape::shape::Polygon tmp13 = ::nape::shape::Polygon_obj::__new(::nape::shape::Polygon_obj::rect(tmp6,tmp7,tmp8,tmp12,null()),null(),null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(115)
			::nape::shape::Shape obj = tmp13;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(115)
			bool tmp14 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(115)
			if ((tmp14)){
				HX_STACK_LINE(115)
				::nape::shape::Shape tmp15 = obj;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(115)
				_this->push(tmp15);
			}
			else{
				HX_STACK_LINE(115)
				::nape::shape::Shape tmp15 = obj;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(115)
				_this->unshift(tmp15);
			}
		}
		HX_STACK_LINE(117)
		{
			HX_STACK_LINE(117)
			::nape::shape::ShapeList tmp5 = walls->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(117)
			::nape::shape::ShapeList _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(117)
			Float tmp6 = maxX;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(117)
			Float tmp7 = minY;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(117)
			Float tmp8 = thickness;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(117)
			Float tmp9 = maxY;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(117)
			Float tmp10 = minY;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(117)
			Float tmp11 = ::Math_obj::abs(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(117)
			Float tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(117)
			::nape::shape::Polygon tmp13 = ::nape::shape::Polygon_obj::__new(::nape::shape::Polygon_obj::rect(tmp6,tmp7,tmp8,tmp12,null()),null(),null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(117)
			::nape::shape::Shape obj = tmp13;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(117)
			bool tmp14 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(117)
			if ((tmp14)){
				HX_STACK_LINE(117)
				::nape::shape::Shape tmp15 = obj;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(117)
				_this->push(tmp15);
			}
			else{
				HX_STACK_LINE(117)
				::nape::shape::Shape tmp15 = obj;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(117)
				_this->unshift(tmp15);
			}
		}
		HX_STACK_LINE(119)
		{
			HX_STACK_LINE(119)
			::nape::shape::ShapeList tmp5 = walls->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(119)
			::nape::shape::ShapeList _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(119)
			Float tmp6 = minX;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(119)
			Float tmp7 = (minY - thickness);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(119)
			Float tmp8 = maxX;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(119)
			Float tmp9 = minX;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(119)
			Float tmp10 = ::Math_obj::abs(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(119)
			Float tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(119)
			Float tmp12 = thickness;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(119)
			::nape::shape::Polygon tmp13 = ::nape::shape::Polygon_obj::__new(::nape::shape::Polygon_obj::rect(tmp6,tmp7,tmp11,tmp12,null()),null(),null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(119)
			::nape::shape::Shape obj = tmp13;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(119)
			bool tmp14 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(119)
			if ((tmp14)){
				HX_STACK_LINE(119)
				::nape::shape::Shape tmp15 = obj;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(119)
				_this->push(tmp15);
			}
			else{
				HX_STACK_LINE(119)
				::nape::shape::Shape tmp15 = obj;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(119)
				_this->unshift(tmp15);
			}
		}
		HX_STACK_LINE(121)
		{
			HX_STACK_LINE(121)
			::nape::shape::ShapeList tmp5 = walls->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(121)
			::nape::shape::ShapeList _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(121)
			Float tmp6 = minX;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(121)
			Float tmp7 = maxY;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(121)
			Float tmp8 = maxX;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(121)
			Float tmp9 = minX;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(121)
			Float tmp10 = ::Math_obj::abs(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(121)
			Float tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(121)
			Float tmp12 = thickness;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(121)
			::nape::shape::Polygon tmp13 = ::nape::shape::Polygon_obj::__new(::nape::shape::Polygon_obj::rect(tmp6,tmp7,tmp11,tmp12,null()),null(),null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(121)
			::nape::shape::Shape obj = tmp13;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(121)
			bool tmp14 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(121)
			if ((tmp14)){
				HX_STACK_LINE(121)
				::nape::shape::Shape tmp15 = obj;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(121)
				_this->push(tmp15);
			}
			else{
				HX_STACK_LINE(121)
				::nape::shape::Shape tmp15 = obj;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(121)
				_this->unshift(tmp15);
			}
		}
		HX_STACK_LINE(123)
		{
			HX_STACK_LINE(123)
			::nape::space::Space tmp5 = ::flixel::addons::nape::FlxNapeSpace_obj::space;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(123)
			::nape::space::Space space = tmp5;		HX_STACK_VAR(space,"space");
			HX_STACK_LINE(123)
			{
				HX_STACK_LINE(123)
				walls->zpp_inner->immutable_midstep(HX_HCSTRING("Body::space","\x84","\xf7","\xbc","\x26"));
				HX_STACK_LINE(123)
				::zpp_nape::space::ZPP_Space tmp6 = walls->zpp_inner->space;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(123)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(123)
				::nape::space::Space tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(123)
				if ((tmp7)){
					HX_STACK_LINE(123)
					tmp8 = null();
				}
				else{
					HX_STACK_LINE(123)
					::zpp_nape::space::ZPP_Space tmp9 = walls->zpp_inner->space;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(123)
					tmp8 = tmp9->outer;
				}
				HX_STACK_LINE(123)
				::nape::space::Space tmp9 = space;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(123)
				bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(123)
				if ((tmp10)){
					HX_STACK_LINE(123)
					::zpp_nape::space::ZPP_Space tmp11 = walls->zpp_inner->space;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(123)
					bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(123)
					::nape::space::Space tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(123)
					if ((tmp12)){
						HX_STACK_LINE(123)
						tmp13 = null();
					}
					else{
						HX_STACK_LINE(123)
						::zpp_nape::space::ZPP_Space tmp14 = walls->zpp_inner->space;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(123)
						tmp13 = tmp14->outer;
					}
					HX_STACK_LINE(123)
					bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(123)
					if ((tmp14)){
						HX_STACK_LINE(123)
						::zpp_nape::space::ZPP_Component tmp15 = walls->zpp_inner->component;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(123)
						tmp15->woken = false;
					}
					HX_STACK_LINE(123)
					::zpp_nape::space::ZPP_Space tmp15 = walls->zpp_inner->space;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(123)
					bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(123)
					::nape::space::Space tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(123)
					if ((tmp16)){
						HX_STACK_LINE(123)
						tmp17 = null();
					}
					else{
						HX_STACK_LINE(123)
						::zpp_nape::space::ZPP_Space tmp18 = walls->zpp_inner->space;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(123)
						tmp17 = tmp18->outer;
					}
					HX_STACK_LINE(123)
					bool tmp18 = (tmp17 != null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(123)
					if ((tmp18)){
						HX_STACK_LINE(123)
						::zpp_nape::space::ZPP_Space tmp19 = walls->zpp_inner->space;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(123)
						bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(123)
						::nape::space::Space tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(123)
						if ((tmp20)){
							HX_STACK_LINE(123)
							tmp21 = null();
						}
						else{
							HX_STACK_LINE(123)
							::zpp_nape::space::ZPP_Space tmp22 = walls->zpp_inner->space;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(123)
							tmp21 = tmp22->outer;
						}
						HX_STACK_LINE(123)
						::nape::phys::BodyList tmp22 = tmp21->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(123)
						::nape::phys::Body tmp23 = walls;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(123)
						tmp22->remove(tmp23);
					}
					HX_STACK_LINE(123)
					bool tmp19 = (space != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(123)
					if ((tmp19)){
						HX_STACK_LINE(123)
						::nape::phys::BodyList tmp20 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(123)
						::nape::phys::BodyList _this = tmp20;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(123)
						bool tmp21 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(123)
						if ((tmp21)){
							HX_STACK_LINE(123)
							::nape::phys::Body tmp22 = walls;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(123)
							_this->push(tmp22);
						}
						else{
							HX_STACK_LINE(123)
							::nape::phys::Body tmp22 = walls;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(123)
							_this->unshift(tmp22);
						}
					}
				}
			}
			HX_STACK_LINE(123)
			::zpp_nape::space::ZPP_Space tmp6 = walls->zpp_inner->space;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(123)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(123)
			if ((tmp7)){
				HX_STACK_LINE(123)
				Dynamic();
			}
			else{
				HX_STACK_LINE(123)
				::zpp_nape::space::ZPP_Space tmp8 = walls->zpp_inner->space;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(123)
				tmp8->outer;
			}
		}
		HX_STACK_LINE(124)
		::nape::phys::Material tmp5 = material;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(124)
		walls->setShapeMaterials(tmp5);
		HX_STACK_LINE(126)
		::nape::phys::Body tmp6 = walls;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(126)
		return tmp6;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxNapeSpace_obj,createWalls,return )

bool FlxNapeSpace_obj::set_drawDebug( bool drawDebug){
	HX_STACK_FRAME("flixel.addons.nape.FlxNapeSpace","set_drawDebug",0x94fb79cd,"flixel.addons.nape.FlxNapeSpace.set_drawDebug","flixel/addons/nape/FlxNapeSpace.hx",130,0x92717a34)
	HX_STACK_ARG(drawDebug,"drawDebug")
	HX_STACK_LINE(153)
	bool tmp = ::flixel::addons::nape::FlxNapeSpace_obj::drawDebug = drawDebug;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(153)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxNapeSpace_obj,set_drawDebug,return )

Void FlxNapeSpace_obj::onStateSwitch( ){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeSpace","onStateSwitch",0x9253f041,"flixel.addons.nape.FlxNapeSpace.onStateSwitch","flixel/addons/nape/FlxNapeSpace.hx",157,0x92717a34)
		HX_STACK_LINE(158)
		::nape::space::Space tmp = ::flixel::addons::nape::FlxNapeSpace_obj::space;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(158)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(158)
		if ((tmp1)){
			HX_STACK_LINE(160)
			::nape::space::Space tmp2 = ::flixel::addons::nape::FlxNapeSpace_obj::space;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(160)
			tmp2->clear();
			HX_STACK_LINE(161)
			::flixel::addons::nape::FlxNapeSpace_obj::space = null();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxNapeSpace_obj,onStateSwitch,(void))


FlxNapeSpace_obj::FlxNapeSpace_obj()
{
}

Dynamic FlxNapeSpace_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxNapeSpace_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { outValue = space; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawDebug") ) { outValue = drawDebug; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createWalls") ) { outValue = createWalls_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_drawDebug") ) { outValue = set_drawDebug_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"onStateSwitch") ) { outValue = onStateSwitch_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"velocityIterations") ) { outValue = velocityIterations; return true;  }
		if (HX_FIELD_EQ(inName,"positionIterations") ) { outValue = positionIterations; return true;  }
	}
	return false;
}

bool FlxNapeSpace_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { space=ioValue.Cast< ::nape::space::Space >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawDebug") ) { if (inCallProp == hx::paccAlways)  ioValue = set_drawDebug(ioValue); else drawDebug=ioValue.Cast< bool >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"velocityIterations") ) { velocityIterations=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"positionIterations") ) { positionIterations=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::nape::space::Space*/ ,(void *) &FlxNapeSpace_obj::space,HX_HCSTRING("space","\xc6","\x8c","\x66","\x81")},
	{hx::fsInt,(void *) &FlxNapeSpace_obj::velocityIterations,HX_HCSTRING("velocityIterations","\xb3","\x9f","\x71","\xb7")},
	{hx::fsInt,(void *) &FlxNapeSpace_obj::positionIterations,HX_HCSTRING("positionIterations","\x3f","\x65","\x42","\x76")},
	{hx::fsBool,(void *) &FlxNapeSpace_obj::drawDebug,HX_HCSTRING("drawDebug","\xaf","\x87","\x2a","\x9f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxNapeSpace_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxNapeSpace_obj::space,"space");
	HX_MARK_MEMBER_NAME(FlxNapeSpace_obj::velocityIterations,"velocityIterations");
	HX_MARK_MEMBER_NAME(FlxNapeSpace_obj::positionIterations,"positionIterations");
	HX_MARK_MEMBER_NAME(FlxNapeSpace_obj::drawDebug,"drawDebug");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxNapeSpace_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxNapeSpace_obj::space,"space");
	HX_VISIT_MEMBER_NAME(FlxNapeSpace_obj::velocityIterations,"velocityIterations");
	HX_VISIT_MEMBER_NAME(FlxNapeSpace_obj::positionIterations,"positionIterations");
	HX_VISIT_MEMBER_NAME(FlxNapeSpace_obj::drawDebug,"drawDebug");
};

#endif

hx::Class FlxNapeSpace_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"),
	HX_HCSTRING("velocityIterations","\xb3","\x9f","\x71","\xb7"),
	HX_HCSTRING("positionIterations","\x3f","\x65","\x42","\x76"),
	HX_HCSTRING("drawDebug","\xaf","\x87","\x2a","\x9f"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("createWalls","\x8d","\x43","\x9a","\xee"),
	HX_HCSTRING("set_drawDebug","\x92","\x3d","\x94","\xa5"),
	HX_HCSTRING("onStateSwitch","\x06","\xb4","\xec","\xa2"),
	::String(null()) };

void FlxNapeSpace_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.nape.FlxNapeSpace","\x69","\x7b","\x4c","\x06");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxNapeSpace_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxNapeSpace_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxNapeSpace_obj >;
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

void FlxNapeSpace_obj::__boot()
{
	velocityIterations= (int)10;
	positionIterations= (int)10;
}

} // end namespace flixel
} // end namespace addons
} // end namespace nape
