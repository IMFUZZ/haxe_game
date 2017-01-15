#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_nape_FlxNapeSpace
#include <flixel/addons/nape/FlxNapeSpace.h>
#endif
#ifndef INCLUDED_flixel_addons_nape_FlxNapeSprite
#include <flixel/addons/nape/FlxNapeSprite.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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
#ifndef INCLUDED_nape_shape_Circle
#include <nape/shape/Circle.h>
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

Void FlxNapeSprite_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic,hx::Null< bool >  __o_CreateRectangularBody,hx::Null< bool >  __o_EnablePhysics)
{
HX_STACK_FRAME("flixel.addons.nape.FlxNapeSprite","new",0x927785f4,"flixel.addons.nape.FlxNapeSprite.new","flixel/addons/nape/FlxNapeSprite.hx",22,0x811bdfdd)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(SimpleGraphic,"SimpleGraphic")
HX_STACK_ARG(__o_CreateRectangularBody,"CreateRectangularBody")
HX_STACK_ARG(__o_EnablePhysics,"EnablePhysics")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
bool CreateRectangularBody = __o_CreateRectangularBody.Default(true);
bool EnablePhysics = __o_EnablePhysics.Default(true);
{
	HX_STACK_LINE(44)
	this->_angularDrag = ((Float)1);
	HX_STACK_LINE(39)
	this->_linearDrag = ((Float)1);
	HX_STACK_LINE(33)
	this->physicsEnabled = false;
	HX_STACK_LINE(61)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	Dynamic tmp2 = SimpleGraphic;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(61)
	super::__construct(tmp,tmp1,tmp2);
	HX_STACK_LINE(63)
	bool tmp3 = CreateRectangularBody;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(63)
	if ((tmp3)){
		HX_STACK_LINE(65)
		this->createRectangularBody(null(),null(),null());
	}
	HX_STACK_LINE(67)
	{
		HX_STACK_LINE(67)
		::nape::phys::Body tmp4 = this->body;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(67)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(67)
		if ((tmp5)){
			HX_STACK_LINE(67)
			::nape::phys::Body tmp6 = this->body;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(67)
			::nape::phys::Body _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(67)
			bool tmp7 = EnablePhysics;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(67)
			::nape::space::Space tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(67)
			if ((tmp7)){
				HX_STACK_LINE(67)
				tmp8 = ::flixel::addons::nape::FlxNapeSpace_obj::space;
			}
			else{
				HX_STACK_LINE(67)
				tmp8 = null();
			}
			HX_STACK_LINE(67)
			::nape::space::Space space = tmp8;		HX_STACK_VAR(space,"space");
			HX_STACK_LINE(67)
			{
				HX_STACK_LINE(67)
				_this->zpp_inner->immutable_midstep(HX_HCSTRING("Body::space","\x84","\xf7","\xbc","\x26"));
				HX_STACK_LINE(67)
				::zpp_nape::space::ZPP_Space tmp9 = _this->zpp_inner->space;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(67)
				bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(67)
				::nape::space::Space tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(67)
				if ((tmp10)){
					HX_STACK_LINE(67)
					tmp11 = null();
				}
				else{
					HX_STACK_LINE(67)
					::zpp_nape::space::ZPP_Space tmp12 = _this->zpp_inner->space;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(67)
					tmp11 = tmp12->outer;
				}
				HX_STACK_LINE(67)
				::nape::space::Space tmp12 = space;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(67)
				bool tmp13 = (tmp11 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(67)
				if ((tmp13)){
					HX_STACK_LINE(67)
					::zpp_nape::space::ZPP_Space tmp14 = _this->zpp_inner->space;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(67)
					bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(67)
					::nape::space::Space tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(67)
					if ((tmp15)){
						HX_STACK_LINE(67)
						tmp16 = null();
					}
					else{
						HX_STACK_LINE(67)
						::zpp_nape::space::ZPP_Space tmp17 = _this->zpp_inner->space;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(67)
						tmp16 = tmp17->outer;
					}
					HX_STACK_LINE(67)
					bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(67)
					if ((tmp17)){
						HX_STACK_LINE(67)
						::zpp_nape::space::ZPP_Component tmp18 = _this->zpp_inner->component;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(67)
						tmp18->woken = false;
					}
					HX_STACK_LINE(67)
					::zpp_nape::space::ZPP_Space tmp18 = _this->zpp_inner->space;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(67)
					bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(67)
					::nape::space::Space tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(67)
					if ((tmp19)){
						HX_STACK_LINE(67)
						tmp20 = null();
					}
					else{
						HX_STACK_LINE(67)
						::zpp_nape::space::ZPP_Space tmp21 = _this->zpp_inner->space;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(67)
						tmp20 = tmp21->outer;
					}
					HX_STACK_LINE(67)
					bool tmp21 = (tmp20 != null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(67)
					if ((tmp21)){
						HX_STACK_LINE(67)
						::zpp_nape::space::ZPP_Space tmp22 = _this->zpp_inner->space;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(67)
						bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(67)
						::nape::space::Space tmp24;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(67)
						if ((tmp23)){
							HX_STACK_LINE(67)
							tmp24 = null();
						}
						else{
							HX_STACK_LINE(67)
							::zpp_nape::space::ZPP_Space tmp25 = _this->zpp_inner->space;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(67)
							tmp24 = tmp25->outer;
						}
						HX_STACK_LINE(67)
						::nape::phys::BodyList tmp25 = tmp24->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(67)
						::nape::phys::Body tmp26 = _this;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(67)
						tmp25->remove(tmp26);
					}
					HX_STACK_LINE(67)
					bool tmp22 = (space != null());		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(67)
					if ((tmp22)){
						HX_STACK_LINE(67)
						::nape::phys::BodyList tmp23 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(67)
						::nape::phys::BodyList _this1 = tmp23;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(67)
						bool tmp24 = _this1->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(67)
						if ((tmp24)){
							HX_STACK_LINE(67)
							::nape::phys::Body tmp25 = _this;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(67)
							_this1->push(tmp25);
						}
						else{
							HX_STACK_LINE(67)
							::nape::phys::Body tmp25 = _this;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(67)
							_this1->unshift(tmp25);
						}
					}
				}
			}
			HX_STACK_LINE(67)
			::zpp_nape::space::ZPP_Space tmp9 = _this->zpp_inner->space;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(67)
			bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(67)
			if ((tmp10)){
				HX_STACK_LINE(67)
				Dynamic();
			}
			else{
				HX_STACK_LINE(67)
				::zpp_nape::space::ZPP_Space tmp11 = _this->zpp_inner->space;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(67)
				tmp11->outer;
			}
		}
		HX_STACK_LINE(67)
		this->physicsEnabled = EnablePhysics;
	}
}
;
	return null();
}

//FlxNapeSprite_obj::~FlxNapeSprite_obj() { }

Dynamic FlxNapeSprite_obj::__CreateEmpty() { return  new FlxNapeSprite_obj; }
hx::ObjectPtr< FlxNapeSprite_obj > FlxNapeSprite_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic,hx::Null< bool >  __o_CreateRectangularBody,hx::Null< bool >  __o_EnablePhysics)
{  hx::ObjectPtr< FlxNapeSprite_obj > _result_ = new FlxNapeSprite_obj();
	_result_->__construct(__o_X,__o_Y,SimpleGraphic,__o_CreateRectangularBody,__o_EnablePhysics);
	return _result_;}

Dynamic FlxNapeSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxNapeSprite_obj > _result_ = new FlxNapeSprite_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void FlxNapeSprite_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeSprite","destroy",0xc2763c8e,"flixel.addons.nape.FlxNapeSprite.destroy","flixel/addons/nape/FlxNapeSprite.hx",78,0x811bdfdd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(79)
		this->destroyPhysObjects();
		HX_STACK_LINE(81)
		this->super::destroy();
	}
return null();
}


Void FlxNapeSprite_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeSprite","update",0xb23484f5,"flixel.addons.nape.FlxNapeSprite.update","flixel/addons/nape/FlxNapeSprite.hx",88,0x811bdfdd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(89)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		this->super::update(tmp);
		HX_STACK_LINE(91)
		::nape::phys::Body tmp1 = this->body;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(91)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(91)
		if ((tmp2)){
			HX_STACK_LINE(91)
			tmp3 = this->moves;
		}
		else{
			HX_STACK_LINE(91)
			tmp3 = false;
		}
		HX_STACK_LINE(91)
		if ((tmp3)){
			HX_STACK_LINE(93)
			this->updatePhysObjects();
		}
	}
