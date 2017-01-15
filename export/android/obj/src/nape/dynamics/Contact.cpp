#include <hxcpp.h>

#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_CollisionArbiter
#include <nape/dynamics/CollisionArbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_Contact
#include <nape/dynamics/Contact.h>
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
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#include <zpp_nape/dynamics/ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Contact
#include <zpp_nape/dynamics/ZPP_Contact.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_IContact
#include <zpp_nape/dynamics/ZPP_IContact.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
namespace nape{
namespace dynamics{

Void Contact_obj::__construct()
{
HX_STACK_FRAME("nape.dynamics.Contact","new",0x44c5d15e,"nape.dynamics.Contact.new","nape/dynamics/Contact.hx",179,0x044513b2)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(183)
	this->zpp_inner = null();
}
;
	return null();
}

//Contact_obj::~Contact_obj() { }

Dynamic Contact_obj::__CreateEmpty() { return  new Contact_obj; }
hx::ObjectPtr< Contact_obj > Contact_obj::__new()
{  hx::ObjectPtr< Contact_obj > _result_ = new Contact_obj();
	_result_->__construct();
	return _result_;}

Dynamic Contact_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Contact_obj > _result_ = new Contact_obj();
	_result_->__construct();
	return _result_;}

::nape::dynamics::CollisionArbiter Contact_obj::get_arbiter( ){
	HX_STACK_FRAME("nape.dynamics.Contact","get_arbiter",0xe1484efe,"nape.dynamics.Contact.get_arbiter","nape/dynamics/Contact.hx",189,0x044513b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(190)
	::zpp_nape::dynamics::ZPP_Contact tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(190)
	::zpp_nape::dynamics::ZPP_Arbiter tmp1 = tmp->arbiter;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(190)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(190)
	::nape::dynamics::CollisionArbiter tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(190)
	if ((tmp2)){
		HX_STACK_LINE(190)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(190)
		::zpp_nape::dynamics::ZPP_Contact tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(190)
		::nape::dynamics::Arbiter tmp5 = tmp4->arbiter->outer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(190)
		::nape::dynamics::Arbiter _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(190)
		int tmp6 = _this->zpp_inner->type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(190)
		int tmp7 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(190)
		bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(190)
		if ((tmp8)){
			HX_STACK_LINE(190)
			::zpp_nape::dynamics::ZPP_ColArbiter tmp9 = _this->zpp_inner->colarb;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(190)
			tmp3 = tmp9->outer_zn;
		}
		else{
			HX_STACK_LINE(190)
			tmp3 = null();
		}
	}
	HX_STACK_LINE(190)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Contact_obj,get_arbiter,return )

Float Contact_obj::get_penetration( ){
	HX_STACK_FRAME("nape.dynamics.Contact","get_penetration",0x23e69e20,"nape.dynamics.Contact.get_penetration","nape/dynamics/Contact.hx",201,0x044513b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(205)
	::zpp_nape::dynamics::ZPP_Contact tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(205)
	Float tmp1 = tmp->dist;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(205)
	Float tmp2 = -(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(205)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Contact_obj,get_penetration,return )

::nape::geom::Vec2 Contact_obj::get_position( ){
	HX_STACK_FRAME("nape.dynamics.Contact","get_position",0xe74543f4,"nape.dynamics.Contact.get_position","nape/dynamics/Contact.hx",216,0x044513b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(220)
	::zpp_nape::dynamics::ZPP_Contact tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(220)
	::nape::geom::Vec2 tmp1 = tmp->wrap_position;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(220)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(220)
	if ((tmp2)){
		HX_STACK_LINE(220)
		::zpp_nape::dynamics::ZPP_Contact tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(220)
		tmp3->getposition();
	}
	HX_STACK_LINE(221)
	::zpp_nape::dynamics::ZPP_Contact tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(221)
	::nape::geom::Vec2 tmp4 = tmp3->wrap_position;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(221)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Contact_obj,get_position,return )

bool Contact_obj::get_fresh( ){
	HX_STACK_FRAME("nape.dynamics.Contact","get_fresh",0xb26db643,"nape.dynamics.Contact.get_fresh","nape/dynamics/Contact.hx",228,0x044513b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(232)
	::zpp_nape::dynamics::ZPP_Contact tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(232)
	bool tmp1 = tmp->fresh;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(232)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Contact_obj,get_fresh,return )

::nape::geom::Vec3 Contact_obj::normalImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.dynamics.Contact","normalImpulse",0xeae713cc,"nape.dynamics.Contact.normalImpulse","nape/dynamics/Contact.hx",248,0x044513b2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(252)
	::zpp_nape::dynamics::ZPP_Contact tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(252)
	::zpp_nape::dynamics::ZPP_ColArbiter tmp1 = tmp->arbiter->colarb;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(252)
	::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp1;		HX_STACK_VAR(colarb,"colarb");
	HX_STACK_LINE(253)
	::zpp_nape::dynamics::ZPP_Contact tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(253)
	::zpp_nape::dynamics::ZPP_IContact cin = tmp2->inner;		HX_STACK_VAR(cin,"cin");
	HX_STACK_LINE(254)
	Float jnAcc = cin->jnAcc;		HX_STACK_VAR(jnAcc,"jnAcc");
	HX_STACK_LINE(255)
	bool tmp3 = (body == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(255)
	if ((tmp3)){
		HX_STACK_LINE(255)
		Float tmp4 = (colarb->nx * jnAcc);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(255)
		Float tmp5 = (colarb->ny * jnAcc);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(255)
		::nape::geom::Vec3 tmp6 = ::nape::geom::Vec3_obj::get(tmp4,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(255)
		return tmp6;
	}
	else{
		HX_STACK_LINE(260)
		::nape::phys::Body tmp4 = body;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(260)
		::nape::phys::Body tmp5 = colarb->b1->outer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(260)
		bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(260)
		if ((tmp6)){
			HX_STACK_LINE(260)
			Float tmp7 = colarb->nx;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(260)
			Float tmp8 = jnAcc;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(260)
			Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(260)
			Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(260)
			Float tmp11 = colarb->ny;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(260)
			Float tmp12 = jnAcc;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(260)
			Float tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(260)
			Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(260)
			Float tmp15 = (colarb->ny * cin->r1x);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(260)
			Float tmp16 = (colarb->nx * cin->r1y);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(260)
			Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(260)
			Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(260)
			Float tmp19 = jnAcc;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(260)
			Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(260)
			::nape::geom::Vec3 tmp21 = ::nape::geom::Vec3_obj::get(tmp10,tmp14,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(260)
			return tmp21;
		}
		else{
			HX_STACK_LINE(261)
			Float tmp7 = (colarb->nx * jnAcc);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(261)
			Float tmp8 = (colarb->ny * jnAcc);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(261)
			Float tmp9 = (colarb->ny * cin->r2x);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(261)
			Float tmp10 = (colarb->nx * cin->r2y);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(261)
			Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(261)
			Float tmp12 = jnAcc;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(261)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(261)
			::nape::geom::Vec3 tmp14 = ::nape::geom::Vec3_obj::get(tmp7,tmp8,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(261)
			return tmp14;
		}
	}
	HX_STACK_LINE(255)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Contact_obj,normalImpulse,return )

::nape::geom::Vec3 Contact_obj::tangentImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.dynamics.Contact","tangentImpulse",0xadfaf232,"nape.dynamics.Contact.tangentImpulse","nape/dynamics/Contact.hx",281,0x044513b2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(285)
	::zpp_nape::dynamics::ZPP_Contact tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(285)
	::zpp_nape::dynamics::ZPP_ColArbiter tmp1 = tmp->arbiter->colarb;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(285)
	::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp1;		HX_STACK_VAR(colarb,"colarb");
	HX_STACK_LINE(286)
	::zpp_nape::dynamics::ZPP_Contact tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(286)
	::zpp_nape::dynamics::ZPP_IContact cin = tmp2->inner;		HX_STACK_VAR(cin,"cin");
	HX_STACK_LINE(287)
	Float jtAcc = cin->jtAcc;		HX_STACK_VAR(jtAcc,"jtAcc");
	HX_STACK_LINE(288)
	bool tmp3 = (body == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(288)
	if ((tmp3)){
		HX_STACK_LINE(288)
		Float tmp4 = colarb->ny;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(288)
		Float tmp5 = -(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(288)
		Float tmp6 = jtAcc;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(288)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(288)
		Float tmp8 = (colarb->nx * jtAcc);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(288)
		::nape::geom::Vec3 tmp9 = ::nape::geom::Vec3_obj::get(tmp7,tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(288)
		return tmp9;
	}
	else{
		HX_STACK_LINE(293)
		::nape::phys::Body tmp4 = body;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(293)
		::nape::phys::Body tmp5 = colarb->b1->outer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(293)
		bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(293)
		if ((tmp6)){
			HX_STACK_LINE(293)
			Float tmp7 = (colarb->ny * jtAcc);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(293)
			Float tmp8 = colarb->nx;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(293)
			Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(293)
			Float tmp10 = jtAcc;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(293)
			Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(293)
			Float tmp12 = (cin->r1x * colarb->nx);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(293)
			Float tmp13 = (cin->r1y * colarb->ny);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(293)
			Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(293)
			Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(293)
			Float tmp16 = jtAcc;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(293)
			Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(293)
			::nape::geom::Vec3 tmp18 = ::nape::geom::Vec3_obj::get(tmp7,tmp11,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(293)
			return tmp18;
		}
		else{
			HX_STACK_LINE(294)
			Float tmp7 = colarb->ny;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(294)
			Float tmp8 = -(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(294)
			Float tmp9 = jtAcc;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(294)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(294)
			Float tmp11 = (colarb->nx * jtAcc);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(294)
			Float tmp12 = (cin->r2x * colarb->nx);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(294)
			Float tmp13 = (cin->r2y * colarb->ny);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(294)
			Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(294)
			Float tmp15 = jtAcc;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(294)
			Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(294)
			::nape::geom::Vec3 tmp17 = ::nape::geom::Vec3_obj::get(tmp10,tmp11,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(294)
			return tmp17;
		}
	}
	HX_STACK_LINE(288)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Contact_obj,tangentImpulse,return )

Float Contact_obj::rollingImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.dynamics.Contact","rollingImpulse",0x139a7972,"nape.dynamics.Contact.rollingImpulse","nape/dynamics/Contact.hx",308,0x044513b2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(312)
	::zpp_nape::dynamics::ZPP_Contact tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(312)
	::zpp_nape::dynamics::ZPP_ColArbiter tmp1 = tmp->arbiter->colarb;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(312)
	::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp1;		HX_STACK_VAR(colarb,"colarb");
	HX_STACK_LINE(313)
	::zpp_nape::dynamics::ZPP_Contact tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(313)
	::zpp_nape::dynamics::ZPP_ColArbiter tmp3 = tmp2->arbiter->colarb;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(313)
	Float jrAcc = tmp3->jrAcc;		HX_STACK_VAR(jrAcc,"jrAcc");
	HX_STACK_LINE(314)
	bool tmp4 = (body == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(314)
	if ((tmp4)){
		HX_STACK_LINE(314)
		Float tmp5 = jrAcc;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(314)
		return tmp5;
	}
	else{
		HX_STACK_LINE(319)
		::nape::phys::Body tmp5 = body;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(319)
		::nape::phys::Body tmp6 = colarb->b1->outer;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(319)
		bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(319)
		if ((tmp7)){
			HX_STACK_LINE(319)
			Float tmp8 = jrAcc;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(319)
			Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(319)
			return tmp9;
		}
		else{
			HX_STACK_LINE(320)
			Float tmp8 = jrAcc;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(320)
			return tmp8;
		}
	}
	HX_STACK_LINE(314)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC1(Contact_obj,rollingImpulse,return )

::nape::geom::Vec3 Contact_obj::totalImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.dynamics.Contact","totalImpulse",0x7decd493,"nape.dynamics.Contact.totalImpulse","nape/dynamics/Contact.hx",337,0x044513b2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(341)
	::zpp_nape::dynamics::ZPP_Contact tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(341)
	::zpp_nape::dynamics::ZPP_ColArbiter tmp1 = tmp->arbiter->colarb;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(341)
	::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp1;		HX_STACK_VAR(colarb,"colarb");
	HX_STACK_LINE(342)
	::zpp_nape::dynamics::ZPP_Contact tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(342)
	::zpp_nape::dynamics::ZPP_IContact cin = tmp2->inner;		HX_STACK_VAR(cin,"cin");
	HX_STACK_LINE(343)
	Float jnAcc = cin->jnAcc;		HX_STACK_VAR(jnAcc,"jnAcc");
	HX_STACK_LINE(344)
	Float jtAcc = cin->jtAcc;		HX_STACK_VAR(jtAcc,"jtAcc");
	HX_STACK_LINE(345)
	Float jrAcc = colarb->jrAcc;		HX_STACK_VAR(jrAcc,"jrAcc");
	HX_STACK_LINE(346)
	bool tmp3 = (body == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(346)
	if ((tmp3)){
		HX_STACK_LINE(347)
		Float tmp4 = (colarb->nx * jnAcc);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(347)
		Float tmp5 = (colarb->ny * jtAcc);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(347)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(347)
		Float tmp7 = (colarb->ny * jnAcc);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(347)
		Float tmp8 = (colarb->nx * jtAcc);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(347)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(347)
		Float tmp10 = jrAcc;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(347)
		::nape::geom::Vec3 tmp11 = ::nape::geom::Vec3_obj::get(tmp6,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(347)
		return tmp11;
	}
	else{
		HX_STACK_LINE(353)
		Float tmp4 = (colarb->nx * jnAcc);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(353)
		Float tmp5 = (colarb->ny * jtAcc);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(353)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(353)
		Float jx = tmp6;		HX_STACK_VAR(jx,"jx");
		HX_STACK_LINE(354)
		Float tmp7 = (colarb->ny * jnAcc);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(354)
		Float tmp8 = (colarb->nx * jtAcc);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(354)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(354)
		Float jy = tmp9;		HX_STACK_VAR(jy,"jy");
		HX_STACK_LINE(371)
		::nape::phys::Body tmp10 = body;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(371)
		::nape::phys::Body tmp11 = colarb->b1->outer;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(371)
		bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(371)
		if ((tmp12)){
			HX_STACK_LINE(371)
			Float tmp13 = jx;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(371)
			Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(371)
			Float tmp15 = jy;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(371)
			Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(371)
			Float tmp17 = (jy * cin->r1x);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(371)
			Float tmp18 = (jx * cin->r1y);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(371)
			Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(371)
			Float tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(371)
			Float tmp21 = jrAcc;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(371)
			Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(371)
			::nape::geom::Vec3 tmp23 = ::nape::geom::Vec3_obj::get(tmp14,tmp16,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(371)
			return tmp23;
		}
		else{
			HX_STACK_LINE(372)
			Float tmp13 = jx;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(372)
			Float tmp14 = jy;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(372)
			Float tmp15 = (jy * cin->r2x);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(372)
			Float tmp16 = (jx * cin->r2y);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(372)
			Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(372)
			Float tmp18 = jrAcc;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(372)
			Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(372)
			::nape::geom::Vec3 tmp20 = ::nape::geom::Vec3_obj::get(tmp13,tmp14,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(372)
			return tmp20;
		}
	}
	HX_STACK_LINE(346)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Contact_obj,totalImpulse,return )

Float Contact_obj::get_friction( ){
	HX_STACK_FRAME("nape.dynamics.Contact","get_friction",0xb4141c45,"nape.dynamics.Contact.get_friction","nape/dynamics/Contact.hx",386,0x044513b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(390)
	::zpp_nape::dynamics::ZPP_Contact tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(390)
	Float tmp1 = tmp->inner->friction;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(390)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Contact_obj,get_friction,return )

::String Contact_obj::toString( ){
	HX_STACK_FRAME("nape.dynamics.Contact","toString",0x256276ee,"nape.dynamics.Contact.toString","nape/dynamics/Contact.hx",403,0x044513b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(404)
	::zpp_nape::dynamics::ZPP_Contact tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(404)
	::zpp_nape::dynamics::ZPP_Arbiter tmp1 = tmp->arbiter;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(404)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(404)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(404)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(404)
	if ((tmp3)){
		HX_STACK_LINE(404)
		::zpp_nape::dynamics::ZPP_Contact tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(404)
		::zpp_nape::dynamics::ZPP_Contact tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(404)
		tmp4 = tmp6->arbiter->cleared;
	}
	else{
		HX_STACK_LINE(404)
		tmp4 = true;
	}
	HX_STACK_LINE(404)
	if ((tmp4)){
		HX_STACK_LINE(404)
		return HX_HCSTRING("{object-pooled}","\xcf","\x12","\xfa","\x86");
	}
	else{
		HX_STACK_LINE(405)
		return HX_HCSTRING("{Contact}","\x78","\x01","\x26","\x60");
	}
	HX_STACK_LINE(404)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Contact_obj,toString,return )


Contact_obj::Contact_obj()
{
}

void Contact_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Contact);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void Contact_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic Contact_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"fresh") ) { if (inCallProp == hx::paccAlways) return get_fresh(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"arbiter") ) { if (inCallProp == hx::paccAlways) return get_arbiter(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return get_position(); }
		if (HX_FIELD_EQ(inName,"friction") ) { if (inCallProp == hx::paccAlways) return get_friction(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"get_fresh") ) { return get_fresh_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_arbiter") ) { return get_arbiter_dyn(); }
		if (HX_FIELD_EQ(inName,"penetration") ) { if (inCallProp == hx::paccAlways) return get_penetration(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"totalImpulse") ) { return totalImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"get_friction") ) { return get_friction_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"normalImpulse") ) { return normalImpulse_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"tangentImpulse") ) { return tangentImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"rollingImpulse") ) { return rollingImpulse_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_penetration") ) { return get_penetration_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Contact_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::dynamics::ZPP_Contact >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Contact_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("arbiter","\xe9","\xbf","\x55","\x09"));
	outFields->push(HX_HCSTRING("penetration","\x8b","\x60","\x96","\x06"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("fresh","\x6e","\x86","\x86","\x06"));
	outFields->push(HX_HCSTRING("friction","\xfa","\x78","\xc9","\x97"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_Contact*/ ,(int)offsetof(Contact_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("get_arbiter","\x00","\x20","\x50","\x8f"),
	HX_HCSTRING("get_penetration","\x22","\x18","\x78","\xc7"),
	HX_HCSTRING("get_position","\xb2","\x54","\x14","\x80"),
	HX_HCSTRING("get_fresh","\xc5","\xe2","\x2f","\x4a"),
	HX_HCSTRING("normalImpulse","\x4e","\xa9","\x46","\x07"),
	HX_HCSTRING("tangentImpulse","\x70","\x2e","\x3e","\x65"),
	HX_HCSTRING("rollingImpulse","\xb0","\xb5","\xdd","\xca"),
	HX_HCSTRING("totalImpulse","\x51","\xe5","\xbb","\x16"),
	HX_HCSTRING("get_friction","\x03","\x2d","\xe3","\x4c"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Contact_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Contact_obj::__mClass,"__mClass");
};

#endif

hx::Class Contact_obj::__mClass;

void Contact_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.dynamics.Contact","\x6c","\x8a","\xb6","\x97");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Contact_obj >;
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
