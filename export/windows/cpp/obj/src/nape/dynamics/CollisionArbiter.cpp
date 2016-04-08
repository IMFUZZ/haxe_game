#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_CollisionArbiter
#include <nape/dynamics/CollisionArbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_Contact
#include <nape/dynamics/Contact.h>
#endif
#ifndef INCLUDED_nape_dynamics_ContactList
#include <nape/dynamics/ContactList.h>
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
#ifndef INCLUDED_nape_shape_Edge
#include <nape/shape/Edge.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#include <zpp_nape/dynamics/ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Contact
#include <zpp_nape/dynamics/ZPP_Contact.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec3
#include <zpp_nape/geom/ZPP_Vec3.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Material
#include <zpp_nape/phys/ZPP_Material.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Edge
#include <zpp_nape/shape/ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace dynamics{

Void CollisionArbiter_obj::__construct()
{
HX_STACK_FRAME("nape.dynamics.CollisionArbiter","new",0xd8a0cabd,"nape.dynamics.CollisionArbiter.new","nape/dynamics/CollisionArbiter.hx",732,0xb8178f73)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(732)
	super::__construct();
}
;
	return null();
}

//CollisionArbiter_obj::~CollisionArbiter_obj() { }

Dynamic CollisionArbiter_obj::__CreateEmpty() { return  new CollisionArbiter_obj; }
hx::ObjectPtr< CollisionArbiter_obj > CollisionArbiter_obj::__new()
{  hx::ObjectPtr< CollisionArbiter_obj > _result_ = new CollisionArbiter_obj();
	_result_->__construct();
	return _result_;}

Dynamic CollisionArbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CollisionArbiter_obj > _result_ = new CollisionArbiter_obj();
	_result_->__construct();
	return _result_;}

::nape::dynamics::ContactList CollisionArbiter_obj::get_contacts( ){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","get_contacts",0x33e1d7df,"nape.dynamics.CollisionArbiter.get_contacts","nape/dynamics/CollisionArbiter.hx",183,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(187)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(187)
	::nape::dynamics::ContactList tmp1 = tmp->colarb->wrap_contacts;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(187)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(187)
	if ((tmp2)){
		HX_STACK_LINE(187)
		::zpp_nape::dynamics::ZPP_Arbiter tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(187)
		tmp3->colarb->setupcontacts();
	}
	HX_STACK_LINE(188)
	::zpp_nape::dynamics::ZPP_Arbiter tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(188)
	::nape::dynamics::ContactList tmp4 = tmp3->colarb->wrap_contacts;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(188)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_contacts,return )

::nape::geom::Vec2 CollisionArbiter_obj::get_normal( ){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","get_normal",0x34ea9d33,"nape.dynamics.CollisionArbiter.get_normal","nape/dynamics/CollisionArbiter.hx",199,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(203)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(203)
	::nape::geom::Vec2 tmp1 = tmp->colarb->wrap_normal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(203)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(203)
	if ((tmp2)){
		HX_STACK_LINE(203)
		::zpp_nape::dynamics::ZPP_Arbiter tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(203)
		tmp3->colarb->getnormal();
	}
	HX_STACK_LINE(204)
	::zpp_nape::dynamics::ZPP_Arbiter tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(204)
	::nape::geom::Vec2 tmp4 = tmp3->colarb->wrap_normal;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(204)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_normal,return )

Float CollisionArbiter_obj::get_radius( ){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","get_radius",0xb577fb5e,"nape.dynamics.CollisionArbiter.get_radius","nape/dynamics/CollisionArbiter.hx",213,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(217)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(217)
	Float tmp1 = tmp->colarb->radius;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(217)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_radius,return )