return null();
}


Void FlxNapeSprite_obj::kill( ){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeSprite","kill",0x94250b8a,"flixel.addons.nape.FlxNapeSprite.kill","flixel/addons/nape/FlxNapeSprite.hx",102,0x811bdfdd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(103)
		this->super::kill();
		HX_STACK_LINE(105)
		::nape::phys::Body tmp = this->body;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(105)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(105)
		if ((tmp1)){
			HX_STACK_LINE(107)
			::nape::phys::Body tmp2 = this->body;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(107)
			::nape::phys::Body _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(107)
			{
				HX_STACK_LINE(107)
				_this->zpp_inner->immutable_midstep(HX_HCSTRING("Body::space","\x84","\xf7","\xbc","\x26"));
				HX_STACK_LINE(107)
				::zpp_nape::space::ZPP_Space tmp3 = _this->zpp_inner->space;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(107)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(107)
				::nape::space::Space tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(107)
				if ((tmp4)){
					HX_STACK_LINE(107)
					tmp5 = null();
				}
				else{
					HX_STACK_LINE(107)
					::zpp_nape::space::ZPP_Space tmp6 = _this->zpp_inner->space;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(107)
					tmp5 = tmp6->outer;
				}
				HX_STACK_LINE(107)
				bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(107)
				if ((tmp6)){
					HX_STACK_LINE(107)
					::zpp_nape::space::ZPP_Space tmp7 = _this->zpp_inner->space;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(107)
					bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(107)
					::nape::space::Space tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(107)
					if ((tmp8)){
						HX_STACK_LINE(107)
						tmp9 = null();
					}
					else{
						HX_STACK_LINE(107)
						::zpp_nape::space::ZPP_Space tmp10 = _this->zpp_inner->space;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(107)
						tmp9 = tmp10->outer;
					}
					HX_STACK_LINE(107)
					bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(107)
					if ((tmp10)){
						HX_STACK_LINE(107)
						::zpp_nape::space::ZPP_Component tmp11 = _this->zpp_inner->component;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(107)
						tmp11->woken = false;
					}
					HX_STACK_LINE(107)
					::zpp_nape::space::ZPP_Space tmp11 = _this->zpp_inner->space;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(107)
					bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(107)
					::nape::space::Space tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(107)
					if ((tmp12)){
						HX_STACK_LINE(107)
						tmp13 = null();
					}
					else{
						HX_STACK_LINE(107)
						::zpp_nape::space::ZPP_Space tmp14 = _this->zpp_inner->space;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(107)
						tmp13 = tmp14->outer;
					}
					HX_STACK_LINE(107)
					bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(107)
					if ((tmp14)){
						HX_STACK_LINE(107)
						::zpp_nape::space::ZPP_Space tmp15 = _this->zpp_inner->space;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(107)
						bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(107)
						::nape::space::Space tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(107)
						if ((tmp16)){
							HX_STACK_LINE(107)
							tmp17 = null();
						}
						else{
							HX_STACK_LINE(107)
							::zpp_nape::space::ZPP_Space tmp18 = _this->zpp_inner->space;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(107)
							tmp17 = tmp18->outer;
						}
						HX_STACK_LINE(107)
						::nape::phys::BodyList tmp18 = tmp17->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(107)
						::nape::phys::Body tmp19 = _this;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(107)
						tmp18->remove(tmp19);
					}
					HX_STACK_LINE(107)
					bool tmp15 = false;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(107)
					if ((tmp15)){
						HX_STACK_LINE(107)
						::zpp_nape::space::ZPP_Space tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(107)
						::nape::phys::BodyList _this1 = tmp16->wrap_bodies;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(107)
						bool tmp17 = _this1->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(107)
						if ((tmp17)){
							HX_STACK_LINE(107)
							::nape::phys::Body tmp18 = _this;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(107)
							_this1->push(tmp18);
						}
						else{
							HX_STACK_LINE(107)
							::nape::phys::Body tmp18 = _this;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(107)
							_this1->unshift(tmp18);
						}
					}
				}
			}
			HX_STACK_LINE(107)
			::zpp_nape::space::ZPP_Space tmp3 = _this->zpp_inner->space;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(107)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(107)
			if ((tmp4)){
				HX_STACK_LINE(107)
				Dynamic();
			}
			else{
				HX_STACK_LINE(107)
				::zpp_nape::space::ZPP_Space tmp5 = _this->zpp_inner->space;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(107)
				tmp5->outer;
			}
		}
	}
return null();
}


Void FlxNapeSprite_obj::revive( ){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeSprite","revive",0x35a5f941,"flixel.addons.nape.FlxNapeSprite.revive","flixel/addons/nape/FlxNapeSprite.hx",116,0x811bdfdd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(117)
		this->super::revive();
		HX_STACK_LINE(119)
		::nape::phys::Body tmp = this->body;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(119)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(119)
		if ((tmp1)){
			HX_STACK_LINE(121)
			::nape::phys::Body tmp2 = this->body;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(121)
			::nape::phys::Body _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(121)
			::nape::space::Space tmp3 = ::flixel::addons::nape::FlxNapeSpace_obj::space;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(121)
			::nape::space::Space space = tmp3;		HX_STACK_VAR(space,"space");
			HX_STACK_LINE(121)
			{
				HX_STACK_LINE(121)
				_this->zpp_inner->immutable_midstep(HX_HCSTRING("Body::space","\x84","\xf7","\xbc","\x26"));
				HX_STACK_LINE(121)
				::zpp_nape::space::ZPP_Space tmp4 = _this->zpp_inner->space;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(121)
				bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(121)
				::nape::space::Space tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(121)
				if ((tmp5)){
					HX_STACK_LINE(121)
					tmp6 = null();
				}
				else{
					HX_STACK_LINE(121)
					::zpp_nape::space::ZPP_Space tmp7 = _this->zpp_inner->space;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(121)
					tmp6 = tmp7->outer;
				}
				HX_STACK_LINE(121)
				::nape::space::Space tmp7 = space;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(121)
				bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(121)
				if ((tmp8)){
					HX_STACK_LINE(121)
					::zpp_nape::space::ZPP_Space tmp9 = _this->zpp_inner->space;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(121)
					bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(121)
					::nape::space::Space tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(121)
					if ((tmp10)){
						HX_STACK_LINE(121)
						tmp11 = null();
					}
					else{
						HX_STACK_LINE(121)
						::zpp_nape::space::ZPP_Space tmp12 = _this->zpp_inner->space;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(121)
						tmp11 = tmp12->outer;
					}
					HX_STACK_LINE(121)
					bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(121)
					if ((tmp12)){
						HX_STACK_LINE(121)
						::zpp_nape::space::ZPP_Component tmp13 = _this->zpp_inner->component;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(121)
						tmp13->woken = false;
					}
					HX_STACK_LINE(121)
					::zpp_nape::space::ZPP_Space tmp13 = _this->zpp_inner->space;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(121)
					bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(121)
					::nape::space::Space tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(121)
					if ((tmp14)){
						HX_STACK_LINE(121)
						tmp15 = null();
					}
					else{
						HX_STACK_LINE(121)
						::zpp_nape::space::ZPP_Space tmp16 = _this->zpp_inner->space;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(121)
						tmp15 = tmp16->outer;
					}
					HX_STACK_LINE(121)
					bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(121)
					if ((tmp16)){
						HX_STACK_LINE(121)
						::zpp_nape::space::ZPP_Space tmp17 = _this->zpp_inner->space;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(121)
						bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(121)
						::nape::space::Space tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(121)
						if ((tmp18)){
							HX_STACK_LINE(121)
							tmp19 = null();
						}
						else{
							HX_STACK_LINE(121)
							::zpp_nape::space::ZPP_Space tmp20 = _this->zpp_inner->space;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(121)
							tmp19 = tmp20->outer;
						}
						HX_STACK_LINE(121)
						::nape::phys::BodyList tmp20 = tmp19->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(121)
						::nape::phys::Body tmp21 = _this;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(121)
						tmp20->remove(tmp21);
					}
					HX_STACK_LINE(121)
					bool tmp17 = (space != null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(121)
					if ((tmp17)){
						HX_STACK_LINE(121)
						::nape::phys::BodyList tmp18 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(121)
						::nape::phys::BodyList _this1 = tmp18;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(121)
						bool tmp19 = _this1->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(121)
						if ((tmp19)){
							HX_STACK_LINE(121)
							::nape::phys::Body tmp20 = _this;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(121)
							_this1->push(tmp20);
						}
						else{
							HX_STACK_LINE(121)
							::nape::phys::Body tmp20 = _this;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(121)
							_this1->unshift(tmp20);
						}
					}
				}
			}
			HX_STACK_LINE(121)
			::zpp_nape::space::ZPP_Space tmp4 = _this->zpp_inner->space;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(121)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(121)
			if ((tmp5)){
				HX_STACK_LINE(121)
				Dynamic();
			}
			else{
				HX_STACK_LINE(121)
				::zpp_nape::space::ZPP_Space tmp6 = _this->zpp_inner->space;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(121)
				tmp6->outer;
			}
		}
	}
return null();
}


