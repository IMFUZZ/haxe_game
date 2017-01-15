#include <hxcpp.h>

#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_WeldJoint
#include <nape/constraint/WeldJoint.h>
#endif
#ifndef INCLUDED_nape_geom_MatMN
#include <nape/geom/MatMN.h>
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
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_WeldJoint
#include <zpp_nape/constraint/ZPP_WeldJoint.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MatMN
#include <zpp_nape/geom/ZPP_MatMN.h>
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
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace nape{
namespace constraint{

Void WeldJoint_obj::__construct(::nape::phys::Body body1,::nape::phys::Body body2,::nape::geom::Vec2 anchor1,::nape::geom::Vec2 anchor2,hx::Null< Float >  __o_phase)
{
HX_STACK_FRAME("nape.constraint.WeldJoint","new",0x17781cab,"nape.constraint.WeldJoint.new","nape/constraint/WeldJoint.hx",192,0x63bebec5)
HX_STACK_THIS(this)
HX_STACK_ARG(body1,"body1")
HX_STACK_ARG(body2,"body2")
HX_STACK_ARG(anchor1,"anchor1")
HX_STACK_ARG(anchor2,"anchor2")
HX_STACK_ARG(__o_phase,"phase")
Float phase = __o_phase.Default(((Float)0.0));
{
	HX_STACK_LINE(196)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(361)
	::zpp_nape::constraint::ZPP_WeldJoint tmp = ::zpp_nape::constraint::ZPP_WeldJoint_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(361)
	this->zpp_inner_zn = tmp;
	HX_STACK_LINE(362)
	::zpp_nape::constraint::ZPP_WeldJoint tmp1 = this->zpp_inner_zn;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(362)
	this->zpp_inner = tmp1;
	HX_STACK_LINE(363)
	::zpp_nape::constraint::ZPP_Constraint tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(363)
	tmp2->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(364)
	::zpp_nape::constraint::ZPP_WeldJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(364)
	tmp3->outer_zn = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(371)
	super::__construct();
	HX_STACK_LINE(373)
	{
		HX_STACK_LINE(373)
		{
			HX_STACK_LINE(373)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(373)
			::String tmp5 = HX_HCSTRING("Constraint::body1","\xb2","\xdd","\x0c","\x93");		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(373)
			tmp4->immutable_midstep(tmp5);
			HX_STACK_LINE(373)
			bool tmp6 = (body1 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(373)
			::zpp_nape::phys::ZPP_Body tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(373)
			if ((tmp6)){
				HX_STACK_LINE(373)
				tmp7 = null();
			}
			else{
				HX_STACK_LINE(373)
				tmp7 = body1->zpp_inner;
			}
			HX_STACK_LINE(373)
			::zpp_nape::phys::ZPP_Body inbody1 = tmp7;		HX_STACK_VAR(inbody1,"inbody1");
			HX_STACK_LINE(373)
			::zpp_nape::phys::ZPP_Body tmp8 = inbody1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(373)
			::zpp_nape::constraint::ZPP_WeldJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(373)
			::zpp_nape::phys::ZPP_Body tmp10 = tmp9->b1;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(373)
			bool tmp11 = (tmp8 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(373)
			if ((tmp11)){
				HX_STACK_LINE(373)
				::zpp_nape::constraint::ZPP_WeldJoint tmp12 = this->zpp_inner_zn;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(373)
				::zpp_nape::phys::ZPP_Body tmp13 = tmp12->b1;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(373)
				bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(373)
				if ((tmp14)){
					HX_STACK_LINE(373)
					::zpp_nape::constraint::ZPP_Constraint tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(373)
					::zpp_nape::space::ZPP_Space tmp16 = tmp15->space;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(373)
					bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(373)
					::nape::space::Space tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(373)
					if ((tmp17)){
						HX_STACK_LINE(373)
						tmp18 = null();
					}
					else{
						HX_STACK_LINE(373)
						::zpp_nape::constraint::ZPP_Constraint tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(373)
						tmp18 = tmp19->space->outer;
					}
					HX_STACK_LINE(373)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(373)
					bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(373)
					if ((tmp19)){
						HX_STACK_LINE(373)
						::zpp_nape::constraint::ZPP_WeldJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(373)
						::zpp_nape::constraint::ZPP_WeldJoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(373)
						::zpp_nape::phys::ZPP_Body tmp23 = tmp22->b2;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(373)
						::zpp_nape::constraint::ZPP_WeldJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(373)
						::zpp_nape::constraint::ZPP_WeldJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(373)
						::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b1;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(373)
						tmp20 = (tmp23 != tmp26);
					}
					else{
						HX_STACK_LINE(373)
						tmp20 = false;
					}
					HX_STACK_LINE(373)
					if ((tmp20)){
						HX_STACK_LINE(373)
						::zpp_nape::constraint::ZPP_WeldJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(373)
						::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b1;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(373)
						bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(373)
						if ((tmp23)){
							HX_STACK_LINE(373)
							::zpp_nape::constraint::ZPP_WeldJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(373)
							::zpp_nape::util::ZNPList_ZPP_Constraint tmp25 = tmp24->b1->constraints;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(373)
							::zpp_nape::constraint::ZPP_Constraint tmp26 = this->zpp_inner;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(373)
							tmp25->remove(tmp26);
						}
					}
					HX_STACK_LINE(373)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(373)
					bool tmp22 = tmp21->active;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(373)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(373)
					if ((tmp22)){
						HX_STACK_LINE(373)
						::zpp_nape::constraint::ZPP_Constraint tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(373)
						::zpp_nape::constraint::ZPP_Constraint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(373)
						::zpp_nape::space::ZPP_Space tmp26 = tmp25->space;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(373)
						bool tmp27 = (tmp26 == null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(373)
						bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(373)
						::nape::space::Space tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(373)
						bool tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(373)
						if ((tmp30)){
							HX_STACK_LINE(373)
							tmp29 = null();
						}
						else{
							HX_STACK_LINE(373)
							::zpp_nape::constraint::ZPP_Constraint tmp31 = this->zpp_inner;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(373)
							::zpp_nape::constraint::ZPP_Constraint tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(373)
							::nape::space::Space tmp33 = tmp32->space->outer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(373)
							tmp29 = tmp33;
						}
						HX_STACK_LINE(373)
						tmp23 = (tmp29 != null());
					}
					else{
						HX_STACK_LINE(373)
						tmp23 = false;
					}
					HX_STACK_LINE(373)
					if ((tmp23)){
						HX_STACK_LINE(373)
						::zpp_nape::constraint::ZPP_WeldJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(373)
						tmp24->b1->wake();
					}
				}
				HX_STACK_LINE(373)
				::zpp_nape::constraint::ZPP_WeldJoint tmp15 = this->zpp_inner_zn;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(373)
				tmp15->b1 = inbody1;
				HX_STACK_LINE(373)
				::zpp_nape::constraint::ZPP_Constraint tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(373)
				::zpp_nape::space::ZPP_Space tmp17 = tmp16->space;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(373)
				bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(373)
				::nape::space::Space tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(373)
				if ((tmp18)){
					HX_STACK_LINE(373)
					tmp19 = null();
				}
				else{
					HX_STACK_LINE(373)
					::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(373)
					tmp19 = tmp20->space->outer;
				}
				HX_STACK_LINE(373)
				bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(373)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(373)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(373)
				if ((tmp21)){
					HX_STACK_LINE(373)
					tmp22 = (inbody1 != null());
				}
				else{
					HX_STACK_LINE(373)
					tmp22 = false;
				}
				HX_STACK_LINE(373)
				bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(373)
				if ((tmp22)){
					HX_STACK_LINE(373)
					::zpp_nape::constraint::ZPP_WeldJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(373)
					::zpp_nape::constraint::ZPP_WeldJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(373)
					::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b2;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(373)
					::zpp_nape::phys::ZPP_Body tmp27 = inbody1;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(373)
					tmp23 = (tmp26 != tmp27);
				}
				else{
					HX_STACK_LINE(373)
					tmp23 = false;
				}
				HX_STACK_LINE(373)
				if ((tmp23)){
					HX_STACK_LINE(373)
					bool tmp24 = (inbody1 != null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(373)
					if ((tmp24)){
						HX_STACK_LINE(373)
						::zpp_nape::constraint::ZPP_Constraint tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(373)
						inbody1->constraints->add(tmp25);
					}
				}
				HX_STACK_LINE(373)
				::zpp_nape::constraint::ZPP_Constraint tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(373)
				bool tmp25 = tmp24->active;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(373)
				bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(373)
				if ((tmp25)){
					HX_STACK_LINE(373)
					::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(373)
					::zpp_nape::constraint::ZPP_Constraint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(373)
					::zpp_nape::space::ZPP_Space tmp29 = tmp28->space;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(373)
					bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(373)
					bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(373)
					::nape::space::Space tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(373)
					bool tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(373)
					if ((tmp33)){
						HX_STACK_LINE(373)
						tmp32 = null();
					}
					else{
						HX_STACK_LINE(373)
						::zpp_nape::constraint::ZPP_Constraint tmp34 = this->zpp_inner;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(373)
						::zpp_nape::constraint::ZPP_Constraint tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(373)
						::nape::space::Space tmp36 = tmp35->space->outer;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(373)
						tmp32 = tmp36;
					}
					HX_STACK_LINE(373)
					tmp26 = (tmp32 != null());
				}
				else{
					HX_STACK_LINE(373)
					tmp26 = false;
				}
				HX_STACK_LINE(373)
				if ((tmp26)){
					HX_STACK_LINE(373)
					::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(373)
					tmp27->wake();
					HX_STACK_LINE(373)
					bool tmp28 = (inbody1 != null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(373)
					if ((tmp28)){
						HX_STACK_LINE(373)
						inbody1->wake();
					}
				}
			}
		}
		HX_STACK_LINE(373)
		::zpp_nape::constraint::ZPP_WeldJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(373)
		::zpp_nape::phys::ZPP_Body tmp5 = tmp4->b1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(373)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(373)
		if ((tmp6)){
			HX_STACK_LINE(373)
			Dynamic();
		}
		else{
			HX_STACK_LINE(373)
			::zpp_nape::constraint::ZPP_WeldJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(373)
			tmp7->b1->outer;
		}
	}
	HX_STACK_LINE(374)
	{
		HX_STACK_LINE(374)
		{
			HX_STACK_LINE(374)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(374)
			::String tmp5 = HX_HCSTRING("Constraint::body2","\xb3","\xdd","\x0c","\x93");		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(374)
			tmp4->immutable_midstep(tmp5);
			HX_STACK_LINE(374)
			bool tmp6 = (body2 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(374)
			::zpp_nape::phys::ZPP_Body tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(374)
			if ((tmp6)){
				HX_STACK_LINE(374)
				tmp7 = null();
			}
			else{
				HX_STACK_LINE(374)
				tmp7 = body2->zpp_inner;
			}
			HX_STACK_LINE(374)
			::zpp_nape::phys::ZPP_Body inbody2 = tmp7;		HX_STACK_VAR(inbody2,"inbody2");
			HX_STACK_LINE(374)
			::zpp_nape::phys::ZPP_Body tmp8 = inbody2;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(374)
			::zpp_nape::constraint::ZPP_WeldJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(374)
			::zpp_nape::phys::ZPP_Body tmp10 = tmp9->b2;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(374)
			bool tmp11 = (tmp8 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(374)
			if ((tmp11)){
				HX_STACK_LINE(374)
				::zpp_nape::constraint::ZPP_WeldJoint tmp12 = this->zpp_inner_zn;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(374)
				::zpp_nape::phys::ZPP_Body tmp13 = tmp12->b2;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(374)
				bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(374)
				if ((tmp14)){
					HX_STACK_LINE(374)
					::zpp_nape::constraint::ZPP_Constraint tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(374)
					::zpp_nape::space::ZPP_Space tmp16 = tmp15->space;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(374)
					bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(374)
					::nape::space::Space tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(374)
					if ((tmp17)){
						HX_STACK_LINE(374)
						tmp18 = null();
					}
					else{
						HX_STACK_LINE(374)
						::zpp_nape::constraint::ZPP_Constraint tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(374)
						tmp18 = tmp19->space->outer;
					}
					HX_STACK_LINE(374)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(374)
					bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(374)
					if ((tmp19)){
						HX_STACK_LINE(374)
						::zpp_nape::constraint::ZPP_WeldJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(374)
						::zpp_nape::constraint::ZPP_WeldJoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(374)
						::zpp_nape::phys::ZPP_Body tmp23 = tmp22->b1;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(374)
						::zpp_nape::constraint::ZPP_WeldJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(374)
						::zpp_nape::constraint::ZPP_WeldJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(374)
						::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b2;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(374)
						tmp20 = (tmp23 != tmp26);
					}
					else{
						HX_STACK_LINE(374)
						tmp20 = false;
					}
					HX_STACK_LINE(374)
					if ((tmp20)){
						HX_STACK_LINE(374)
						::zpp_nape::constraint::ZPP_WeldJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(374)
						::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b2;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(374)
						bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(374)
						if ((tmp23)){
							HX_STACK_LINE(374)
							::zpp_nape::constraint::ZPP_WeldJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(374)
							::zpp_nape::util::ZNPList_ZPP_Constraint tmp25 = tmp24->b2->constraints;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(374)
							::zpp_nape::constraint::ZPP_Constraint tmp26 = this->zpp_inner;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(374)
							tmp25->remove(tmp26);
						}
					}
					HX_STACK_LINE(374)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(374)
					bool tmp22 = tmp21->active;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(374)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(374)
					if ((tmp22)){
						HX_STACK_LINE(374)
						::zpp_nape::constraint::ZPP_Constraint tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(374)
						::zpp_nape::constraint::ZPP_Constraint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(374)
						::zpp_nape::space::ZPP_Space tmp26 = tmp25->space;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(374)
						bool tmp27 = (tmp26 == null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(374)
						bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(374)
						::nape::space::Space tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(374)
						bool tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(374)
						if ((tmp30)){
							HX_STACK_LINE(374)
							tmp29 = null();
						}
						else{
							HX_STACK_LINE(374)
							::zpp_nape::constraint::ZPP_Constraint tmp31 = this->zpp_inner;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(374)
							::zpp_nape::constraint::ZPP_Constraint tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(374)
							::nape::space::Space tmp33 = tmp32->space->outer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(374)
							tmp29 = tmp33;
						}
						HX_STACK_LINE(374)
						tmp23 = (tmp29 != null());
					}
					else{
						HX_STACK_LINE(374)
						tmp23 = false;
					}
					HX_STACK_LINE(374)
					if ((tmp23)){
						HX_STACK_LINE(374)
						::zpp_nape::constraint::ZPP_WeldJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(374)
						tmp24->b2->wake();
					}
				}
				HX_STACK_LINE(374)
				::zpp_nape::constraint::ZPP_WeldJoint tmp15 = this->zpp_inner_zn;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(374)
				tmp15->b2 = inbody2;
				HX_STACK_LINE(374)
				::zpp_nape::constraint::ZPP_Constraint tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(374)
				::zpp_nape::space::ZPP_Space tmp17 = tmp16->space;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(374)
				bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(374)
				::nape::space::Space tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(374)
				if ((tmp18)){
					HX_STACK_LINE(374)
					tmp19 = null();
				}
				else{
					HX_STACK_LINE(374)
					::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(374)
					tmp19 = tmp20->space->outer;
				}
				HX_STACK_LINE(374)
				bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(374)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(374)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(374)
				if ((tmp21)){
					HX_STACK_LINE(374)
					tmp22 = (inbody2 != null());
				}
				else{
					HX_STACK_LINE(374)
					tmp22 = false;
				}
				HX_STACK_LINE(374)
				bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(374)
				if ((tmp22)){
					HX_STACK_LINE(374)
					::zpp_nape::constraint::ZPP_WeldJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(374)
					::zpp_nape::constraint::ZPP_WeldJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(374)
					::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b1;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(374)
					::zpp_nape::phys::ZPP_Body tmp27 = inbody2;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(374)
					tmp23 = (tmp26 != tmp27);
				}
				else{
					HX_STACK_LINE(374)
					tmp23 = false;
				}
				HX_STACK_LINE(374)
				if ((tmp23)){
					HX_STACK_LINE(374)
					bool tmp24 = (inbody2 != null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(374)
					if ((tmp24)){
						HX_STACK_LINE(374)
						::zpp_nape::constraint::ZPP_Constraint tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(374)
						inbody2->constraints->add(tmp25);
					}
				}
				HX_STACK_LINE(374)
				::zpp_nape::constraint::ZPP_Constraint tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(374)
				bool tmp25 = tmp24->active;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(374)
				bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(374)
				if ((tmp25)){
					HX_STACK_LINE(374)
					::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(374)
					::zpp_nape::constraint::ZPP_Constraint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(374)
					::zpp_nape::space::ZPP_Space tmp29 = tmp28->space;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(374)
					bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(374)
					bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(374)
					::nape::space::Space tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(374)
					bool tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(374)
					if ((tmp33)){
						HX_STACK_LINE(374)
						tmp32 = null();
					}
					else{
						HX_STACK_LINE(374)
						::zpp_nape::constraint::ZPP_Constraint tmp34 = this->zpp_inner;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(374)
						::zpp_nape::constraint::ZPP_Constraint tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(374)
						::nape::space::Space tmp36 = tmp35->space->outer;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(374)
						tmp32 = tmp36;
					}
					HX_STACK_LINE(374)
					tmp26 = (tmp32 != null());
				}
				else{
					HX_STACK_LINE(374)
					tmp26 = false;
				}
				HX_STACK_LINE(374)
				if ((tmp26)){
					HX_STACK_LINE(374)
					::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(374)
					tmp27->wake();
					HX_STACK_LINE(374)
					bool tmp28 = (inbody2 != null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(374)
					if ((tmp28)){
						HX_STACK_LINE(374)
						inbody2->wake();
					}
				}
			}
		}
		HX_STACK_LINE(374)
		::zpp_nape::constraint::ZPP_WeldJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(374)
		::zpp_nape::phys::ZPP_Body tmp5 = tmp4->b2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(374)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(374)
		if ((tmp6)){
			HX_STACK_LINE(374)
			Dynamic();
		}
		else{
			HX_STACK_LINE(374)
			::zpp_nape::constraint::ZPP_WeldJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(374)
			tmp7->b2->outer;
		}
	}
	HX_STACK_LINE(375)
	{
		HX_STACK_LINE(375)
		{
			HX_STACK_LINE(375)
			::nape::geom::Vec2 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(375)
			{
				HX_STACK_LINE(375)
				::zpp_nape::constraint::ZPP_WeldJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(375)
				::nape::geom::Vec2 tmp6 = tmp5->wrap_a1;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(375)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(375)
				if ((tmp7)){
					HX_STACK_LINE(375)
					::zpp_nape::constraint::ZPP_WeldJoint tmp8 = this->zpp_inner_zn;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(375)
					tmp8->setup_a1();
				}
				HX_STACK_LINE(375)
				::zpp_nape::constraint::ZPP_WeldJoint tmp8 = this->zpp_inner_zn;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(375)
				tmp4 = tmp8->wrap_a1;
			}
			HX_STACK_LINE(375)
			::nape::geom::Vec2 _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(375)
			::nape::geom::Vec2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(375)
			{
				HX_STACK_LINE(375)
				Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(375)
				{
					HX_STACK_LINE(375)
					{
						HX_STACK_LINE(375)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(375)
						bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(375)
						if ((tmp7)){
							HX_STACK_LINE(375)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(375)
					tmp6 = anchor1->zpp_inner->x;
				}
				HX_STACK_LINE(375)
				Float x = tmp6;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(375)
				Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(375)
				{
					HX_STACK_LINE(375)
					{
						HX_STACK_LINE(375)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(375)
						bool tmp8 = (_this1->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(375)
						if ((tmp8)){
							HX_STACK_LINE(375)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(375)
					tmp7 = anchor1->zpp_inner->y;
				}
				HX_STACK_LINE(375)
				Float y = tmp7;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(375)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(375)
				{
					HX_STACK_LINE(375)
					{
						HX_STACK_LINE(375)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(375)
						bool tmp9 = (_this1->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(375)
						if ((tmp9)){
							HX_STACK_LINE(375)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(375)
					tmp8 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(375)
				Float tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(375)
				bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(375)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(375)
				if ((tmp10)){
					HX_STACK_LINE(375)
					Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(375)
					{
						HX_STACK_LINE(375)
						{
							HX_STACK_LINE(375)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(375)
							bool tmp13 = (_this1->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(375)
							bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(375)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(375)
							if ((tmp15)){
								HX_STACK_LINE(375)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(375)
						Float tmp13 = _this->zpp_inner->y;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(375)
						tmp12 = tmp13;
					}
					HX_STACK_LINE(375)
					Float tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(375)
					tmp11 = (tmp12 == tmp13);
				}
				else{
					HX_STACK_LINE(375)
					tmp11 = false;
				}
				HX_STACK_LINE(375)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(375)
				if ((tmp12)){
					HX_STACK_LINE(375)
					{
						HX_STACK_LINE(375)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(375)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(375)
						{
						}
					}
					HX_STACK_LINE(375)
					{
						HX_STACK_LINE(375)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(375)
						bool tmp13 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(375)
						if ((tmp13)){
							HX_STACK_LINE(375)
							::zpp_nape::geom::ZPP_Vec2 tmp14 = _this1;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(375)
							_this1->_invalidate(tmp14);
						}
					}
				}
				HX_STACK_LINE(375)
				tmp5 = _this;
			}
			HX_STACK_LINE(375)
			::nape::geom::Vec2 ret = tmp5;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(375)
			{
				HX_STACK_LINE(375)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(375)
				tmp6 = anchor1->zpp_inner->weak;
				HX_STACK_LINE(375)
				if ((tmp6)){
					HX_STACK_LINE(375)
					{
						HX_STACK_LINE(375)
						::zpp_nape::geom::ZPP_Vec2 inner = anchor1->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(375)
						anchor1->zpp_inner->outer = null();
						HX_STACK_LINE(375)
						anchor1->zpp_inner = null();
						HX_STACK_LINE(375)
						{
							HX_STACK_LINE(375)
							::nape::geom::Vec2 o = anchor1;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(375)
							::nape::geom::Vec2 tmp7 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(375)
							o->zpp_pool = tmp7;
							HX_STACK_LINE(375)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(375)
						{
							HX_STACK_LINE(375)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(375)
							{
								HX_STACK_LINE(375)
								bool tmp7 = (o->outer != null());		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(375)
								if ((tmp7)){
									HX_STACK_LINE(375)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(375)
									o->outer = null();
								}
								HX_STACK_LINE(375)
								o->_isimmutable = null();
								HX_STACK_LINE(375)
								o->_validate = null();
								HX_STACK_LINE(375)
								o->_invalidate = null();
							}
							HX_STACK_LINE(375)
							::zpp_nape::geom::ZPP_Vec2 tmp7 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(375)
							o->next = tmp7;
							HX_STACK_LINE(375)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(375)
					true;
				}
				else{
					HX_STACK_LINE(375)
					false;
				}
			}
			HX_STACK_LINE(375)
			ret;
		}
		HX_STACK_LINE(375)
		{
			HX_STACK_LINE(375)
			::zpp_nape::constraint::ZPP_WeldJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(375)
			::nape::geom::Vec2 tmp5 = tmp4->wrap_a1;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(375)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(375)
			if ((tmp6)){
				HX_STACK_LINE(375)
				::zpp_nape::constraint::ZPP_WeldJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(375)
				tmp7->setup_a1();
			}
			HX_STACK_LINE(375)
			::zpp_nape::constraint::ZPP_WeldJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(375)
			tmp7->wrap_a1;
		}
	}
	HX_STACK_LINE(376)
	{
		HX_STACK_LINE(376)
		{
			HX_STACK_LINE(376)
			::nape::geom::Vec2 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(376)
			{
				HX_STACK_LINE(376)
				::zpp_nape::constraint::ZPP_WeldJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(376)
				::nape::geom::Vec2 tmp6 = tmp5->wrap_a2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(376)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(376)
				if ((tmp7)){
					HX_STACK_LINE(376)
					::zpp_nape::constraint::ZPP_WeldJoint tmp8 = this->zpp_inner_zn;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(376)
					tmp8->setup_a2();
				}
				HX_STACK_LINE(376)
				::zpp_nape::constraint::ZPP_WeldJoint tmp8 = this->zpp_inner_zn;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(376)
				tmp4 = tmp8->wrap_a2;
			}
			HX_STACK_LINE(376)
			::nape::geom::Vec2 _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(376)
			::nape::geom::Vec2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(376)
			{
				HX_STACK_LINE(376)
				Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(376)
				{
					HX_STACK_LINE(376)
					{
						HX_STACK_LINE(376)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(376)
						bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(376)
						if ((tmp7)){
							HX_STACK_LINE(376)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(376)
					tmp6 = anchor2->zpp_inner->x;
				}
				HX_STACK_LINE(376)
				Float x = tmp6;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(376)
				Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(376)
				{
					HX_STACK_LINE(376)
					{
						HX_STACK_LINE(376)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(376)
						bool tmp8 = (_this1->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(376)
						if ((tmp8)){
							HX_STACK_LINE(376)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(376)
					tmp7 = anchor2->zpp_inner->y;
				}
				HX_STACK_LINE(376)
				Float y = tmp7;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(376)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(376)
				{
					HX_STACK_LINE(376)
					{
						HX_STACK_LINE(376)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(376)
						bool tmp9 = (_this1->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(376)
						if ((tmp9)){
							HX_STACK_LINE(376)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(376)
					tmp8 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(376)
				Float tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(376)
				bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(376)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(376)
				if ((tmp10)){
					HX_STACK_LINE(376)
					Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(376)
					{
						HX_STACK_LINE(376)
						{
							HX_STACK_LINE(376)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(376)
							bool tmp13 = (_this1->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(376)
							bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(376)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(376)
							if ((tmp15)){
								HX_STACK_LINE(376)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(376)
						Float tmp13 = _this->zpp_inner->y;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(376)
						tmp12 = tmp13;
					}
					HX_STACK_LINE(376)
					Float tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(376)
					tmp11 = (tmp12 == tmp13);
				}
				else{
					HX_STACK_LINE(376)
					tmp11 = false;
				}
				HX_STACK_LINE(376)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(376)
				if ((tmp12)){
					HX_STACK_LINE(376)
					{
						HX_STACK_LINE(376)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(376)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(376)
						{
						}
					}
					HX_STACK_LINE(376)
					{
						HX_STACK_LINE(376)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(376)
						bool tmp13 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(376)
						if ((tmp13)){
							HX_STACK_LINE(376)
							::zpp_nape::geom::ZPP_Vec2 tmp14 = _this1;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(376)
							_this1->_invalidate(tmp14);
						}
					}
				}
				HX_STACK_LINE(376)
				tmp5 = _this;
			}
			HX_STACK_LINE(376)
			::nape::geom::Vec2 ret = tmp5;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(376)
			{
				HX_STACK_LINE(376)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(376)
				tmp6 = anchor2->zpp_inner->weak;
				HX_STACK_LINE(376)
				if ((tmp6)){
					HX_STACK_LINE(376)
					{
						HX_STACK_LINE(376)
						::zpp_nape::geom::ZPP_Vec2 inner = anchor2->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(376)
						anchor2->zpp_inner->outer = null();
						HX_STACK_LINE(376)
						anchor2->zpp_inner = null();
						HX_STACK_LINE(376)
						{
							HX_STACK_LINE(376)
							::nape::geom::Vec2 o = anchor2;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(376)
							::nape::geom::Vec2 tmp7 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(376)
							o->zpp_pool = tmp7;
							HX_STACK_LINE(376)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(376)
						{
							HX_STACK_LINE(376)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(376)
							{
								HX_STACK_LINE(376)
								bool tmp7 = (o->outer != null());		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(376)
								if ((tmp7)){
									HX_STACK_LINE(376)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(376)
									o->outer = null();
								}
								HX_STACK_LINE(376)
								o->_isimmutable = null();
								HX_STACK_LINE(376)
								o->_validate = null();
								HX_STACK_LINE(376)
								o->_invalidate = null();
							}
							HX_STACK_LINE(376)
							::zpp_nape::geom::ZPP_Vec2 tmp7 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(376)
							o->next = tmp7;
							HX_STACK_LINE(376)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(376)
					true;
				}
				else{
					HX_STACK_LINE(376)
					false;
				}
			}
			HX_STACK_LINE(376)
			ret;
		}
		HX_STACK_LINE(376)
		{
			HX_STACK_LINE(376)
			::zpp_nape::constraint::ZPP_WeldJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(376)
			::nape::geom::Vec2 tmp5 = tmp4->wrap_a2;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(376)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(376)
			if ((tmp6)){
				HX_STACK_LINE(376)
				::zpp_nape::constraint::ZPP_WeldJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(376)
				tmp7->setup_a2();
			}
			HX_STACK_LINE(376)
			::zpp_nape::constraint::ZPP_WeldJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(376)
			tmp7->wrap_a2;
		}
	}
	HX_STACK_LINE(377)
	{
		HX_STACK_LINE(377)
		{
			HX_STACK_LINE(377)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(377)
			tmp4->immutable_midstep(HX_HCSTRING("WeldJoint::phase","\xb7","\x60","\x55","\x86"));
			HX_STACK_LINE(377)
			::zpp_nape::constraint::ZPP_WeldJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(377)
			Float tmp6 = tmp5->phase;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(377)
			Float tmp7 = phase;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(377)
			bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(377)
			if ((tmp8)){
				HX_STACK_LINE(377)
				::zpp_nape::constraint::ZPP_WeldJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(377)
				tmp9->phase = phase;
				HX_STACK_LINE(377)
				::zpp_nape::constraint::ZPP_Constraint tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(377)
				tmp10->wake();
			}
		}
		HX_STACK_LINE(377)
		::zpp_nape::constraint::ZPP_WeldJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(377)
		tmp4->phase;
	}
}
;
	return null();
}

//WeldJoint_obj::~WeldJoint_obj() { }

Dynamic WeldJoint_obj::__CreateEmpty() { return  new WeldJoint_obj; }
hx::ObjectPtr< WeldJoint_obj > WeldJoint_obj::__new(::nape::phys::Body body1,::nape::phys::Body body2,::nape::geom::Vec2 anchor1,::nape::geom::Vec2 anchor2,hx::Null< Float >  __o_phase)
{  hx::ObjectPtr< WeldJoint_obj > _result_ = new WeldJoint_obj();
	_result_->__construct(body1,body2,anchor1,anchor2,__o_phase);
	return _result_;}

Dynamic WeldJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WeldJoint_obj > _result_ = new WeldJoint_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

::nape::phys::Body WeldJoint_obj::get_body1( ){
	HX_STACK_FRAME("nape.constraint.WeldJoint","get_body1",0x92c84631,"nape.constraint.WeldJoint.get_body1","nape/constraint/WeldJoint.hx",205,0x63bebec5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(206)
	::zpp_nape::constraint::ZPP_WeldJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(206)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(206)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(206)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(206)
	if ((tmp2)){
		HX_STACK_LINE(206)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(206)
		::zpp_nape::constraint::ZPP_WeldJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(206)
		tmp3 = tmp4->b1->outer;
	}
	HX_STACK_LINE(206)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(WeldJoint_obj,get_body1,return )

::nape::phys::Body WeldJoint_obj::set_body1( ::nape::phys::Body body1){
	HX_STACK_FRAME("nape.constraint.WeldJoint","set_body1",0x7619323d,"nape.constraint.WeldJoint.set_body1","nape/constraint/WeldJoint.hx",208,0x63bebec5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body1,"body1")
	HX_STACK_LINE(209)
	{
		HX_STACK_LINE(210)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(210)
		::String tmp1 = HX_HCSTRING("Constraint::body1","\xb2","\xdd","\x0c","\x93");		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(210)
		tmp->immutable_midstep(tmp1);
		HX_STACK_LINE(211)
		bool tmp2 = (body1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(211)
		::zpp_nape::phys::ZPP_Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(211)
		if ((tmp2)){
			HX_STACK_LINE(211)
			tmp3 = null();
		}
		else{
			HX_STACK_LINE(211)
			tmp3 = body1->zpp_inner;
		}
		HX_STACK_LINE(211)
		::zpp_nape::phys::ZPP_Body inbody1 = tmp3;		HX_STACK_VAR(inbody1,"inbody1");
		HX_STACK_LINE(212)
		::zpp_nape::phys::ZPP_Body tmp4 = inbody1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(212)
		::zpp_nape::constraint::ZPP_WeldJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(212)
		::zpp_nape::phys::ZPP_Body tmp6 = tmp5->b1;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(212)
		bool tmp7 = (tmp4 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(212)
		if ((tmp7)){
			HX_STACK_LINE(213)
			::zpp_nape::constraint::ZPP_WeldJoint tmp8 = this->zpp_inner_zn;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(213)
			::zpp_nape::phys::ZPP_Body tmp9 = tmp8->b1;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(213)
			bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(213)
			if ((tmp10)){
				HX_STACK_LINE(214)
				::zpp_nape::constraint::ZPP_Constraint tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(214)
				::zpp_nape::space::ZPP_Space tmp12 = tmp11->space;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(214)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(214)
				::nape::space::Space tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(214)
				if ((tmp13)){
					HX_STACK_LINE(214)
					tmp14 = null();
				}
				else{
					HX_STACK_LINE(214)
					::zpp_nape::constraint::ZPP_Constraint tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(214)
					tmp14 = tmp15->space->outer;
				}
				HX_STACK_LINE(214)
				bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(214)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(214)
				if ((tmp15)){
					HX_STACK_LINE(214)
					::zpp_nape::constraint::ZPP_WeldJoint tmp17 = this->zpp_inner_zn;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(214)
					::zpp_nape::constraint::ZPP_WeldJoint tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(214)
					::zpp_nape::phys::ZPP_Body tmp19 = tmp18->b2;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(214)
					::zpp_nape::constraint::ZPP_WeldJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(214)
					::zpp_nape::constraint::ZPP_WeldJoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(214)
					::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b1;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(214)
					tmp16 = (tmp19 != tmp22);
				}
				else{
					HX_STACK_LINE(214)
					tmp16 = false;
				}
				HX_STACK_LINE(214)
				if ((tmp16)){
					HX_STACK_LINE(216)
					::zpp_nape::constraint::ZPP_WeldJoint tmp17 = this->zpp_inner_zn;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(216)
					::zpp_nape::phys::ZPP_Body tmp18 = tmp17->b1;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(216)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(216)
					if ((tmp19)){
						HX_STACK_LINE(216)
						::zpp_nape::constraint::ZPP_WeldJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(216)
						::zpp_nape::util::ZNPList_ZPP_Constraint tmp21 = tmp20->b1->constraints;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(216)
						::zpp_nape::constraint::ZPP_Constraint tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(216)
						tmp21->remove(tmp22);
					}
				}
				HX_STACK_LINE(219)
				::zpp_nape::constraint::ZPP_Constraint tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(219)
				bool tmp18 = tmp17->active;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(219)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(219)
				if ((tmp18)){
					HX_STACK_LINE(219)
					::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(219)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(219)
					::zpp_nape::space::ZPP_Space tmp22 = tmp21->space;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(219)
					bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(219)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(219)
					::nape::space::Space tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(219)
					bool tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(219)
					if ((tmp26)){
						HX_STACK_LINE(219)
						tmp25 = null();
					}
					else{
						HX_STACK_LINE(219)
						::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(219)
						::zpp_nape::constraint::ZPP_Constraint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(219)
						::nape::space::Space tmp29 = tmp28->space->outer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(219)
						tmp25 = tmp29;
					}
					HX_STACK_LINE(219)
					tmp19 = (tmp25 != null());
				}
				else{
					HX_STACK_LINE(219)
					tmp19 = false;
				}
				HX_STACK_LINE(219)
				if ((tmp19)){
					HX_STACK_LINE(219)
					::zpp_nape::constraint::ZPP_WeldJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(219)
					tmp20->b1->wake();
				}
			}
			HX_STACK_LINE(221)
			::zpp_nape::constraint::ZPP_WeldJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(221)
			tmp11->b1 = inbody1;
			HX_STACK_LINE(222)
			::zpp_nape::constraint::ZPP_Constraint tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(222)
			::zpp_nape::space::ZPP_Space tmp13 = tmp12->space;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(222)
			bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(222)
			::nape::space::Space tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(222)
			if ((tmp14)){
				HX_STACK_LINE(222)
				tmp15 = null();
			}
			else{
				HX_STACK_LINE(222)
				::zpp_nape::constraint::ZPP_Constraint tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(222)
				tmp15 = tmp16->space->outer;
			}
			HX_STACK_LINE(222)
			bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(222)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(222)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(222)
			if ((tmp17)){
				HX_STACK_LINE(222)
				tmp18 = (inbody1 != null());
			}
			else{
				HX_STACK_LINE(222)
				tmp18 = false;
			}
			HX_STACK_LINE(222)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(222)
			if ((tmp18)){
				HX_STACK_LINE(222)
				::zpp_nape::constraint::ZPP_WeldJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(222)
				::zpp_nape::constraint::ZPP_WeldJoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(222)
				::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b2;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(222)
				::zpp_nape::phys::ZPP_Body tmp23 = inbody1;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(222)
				tmp19 = (tmp22 != tmp23);
			}
			else{
				HX_STACK_LINE(222)
				tmp19 = false;
			}
			HX_STACK_LINE(222)
			if ((tmp19)){
				HX_STACK_LINE(224)
				bool tmp20 = (inbody1 != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(224)
				if ((tmp20)){
					HX_STACK_LINE(224)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(224)
					inbody1->constraints->add(tmp21);
				}
			}
			HX_STACK_LINE(227)
			::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(227)
			bool tmp21 = tmp20->active;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(227)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(227)
			if ((tmp21)){
				HX_STACK_LINE(227)
				::zpp_nape::constraint::ZPP_Constraint tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(227)
				::zpp_nape::constraint::ZPP_Constraint tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(227)
				::zpp_nape::space::ZPP_Space tmp25 = tmp24->space;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(227)
				bool tmp26 = (tmp25 == null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(227)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(227)
				::nape::space::Space tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(227)
				bool tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(227)
				if ((tmp29)){
					HX_STACK_LINE(227)
					tmp28 = null();
				}
				else{
					HX_STACK_LINE(227)
					::zpp_nape::constraint::ZPP_Constraint tmp30 = this->zpp_inner;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(227)
					::zpp_nape::constraint::ZPP_Constraint tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(227)
					::nape::space::Space tmp32 = tmp31->space->outer;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(227)
					tmp28 = tmp32;
				}
				HX_STACK_LINE(227)
				tmp22 = (tmp28 != null());
			}
			else{
				HX_STACK_LINE(227)
				tmp22 = false;
			}
			HX_STACK_LINE(227)
			if ((tmp22)){
				HX_STACK_LINE(228)
				::zpp_nape::constraint::ZPP_Constraint tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(228)
				tmp23->wake();
				HX_STACK_LINE(229)
				bool tmp24 = (inbody1 != null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(229)
				if ((tmp24)){
					HX_STACK_LINE(229)
					inbody1->wake();
				}
			}
		}
	}
	HX_STACK_LINE(233)
	::zpp_nape::constraint::ZPP_WeldJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(233)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(233)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(233)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(233)
	if ((tmp2)){
		HX_STACK_LINE(233)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(233)
		::zpp_nape::constraint::ZPP_WeldJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(233)
		tmp3 = tmp4->b1->outer;
	}
	HX_STACK_LINE(233)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(WeldJoint_obj,set_body1,return )

::nape::phys::Body WeldJoint_obj::get_body2( ){
	HX_STACK_FRAME("nape.constraint.WeldJoint","get_body2",0x92c84632,"nape.constraint.WeldJoint.get_body2","nape/constraint/WeldJoint.hx",243,0x63bebec5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(244)
	::zpp_nape::constraint::ZPP_WeldJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(244)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(244)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(244)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(244)
	if ((tmp2)){
		HX_STACK_LINE(244)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(244)
		::zpp_nape::constraint::ZPP_WeldJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(244)
		tmp3 = tmp4->b2->outer;
	}
	HX_STACK_LINE(244)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(WeldJoint_obj,get_body2,return )

::nape::phys::Body WeldJoint_obj::set_body2( ::nape::phys::Body body2){
	HX_STACK_FRAME("nape.constraint.WeldJoint","set_body2",0x7619323e,"nape.constraint.WeldJoint.set_body2","nape/constraint/WeldJoint.hx",246,0x63bebec5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body2,"body2")
	HX_STACK_LINE(247)
	{
		HX_STACK_LINE(248)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(248)
		::String tmp1 = HX_HCSTRING("Constraint::body2","\xb3","\xdd","\x0c","\x93");		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(248)
		tmp->immutable_midstep(tmp1);
		HX_STACK_LINE(249)
		bool tmp2 = (body2 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(249)
		::zpp_nape::phys::ZPP_Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(249)
		if ((tmp2)){
			HX_STACK_LINE(249)
			tmp3 = null();
		}
		else{
			HX_STACK_LINE(249)
			tmp3 = body2->zpp_inner;
		}
		HX_STACK_LINE(249)
		::zpp_nape::phys::ZPP_Body inbody2 = tmp3;		HX_STACK_VAR(inbody2,"inbody2");
		HX_STACK_LINE(250)
		::zpp_nape::phys::ZPP_Body tmp4 = inbody2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(250)
		::zpp_nape::constraint::ZPP_WeldJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(250)
		::zpp_nape::phys::ZPP_Body tmp6 = tmp5->b2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(250)
		bool tmp7 = (tmp4 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(250)
		if ((tmp7)){
			HX_STACK_LINE(251)
			::zpp_nape::constraint::ZPP_WeldJoint tmp8 = this->zpp_inner_zn;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(251)
			::zpp_nape::phys::ZPP_Body tmp9 = tmp8->b2;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(251)
			bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(251)
			if ((tmp10)){
				HX_STACK_LINE(252)
				::zpp_nape::constraint::ZPP_Constraint tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(252)
				::zpp_nape::space::ZPP_Space tmp12 = tmp11->space;		HX_STACK_VAR(tmp12,"tmp12");
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
					::zpp_nape::constraint::ZPP_Constraint tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(252)
					tmp14 = tmp15->space->outer;
				}
				HX_STACK_LINE(252)
				bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(252)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(252)
				if ((tmp15)){
					HX_STACK_LINE(252)
					::zpp_nape::constraint::ZPP_WeldJoint tmp17 = this->zpp_inner_zn;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(252)
					::zpp_nape::constraint::ZPP_WeldJoint tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(252)
					::zpp_nape::phys::ZPP_Body tmp19 = tmp18->b1;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(252)
					::zpp_nape::constraint::ZPP_WeldJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(252)
					::zpp_nape::constraint::ZPP_WeldJoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(252)
					::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b2;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(252)
					tmp16 = (tmp19 != tmp22);
				}
				else{
					HX_STACK_LINE(252)
					tmp16 = false;
				}
				HX_STACK_LINE(252)
				if ((tmp16)){
					HX_STACK_LINE(254)
					::zpp_nape::constraint::ZPP_WeldJoint tmp17 = this->zpp_inner_zn;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(254)
					::zpp_nape::phys::ZPP_Body tmp18 = tmp17->b2;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(254)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(254)
					if ((tmp19)){
						HX_STACK_LINE(254)
						::zpp_nape::constraint::ZPP_WeldJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(254)
						::zpp_nape::util::ZNPList_ZPP_Constraint tmp21 = tmp20->b2->constraints;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(254)
						::zpp_nape::constraint::ZPP_Constraint tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(254)
						tmp21->remove(tmp22);
					}
				}
				HX_STACK_LINE(257)
				::zpp_nape::constraint::ZPP_Constraint tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(257)
				bool tmp18 = tmp17->active;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(257)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(257)
				if ((tmp18)){
					HX_STACK_LINE(257)
					::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(257)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(257)
					::zpp_nape::space::ZPP_Space tmp22 = tmp21->space;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(257)
					bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(257)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(257)
					::nape::space::Space tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(257)
					bool tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(257)
					if ((tmp26)){
						HX_STACK_LINE(257)
						tmp25 = null();
					}
					else{
						HX_STACK_LINE(257)
						::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(257)
						::zpp_nape::constraint::ZPP_Constraint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(257)
						::nape::space::Space tmp29 = tmp28->space->outer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(257)
						tmp25 = tmp29;
					}
					HX_STACK_LINE(257)
					tmp19 = (tmp25 != null());
				}
				else{
					HX_STACK_LINE(257)
					tmp19 = false;
				}
				HX_STACK_LINE(257)
				if ((tmp19)){
					HX_STACK_LINE(257)
					::zpp_nape::constraint::ZPP_WeldJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(257)
					tmp20->b2->wake();
				}
			}
			HX_STACK_LINE(259)
			::zpp_nape::constraint::ZPP_WeldJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(259)
			tmp11->b2 = inbody2;
			HX_STACK_LINE(260)
			::zpp_nape::constraint::ZPP_Constraint tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(260)
			::zpp_nape::space::ZPP_Space tmp13 = tmp12->space;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(260)
			bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(260)
			::nape::space::Space tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(260)
			if ((tmp14)){
				HX_STACK_LINE(260)
				tmp15 = null();
			}
			else{
				HX_STACK_LINE(260)
				::zpp_nape::constraint::ZPP_Constraint tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(260)
				tmp15 = tmp16->space->outer;
			}
			HX_STACK_LINE(260)
			bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(260)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(260)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(260)
			if ((tmp17)){
				HX_STACK_LINE(260)
				tmp18 = (inbody2 != null());
			}
			else{
				HX_STACK_LINE(260)
				tmp18 = false;
			}
			HX_STACK_LINE(260)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(260)
			if ((tmp18)){
				HX_STACK_LINE(260)
				::zpp_nape::constraint::ZPP_WeldJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(260)
				::zpp_nape::constraint::ZPP_WeldJoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(260)
				::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b1;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(260)
				::zpp_nape::phys::ZPP_Body tmp23 = inbody2;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(260)
				tmp19 = (tmp22 != tmp23);
			}
			else{
				HX_STACK_LINE(260)
				tmp19 = false;
			}
			HX_STACK_LINE(260)
			if ((tmp19)){
				HX_STACK_LINE(262)
				bool tmp20 = (inbody2 != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(262)
				if ((tmp20)){
					HX_STACK_LINE(262)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(262)
					inbody2->constraints->add(tmp21);
				}
			}
			HX_STACK_LINE(265)
			::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(265)
			bool tmp21 = tmp20->active;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(265)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(265)
			if ((tmp21)){
				HX_STACK_LINE(265)
				::zpp_nape::constraint::ZPP_Constraint tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(265)
				::zpp_nape::constraint::ZPP_Constraint tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(265)
				::zpp_nape::space::ZPP_Space tmp25 = tmp24->space;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(265)
				bool tmp26 = (tmp25 == null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(265)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(265)
				::nape::space::Space tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(265)
				bool tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(265)
				if ((tmp29)){
					HX_STACK_LINE(265)
					tmp28 = null();
				}
				else{
					HX_STACK_LINE(265)
					::zpp_nape::constraint::ZPP_Constraint tmp30 = this->zpp_inner;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(265)
					::zpp_nape::constraint::ZPP_Constraint tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(265)
					::nape::space::Space tmp32 = tmp31->space->outer;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(265)
					tmp28 = tmp32;
				}
				HX_STACK_LINE(265)
				tmp22 = (tmp28 != null());
			}
			else{
				HX_STACK_LINE(265)
				tmp22 = false;
			}
			HX_STACK_LINE(265)
			if ((tmp22)){
				HX_STACK_LINE(266)
				::zpp_nape::constraint::ZPP_Constraint tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(266)
				tmp23->wake();
				HX_STACK_LINE(267)
				bool tmp24 = (inbody2 != null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(267)
				if ((tmp24)){
					HX_STACK_LINE(267)
					inbody2->wake();
				}
			}
		}
	}
	HX_STACK_LINE(271)
	::zpp_nape::constraint::ZPP_WeldJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(271)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(271)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(271)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(271)
	if ((tmp2)){
		HX_STACK_LINE(271)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(271)
		::zpp_nape::constraint::ZPP_WeldJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(271)
		tmp3 = tmp4->b2->outer;
	}
	HX_STACK_LINE(271)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(WeldJoint_obj,set_body2,return )

::nape::geom::Vec2 WeldJoint_obj::get_anchor1( ){
	HX_STACK_FRAME("nape.constraint.WeldJoint","get_anchor1",0xdba65b7e,"nape.constraint.WeldJoint.get_anchor1","nape/constraint/WeldJoint.hx",280,0x63bebec5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(281)
	::zpp_nape::constraint::ZPP_WeldJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(281)
	::nape::geom::Vec2 tmp1 = tmp->wrap_a1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(281)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(281)
	if ((tmp2)){
		HX_STACK_LINE(281)
		::zpp_nape::constraint::ZPP_WeldJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(281)
		tmp3->setup_a1();
	}
	HX_STACK_LINE(282)
	::zpp_nape::constraint::ZPP_WeldJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(282)
	::nape::geom::Vec2 tmp4 = tmp3->wrap_a1;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(282)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(WeldJoint_obj,get_anchor1,return )

::nape::geom::Vec2 WeldJoint_obj::set_anchor1( ::nape::geom::Vec2 anchor1){
	HX_STACK_FRAME("nape.constraint.WeldJoint","set_anchor1",0xe613628a,"nape.constraint.WeldJoint.set_anchor1","nape/constraint/WeldJoint.hx",284,0x63bebec5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(anchor1,"anchor1")
	HX_STACK_LINE(294)
	{
		HX_STACK_LINE(294)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(294)
		{
			HX_STACK_LINE(294)
			::zpp_nape::constraint::ZPP_WeldJoint tmp1 = this->zpp_inner_zn;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(294)
			::nape::geom::Vec2 tmp2 = tmp1->wrap_a1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(294)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(294)
			if ((tmp3)){
				HX_STACK_LINE(294)
				::zpp_nape::constraint::ZPP_WeldJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(294)
				tmp4->setup_a1();
			}
			HX_STACK_LINE(294)
			::zpp_nape::constraint::ZPP_WeldJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(294)
			tmp = tmp4->wrap_a1;
		}
		HX_STACK_LINE(294)
		::nape::geom::Vec2 _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(294)
		::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(294)
		{
			HX_STACK_LINE(294)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(294)
			{
				HX_STACK_LINE(294)
				{
					HX_STACK_LINE(294)
					::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(294)
					bool tmp3 = (_this1->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(294)
					if ((tmp3)){
						HX_STACK_LINE(294)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(294)
				tmp2 = anchor1->zpp_inner->x;
			}
			HX_STACK_LINE(294)
			Float x = tmp2;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(294)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(294)
			{
				HX_STACK_LINE(294)
				{
					HX_STACK_LINE(294)
					::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(294)
					bool tmp4 = (_this1->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(294)
					if ((tmp4)){
						HX_STACK_LINE(294)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(294)
				tmp3 = anchor1->zpp_inner->y;
			}
			HX_STACK_LINE(294)
			Float y = tmp3;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(294)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(294)
			{
				HX_STACK_LINE(294)
				{
					HX_STACK_LINE(294)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(294)
					bool tmp5 = (_this1->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(294)
					if ((tmp5)){
						HX_STACK_LINE(294)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(294)
				tmp4 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(294)
			Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(294)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(294)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(294)
			if ((tmp6)){
				HX_STACK_LINE(294)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(294)
				{
					HX_STACK_LINE(294)
					{
						HX_STACK_LINE(294)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(294)
						bool tmp9 = (_this1->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(294)
						bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(294)
						bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(294)
						if ((tmp11)){
							HX_STACK_LINE(294)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(294)
					Float tmp9 = _this->zpp_inner->y;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(294)
					tmp8 = tmp9;
				}
				HX_STACK_LINE(294)
				Float tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(294)
				tmp7 = (tmp8 == tmp9);
			}
			else{
				HX_STACK_LINE(294)
				tmp7 = false;
			}
			HX_STACK_LINE(294)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(294)
			if ((tmp8)){
				HX_STACK_LINE(294)
				{
					HX_STACK_LINE(294)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(294)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(294)
					{
					}
				}
				HX_STACK_LINE(294)
				{
					HX_STACK_LINE(294)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(294)
					bool tmp9 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(294)
					if ((tmp9)){
						HX_STACK_LINE(294)
						::zpp_nape::geom::ZPP_Vec2 tmp10 = _this1;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(294)
						_this1->_invalidate(tmp10);
					}
				}
			}
			HX_STACK_LINE(294)
			tmp1 = _this;
		}
		HX_STACK_LINE(294)
		::nape::geom::Vec2 ret = tmp1;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(294)
		{
			HX_STACK_LINE(294)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(294)
			tmp2 = anchor1->zpp_inner->weak;
			HX_STACK_LINE(294)
			if ((tmp2)){
				HX_STACK_LINE(294)
				{
					HX_STACK_LINE(294)
					::zpp_nape::geom::ZPP_Vec2 inner = anchor1->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(294)
					anchor1->zpp_inner->outer = null();
					HX_STACK_LINE(294)
					anchor1->zpp_inner = null();
					HX_STACK_LINE(294)
					{
						HX_STACK_LINE(294)
						::nape::geom::Vec2 o = anchor1;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(294)
						::nape::geom::Vec2 tmp3 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(294)
						o->zpp_pool = tmp3;
						HX_STACK_LINE(294)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(294)
					{
						HX_STACK_LINE(294)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(294)
						{
							HX_STACK_LINE(294)
							bool tmp3 = (o->outer != null());		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(294)
							if ((tmp3)){
								HX_STACK_LINE(294)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(294)
								o->outer = null();
							}
							HX_STACK_LINE(294)
							o->_isimmutable = null();
							HX_STACK_LINE(294)
							o->_validate = null();
							HX_STACK_LINE(294)
							o->_invalidate = null();
						}
						HX_STACK_LINE(294)
						::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(294)
						o->next = tmp3;
						HX_STACK_LINE(294)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(294)
				true;
			}
			else{
				HX_STACK_LINE(294)
				false;
			}
		}
		HX_STACK_LINE(294)
		ret;
	}
	HX_STACK_LINE(296)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(296)
	{
		HX_STACK_LINE(296)
		::zpp_nape::constraint::ZPP_WeldJoint tmp1 = this->zpp_inner_zn;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(296)
		::nape::geom::Vec2 tmp2 = tmp1->wrap_a1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(296)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(296)
		if ((tmp3)){
			HX_STACK_LINE(296)
			::zpp_nape::constraint::ZPP_WeldJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(296)
			tmp4->setup_a1();
		}
		HX_STACK_LINE(296)
		::zpp_nape::constraint::ZPP_WeldJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(296)
		tmp = tmp4->wrap_a1;
	}
	HX_STACK_LINE(296)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(WeldJoint_obj,set_anchor1,return )

::nape::geom::Vec2 WeldJoint_obj::get_anchor2( ){
	HX_STACK_FRAME("nape.constraint.WeldJoint","get_anchor2",0xdba65b7f,"nape.constraint.WeldJoint.get_anchor2","nape/constraint/WeldJoint.hx",305,0x63bebec5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(306)
	::zpp_nape::constraint::ZPP_WeldJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(306)
	::nape::geom::Vec2 tmp1 = tmp->wrap_a2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(306)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(306)
	if ((tmp2)){
		HX_STACK_LINE(306)
		::zpp_nape::constraint::ZPP_WeldJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(306)
		tmp3->setup_a2();
	}
	HX_STACK_LINE(307)
	::zpp_nape::constraint::ZPP_WeldJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(307)
	::nape::geom::Vec2 tmp4 = tmp3->wrap_a2;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(307)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(WeldJoint_obj,get_anchor2,return )

::nape::geom::Vec2 WeldJoint_obj::set_anchor2( ::nape::geom::Vec2 anchor2){
	HX_STACK_FRAME("nape.constraint.WeldJoint","set_anchor2",0xe613628b,"nape.constraint.WeldJoint.set_anchor2","nape/constraint/WeldJoint.hx",309,0x63bebec5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(anchor2,"anchor2")
	HX_STACK_LINE(319)
	{
		HX_STACK_LINE(319)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(319)
		{
			HX_STACK_LINE(319)
			::zpp_nape::constraint::ZPP_WeldJoint tmp1 = this->zpp_inner_zn;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(319)
			::nape::geom::Vec2 tmp2 = tmp1->wrap_a2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(319)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(319)
			if ((tmp3)){
				HX_STACK_LINE(319)
				::zpp_nape::constraint::ZPP_WeldJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(319)
				tmp4->setup_a2();
			}
			HX_STACK_LINE(319)
			::zpp_nape::constraint::ZPP_WeldJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(319)
			tmp = tmp4->wrap_a2;
		}
		HX_STACK_LINE(319)
		::nape::geom::Vec2 _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(319)
		::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(319)
		{
			HX_STACK_LINE(319)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(319)
			{
				HX_STACK_LINE(319)
				{
					HX_STACK_LINE(319)
					::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(319)
					bool tmp3 = (_this1->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(319)
					if ((tmp3)){
						HX_STACK_LINE(319)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(319)
				tmp2 = anchor2->zpp_inner->x;
			}
			HX_STACK_LINE(319)
			Float x = tmp2;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(319)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(319)
			{
				HX_STACK_LINE(319)
				{
					HX_STACK_LINE(319)
					::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(319)
					bool tmp4 = (_this1->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(319)
					if ((tmp4)){
						HX_STACK_LINE(319)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(319)
				tmp3 = anchor2->zpp_inner->y;
			}
			HX_STACK_LINE(319)
			Float y = tmp3;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(319)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(319)
			{
				HX_STACK_LINE(319)
				{
					HX_STACK_LINE(319)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(319)
					bool tmp5 = (_this1->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(319)
					if ((tmp5)){
						HX_STACK_LINE(319)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(319)
				tmp4 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(319)
			Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(319)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(319)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(319)
			if ((tmp6)){
				HX_STACK_LINE(319)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(319)
				{
					HX_STACK_LINE(319)
					{
						HX_STACK_LINE(319)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(319)
						bool tmp9 = (_this1->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(319)
						bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(319)
						bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(319)
						if ((tmp11)){
							HX_STACK_LINE(319)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(319)
					Float tmp9 = _this->zpp_inner->y;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(319)
					tmp8 = tmp9;
				}
				HX_STACK_LINE(319)
				Float tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(319)
				tmp7 = (tmp8 == tmp9);
			}
			else{
				HX_STACK_LINE(319)
				tmp7 = false;
			}
			HX_STACK_LINE(319)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(319)
			if ((tmp8)){
				HX_STACK_LINE(319)
				{
					HX_STACK_LINE(319)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(319)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(319)
					{
					}
				}
				HX_STACK_LINE(319)
				{
					HX_STACK_LINE(319)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(319)
					bool tmp9 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(319)
					if ((tmp9)){
						HX_STACK_LINE(319)
						::zpp_nape::geom::ZPP_Vec2 tmp10 = _this1;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(319)
						_this1->_invalidate(tmp10);
					}
				}
			}
			HX_STACK_LINE(319)
			tmp1 = _this;
		}
		HX_STACK_LINE(319)
		::nape::geom::Vec2 ret = tmp1;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(319)
		{
			HX_STACK_LINE(319)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(319)
			tmp2 = anchor2->zpp_inner->weak;
			HX_STACK_LINE(319)
			if ((tmp2)){
				HX_STACK_LINE(319)
				{
					HX_STACK_LINE(319)
					::zpp_nape::geom::ZPP_Vec2 inner = anchor2->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(319)
					anchor2->zpp_inner->outer = null();
					HX_STACK_LINE(319)
					anchor2->zpp_inner = null();
					HX_STACK_LINE(319)
					{
						HX_STACK_LINE(319)
						::nape::geom::Vec2 o = anchor2;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(319)
						::nape::geom::Vec2 tmp3 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(319)
						o->zpp_pool = tmp3;
						HX_STACK_LINE(319)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(319)
					{
						HX_STACK_LINE(319)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(319)
						{
							HX_STACK_LINE(319)
							bool tmp3 = (o->outer != null());		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(319)
							if ((tmp3)){
								HX_STACK_LINE(319)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(319)
								o->outer = null();
							}
							HX_STACK_LINE(319)
							o->_isimmutable = null();
							HX_STACK_LINE(319)
							o->_validate = null();
							HX_STACK_LINE(319)
							o->_invalidate = null();
						}
						HX_STACK_LINE(319)
						::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(319)
						o->next = tmp3;
						HX_STACK_LINE(319)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(319)
				true;
			}
			else{
				HX_STACK_LINE(319)
				false;
			}
		}
		HX_STACK_LINE(319)
		ret;
	}
	HX_STACK_LINE(321)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(321)
	{
		HX_STACK_LINE(321)
		::zpp_nape::constraint::ZPP_WeldJoint tmp1 = this->zpp_inner_zn;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(321)
		::nape::geom::Vec2 tmp2 = tmp1->wrap_a2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(321)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(321)
		if ((tmp3)){
			HX_STACK_LINE(321)
			::zpp_nape::constraint::ZPP_WeldJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(321)
			tmp4->setup_a2();
		}
		HX_STACK_LINE(321)
		::zpp_nape::constraint::ZPP_WeldJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(321)
		tmp = tmp4->wrap_a2;
	}
	HX_STACK_LINE(321)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(WeldJoint_obj,set_anchor2,return )

Float WeldJoint_obj::get_phase( ){
	HX_STACK_FRAME("nape.constraint.WeldJoint","get_phase",0x9dc19b1d,"nape.constraint.WeldJoint.get_phase","nape/constraint/WeldJoint.hx",330,0x63bebec5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(331)
	::zpp_nape::constraint::ZPP_WeldJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(331)
	Float tmp1 = tmp->phase;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(331)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(WeldJoint_obj,get_phase,return )

Float WeldJoint_obj::set_phase( Float phase){
	HX_STACK_FRAME("nape.constraint.WeldJoint","set_phase",0x81128729,"nape.constraint.WeldJoint.set_phase","nape/constraint/WeldJoint.hx",333,0x63bebec5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(phase,"phase")
	HX_STACK_LINE(334)
	{
		HX_STACK_LINE(335)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(335)
		tmp->immutable_midstep(HX_HCSTRING("WeldJoint::phase","\xb7","\x60","\x55","\x86"));
		HX_STACK_LINE(341)
		::zpp_nape::constraint::ZPP_WeldJoint tmp1 = this->zpp_inner_zn;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(341)
		Float tmp2 = tmp1->phase;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(341)
		Float tmp3 = phase;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(341)
		bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(341)
		if ((tmp4)){
			HX_STACK_LINE(342)
			::zpp_nape::constraint::ZPP_WeldJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(342)
			tmp5->phase = phase;
			HX_STACK_LINE(343)
			::zpp_nape::constraint::ZPP_Constraint tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(343)
			tmp6->wake();
		}
	}
	HX_STACK_LINE(346)
	::zpp_nape::constraint::ZPP_WeldJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(346)
	Float tmp1 = tmp->phase;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(346)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(WeldJoint_obj,set_phase,return )

::nape::geom::MatMN WeldJoint_obj::impulse( ){
	HX_STACK_FRAME("nape.constraint.WeldJoint","impulse",0x8a051e80,"nape.constraint.WeldJoint.impulse","nape/constraint/WeldJoint.hx",384,0x63bebec5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(385)
	::nape::geom::MatMN tmp = ::nape::geom::MatMN_obj::__new((int)3,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(385)
	::nape::geom::MatMN ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(386)
	int tmp1 = ret->zpp_inner->n;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(386)
	int tmp2 = ((int)0 * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(386)
	int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(386)
	::zpp_nape::constraint::ZPP_WeldJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(386)
	Float tmp5 = tmp4->jAccx;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(386)
	ret->zpp_inner->x[tmp3] = tmp5;
	HX_STACK_LINE(387)
	int tmp6 = ret->zpp_inner->n;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(387)
	int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(387)
	int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(387)
	::zpp_nape::constraint::ZPP_WeldJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(387)
	Float tmp10 = tmp9->jAccy;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(387)
	ret->zpp_inner->x[tmp8] = tmp10;
	HX_STACK_LINE(388)
	int tmp11 = ret->zpp_inner->n;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(388)
	int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(388)
	int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(388)
	::zpp_nape::constraint::ZPP_WeldJoint tmp14 = this->zpp_inner_zn;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(388)
	Float tmp15 = tmp14->jAccz;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(388)
	ret->zpp_inner->x[tmp13] = tmp15;
	HX_STACK_LINE(389)
	::nape::geom::MatMN tmp16 = ret;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(389)
	return tmp16;
}


::nape::geom::Vec3 WeldJoint_obj::bodyImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.constraint.WeldJoint","bodyImpulse",0xb2ac857e,"nape.constraint.WeldJoint.bodyImpulse","nape/constraint/WeldJoint.hx",394,0x63bebec5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(403)
	::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(403)
	bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(403)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(403)
	if ((tmp2)){
		HX_STACK_LINE(404)
		::nape::geom::Vec3 tmp3 = ::nape::geom::Vec3_obj::get(null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(404)
		return tmp3;
	}
	else{
		HX_STACK_LINE(407)
		::zpp_nape::constraint::ZPP_WeldJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(407)
		::zpp_nape::phys::ZPP_Body tmp4 = body->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(407)
		::nape::geom::Vec3 tmp5 = tmp3->bodyImpulse(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(407)
		return tmp5;
	}
	HX_STACK_LINE(403)
	return null();
}


Void WeldJoint_obj::visitBodies( Dynamic lambda){
{
		HX_STACK_FRAME("nape.constraint.WeldJoint","visitBodies",0x376902f6,"nape.constraint.WeldJoint.visitBodies","nape/constraint/WeldJoint.hx",413,0x63bebec5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(414)
		::zpp_nape::constraint::ZPP_WeldJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(414)
		::zpp_nape::phys::ZPP_Body tmp1 = tmp->b1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(414)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(414)
		::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(414)
		if ((tmp2)){
			HX_STACK_LINE(414)
			tmp3 = null();
		}
		else{
			HX_STACK_LINE(414)
			::zpp_nape::constraint::ZPP_WeldJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(414)
			tmp3 = tmp4->b1->outer;
		}
		HX_STACK_LINE(414)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(414)
		if ((tmp4)){
			HX_STACK_LINE(415)
			::zpp_nape::constraint::ZPP_WeldJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(415)
			::zpp_nape::phys::ZPP_Body tmp6 = tmp5->b1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(415)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(415)
			::nape::phys::Body tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(415)
			if ((tmp7)){
				HX_STACK_LINE(415)
				tmp8 = null();
			}
			else{
				HX_STACK_LINE(415)
				::zpp_nape::constraint::ZPP_WeldJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(415)
				tmp8 = tmp9->b1->outer;
			}
			HX_STACK_LINE(415)
			lambda(tmp8).Cast< Void >();
		}
		HX_STACK_LINE(417)
		::zpp_nape::constraint::ZPP_WeldJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(417)
		::zpp_nape::phys::ZPP_Body tmp6 = tmp5->b2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(417)
		bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(417)
		::nape::phys::Body tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(417)
		if ((tmp7)){
			HX_STACK_LINE(417)
			tmp8 = null();
		}
		else{
			HX_STACK_LINE(417)
			::zpp_nape::constraint::ZPP_WeldJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(417)
			tmp8 = tmp9->b2->outer;
		}
		HX_STACK_LINE(417)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(417)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(417)
		if ((tmp9)){
			HX_STACK_LINE(417)
			::zpp_nape::constraint::ZPP_WeldJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(417)
			::zpp_nape::constraint::ZPP_WeldJoint tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(417)
			::zpp_nape::phys::ZPP_Body tmp13 = tmp12->b2;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(417)
			bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(417)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(417)
			::nape::phys::Body tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(417)
			bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(417)
			if ((tmp17)){
				HX_STACK_LINE(417)
				tmp16 = null();
			}
			else{
				HX_STACK_LINE(417)
				::zpp_nape::constraint::ZPP_WeldJoint tmp18 = this->zpp_inner_zn;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(417)
				::zpp_nape::constraint::ZPP_WeldJoint tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(417)
				::nape::phys::Body tmp20 = tmp19->b2->outer;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(417)
				tmp16 = tmp20;
			}
			HX_STACK_LINE(417)
			::zpp_nape::constraint::ZPP_WeldJoint tmp18 = this->zpp_inner_zn;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(417)
			::zpp_nape::constraint::ZPP_WeldJoint tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(417)
			::zpp_nape::phys::ZPP_Body tmp20 = tmp19->b1;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(417)
			bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(417)
			bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(417)
			::nape::phys::Body tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(417)
			bool tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(417)
			if ((tmp24)){
				HX_STACK_LINE(417)
				tmp23 = null();
			}
			else{
				HX_STACK_LINE(417)
				::zpp_nape::constraint::ZPP_WeldJoint tmp25 = this->zpp_inner_zn;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(417)
				::zpp_nape::constraint::ZPP_WeldJoint tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(417)
				::nape::phys::Body tmp27 = tmp26->b1->outer;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(417)
				tmp23 = tmp27;
			}
			HX_STACK_LINE(417)
			tmp10 = (tmp16 != tmp23);
		}
		else{
			HX_STACK_LINE(417)
			tmp10 = false;
		}
		HX_STACK_LINE(417)
		if ((tmp10)){
			HX_STACK_LINE(418)
			::zpp_nape::constraint::ZPP_WeldJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(418)
			::zpp_nape::phys::ZPP_Body tmp12 = tmp11->b2;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(418)
			bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(418)
			::nape::phys::Body tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(418)
			if ((tmp13)){
				HX_STACK_LINE(418)
				tmp14 = null();
			}
			else{
				HX_STACK_LINE(418)
				::zpp_nape::constraint::ZPP_WeldJoint tmp15 = this->zpp_inner_zn;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(418)
				tmp14 = tmp15->b2->outer;
			}
			HX_STACK_LINE(418)
			lambda(tmp14).Cast< Void >();
		}
	}
return null();
}



WeldJoint_obj::WeldJoint_obj()
{
}

void WeldJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WeldJoint);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::constraint::Constraint_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void WeldJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::constraint::Constraint_obj::__Visit(HX_VISIT_ARG);
}

Dynamic WeldJoint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"body1") ) { if (inCallProp == hx::paccAlways) return get_body1(); }
		if (HX_FIELD_EQ(inName,"body2") ) { if (inCallProp == hx::paccAlways) return get_body2(); }
		if (HX_FIELD_EQ(inName,"phase") ) { if (inCallProp == hx::paccAlways) return get_phase(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"anchor1") ) { if (inCallProp == hx::paccAlways) return get_anchor1(); }
		if (HX_FIELD_EQ(inName,"anchor2") ) { if (inCallProp == hx::paccAlways) return get_anchor2(); }
		if (HX_FIELD_EQ(inName,"impulse") ) { return impulse_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_body1") ) { return get_body1_dyn(); }
		if (HX_FIELD_EQ(inName,"set_body1") ) { return set_body1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_body2") ) { return get_body2_dyn(); }
		if (HX_FIELD_EQ(inName,"set_body2") ) { return set_body2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_phase") ) { return get_phase_dyn(); }
		if (HX_FIELD_EQ(inName,"set_phase") ) { return set_phase_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_anchor1") ) { return get_anchor1_dyn(); }
		if (HX_FIELD_EQ(inName,"set_anchor1") ) { return set_anchor1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_anchor2") ) { return get_anchor2_dyn(); }
		if (HX_FIELD_EQ(inName,"set_anchor2") ) { return set_anchor2_dyn(); }
		if (HX_FIELD_EQ(inName,"bodyImpulse") ) { return bodyImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"visitBodies") ) { return visitBodies_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { return zpp_inner_zn; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WeldJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"body1") ) { if (inCallProp == hx::paccAlways) return set_body1(inValue); }
		if (HX_FIELD_EQ(inName,"body2") ) { if (inCallProp == hx::paccAlways) return set_body2(inValue); }
		if (HX_FIELD_EQ(inName,"phase") ) { if (inCallProp == hx::paccAlways) return set_phase(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"anchor1") ) { if (inCallProp == hx::paccAlways) return set_anchor1(inValue); }
		if (HX_FIELD_EQ(inName,"anchor2") ) { if (inCallProp == hx::paccAlways) return set_anchor2(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::constraint::ZPP_WeldJoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WeldJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0"));
	outFields->push(HX_HCSTRING("body1","\x4f","\xd3","\xef","\xb6"));
	outFields->push(HX_HCSTRING("body2","\x50","\xd3","\xef","\xb6"));
	outFields->push(HX_HCSTRING("anchor1","\x1c","\xec","\xa1","\x02"));
	outFields->push(HX_HCSTRING("anchor2","\x1d","\xec","\xa1","\x02"));
	outFields->push(HX_HCSTRING("phase","\x3b","\x28","\xe9","\xc1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::constraint::ZPP_WeldJoint*/ ,(int)offsetof(WeldJoint_obj,zpp_inner_zn),HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0"),
	HX_HCSTRING("get_body1","\xa6","\x2f","\x99","\xfa"),
	HX_HCSTRING("set_body1","\xb2","\x1b","\xea","\xdd"),
	HX_HCSTRING("get_body2","\xa7","\x2f","\x99","\xfa"),
	HX_HCSTRING("set_body2","\xb3","\x1b","\xea","\xdd"),
	HX_HCSTRING("get_anchor1","\x33","\x4c","\x9c","\x88"),
	HX_HCSTRING("set_anchor1","\x3f","\x53","\x09","\x93"),
	HX_HCSTRING("get_anchor2","\x34","\x4c","\x9c","\x88"),
	HX_HCSTRING("set_anchor2","\x40","\x53","\x09","\x93"),
	HX_HCSTRING("get_phase","\x92","\x84","\x92","\x05"),
	HX_HCSTRING("set_phase","\x9e","\x70","\xe3","\xe8"),
	HX_HCSTRING("impulse","\xb5","\x50","\xbd","\x6d"),
	HX_HCSTRING("bodyImpulse","\x33","\x76","\xa2","\x5f"),
	HX_HCSTRING("visitBodies","\xab","\xf3","\x5e","\xe4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WeldJoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WeldJoint_obj::__mClass,"__mClass");
};

#endif

hx::Class WeldJoint_obj::__mClass;

void WeldJoint_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.constraint.WeldJoint","\x39","\xeb","\x13","\x77");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WeldJoint_obj >;
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
} // end namespace constraint
