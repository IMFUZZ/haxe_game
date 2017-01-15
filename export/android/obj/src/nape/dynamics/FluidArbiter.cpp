#include <hxcpp.h>

#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_FluidArbiter
#include <nape/dynamics/FluidArbiter.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec3
#include <nape/geom/Vec3.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter
#include <zpp_nape/dynamics/ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec3
#include <zpp_nape/geom/ZPP_Vec3.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace nape{
namespace dynamics{

Void FluidArbiter_obj::__construct()
{
HX_STACK_FRAME("nape.dynamics.FluidArbiter","new",0x49116625,"nape.dynamics.FluidArbiter.new","nape/dynamics/FluidArbiter.hx",320,0xd522c90b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(320)
	super::__construct();
}
;
	return null();
}

//FluidArbiter_obj::~FluidArbiter_obj() { }

Dynamic FluidArbiter_obj::__CreateEmpty() { return  new FluidArbiter_obj; }
hx::ObjectPtr< FluidArbiter_obj > FluidArbiter_obj::__new()
{  hx::ObjectPtr< FluidArbiter_obj > _result_ = new FluidArbiter_obj();
	_result_->__construct();
	return _result_;}

Dynamic FluidArbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FluidArbiter_obj > _result_ = new FluidArbiter_obj();
	_result_->__construct();
	return _result_;}