Void FlxNapeSprite_obj::addPremadeBody( ::nape::phys::Body NewBody){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeSprite","addPremadeBody",0x42b17685,"flixel.addons.nape.FlxNapeSprite.addPremadeBody","flixel/addons/nape/FlxNapeSprite.hx",132,0x811bdfdd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(NewBody,"NewBody")
		HX_STACK_LINE(133)
		::nape::phys::Body tmp = this->body;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(133)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(133)
		if ((tmp1)){
			HX_STACK_LINE(135)
			this->destroyPhysObjects();
		}
		HX_STACK_LINE(138)
		{
			HX_STACK_LINE(138)
			::nape::geom::Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(138)
			{
				HX_STACK_LINE(138)
				::nape::geom::Vec2 tmp3 = NewBody->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(138)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(138)
				if ((tmp4)){
					HX_STACK_LINE(138)
					NewBody->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(138)
				tmp2 = NewBody->zpp_inner->wrap_pos;
			}
			HX_STACK_LINE(138)
			::nape::geom::Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(138)
			Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(138)
			Float x = tmp3;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(138)
			{
				HX_STACK_LINE(138)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(138)
				{
					HX_STACK_LINE(138)
					{
						HX_STACK_LINE(138)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(138)
						bool tmp5 = (_this1->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(138)
						if ((tmp5)){
							HX_STACK_LINE(138)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(138)
					tmp4 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(138)
				Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(138)
				bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(138)
				if ((tmp6)){
					HX_STACK_LINE(138)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(138)
					{
						HX_STACK_LINE(138)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(138)
						bool tmp7 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(138)
						if ((tmp7)){
							HX_STACK_LINE(138)
							::zpp_nape::geom::ZPP_Vec2 tmp8 = _this1;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(138)
							_this1->_invalidate(tmp8);
						}
					}
				}
			}
			HX_STACK_LINE(138)
			{
				HX_STACK_LINE(138)
				{
					HX_STACK_LINE(138)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(138)
					bool tmp4 = (_this1->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(138)
					if ((tmp4)){
						HX_STACK_LINE(138)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(138)
				_this->zpp_inner->x;
			}
		}
		HX_STACK_LINE(139)
		{
			HX_STACK_LINE(139)
			::nape::geom::Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(139)
			{
				HX_STACK_LINE(139)
				::nape::geom::Vec2 tmp3 = NewBody->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(139)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(139)
				if ((tmp4)){
					HX_STACK_LINE(139)
					NewBody->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(139)
				tmp2 = NewBody->zpp_inner->wrap_pos;
			}
			HX_STACK_LINE(139)
			::nape::geom::Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(139)
			Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(139)
			Float y = tmp3;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(139)
			{
				HX_STACK_LINE(139)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(139)
				{
					HX_STACK_LINE(139)
					{
						HX_STACK_LINE(139)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(139)
						bool tmp5 = (_this1->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(139)
						if ((tmp5)){
							HX_STACK_LINE(139)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(139)
					tmp4 = _this->zpp_inner->y;
				}
				HX_STACK_LINE(139)
				Float tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(139)
				bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(139)
				if ((tmp6)){
					HX_STACK_LINE(139)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(139)
					{
						HX_STACK_LINE(139)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(139)
						bool tmp7 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(139)
						if ((tmp7)){
							HX_STACK_LINE(139)
							::zpp_nape::geom::ZPP_Vec2 tmp8 = _this1;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(139)
							_this1->_invalidate(tmp8);
						}
					}
				}
			}
			HX_STACK_LINE(139)
			{
				HX_STACK_LINE(139)
				{
					HX_STACK_LINE(139)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(139)
					bool tmp4 = (_this1->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(139)
					if ((tmp4)){
						HX_STACK_LINE(139)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(139)
				_this->zpp_inner->y;
			}
		}
		HX_STACK_LINE(140)
		::nape::phys::Body tmp2 = NewBody;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(140)
		this->setBody(tmp2);
		HX_STACK_LINE(141)
		this->setBodyMaterial(null(),null(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxNapeSprite_obj,addPremadeBody,(void))

Void FlxNapeSprite_obj::createCircularBody( hx::Null< Float >  __o_Radius,::nape::phys::BodyType _Type){
Float Radius = __o_Radius.Default(16);
	HX_STACK_FRAME("flixel.addons.nape.FlxNapeSprite","createCircularBody",0x406956a9,"flixel.addons.nape.FlxNapeSprite.createCircularBody","flixel/addons/nape/FlxNapeSprite.hx",151,0x811bdfdd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Radius,"Radius")
	HX_STACK_ARG(_Type,"_Type")
{
		HX_STACK_LINE(152)
		::nape::phys::Body tmp = this->body;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(152)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(152)
		if ((tmp1)){
			HX_STACK_LINE(154)
			this->destroyPhysObjects();
		}
		HX_STACK_LINE(157)
		this->centerOffsets(false);
		HX_STACK_LINE(158)
		bool tmp2 = (_Type != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(158)
		::nape::phys::BodyType tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(158)
		if ((tmp2)){
			HX_STACK_LINE(158)
			tmp3 = _Type;
		}
		else{
			HX_STACK_LINE(158)
			::nape::phys::BodyType tmp4 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(158)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(158)
			if ((tmp5)){
				HX_STACK_LINE(158)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(158)
				::nape::phys::BodyType tmp6 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(158)
				::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = tmp6;
				HX_STACK_LINE(158)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(158)
			tmp3 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
		}
		HX_STACK_LINE(158)
		::nape::geom::Vec2 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(158)
		{
			HX_STACK_LINE(158)
			Float tmp5 = this->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(158)
			Float x = tmp5;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(158)
			Float tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(158)
			Float y = tmp6;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(158)
			{
				HX_STACK_LINE(158)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(158)
				{
					HX_STACK_LINE(158)
					::nape::geom::Vec2 tmp7 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(158)
					bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(158)
					if ((tmp8)){
						HX_STACK_LINE(158)
						::nape::geom::Vec2 tmp9 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(158)
						ret = tmp9;
					}
					else{
						HX_STACK_LINE(158)
						::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(158)
						ret = tmp9;
						HX_STACK_LINE(158)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(158)
						ret->zpp_pool = null();
					}
				}
				HX_STACK_LINE(158)
				bool tmp7 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(158)
				if ((tmp7)){
					HX_STACK_LINE(158)
					::zpp_nape::geom::ZPP_Vec2 tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(158)
					{
						HX_STACK_LINE(158)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(158)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(158)
						{
							HX_STACK_LINE(158)
							::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(158)
							bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(158)
							if ((tmp10)){
								HX_STACK_LINE(158)
								::zpp_nape::geom::ZPP_Vec2 tmp11 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(158)
								ret1 = tmp11;
							}
							else{
								HX_STACK_LINE(158)
								::zpp_nape::geom::ZPP_Vec2 tmp11 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(158)
								ret1 = tmp11;
								HX_STACK_LINE(158)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(158)
								ret1->next = null();
							}
							HX_STACK_LINE(158)
							ret1->weak = false;
						}
						HX_STACK_LINE(158)
						ret1->_immutable = immutable;
						HX_STACK_LINE(158)
						{
							HX_STACK_LINE(158)
							ret1->x = x;
							HX_STACK_LINE(158)
							ret1->y = y;
							HX_STACK_LINE(158)
							{
							}
						}
						HX_STACK_LINE(158)
						tmp8 = ret1;
					}
					HX_STACK_LINE(158)
					ret->zpp_inner = tmp8;
					HX_STACK_LINE(158)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(158)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(158)
					{
						HX_STACK_LINE(158)
						{
							HX_STACK_LINE(158)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(158)
							bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(158)
							if ((tmp9)){
								HX_STACK_LINE(158)
								_this->_validate();
							}
						}
						HX_STACK_LINE(158)
						tmp8 = ret->zpp_inner->x;
					}
					HX_STACK_LINE(158)
					Float tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(158)
					bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(158)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(158)
					if ((tmp10)){
						HX_STACK_LINE(158)
						Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(158)
						{
							HX_STACK_LINE(158)
							{
								HX_STACK_LINE(158)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(158)
								bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(158)
								bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(158)
								bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(158)
								if ((tmp15)){
									HX_STACK_LINE(158)
									_this->_validate();
								}
							}
							HX_STACK_LINE(158)
							Float tmp13 = ret->zpp_inner->y;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(158)
							tmp12 = tmp13;
						}
						HX_STACK_LINE(158)
						Float tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(158)
						tmp11 = (tmp12 == tmp13);
					}
					else{
						HX_STACK_LINE(158)
						tmp11 = false;
					}
					HX_STACK_LINE(158)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(158)
					if ((tmp12)){
						HX_STACK_LINE(158)
						{
							HX_STACK_LINE(158)
							ret->zpp_inner->x = x;
							HX_STACK_LINE(158)
							ret->zpp_inner->y = y;
							HX_STACK_LINE(158)
							{
							}
						}
						HX_STACK_LINE(158)
						{
							HX_STACK_LINE(158)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(158)
							bool tmp13 = (_this->_invalidate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(158)
							if ((tmp13)){
								HX_STACK_LINE(158)
								::zpp_nape::geom::ZPP_Vec2 tmp14 = _this;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(158)
								_this->_invalidate(tmp14);
							}
						}
					}
					HX_STACK_LINE(158)
					ret;
				}
				HX_STACK_LINE(158)
				ret->zpp_inner->weak = true;
				HX_STACK_LINE(158)
				tmp4 = ret;
			}
		}
		HX_STACK_LINE(158)
		::nape::phys::Body tmp5 = ::nape::phys::Body_obj::__new(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(158)
		this->setBody(tmp5);
		HX_STACK_LINE(159)
		{
			HX_STACK_LINE(159)
			::nape::phys::Body tmp6 = this->body;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(159)
			::nape::shape::ShapeList tmp7 = tmp6->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(159)
			::nape::shape::ShapeList _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(159)
			::nape::shape::Circle tmp8 = ::nape::shape::Circle_obj::__new(Radius,null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(159)
			::nape::shape::Shape obj = tmp8;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(159)
			bool tmp9 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(159)
			if ((tmp9)){
				HX_STACK_LINE(159)
				::nape::shape::Shape tmp10 = obj;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(159)
				_this->push(tmp10);
			}
			else{
				HX_STACK_LINE(159)
				::nape::shape::Shape tmp10 = obj;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(159)
				_this->unshift(tmp10);
			}
		}
		HX_STACK_LINE(161)
		this->setBodyMaterial(null(),null(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxNapeSprite_obj,createCircularBody,(void))

Void FlxNapeSprite_obj::createRectangularBody( hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height,::nape::phys::BodyType _Type){
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
	HX_STACK_FRAME("flixel.addons.nape.FlxNapeSprite","createRectangularBody",0x984e32f8,"flixel.addons.nape.FlxNapeSprite.createRectangularBody","flixel/addons/nape/FlxNapeSprite.hx",174,0x811bdfdd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(_Type,"_Type")
{
		HX_STACK_LINE(175)
		::nape::phys::Body tmp = this->body;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(175)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(175)
		if ((tmp1)){
			HX_STACK_LINE(177)
			this->destroyPhysObjects();
		}
		HX_STACK_LINE(180)
		bool tmp2 = (Width <= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(180)
		if ((tmp2)){
			HX_STACK_LINE(182)
			int tmp3 = this->frameWidth;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(182)
			Width = tmp3;
		}
		HX_STACK_LINE(184)
		bool tmp3 = (Height <= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(184)
		if ((tmp3)){
			HX_STACK_LINE(186)
			int tmp4 = this->frameHeight;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(186)
			Height = tmp4;
		}
		HX_STACK_LINE(189)
		this->centerOffsets(false);
		HX_STACK_LINE(190)
		bool tmp4 = (_Type != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(190)
		::nape::phys::BodyType tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(190)
		if ((tmp4)){
			HX_STACK_LINE(190)
			tmp5 = _Type;
		}
		else{
			HX_STACK_LINE(190)
			::nape::phys::BodyType tmp6 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(190)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(190)
			if ((tmp7)){
				HX_STACK_LINE(190)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(190)
				::nape::phys::BodyType tmp8 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(190)
				::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = tmp8;
				HX_STACK_LINE(190)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(190)
			tmp5 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
		}
		HX_STACK_LINE(190)
		::nape::geom::Vec2 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(190)
		{
			HX_STACK_LINE(190)
			Float tmp7 = this->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(190)
			Float x = tmp7;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(190)
			Float tmp8 = this->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(190)
			Float y = tmp8;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(190)
			{
				HX_STACK_LINE(190)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(190)
				{
					HX_STACK_LINE(190)
					::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(190)
					bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(190)
					if ((tmp10)){
						HX_STACK_LINE(190)
						::nape::geom::Vec2 tmp11 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(190)
						ret = tmp11;
					}
					else{
						HX_STACK_LINE(190)
						::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(190)
						ret = tmp11;
						HX_STACK_LINE(190)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(190)
						ret->zpp_pool = null();
					}
				}
				HX_STACK_LINE(190)
				bool tmp9 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(190)
				if ((tmp9)){
					HX_STACK_LINE(190)
					::zpp_nape::geom::ZPP_Vec2 tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(190)
					{
						HX_STACK_LINE(190)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(190)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(190)
						{
							HX_STACK_LINE(190)
							::zpp_nape::geom::ZPP_Vec2 tmp11 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(190)
							bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(190)
							if ((tmp12)){
								HX_STACK_LINE(190)
								::zpp_nape::geom::ZPP_Vec2 tmp13 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(190)
								ret1 = tmp13;
							}
							else{
								HX_STACK_LINE(190)
								::zpp_nape::geom::ZPP_Vec2 tmp13 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(190)
								ret1 = tmp13;
								HX_STACK_LINE(190)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(190)
								ret1->next = null();
							}
							HX_STACK_LINE(190)
							ret1->weak = false;
						}
						HX_STACK_LINE(190)
						ret1->_immutable = immutable;
						HX_STACK_LINE(190)
						{
							HX_STACK_LINE(190)
							ret1->x = x;
							HX_STACK_LINE(190)
							ret1->y = y;
							HX_STACK_LINE(190)
							{
							}
						}
						HX_STACK_LINE(190)
						tmp10 = ret1;
					}
					HX_STACK_LINE(190)
					ret->zpp_inner = tmp10;
					HX_STACK_LINE(190)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(190)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(190)
					{
						HX_STACK_LINE(190)
						{
							HX_STACK_LINE(190)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(190)
							bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(190)
							if ((tmp11)){
								HX_STACK_LINE(190)
								_this->_validate();
							}
						}
						HX_STACK_LINE(190)
						tmp10 = ret->zpp_inner->x;
					}
					HX_STACK_LINE(190)
					Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(190)
					bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(190)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(190)
					if ((tmp12)){
						HX_STACK_LINE(190)
						Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(190)
						{
							HX_STACK_LINE(190)
							{
								HX_STACK_LINE(190)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(190)
								bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(190)
								bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(190)
								bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(190)
								if ((tmp17)){
									HX_STACK_LINE(190)
									_this->_validate();
								}
							}
							HX_STACK_LINE(190)
							Float tmp15 = ret->zpp_inner->y;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(190)
							tmp14 = tmp15;
						}
						HX_STACK_LINE(190)
						Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(190)
						tmp13 = (tmp14 == tmp15);
					}
					else{
						HX_STACK_LINE(190)
						tmp13 = false;
					}
					HX_STACK_LINE(190)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(190)
					if ((tmp14)){
						HX_STACK_LINE(190)
						{
							HX_STACK_LINE(190)
							ret->zpp_inner->x = x;
							HX_STACK_LINE(190)
							ret->zpp_inner->y = y;
							HX_STACK_LINE(190)
							{
							}
						}
						HX_STACK_LINE(190)
						{
							HX_STACK_LINE(190)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(190)
							bool tmp15 = (_this->_invalidate != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(190)
							if ((tmp15)){
								HX_STACK_LINE(190)
								::zpp_nape::geom::ZPP_Vec2 tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(190)
								_this->_invalidate(tmp16);
							}
						}
					}
					HX_STACK_LINE(190)
					ret;
				}
				HX_STACK_LINE(190)
				ret->zpp_inner->weak = true;
				HX_STACK_LINE(190)
				tmp6 = ret;
			}
		}
		HX_STACK_LINE(190)
		::nape::phys::Body tmp7 = ::nape::phys::Body_obj::__new(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(190)
		this->setBody(tmp7);
		HX_STACK_LINE(191)
		{
			HX_STACK_LINE(191)
			::nape::phys::Body tmp8 = this->body;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(191)
			::nape::shape::ShapeList tmp9 = tmp8->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(191)
			::nape::shape::ShapeList _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(191)
			Float tmp10 = Width;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(191)
			Float tmp11 = Height;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(191)
			::nape::shape::Polygon tmp12 = ::nape::shape::Polygon_obj::__new(::nape::shape::Polygon_obj::box(tmp10,tmp11,null()),null(),null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(191)
			::nape::shape::Shape obj = tmp12;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(191)
			bool tmp13 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(191)
			if ((tmp13)){
				HX_STACK_LINE(191)
				::nape::shape::Shape tmp14 = obj;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(191)
				_this->push(tmp14);
			}
			else{
				HX_STACK_LINE(191)
				::nape::shape::Shape tmp14 = obj;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(191)
				_this->unshift(tmp14);
			}
		}
		HX_STACK_LINE(193)
		this->setBodyMaterial(null(),null(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxNapeSprite_obj,createRectangularBody,(void))

Void FlxNapeSprite_obj::setBodyMaterial( hx::Null< Float >  __o_Elasticity,hx::Null< Float >  __o_DynamicFriction,hx::Null< Float >  __o_StaticFriction,hx::Null< Float >  __o_Density,hx::Null< Float >  __o_RotationFriction){
Float Elasticity = __o_Elasticity.Default(1);
Float DynamicFriction = __o_DynamicFriction.Default(((Float)0.2));
Float StaticFriction = __o_StaticFriction.Default(((Float)0.4));
Float Density = __o_Density.Default(1);
Float RotationFriction = __o_RotationFriction.Default(((Float)0.001));
	HX_STACK_FRAME("flixel.addons.nape.FlxNapeSprite","setBodyMaterial",0xec9e9bbf,"flixel.addons.nape.FlxNapeSprite.setBodyMaterial","flixel/addons/nape/FlxNapeSprite.hx",206,0x811bdfdd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Elasticity,"Elasticity")
	HX_STACK_ARG(DynamicFriction,"DynamicFriction")
	HX_STACK_ARG(StaticFriction,"StaticFriction")
	HX_STACK_ARG(Density,"Density")
	HX_STACK_ARG(RotationFriction,"RotationFriction")
{
		HX_STACK_LINE(207)
		::nape::phys::Body tmp = this->body;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(207)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(207)
		if ((tmp1)){
			HX_STACK_LINE(208)
			return null();
		}
		HX_STACK_LINE(210)
		::nape::phys::Body tmp2 = this->body;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(210)
		::nape::phys::Material tmp3 = ::nape::phys::Material_obj::__new(Elasticity,DynamicFriction,StaticFriction,Density,RotationFriction);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(210)
		tmp2->setShapeMaterials(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxNapeSprite_obj,setBodyMaterial,(void))

Void FlxNapeSprite_obj::destroyPhysObjects( ){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeSprite","destroyPhysObjects",0x7450bf34,"flixel.addons.nape.FlxNapeSprite.destroyPhysObjects","flixel/addons/nape/FlxNapeSprite.hx",217,0x811bdfdd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(218)
		::nape::phys::Body tmp = this->body;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(218)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(218)
		if ((tmp1)){
			HX_STACK_LINE(220)
			::nape::space::Space tmp2 = ::flixel::addons::nape::FlxNapeSpace_obj::space;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(220)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(220)
			if ((tmp3)){
				HX_STACK_LINE(221)
				::nape::space::Space tmp4 = ::flixel::addons::nape::FlxNapeSpace_obj::space;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(221)
				::nape::phys::BodyList tmp5 = tmp4->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(221)
				::nape::phys::Body tmp6 = this->body;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(221)
				tmp5->remove(tmp6);
			}
			HX_STACK_LINE(222)
			this->body = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxNapeSprite_obj,destroyPhysObjects,(void))

Void FlxNapeSprite_obj::setDrag( hx::Null< Float >  __o_LinearDrag,hx::Null< Float >  __o_AngularDrag){
Float LinearDrag = __o_LinearDrag.Default(1);
Float AngularDrag = __o_AngularDrag.Default(1);
	HX_STACK_FRAME("flixel.addons.nape.FlxNapeSprite","setDrag",0xa5e47c4a,"flixel.addons.nape.FlxNapeSprite.setDrag","flixel/addons/nape/FlxNapeSprite.hx",235,0x811bdfdd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(LinearDrag,"LinearDrag")
	HX_STACK_ARG(AngularDrag,"AngularDrag")
{
		HX_STACK_LINE(236)
		this->_linearDrag = LinearDrag;
		HX_STACK_LINE(237)
		this->_angularDrag = AngularDrag;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxNapeSprite_obj,setDrag,(void))

Void FlxNapeSprite_obj::setBody( ::nape::phys::Body body){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeSprite","setBody",0xa48fcaf8,"flixel.addons.nape.FlxNapeSprite.setBody","flixel/addons/nape/FlxNapeSprite.hx",254,0x811bdfdd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(body,"body")
		HX_STACK_LINE(255)
		this->body = body;
		HX_STACK_LINE(256)
		{
			HX_STACK_LINE(256)
			bool tmp = this->physicsEnabled;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(256)
			bool Value = tmp;		HX_STACK_VAR(Value,"Value");
			HX_STACK_LINE(256)
			::nape::phys::Body tmp1 = this->body;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(256)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(256)
			if ((tmp2)){
				HX_STACK_LINE(256)
				::nape::phys::Body tmp3 = this->body;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(256)
				::nape::phys::Body _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(256)
				bool tmp4 = Value;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(256)
				::nape::space::Space tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(256)
				if ((tmp4)){
					HX_STACK_LINE(256)
					tmp5 = ::flixel::addons::nape::FlxNapeSpace_obj::space;
				}
				else{
					HX_STACK_LINE(256)
					tmp5 = null();
				}
				HX_STACK_LINE(256)
				::nape::space::Space space = tmp5;		HX_STACK_VAR(space,"space");
				HX_STACK_LINE(256)
				{
					HX_STACK_LINE(256)
					_this->zpp_inner->immutable_midstep(HX_HCSTRING("Body::space","\x84","\xf7","\xbc","\x26"));
					HX_STACK_LINE(256)
					::zpp_nape::space::ZPP_Space tmp6 = _this->zpp_inner->space;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(256)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(256)
					::nape::space::Space tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(256)
					if ((tmp7)){
						HX_STACK_LINE(256)
						tmp8 = null();
					}
					else{
						HX_STACK_LINE(256)
						::zpp_nape::space::ZPP_Space tmp9 = _this->zpp_inner->space;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(256)
						tmp8 = tmp9->outer;
					}
					HX_STACK_LINE(256)
					::nape::space::Space tmp9 = space;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(256)
					bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(256)
					if ((tmp10)){
						HX_STACK_LINE(256)
						::zpp_nape::space::ZPP_Space tmp11 = _this->zpp_inner->space;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(256)
						bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(256)
						::nape::space::Space tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(256)
						if ((tmp12)){
							HX_STACK_LINE(256)
							tmp13 = null();
						}
						else{
							HX_STACK_LINE(256)
							::zpp_nape::space::ZPP_Space tmp14 = _this->zpp_inner->space;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(256)
							tmp13 = tmp14->outer;
						}
						HX_STACK_LINE(256)
						bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(256)
						if ((tmp14)){
							HX_STACK_LINE(256)
							::zpp_nape::space::ZPP_Component tmp15 = _this->zpp_inner->component;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(256)
							tmp15->woken = false;
						}
						HX_STACK_LINE(256)
						::zpp_nape::space::ZPP_Space tmp15 = _this->zpp_inner->space;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(256)
						bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(256)
						::nape::space::Space tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(256)
						if ((tmp16)){
							HX_STACK_LINE(256)
							tmp17 = null();
						}
						else{
							HX_STACK_LINE(256)
							::zpp_nape::space::ZPP_Space tmp18 = _this->zpp_inner->space;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(256)
							tmp17 = tmp18->outer;
						}
						HX_STACK_LINE(256)
						bool tmp18 = (tmp17 != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(256)
						if ((tmp18)){
							HX_STACK_LINE(256)
							::zpp_nape::space::ZPP_Space tmp19 = _this->zpp_inner->space;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(256)
							bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(256)
							::nape::space::Space tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(256)
							if ((tmp20)){
								HX_STACK_LINE(256)
								tmp21 = null();
							}
							else{
								HX_STACK_LINE(256)
								::zpp_nape::space::ZPP_Space tmp22 = _this->zpp_inner->space;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(256)
								tmp21 = tmp22->outer;
							}
							HX_STACK_LINE(256)
							::nape::phys::BodyList tmp22 = tmp21->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(256)
							::nape::phys::Body tmp23 = _this;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(256)
							tmp22->remove(tmp23);
						}
						HX_STACK_LINE(256)
						bool tmp19 = (space != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(256)
						if ((tmp19)){
							HX_STACK_LINE(256)
							::nape::phys::BodyList tmp20 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(256)
							::nape::phys::BodyList _this1 = tmp20;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(256)
							bool tmp21 = _this1->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(256)
							if ((tmp21)){
								HX_STACK_LINE(256)
								::nape::phys::Body tmp22 = _this;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(256)
								_this1->push(tmp22);
							}
							else{
								HX_STACK_LINE(256)
								::nape::phys::Body tmp22 = _this;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(256)
								_this1->unshift(tmp22);
							}
						}
					}
				}
				HX_STACK_LINE(256)
				::zpp_nape::space::ZPP_Space tmp6 = _this->zpp_inner->space;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(256)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(256)
				if ((tmp7)){
					HX_STACK_LINE(256)
					Dynamic();
				}
				else{
					HX_STACK_LINE(256)
					::zpp_nape::space::ZPP_Space tmp8 = _this->zpp_inner->space;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(256)
					tmp8->outer;
				}
			}
			HX_STACK_LINE(256)
			this->physicsEnabled = Value;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxNapeSprite_obj,setBody,(void))

Void FlxNapeSprite_obj::updatePhysObjects( ){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeSprite","updatePhysObjects",0x8c2c922d,"flixel.addons.nape.FlxNapeSprite.updatePhysObjects","flixel/addons/nape/FlxNapeSprite.hx",264,0x811bdfdd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(265)
		this->updatePosition();
		HX_STACK_LINE(267)
		::nape::phys::Body tmp = this->body;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(267)
		bool tmp1 = tmp->zpp_inner->norotate;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(267)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(267)
		if ((tmp2)){
			HX_STACK_LINE(269)
			::nape::phys::Body tmp3 = this->body;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(269)
			Float tmp4 = tmp3->zpp_inner->rot;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(269)
			Float tmp5 = ::Math_obj::PI;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(269)
			Float tmp6 = (Float((int)180) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(269)
			Float tmp7 = (tmp4 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(269)
			this->set_angle(tmp7);
		}
		HX_STACK_LINE(273)
		Float tmp3 = this->_linearDrag;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(273)
		bool tmp4 = (tmp3 < (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(273)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(273)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(273)
		if ((tmp5)){
			HX_STACK_LINE(273)
			Float tmp7 = this->_angularDrag;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(273)
			Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(273)
			tmp6 = (tmp8 < (int)1);
		}
		else{
			HX_STACK_LINE(273)
			tmp6 = true;
		}
		HX_STACK_LINE(273)
		if ((tmp6)){
			HX_STACK_LINE(275)
			{
				HX_STACK_LINE(275)
				::nape::phys::Body tmp7 = this->body;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(275)
				::nape::phys::Body _g = tmp7;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(275)
				{
					HX_STACK_LINE(275)
					Float tmp8 = _g->zpp_inner->angvel;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(275)
					Float tmp9 = this->_angularDrag;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(275)
					Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(275)
					Float angularVel = tmp10;		HX_STACK_VAR(angularVel,"angularVel");
					HX_STACK_LINE(275)
					{
						HX_STACK_LINE(275)
						Float tmp11 = _g->zpp_inner->angvel;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(275)
						Float tmp12 = angularVel;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(275)
						bool tmp13 = (tmp11 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(275)
						if ((tmp13)){
							HX_STACK_LINE(275)
							_g->zpp_inner->angvel = angularVel;
							HX_STACK_LINE(275)
							_g->zpp_inner->wake();
						}
					}
					HX_STACK_LINE(275)
					_g->zpp_inner->angvel;
				}
			}
			HX_STACK_LINE(276)
			{
				HX_STACK_LINE(276)
				::nape::geom::Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(276)
				{
					HX_STACK_LINE(276)
					::nape::phys::Body tmp8 = this->body;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(276)
					::nape::phys::Body _this = tmp8;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(276)
					::nape::geom::Vec2 tmp9 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(276)
					bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(276)
					if ((tmp10)){
						HX_STACK_LINE(276)
						_this->zpp_inner->setupVelocity();
					}
					HX_STACK_LINE(276)
					tmp7 = _this->zpp_inner->wrap_vel;
				}
				HX_STACK_LINE(276)
				::nape::geom::Vec2 _g = tmp7;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(276)
				{
					HX_STACK_LINE(276)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(276)
					{
						HX_STACK_LINE(276)
						{
							HX_STACK_LINE(276)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(276)
							bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(276)
							if ((tmp9)){
								HX_STACK_LINE(276)
								_this->_validate();
							}
						}
						HX_STACK_LINE(276)
						tmp8 = _g->zpp_inner->x;
					}
					HX_STACK_LINE(276)
					Float tmp9 = this->_linearDrag;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(276)
					Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(276)
					Float x = tmp10;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(276)
					{
						HX_STACK_LINE(276)
						Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(276)
						{
							HX_STACK_LINE(276)
							{
								HX_STACK_LINE(276)
								::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(276)
								bool tmp12 = (_this->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(276)
								if ((tmp12)){
									HX_STACK_LINE(276)
									_this->_validate();
								}
							}
							HX_STACK_LINE(276)
							tmp11 = _g->zpp_inner->x;
						}
						HX_STACK_LINE(276)
						Float tmp12 = x;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(276)
						bool tmp13 = (tmp11 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(276)
						if ((tmp13)){
							HX_STACK_LINE(276)
							_g->zpp_inner->x = x;
							HX_STACK_LINE(276)
							{
								HX_STACK_LINE(276)
								::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(276)
								bool tmp14 = (_this->_invalidate != null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(276)
								if ((tmp14)){
									HX_STACK_LINE(276)
									::zpp_nape::geom::ZPP_Vec2 tmp15 = _this;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(276)
									_this->_invalidate(tmp15);
								}
							}
						}
					}
					HX_STACK_LINE(276)
					{
						HX_STACK_LINE(276)
						{
							HX_STACK_LINE(276)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(276)
							bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(276)
							if ((tmp11)){
								HX_STACK_LINE(276)
								_this->_validate();
							}
						}
						HX_STACK_LINE(276)
						_g->zpp_inner->x;
					}
				}
			}
			HX_STACK_LINE(277)
			{
				HX_STACK_LINE(277)
				::nape::geom::Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(277)
				{
					HX_STACK_LINE(277)
					::nape::phys::Body tmp8 = this->body;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(277)
					::nape::phys::Body _this = tmp8;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(277)
					::nape::geom::Vec2 tmp9 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(277)
					bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(277)
					if ((tmp10)){
						HX_STACK_LINE(277)
						_this->zpp_inner->setupVelocity();
					}
					HX_STACK_LINE(277)
					tmp7 = _this->zpp_inner->wrap_vel;
				}
				HX_STACK_LINE(277)
				::nape::geom::Vec2 _g = tmp7;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(277)
				{
					HX_STACK_LINE(277)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(277)
					{
						HX_STACK_LINE(277)
						{
							HX_STACK_LINE(277)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(277)
							bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(277)
							if ((tmp9)){
								HX_STACK_LINE(277)
								_this->_validate();
							}
						}
						HX_STACK_LINE(277)
						tmp8 = _g->zpp_inner->y;
					}
					HX_STACK_LINE(277)
					Float tmp9 = this->_linearDrag;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(277)
					Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(277)
					Float y = tmp10;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(277)
					{
						HX_STACK_LINE(277)
						Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(277)
						{
							HX_STACK_LINE(277)
							{
								HX_STACK_LINE(277)
								::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(277)
								bool tmp12 = (_this->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(277)
								if ((tmp12)){
									HX_STACK_LINE(277)
									_this->_validate();
								}
							}
							HX_STACK_LINE(277)
							tmp11 = _g->zpp_inner->y;
						}
						HX_STACK_LINE(277)
						Float tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(277)
						bool tmp13 = (tmp11 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(277)
						if ((tmp13)){
							HX_STACK_LINE(277)
							_g->zpp_inner->y = y;
							HX_STACK_LINE(277)
							{
								HX_STACK_LINE(277)
								::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(277)
								bool tmp14 = (_this->_invalidate != null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(277)
								if ((tmp14)){
									HX_STACK_LINE(277)
									::zpp_nape::geom::ZPP_Vec2 tmp15 = _this;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(277)
									_this->_invalidate(tmp15);
								}
							}
						}
					}
					HX_STACK_LINE(277)
					{
						HX_STACK_LINE(277)
						{
							HX_STACK_LINE(277)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(277)
							bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(277)
							if ((tmp11)){
								HX_STACK_LINE(277)
								_this->_validate();
							}
						}
						HX_STACK_LINE(277)
						_g->zpp_inner->y;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxNapeSprite_obj,updatePhysObjects,(void))

Void FlxNapeSprite_obj::updatePosition( ){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeSprite","updatePosition",0x060e5ebe,"flixel.addons.nape.FlxNapeSprite.updatePosition","flixel/addons/nape/FlxNapeSprite.hx",282,0x811bdfdd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(283)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(283)
		{
			HX_STACK_LINE(283)
			::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(283)
			{
				HX_STACK_LINE(283)
				::nape::phys::Body tmp2 = this->body;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(283)
				::nape::phys::Body _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(283)
				::nape::geom::Vec2 tmp3 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(283)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(283)
				if ((tmp4)){
					HX_STACK_LINE(283)
					_this->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(283)
				tmp1 = _this->zpp_inner->wrap_pos;
			}
			HX_STACK_LINE(283)
			::nape::geom::Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(283)
			{
				HX_STACK_LINE(283)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(283)
				bool tmp2 = (_this1->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(283)
				if ((tmp2)){
					HX_STACK_LINE(283)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(283)
			tmp = _this->zpp_inner->x;
		}
		HX_STACK_LINE(283)
		::flixel::math::FlxPoint tmp1 = this->origin;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(283)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(283)
		Float tmp3 = (tmp - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(283)
		this->set_x(tmp3);
		HX_STACK_LINE(284)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(284)
		{
			HX_STACK_LINE(284)
			::nape::geom::Vec2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(284)
			{
				HX_STACK_LINE(284)
				::nape::phys::Body tmp6 = this->body;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(284)
				::nape::phys::Body _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(284)
				::nape::geom::Vec2 tmp7 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(284)
				bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(284)
				if ((tmp8)){
					HX_STACK_LINE(284)
					_this->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(284)
				tmp5 = _this->zpp_inner->wrap_pos;
			}
			HX_STACK_LINE(284)
			::nape::geom::Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(284)
			{
				HX_STACK_LINE(284)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(284)
				bool tmp6 = (_this1->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(284)
				if ((tmp6)){
					HX_STACK_LINE(284)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(284)
			tmp4 = _this->zpp_inner->y;
		}
		HX_STACK_LINE(284)
		::flixel::math::FlxPoint tmp5 = this->origin;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(284)
		Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(284)
		Float tmp7 = (tmp4 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(284)
		this->set_y(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxNapeSprite_obj,updatePosition,(void))

bool FlxNapeSprite_obj::set_physicsEnabled( bool Value){
	HX_STACK_FRAME("flixel.addons.nape.FlxNapeSprite","set_physicsEnabled",0xe2ef6ea3,"flixel.addons.nape.FlxNapeSprite.set_physicsEnabled","flixel/addons/nape/FlxNapeSprite.hx",288,0x811bdfdd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(289)
	::nape::phys::Body tmp = this->body;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(289)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(289)
	if ((tmp1)){
		HX_STACK_LINE(290)
		::nape::phys::Body tmp2 = this->body;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(290)
		::nape::phys::Body _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(290)
		bool tmp3 = Value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(290)
		::nape::space::Space tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(290)
		if ((tmp3)){
			HX_STACK_LINE(290)
			tmp4 = ::flixel::addons::nape::FlxNapeSpace_obj::space;
		}
		else{
			HX_STACK_LINE(290)
			tmp4 = null();
		}
		HX_STACK_LINE(290)
		::nape::space::Space space = tmp4;		HX_STACK_VAR(space,"space");
		HX_STACK_LINE(290)
		{
			HX_STACK_LINE(290)
			_this->zpp_inner->immutable_midstep(HX_HCSTRING("Body::space","\x84","\xf7","\xbc","\x26"));
			HX_STACK_LINE(290)
			::zpp_nape::space::ZPP_Space tmp5 = _this->zpp_inner->space;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(290)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(290)
			::nape::space::Space tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(290)
			if ((tmp6)){
				HX_STACK_LINE(290)
				tmp7 = null();
			}
			else{
				HX_STACK_LINE(290)
				::zpp_nape::space::ZPP_Space tmp8 = _this->zpp_inner->space;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(290)
				tmp7 = tmp8->outer;
			}
			HX_STACK_LINE(290)
			::nape::space::Space tmp8 = space;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(290)
			bool tmp9 = (tmp7 != tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(290)
			if ((tmp9)){
				HX_STACK_LINE(290)
				::zpp_nape::space::ZPP_Space tmp10 = _this->zpp_inner->space;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(290)
				bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(290)
				::nape::space::Space tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(290)
				if ((tmp11)){
					HX_STACK_LINE(290)
					tmp12 = null();
				}
				else{
					HX_STACK_LINE(290)
					::zpp_nape::space::ZPP_Space tmp13 = _this->zpp_inner->space;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(290)
					tmp12 = tmp13->outer;
				}
				HX_STACK_LINE(290)
				bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(290)
				if ((tmp13)){
					HX_STACK_LINE(290)
					::zpp_nape::space::ZPP_Component tmp14 = _this->zpp_inner->component;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(290)
					tmp14->woken = false;
				}
				HX_STACK_LINE(290)
				::zpp_nape::space::ZPP_Space tmp14 = _this->zpp_inner->space;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(290)
				bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(290)
				::nape::space::Space tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(290)
				if ((tmp15)){
					HX_STACK_LINE(290)
					tmp16 = null();
				}
				else{
					HX_STACK_LINE(290)
					::zpp_nape::space::ZPP_Space tmp17 = _this->zpp_inner->space;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(290)
					tmp16 = tmp17->outer;
				}
				HX_STACK_LINE(290)
				bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(290)
				if ((tmp17)){
					HX_STACK_LINE(290)
					::zpp_nape::space::ZPP_Space tmp18 = _this->zpp_inner->space;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(290)
					bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(290)
					::nape::space::Space tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(290)
					if ((tmp19)){
						HX_STACK_LINE(290)
						tmp20 = null();
					}
					else{
						HX_STACK_LINE(290)
						::zpp_nape::space::ZPP_Space tmp21 = _this->zpp_inner->space;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(290)
						tmp20 = tmp21->outer;
					}
					HX_STACK_LINE(290)
					::nape::phys::BodyList tmp21 = tmp20->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(290)
					::nape::phys::Body tmp22 = _this;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(290)
					tmp21->remove(tmp22);
				}
				HX_STACK_LINE(290)
				bool tmp18 = (space != null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(290)
				if ((tmp18)){
					HX_STACK_LINE(290)
					::nape::phys::BodyList tmp19 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(290)
					::nape::phys::BodyList _this1 = tmp19;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(290)
					bool tmp20 = _this1->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(290)
					if ((tmp20)){
						HX_STACK_LINE(290)
						::nape::phys::Body tmp21 = _this;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(290)
						_this1->push(tmp21);
					}
					else{
						HX_STACK_LINE(290)
						::nape::phys::Body tmp21 = _this;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(290)
						_this1->unshift(tmp21);
					}
				}
			}
		}
		HX_STACK_LINE(290)
		::zpp_nape::space::ZPP_Space tmp5 = _this->zpp_inner->space;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(290)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(290)
		if ((tmp6)){
			HX_STACK_LINE(290)
			Dynamic();
		}
		else{
			HX_STACK_LINE(290)
			::zpp_nape::space::ZPP_Space tmp7 = _this->zpp_inner->space;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(290)
			tmp7->outer;
		}
	}
	HX_STACK_LINE(291)
	bool tmp2 = this->physicsEnabled = Value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(291)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxNapeSprite_obj,set_physicsEnabled,return )

Void FlxNapeSprite_obj::setPosition( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.addons.nape.FlxNapeSprite","setPosition",0x8b4cd3ff,"flixel.addons.nape.FlxNapeSprite.setPosition","flixel/addons/nape/FlxNapeSprite.hx",302,0x811bdfdd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(303)
		{
			HX_STACK_LINE(303)
			::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(303)
			{
				HX_STACK_LINE(303)
				::nape::phys::Body tmp1 = this->body;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(303)
				::nape::phys::Body _this = tmp1;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(303)
				::nape::geom::Vec2 tmp2 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(303)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(303)
				if ((tmp3)){
					HX_STACK_LINE(303)
					_this->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(303)
				tmp = _this->zpp_inner->wrap_pos;
			}
			HX_STACK_LINE(303)
			::nape::geom::Vec2 _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(303)
			{
				HX_STACK_LINE(303)
				Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(303)
				{
					HX_STACK_LINE(303)
					{
						HX_STACK_LINE(303)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(303)
						bool tmp2 = (_this1->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(303)
						if ((tmp2)){
							HX_STACK_LINE(303)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(303)
					tmp1 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(303)
				Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(303)
				bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(303)
				if ((tmp3)){
					HX_STACK_LINE(303)
					_this->zpp_inner->x = X;
					HX_STACK_LINE(303)
					{
						HX_STACK_LINE(303)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(303)
						bool tmp4 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(303)
						if ((tmp4)){
							HX_STACK_LINE(303)
							::zpp_nape::geom::ZPP_Vec2 tmp5 = _this1;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(303)
							_this1->_invalidate(tmp5);
						}
					}
				}
			}
			HX_STACK_LINE(303)
			{
				HX_STACK_LINE(303)
				{
					HX_STACK_LINE(303)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(303)
					bool tmp1 = (_this1->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(303)
					if ((tmp1)){
						HX_STACK_LINE(303)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(303)
				_this->zpp_inner->x;
			}
		}
		HX_STACK_LINE(304)
		{
			HX_STACK_LINE(304)
			::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(304)
			{
				HX_STACK_LINE(304)
				::nape::phys::Body tmp1 = this->body;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(304)
				::nape::phys::Body _this = tmp1;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(304)
				::nape::geom::Vec2 tmp2 = _this->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(304)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(304)
				if ((tmp3)){
					HX_STACK_LINE(304)
					_this->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(304)
				tmp = _this->zpp_inner->wrap_pos;
			}
			HX_STACK_LINE(304)
			::nape::geom::Vec2 _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(304)
			{
				HX_STACK_LINE(304)
				Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(304)
				{
					HX_STACK_LINE(304)
					{
						HX_STACK_LINE(304)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(304)
						bool tmp2 = (_this1->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(304)
						if ((tmp2)){
							HX_STACK_LINE(304)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(304)
					tmp1 = _this->zpp_inner->y;
				}
				HX_STACK_LINE(304)
				Float tmp2 = Y;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(304)
				bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(304)
				if ((tmp3)){
					HX_STACK_LINE(304)
					_this->zpp_inner->y = Y;
					HX_STACK_LINE(304)
					{
						HX_STACK_LINE(304)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(304)
						bool tmp4 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(304)
						if ((tmp4)){
							HX_STACK_LINE(304)
							::zpp_nape::geom::ZPP_Vec2 tmp5 = _this1;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(304)
							_this1->_invalidate(tmp5);
						}
					}
				}
			}
			HX_STACK_LINE(304)
			{
				HX_STACK_LINE(304)
				{
					HX_STACK_LINE(304)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(304)
					bool tmp1 = (_this1->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(304)
					if ((tmp1)){
						HX_STACK_LINE(304)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(304)
				_this->zpp_inner->y;
			}
		}
		HX_STACK_LINE(306)
		this->updatePosition();
	}
return null();
}



FlxNapeSprite_obj::FlxNapeSprite_obj()
{
}

void FlxNapeSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxNapeSprite);
	HX_MARK_MEMBER_NAME(body,"body");
	HX_MARK_MEMBER_NAME(physicsEnabled,"physicsEnabled");
	HX_MARK_MEMBER_NAME(_linearDrag,"_linearDrag");
	HX_MARK_MEMBER_NAME(_angularDrag,"_angularDrag");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxNapeSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(body,"body");
	HX_VISIT_MEMBER_NAME(physicsEnabled,"physicsEnabled");
	HX_VISIT_MEMBER_NAME(_linearDrag,"_linearDrag");
	HX_VISIT_MEMBER_NAME(_angularDrag,"_angularDrag");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxNapeSprite_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { return body; }
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"revive") ) { return revive_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"setDrag") ) { return setDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"setBody") ) { return setBody_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_linearDrag") ) { return _linearDrag; }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_angularDrag") ) { return _angularDrag; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"physicsEnabled") ) { return physicsEnabled; }
		if (HX_FIELD_EQ(inName,"addPremadeBody") ) { return addPremadeBody_dyn(); }
		if (HX_FIELD_EQ(inName,"updatePosition") ) { return updatePosition_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setBodyMaterial") ) { return setBodyMaterial_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updatePhysObjects") ) { return updatePhysObjects_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createCircularBody") ) { return createCircularBody_dyn(); }
		if (HX_FIELD_EQ(inName,"destroyPhysObjects") ) { return destroyPhysObjects_dyn(); }
		if (HX_FIELD_EQ(inName,"set_physicsEnabled") ) { return set_physicsEnabled_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createRectangularBody") ) { return createRectangularBody_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxNapeSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast< ::nape::phys::Body >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_linearDrag") ) { _linearDrag=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_angularDrag") ) { _angularDrag=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"physicsEnabled") ) { if (inCallProp == hx::paccAlways) return set_physicsEnabled(inValue);physicsEnabled=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxNapeSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41"));
	outFields->push(HX_HCSTRING("physicsEnabled","\x7a","\xaa","\x7e","\xe8"));
	outFields->push(HX_HCSTRING("_linearDrag","\x98","\xcd","\x32","\x0c"));
	outFields->push(HX_HCSTRING("_angularDrag","\xf7","\xcd","\x22","\x02"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::phys::Body*/ ,(int)offsetof(FlxNapeSprite_obj,body),HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41")},
	{hx::fsBool,(int)offsetof(FlxNapeSprite_obj,physicsEnabled),HX_HCSTRING("physicsEnabled","\x7a","\xaa","\x7e","\xe8")},
	{hx::fsFloat,(int)offsetof(FlxNapeSprite_obj,_linearDrag),HX_HCSTRING("_linearDrag","\x98","\xcd","\x32","\x0c")},
	{hx::fsFloat,(int)offsetof(FlxNapeSprite_obj,_angularDrag),HX_HCSTRING("_angularDrag","\xf7","\xcd","\x22","\x02")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41"),
	HX_HCSTRING("physicsEnabled","\x7a","\xaa","\x7e","\xe8"),
	HX_HCSTRING("_linearDrag","\x98","\xcd","\x32","\x0c"),
	HX_HCSTRING("_angularDrag","\xf7","\xcd","\x22","\x02"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	HX_HCSTRING("revive","\x55","\xfa","\x76","\x0a"),
	HX_HCSTRING("addPremadeBody","\x99","\xab","\xc7","\x3c"),
	HX_HCSTRING("createCircularBody","\xbd","\xa5","\x41","\xbe"),
	HX_HCSTRING("createRectangularBody","\x64","\x88","\x89","\x96"),
	HX_HCSTRING("setBodyMaterial","\x2b","\xd8","\xf6","\xc5"),
	HX_HCSTRING("destroyPhysObjects","\x48","\x0e","\x29","\xf2"),
	HX_HCSTRING("setDrag","\xb6","\x6c","\xf4","\x07"),
	HX_HCSTRING("setBody","\x64","\xbb","\x9f","\x06"),
	HX_HCSTRING("updatePhysObjects","\x99","\xc1","\x5d","\x99"),
	HX_HCSTRING("updatePosition","\xd2","\x93","\x24","\x00"),
	HX_HCSTRING("set_physicsEnabled","\xb7","\xbd","\xc7","\x60"),
	HX_HCSTRING("setPosition","\x6b","\x6a","\x5b","\xfb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxNapeSprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxNapeSprite_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxNapeSprite_obj::__mClass;

void FlxNapeSprite_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.nape.FlxNapeSprite","\x02","\xbc","\xe0","\x87");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxNapeSprite_obj >;
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