::nape::shape::Edge CollisionArbiter_obj::get_referenceEdge1( ){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","get_referenceEdge1",0x7f96cc95,"nape.dynamics.CollisionArbiter.get_referenceEdge1","nape/dynamics/CollisionArbiter.hx",225,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(229)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(229)
	::zpp_nape::shape::ZPP_Edge tmp1 = tmp->colarb->__ref_edge1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(229)
	::zpp_nape::shape::ZPP_Edge edge = tmp1;		HX_STACK_VAR(edge,"edge");
	HX_STACK_LINE(230)
	bool tmp2 = (edge != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(230)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(230)
	if ((tmp2)){
		HX_STACK_LINE(230)
		::zpp_nape::dynamics::ZPP_Arbiter tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(230)
		::zpp_nape::dynamics::ZPP_Arbiter tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(230)
		int tmp6 = tmp5->ws1->id;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(230)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(230)
		::zpp_nape::dynamics::ZPP_Arbiter tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(230)
		::zpp_nape::dynamics::ZPP_Arbiter tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(230)
		int tmp10 = tmp9->ws2->id;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(230)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(230)
		bool tmp12 = (tmp7 > tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(230)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(230)
		::nape::shape::Shape tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(230)
		bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(230)
		if ((tmp15)){
			HX_STACK_LINE(230)
			::zpp_nape::dynamics::ZPP_Arbiter tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(230)
			::zpp_nape::dynamics::ZPP_Arbiter tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(230)
			::nape::shape::Shape tmp18 = tmp17->ws2->outer;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(230)
			tmp14 = tmp18;
		}
		else{
			HX_STACK_LINE(230)
			::zpp_nape::dynamics::ZPP_Arbiter tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(230)
			::zpp_nape::dynamics::ZPP_Arbiter tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(230)
			::nape::shape::Shape tmp18 = tmp17->ws1->outer;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(230)
			tmp14 = tmp18;
		}
		HX_STACK_LINE(230)
		int tmp16 = tmp14->zpp_inner->type;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(230)
		int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(230)
		int tmp18 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(230)
		int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(230)
		bool tmp20 = (tmp17 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(230)
		bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(230)
		bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(230)
		bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(230)
		bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(230)
		bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(230)
		bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(230)
		bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(230)
		bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(230)
		bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(230)
		if ((tmp29)){
			HX_STACK_LINE(230)
			::zpp_nape::dynamics::ZPP_Arbiter tmp30 = this->zpp_inner;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(230)
			::zpp_nape::dynamics::ZPP_Arbiter tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(230)
			::zpp_nape::dynamics::ZPP_Arbiter tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(230)
			int tmp33 = tmp32->ws1->id;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(230)
			int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(230)
			int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(230)
			::zpp_nape::dynamics::ZPP_Arbiter tmp36 = this->zpp_inner;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(230)
			::zpp_nape::dynamics::ZPP_Arbiter tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(230)
			::zpp_nape::dynamics::ZPP_Arbiter tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(230)
			int tmp39 = tmp38->ws2->id;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(230)
			int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(230)
			int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(230)
			bool tmp42 = (tmp35 > tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(230)
			bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(230)
			bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(230)
			::nape::shape::Shape tmp45;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(230)
			bool tmp46 = tmp44;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(230)
			bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(230)
			if ((tmp47)){
				HX_STACK_LINE(230)
				::zpp_nape::dynamics::ZPP_Arbiter tmp48 = this->zpp_inner;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(230)
				::zpp_nape::dynamics::ZPP_Arbiter tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(230)
				::zpp_nape::dynamics::ZPP_Arbiter tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(230)
				::nape::shape::Shape tmp51 = tmp50->ws2->outer;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(230)
				::nape::shape::Shape tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(230)
				tmp45 = tmp52;
			}
			else{
				HX_STACK_LINE(230)
				::zpp_nape::dynamics::ZPP_Arbiter tmp48 = this->zpp_inner;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(230)
				::zpp_nape::dynamics::ZPP_Arbiter tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(230)
				::zpp_nape::dynamics::ZPP_Arbiter tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(230)
				::nape::shape::Shape tmp51 = tmp50->ws1->outer;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(230)
				::nape::shape::Shape tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(230)
				tmp45 = tmp52;
			}
			HX_STACK_LINE(230)
			::zpp_nape::shape::ZPP_Shape tmp48 = tmp45->zpp_inner;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(230)
			::zpp_nape::shape::ZPP_Polygon tmp49 = edge->polygon;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(230)
			tmp3 = (tmp48 != tmp49);
		}
		else{
			HX_STACK_LINE(230)
			tmp3 = true;
		}
	}
	else{
		HX_STACK_LINE(230)
		tmp3 = false;
	}
	HX_STACK_LINE(230)
	if ((tmp3)){
		HX_STACK_LINE(230)
		::zpp_nape::dynamics::ZPP_Arbiter tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(230)
		::zpp_nape::shape::ZPP_Edge tmp5 = tmp4->colarb->__ref_edge2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(230)
		edge = tmp5;
	}
	HX_STACK_LINE(231)
	bool tmp4 = (edge == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(231)
	::nape::shape::Edge tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(231)
	if ((tmp4)){
		HX_STACK_LINE(231)
		tmp5 = null();
	}
	else{
		HX_STACK_LINE(231)
		tmp5 = edge->wrapper();
	}
	HX_STACK_LINE(231)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_referenceEdge1,return )

::nape::shape::Edge CollisionArbiter_obj::get_referenceEdge2( ){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","get_referenceEdge2",0x7f96cc96,"nape.dynamics.CollisionArbiter.get_referenceEdge2","nape/dynamics/CollisionArbiter.hx",239,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(243)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(243)
	::zpp_nape::shape::ZPP_Edge tmp1 = tmp->colarb->__ref_edge1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(243)
	::zpp_nape::shape::ZPP_Edge edge = tmp1;		HX_STACK_VAR(edge,"edge");
	HX_STACK_LINE(244)
	bool tmp2 = (edge != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(244)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(244)
	if ((tmp2)){
		HX_STACK_LINE(244)
		::zpp_nape::dynamics::ZPP_Arbiter tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(244)
		::zpp_nape::dynamics::ZPP_Arbiter tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(244)
		int tmp6 = tmp5->ws1->id;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(244)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(244)
		::zpp_nape::dynamics::ZPP_Arbiter tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(244)
		::zpp_nape::dynamics::ZPP_Arbiter tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(244)
		int tmp10 = tmp9->ws2->id;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(244)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(244)
		bool tmp12 = (tmp7 > tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(244)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(244)
		::nape::shape::Shape tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(244)
		bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(244)
		if ((tmp15)){
			HX_STACK_LINE(244)
			::zpp_nape::dynamics::ZPP_Arbiter tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(244)
			::zpp_nape::dynamics::ZPP_Arbiter tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(244)
			::nape::shape::Shape tmp18 = tmp17->ws1->outer;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(244)
			tmp14 = tmp18;
		}
		else{
			HX_STACK_LINE(244)
			::zpp_nape::dynamics::ZPP_Arbiter tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(244)
			::zpp_nape::dynamics::ZPP_Arbiter tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(244)
			::nape::shape::Shape tmp18 = tmp17->ws2->outer;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(244)
			tmp14 = tmp18;
		}
		HX_STACK_LINE(244)
		int tmp16 = tmp14->zpp_inner->type;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(244)
		int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(244)
		int tmp18 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(244)
		int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(244)
		bool tmp20 = (tmp17 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(244)
		bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(244)
		bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(244)
		bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(244)
		bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(244)
		bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(244)
		bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(244)
		bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(244)
		bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(244)
		bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(244)
		if ((tmp29)){
			HX_STACK_LINE(244)
			::zpp_nape::dynamics::ZPP_Arbiter tmp30 = this->zpp_inner;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(244)
			::zpp_nape::dynamics::ZPP_Arbiter tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(244)
			::zpp_nape::dynamics::ZPP_Arbiter tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(244)
			int tmp33 = tmp32->ws1->id;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(244)
			int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(244)
			int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(244)
			::zpp_nape::dynamics::ZPP_Arbiter tmp36 = this->zpp_inner;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(244)
			::zpp_nape::dynamics::ZPP_Arbiter tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(244)
			::zpp_nape::dynamics::ZPP_Arbiter tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(244)
			int tmp39 = tmp38->ws2->id;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(244)
			int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(244)
			int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(244)
			bool tmp42 = (tmp35 > tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(244)
			bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(244)
			bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(244)
			::nape::shape::Shape tmp45;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(244)
			bool tmp46 = tmp44;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(244)
			bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(244)
			if ((tmp47)){
				HX_STACK_LINE(244)
				::zpp_nape::dynamics::ZPP_Arbiter tmp48 = this->zpp_inner;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(244)
				::zpp_nape::dynamics::ZPP_Arbiter tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(244)
				::zpp_nape::dynamics::ZPP_Arbiter tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(244)
				::nape::shape::Shape tmp51 = tmp50->ws1->outer;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(244)
				::nape::shape::Shape tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(244)
				tmp45 = tmp52;
			}
			else{
				HX_STACK_LINE(244)
				::zpp_nape::dynamics::ZPP_Arbiter tmp48 = this->zpp_inner;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(244)
				::zpp_nape::dynamics::ZPP_Arbiter tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(244)
				::zpp_nape::dynamics::ZPP_Arbiter tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(244)
				::nape::shape::Shape tmp51 = tmp50->ws2->outer;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(244)
				::nape::shape::Shape tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(244)
				tmp45 = tmp52;
			}
			HX_STACK_LINE(244)
			::zpp_nape::shape::ZPP_Shape tmp48 = tmp45->zpp_inner;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(244)
			::zpp_nape::shape::ZPP_Polygon tmp49 = edge->polygon;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(244)
			tmp3 = (tmp48 != tmp49);
		}
		else{
			HX_STACK_LINE(244)
			tmp3 = true;
		}
	}
	else{
		HX_STACK_LINE(244)
		tmp3 = false;
	}
	HX_STACK_LINE(244)
	if ((tmp3)){
		HX_STACK_LINE(244)
		::zpp_nape::dynamics::ZPP_Arbiter tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(244)
		::zpp_nape::shape::ZPP_Edge tmp5 = tmp4->colarb->__ref_edge2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(244)
		edge = tmp5;
	}
	HX_STACK_LINE(245)
	bool tmp4 = (edge == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(245)
	::nape::shape::Edge tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(245)
	if ((tmp4)){
		HX_STACK_LINE(245)
		tmp5 = null();
	}
	else{
		HX_STACK_LINE(245)
		tmp5 = edge->wrapper();
	}
	HX_STACK_LINE(245)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_referenceEdge2,return )

bool CollisionArbiter_obj::firstVertex( ){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","firstVertex",0xec742b11,"nape.dynamics.CollisionArbiter.firstVertex","nape/dynamics/CollisionArbiter.hx",257,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(261)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(261)
	::zpp_nape::shape::ZPP_Edge tmp1 = tmp->colarb->__ref_edge1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(261)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(261)
	::zpp_nape::dynamics::ZPP_Arbiter tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(261)
	::zpp_nape::shape::ZPP_Edge tmp4 = tmp3->colarb->__ref_edge2;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(261)
	bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(261)
	bool tmp6 = (tmp2 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(261)
	bool poly2circle = tmp6;		HX_STACK_VAR(poly2circle,"poly2circle");
	HX_STACK_LINE(262)
	bool tmp7 = poly2circle;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(262)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(262)
	if ((tmp7)){
		HX_STACK_LINE(262)
		::zpp_nape::dynamics::ZPP_Arbiter tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(262)
		int tmp10 = tmp9->colarb->__ref_vertex;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(262)
		tmp8 = (tmp10 == (int)-1);
	}
	else{
		HX_STACK_LINE(262)
		tmp8 = false;
	}
	HX_STACK_LINE(262)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,firstVertex,return )

bool CollisionArbiter_obj::secondVertex( ){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","secondVertex",0x2e747ffb,"nape.dynamics.CollisionArbiter.secondVertex","nape/dynamics/CollisionArbiter.hx",276,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(280)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(280)
	::zpp_nape::shape::ZPP_Edge tmp1 = tmp->colarb->__ref_edge1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(280)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(280)
	::zpp_nape::dynamics::ZPP_Arbiter tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(280)
	::zpp_nape::shape::ZPP_Edge tmp4 = tmp3->colarb->__ref_edge2;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(280)
	bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(280)
	bool tmp6 = (tmp2 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(280)
	bool poly2circle = tmp6;		HX_STACK_VAR(poly2circle,"poly2circle");
	HX_STACK_LINE(281)
	bool tmp7 = poly2circle;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(281)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(281)
	if ((tmp7)){
		HX_STACK_LINE(281)
		::zpp_nape::dynamics::ZPP_Arbiter tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(281)
		int tmp10 = tmp9->colarb->__ref_vertex;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(281)
		tmp8 = (tmp10 == (int)1);
	}
	else{
		HX_STACK_LINE(281)
		tmp8 = false;
	}
	HX_STACK_LINE(281)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,secondVertex,return )

::nape::geom::Vec3 CollisionArbiter_obj::normalImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","normalImpulse",0xbc1d19eb,"nape.dynamics.CollisionArbiter.normalImpulse","nape/dynamics/CollisionArbiter.hx",300,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_ARG(freshOnly,"freshOnly")
{
		HX_STACK_LINE(307)
		Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(308)
		Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
		HX_STACK_LINE(325)
		Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
		HX_STACK_LINE(326)
		::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(326)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(327)
		{
			HX_STACK_LINE(328)
			bool tmp1 = freshOnly;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(328)
			bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(328)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(328)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(328)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(328)
			if ((tmp4)){
				HX_STACK_LINE(328)
				tmp5 = colarb->oc1->fresh;
			}
			else{
				HX_STACK_LINE(328)
				tmp5 = true;
			}
			HX_STACK_LINE(328)
			if ((tmp5)){
				HX_STACK_LINE(329)
				::nape::dynamics::Contact tmp6 = colarb->oc1->wrapper();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(329)
				::nape::phys::Body tmp7 = body;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(329)
				::nape::geom::Vec3 tmp8 = tmp6->normalImpulse(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(329)
				::nape::geom::Vec3 imp = tmp8;		HX_STACK_VAR(imp,"imp");
				HX_STACK_LINE(330)
				{
					HX_STACK_LINE(331)
					int t = (int)1;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(332)
					{
						HX_STACK_LINE(333)
						int t1 = t;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(342)
						Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(342)
						{
							HX_STACK_LINE(342)
							{
								HX_STACK_LINE(342)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(342)
								bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(342)
								if ((tmp10)){
									HX_STACK_LINE(342)
									_this->_validate();
								}
							}
							HX_STACK_LINE(342)
							tmp9 = imp->zpp_inner->x;
						}
						HX_STACK_LINE(342)
						int tmp10 = t1;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(342)
						Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(342)
						hx::AddEq(retx,tmp11);
						HX_STACK_LINE(343)
						Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(343)
						{
							HX_STACK_LINE(343)
							{
								HX_STACK_LINE(343)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(343)
								bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(343)
								if ((tmp13)){
									HX_STACK_LINE(343)
									_this->_validate();
								}
							}
							HX_STACK_LINE(343)
							tmp12 = imp->zpp_inner->y;
						}
						HX_STACK_LINE(343)
						int tmp13 = t1;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(343)
						Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(343)
						hx::AddEq(rety,tmp14);
					}
					HX_STACK_LINE(345)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(345)
					{
						HX_STACK_LINE(345)
						{
							HX_STACK_LINE(345)
							::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(345)
							bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(345)
							if ((tmp10)){
								HX_STACK_LINE(345)
								_this->_validate();
							}
						}
						HX_STACK_LINE(345)
						tmp9 = imp->zpp_inner->z;
					}
					HX_STACK_LINE(345)
					int tmp10 = t;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(345)
					Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(345)
					hx::AddEq(retz,tmp11);
				}
				HX_STACK_LINE(347)
				imp->dispose();
			}
		}
		HX_STACK_LINE(350)
		bool tmp1 = colarb->hc2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(350)
		if ((tmp1)){
			HX_STACK_LINE(351)
			bool tmp2 = freshOnly;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(351)
			bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(351)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(351)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(351)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(351)
			if ((tmp5)){
				HX_STACK_LINE(351)
				tmp6 = colarb->oc2->fresh;
			}
			else{
				HX_STACK_LINE(351)
				tmp6 = true;
			}
			HX_STACK_LINE(351)
			if ((tmp6)){
				HX_STACK_LINE(352)
				::nape::dynamics::Contact tmp7 = colarb->oc2->wrapper();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(352)
				::nape::phys::Body tmp8 = body;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(352)
				::nape::geom::Vec3 tmp9 = tmp7->normalImpulse(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(352)
				::nape::geom::Vec3 imp = tmp9;		HX_STACK_VAR(imp,"imp");
				HX_STACK_LINE(353)
				{
					HX_STACK_LINE(354)
					int t = (int)1;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(355)
					{
						HX_STACK_LINE(356)
						int t1 = t;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(365)
						Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(365)
								bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(365)
								if ((tmp11)){
									HX_STACK_LINE(365)
									_this->_validate();
								}
							}
							HX_STACK_LINE(365)
							tmp10 = imp->zpp_inner->x;
						}
						HX_STACK_LINE(365)
						int tmp11 = t1;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(365)
						Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(365)
						hx::AddEq(retx,tmp12);
						HX_STACK_LINE(366)
						Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(366)
						{
							HX_STACK_LINE(366)
							{
								HX_STACK_LINE(366)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(366)
								bool tmp14 = (_this->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(366)
								if ((tmp14)){
									HX_STACK_LINE(366)
									_this->_validate();
								}
							}
							HX_STACK_LINE(366)
							tmp13 = imp->zpp_inner->y;
						}
						HX_STACK_LINE(366)
						int tmp14 = t1;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(366)
						Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(366)
						hx::AddEq(rety,tmp15);
					}
					HX_STACK_LINE(368)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(368)
					{
						HX_STACK_LINE(368)
						{
							HX_STACK_LINE(368)
							::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(368)
							bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(368)
							if ((tmp11)){
								HX_STACK_LINE(368)
								_this->_validate();
							}
						}
						HX_STACK_LINE(368)
						tmp10 = imp->zpp_inner->z;
					}
					HX_STACK_LINE(368)
					int tmp11 = t;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(368)
					Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(368)
					hx::AddEq(retz,tmp12);
				}
				HX_STACK_LINE(370)
				imp->dispose();
			}
		}
		HX_STACK_LINE(373)
		Float tmp2 = retx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(373)
		Float tmp3 = rety;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(373)
		Float tmp4 = retz;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(373)
		::nape::geom::Vec3 tmp5 = ::nape::geom::Vec3_obj::get(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(373)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(CollisionArbiter_obj,normalImpulse,return )

::nape::geom::Vec3 CollisionArbiter_obj::tangentImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","tangentImpulse",0xec0a4733,"nape.dynamics.CollisionArbiter.tangentImpulse","nape/dynamics/CollisionArbiter.hx",394,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_ARG(freshOnly,"freshOnly")
{
		HX_STACK_LINE(401)
		Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(402)
		Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
		HX_STACK_LINE(419)
		Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
		HX_STACK_LINE(420)
		::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(420)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(421)
		{
			HX_STACK_LINE(422)
			bool tmp1 = freshOnly;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(422)
			bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(422)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(422)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(422)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(422)
			if ((tmp4)){
				HX_STACK_LINE(422)
				tmp5 = colarb->oc1->fresh;
			}
			else{
				HX_STACK_LINE(422)
				tmp5 = true;
			}
			HX_STACK_LINE(422)
			if ((tmp5)){
				HX_STACK_LINE(423)
				::nape::dynamics::Contact tmp6 = colarb->oc1->wrapper();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(423)
				::nape::phys::Body tmp7 = body;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(423)
				::nape::geom::Vec3 tmp8 = tmp6->tangentImpulse(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(423)
				::nape::geom::Vec3 imp = tmp8;		HX_STACK_VAR(imp,"imp");
				HX_STACK_LINE(424)
				{
					HX_STACK_LINE(425)
					int t = (int)1;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(426)
					{
						HX_STACK_LINE(427)
						int t1 = t;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(436)
						Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(436)
						{
							HX_STACK_LINE(436)
							{
								HX_STACK_LINE(436)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(436)
								bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(436)
								if ((tmp10)){
									HX_STACK_LINE(436)
									_this->_validate();
								}
							}
							HX_STACK_LINE(436)
							tmp9 = imp->zpp_inner->x;
						}
						HX_STACK_LINE(436)
						int tmp10 = t1;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(436)
						Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(436)
						hx::AddEq(retx,tmp11);
						HX_STACK_LINE(437)
						Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(437)
						{
							HX_STACK_LINE(437)
							{
								HX_STACK_LINE(437)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(437)
								bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(437)
								if ((tmp13)){
									HX_STACK_LINE(437)
									_this->_validate();
								}
							}
							HX_STACK_LINE(437)
							tmp12 = imp->zpp_inner->y;
						}
						HX_STACK_LINE(437)
						int tmp13 = t1;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(437)
						Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(437)
						hx::AddEq(rety,tmp14);
					}
					HX_STACK_LINE(439)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(439)
					{
						HX_STACK_LINE(439)
						{
							HX_STACK_LINE(439)
							::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(439)
							bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(439)
							if ((tmp10)){
								HX_STACK_LINE(439)
								_this->_validate();
							}
						}
						HX_STACK_LINE(439)
						tmp9 = imp->zpp_inner->z;
					}
					HX_STACK_LINE(439)
					int tmp10 = t;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(439)
					Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(439)
					hx::AddEq(retz,tmp11);
				}
				HX_STACK_LINE(441)
				imp->dispose();
			}
		}
		HX_STACK_LINE(444)
		bool tmp1 = colarb->hc2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(444)
		if ((tmp1)){
			HX_STACK_LINE(445)
			bool tmp2 = freshOnly;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(445)
			bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(445)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(445)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(445)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(445)
			if ((tmp5)){
				HX_STACK_LINE(445)
				tmp6 = colarb->oc2->fresh;
			}
			else{
				HX_STACK_LINE(445)
				tmp6 = true;
			}
			HX_STACK_LINE(445)
			if ((tmp6)){
				HX_STACK_LINE(446)
				::nape::dynamics::Contact tmp7 = colarb->oc2->wrapper();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(446)
				::nape::phys::Body tmp8 = body;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(446)
				::nape::geom::Vec3 tmp9 = tmp7->tangentImpulse(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(446)
				::nape::geom::Vec3 imp = tmp9;		HX_STACK_VAR(imp,"imp");
				HX_STACK_LINE(447)
				{
					HX_STACK_LINE(448)
					int t = (int)1;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(449)
					{
						HX_STACK_LINE(450)
						int t1 = t;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(459)
						Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(459)
						{
							HX_STACK_LINE(459)
							{
								HX_STACK_LINE(459)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(459)
								bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(459)
								if ((tmp11)){
									HX_STACK_LINE(459)
									_this->_validate();
								}
							}
							HX_STACK_LINE(459)
							tmp10 = imp->zpp_inner->x;
						}
						HX_STACK_LINE(459)
						int tmp11 = t1;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(459)
						Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(459)
						hx::AddEq(retx,tmp12);
						HX_STACK_LINE(460)
						Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(460)
						{
							HX_STACK_LINE(460)
							{
								HX_STACK_LINE(460)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(460)
								bool tmp14 = (_this->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(460)
								if ((tmp14)){
									HX_STACK_LINE(460)
									_this->_validate();
								}
							}
							HX_STACK_LINE(460)
							tmp13 = imp->zpp_inner->y;
						}
						HX_STACK_LINE(460)
						int tmp14 = t1;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(460)
						Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(460)
						hx::AddEq(rety,tmp15);
					}
					HX_STACK_LINE(462)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(462)
					{
						HX_STACK_LINE(462)
						{
							HX_STACK_LINE(462)
							::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(462)
							bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(462)
							if ((tmp11)){
								HX_STACK_LINE(462)
								_this->_validate();
							}
						}
						HX_STACK_LINE(462)
						tmp10 = imp->zpp_inner->z;
					}
					HX_STACK_LINE(462)
					int tmp11 = t;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(462)
					Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(462)
					hx::AddEq(retz,tmp12);
				}
				HX_STACK_LINE(464)
				imp->dispose();
			}
		}
		HX_STACK_LINE(467)
		Float tmp2 = retx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(467)
		Float tmp3 = rety;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(467)
		Float tmp4 = retz;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(467)
		::nape::geom::Vec3 tmp5 = ::nape::geom::Vec3_obj::get(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(467)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(CollisionArbiter_obj,tangentImpulse,return )

::nape::geom::Vec3 CollisionArbiter_obj::totalImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","totalImpulse",0x690d3754,"nape.dynamics.CollisionArbiter.totalImpulse","nape/dynamics/CollisionArbiter.hx",485,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_ARG(freshOnly,"freshOnly")
{
		HX_STACK_LINE(492)
		Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(493)
		Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
		HX_STACK_LINE(510)
		Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
		HX_STACK_LINE(511)
		::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(511)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(512)
		{
			HX_STACK_LINE(513)
			bool tmp1 = freshOnly;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(513)
			bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(513)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(513)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(513)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(513)
			if ((tmp4)){
				HX_STACK_LINE(513)
				tmp5 = colarb->oc1->fresh;
			}
			else{
				HX_STACK_LINE(513)
				tmp5 = true;
			}
			HX_STACK_LINE(513)
			if ((tmp5)){
				HX_STACK_LINE(514)
				::nape::dynamics::Contact tmp6 = colarb->oc1->wrapper();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(514)
				::nape::phys::Body tmp7 = body;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(514)
				::nape::geom::Vec3 tmp8 = tmp6->totalImpulse(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(514)
				::nape::geom::Vec3 imp = tmp8;		HX_STACK_VAR(imp,"imp");
				HX_STACK_LINE(515)
				{
					HX_STACK_LINE(516)
					int t = (int)1;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(517)
					{
						HX_STACK_LINE(518)
						int t1 = t;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(527)
						Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(527)
						{
							HX_STACK_LINE(527)
							{
								HX_STACK_LINE(527)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(527)
								bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(527)
								if ((tmp10)){
									HX_STACK_LINE(527)
									_this->_validate();
								}
							}
							HX_STACK_LINE(527)
							tmp9 = imp->zpp_inner->x;
						}
						HX_STACK_LINE(527)
						int tmp10 = t1;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(527)
						Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(527)
						hx::AddEq(retx,tmp11);
						HX_STACK_LINE(528)
						Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(528)
						{
							HX_STACK_LINE(528)
							{
								HX_STACK_LINE(528)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(528)
								bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(528)
								if ((tmp13)){
									HX_STACK_LINE(528)
									_this->_validate();
								}
							}
							HX_STACK_LINE(528)
							tmp12 = imp->zpp_inner->y;
						}
						HX_STACK_LINE(528)
						int tmp13 = t1;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(528)
						Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(528)
						hx::AddEq(rety,tmp14);
					}
					HX_STACK_LINE(530)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(530)
					{
						HX_STACK_LINE(530)
						{
							HX_STACK_LINE(530)
							::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(530)
							bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(530)
							if ((tmp10)){
								HX_STACK_LINE(530)
								_this->_validate();
							}
						}
						HX_STACK_LINE(530)
						tmp9 = imp->zpp_inner->z;
					}
					HX_STACK_LINE(530)
					int tmp10 = t;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(530)
					Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(530)
					hx::AddEq(retz,tmp11);
				}
				HX_STACK_LINE(532)
				imp->dispose();
			}
		}
		HX_STACK_LINE(535)
		bool tmp1 = colarb->hc2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(535)
		if ((tmp1)){
			HX_STACK_LINE(536)
			bool tmp2 = freshOnly;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(536)
			bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(536)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(536)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(536)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(536)
			if ((tmp5)){
				HX_STACK_LINE(536)
				tmp6 = colarb->oc2->fresh;
			}
			else{
				HX_STACK_LINE(536)
				tmp6 = true;
			}
			HX_STACK_LINE(536)
			if ((tmp6)){
				HX_STACK_LINE(537)
				::nape::dynamics::Contact tmp7 = colarb->oc2->wrapper();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(537)
				::nape::phys::Body tmp8 = body;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(537)
				::nape::geom::Vec3 tmp9 = tmp7->totalImpulse(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(537)
				::nape::geom::Vec3 imp = tmp9;		HX_STACK_VAR(imp,"imp");
				HX_STACK_LINE(538)
				{
					HX_STACK_LINE(539)
					int t = (int)1;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(540)
					{
						HX_STACK_LINE(541)
						int t1 = t;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(550)
						Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(550)
						{
							HX_STACK_LINE(550)
							{
								HX_STACK_LINE(550)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(550)
								bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(550)
								if ((tmp11)){
									HX_STACK_LINE(550)
									_this->_validate();
								}
							}
							HX_STACK_LINE(550)
							tmp10 = imp->zpp_inner->x;
						}
						HX_STACK_LINE(550)
						int tmp11 = t1;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(550)
						Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(550)
						hx::AddEq(retx,tmp12);
						HX_STACK_LINE(551)
						Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(551)
						{
							HX_STACK_LINE(551)
							{
								HX_STACK_LINE(551)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(551)
								bool tmp14 = (_this->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(551)
								if ((tmp14)){
									HX_STACK_LINE(551)
									_this->_validate();
								}
							}
							HX_STACK_LINE(551)
							tmp13 = imp->zpp_inner->y;
						}
						HX_STACK_LINE(551)
						int tmp14 = t1;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(551)
						Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(551)
						hx::AddEq(rety,tmp15);
					}
					HX_STACK_LINE(553)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(553)
					{
						HX_STACK_LINE(553)
						{
							HX_STACK_LINE(553)
							::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(553)
							bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(553)
							if ((tmp11)){
								HX_STACK_LINE(553)
								_this->_validate();
							}
						}
						HX_STACK_LINE(553)
						tmp10 = imp->zpp_inner->z;
					}
					HX_STACK_LINE(553)
					int tmp11 = t;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(553)
					Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(553)
					hx::AddEq(retz,tmp12);
				}
				HX_STACK_LINE(555)
				imp->dispose();
			}
		}
		HX_STACK_LINE(558)
		Float tmp2 = retx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(558)
		Float tmp3 = rety;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(558)
		Float tmp4 = retz;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(558)
		::nape::geom::Vec3 tmp5 = ::nape::geom::Vec3_obj::get(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(558)
		return tmp5;
	}
}


Float CollisionArbiter_obj::rollingImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","rollingImpulse",0x51a9ce73,"nape.dynamics.CollisionArbiter.rollingImpulse","nape/dynamics/CollisionArbiter.hx",573,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_ARG(freshOnly,"freshOnly")
{
		HX_STACK_LINE(580)
		::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(580)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(581)
		bool tmp1 = freshOnly;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(581)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(581)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(581)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(581)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(581)
		if ((tmp4)){
			HX_STACK_LINE(581)
			tmp5 = colarb->oc1->fresh;
		}
		else{
			HX_STACK_LINE(581)
			tmp5 = true;
		}
		HX_STACK_LINE(581)
		if ((tmp5)){
			HX_STACK_LINE(581)
			::nape::dynamics::Contact tmp6 = colarb->oc1->wrapper();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(581)
			::nape::phys::Body tmp7 = body;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(581)
			Float tmp8 = tmp6->rollingImpulse(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(581)
			return tmp8;
		}
		else{
			HX_STACK_LINE(582)
			return ((Float)0.0);
		}
		HX_STACK_LINE(581)
		return ((Float)0.);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(CollisionArbiter_obj,rollingImpulse,return )

Float CollisionArbiter_obj::get_elasticity( ){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","get_elasticity",0x4a75c485,"nape.dynamics.CollisionArbiter.get_elasticity","nape/dynamics/CollisionArbiter.hx",596,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(600)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(600)
	::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp->colarb;		HX_STACK_VAR(colarb,"colarb");
	HX_STACK_LINE(601)
	{
		HX_STACK_LINE(601)
		bool tmp1 = colarb->invalidated;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(601)
		if ((tmp1)){
			HX_STACK_LINE(601)
			colarb->invalidated = false;
			HX_STACK_LINE(601)
			{
				HX_STACK_LINE(601)
				bool tmp2 = colarb->userdef_restitution;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(601)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(601)
				if ((tmp3)){
					HX_STACK_LINE(601)
					::zpp_nape::phys::ZPP_Material tmp4 = colarb->s1->material;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(601)
					Float tmp5 = tmp4->elasticity;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(601)
					Float tmp6 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(601)
					bool tmp7 = (tmp5 <= tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(601)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(601)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(601)
					if ((tmp8)){
						HX_STACK_LINE(601)
						::zpp_nape::phys::ZPP_Material tmp10 = colarb->s2->material;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(601)
						::zpp_nape::phys::ZPP_Material tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(601)
						Float tmp12 = tmp11->elasticity;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(601)
						Float tmp13 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(601)
						Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(601)
						tmp9 = (tmp12 <= tmp14);
					}
					else{
						HX_STACK_LINE(601)
						tmp9 = true;
					}
					HX_STACK_LINE(601)
					if ((tmp9)){
						HX_STACK_LINE(601)
						colarb->restitution = (int)0;
					}
					else{
						HX_STACK_LINE(601)
						::zpp_nape::phys::ZPP_Material tmp10 = colarb->s1->material;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(601)
						Float tmp11 = tmp10->elasticity;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(601)
						Float tmp12 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(601)
						bool tmp13 = (tmp11 >= tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(601)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(601)
						bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(601)
						if ((tmp14)){
							HX_STACK_LINE(601)
							::zpp_nape::phys::ZPP_Material tmp16 = colarb->s2->material;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(601)
							::zpp_nape::phys::ZPP_Material tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(601)
							Float tmp18 = tmp17->elasticity;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(601)
							Float tmp19 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(601)
							Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(601)
							tmp15 = (tmp18 >= tmp20);
						}
						else{
							HX_STACK_LINE(601)
							tmp15 = true;
						}
						HX_STACK_LINE(601)
						if ((tmp15)){
							HX_STACK_LINE(601)
							colarb->restitution = (int)1;
						}
						else{
							HX_STACK_LINE(601)
							::zpp_nape::phys::ZPP_Material tmp16 = colarb->s1->material;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(601)
							Float tmp17 = tmp16->elasticity;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(601)
							::zpp_nape::phys::ZPP_Material tmp18 = colarb->s2->material;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(601)
							Float tmp19 = tmp18->elasticity;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(601)
							Float tmp20 = (tmp17 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(601)
							Float tmp21 = (Float(tmp20) / Float((int)2));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(601)
							colarb->restitution = tmp21;
						}
					}
					HX_STACK_LINE(601)
					bool tmp10 = (colarb->restitution < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(601)
					if ((tmp10)){
						HX_STACK_LINE(601)
						colarb->restitution = (int)0;
					}
					HX_STACK_LINE(601)
					bool tmp11 = (colarb->restitution > (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(601)
					if ((tmp11)){
						HX_STACK_LINE(601)
						colarb->restitution = (int)1;
					}
				}
				HX_STACK_LINE(601)
				bool tmp4 = colarb->userdef_dyn_fric;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(601)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(601)
				if ((tmp5)){
					HX_STACK_LINE(601)
					Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(601)
					{
						HX_STACK_LINE(601)
						::zpp_nape::phys::ZPP_Material tmp7 = colarb->s1->material;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(601)
						Float tmp8 = tmp7->dynamicFriction;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(601)
						::zpp_nape::phys::ZPP_Material tmp9 = colarb->s2->material;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(601)
						Float tmp10 = tmp9->dynamicFriction;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(601)
						Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(601)
						tmp6 = ::Math_obj::sqrt(tmp11);
					}
					HX_STACK_LINE(601)
					colarb->dyn_fric = tmp6;
				}
				HX_STACK_LINE(601)
				bool tmp6 = colarb->userdef_stat_fric;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(601)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(601)
				if ((tmp7)){
					HX_STACK_LINE(601)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(601)
					{
						HX_STACK_LINE(601)
						::zpp_nape::phys::ZPP_Material tmp9 = colarb->s1->material;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(601)
						Float tmp10 = tmp9->staticFriction;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(601)
						::zpp_nape::phys::ZPP_Material tmp11 = colarb->s2->material;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(601)
						Float tmp12 = tmp11->staticFriction;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(601)
						Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(601)
						tmp8 = ::Math_obj::sqrt(tmp13);
					}
					HX_STACK_LINE(601)
					colarb->stat_fric = tmp8;
				}
				HX_STACK_LINE(601)
				bool tmp8 = colarb->userdef_rfric;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(601)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(601)
				if ((tmp9)){
					HX_STACK_LINE(601)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(601)
					{
						HX_STACK_LINE(601)
						::zpp_nape::phys::ZPP_Material tmp11 = colarb->s1->material;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(601)
						Float tmp12 = tmp11->rollingFriction;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(601)
						::zpp_nape::phys::ZPP_Material tmp13 = colarb->s2->material;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(601)
						Float tmp14 = tmp13->rollingFriction;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(601)
						Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(601)
						tmp10 = ::Math_obj::sqrt(tmp15);
					}
					HX_STACK_LINE(601)
					colarb->rfric = tmp10;
				}
			}
		}
	}
	HX_STACK_LINE(602)
	Float tmp1 = colarb->restitution;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(602)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_elasticity,return )

Float CollisionArbiter_obj::set_elasticity( Float elasticity){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","set_elasticity",0x6a95acf9,"nape.dynamics.CollisionArbiter.set_elasticity","nape/dynamics/CollisionArbiter.hx",604,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_ARG(elasticity,"elasticity")
	HX_STACK_LINE(605)
	{
		HX_STACK_LINE(614)
		::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(614)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(615)
		colarb->restitution = elasticity;
		HX_STACK_LINE(616)
		colarb->userdef_restitution = true;
	}
	HX_STACK_LINE(618)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(618)
	{
		HX_STACK_LINE(618)
		::zpp_nape::dynamics::ZPP_Arbiter tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(618)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp1->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(618)
		{
			HX_STACK_LINE(618)
			bool tmp2 = colarb->invalidated;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(618)
			if ((tmp2)){
				HX_STACK_LINE(618)
				colarb->invalidated = false;
				HX_STACK_LINE(618)
				{
					HX_STACK_LINE(618)
					bool tmp3 = colarb->userdef_restitution;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(618)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(618)
					if ((tmp4)){
						HX_STACK_LINE(618)
						::zpp_nape::phys::ZPP_Material tmp5 = colarb->s1->material;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(618)
						Float tmp6 = tmp5->elasticity;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(618)
						Float tmp7 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(618)
						bool tmp8 = (tmp6 <= tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(618)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(618)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(618)
						if ((tmp9)){
							HX_STACK_LINE(618)
							::zpp_nape::phys::ZPP_Material tmp11 = colarb->s2->material;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(618)
							::zpp_nape::phys::ZPP_Material tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(618)
							Float tmp13 = tmp12->elasticity;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(618)
							Float tmp14 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(618)
							Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(618)
							tmp10 = (tmp13 <= tmp15);
						}
						else{
							HX_STACK_LINE(618)
							tmp10 = true;
						}
						HX_STACK_LINE(618)
						if ((tmp10)){
							HX_STACK_LINE(618)
							colarb->restitution = (int)0;
						}
						else{
							HX_STACK_LINE(618)
							::zpp_nape::phys::ZPP_Material tmp11 = colarb->s1->material;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(618)
							Float tmp12 = tmp11->elasticity;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(618)
							Float tmp13 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(618)
							bool tmp14 = (tmp12 >= tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(618)
							bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(618)
							bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(618)
							if ((tmp15)){
								HX_STACK_LINE(618)
								::zpp_nape::phys::ZPP_Material tmp17 = colarb->s2->material;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(618)
								::zpp_nape::phys::ZPP_Material tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(618)
								Float tmp19 = tmp18->elasticity;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(618)
								Float tmp20 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(618)
								Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(618)
								tmp16 = (tmp19 >= tmp21);
							}
							else{
								HX_STACK_LINE(618)
								tmp16 = true;
							}
							HX_STACK_LINE(618)
							if ((tmp16)){
								HX_STACK_LINE(618)
								colarb->restitution = (int)1;
							}
							else{
								HX_STACK_LINE(618)
								::zpp_nape::phys::ZPP_Material tmp17 = colarb->s1->material;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(618)
								Float tmp18 = tmp17->elasticity;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(618)
								::zpp_nape::phys::ZPP_Material tmp19 = colarb->s2->material;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(618)
								Float tmp20 = tmp19->elasticity;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(618)
								Float tmp21 = (tmp18 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(618)
								Float tmp22 = (Float(tmp21) / Float((int)2));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(618)
								colarb->restitution = tmp22;
							}
						}
						HX_STACK_LINE(618)
						bool tmp11 = (colarb->restitution < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(618)
						if ((tmp11)){
							HX_STACK_LINE(618)
							colarb->restitution = (int)0;
						}
						HX_STACK_LINE(618)
						bool tmp12 = (colarb->restitution > (int)1);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(618)
						if ((tmp12)){
							HX_STACK_LINE(618)
							colarb->restitution = (int)1;
						}
					}
					HX_STACK_LINE(618)
					bool tmp5 = colarb->userdef_dyn_fric;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(618)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(618)
					if ((tmp6)){
						HX_STACK_LINE(618)
						Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(618)
						{
							HX_STACK_LINE(618)
							::zpp_nape::phys::ZPP_Material tmp8 = colarb->s1->material;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(618)
							Float tmp9 = tmp8->dynamicFriction;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(618)
							::zpp_nape::phys::ZPP_Material tmp10 = colarb->s2->material;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(618)
							Float tmp11 = tmp10->dynamicFriction;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(618)
							Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(618)
							tmp7 = ::Math_obj::sqrt(tmp12);
						}
						HX_STACK_LINE(618)
						colarb->dyn_fric = tmp7;
					}
					HX_STACK_LINE(618)
					bool tmp7 = colarb->userdef_stat_fric;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(618)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(618)
					if ((tmp8)){
						HX_STACK_LINE(618)
						Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(618)
						{
							HX_STACK_LINE(618)
							::zpp_nape::phys::ZPP_Material tmp10 = colarb->s1->material;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(618)
							Float tmp11 = tmp10->staticFriction;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(618)
							::zpp_nape::phys::ZPP_Material tmp12 = colarb->s2->material;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(618)
							Float tmp13 = tmp12->staticFriction;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(618)
							Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(618)
							tmp9 = ::Math_obj::sqrt(tmp14);
						}
						HX_STACK_LINE(618)
						colarb->stat_fric = tmp9;
					}
					HX_STACK_LINE(618)
					bool tmp9 = colarb->userdef_rfric;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(618)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(618)
					if ((tmp10)){
						HX_STACK_LINE(618)
						Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(618)
						{
							HX_STACK_LINE(618)
							::zpp_nape::phys::ZPP_Material tmp12 = colarb->s1->material;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(618)
							Float tmp13 = tmp12->rollingFriction;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(618)
							::zpp_nape::phys::ZPP_Material tmp14 = colarb->s2->material;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(618)
							Float tmp15 = tmp14->rollingFriction;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(618)
							Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(618)
							tmp11 = ::Math_obj::sqrt(tmp16);
						}
						HX_STACK_LINE(618)
						colarb->rfric = tmp11;
					}
				}
			}
		}
		HX_STACK_LINE(618)
		tmp = colarb->restitution;
	}
	HX_STACK_LINE(618)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(CollisionArbiter_obj,set_elasticity,return )

Float CollisionArbiter_obj::get_dynamicFriction( ){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","get_dynamicFriction",0x4389ff0d,"nape.dynamics.CollisionArbiter.get_dynamicFriction","nape/dynamics/CollisionArbiter.hx",631,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(635)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(635)
	::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp->colarb;		HX_STACK_VAR(colarb,"colarb");
	HX_STACK_LINE(636)
	{
		HX_STACK_LINE(636)
		bool tmp1 = colarb->invalidated;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(636)
		if ((tmp1)){
			HX_STACK_LINE(636)
			colarb->invalidated = false;
			HX_STACK_LINE(636)
			{
				HX_STACK_LINE(636)
				bool tmp2 = colarb->userdef_restitution;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(636)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(636)
				if ((tmp3)){
					HX_STACK_LINE(636)
					::zpp_nape::phys::ZPP_Material tmp4 = colarb->s1->material;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(636)
					Float tmp5 = tmp4->elasticity;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(636)
					Float tmp6 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(636)
					bool tmp7 = (tmp5 <= tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(636)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(636)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(636)
					if ((tmp8)){
						HX_STACK_LINE(636)
						::zpp_nape::phys::ZPP_Material tmp10 = colarb->s2->material;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(636)
						::zpp_nape::phys::ZPP_Material tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(636)
						Float tmp12 = tmp11->elasticity;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(636)
						Float tmp13 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(636)
						Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(636)
						tmp9 = (tmp12 <= tmp14);
					}
					else{
						HX_STACK_LINE(636)
						tmp9 = true;
					}
					HX_STACK_LINE(636)
					if ((tmp9)){
						HX_STACK_LINE(636)
						colarb->restitution = (int)0;
					}
					else{
						HX_STACK_LINE(636)
						::zpp_nape::phys::ZPP_Material tmp10 = colarb->s1->material;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(636)
						Float tmp11 = tmp10->elasticity;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(636)
						Float tmp12 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(636)
						bool tmp13 = (tmp11 >= tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(636)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(636)
						bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(636)
						if ((tmp14)){
							HX_STACK_LINE(636)
							::zpp_nape::phys::ZPP_Material tmp16 = colarb->s2->material;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(636)
							::zpp_nape::phys::ZPP_Material tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(636)
							Float tmp18 = tmp17->elasticity;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(636)
							Float tmp19 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(636)
							Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(636)
							tmp15 = (tmp18 >= tmp20);
						}
						else{
							HX_STACK_LINE(636)
							tmp15 = true;
						}
						HX_STACK_LINE(636)
						if ((tmp15)){
							HX_STACK_LINE(636)
							colarb->restitution = (int)1;
						}
						else{
							HX_STACK_LINE(636)
							::zpp_nape::phys::ZPP_Material tmp16 = colarb->s1->material;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(636)
							Float tmp17 = tmp16->elasticity;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(636)
							::zpp_nape::phys::ZPP_Material tmp18 = colarb->s2->material;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(636)
							Float tmp19 = tmp18->elasticity;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(636)
							Float tmp20 = (tmp17 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(636)
							Float tmp21 = (Float(tmp20) / Float((int)2));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(636)
							colarb->restitution = tmp21;
						}
					}
					HX_STACK_LINE(636)
					bool tmp10 = (colarb->restitution < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(636)
					if ((tmp10)){
						HX_STACK_LINE(636)
						colarb->restitution = (int)0;
					}
					HX_STACK_LINE(636)
					bool tmp11 = (colarb->restitution > (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(636)
					if ((tmp11)){
						HX_STACK_LINE(636)
						colarb->restitution = (int)1;
					}
				}
				HX_STACK_LINE(636)
				bool tmp4 = colarb->userdef_dyn_fric;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(636)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(636)
				if ((tmp5)){
					HX_STACK_LINE(636)
					Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(636)
					{
						HX_STACK_LINE(636)
						::zpp_nape::phys::ZPP_Material tmp7 = colarb->s1->material;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(636)
						Float tmp8 = tmp7->dynamicFriction;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(636)
						::zpp_nape::phys::ZPP_Material tmp9 = colarb->s2->material;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(636)
						Float tmp10 = tmp9->dynamicFriction;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(636)
						Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(636)
						tmp6 = ::Math_obj::sqrt(tmp11);
					}
					HX_STACK_LINE(636)
					colarb->dyn_fric = tmp6;
				}
				HX_STACK_LINE(636)
				bool tmp6 = colarb->userdef_stat_fric;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(636)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(636)
				if ((tmp7)){
					HX_STACK_LINE(636)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(636)
					{
						HX_STACK_LINE(636)
						::zpp_nape::phys::ZPP_Material tmp9 = colarb->s1->material;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(636)
						Float tmp10 = tmp9->staticFriction;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(636)
						::zpp_nape::phys::ZPP_Material tmp11 = colarb->s2->material;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(636)
						Float tmp12 = tmp11->staticFriction;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(636)
						Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(636)
						tmp8 = ::Math_obj::sqrt(tmp13);
					}
					HX_STACK_LINE(636)
					colarb->stat_fric = tmp8;
				}
				HX_STACK_LINE(636)
				bool tmp8 = colarb->userdef_rfric;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(636)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(636)
				if ((tmp9)){
					HX_STACK_LINE(636)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(636)
					{
						HX_STACK_LINE(636)
						::zpp_nape::phys::ZPP_Material tmp11 = colarb->s1->material;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(636)
						Float tmp12 = tmp11->rollingFriction;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(636)
						::zpp_nape::phys::ZPP_Material tmp13 = colarb->s2->material;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(636)
						Float tmp14 = tmp13->rollingFriction;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(636)
						Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(636)
						tmp10 = ::Math_obj::sqrt(tmp15);
					}
					HX_STACK_LINE(636)
					colarb->rfric = tmp10;
				}
			}
		}
	}
	HX_STACK_LINE(637)
	Float tmp1 = colarb->dyn_fric;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(637)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_dynamicFriction,return )

Float CollisionArbiter_obj::set_dynamicFriction( Float dynamicFriction){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","set_dynamicFriction",0x8026f219,"nape.dynamics.CollisionArbiter.set_dynamicFriction","nape/dynamics/CollisionArbiter.hx",639,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dynamicFriction,"dynamicFriction")
	HX_STACK_LINE(640)
	{
		HX_STACK_LINE(649)
		::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(649)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(650)
		colarb->dyn_fric = dynamicFriction;
		HX_STACK_LINE(651)
		colarb->userdef_dyn_fric = true;
	}
	HX_STACK_LINE(653)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(653)
	{
		HX_STACK_LINE(653)
		::zpp_nape::dynamics::ZPP_Arbiter tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(653)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp1->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(653)
		{
			HX_STACK_LINE(653)
			bool tmp2 = colarb->invalidated;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(653)
			if ((tmp2)){
				HX_STACK_LINE(653)
				colarb->invalidated = false;
				HX_STACK_LINE(653)
				{
					HX_STACK_LINE(653)
					bool tmp3 = colarb->userdef_restitution;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(653)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(653)
					if ((tmp4)){
						HX_STACK_LINE(653)
						::zpp_nape::phys::ZPP_Material tmp5 = colarb->s1->material;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(653)
						Float tmp6 = tmp5->elasticity;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(653)
						Float tmp7 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(653)
						bool tmp8 = (tmp6 <= tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(653)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(653)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(653)
						if ((tmp9)){
							HX_STACK_LINE(653)
							::zpp_nape::phys::ZPP_Material tmp11 = colarb->s2->material;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(653)
							::zpp_nape::phys::ZPP_Material tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(653)
							Float tmp13 = tmp12->elasticity;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(653)
							Float tmp14 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(653)
							Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(653)
							tmp10 = (tmp13 <= tmp15);
						}
						else{
							HX_STACK_LINE(653)
							tmp10 = true;
						}
						HX_STACK_LINE(653)
						if ((tmp10)){
							HX_STACK_LINE(653)
							colarb->restitution = (int)0;
						}
						else{
							HX_STACK_LINE(653)
							::zpp_nape::phys::ZPP_Material tmp11 = colarb->s1->material;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(653)
							Float tmp12 = tmp11->elasticity;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(653)
							Float tmp13 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(653)
							bool tmp14 = (tmp12 >= tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(653)
							bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(653)
							bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(653)
							if ((tmp15)){
								HX_STACK_LINE(653)
								::zpp_nape::phys::ZPP_Material tmp17 = colarb->s2->material;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(653)
								::zpp_nape::phys::ZPP_Material tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(653)
								Float tmp19 = tmp18->elasticity;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(653)
								Float tmp20 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(653)
								Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(653)
								tmp16 = (tmp19 >= tmp21);
							}
							else{
								HX_STACK_LINE(653)
								tmp16 = true;
							}
							HX_STACK_LINE(653)
							if ((tmp16)){
								HX_STACK_LINE(653)
								colarb->restitution = (int)1;
							}
							else{
								HX_STACK_LINE(653)
								::zpp_nape::phys::ZPP_Material tmp17 = colarb->s1->material;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(653)
								Float tmp18 = tmp17->elasticity;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(653)
								::zpp_nape::phys::ZPP_Material tmp19 = colarb->s2->material;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(653)
								Float tmp20 = tmp19->elasticity;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(653)
								Float tmp21 = (tmp18 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(653)
								Float tmp22 = (Float(tmp21) / Float((int)2));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(653)
								colarb->restitution = tmp22;
							}
						}
						HX_STACK_LINE(653)
						bool tmp11 = (colarb->restitution < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(653)
						if ((tmp11)){
							HX_STACK_LINE(653)
							colarb->restitution = (int)0;
						}
						HX_STACK_LINE(653)
						bool tmp12 = (colarb->restitution > (int)1);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(653)
						if ((tmp12)){
							HX_STACK_LINE(653)
							colarb->restitution = (int)1;
						}
					}
					HX_STACK_LINE(653)
					bool tmp5 = colarb->userdef_dyn_fric;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(653)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(653)
					if ((tmp6)){
						HX_STACK_LINE(653)
						Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(653)
						{
							HX_STACK_LINE(653)
							::zpp_nape::phys::ZPP_Material tmp8 = colarb->s1->material;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(653)
							Float tmp9 = tmp8->dynamicFriction;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(653)
							::zpp_nape::phys::ZPP_Material tmp10 = colarb->s2->material;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(653)
							Float tmp11 = tmp10->dynamicFriction;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(653)
							Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(653)
							tmp7 = ::Math_obj::sqrt(tmp12);
						}
						HX_STACK_LINE(653)
						colarb->dyn_fric = tmp7;
					}
					HX_STACK_LINE(653)
					bool tmp7 = colarb->userdef_stat_fric;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(653)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(653)
					if ((tmp8)){
						HX_STACK_LINE(653)
						Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(653)
						{
							HX_STACK_LINE(653)
							::zpp_nape::phys::ZPP_Material tmp10 = colarb->s1->material;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(653)
							Float tmp11 = tmp10->staticFriction;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(653)
							::zpp_nape::phys::ZPP_Material tmp12 = colarb->s2->material;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(653)
							Float tmp13 = tmp12->staticFriction;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(653)
							Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(653)
							tmp9 = ::Math_obj::sqrt(tmp14);
						}
						HX_STACK_LINE(653)
						colarb->stat_fric = tmp9;
					}
					HX_STACK_LINE(653)
					bool tmp9 = colarb->userdef_rfric;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(653)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(653)
					if ((tmp10)){
						HX_STACK_LINE(653)
						Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(653)
						{
							HX_STACK_LINE(653)
							::zpp_nape::phys::ZPP_Material tmp12 = colarb->s1->material;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(653)
							Float tmp13 = tmp12->rollingFriction;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(653)
							::zpp_nape::phys::ZPP_Material tmp14 = colarb->s2->material;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(653)
							Float tmp15 = tmp14->rollingFriction;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(653)
							Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(653)
							tmp11 = ::Math_obj::sqrt(tmp16);
						}
						HX_STACK_LINE(653)
						colarb->rfric = tmp11;
					}
				}
			}
		}
		HX_STACK_LINE(653)
		tmp = colarb->dyn_fric;
	}
	HX_STACK_LINE(653)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(CollisionArbiter_obj,set_dynamicFriction,return )

Float CollisionArbiter_obj::get_staticFriction( ){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","get_staticFriction",0x9e3d86d4,"nape.dynamics.CollisionArbiter.get_staticFriction","nape/dynamics/CollisionArbiter.hx",666,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(670)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(670)
	::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp->colarb;		HX_STACK_VAR(colarb,"colarb");
	HX_STACK_LINE(671)
	{
		HX_STACK_LINE(671)
		bool tmp1 = colarb->invalidated;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(671)
		if ((tmp1)){
			HX_STACK_LINE(671)
			colarb->invalidated = false;
			HX_STACK_LINE(671)
			{
				HX_STACK_LINE(671)
				bool tmp2 = colarb->userdef_restitution;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(671)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(671)
				if ((tmp3)){
					HX_STACK_LINE(671)
					::zpp_nape::phys::ZPP_Material tmp4 = colarb->s1->material;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(671)
					Float tmp5 = tmp4->elasticity;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(671)
					Float tmp6 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(671)
					bool tmp7 = (tmp5 <= tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(671)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(671)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(671)
					if ((tmp8)){
						HX_STACK_LINE(671)
						::zpp_nape::phys::ZPP_Material tmp10 = colarb->s2->material;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(671)
						::zpp_nape::phys::ZPP_Material tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(671)
						Float tmp12 = tmp11->elasticity;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(671)
						Float tmp13 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(671)
						Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(671)
						tmp9 = (tmp12 <= tmp14);
					}
					else{
						HX_STACK_LINE(671)
						tmp9 = true;
					}
					HX_STACK_LINE(671)
					if ((tmp9)){
						HX_STACK_LINE(671)
						colarb->restitution = (int)0;
					}
					else{
						HX_STACK_LINE(671)
						::zpp_nape::phys::ZPP_Material tmp10 = colarb->s1->material;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(671)
						Float tmp11 = tmp10->elasticity;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(671)
						Float tmp12 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(671)
						bool tmp13 = (tmp11 >= tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(671)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(671)
						bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(671)
						if ((tmp14)){
							HX_STACK_LINE(671)
							::zpp_nape::phys::ZPP_Material tmp16 = colarb->s2->material;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(671)
							::zpp_nape::phys::ZPP_Material tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(671)
							Float tmp18 = tmp17->elasticity;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(671)
							Float tmp19 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(671)
							Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(671)
							tmp15 = (tmp18 >= tmp20);
						}
						else{
							HX_STACK_LINE(671)
							tmp15 = true;
						}
						HX_STACK_LINE(671)
						if ((tmp15)){
							HX_STACK_LINE(671)
							colarb->restitution = (int)1;
						}
						else{
							HX_STACK_LINE(671)
							::zpp_nape::phys::ZPP_Material tmp16 = colarb->s1->material;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(671)
							Float tmp17 = tmp16->elasticity;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(671)
							::zpp_nape::phys::ZPP_Material tmp18 = colarb->s2->material;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(671)
							Float tmp19 = tmp18->elasticity;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(671)
							Float tmp20 = (tmp17 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(671)
							Float tmp21 = (Float(tmp20) / Float((int)2));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(671)
							colarb->restitution = tmp21;
						}
					}
					HX_STACK_LINE(671)
					bool tmp10 = (colarb->restitution < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(671)
					if ((tmp10)){
						HX_STACK_LINE(671)
						colarb->restitution = (int)0;
					}
					HX_STACK_LINE(671)
					bool tmp11 = (colarb->restitution > (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(671)
					if ((tmp11)){
						HX_STACK_LINE(671)
						colarb->restitution = (int)1;
					}
				}
				HX_STACK_LINE(671)
				bool tmp4 = colarb->userdef_dyn_fric;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(671)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(671)
				if ((tmp5)){
					HX_STACK_LINE(671)
					Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(671)
					{
						HX_STACK_LINE(671)
						::zpp_nape::phys::ZPP_Material tmp7 = colarb->s1->material;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(671)
						Float tmp8 = tmp7->dynamicFriction;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(671)
						::zpp_nape::phys::ZPP_Material tmp9 = colarb->s2->material;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(671)
						Float tmp10 = tmp9->dynamicFriction;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(671)
						Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(671)
						tmp6 = ::Math_obj::sqrt(tmp11);
					}
					HX_STACK_LINE(671)
					colarb->dyn_fric = tmp6;
				}
				HX_STACK_LINE(671)
				bool tmp6 = colarb->userdef_stat_fric;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(671)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(671)
				if ((tmp7)){
					HX_STACK_LINE(671)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(671)
					{
						HX_STACK_LINE(671)
						::zpp_nape::phys::ZPP_Material tmp9 = colarb->s1->material;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(671)
						Float tmp10 = tmp9->staticFriction;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(671)
						::zpp_nape::phys::ZPP_Material tmp11 = colarb->s2->material;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(671)
						Float tmp12 = tmp11->staticFriction;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(671)
						Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(671)
						tmp8 = ::Math_obj::sqrt(tmp13);
					}
					HX_STACK_LINE(671)
					colarb->stat_fric = tmp8;
				}
				HX_STACK_LINE(671)
				bool tmp8 = colarb->userdef_rfric;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(671)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(671)
				if ((tmp9)){
					HX_STACK_LINE(671)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(671)
					{
						HX_STACK_LINE(671)
						::zpp_nape::phys::ZPP_Material tmp11 = colarb->s1->material;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(671)
						Float tmp12 = tmp11->rollingFriction;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(671)
						::zpp_nape::phys::ZPP_Material tmp13 = colarb->s2->material;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(671)
						Float tmp14 = tmp13->rollingFriction;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(671)
						Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(671)
						tmp10 = ::Math_obj::sqrt(tmp15);
					}
					HX_STACK_LINE(671)
					colarb->rfric = tmp10;
				}
			}
		}
	}
	HX_STACK_LINE(672)
	Float tmp1 = colarb->stat_fric;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(672)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_staticFriction,return )

Float CollisionArbiter_obj::set_staticFriction( Float staticFriction){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","set_staticFriction",0x7aecb948,"nape.dynamics.CollisionArbiter.set_staticFriction","nape/dynamics/CollisionArbiter.hx",674,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_ARG(staticFriction,"staticFriction")
	HX_STACK_LINE(675)
	{
		HX_STACK_LINE(684)
		::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(684)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(685)
		colarb->stat_fric = staticFriction;
		HX_STACK_LINE(686)
		colarb->userdef_stat_fric = true;
	}
	HX_STACK_LINE(688)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(688)
	{
		HX_STACK_LINE(688)
		::zpp_nape::dynamics::ZPP_Arbiter tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(688)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp1->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(688)
		{
			HX_STACK_LINE(688)
			bool tmp2 = colarb->invalidated;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(688)
			if ((tmp2)){
				HX_STACK_LINE(688)
				colarb->invalidated = false;
				HX_STACK_LINE(688)
				{
					HX_STACK_LINE(688)
					bool tmp3 = colarb->userdef_restitution;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(688)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(688)
					if ((tmp4)){
						HX_STACK_LINE(688)
						::zpp_nape::phys::ZPP_Material tmp5 = colarb->s1->material;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(688)
						Float tmp6 = tmp5->elasticity;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(688)
						Float tmp7 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(688)
						bool tmp8 = (tmp6 <= tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(688)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(688)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(688)
						if ((tmp9)){
							HX_STACK_LINE(688)
							::zpp_nape::phys::ZPP_Material tmp11 = colarb->s2->material;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(688)
							::zpp_nape::phys::ZPP_Material tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(688)
							Float tmp13 = tmp12->elasticity;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(688)
							Float tmp14 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(688)
							Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(688)
							tmp10 = (tmp13 <= tmp15);
						}
						else{
							HX_STACK_LINE(688)
							tmp10 = true;
						}
						HX_STACK_LINE(688)
						if ((tmp10)){
							HX_STACK_LINE(688)
							colarb->restitution = (int)0;
						}
						else{
							HX_STACK_LINE(688)
							::zpp_nape::phys::ZPP_Material tmp11 = colarb->s1->material;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(688)
							Float tmp12 = tmp11->elasticity;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(688)
							Float tmp13 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(688)
							bool tmp14 = (tmp12 >= tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(688)
							bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(688)
							bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(688)
							if ((tmp15)){
								HX_STACK_LINE(688)
								::zpp_nape::phys::ZPP_Material tmp17 = colarb->s2->material;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(688)
								::zpp_nape::phys::ZPP_Material tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(688)
								Float tmp19 = tmp18->elasticity;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(688)
								Float tmp20 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(688)
								Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(688)
								tmp16 = (tmp19 >= tmp21);
							}
							else{
								HX_STACK_LINE(688)
								tmp16 = true;
							}
							HX_STACK_LINE(688)
							if ((tmp16)){
								HX_STACK_LINE(688)
								colarb->restitution = (int)1;
							}
							else{
								HX_STACK_LINE(688)
								::zpp_nape::phys::ZPP_Material tmp17 = colarb->s1->material;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(688)
								Float tmp18 = tmp17->elasticity;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(688)
								::zpp_nape::phys::ZPP_Material tmp19 = colarb->s2->material;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(688)
								Float tmp20 = tmp19->elasticity;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(688)
								Float tmp21 = (tmp18 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(688)
								Float tmp22 = (Float(tmp21) / Float((int)2));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(688)
								colarb->restitution = tmp22;
							}
						}
						HX_STACK_LINE(688)
						bool tmp11 = (colarb->restitution < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(688)
						if ((tmp11)){
							HX_STACK_LINE(688)
							colarb->restitution = (int)0;
						}
						HX_STACK_LINE(688)
						bool tmp12 = (colarb->restitution > (int)1);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(688)
						if ((tmp12)){
							HX_STACK_LINE(688)
							colarb->restitution = (int)1;
						}
					}
					HX_STACK_LINE(688)
					bool tmp5 = colarb->userdef_dyn_fric;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(688)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(688)
					if ((tmp6)){
						HX_STACK_LINE(688)
						Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(688)
						{
							HX_STACK_LINE(688)
							::zpp_nape::phys::ZPP_Material tmp8 = colarb->s1->material;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(688)
							Float tmp9 = tmp8->dynamicFriction;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(688)
							::zpp_nape::phys::ZPP_Material tmp10 = colarb->s2->material;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(688)
							Float tmp11 = tmp10->dynamicFriction;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(688)
							Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(688)
							tmp7 = ::Math_obj::sqrt(tmp12);
						}
						HX_STACK_LINE(688)
						colarb->dyn_fric = tmp7;
					}
					HX_STACK_LINE(688)
					bool tmp7 = colarb->userdef_stat_fric;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(688)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(688)
					if ((tmp8)){
						HX_STACK_LINE(688)
						Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(688)
						{
							HX_STACK_LINE(688)
							::zpp_nape::phys::ZPP_Material tmp10 = colarb->s1->material;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(688)
							Float tmp11 = tmp10->staticFriction;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(688)
							::zpp_nape::phys::ZPP_Material tmp12 = colarb->s2->material;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(688)
							Float tmp13 = tmp12->staticFriction;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(688)
							Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(688)
							tmp9 = ::Math_obj::sqrt(tmp14);
						}
						HX_STACK_LINE(688)
						colarb->stat_fric = tmp9;
					}
					HX_STACK_LINE(688)
					bool tmp9 = colarb->userdef_rfric;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(688)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(688)
					if ((tmp10)){
						HX_STACK_LINE(688)
						Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(688)
						{
							HX_STACK_LINE(688)
							::zpp_nape::phys::ZPP_Material tmp12 = colarb->s1->material;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(688)
							Float tmp13 = tmp12->rollingFriction;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(688)
							::zpp_nape::phys::ZPP_Material tmp14 = colarb->s2->material;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(688)
							Float tmp15 = tmp14->rollingFriction;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(688)
							Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(688)
							tmp11 = ::Math_obj::sqrt(tmp16);
						}
						HX_STACK_LINE(688)
						colarb->rfric = tmp11;
					}
				}
			}
		}
		HX_STACK_LINE(688)
		tmp = colarb->stat_fric;
	}
	HX_STACK_LINE(688)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(CollisionArbiter_obj,set_staticFriction,return )

Float CollisionArbiter_obj::get_rollingFriction( ){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","get_rollingFriction",0x20008313,"nape.dynamics.CollisionArbiter.get_rollingFriction","nape/dynamics/CollisionArbiter.hx",701,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(705)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(705)
	::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp->colarb;		HX_STACK_VAR(colarb,"colarb");
	HX_STACK_LINE(706)
	{
		HX_STACK_LINE(706)
		bool tmp1 = colarb->invalidated;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(706)
		if ((tmp1)){
			HX_STACK_LINE(706)
			colarb->invalidated = false;
			HX_STACK_LINE(706)
			{
				HX_STACK_LINE(706)
				bool tmp2 = colarb->userdef_restitution;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(706)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(706)
				if ((tmp3)){
					HX_STACK_LINE(706)
					::zpp_nape::phys::ZPP_Material tmp4 = colarb->s1->material;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(706)
					Float tmp5 = tmp4->elasticity;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(706)
					Float tmp6 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(706)
					bool tmp7 = (tmp5 <= tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(706)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(706)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(706)
					if ((tmp8)){
						HX_STACK_LINE(706)
						::zpp_nape::phys::ZPP_Material tmp10 = colarb->s2->material;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(706)
						::zpp_nape::phys::ZPP_Material tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(706)
						Float tmp12 = tmp11->elasticity;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(706)
						Float tmp13 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(706)
						Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(706)
						tmp9 = (tmp12 <= tmp14);
					}
					else{
						HX_STACK_LINE(706)
						tmp9 = true;
					}
					HX_STACK_LINE(706)
					if ((tmp9)){
						HX_STACK_LINE(706)
						colarb->restitution = (int)0;
					}
					else{
						HX_STACK_LINE(706)
						::zpp_nape::phys::ZPP_Material tmp10 = colarb->s1->material;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(706)
						Float tmp11 = tmp10->elasticity;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(706)
						Float tmp12 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(706)
						bool tmp13 = (tmp11 >= tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(706)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(706)
						bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(706)
						if ((tmp14)){
							HX_STACK_LINE(706)
							::zpp_nape::phys::ZPP_Material tmp16 = colarb->s2->material;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(706)
							::zpp_nape::phys::ZPP_Material tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(706)
							Float tmp18 = tmp17->elasticity;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(706)
							Float tmp19 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(706)
							Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(706)
							tmp15 = (tmp18 >= tmp20);
						}
						else{
							HX_STACK_LINE(706)
							tmp15 = true;
						}
						HX_STACK_LINE(706)
						if ((tmp15)){
							HX_STACK_LINE(706)
							colarb->restitution = (int)1;
						}
						else{
							HX_STACK_LINE(706)
							::zpp_nape::phys::ZPP_Material tmp16 = colarb->s1->material;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(706)
							Float tmp17 = tmp16->elasticity;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(706)
							::zpp_nape::phys::ZPP_Material tmp18 = colarb->s2->material;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(706)
							Float tmp19 = tmp18->elasticity;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(706)
							Float tmp20 = (tmp17 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(706)
							Float tmp21 = (Float(tmp20) / Float((int)2));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(706)
							colarb->restitution = tmp21;
						}
					}
					HX_STACK_LINE(706)
					bool tmp10 = (colarb->restitution < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(706)
					if ((tmp10)){
						HX_STACK_LINE(706)
						colarb->restitution = (int)0;
					}
					HX_STACK_LINE(706)
					bool tmp11 = (colarb->restitution > (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(706)
					if ((tmp11)){
						HX_STACK_LINE(706)
						colarb->restitution = (int)1;
					}
				}
				HX_STACK_LINE(706)
				bool tmp4 = colarb->userdef_dyn_fric;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(706)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(706)
				if ((tmp5)){
					HX_STACK_LINE(706)
					Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(706)
					{
						HX_STACK_LINE(706)
						::zpp_nape::phys::ZPP_Material tmp7 = colarb->s1->material;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(706)
						Float tmp8 = tmp7->dynamicFriction;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(706)
						::zpp_nape::phys::ZPP_Material tmp9 = colarb->s2->material;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(706)
						Float tmp10 = tmp9->dynamicFriction;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(706)
						Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(706)
						tmp6 = ::Math_obj::sqrt(tmp11);
					}
					HX_STACK_LINE(706)
					colarb->dyn_fric = tmp6;
				}
				HX_STACK_LINE(706)
				bool tmp6 = colarb->userdef_stat_fric;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(706)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(706)
				if ((tmp7)){
					HX_STACK_LINE(706)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(706)
					{
						HX_STACK_LINE(706)
						::zpp_nape::phys::ZPP_Material tmp9 = colarb->s1->material;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(706)
						Float tmp10 = tmp9->staticFriction;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(706)
						::zpp_nape::phys::ZPP_Material tmp11 = colarb->s2->material;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(706)
						Float tmp12 = tmp11->staticFriction;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(706)
						Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(706)
						tmp8 = ::Math_obj::sqrt(tmp13);
					}
					HX_STACK_LINE(706)
					colarb->stat_fric = tmp8;
				}
				HX_STACK_LINE(706)
				bool tmp8 = colarb->userdef_rfric;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(706)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(706)
				if ((tmp9)){
					HX_STACK_LINE(706)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(706)
					{
						HX_STACK_LINE(706)
						::zpp_nape::phys::ZPP_Material tmp11 = colarb->s1->material;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(706)
						Float tmp12 = tmp11->rollingFriction;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(706)
						::zpp_nape::phys::ZPP_Material tmp13 = colarb->s2->material;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(706)
						Float tmp14 = tmp13->rollingFriction;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(706)
						Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(706)
						tmp10 = ::Math_obj::sqrt(tmp15);
					}
					HX_STACK_LINE(706)
					colarb->rfric = tmp10;
				}
			}
		}
	}
	HX_STACK_LINE(707)
	Float tmp1 = colarb->rfric;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(707)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_rollingFriction,return )

Float CollisionArbiter_obj::set_rollingFriction( Float rollingFriction){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","set_rollingFriction",0x5c9d761f,"nape.dynamics.CollisionArbiter.set_rollingFriction","nape/dynamics/CollisionArbiter.hx",709,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rollingFriction,"rollingFriction")
	HX_STACK_LINE(710)
	{
		HX_STACK_LINE(719)
		::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(719)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(720)
		colarb->rfric = rollingFriction;
		HX_STACK_LINE(721)
		colarb->userdef_rfric = true;
	}
	HX_STACK_LINE(723)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(723)
	{
		HX_STACK_LINE(723)
		::zpp_nape::dynamics::ZPP_Arbiter tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(723)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp1->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(723)
		{
			HX_STACK_LINE(723)
			bool tmp2 = colarb->invalidated;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(723)
			if ((tmp2)){
				HX_STACK_LINE(723)
				colarb->invalidated = false;
				HX_STACK_LINE(723)
				{
					HX_STACK_LINE(723)
					bool tmp3 = colarb->userdef_restitution;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(723)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(723)
					if ((tmp4)){
						HX_STACK_LINE(723)
						::zpp_nape::phys::ZPP_Material tmp5 = colarb->s1->material;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(723)
						Float tmp6 = tmp5->elasticity;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(723)
						Float tmp7 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(723)
						bool tmp8 = (tmp6 <= tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(723)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(723)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(723)
						if ((tmp9)){
							HX_STACK_LINE(723)
							::zpp_nape::phys::ZPP_Material tmp11 = colarb->s2->material;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(723)
							::zpp_nape::phys::ZPP_Material tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(723)
							Float tmp13 = tmp12->elasticity;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(723)
							Float tmp14 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(723)
							Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(723)
							tmp10 = (tmp13 <= tmp15);
						}
						else{
							HX_STACK_LINE(723)
							tmp10 = true;
						}
						HX_STACK_LINE(723)
						if ((tmp10)){
							HX_STACK_LINE(723)
							colarb->restitution = (int)0;
						}
						else{
							HX_STACK_LINE(723)
							::zpp_nape::phys::ZPP_Material tmp11 = colarb->s1->material;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(723)
							Float tmp12 = tmp11->elasticity;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(723)
							Float tmp13 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(723)
							bool tmp14 = (tmp12 >= tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(723)
							bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(723)
							bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(723)
							if ((tmp15)){
								HX_STACK_LINE(723)
								::zpp_nape::phys::ZPP_Material tmp17 = colarb->s2->material;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(723)
								::zpp_nape::phys::ZPP_Material tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(723)
								Float tmp19 = tmp18->elasticity;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(723)
								Float tmp20 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(723)
								Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(723)
								tmp16 = (tmp19 >= tmp21);
							}
							else{
								HX_STACK_LINE(723)
								tmp16 = true;
							}
							HX_STACK_LINE(723)
							if ((tmp16)){
								HX_STACK_LINE(723)
								colarb->restitution = (int)1;
							}
							else{
								HX_STACK_LINE(723)
								::zpp_nape::phys::ZPP_Material tmp17 = colarb->s1->material;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(723)
								Float tmp18 = tmp17->elasticity;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(723)
								::zpp_nape::phys::ZPP_Material tmp19 = colarb->s2->material;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(723)
								Float tmp20 = tmp19->elasticity;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(723)
								Float tmp21 = (tmp18 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(723)
								Float tmp22 = (Float(tmp21) / Float((int)2));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(723)
								colarb->restitution = tmp22;
							}
						}
						HX_STACK_LINE(723)
						bool tmp11 = (colarb->restitution < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(723)
						if ((tmp11)){
							HX_STACK_LINE(723)
							colarb->restitution = (int)0;
						}
						HX_STACK_LINE(723)
						bool tmp12 = (colarb->restitution > (int)1);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(723)
						if ((tmp12)){
							HX_STACK_LINE(723)
							colarb->restitution = (int)1;
						}
					}
					HX_STACK_LINE(723)
					bool tmp5 = colarb->userdef_dyn_fric;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(723)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(723)
					if ((tmp6)){
						HX_STACK_LINE(723)
						Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(723)
						{
							HX_STACK_LINE(723)
							::zpp_nape::phys::ZPP_Material tmp8 = colarb->s1->material;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(723)
							Float tmp9 = tmp8->dynamicFriction;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(723)
							::zpp_nape::phys::ZPP_Material tmp10 = colarb->s2->material;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(723)
							Float tmp11 = tmp10->dynamicFriction;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(723)
							Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(723)
							tmp7 = ::Math_obj::sqrt(tmp12);
						}
						HX_STACK_LINE(723)
						colarb->dyn_fric = tmp7;
					}
					HX_STACK_LINE(723)
					bool tmp7 = colarb->userdef_stat_fric;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(723)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(723)
					if ((tmp8)){
						HX_STACK_LINE(723)
						Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(723)
						{
							HX_STACK_LINE(723)
							::zpp_nape::phys::ZPP_Material tmp10 = colarb->s1->material;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(723)
							Float tmp11 = tmp10->staticFriction;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(723)
							::zpp_nape::phys::ZPP_Material tmp12 = colarb->s2->material;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(723)
							Float tmp13 = tmp12->staticFriction;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(723)
							Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(723)
							tmp9 = ::Math_obj::sqrt(tmp14);
						}
						HX_STACK_LINE(723)
						colarb->stat_fric = tmp9;
					}
					HX_STACK_LINE(723)
					bool tmp9 = colarb->userdef_rfric;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(723)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(723)
					if ((tmp10)){
						HX_STACK_LINE(723)
						Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(723)
						{
							HX_STACK_LINE(723)
							::zpp_nape::phys::ZPP_Material tmp12 = colarb->s1->material;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(723)
							Float tmp13 = tmp12->rollingFriction;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(723)
							::zpp_nape::phys::ZPP_Material tmp14 = colarb->s2->material;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(723)
							Float tmp15 = tmp14->rollingFriction;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(723)
							Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(723)
							tmp11 = ::Math_obj::sqrt(tmp16);
						}
						HX_STACK_LINE(723)
						colarb->rfric = tmp11;
					}
				}
			}
		}
		HX_STACK_LINE(723)
		tmp = colarb->rfric;
	}
	HX_STACK_LINE(723)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(CollisionArbiter_obj,set_rollingFriction,return )


CollisionArbiter_obj::CollisionArbiter_obj()
{
}

Dynamic CollisionArbiter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"normal") ) { if (inCallProp == hx::paccAlways) return get_normal(); }
		if (HX_FIELD_EQ(inName,"radius") ) { if (inCallProp == hx::paccAlways) return get_radius(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contacts") ) { if (inCallProp == hx::paccAlways) return get_contacts(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_normal") ) { return get_normal_dyn(); }
		if (HX_FIELD_EQ(inName,"get_radius") ) { return get_radius_dyn(); }
		if (HX_FIELD_EQ(inName,"elasticity") ) { if (inCallProp == hx::paccAlways) return get_elasticity(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"firstVertex") ) { return firstVertex_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_contacts") ) { return get_contacts_dyn(); }
		if (HX_FIELD_EQ(inName,"secondVertex") ) { return secondVertex_dyn(); }
		if (HX_FIELD_EQ(inName,"totalImpulse") ) { return totalImpulse_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"normalImpulse") ) { return normalImpulse_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"referenceEdge1") ) { if (inCallProp == hx::paccAlways) return get_referenceEdge1(); }
		if (HX_FIELD_EQ(inName,"referenceEdge2") ) { if (inCallProp == hx::paccAlways) return get_referenceEdge2(); }
		if (HX_FIELD_EQ(inName,"tangentImpulse") ) { return tangentImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"rollingImpulse") ) { return rollingImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"get_elasticity") ) { return get_elasticity_dyn(); }
		if (HX_FIELD_EQ(inName,"set_elasticity") ) { return set_elasticity_dyn(); }
		if (HX_FIELD_EQ(inName,"staticFriction") ) { if (inCallProp == hx::paccAlways) return get_staticFriction(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dynamicFriction") ) { if (inCallProp == hx::paccAlways) return get_dynamicFriction(); }
		if (HX_FIELD_EQ(inName,"rollingFriction") ) { if (inCallProp == hx::paccAlways) return get_rollingFriction(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_referenceEdge1") ) { return get_referenceEdge1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_referenceEdge2") ) { return get_referenceEdge2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_staticFriction") ) { return get_staticFriction_dyn(); }
		if (HX_FIELD_EQ(inName,"set_staticFriction") ) { return set_staticFriction_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_dynamicFriction") ) { return get_dynamicFriction_dyn(); }
		if (HX_FIELD_EQ(inName,"set_dynamicFriction") ) { return set_dynamicFriction_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rollingFriction") ) { return get_rollingFriction_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rollingFriction") ) { return set_rollingFriction_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CollisionArbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { if (inCallProp == hx::paccAlways) return set_elasticity(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"staticFriction") ) { if (inCallProp == hx::paccAlways) return set_staticFriction(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dynamicFriction") ) { if (inCallProp == hx::paccAlways) return set_dynamicFriction(inValue); }
		if (HX_FIELD_EQ(inName,"rollingFriction") ) { if (inCallProp == hx::paccAlways) return set_rollingFriction(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CollisionArbiter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("contacts","\xd3","\xd1","\x76","\x2c"));
	outFields->push(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));
	outFields->push(HX_HCSTRING("radius","\x52","\xd0","\xf6","\xb0"));
	outFields->push(HX_HCSTRING("referenceEdge1","\x89","\xb5","\x21","\x22"));
	outFields->push(HX_HCSTRING("referenceEdge2","\x8a","\xb5","\x21","\x22"));
	outFields->push(HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d"));
	outFields->push(HX_HCSTRING("dynamicFriction","\x99","\xeb","\x8a","\xda"));
	outFields->push(HX_HCSTRING("staticFriction","\xc8","\x6f","\xc8","\x40"));
	outFields->push(HX_HCSTRING("rollingFriction","\x9f","\x6f","\x01","\xb7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_contacts","\xdc","\x85","\x90","\xe1"),
	HX_HCSTRING("get_normal","\xf0","\xe1","\xf0","\x20"),
	HX_HCSTRING("get_radius","\x1b","\x40","\x7e","\xa1"),
	HX_HCSTRING("get_referenceEdge1","\x52","\x96","\xbb","\xbd"),
	HX_HCSTRING("get_referenceEdge2","\x53","\x96","\xbb","\xbd"),
	HX_HCSTRING("firstVertex","\xb4","\x0b","\xea","\x85"),
	HX_HCSTRING("secondVertex","\xf8","\x2d","\x23","\xdc"),
	HX_HCSTRING("normalImpulse","\x4e","\xa9","\x46","\x07"),
	HX_HCSTRING("tangentImpulse","\x70","\x2e","\x3e","\x65"),
	HX_HCSTRING("totalImpulse","\x51","\xe5","\xbb","\x16"),
	HX_HCSTRING("rollingImpulse","\xb0","\xb5","\xdd","\xca"),
	HX_HCSTRING("get_elasticity","\xc2","\xab","\xa9","\xc3"),
	HX_HCSTRING("set_elasticity","\x36","\x94","\xc9","\xe3"),
	HX_HCSTRING("get_dynamicFriction","\xb0","\xba","\x95","\x65"),
	HX_HCSTRING("set_dynamicFriction","\xbc","\xad","\x32","\xa2"),
	HX_HCSTRING("get_staticFriction","\x91","\x50","\x62","\xdc"),
	HX_HCSTRING("set_staticFriction","\x05","\x83","\x11","\xb9"),
	HX_HCSTRING("get_rollingFriction","\xb6","\x3e","\x0c","\x42"),
	HX_HCSTRING("set_rollingFriction","\xc2","\x31","\xa9","\x7e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CollisionArbiter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CollisionArbiter_obj::__mClass,"__mClass");
};

#endif

hx::Class CollisionArbiter_obj::__mClass;

void CollisionArbiter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.dynamics.CollisionArbiter","\x4b","\xa8","\xe3","\x0b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CollisionArbiter_obj >;
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