::nape::geom::Vec2 FluidArbiter_obj::get_position( ){
	HX_STACK_FRAME("nape.dynamics.FluidArbiter","get_position",0x08ca5e4d,"nape.dynamics.FluidArbiter.get_position","nape/dynamics/FluidArbiter.hx",185,0xd522c90b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(189)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(189)
	::nape::geom::Vec2 tmp1 = tmp->fluidarb->wrap_position;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(189)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(189)
	if ((tmp2)){
		HX_STACK_LINE(189)
		::zpp_nape::dynamics::ZPP_Arbiter tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(189)
		tmp3->fluidarb->getposition();
	}
	HX_STACK_LINE(190)
	::zpp_nape::dynamics::ZPP_Arbiter tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(190)
	::nape::geom::Vec2 tmp4 = tmp3->fluidarb->wrap_position;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(190)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(FluidArbiter_obj,get_position,return )

::nape::geom::Vec2 FluidArbiter_obj::set_position( ::nape::geom::Vec2 position){
	HX_STACK_FRAME("nape.dynamics.FluidArbiter","set_position",0x1dc381c1,"nape.dynamics.FluidArbiter.set_position","nape/dynamics/FluidArbiter.hx",192,0xd522c90b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(200)
	{
		HX_STACK_LINE(200)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(200)
		{
			HX_STACK_LINE(200)
			::zpp_nape::dynamics::ZPP_Arbiter tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(200)
			::nape::geom::Vec2 tmp2 = tmp1->fluidarb->wrap_position;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(200)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(200)
			if ((tmp3)){
				HX_STACK_LINE(200)
				::zpp_nape::dynamics::ZPP_Arbiter tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(200)
				tmp4->fluidarb->getposition();
			}
			HX_STACK_LINE(200)
			::zpp_nape::dynamics::ZPP_Arbiter tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(200)
			tmp = tmp4->fluidarb->wrap_position;
		}
		HX_STACK_LINE(200)
		::nape::geom::Vec2 _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(200)
		::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(200)
		{
			HX_STACK_LINE(200)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(200)
			{
				HX_STACK_LINE(200)
				{
					HX_STACK_LINE(200)
					::zpp_nape::geom::ZPP_Vec2 _this1 = position->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(200)
					bool tmp3 = (_this1->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(200)
					if ((tmp3)){
						HX_STACK_LINE(200)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(200)
				tmp2 = position->zpp_inner->x;
			}
			HX_STACK_LINE(200)
			Float x = tmp2;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(200)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(200)
			{
				HX_STACK_LINE(200)
				{
					HX_STACK_LINE(200)
					::zpp_nape::geom::ZPP_Vec2 _this1 = position->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(200)
					bool tmp4 = (_this1->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(200)
					if ((tmp4)){
						HX_STACK_LINE(200)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(200)
				tmp3 = position->zpp_inner->y;
			}
			HX_STACK_LINE(200)
			Float y = tmp3;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(200)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(200)
			{
				HX_STACK_LINE(200)
				{
					HX_STACK_LINE(200)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(200)
					bool tmp5 = (_this1->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(200)
					if ((tmp5)){
						HX_STACK_LINE(200)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(200)
				tmp4 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(200)
			Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(200)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(200)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(200)
			if ((tmp6)){
				HX_STACK_LINE(200)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(200)
				{
					HX_STACK_LINE(200)
					{
						HX_STACK_LINE(200)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(200)
						bool tmp9 = (_this1->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(200)
						bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(200)
						bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(200)
						if ((tmp11)){
							HX_STACK_LINE(200)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(200)
					Float tmp9 = _this->zpp_inner->y;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(200)
					tmp8 = tmp9;
				}
				HX_STACK_LINE(200)
				Float tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(200)
				tmp7 = (tmp8 == tmp9);
			}
			else{
				HX_STACK_LINE(200)
				tmp7 = false;
			}
			HX_STACK_LINE(200)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(200)
			if ((tmp8)){
				HX_STACK_LINE(200)
				{
					HX_STACK_LINE(200)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(200)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(200)
					{
					}
				}
				HX_STACK_LINE(200)
				{
					HX_STACK_LINE(200)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(200)
					bool tmp9 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(200)
					if ((tmp9)){
						HX_STACK_LINE(200)
						::zpp_nape::geom::ZPP_Vec2 tmp10 = _this1;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(200)
						_this1->_invalidate(tmp10);
					}
				}
			}
			HX_STACK_LINE(200)
			tmp1 = _this;
		}
		HX_STACK_LINE(200)
		::nape::geom::Vec2 ret = tmp1;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(200)
		{
			HX_STACK_LINE(200)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(200)
			tmp2 = position->zpp_inner->weak;
			HX_STACK_LINE(200)
			if ((tmp2)){
				HX_STACK_LINE(200)
				{
					HX_STACK_LINE(200)
					::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(200)
					position->zpp_inner->outer = null();
					HX_STACK_LINE(200)
					position->zpp_inner = null();
					HX_STACK_LINE(200)
					{
						HX_STACK_LINE(200)
						::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(200)
						::nape::geom::Vec2 tmp3 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(200)
						o->zpp_pool = tmp3;
						HX_STACK_LINE(200)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(200)
					{
						HX_STACK_LINE(200)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(200)
						{
							HX_STACK_LINE(200)
							bool tmp3 = (o->outer != null());		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(200)
							if ((tmp3)){
								HX_STACK_LINE(200)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(200)
								o->outer = null();
							}
							HX_STACK_LINE(200)
							o->_isimmutable = null();
							HX_STACK_LINE(200)
							o->_validate = null();
							HX_STACK_LINE(200)
							o->_invalidate = null();
						}
						HX_STACK_LINE(200)
						::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(200)
						o->next = tmp3;
						HX_STACK_LINE(200)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(200)
				true;
			}
			else{
				HX_STACK_LINE(200)
				false;
			}
		}
		HX_STACK_LINE(200)
		ret;
	}
	HX_STACK_LINE(202)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(202)
	{
		HX_STACK_LINE(202)
		::zpp_nape::dynamics::ZPP_Arbiter tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(202)
		::nape::geom::Vec2 tmp2 = tmp1->fluidarb->wrap_position;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(202)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(202)
		if ((tmp3)){
			HX_STACK_LINE(202)
			::zpp_nape::dynamics::ZPP_Arbiter tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(202)
			tmp4->fluidarb->getposition();
		}
		HX_STACK_LINE(202)
		::zpp_nape::dynamics::ZPP_Arbiter tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(202)
		tmp = tmp4->fluidarb->wrap_position;
	}
	HX_STACK_LINE(202)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FluidArbiter_obj,set_position,return )

Float FluidArbiter_obj::get_overlap( ){
	HX_STACK_FRAME("nape.dynamics.FluidArbiter","get_overlap",0xd2ab0663,"nape.dynamics.FluidArbiter.get_overlap","nape/dynamics/FluidArbiter.hx",214,0xd522c90b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(218)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(218)
	Float tmp1 = tmp->fluidarb->overlap;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(218)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FluidArbiter_obj,get_overlap,return )

Float FluidArbiter_obj::set_overlap( Float overlap){
	HX_STACK_FRAME("nape.dynamics.FluidArbiter","set_overlap",0xdd180d6f,"nape.dynamics.FluidArbiter.set_overlap","nape/dynamics/FluidArbiter.hx",220,0xd522c90b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(overlap,"overlap")
	HX_STACK_LINE(221)
	{
		HX_STACK_LINE(231)
		::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(231)
		tmp->fluidarb->overlap = overlap;
	}
	HX_STACK_LINE(233)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(233)
	Float tmp1 = tmp->fluidarb->overlap;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(233)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FluidArbiter_obj,set_overlap,return )

::nape::geom::Vec3 FluidArbiter_obj::buoyancyImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.dynamics.FluidArbiter","buoyancyImpulse",0x456d50ba,"nape.dynamics.FluidArbiter.buoyancyImpulse","nape/dynamics/FluidArbiter.hx",246,0xd522c90b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(253)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(253)
	::zpp_nape::dynamics::ZPP_FluidArbiter farb = tmp->fluidarb;		HX_STACK_VAR(farb,"farb");
	HX_STACK_LINE(254)
	bool tmp1 = (body == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(254)
	if ((tmp1)){
		HX_STACK_LINE(255)
		Float tmp2 = farb->buoyx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(255)
		Float tmp3 = farb->buoyy;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(255)
		::nape::geom::Vec3 tmp4 = ::nape::geom::Vec3_obj::get(tmp2,tmp3,(int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(255)
		return tmp4;
	}
	else{
		HX_STACK_LINE(257)
		::zpp_nape::phys::ZPP_Body tmp2 = body->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(257)
		::zpp_nape::dynamics::ZPP_Arbiter tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(257)
		::zpp_nape::phys::ZPP_Body tmp4 = tmp3->b2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(257)
		bool tmp5 = (tmp2 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(257)
		if ((tmp5)){
			HX_STACK_LINE(258)
			Float tmp6 = farb->buoyx;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(258)
			Float tmp7 = farb->buoyy;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(258)
			Float tmp8 = (farb->buoyy * farb->r2x);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(258)
			Float tmp9 = (farb->buoyx * farb->r2y);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(258)
			Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(258)
			::nape::geom::Vec3 tmp11 = ::nape::geom::Vec3_obj::get(tmp6,tmp7,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(258)
			return tmp11;
		}
		else{
			HX_STACK_LINE(261)
			Float tmp6 = farb->buoyx;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(261)
			Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(261)
			Float tmp8 = farb->buoyy;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(261)
			Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(261)
			Float tmp10 = (farb->buoyy * farb->r1x);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(261)
			Float tmp11 = (farb->buoyx * farb->r1y);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(261)
			Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(261)
			Float tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(261)
			::nape::geom::Vec3 tmp14 = ::nape::geom::Vec3_obj::get(tmp7,tmp9,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(261)
			return tmp14;
		}
	}
	HX_STACK_LINE(254)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FluidArbiter_obj,buoyancyImpulse,return )

::nape::geom::Vec3 FluidArbiter_obj::dragImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.dynamics.FluidArbiter","dragImpulse",0xc77ed5e6,"nape.dynamics.FluidArbiter.dragImpulse","nape/dynamics/FluidArbiter.hx",275,0xd522c90b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(282)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(282)
	::zpp_nape::dynamics::ZPP_FluidArbiter farb = tmp->fluidarb;		HX_STACK_VAR(farb,"farb");
	HX_STACK_LINE(283)
	bool tmp1 = (body == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(283)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(283)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(283)
	if ((tmp2)){
		HX_STACK_LINE(283)
		::zpp_nape::phys::ZPP_Body tmp4 = body->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(283)
		::zpp_nape::dynamics::ZPP_Arbiter tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(283)
		::zpp_nape::dynamics::ZPP_Arbiter tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(283)
		::zpp_nape::phys::ZPP_Body tmp7 = tmp6->b2;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(283)
		tmp3 = (tmp4 == tmp7);
	}
	else{
		HX_STACK_LINE(283)
		tmp3 = true;
	}
	HX_STACK_LINE(283)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(283)
	if ((tmp3)){
		HX_STACK_LINE(283)
		tmp4 = (int)1;
	}
	else{
		HX_STACK_LINE(283)
		tmp4 = (int)-1;
	}
	HX_STACK_LINE(283)
	int scale = tmp4;		HX_STACK_VAR(scale,"scale");
	HX_STACK_LINE(284)
	Float tmp5 = (farb->dampx * scale);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(284)
	Float tmp6 = (farb->dampy * scale);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(284)
	Float tmp7 = (farb->adamp * scale);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(284)
	::nape::geom::Vec3 tmp8 = ::nape::geom::Vec3_obj::get(tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(284)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(FluidArbiter_obj,dragImpulse,return )

::nape::geom::Vec3 FluidArbiter_obj::totalImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_FRAME("nape.dynamics.FluidArbiter","totalImpulse",0x9f71eeec,"nape.dynamics.FluidArbiter.totalImpulse","nape/dynamics/FluidArbiter.hx",298,0xd522c90b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_ARG(freshOnly,"freshOnly")
{
		HX_STACK_LINE(305)
		::nape::phys::Body tmp = body;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(305)
		::nape::geom::Vec3 tmp1 = this->buoyancyImpulse(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(305)
		::nape::geom::Vec3 tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(306)
		::nape::phys::Body tmp3 = body;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(306)
		::nape::geom::Vec3 tmp4 = this->dragImpulse(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(306)
		::nape::geom::Vec3 ret = tmp4;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(307)
		{
			HX_STACK_LINE(307)
			::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(307)
			{
				HX_STACK_LINE(307)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(307)
				{
					HX_STACK_LINE(307)
					{
						HX_STACK_LINE(307)
						::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(307)
						bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(307)
						if ((tmp6)){
							HX_STACK_LINE(307)
							_this->_validate();
						}
					}
					HX_STACK_LINE(307)
					tmp5 = _g->zpp_inner->x;
				}
				HX_STACK_LINE(307)
				Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(307)
				{
					HX_STACK_LINE(307)
					{
						HX_STACK_LINE(307)
						::zpp_nape::geom::ZPP_Vec3 _this = tmp2->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(307)
						bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(307)
						if ((tmp7)){
							HX_STACK_LINE(307)
							_this->_validate();
						}
					}
					HX_STACK_LINE(307)
					tmp6 = tmp2->zpp_inner->x;
				}
				HX_STACK_LINE(307)
				Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(307)
				Float x = tmp7;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(307)
				_g->zpp_inner->x = x;
				HX_STACK_LINE(307)
				{
					HX_STACK_LINE(307)
					{
						HX_STACK_LINE(307)
						::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(307)
						bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(307)
						if ((tmp8)){
							HX_STACK_LINE(307)
							_this->_validate();
						}
					}
					HX_STACK_LINE(307)
					_g->zpp_inner->x;
				}
			}
		}
		HX_STACK_LINE(308)
		{
			HX_STACK_LINE(308)
			::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(308)
			{
				HX_STACK_LINE(308)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(308)
				{
					HX_STACK_LINE(308)
					{
						HX_STACK_LINE(308)
						::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(308)
						bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(308)
						if ((tmp6)){
							HX_STACK_LINE(308)
							_this->_validate();
						}
					}
					HX_STACK_LINE(308)
					tmp5 = _g->zpp_inner->y;
				}
				HX_STACK_LINE(308)
				Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(308)
				{
					HX_STACK_LINE(308)
					{
						HX_STACK_LINE(308)
						::zpp_nape::geom::ZPP_Vec3 _this = tmp2->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(308)
						bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(308)
						if ((tmp7)){
							HX_STACK_LINE(308)
							_this->_validate();
						}
					}
					HX_STACK_LINE(308)
					tmp6 = tmp2->zpp_inner->y;
				}
				HX_STACK_LINE(308)
				Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(308)
				Float y = tmp7;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(308)
				_g->zpp_inner->y = y;
				HX_STACK_LINE(308)
				{
					HX_STACK_LINE(308)
					{
						HX_STACK_LINE(308)
						::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(308)
						bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(308)
						if ((tmp8)){
							HX_STACK_LINE(308)
							_this->_validate();
						}
					}
					HX_STACK_LINE(308)
					_g->zpp_inner->y;
				}
			}
		}
		HX_STACK_LINE(309)
		{
			HX_STACK_LINE(309)
			::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(309)
			{
				HX_STACK_LINE(309)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(309)
						bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(309)
						if ((tmp6)){
							HX_STACK_LINE(309)
							_this->_validate();
						}
					}
					HX_STACK_LINE(309)
					tmp5 = _g->zpp_inner->z;
				}
				HX_STACK_LINE(309)
				Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						::zpp_nape::geom::ZPP_Vec3 _this = tmp2->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(309)
						bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(309)
						if ((tmp7)){
							HX_STACK_LINE(309)
							_this->_validate();
						}
					}
					HX_STACK_LINE(309)
					tmp6 = tmp2->zpp_inner->z;
				}
				HX_STACK_LINE(309)
				Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(309)
				Float z = tmp7;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(309)
				_g->zpp_inner->z = z;
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(309)
						bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(309)
						if ((tmp8)){
							HX_STACK_LINE(309)
							_this->_validate();
						}
					}
					HX_STACK_LINE(309)
					_g->zpp_inner->z;
				}
			}
		}
		HX_STACK_LINE(310)
		tmp2->dispose();
		HX_STACK_LINE(311)
		::nape::geom::Vec3 tmp5 = ret;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(311)
		return tmp5;
	}
}



FluidArbiter_obj::FluidArbiter_obj()
{
}

Dynamic FluidArbiter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"overlap") ) { if (inCallProp == hx::paccAlways) return get_overlap(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return get_position(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_overlap") ) { return get_overlap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_overlap") ) { return set_overlap_dyn(); }
		if (HX_FIELD_EQ(inName,"dragImpulse") ) { return dragImpulse_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		if (HX_FIELD_EQ(inName,"totalImpulse") ) { return totalImpulse_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"buoyancyImpulse") ) { return buoyancyImpulse_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FluidArbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"overlap") ) { if (inCallProp == hx::paccAlways) return set_overlap(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return set_position(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FluidArbiter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("overlap","\x87","\x43","\x10","\xa9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_position","\xb2","\x54","\x14","\x80"),
	HX_HCSTRING("set_position","\x26","\x78","\x0d","\x95"),
	HX_HCSTRING("get_overlap","\x9e","\xa3","\x0a","\x2f"),
	HX_HCSTRING("set_overlap","\xaa","\xaa","\x77","\x39"),
	HX_HCSTRING("buoyancyImpulse","\x75","\xa7","\x03","\x9f"),
	HX_HCSTRING("dragImpulse","\x21","\x73","\xde","\x23"),
	HX_HCSTRING("totalImpulse","\x51","\xe5","\xbb","\x16"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FluidArbiter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FluidArbiter_obj::__mClass,"__mClass");
};

#endif

hx::Class FluidArbiter_obj::__mClass;

void FluidArbiter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.dynamics.FluidArbiter","\xb3","\x6f","\x38","\xa3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FluidArbiter_obj >;
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

} // end namespace nape
} // end namespace dynamics
