#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterIterator
#include <nape/dynamics/ArbiterIterator.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterList
#include <nape/dynamics/ArbiterList.h>
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
#ifndef INCLUDED_nape_dynamics_FluidArbiter
#include <nape/dynamics/FluidArbiter.h>
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
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
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
#ifndef INCLUDED_nape_util_Debug
#include <nape/util/Debug.h>
#endif
#ifndef INCLUDED_nape_util_ShapeDebug
#include <nape/util/ShapeDebug.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_CapsStyle
#include <openfl/_legacy/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_JointStyle
#include <openfl/_legacy/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_LineScaleMode
#include <openfl/_legacy/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Shape
#include <openfl/_legacy/display/Shape.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
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
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter
#include <zpp_nape/dynamics/ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_SpaceArbiterList
#include <zpp_nape/dynamics/ZPP_SpaceArbiterList.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Mat23
#include <zpp_nape/geom/ZPP_Mat23.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#include <zpp_nape/phys/ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Circle
#include <zpp_nape/shape/ZPP_Circle.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Broadphase
#include <zpp_nape/space/ZPP_Broadphase.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Body
#include <zpp_nape/util/ZNPList_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Compound
#include <zpp_nape/util/ZNPList_ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Body
#include <zpp_nape/util/ZNPNode_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Compound
#include <zpp_nape/util/ZNPNode_ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Constraint
#include <zpp_nape/util/ZNPNode_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ArbiterList
#include <zpp_nape/util/ZPP_ArbiterList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ContactList
#include <zpp_nape/util/ZPP_ContactList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Debug
#include <zpp_nape/util/ZPP_Debug.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeDebug
#include <zpp_nape/util/ZPP_ShapeDebug.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_ShapeDebug_obj::__construct(int width,int height)
{
HX_STACK_FRAME("zpp_nape.util.ZPP_ShapeDebug","new",0x20392594,"zpp_nape.util.ZPP_ShapeDebug.new","zpp_nape/util/Debug.hx",430,0xeecbde16)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
{
	HX_STACK_LINE(473)
	this->bodyList = null();
	HX_STACK_LINE(472)
	this->shapeList = null();
	HX_STACK_LINE(445)
	this->compoundstack = null();
	HX_STACK_LINE(433)
	this->graphics = null();
	HX_STACK_LINE(432)
	this->shape = null();
	HX_STACK_LINE(431)
	this->outer_zn = null();
	HX_STACK_LINE(435)
	int tmp = width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(435)
	int tmp1 = height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(435)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(436)
	::openfl::_legacy::display::Shape tmp2 = ::openfl::_legacy::display::Shape_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(436)
	this->shape = tmp2;
	HX_STACK_LINE(437)
	::openfl::_legacy::display::Shape tmp3 = this->shape;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(437)
	::openfl::_legacy::geom::Rectangle tmp4 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,width,height);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(437)
	tmp3->set_scrollRect(tmp4);
	HX_STACK_LINE(438)
	::openfl::_legacy::display::Shape tmp5 = this->shape;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(438)
	::openfl::_legacy::display::Graphics tmp6 = tmp5->get_graphics();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(438)
	this->graphics = tmp6;
	HX_STACK_LINE(439)
	this->isbmp = false;
	HX_STACK_LINE(440)
	this->d_shape = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//ZPP_ShapeDebug_obj::~ZPP_ShapeDebug_obj() { }

Dynamic ZPP_ShapeDebug_obj::__CreateEmpty() { return  new ZPP_ShapeDebug_obj; }
hx::ObjectPtr< ZPP_ShapeDebug_obj > ZPP_ShapeDebug_obj::__new(int width,int height)
{  hx::ObjectPtr< ZPP_ShapeDebug_obj > _result_ = new ZPP_ShapeDebug_obj();
	_result_->__construct(width,height);
	return _result_;}

Dynamic ZPP_ShapeDebug_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_ShapeDebug_obj > _result_ = new ZPP_ShapeDebug_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void ZPP_ShapeDebug_obj::setbg( int bgColor){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_ShapeDebug","setbg",0x5dfba81b,"zpp_nape.util.ZPP_ShapeDebug.setbg","zpp_nape/util/Debug.hx",442,0xeecbde16)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bgColor,"bgColor")
		HX_STACK_LINE(443)
		int tmp = bgColor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(443)
		this->sup_setbg(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_ShapeDebug_obj,setbg,(void))

Void ZPP_ShapeDebug_obj::draw_compound( ::zpp_nape::phys::ZPP_Compound compound,::zpp_nape::geom::ZPP_Mat23 xform,Float xdet,bool xnull){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_ShapeDebug","draw_compound",0x5da94c7a,"zpp_nape.util.ZPP_ShapeDebug.draw_compound","zpp_nape/util/Debug.hx",446,0xeecbde16)
		HX_STACK_THIS(this)
		HX_STACK_ARG(compound,"compound")
		HX_STACK_ARG(xform,"xform")
		HX_STACK_ARG(xdet,"xdet")
		HX_STACK_ARG(xnull,"xnull")
		HX_STACK_LINE(447)
		{
			HX_STACK_LINE(448)
			::zpp_nape::util::ZNPNode_ZPP_Compound tmp = compound->compounds->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(448)
			::zpp_nape::util::ZNPNode_ZPP_Compound cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(449)
			while((true)){
				HX_STACK_LINE(449)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(449)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(449)
				if ((tmp2)){
					HX_STACK_LINE(449)
					break;
				}
				HX_STACK_LINE(450)
				::zpp_nape::phys::ZPP_Compound c = cx_ite->elt;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(451)
				::zpp_nape::phys::ZPP_Compound tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(451)
				::zpp_nape::geom::ZPP_Mat23 tmp4 = xform;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(451)
				Float tmp5 = xdet;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(451)
				bool tmp6 = xnull;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(451)
				this->draw_compound(tmp3,tmp4,tmp5,tmp6);
				HX_STACK_LINE(452)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(455)
		{
			HX_STACK_LINE(456)
			::zpp_nape::util::ZNPNode_ZPP_Body tmp = compound->bodies->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(456)
			::zpp_nape::util::ZNPNode_ZPP_Body cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(457)
			while((true)){
				HX_STACK_LINE(457)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(457)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(457)
				if ((tmp2)){
					HX_STACK_LINE(457)
					break;
				}
				HX_STACK_LINE(458)
				::zpp_nape::phys::ZPP_Body b = cx_ite->elt;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(459)
				bool tmp3 = b->outer->debugDraw;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(459)
				if ((tmp3)){
					HX_STACK_LINE(459)
					::zpp_nape::phys::ZPP_Body tmp4 = b;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(459)
					::zpp_nape::geom::ZPP_Mat23 tmp5 = xform;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(459)
					Float tmp6 = xdet;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(459)
					bool tmp7 = xnull;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(459)
					this->draw_body(tmp4,tmp5,tmp6,tmp7);
				}
				HX_STACK_LINE(460)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(463)
		{
			HX_STACK_LINE(464)
			::zpp_nape::util::ZNPNode_ZPP_Constraint tmp = compound->constraints->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(464)
			::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(465)
			while((true)){
				HX_STACK_LINE(465)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(465)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(465)
				if ((tmp2)){
					HX_STACK_LINE(465)
					break;
				}
				HX_STACK_LINE(466)
				::zpp_nape::constraint::ZPP_Constraint c = cx_ite->elt;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(467)
				bool tmp3 = c->active;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(467)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(467)
				if ((tmp3)){
					HX_STACK_LINE(467)
					tmp4 = c->outer->debugDraw;
				}
				else{
					HX_STACK_LINE(467)
					tmp4 = false;
				}
				HX_STACK_LINE(467)
				if ((tmp4)){
					HX_STACK_LINE(467)
					::nape::util::Debug tmp5 = this->outer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(467)
					c->draw(tmp5);
				}
				HX_STACK_LINE(468)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_ShapeDebug_obj,draw_compound,(void))

Void ZPP_ShapeDebug_obj::draw_space( ::zpp_nape::space::ZPP_Space space,::zpp_nape::geom::ZPP_Mat23 xform,Float xdet,bool xnull){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_ShapeDebug","draw_space",0xbf5b5457,"zpp_nape.util.ZPP_ShapeDebug.draw_space","zpp_nape/util/Debug.hx",474,0xeecbde16)
		HX_STACK_THIS(this)
		HX_STACK_ARG(space,"space")
		HX_STACK_ARG(xform,"xform")
		HX_STACK_ARG(xdet,"xdet")
		HX_STACK_ARG(xnull,"xnull")
		HX_STACK_LINE(475)
		::nape::util::Debug tmp = this->outer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(475)
		bool tmp1 = tmp->cullingEnabled;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(475)
		if ((tmp1)){
			HX_STACK_LINE(476)
			::nape::util::Debug tmp2 = this->outer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(476)
			bool tmp3 = tmp2->drawBodies;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(476)
			if ((tmp3)){
				HX_STACK_LINE(477)
				::nape::util::Debug tmp4 = this->outer;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(477)
				bool tmp5 = tmp4->drawBodyDetail;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(477)
				if ((tmp5)){
					HX_STACK_LINE(478)
					::zpp_nape::geom::ZPP_AABB tmp6 = this->iport;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(478)
					::nape::phys::BodyList tmp7 = this->bodyList;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(478)
					::nape::phys::BodyList tmp8 = space->bphase->bodiesInAABB(tmp6,false,false,null(),tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(478)
					::nape::phys::BodyList tmp9 = this->bodyList = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(478)
					::nape::phys::BodyList bods = tmp9;		HX_STACK_VAR(bods,"bods");
					HX_STACK_LINE(479)
					while((true)){
						HX_STACK_LINE(479)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(479)
						{
							HX_STACK_LINE(479)
							::zpp_nape::util::ZNPList_ZPP_Body tmp11 = bods->zpp_inner->inner;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(479)
							::zpp_nape::util::ZNPNode_ZPP_Body tmp12 = tmp11->head;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(479)
							tmp10 = (tmp12 == null());
						}
						HX_STACK_LINE(479)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(479)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(479)
						if ((tmp12)){
							HX_STACK_LINE(479)
							break;
						}
						HX_STACK_LINE(480)
						::nape::phys::Body tmp13 = bods->shift();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(480)
						::nape::phys::Body b = tmp13;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(481)
						bool tmp14 = b->debugDraw;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(481)
						if ((tmp14)){
							HX_STACK_LINE(481)
							::zpp_nape::phys::ZPP_Body tmp15 = b->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(481)
							::zpp_nape::geom::ZPP_Mat23 tmp16 = xform;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(481)
							Float tmp17 = xdet;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(481)
							bool tmp18 = xnull;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(481)
							this->draw_body(tmp15,tmp16,tmp17,tmp18);
						}
					}
				}
				else{
					HX_STACK_LINE(485)
					::zpp_nape::geom::ZPP_AABB tmp6 = this->iport;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(485)
					::nape::shape::ShapeList tmp7 = this->shapeList;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(485)
					::nape::shape::ShapeList tmp8 = space->bphase->shapesInAABB(tmp6,false,false,null(),tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(485)
					::nape::shape::ShapeList tmp9 = this->shapeList = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(485)
					::nape::shape::ShapeList shapes = tmp9;		HX_STACK_VAR(shapes,"shapes");
					HX_STACK_LINE(486)
					while((true)){
						HX_STACK_LINE(486)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(486)
						{
							HX_STACK_LINE(486)
							::zpp_nape::util::ZNPList_ZPP_Shape tmp11 = shapes->zpp_inner->inner;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(486)
							::zpp_nape::util::ZNPNode_ZPP_Shape tmp12 = tmp11->head;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(486)
							tmp10 = (tmp12 == null());
						}
						HX_STACK_LINE(486)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(486)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(486)
						if ((tmp12)){
							HX_STACK_LINE(486)
							break;
						}
						HX_STACK_LINE(487)
						::nape::shape::Shape tmp13 = shapes->shift();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(487)
						::nape::shape::Shape s = tmp13;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(488)
						::zpp_nape::phys::ZPP_Body tmp14 = s->zpp_inner->body;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(488)
						bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(488)
						::nape::phys::Body tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(488)
						if ((tmp15)){
							HX_STACK_LINE(488)
							::zpp_nape::phys::ZPP_Body tmp17 = s->zpp_inner->body;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(488)
							tmp16 = tmp17->outer;
						}
						else{
							HX_STACK_LINE(488)
							tmp16 = null();
						}
						HX_STACK_LINE(488)
						bool tmp17 = tmp16->debugDraw;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(488)
						if ((tmp17)){
							HX_STACK_LINE(488)
							::zpp_nape::shape::ZPP_Shape tmp18 = s->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(488)
							::zpp_nape::geom::ZPP_Mat23 tmp19 = xform;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(488)
							Float tmp20 = xdet;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(488)
							bool tmp21 = xnull;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(488)
							this->draw_shape(tmp18,tmp19,tmp20,tmp21);
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(494)
			::nape::util::Debug tmp2 = this->outer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(494)
			bool tmp3 = tmp2->drawBodies;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(494)
			if ((tmp3)){
				HX_STACK_LINE(495)
				::zpp_nape::util::ZNPList_ZPP_Compound tmp4 = this->compoundstack;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(495)
				bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(495)
				if ((tmp5)){
					HX_STACK_LINE(495)
					::zpp_nape::util::ZNPList_ZPP_Compound tmp6 = ::zpp_nape::util::ZNPList_ZPP_Compound_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(495)
					this->compoundstack = tmp6;
				}
				HX_STACK_LINE(496)
				{
					HX_STACK_LINE(497)
					::zpp_nape::util::ZNPNode_ZPP_Body tmp6 = space->bodies->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(497)
					::zpp_nape::util::ZNPNode_ZPP_Body cx_ite = tmp6;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(498)
					while((true)){
						HX_STACK_LINE(498)
						bool tmp7 = (cx_ite != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(498)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(498)
						if ((tmp8)){
							HX_STACK_LINE(498)
							break;
						}
						HX_STACK_LINE(499)
						::zpp_nape::phys::ZPP_Body b = cx_ite->elt;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(500)
						bool tmp9 = b->outer->debugDraw;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(500)
						if ((tmp9)){
							HX_STACK_LINE(500)
							::zpp_nape::phys::ZPP_Body tmp10 = b;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(500)
							::zpp_nape::geom::ZPP_Mat23 tmp11 = xform;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(500)
							Float tmp12 = xdet;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(500)
							bool tmp13 = xnull;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(500)
							this->draw_body(tmp10,tmp11,tmp12,tmp13);
						}
						HX_STACK_LINE(501)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(504)
				{
					HX_STACK_LINE(505)
					::zpp_nape::util::ZNPNode_ZPP_Compound tmp6 = space->compounds->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(505)
					::zpp_nape::util::ZNPNode_ZPP_Compound cx_ite = tmp6;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(506)
					while((true)){
						HX_STACK_LINE(506)
						bool tmp7 = (cx_ite != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(506)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(506)
						if ((tmp8)){
							HX_STACK_LINE(506)
							break;
						}
						HX_STACK_LINE(507)
						::zpp_nape::phys::ZPP_Compound c = cx_ite->elt;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(508)
						::zpp_nape::util::ZNPList_ZPP_Compound tmp9 = this->compoundstack;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(508)
						::zpp_nape::phys::ZPP_Compound tmp10 = c;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(508)
						tmp9->add(tmp10);
						HX_STACK_LINE(509)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(512)
				while((true)){
					HX_STACK_LINE(512)
					::zpp_nape::util::ZNPList_ZPP_Compound tmp6 = this->compoundstack;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(512)
					::zpp_nape::util::ZNPNode_ZPP_Compound tmp7 = tmp6->head;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(512)
					bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(512)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(512)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(512)
					if ((tmp10)){
						HX_STACK_LINE(512)
						break;
					}
					HX_STACK_LINE(513)
					::zpp_nape::util::ZNPList_ZPP_Compound tmp11 = this->compoundstack;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(513)
					::zpp_nape::phys::ZPP_Compound tmp12 = tmp11->pop_unsafe();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(513)
					::zpp_nape::phys::ZPP_Compound x = tmp12;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(514)
					{
						HX_STACK_LINE(515)
						::zpp_nape::util::ZNPNode_ZPP_Body tmp13 = x->bodies->head;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(515)
						::zpp_nape::util::ZNPNode_ZPP_Body cx_ite = tmp13;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(516)
						while((true)){
							HX_STACK_LINE(516)
							bool tmp14 = (cx_ite != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(516)
							bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(516)
							if ((tmp15)){
								HX_STACK_LINE(516)
								break;
							}
							HX_STACK_LINE(517)
							::zpp_nape::phys::ZPP_Body b = cx_ite->elt;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(518)
							bool tmp16 = b->outer->debugDraw;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(518)
							if ((tmp16)){
								HX_STACK_LINE(518)
								::zpp_nape::phys::ZPP_Body tmp17 = b;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(518)
								::zpp_nape::geom::ZPP_Mat23 tmp18 = xform;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(518)
								Float tmp19 = xdet;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(518)
								bool tmp20 = xnull;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(518)
								this->draw_body(tmp17,tmp18,tmp19,tmp20);
							}
							HX_STACK_LINE(519)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(522)
					{
						HX_STACK_LINE(523)
						::zpp_nape::util::ZNPNode_ZPP_Compound tmp13 = x->compounds->head;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(523)
						::zpp_nape::util::ZNPNode_ZPP_Compound cx_ite = tmp13;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(524)
						while((true)){
							HX_STACK_LINE(524)
							bool tmp14 = (cx_ite != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(524)
							bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(524)
							if ((tmp15)){
								HX_STACK_LINE(524)
								break;
							}
							HX_STACK_LINE(525)
							::zpp_nape::phys::ZPP_Compound c = cx_ite->elt;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(526)
							::zpp_nape::util::ZNPList_ZPP_Compound tmp16 = this->compoundstack;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(526)
							::zpp_nape::phys::ZPP_Compound tmp17 = c;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(526)
							tmp16->add(tmp17);
							HX_STACK_LINE(527)
							cx_ite = cx_ite->next;
						}
					}
				}
			}
		}
		HX_STACK_LINE(533)
		::nape::util::Debug tmp2 = this->outer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(533)
		bool tmp3 = tmp2->drawCollisionArbiters;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(533)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(533)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(533)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(533)
		if ((tmp5)){
			HX_STACK_LINE(533)
			::nape::util::Debug tmp7 = this->outer;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(533)
			::nape::util::Debug tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(533)
			::nape::util::Debug tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(533)
			tmp6 = tmp9->drawFluidArbiters;
		}
		else{
			HX_STACK_LINE(533)
			tmp6 = true;
		}
		HX_STACK_LINE(533)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(533)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(533)
		if ((tmp7)){
			HX_STACK_LINE(533)
			::nape::util::Debug tmp9 = this->outer;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(533)
			::nape::util::Debug tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(533)
			tmp8 = tmp10->drawSensorArbiters;
		}
		else{
			HX_STACK_LINE(533)
			tmp8 = true;
		}
		HX_STACK_LINE(533)
		if ((tmp8)){
			HX_STACK_LINE(533)
			::nape::dynamics::ArbiterList tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(533)
			{
				HX_STACK_LINE(533)
				::nape::space::Space _this = space->outer;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(533)
				::nape::dynamics::ArbiterList tmp10 = _this->zpp_inner->wrap_arbiters;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(533)
				bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(533)
				if ((tmp11)){
					HX_STACK_LINE(533)
					::zpp_nape::dynamics::ZPP_SpaceArbiterList tmp12 = ::zpp_nape::dynamics::ZPP_SpaceArbiterList_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(533)
					::zpp_nape::dynamics::ZPP_SpaceArbiterList ret = tmp12;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(533)
					ret->space = _this->zpp_inner;
					HX_STACK_LINE(533)
					_this->zpp_inner->wrap_arbiters = ret;
				}
				HX_STACK_LINE(533)
				tmp9 = _this->zpp_inner->wrap_arbiters;
			}
			HX_STACK_LINE(533)
			::nape::dynamics::ArbiterIterator tmp10 = tmp9->iterator();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(533)
			::nape::dynamics::ArbiterIterator _g = tmp10;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(533)
			while((true)){
				HX_STACK_LINE(533)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(533)
				{
					HX_STACK_LINE(533)
					::zpp_nape::util::ZPP_ArbiterList tmp12 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(533)
					tmp12->valmod();
					HX_STACK_LINE(533)
					int tmp13 = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(533)
					int length = tmp13;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(533)
					_g->zpp_critical = true;
					HX_STACK_LINE(533)
					bool tmp14 = (_g->zpp_i < length);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(533)
					if ((tmp14)){
						HX_STACK_LINE(533)
						tmp11 = true;
					}
					else{
						HX_STACK_LINE(533)
						{
							HX_STACK_LINE(533)
							::nape::dynamics::ArbiterIterator tmp15 = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(533)
							_g->zpp_next = tmp15;
							HX_STACK_LINE(533)
							::nape::dynamics::ArbiterIterator_obj::zpp_pool = _g;
							HX_STACK_LINE(533)
							_g->zpp_inner = null();
						}
						HX_STACK_LINE(533)
						tmp11 = false;
					}
				}
				HX_STACK_LINE(533)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(533)
				if ((tmp12)){
					HX_STACK_LINE(533)
					break;
				}
				HX_STACK_LINE(533)
				::nape::dynamics::Arbiter tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(533)
				{
					HX_STACK_LINE(533)
					_g->zpp_critical = false;
					HX_STACK_LINE(533)
					int tmp14 = (_g->zpp_i)++;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(533)
					tmp13 = _g->zpp_inner->at(tmp14);
				}
				HX_STACK_LINE(533)
				::nape::dynamics::Arbiter arb = tmp13;		HX_STACK_VAR(arb,"arb");
				HX_STACK_LINE(533)
				::zpp_nape::dynamics::ZPP_Arbiter tmp14 = arb->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(533)
				::zpp_nape::geom::ZPP_Mat23 tmp15 = xform;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(533)
				Float tmp16 = xdet;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(533)
				bool tmp17 = xnull;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(533)
				this->draw_arbiter(tmp14,tmp15,tmp16,tmp17);
			}
		}
		HX_STACK_LINE(534)
		::nape::util::Debug tmp9 = this->outer;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(534)
		bool tmp10 = tmp9->drawConstraints;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(534)
		if ((tmp10)){
			HX_STACK_LINE(535)
			::zpp_nape::util::ZNPList_ZPP_Compound tmp11 = this->compoundstack;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(535)
			bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(535)
			if ((tmp12)){
				HX_STACK_LINE(535)
				::zpp_nape::util::ZNPList_ZPP_Compound tmp13 = ::zpp_nape::util::ZNPList_ZPP_Compound_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(535)
				this->compoundstack = tmp13;
			}
			HX_STACK_LINE(536)
			{
				HX_STACK_LINE(537)
				::zpp_nape::util::ZNPNode_ZPP_Constraint tmp13 = space->constraints->head;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(537)
				::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = tmp13;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(538)
				while((true)){
					HX_STACK_LINE(538)
					bool tmp14 = (cx_ite != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(538)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(538)
					if ((tmp15)){
						HX_STACK_LINE(538)
						break;
					}
					HX_STACK_LINE(539)
					::zpp_nape::constraint::ZPP_Constraint c = cx_ite->elt;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(540)
					bool tmp16 = c->active;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(540)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(540)
					if ((tmp16)){
						HX_STACK_LINE(540)
						tmp17 = c->outer->debugDraw;
					}
					else{
						HX_STACK_LINE(540)
						tmp17 = false;
					}
					HX_STACK_LINE(540)
					if ((tmp17)){
						HX_STACK_LINE(540)
						::nape::util::Debug tmp18 = this->outer;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(540)
						c->draw(tmp18);
					}
					HX_STACK_LINE(541)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(544)
			{
				HX_STACK_LINE(545)
				::zpp_nape::util::ZNPNode_ZPP_Compound tmp13 = space->compounds->head;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(545)
				::zpp_nape::util::ZNPNode_ZPP_Compound cx_ite = tmp13;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(546)
				while((true)){
					HX_STACK_LINE(546)
					bool tmp14 = (cx_ite != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(546)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(546)
					if ((tmp15)){
						HX_STACK_LINE(546)
						break;
					}
					HX_STACK_LINE(547)
					::zpp_nape::phys::ZPP_Compound c = cx_ite->elt;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(548)
					::zpp_nape::util::ZNPList_ZPP_Compound tmp16 = this->compoundstack;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(548)
					::zpp_nape::phys::ZPP_Compound tmp17 = c;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(548)
					tmp16->add(tmp17);
					HX_STACK_LINE(549)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(552)
			while((true)){
				HX_STACK_LINE(552)
				::zpp_nape::util::ZNPList_ZPP_Compound tmp13 = this->compoundstack;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(552)
				::zpp_nape::util::ZNPNode_ZPP_Compound tmp14 = tmp13->head;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(552)
				bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(552)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(552)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(552)
				if ((tmp17)){
					HX_STACK_LINE(552)
					break;
				}
				HX_STACK_LINE(553)
				::zpp_nape::util::ZNPList_ZPP_Compound tmp18 = this->compoundstack;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(553)
				::zpp_nape::phys::ZPP_Compound tmp19 = tmp18->pop_unsafe();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(553)
				::zpp_nape::phys::ZPP_Compound x = tmp19;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(554)
				{
					HX_STACK_LINE(555)
					::zpp_nape::util::ZNPNode_ZPP_Constraint tmp20 = x->constraints->head;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(555)
					::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = tmp20;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(556)
					while((true)){
						HX_STACK_LINE(556)
						bool tmp21 = (cx_ite != null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(556)
						bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(556)
						if ((tmp22)){
							HX_STACK_LINE(556)
							break;
						}
						HX_STACK_LINE(557)
						::zpp_nape::constraint::ZPP_Constraint c = cx_ite->elt;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(558)
						bool tmp23 = c->active;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(558)
						bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(558)
						if ((tmp23)){
							HX_STACK_LINE(558)
							tmp24 = c->outer->debugDraw;
						}
						else{
							HX_STACK_LINE(558)
							tmp24 = false;
						}
						HX_STACK_LINE(558)
						if ((tmp24)){
							HX_STACK_LINE(558)
							::nape::util::Debug tmp25 = this->outer;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(558)
							c->draw(tmp25);
						}
						HX_STACK_LINE(559)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(562)
				{
					HX_STACK_LINE(563)
					::zpp_nape::util::ZNPNode_ZPP_Compound tmp20 = x->compounds->head;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(563)
					::zpp_nape::util::ZNPNode_ZPP_Compound cx_ite = tmp20;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(564)
					while((true)){
						HX_STACK_LINE(564)
						bool tmp21 = (cx_ite != null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(564)
						bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(564)
						if ((tmp22)){
							HX_STACK_LINE(564)
							break;
						}
						HX_STACK_LINE(565)
						::zpp_nape::phys::ZPP_Compound c = cx_ite->elt;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(566)
						::zpp_nape::util::ZNPList_ZPP_Compound tmp23 = this->compoundstack;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(566)
						::zpp_nape::phys::ZPP_Compound tmp24 = c;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(566)
						tmp23->add(tmp24);
						HX_STACK_LINE(567)
						cx_ite = cx_ite->next;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_ShapeDebug_obj,draw_space,(void))

Void ZPP_ShapeDebug_obj::draw_body( ::zpp_nape::phys::ZPP_Body body,::zpp_nape::geom::ZPP_Mat23 xform,Float xdet,bool xnull){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_ShapeDebug","draw_body",0xd5799031,"zpp_nape.util.ZPP_ShapeDebug.draw_body","zpp_nape/util/Debug.hx",573,0xeecbde16)
		HX_STACK_THIS(this)
		HX_STACK_ARG(body,"body")
		HX_STACK_ARG(xform,"xform")
		HX_STACK_ARG(xdet,"xdet")
		HX_STACK_ARG(xnull,"xnull")
		HX_STACK_LINE(574)
		{
			HX_STACK_LINE(575)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp = body->shapes->head;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(575)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(576)
			while((true)){
				HX_STACK_LINE(576)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(576)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(576)
				if ((tmp2)){
					HX_STACK_LINE(576)
					break;
				}
				HX_STACK_LINE(577)
				::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(578)
				::zpp_nape::shape::ZPP_Shape tmp3 = s;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(578)
				::zpp_nape::geom::ZPP_Mat23 tmp4 = xform;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(578)
				Float tmp5 = xdet;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(578)
				bool tmp6 = xnull;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(578)
				this->draw_shape(tmp3,tmp4,tmp5,tmp6);
				HX_STACK_LINE(579)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(582)
		::nape::util::Debug tmp = this->outer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(582)
		bool tmp1 = tmp->drawBodyDetail;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(582)
		if ((tmp1)){
			HX_STACK_LINE(583)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(583)
			{
				HX_STACK_LINE(584)
				int idc;		HX_STACK_VAR(idc,"idc");
				HX_STACK_LINE(585)
				::nape::util::Debug tmp3 = this->outer;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(585)
				Dynamic tmp4 = tmp3->colour;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(585)
				bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(585)
				if ((tmp5)){
					HX_STACK_LINE(585)
					int tmp6 = hx::Mod(body->id,(int)500);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(585)
					int tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(585)
					Float tmp8 = (Float(tmp7) / Float((int)1500));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(585)
					Float tmp9 = ::Math_obj::exp(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(585)
					Float tmp10 = ((int)16777215 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(585)
					int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(585)
					idc = tmp11;
				}
				else{
					HX_STACK_LINE(586)
					::nape::util::Debug tmp6 = this->outer;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(586)
					int tmp7 = body->id;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(586)
					int tmp8 = tmp6->colour(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(586)
					idc = tmp8;
				}
				HX_STACK_LINE(587)
				int tmp6 = (int(idc) & int((int)16711680));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(587)
				int tmp7 = (int(tmp6) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(587)
				Float tmp8 = (tmp7 * ((Float)0.7));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(587)
				Float _r = tmp8;		HX_STACK_VAR(_r,"_r");
				HX_STACK_LINE(588)
				int tmp9 = (int(idc) & int((int)65280));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(588)
				int tmp10 = (int(tmp9) >> int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(588)
				Float tmp11 = (tmp10 * ((Float)0.7));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(588)
				Float _g = tmp11;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(589)
				int tmp12 = (int(idc) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(589)
				Float tmp13 = (tmp12 * ((Float)0.7));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(589)
				Float _b = tmp13;		HX_STACK_VAR(_b,"_b");
				HX_STACK_LINE(590)
				bool tmp14 = (body->space != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(590)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(590)
				if ((tmp14)){
					HX_STACK_LINE(590)
					::zpp_nape::phys::ZPP_Body tmp16 = body->outer->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(590)
					::zpp_nape::phys::ZPP_Body tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(590)
					tmp15 = tmp17->component->sleeping;
				}
				else{
					HX_STACK_LINE(590)
					tmp15 = false;
				}
				HX_STACK_LINE(590)
				if ((tmp15)){
					HX_STACK_LINE(591)
					Float tmp16 = (((Float)0.4) * _r);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(591)
					Float tmp17 = this->bg_r;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(591)
					Float tmp18 = (((Float)0.6) * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(591)
					Float tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(591)
					_r = tmp19;
					HX_STACK_LINE(592)
					Float tmp20 = (((Float)0.4) * _g);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(592)
					Float tmp21 = this->bg_g;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(592)
					Float tmp22 = (((Float)0.6) * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(592)
					Float tmp23 = (tmp20 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(592)
					_g = tmp23;
					HX_STACK_LINE(593)
					Float tmp24 = (((Float)0.4) * _b);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(593)
					Float tmp25 = this->bg_b;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(593)
					Float tmp26 = (((Float)0.6) * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(593)
					Float tmp27 = (tmp24 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(593)
					_b = tmp27;
				}
				HX_STACK_LINE(595)
				Float tmp16 = _r;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(595)
				int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(595)
				int tmp18 = (int(tmp17) << int((int)16));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(595)
				int tmp19 = (int((int)-16777216) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(595)
				Float tmp20 = _g;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(595)
				int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(595)
				int tmp22 = (int(tmp21) << int((int)8));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(595)
				int tmp23 = (int(tmp19) | int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(595)
				Float tmp24 = _b;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(595)
				int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(595)
				tmp2 = (int(tmp23) | int(tmp25));
			}
			HX_STACK_LINE(583)
			int col = tmp2;		HX_STACK_VAR(col,"col");
			HX_STACK_LINE(597)
			::openfl::_legacy::display::Graphics tmp3 = this->graphics;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(597)
			::nape::util::ShapeDebug tmp4 = this->outer_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(597)
			Float tmp5 = tmp4->thickness;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(597)
			int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(597)
			{
				HX_STACK_LINE(598)
				int col1 = col;		HX_STACK_VAR(col1,"col1");
				HX_STACK_LINE(599)
				int ncol = (int)16711680;		HX_STACK_VAR(ncol,"ncol");
				HX_STACK_LINE(600)
				Float f = ((Float)0.8);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(601)
				int tmp7 = (int(col1) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(601)
				int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(601)
				Float tmp9 = f;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(601)
				Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(601)
				int tmp11 = (int(ncol) >> int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(601)
				int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(601)
				Float tmp13 = ((int)1 - f);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(601)
				Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(601)
				Float tmp15 = (tmp10 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(601)
				int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(601)
				int _r = tmp16;		HX_STACK_VAR(_r,"_r");
				HX_STACK_LINE(602)
				int tmp17 = (int(col1) >> int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(602)
				int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(602)
				Float tmp19 = f;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(602)
				Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(602)
				int tmp21 = (int(ncol) >> int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(602)
				int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(602)
				Float tmp23 = ((int)1 - f);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(602)
				Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(602)
				Float tmp25 = (tmp20 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(602)
				int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(602)
				int _g = tmp26;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(603)
				int tmp27 = (int(col1) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(603)
				Float tmp28 = f;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(603)
				Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(603)
				int tmp30 = (int(ncol) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(603)
				Float tmp31 = ((int)1 - f);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(603)
				Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(603)
				Float tmp33 = (tmp29 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(603)
				int tmp34 = ::Std_obj::_int(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(603)
				int _b = tmp34;		HX_STACK_VAR(_b,"_b");
				HX_STACK_LINE(604)
				int tmp35 = (int(_r) << int((int)16));		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(604)
				int tmp36 = (int((int)-16777216) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(604)
				int tmp37 = (int(_g) << int((int)8));		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(604)
				int tmp38 = (int(tmp36) | int(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(604)
				int tmp39 = _b;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(604)
				tmp6 = (int(tmp38) | int(tmp39));
			}
			HX_STACK_LINE(597)
			tmp3->lineStyle(tmp5,tmp6,(int)1,null(),null(),null(),null(),null());
			HX_STACK_LINE(607)
			Float px = ((Float)0.0);		HX_STACK_VAR(px,"px");
			HX_STACK_LINE(608)
			Float py = ((Float)0.0);		HX_STACK_VAR(py,"py");
			HX_STACK_LINE(609)
			Float qx = ((Float)0.0);		HX_STACK_VAR(qx,"qx");
			HX_STACK_LINE(610)
			Float qy = ((Float)0.0);		HX_STACK_VAR(qy,"qy");
			HX_STACK_LINE(611)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp7 = body->shapes->head;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(611)
			bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(611)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(611)
			if ((tmp9)){
				HX_STACK_LINE(612)
				body->validate_worldCOM();
				HX_STACK_LINE(613)
				bool tmp10 = xnull;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(613)
				if ((tmp10)){
					HX_STACK_LINE(614)
					px = body->worldCOMx;
					HX_STACK_LINE(615)
					py = body->worldCOMy;
					HX_STACK_LINE(624)
					{
					}
				}
				else{
					HX_STACK_LINE(634)
					Float tmp11 = (xform->a * body->worldCOMx);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(634)
					Float tmp12 = (xform->b * body->worldCOMy);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(634)
					Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(634)
					Float tmp14 = xform->tx;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(634)
					Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(634)
					px = tmp15;
					HX_STACK_LINE(635)
					Float tmp16 = (xform->c * body->worldCOMx);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(635)
					Float tmp17 = (xform->d * body->worldCOMy);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(635)
					Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(635)
					Float tmp19 = xform->ty;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(635)
					Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(635)
					py = tmp20;
				}
				HX_STACK_LINE(637)
				::openfl::_legacy::display::Graphics tmp11 = this->graphics;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(637)
				Float tmp12 = px;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(637)
				Float tmp13 = py;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(637)
				tmp11->drawCircle(tmp12,tmp13,(int)1);
				HX_STACK_LINE(638)
				{
					HX_STACK_LINE(638)
					bool tmp14 = body->zip_aabb;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(638)
					if ((tmp14)){
						HX_STACK_LINE(638)
						body->zip_aabb = false;
						HX_STACK_LINE(638)
						{
							HX_STACK_LINE(638)
							Float tmp15 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(638)
							body->aabb->minx = tmp15;
							HX_STACK_LINE(638)
							Float tmp16 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(638)
							body->aabb->miny = tmp16;
							HX_STACK_LINE(638)
							{
							}
						}
						HX_STACK_LINE(638)
						{
							HX_STACK_LINE(638)
							Float tmp15 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(638)
							body->aabb->maxx = tmp15;
							HX_STACK_LINE(638)
							Float tmp16 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(638)
							body->aabb->maxy = tmp16;
							HX_STACK_LINE(638)
							{
							}
						}
						HX_STACK_LINE(638)
						{
							HX_STACK_LINE(638)
							::zpp_nape::util::ZNPNode_ZPP_Shape tmp15 = body->shapes->head;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(638)
							::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp15;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(638)
							while((true)){
								HX_STACK_LINE(638)
								bool tmp16 = (cx_ite != null());		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(638)
								bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(638)
								if ((tmp17)){
									HX_STACK_LINE(638)
									break;
								}
								HX_STACK_LINE(638)
								::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
								HX_STACK_LINE(638)
								{
									HX_STACK_LINE(638)
									{
										HX_STACK_LINE(638)
										bool tmp18 = s->zip_aabb;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(638)
										if ((tmp18)){
											HX_STACK_LINE(638)
											bool tmp19 = (s->body != null());		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(638)
											if ((tmp19)){
												HX_STACK_LINE(638)
												s->zip_aabb = false;
												HX_STACK_LINE(638)
												int tmp20 = s->type;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(638)
												int tmp21 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(638)
												bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(638)
												if ((tmp22)){
													HX_STACK_LINE(638)
													::zpp_nape::shape::ZPP_Circle _this = s->circle;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(638)
													{
														HX_STACK_LINE(638)
														bool tmp23 = _this->zip_worldCOM;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(638)
														if ((tmp23)){
															HX_STACK_LINE(638)
															bool tmp24 = (_this->body != null());		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(638)
															if ((tmp24)){
																HX_STACK_LINE(638)
																_this->zip_worldCOM = false;
																HX_STACK_LINE(638)
																{
																	HX_STACK_LINE(638)
																	bool tmp25 = _this->zip_localCOM;		HX_STACK_VAR(tmp25,"tmp25");
																	HX_STACK_LINE(638)
																	if ((tmp25)){
																		HX_STACK_LINE(638)
																		_this->zip_localCOM = false;
																		HX_STACK_LINE(638)
																		int tmp26 = _this->type;		HX_STACK_VAR(tmp26,"tmp26");
																		HX_STACK_LINE(638)
																		int tmp27 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp27,"tmp27");
																		HX_STACK_LINE(638)
																		bool tmp28 = (tmp26 == tmp27);		HX_STACK_VAR(tmp28,"tmp28");
																		HX_STACK_LINE(638)
																		if ((tmp28)){
																			HX_STACK_LINE(638)
																			::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
																			HX_STACK_LINE(638)
																			::zpp_nape::geom::ZPP_Vec2 tmp29 = _this1->lverts->next;		HX_STACK_VAR(tmp29,"tmp29");
																			HX_STACK_LINE(638)
																			::zpp_nape::geom::ZPP_Vec2 tmp30 = tmp29->next;		HX_STACK_VAR(tmp30,"tmp30");
																			HX_STACK_LINE(638)
																			bool tmp31 = (tmp30 == null());		HX_STACK_VAR(tmp31,"tmp31");
																			HX_STACK_LINE(638)
																			if ((tmp31)){
																				HX_STACK_LINE(638)
																				::zpp_nape::geom::ZPP_Vec2 tmp32 = _this1->lverts->next;		HX_STACK_VAR(tmp32,"tmp32");
																				HX_STACK_LINE(638)
																				_this1->localCOMx = tmp32->x;
																				HX_STACK_LINE(638)
																				::zpp_nape::geom::ZPP_Vec2 tmp33 = _this1->lverts->next;		HX_STACK_VAR(tmp33,"tmp33");
																				HX_STACK_LINE(638)
																				_this1->localCOMy = tmp33->y;
																				HX_STACK_LINE(638)
																				Dynamic();
																			}
																			else{
																				HX_STACK_LINE(638)
																				::zpp_nape::geom::ZPP_Vec2 tmp32 = _this1->lverts->next;		HX_STACK_VAR(tmp32,"tmp32");
																				HX_STACK_LINE(638)
																				::zpp_nape::geom::ZPP_Vec2 tmp33 = tmp32->next->next;		HX_STACK_VAR(tmp33,"tmp33");
																				HX_STACK_LINE(638)
																				bool tmp34 = (tmp33 == null());		HX_STACK_VAR(tmp34,"tmp34");
																				HX_STACK_LINE(638)
																				if ((tmp34)){
																					HX_STACK_LINE(638)
																					{
																						HX_STACK_LINE(638)
																						::zpp_nape::geom::ZPP_Vec2 tmp35 = _this1->lverts->next;		HX_STACK_VAR(tmp35,"tmp35");
																						HX_STACK_LINE(638)
																						_this1->localCOMx = tmp35->x;
																						HX_STACK_LINE(638)
																						::zpp_nape::geom::ZPP_Vec2 tmp36 = _this1->lverts->next;		HX_STACK_VAR(tmp36,"tmp36");
																						HX_STACK_LINE(638)
																						_this1->localCOMy = tmp36->y;
																						HX_STACK_LINE(638)
																						{
																						}
																					}
																					HX_STACK_LINE(638)
																					{
																						HX_STACK_LINE(638)
																						Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
																						HX_STACK_LINE(638)
																						::zpp_nape::geom::ZPP_Vec2 tmp35 = _this1->lverts->next;		HX_STACK_VAR(tmp35,"tmp35");
																						HX_STACK_LINE(638)
																						Float tmp36 = tmp35->next->x;		HX_STACK_VAR(tmp36,"tmp36");
																						HX_STACK_LINE(638)
																						Float tmp37 = t;		HX_STACK_VAR(tmp37,"tmp37");
																						HX_STACK_LINE(638)
																						Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																						HX_STACK_LINE(638)
																						hx::AddEq(_this1->localCOMx,tmp38);
																						HX_STACK_LINE(638)
																						::zpp_nape::geom::ZPP_Vec2 tmp39 = _this1->lverts->next;		HX_STACK_VAR(tmp39,"tmp39");
																						HX_STACK_LINE(638)
																						Float tmp40 = tmp39->next->y;		HX_STACK_VAR(tmp40,"tmp40");
																						HX_STACK_LINE(638)
																						Float tmp41 = t;		HX_STACK_VAR(tmp41,"tmp41");
																						HX_STACK_LINE(638)
																						Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																						HX_STACK_LINE(638)
																						hx::AddEq(_this1->localCOMy,tmp42);
																					}
																					HX_STACK_LINE(638)
																					{
																						HX_STACK_LINE(638)
																						Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
																						HX_STACK_LINE(638)
																						hx::MultEq(_this1->localCOMx,t);
																						HX_STACK_LINE(638)
																						hx::MultEq(_this1->localCOMy,t);
																					}
																				}
																				else{
																					HX_STACK_LINE(638)
																					{
																						HX_STACK_LINE(638)
																						_this1->localCOMx = (int)0;
																						HX_STACK_LINE(638)
																						_this1->localCOMy = (int)0;
																						HX_STACK_LINE(638)
																						{
																						}
																					}
																					HX_STACK_LINE(638)
																					Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
																					HX_STACK_LINE(638)
																					{
																						HX_STACK_LINE(638)
																						::zpp_nape::geom::ZPP_Vec2 tmp35 = _this1->lverts->next;		HX_STACK_VAR(tmp35,"tmp35");
																						HX_STACK_LINE(638)
																						::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp35;		HX_STACK_VAR(cx_ite1,"cx_ite1");
																						HX_STACK_LINE(638)
																						::zpp_nape::geom::ZPP_Vec2 u = cx_ite1;		HX_STACK_VAR(u,"u");
																						HX_STACK_LINE(638)
																						cx_ite1 = cx_ite1->next;
																						HX_STACK_LINE(638)
																						::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
																						HX_STACK_LINE(638)
																						cx_ite1 = cx_ite1->next;
																						HX_STACK_LINE(638)
																						while((true)){
																							HX_STACK_LINE(638)
																							bool tmp36 = (cx_ite1 != null());		HX_STACK_VAR(tmp36,"tmp36");
																							HX_STACK_LINE(638)
																							bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																							HX_STACK_LINE(638)
																							if ((tmp37)){
																								HX_STACK_LINE(638)
																								break;
																							}
																							HX_STACK_LINE(638)
																							::zpp_nape::geom::ZPP_Vec2 w = cx_ite1;		HX_STACK_VAR(w,"w");
																							HX_STACK_LINE(638)
																							{
																								HX_STACK_LINE(638)
																								Float tmp38 = v->x;		HX_STACK_VAR(tmp38,"tmp38");
																								HX_STACK_LINE(638)
																								Float tmp39 = (w->y - u->y);		HX_STACK_VAR(tmp39,"tmp39");
																								HX_STACK_LINE(638)
																								Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																								HX_STACK_LINE(638)
																								hx::AddEq(area,tmp40);
																								HX_STACK_LINE(638)
																								Float tmp41 = (w->y * v->x);		HX_STACK_VAR(tmp41,"tmp41");
																								HX_STACK_LINE(638)
																								Float tmp42 = (w->x * v->y);		HX_STACK_VAR(tmp42,"tmp42");
																								HX_STACK_LINE(638)
																								Float tmp43 = (tmp41 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																								HX_STACK_LINE(638)
																								Float cf = tmp43;		HX_STACK_VAR(cf,"cf");
																								HX_STACK_LINE(638)
																								Float tmp44 = (v->x + w->x);		HX_STACK_VAR(tmp44,"tmp44");
																								HX_STACK_LINE(638)
																								Float tmp45 = cf;		HX_STACK_VAR(tmp45,"tmp45");
																								HX_STACK_LINE(638)
																								Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
																								HX_STACK_LINE(638)
																								hx::AddEq(_this1->localCOMx,tmp46);
																								HX_STACK_LINE(638)
																								Float tmp47 = (v->y + w->y);		HX_STACK_VAR(tmp47,"tmp47");
																								HX_STACK_LINE(638)
																								Float tmp48 = cf;		HX_STACK_VAR(tmp48,"tmp48");
																								HX_STACK_LINE(638)
																								Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
																								HX_STACK_LINE(638)
																								hx::AddEq(_this1->localCOMy,tmp49);
																							}
																							HX_STACK_LINE(638)
																							u = v;
																							HX_STACK_LINE(638)
																							v = w;
																							HX_STACK_LINE(638)
																							cx_ite1 = cx_ite1->next;
																						}
																						HX_STACK_LINE(638)
																						::zpp_nape::geom::ZPP_Vec2 tmp36 = _this1->lverts->next;		HX_STACK_VAR(tmp36,"tmp36");
																						HX_STACK_LINE(638)
																						cx_ite1 = tmp36;
																						HX_STACK_LINE(638)
																						::zpp_nape::geom::ZPP_Vec2 w = cx_ite1;		HX_STACK_VAR(w,"w");
																						HX_STACK_LINE(638)
																						{
																							HX_STACK_LINE(638)
																							Float tmp37 = v->x;		HX_STACK_VAR(tmp37,"tmp37");
																							HX_STACK_LINE(638)
																							Float tmp38 = (w->y - u->y);		HX_STACK_VAR(tmp38,"tmp38");
																							HX_STACK_LINE(638)
																							Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																							HX_STACK_LINE(638)
																							hx::AddEq(area,tmp39);
																							HX_STACK_LINE(638)
																							Float tmp40 = (w->y * v->x);		HX_STACK_VAR(tmp40,"tmp40");
																							HX_STACK_LINE(638)
																							Float tmp41 = (w->x * v->y);		HX_STACK_VAR(tmp41,"tmp41");
																							HX_STACK_LINE(638)
																							Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																							HX_STACK_LINE(638)
																							Float cf = tmp42;		HX_STACK_VAR(cf,"cf");
																							HX_STACK_LINE(638)
																							Float tmp43 = (v->x + w->x);		HX_STACK_VAR(tmp43,"tmp43");
																							HX_STACK_LINE(638)
																							Float tmp44 = cf;		HX_STACK_VAR(tmp44,"tmp44");
																							HX_STACK_LINE(638)
																							Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
																							HX_STACK_LINE(638)
																							hx::AddEq(_this1->localCOMx,tmp45);
																							HX_STACK_LINE(638)
																							Float tmp46 = (v->y + w->y);		HX_STACK_VAR(tmp46,"tmp46");
																							HX_STACK_LINE(638)
																							Float tmp47 = cf;		HX_STACK_VAR(tmp47,"tmp47");
																							HX_STACK_LINE(638)
																							Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
																							HX_STACK_LINE(638)
																							hx::AddEq(_this1->localCOMy,tmp48);
																						}
																						HX_STACK_LINE(638)
																						u = v;
																						HX_STACK_LINE(638)
																						v = w;
																						HX_STACK_LINE(638)
																						cx_ite1 = cx_ite1->next;
																						HX_STACK_LINE(638)
																						::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite1;		HX_STACK_VAR(w1,"w1");
																						HX_STACK_LINE(638)
																						{
																							HX_STACK_LINE(638)
																							Float tmp37 = v->x;		HX_STACK_VAR(tmp37,"tmp37");
																							HX_STACK_LINE(638)
																							Float tmp38 = (w1->y - u->y);		HX_STACK_VAR(tmp38,"tmp38");
																							HX_STACK_LINE(638)
																							Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																							HX_STACK_LINE(638)
																							hx::AddEq(area,tmp39);
																							HX_STACK_LINE(638)
																							Float tmp40 = (w1->y * v->x);		HX_STACK_VAR(tmp40,"tmp40");
																							HX_STACK_LINE(638)
																							Float tmp41 = (w1->x * v->y);		HX_STACK_VAR(tmp41,"tmp41");
																							HX_STACK_LINE(638)
																							Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																							HX_STACK_LINE(638)
																							Float cf = tmp42;		HX_STACK_VAR(cf,"cf");
																							HX_STACK_LINE(638)
																							Float tmp43 = (v->x + w1->x);		HX_STACK_VAR(tmp43,"tmp43");
																							HX_STACK_LINE(638)
																							Float tmp44 = cf;		HX_STACK_VAR(tmp44,"tmp44");
																							HX_STACK_LINE(638)
																							Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
																							HX_STACK_LINE(638)
																							hx::AddEq(_this1->localCOMx,tmp45);
																							HX_STACK_LINE(638)
																							Float tmp46 = (v->y + w1->y);		HX_STACK_VAR(tmp46,"tmp46");
																							HX_STACK_LINE(638)
																							Float tmp47 = cf;		HX_STACK_VAR(tmp47,"tmp47");
																							HX_STACK_LINE(638)
																							Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
																							HX_STACK_LINE(638)
																							hx::AddEq(_this1->localCOMy,tmp48);
																						}
																					}
																					HX_STACK_LINE(638)
																					Float tmp35 = ((int)3 * area);		HX_STACK_VAR(tmp35,"tmp35");
																					HX_STACK_LINE(638)
																					Float tmp36 = (Float((int)1) / Float(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
																					HX_STACK_LINE(638)
																					area = tmp36;
																					HX_STACK_LINE(638)
																					{
																						HX_STACK_LINE(638)
																						Float t = area;		HX_STACK_VAR(t,"t");
																						HX_STACK_LINE(638)
																						hx::MultEq(_this1->localCOMx,t);
																						HX_STACK_LINE(638)
																						hx::MultEq(_this1->localCOMy,t);
																					}
																				}
																			}
																		}
																		HX_STACK_LINE(638)
																		bool tmp29 = (_this->wrap_localCOM != null());		HX_STACK_VAR(tmp29,"tmp29");
																		HX_STACK_LINE(638)
																		if ((tmp29)){
																			HX_STACK_LINE(638)
																			::zpp_nape::geom::ZPP_Vec2 tmp30 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp30,"tmp30");
																			HX_STACK_LINE(638)
																			tmp30->x = _this->localCOMx;
																			HX_STACK_LINE(638)
																			::zpp_nape::geom::ZPP_Vec2 tmp31 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp31,"tmp31");
																			HX_STACK_LINE(638)
																			tmp31->y = _this->localCOMy;
																			HX_STACK_LINE(638)
																			{
																			}
																		}
																	}
																}
																HX_STACK_LINE(638)
																{
																	HX_STACK_LINE(638)
																	::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
																	HX_STACK_LINE(638)
																	bool tmp25 = _this1->zip_axis;		HX_STACK_VAR(tmp25,"tmp25");
																	HX_STACK_LINE(638)
																	if ((tmp25)){
																		HX_STACK_LINE(638)
																		_this1->zip_axis = false;
																		HX_STACK_LINE(638)
																		{
																			HX_STACK_LINE(638)
																			Float tmp26 = _this1->rot;		HX_STACK_VAR(tmp26,"tmp26");
																			HX_STACK_LINE(638)
																			Float tmp27 = ::Math_obj::sin(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
																			HX_STACK_LINE(638)
																			_this1->axisx = tmp27;
																			HX_STACK_LINE(638)
																			Float tmp28 = _this1->rot;		HX_STACK_VAR(tmp28,"tmp28");
																			HX_STACK_LINE(638)
																			Float tmp29 = ::Math_obj::cos(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
																			HX_STACK_LINE(638)
																			_this1->axisy = tmp29;
																			HX_STACK_LINE(638)
																			Dynamic();
																		}
																	}
																}
																HX_STACK_LINE(638)
																{
																	HX_STACK_LINE(638)
																	Float tmp25 = _this->body->posx;		HX_STACK_VAR(tmp25,"tmp25");
																	HX_STACK_LINE(638)
																	Float tmp26 = _this->body->axisy;		HX_STACK_VAR(tmp26,"tmp26");
																	HX_STACK_LINE(638)
																	Float tmp27 = _this->localCOMx;		HX_STACK_VAR(tmp27,"tmp27");
																	HX_STACK_LINE(638)
																	Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
																	HX_STACK_LINE(638)
																	Float tmp29 = _this->body->axisx;		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(638)
																	Float tmp30 = _this->localCOMy;		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(638)
																	Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(638)
																	Float tmp32 = (tmp28 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(638)
																	Float tmp33 = (tmp25 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
																	HX_STACK_LINE(638)
																	_this->worldCOMx = tmp33;
																	HX_STACK_LINE(638)
																	Float tmp34 = _this->body->posy;		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(638)
																	Float tmp35 = _this->localCOMx;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(638)
																	Float tmp36 = _this->body->axisx;		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(638)
																	Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(638)
																	Float tmp38 = _this->localCOMy;		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(638)
																	Float tmp39 = _this->body->axisy;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(638)
																	Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(638)
																	Float tmp41 = (tmp37 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(638)
																	Float tmp42 = (tmp34 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(638)
																	_this->worldCOMy = tmp42;
																}
															}
														}
													}
													HX_STACK_LINE(638)
													Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
													HX_STACK_LINE(638)
													Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
													HX_STACK_LINE(638)
													{
														HX_STACK_LINE(638)
														Float tmp23 = (_this->worldCOMx - rx);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(638)
														_this->aabb->minx = tmp23;
														HX_STACK_LINE(638)
														Float tmp24 = (_this->worldCOMy - ry);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(638)
														_this->aabb->miny = tmp24;
													}
													HX_STACK_LINE(638)
													{
														HX_STACK_LINE(638)
														Float tmp23 = (_this->worldCOMx + rx);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(638)
														_this->aabb->maxx = tmp23;
														HX_STACK_LINE(638)
														Float tmp24 = (_this->worldCOMy + ry);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(638)
														_this->aabb->maxy = tmp24;
													}
												}
												else{
													HX_STACK_LINE(638)
													::zpp_nape::shape::ZPP_Polygon _this = s->polygon;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(638)
													{
														HX_STACK_LINE(638)
														bool tmp23 = _this->zip_gverts;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(638)
														if ((tmp23)){
															HX_STACK_LINE(638)
															bool tmp24 = (_this->body != null());		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(638)
															if ((tmp24)){
																HX_STACK_LINE(638)
																_this->zip_gverts = false;
																HX_STACK_LINE(638)
																_this->validate_lverts();
																HX_STACK_LINE(638)
																{
																	HX_STACK_LINE(638)
																	::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
																	HX_STACK_LINE(638)
																	bool tmp25 = _this1->zip_axis;		HX_STACK_VAR(tmp25,"tmp25");
																	HX_STACK_LINE(638)
																	if ((tmp25)){
																		HX_STACK_LINE(638)
																		_this1->zip_axis = false;
																		HX_STACK_LINE(638)
																		{
																			HX_STACK_LINE(638)
																			Float tmp26 = _this1->rot;		HX_STACK_VAR(tmp26,"tmp26");
																			HX_STACK_LINE(638)
																			Float tmp27 = ::Math_obj::sin(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
																			HX_STACK_LINE(638)
																			_this1->axisx = tmp27;
																			HX_STACK_LINE(638)
																			Float tmp28 = _this1->rot;		HX_STACK_VAR(tmp28,"tmp28");
																			HX_STACK_LINE(638)
																			Float tmp29 = ::Math_obj::cos(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
																			HX_STACK_LINE(638)
																			_this1->axisy = tmp29;
																			HX_STACK_LINE(638)
																			Dynamic();
																		}
																	}
																}
																HX_STACK_LINE(638)
																::zpp_nape::geom::ZPP_Vec2 tmp25 = _this->lverts->next;		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(638)
																::zpp_nape::geom::ZPP_Vec2 li = tmp25;		HX_STACK_VAR(li,"li");
																HX_STACK_LINE(638)
																{
																	HX_STACK_LINE(638)
																	::zpp_nape::geom::ZPP_Vec2 tmp26 = _this->gverts->next;		HX_STACK_VAR(tmp26,"tmp26");
																	HX_STACK_LINE(638)
																	::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp26;		HX_STACK_VAR(cx_ite1,"cx_ite1");
																	HX_STACK_LINE(638)
																	while((true)){
																		HX_STACK_LINE(638)
																		bool tmp27 = (cx_ite1 != null());		HX_STACK_VAR(tmp27,"tmp27");
																		HX_STACK_LINE(638)
																		bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
																		HX_STACK_LINE(638)
																		if ((tmp28)){
																			HX_STACK_LINE(638)
																			break;
																		}
																		HX_STACK_LINE(638)
																		::zpp_nape::geom::ZPP_Vec2 g = cx_ite1;		HX_STACK_VAR(g,"g");
																		HX_STACK_LINE(638)
																		{
																			HX_STACK_LINE(638)
																			::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
																			HX_STACK_LINE(638)
																			li = li->next;
																			HX_STACK_LINE(638)
																			{
																				HX_STACK_LINE(638)
																				Float tmp29 = _this->body->posx;		HX_STACK_VAR(tmp29,"tmp29");
																				HX_STACK_LINE(638)
																				Float tmp30 = _this->body->axisy;		HX_STACK_VAR(tmp30,"tmp30");
																				HX_STACK_LINE(638)
																				Float tmp31 = l->x;		HX_STACK_VAR(tmp31,"tmp31");
																				HX_STACK_LINE(638)
																				Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
																				HX_STACK_LINE(638)
																				Float tmp33 = _this->body->axisx;		HX_STACK_VAR(tmp33,"tmp33");
																				HX_STACK_LINE(638)
																				Float tmp34 = l->y;		HX_STACK_VAR(tmp34,"tmp34");
																				HX_STACK_LINE(638)
																				Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
																				HX_STACK_LINE(638)
																				Float tmp36 = (tmp32 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																				HX_STACK_LINE(638)
																				Float tmp37 = (tmp29 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																				HX_STACK_LINE(638)
																				g->x = tmp37;
																				HX_STACK_LINE(638)
																				Float tmp38 = _this->body->posy;		HX_STACK_VAR(tmp38,"tmp38");
																				HX_STACK_LINE(638)
																				Float tmp39 = l->x;		HX_STACK_VAR(tmp39,"tmp39");
																				HX_STACK_LINE(638)
																				Float tmp40 = _this->body->axisx;		HX_STACK_VAR(tmp40,"tmp40");
																				HX_STACK_LINE(638)
																				Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																				HX_STACK_LINE(638)
																				Float tmp42 = l->y;		HX_STACK_VAR(tmp42,"tmp42");
																				HX_STACK_LINE(638)
																				Float tmp43 = _this->body->axisy;		HX_STACK_VAR(tmp43,"tmp43");
																				HX_STACK_LINE(638)
																				Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
																				HX_STACK_LINE(638)
																				Float tmp45 = (tmp41 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
																				HX_STACK_LINE(638)
																				Float tmp46 = (tmp38 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
																				HX_STACK_LINE(638)
																				g->y = tmp46;
																			}
																		}
																		HX_STACK_LINE(638)
																		cx_ite1 = cx_ite1->next;
																	}
																}
															}
														}
													}
													HX_STACK_LINE(638)
													::zpp_nape::geom::ZPP_Vec2 tmp23 = _this->gverts->next;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(638)
													::zpp_nape::geom::ZPP_Vec2 p0 = tmp23;		HX_STACK_VAR(p0,"p0");
													HX_STACK_LINE(638)
													{
														HX_STACK_LINE(638)
														_this->aabb->minx = p0->x;
														HX_STACK_LINE(638)
														_this->aabb->miny = p0->y;
														HX_STACK_LINE(638)
														{
														}
													}
													HX_STACK_LINE(638)
													{
														HX_STACK_LINE(638)
														_this->aabb->maxx = p0->x;
														HX_STACK_LINE(638)
														_this->aabb->maxy = p0->y;
														HX_STACK_LINE(638)
														{
														}
													}
													HX_STACK_LINE(638)
													{
														HX_STACK_LINE(638)
														::zpp_nape::geom::ZPP_Vec2 tmp24 = _this->gverts->next;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(638)
														::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp24->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
														HX_STACK_LINE(638)
														while((true)){
															HX_STACK_LINE(638)
															bool tmp25 = (cx_ite1 != null());		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(638)
															bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(638)
															if ((tmp26)){
																HX_STACK_LINE(638)
																break;
															}
															HX_STACK_LINE(638)
															::zpp_nape::geom::ZPP_Vec2 p = cx_ite1;		HX_STACK_VAR(p,"p");
															HX_STACK_LINE(638)
															{
																HX_STACK_LINE(638)
																Float tmp27 = p->x;		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(638)
																Float tmp28 = _this->aabb->minx;		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(638)
																bool tmp29 = (tmp27 < tmp28);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(638)
																if ((tmp29)){
																	HX_STACK_LINE(638)
																	_this->aabb->minx = p->x;
																}
																HX_STACK_LINE(638)
																Float tmp30 = p->x;		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(638)
																Float tmp31 = _this->aabb->maxx;		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(638)
																bool tmp32 = (tmp30 > tmp31);		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(638)
																if ((tmp32)){
																	HX_STACK_LINE(638)
																	_this->aabb->maxx = p->x;
																}
																HX_STACK_LINE(638)
																Float tmp33 = p->y;		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(638)
																Float tmp34 = _this->aabb->miny;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(638)
																bool tmp35 = (tmp33 < tmp34);		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(638)
																if ((tmp35)){
																	HX_STACK_LINE(638)
																	_this->aabb->miny = p->y;
																}
																HX_STACK_LINE(638)
																Float tmp36 = p->y;		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(638)
																Float tmp37 = _this->aabb->maxy;		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(638)
																bool tmp38 = (tmp36 > tmp37);		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(638)
																if ((tmp38)){
																	HX_STACK_LINE(638)
																	_this->aabb->maxy = p->y;
																}
															}
															HX_STACK_LINE(638)
															cx_ite1 = cx_ite1->next;
														}
													}
												}
											}
										}
									}
									HX_STACK_LINE(638)
									{
										HX_STACK_LINE(638)
										::zpp_nape::geom::ZPP_AABB _this = body->aabb;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(638)
										::zpp_nape::geom::ZPP_AABB x = s->aabb;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(638)
										bool tmp18 = (x->minx < _this->minx);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(638)
										if ((tmp18)){
											HX_STACK_LINE(638)
											_this->minx = x->minx;
										}
										HX_STACK_LINE(638)
										bool tmp19 = (x->maxx > _this->maxx);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(638)
										if ((tmp19)){
											HX_STACK_LINE(638)
											_this->maxx = x->maxx;
										}
										HX_STACK_LINE(638)
										bool tmp20 = (x->miny < _this->miny);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(638)
										if ((tmp20)){
											HX_STACK_LINE(638)
											_this->miny = x->miny;
										}
										HX_STACK_LINE(638)
										bool tmp21 = (x->maxy > _this->maxy);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(638)
										if ((tmp21)){
											HX_STACK_LINE(638)
											_this->maxy = x->maxy;
										}
									}
								}
								HX_STACK_LINE(638)
								cx_ite = cx_ite->next;
							}
						}
					}
				}
				HX_STACK_LINE(639)
				{
					HX_STACK_LINE(640)
					bool tmp14 = xnull;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(640)
					if ((tmp14)){
						HX_STACK_LINE(640)
						::openfl::_legacy::display::Graphics tmp15 = this->graphics;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(640)
						Float tmp16 = body->aabb->minx;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(640)
						Float tmp17 = body->aabb->miny;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(640)
						Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(640)
						{
							HX_STACK_LINE(640)
							::zpp_nape::geom::ZPP_AABB _this = body->aabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(640)
							tmp18 = (_this->maxx - _this->minx);
						}
						HX_STACK_LINE(640)
						Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(640)
						{
							HX_STACK_LINE(640)
							::zpp_nape::geom::ZPP_AABB _this = body->aabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(640)
							tmp19 = (_this->maxy - _this->miny);
						}
						HX_STACK_LINE(640)
						tmp15->drawRect(tmp16,tmp17,tmp18,tmp19);
					}
					else{
						HX_STACK_LINE(642)
						Float ox = ((Float)0.0);		HX_STACK_VAR(ox,"ox");
						HX_STACK_LINE(643)
						Float oy = ((Float)0.0);		HX_STACK_VAR(oy,"oy");
						HX_STACK_LINE(664)
						{
							HX_STACK_LINE(665)
							Float tmp15 = xform->a;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(665)
							Float tmp16 = body->aabb->minx;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(665)
							Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(665)
							Float tmp18 = xform->b;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(665)
							Float tmp19 = body->aabb->miny;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(665)
							Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(665)
							Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(665)
							Float tmp22 = xform->tx;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(665)
							Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(665)
							ox = tmp23;
							HX_STACK_LINE(666)
							Float tmp24 = xform->c;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(666)
							Float tmp25 = body->aabb->minx;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(666)
							Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(666)
							Float tmp27 = xform->d;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(666)
							Float tmp28 = body->aabb->miny;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(666)
							Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(666)
							Float tmp30 = (tmp26 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(666)
							Float tmp31 = xform->ty;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(666)
							Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(666)
							oy = tmp32;
						}
						HX_STACK_LINE(668)
						Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(668)
						{
							HX_STACK_LINE(668)
							::zpp_nape::geom::ZPP_AABB _this = body->aabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(668)
							tmp15 = (_this->maxx - _this->minx);
						}
						HX_STACK_LINE(668)
						Float wx = tmp15;		HX_STACK_VAR(wx,"wx");
						HX_STACK_LINE(669)
						Float wy = (int)0;		HX_STACK_VAR(wy,"wy");
						HX_STACK_LINE(686)
						bool tmp16 = true;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(686)
						if ((tmp16)){
							HX_STACK_LINE(687)
							Float tmp17 = (xform->a * wx);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(687)
							Float tmp18 = (xform->b * wy);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(687)
							Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(687)
							Float t = tmp19;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(688)
							Float tmp20 = (xform->c * wx);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(688)
							Float tmp21 = (xform->d * wy);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(688)
							Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(688)
							wy = tmp22;
							HX_STACK_LINE(689)
							wx = t;
						}
						HX_STACK_LINE(691)
						Float hx = (int)0;		HX_STACK_VAR(hx,"hx");
						HX_STACK_LINE(692)
						Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(692)
						{
							HX_STACK_LINE(692)
							::zpp_nape::geom::ZPP_AABB _this = body->aabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(692)
							tmp17 = (_this->maxy - _this->miny);
						}
						HX_STACK_LINE(692)
						Float hy = tmp17;		HX_STACK_VAR(hy,"hy");
						HX_STACK_LINE(709)
						bool tmp18 = true;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(709)
						if ((tmp18)){
							HX_STACK_LINE(710)
							Float tmp19 = (xform->a * hx);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(710)
							Float tmp20 = (xform->b * hy);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(710)
							Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(710)
							Float t = tmp21;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(711)
							Float tmp22 = (xform->c * hx);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(711)
							Float tmp23 = (xform->d * hy);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(711)
							Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(711)
							hy = tmp24;
							HX_STACK_LINE(712)
							hx = t;
						}
						HX_STACK_LINE(714)
						::openfl::_legacy::display::Graphics tmp19 = this->graphics;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(714)
						Float tmp20 = ox;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(714)
						Float tmp21 = oy;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(714)
						tmp19->moveTo(tmp20,tmp21);
						HX_STACK_LINE(715)
						::openfl::_legacy::display::Graphics tmp22 = this->graphics;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(715)
						Float tmp23 = (ox + wx);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(715)
						Float tmp24 = (oy + wy);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(715)
						tmp22->lineTo(tmp23,tmp24);
						HX_STACK_LINE(716)
						::openfl::_legacy::display::Graphics tmp25 = this->graphics;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(716)
						Float tmp26 = (ox + wx);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(716)
						Float tmp27 = hx;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(716)
						Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(716)
						Float tmp29 = (oy + wy);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(716)
						Float tmp30 = hy;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(716)
						Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(716)
						tmp25->lineTo(tmp28,tmp31);
						HX_STACK_LINE(717)
						::openfl::_legacy::display::Graphics tmp32 = this->graphics;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(717)
						Float tmp33 = (ox + hx);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(717)
						Float tmp34 = (oy + hy);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(717)
						tmp32->lineTo(tmp33,tmp34);
						HX_STACK_LINE(718)
						::openfl::_legacy::display::Graphics tmp35 = this->graphics;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(718)
						Float tmp36 = ox;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(718)
						Float tmp37 = oy;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(718)
						tmp35->lineTo(tmp36,tmp37);
					}
				}
			}
			HX_STACK_LINE(722)
			bool tmp10 = xnull;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(722)
			if ((tmp10)){
				HX_STACK_LINE(723)
				qx = body->pre_posx;
				HX_STACK_LINE(724)
				qy = body->pre_posy;
				HX_STACK_LINE(733)
				{
				}
			}
			else{
				HX_STACK_LINE(743)
				Float tmp11 = (xform->a * body->pre_posx);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(743)
				Float tmp12 = (xform->b * body->pre_posy);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(743)
				Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(743)
				Float tmp14 = xform->tx;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(743)
				Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(743)
				qx = tmp15;
				HX_STACK_LINE(744)
				Float tmp16 = (xform->c * body->pre_posx);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(744)
				Float tmp17 = (xform->d * body->pre_posy);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(744)
				Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(744)
				Float tmp19 = xform->ty;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(744)
				Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(744)
				qy = tmp20;
			}
			HX_STACK_LINE(746)
			bool tmp11 = xnull;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(746)
			if ((tmp11)){
				HX_STACK_LINE(747)
				px = body->posx;
				HX_STACK_LINE(748)
				py = body->posy;
				HX_STACK_LINE(757)
				{
				}
			}
			else{
				HX_STACK_LINE(767)
				Float tmp12 = (xform->a * body->posx);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(767)
				Float tmp13 = (xform->b * body->posy);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(767)
				Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(767)
				Float tmp15 = xform->tx;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(767)
				Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(767)
				px = tmp16;
				HX_STACK_LINE(768)
				Float tmp17 = (xform->c * body->posx);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(768)
				Float tmp18 = (xform->d * body->posy);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(768)
				Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(768)
				Float tmp20 = xform->ty;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(768)
				Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(768)
				py = tmp21;
			}
			HX_STACK_LINE(770)
			::openfl::_legacy::display::Graphics tmp12 = this->graphics;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(770)
			Float tmp13 = qx;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(770)
			Float tmp14 = qy;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(770)
			tmp12->moveTo(tmp13,tmp14);
			HX_STACK_LINE(771)
			::openfl::_legacy::display::Graphics tmp15 = this->graphics;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(771)
			Float tmp16 = px;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(771)
			Float tmp17 = py;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(771)
			tmp15->lineTo(tmp16,tmp17);
			HX_STACK_LINE(772)
			::openfl::_legacy::display::Graphics tmp18 = this->graphics;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(772)
			Float tmp19 = px;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(772)
			Float tmp20 = py;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(772)
			tmp18->drawCircle(tmp19,tmp20,(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_ShapeDebug_obj,draw_body,(void))

Void ZPP_ShapeDebug_obj::draw_shape( ::zpp_nape::shape::ZPP_Shape shape,::zpp_nape::geom::ZPP_Mat23 xform,Float xdet,bool xnull){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_ShapeDebug","draw_shape",0xba11aab2,"zpp_nape.util.ZPP_ShapeDebug.draw_shape","zpp_nape/util/Debug.hx",775,0xeecbde16)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_ARG(xform,"xform")
		HX_STACK_ARG(xdet,"xdet")
		HX_STACK_ARG(xnull,"xnull")
		HX_STACK_LINE(776)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(776)
		{
			HX_STACK_LINE(777)
			int idc;		HX_STACK_VAR(idc,"idc");
			HX_STACK_LINE(778)
			::nape::util::Debug tmp1 = this->outer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(778)
			Dynamic tmp2 = tmp1->colour;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(778)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(778)
			if ((tmp3)){
				HX_STACK_LINE(778)
				int tmp4 = hx::Mod(shape->id,(int)500);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(778)
				int tmp5 = -(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(778)
				Float tmp6 = (Float(tmp5) / Float((int)1500));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(778)
				Float tmp7 = ::Math_obj::exp(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(778)
				Float tmp8 = ((int)16777215 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(778)
				int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(778)
				idc = tmp9;
			}
			else{
				HX_STACK_LINE(779)
				::nape::util::Debug tmp4 = this->outer;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(779)
				int tmp5 = shape->id;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(779)
				int tmp6 = tmp4->colour(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(779)
				idc = tmp6;
			}
			HX_STACK_LINE(780)
			int tmp4 = (int(idc) & int((int)16711680));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(780)
			int tmp5 = (int(tmp4) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(780)
			Float tmp6 = (tmp5 * ((Float)0.7));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(780)
			Float _r = tmp6;		HX_STACK_VAR(_r,"_r");
			HX_STACK_LINE(781)
			int tmp7 = (int(idc) & int((int)65280));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(781)
			int tmp8 = (int(tmp7) >> int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(781)
			Float tmp9 = (tmp8 * ((Float)0.7));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(781)
			Float _g = tmp9;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(782)
			int tmp10 = (int(idc) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(782)
			Float tmp11 = (tmp10 * ((Float)0.7));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(782)
			Float _b = tmp11;		HX_STACK_VAR(_b,"_b");
			HX_STACK_LINE(788)
			Float tmp12 = _r;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(788)
			int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(788)
			int tmp14 = (int(tmp13) << int((int)16));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(788)
			int tmp15 = (int((int)-16777216) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(788)
			Float tmp16 = _g;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(788)
			int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(788)
			int tmp18 = (int(tmp17) << int((int)8));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(788)
			int tmp19 = (int(tmp15) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(788)
			Float tmp20 = _b;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(788)
			int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(788)
			tmp = (int(tmp19) | int(tmp21));
		}
		HX_STACK_LINE(776)
		int col = tmp;		HX_STACK_VAR(col,"col");
		HX_STACK_LINE(790)
		::zpp_nape::phys::ZPP_Body body = shape->body;		HX_STACK_VAR(body,"body");
		HX_STACK_LINE(791)
		bool tmp1 = (body != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(791)
		if ((tmp1)){
			HX_STACK_LINE(792)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(792)
			{
				HX_STACK_LINE(793)
				int idc;		HX_STACK_VAR(idc,"idc");
				HX_STACK_LINE(794)
				::nape::util::Debug tmp3 = this->outer;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(794)
				Dynamic tmp4 = tmp3->colour;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(794)
				bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(794)
				if ((tmp5)){
					HX_STACK_LINE(794)
					int tmp6 = hx::Mod(body->id,(int)500);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(794)
					int tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(794)
					Float tmp8 = (Float(tmp7) / Float((int)1500));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(794)
					Float tmp9 = ::Math_obj::exp(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(794)
					Float tmp10 = ((int)16777215 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(794)
					int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(794)
					idc = tmp11;
				}
				else{
					HX_STACK_LINE(795)
					::nape::util::Debug tmp6 = this->outer;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(795)
					int tmp7 = body->id;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(795)
					int tmp8 = tmp6->colour(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(795)
					idc = tmp8;
				}
				HX_STACK_LINE(796)
				int tmp6 = (int(idc) & int((int)16711680));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(796)
				int tmp7 = (int(tmp6) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(796)
				Float tmp8 = (tmp7 * ((Float)0.7));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(796)
				Float _r = tmp8;		HX_STACK_VAR(_r,"_r");
				HX_STACK_LINE(797)
				int tmp9 = (int(idc) & int((int)65280));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(797)
				int tmp10 = (int(tmp9) >> int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(797)
				Float tmp11 = (tmp10 * ((Float)0.7));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(797)
				Float _g = tmp11;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(798)
				int tmp12 = (int(idc) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(798)
				Float tmp13 = (tmp12 * ((Float)0.7));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(798)
				Float _b = tmp13;		HX_STACK_VAR(_b,"_b");
				HX_STACK_LINE(799)
				bool tmp14 = (body->space != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(799)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(799)
				if ((tmp14)){
					HX_STACK_LINE(799)
					::zpp_nape::phys::ZPP_Body tmp16 = body->outer->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(799)
					::zpp_nape::phys::ZPP_Body tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(799)
					tmp15 = tmp17->component->sleeping;
				}
				else{
					HX_STACK_LINE(799)
					tmp15 = false;
				}
				HX_STACK_LINE(799)
				if ((tmp15)){
					HX_STACK_LINE(800)
					Float tmp16 = (((Float)0.4) * _r);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(800)
					Float tmp17 = this->bg_r;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(800)
					Float tmp18 = (((Float)0.6) * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(800)
					Float tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(800)
					_r = tmp19;
					HX_STACK_LINE(801)
					Float tmp20 = (((Float)0.4) * _g);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(801)
					Float tmp21 = this->bg_g;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(801)
					Float tmp22 = (((Float)0.6) * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(801)
					Float tmp23 = (tmp20 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(801)
					_g = tmp23;
					HX_STACK_LINE(802)
					Float tmp24 = (((Float)0.4) * _b);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(802)
					Float tmp25 = this->bg_b;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(802)
					Float tmp26 = (((Float)0.6) * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(802)
					Float tmp27 = (tmp24 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(802)
					_b = tmp27;
				}
				HX_STACK_LINE(804)
				Float tmp16 = _r;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(804)
				int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(804)
				int tmp18 = (int(tmp17) << int((int)16));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(804)
				int tmp19 = (int((int)-16777216) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(804)
				Float tmp20 = _g;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(804)
				int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(804)
				int tmp22 = (int(tmp21) << int((int)8));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(804)
				int tmp23 = (int(tmp19) | int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(804)
				Float tmp24 = _b;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(804)
				int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(804)
				tmp2 = (int(tmp23) | int(tmp25));
			}
			HX_STACK_LINE(792)
			int bcol = tmp2;		HX_STACK_VAR(bcol,"bcol");
			HX_STACK_LINE(806)
			int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(806)
			{
				HX_STACK_LINE(807)
				int col1 = col;		HX_STACK_VAR(col1,"col1");
				HX_STACK_LINE(808)
				int ncol = bcol;		HX_STACK_VAR(ncol,"ncol");
				HX_STACK_LINE(809)
				Float f = ((Float)0.2);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(810)
				int tmp4 = (int(col1) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(810)
				int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(810)
				Float tmp6 = f;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(810)
				Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(810)
				int tmp8 = (int(ncol) >> int((int)16));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(810)
				int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(810)
				Float tmp10 = ((int)1 - f);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(810)
				Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(810)
				Float tmp12 = (tmp7 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(810)
				int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(810)
				int _r = tmp13;		HX_STACK_VAR(_r,"_r");
				HX_STACK_LINE(811)
				int tmp14 = (int(col1) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(811)
				int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(811)
				Float tmp16 = f;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(811)
				Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(811)
				int tmp18 = (int(ncol) >> int((int)8));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(811)
				int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(811)
				Float tmp20 = ((int)1 - f);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(811)
				Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(811)
				Float tmp22 = (tmp17 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(811)
				int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(811)
				int _g = tmp23;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(812)
				int tmp24 = (int(col1) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(812)
				Float tmp25 = f;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(812)
				Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(812)
				int tmp27 = (int(ncol) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(812)
				Float tmp28 = ((int)1 - f);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(812)
				Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(812)
				Float tmp30 = (tmp26 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(812)
				int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(812)
				int _b = tmp31;		HX_STACK_VAR(_b,"_b");
				HX_STACK_LINE(813)
				int tmp32 = (int(_r) << int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(813)
				int tmp33 = (int((int)-16777216) | int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(813)
				int tmp34 = (int(_g) << int((int)8));		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(813)
				int tmp35 = (int(tmp33) | int(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(813)
				int tmp36 = _b;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(813)
				tmp3 = (int(tmp35) | int(tmp36));
			}
			HX_STACK_LINE(806)
			col = tmp3;
			HX_STACK_LINE(815)
			::openfl::_legacy::display::Graphics tmp4 = this->graphics;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(815)
			::nape::util::ShapeDebug tmp5 = this->outer_zn;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(815)
			Float tmp6 = tmp5->thickness;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(815)
			int tmp7 = col;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(815)
			tmp4->lineStyle(tmp6,tmp7,((Float)1.0),null(),null(),null(),null(),null());
			HX_STACK_LINE(816)
			int tmp8 = shape->type;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(816)
			int tmp9 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(816)
			bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(816)
			if ((tmp10)){
				HX_STACK_LINE(817)
				::zpp_nape::shape::ZPP_Circle circ = shape->circle;		HX_STACK_VAR(circ,"circ");
				HX_STACK_LINE(818)
				{
					HX_STACK_LINE(818)
					bool tmp11 = circ->zip_worldCOM;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(818)
					if ((tmp11)){
						HX_STACK_LINE(818)
						bool tmp12 = (circ->body != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(818)
						if ((tmp12)){
							HX_STACK_LINE(818)
							circ->zip_worldCOM = false;
							HX_STACK_LINE(818)
							{
								HX_STACK_LINE(818)
								bool tmp13 = circ->zip_localCOM;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(818)
								if ((tmp13)){
									HX_STACK_LINE(818)
									circ->zip_localCOM = false;
									HX_STACK_LINE(818)
									int tmp14 = circ->type;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(818)
									int tmp15 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(818)
									bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(818)
									if ((tmp16)){
										HX_STACK_LINE(818)
										::zpp_nape::shape::ZPP_Polygon _this = circ->polygon;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(818)
										::zpp_nape::geom::ZPP_Vec2 tmp17 = _this->lverts->next;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(818)
										::zpp_nape::geom::ZPP_Vec2 tmp18 = tmp17->next;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(818)
										bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(818)
										if ((tmp19)){
											HX_STACK_LINE(818)
											::zpp_nape::geom::ZPP_Vec2 tmp20 = _this->lverts->next;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(818)
											_this->localCOMx = tmp20->x;
											HX_STACK_LINE(818)
											::zpp_nape::geom::ZPP_Vec2 tmp21 = _this->lverts->next;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(818)
											_this->localCOMy = tmp21->y;
											HX_STACK_LINE(818)
											Dynamic();
										}
										else{
											HX_STACK_LINE(818)
											::zpp_nape::geom::ZPP_Vec2 tmp20 = _this->lverts->next;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(818)
											::zpp_nape::geom::ZPP_Vec2 tmp21 = tmp20->next->next;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(818)
											bool tmp22 = (tmp21 == null());		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(818)
											if ((tmp22)){
												HX_STACK_LINE(818)
												{
													HX_STACK_LINE(818)
													::zpp_nape::geom::ZPP_Vec2 tmp23 = _this->lverts->next;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(818)
													_this->localCOMx = tmp23->x;
													HX_STACK_LINE(818)
													::zpp_nape::geom::ZPP_Vec2 tmp24 = _this->lverts->next;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(818)
													_this->localCOMy = tmp24->y;
													HX_STACK_LINE(818)
													{
													}
												}
												HX_STACK_LINE(818)
												{
													HX_STACK_LINE(818)
													Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(818)
													::zpp_nape::geom::ZPP_Vec2 tmp23 = _this->lverts->next;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(818)
													Float tmp24 = tmp23->next->x;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(818)
													Float tmp25 = t;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(818)
													Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(818)
													hx::AddEq(_this->localCOMx,tmp26);
													HX_STACK_LINE(818)
													::zpp_nape::geom::ZPP_Vec2 tmp27 = _this->lverts->next;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(818)
													Float tmp28 = tmp27->next->y;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(818)
													Float tmp29 = t;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(818)
													Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(818)
													hx::AddEq(_this->localCOMy,tmp30);
												}
												HX_STACK_LINE(818)
												{
													HX_STACK_LINE(818)
													Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(818)
													hx::MultEq(_this->localCOMx,t);
													HX_STACK_LINE(818)
													hx::MultEq(_this->localCOMy,t);
												}
											}
											else{
												HX_STACK_LINE(818)
												{
													HX_STACK_LINE(818)
													_this->localCOMx = (int)0;
													HX_STACK_LINE(818)
													_this->localCOMy = (int)0;
													HX_STACK_LINE(818)
													{
													}
												}
												HX_STACK_LINE(818)
												Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
												HX_STACK_LINE(818)
												{
													HX_STACK_LINE(818)
													::zpp_nape::geom::ZPP_Vec2 tmp23 = _this->lverts->next;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(818)
													::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp23;		HX_STACK_VAR(cx_ite,"cx_ite");
													HX_STACK_LINE(818)
													::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
													HX_STACK_LINE(818)
													cx_ite = cx_ite->next;
													HX_STACK_LINE(818)
													::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
													HX_STACK_LINE(818)
													cx_ite = cx_ite->next;
													HX_STACK_LINE(818)
													while((true)){
														HX_STACK_LINE(818)
														bool tmp24 = (cx_ite != null());		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(818)
														bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(818)
														if ((tmp25)){
															HX_STACK_LINE(818)
															break;
														}
														HX_STACK_LINE(818)
														::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
														HX_STACK_LINE(818)
														{
															HX_STACK_LINE(818)
															Float tmp26 = v->x;		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(818)
															Float tmp27 = (w->y - u->y);		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(818)
															Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(818)
															hx::AddEq(area,tmp28);
															HX_STACK_LINE(818)
															Float tmp29 = (w->y * v->x);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(818)
															Float tmp30 = (w->x * v->y);		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(818)
															Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(818)
															Float cf = tmp31;		HX_STACK_VAR(cf,"cf");
															HX_STACK_LINE(818)
															Float tmp32 = (v->x + w->x);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(818)
															Float tmp33 = cf;		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(818)
															Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(818)
															hx::AddEq(_this->localCOMx,tmp34);
															HX_STACK_LINE(818)
															Float tmp35 = (v->y + w->y);		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(818)
															Float tmp36 = cf;		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(818)
															Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(818)
															hx::AddEq(_this->localCOMy,tmp37);
														}
														HX_STACK_LINE(818)
														u = v;
														HX_STACK_LINE(818)
														v = w;
														HX_STACK_LINE(818)
														cx_ite = cx_ite->next;
													}
													HX_STACK_LINE(818)
													::zpp_nape::geom::ZPP_Vec2 tmp24 = _this->lverts->next;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(818)
													cx_ite = tmp24;
													HX_STACK_LINE(818)
													::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
													HX_STACK_LINE(818)
													{
														HX_STACK_LINE(818)
														Float tmp25 = v->x;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(818)
														Float tmp26 = (w->y - u->y);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(818)
														Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(818)
														hx::AddEq(area,tmp27);
														HX_STACK_LINE(818)
														Float tmp28 = (w->y * v->x);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(818)
														Float tmp29 = (w->x * v->y);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(818)
														Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(818)
														Float cf = tmp30;		HX_STACK_VAR(cf,"cf");
														HX_STACK_LINE(818)
														Float tmp31 = (v->x + w->x);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(818)
														Float tmp32 = cf;		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(818)
														Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(818)
														hx::AddEq(_this->localCOMx,tmp33);
														HX_STACK_LINE(818)
														Float tmp34 = (v->y + w->y);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(818)
														Float tmp35 = cf;		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(818)
														Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(818)
														hx::AddEq(_this->localCOMy,tmp36);
													}
													HX_STACK_LINE(818)
													u = v;
													HX_STACK_LINE(818)
													v = w;
													HX_STACK_LINE(818)
													cx_ite = cx_ite->next;
													HX_STACK_LINE(818)
													::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
													HX_STACK_LINE(818)
													{
														HX_STACK_LINE(818)
														Float tmp25 = v->x;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(818)
														Float tmp26 = (w1->y - u->y);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(818)
														Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(818)
														hx::AddEq(area,tmp27);
														HX_STACK_LINE(818)
														Float tmp28 = (w1->y * v->x);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(818)
														Float tmp29 = (w1->x * v->y);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(818)
														Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(818)
														Float cf = tmp30;		HX_STACK_VAR(cf,"cf");
														HX_STACK_LINE(818)
														Float tmp31 = (v->x + w1->x);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(818)
														Float tmp32 = cf;		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(818)
														Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(818)
														hx::AddEq(_this->localCOMx,tmp33);
														HX_STACK_LINE(818)
														Float tmp34 = (v->y + w1->y);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(818)
														Float tmp35 = cf;		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(818)
														Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(818)
														hx::AddEq(_this->localCOMy,tmp36);
													}
												}
												HX_STACK_LINE(818)
												Float tmp23 = ((int)3 * area);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(818)
												Float tmp24 = (Float((int)1) / Float(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(818)
												area = tmp24;
												HX_STACK_LINE(818)
												{
													HX_STACK_LINE(818)
													Float t = area;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(818)
													hx::MultEq(_this->localCOMx,t);
													HX_STACK_LINE(818)
													hx::MultEq(_this->localCOMy,t);
												}
											}
										}
									}
									HX_STACK_LINE(818)
									bool tmp17 = (circ->wrap_localCOM != null());		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(818)
									if ((tmp17)){
										HX_STACK_LINE(818)
										::zpp_nape::geom::ZPP_Vec2 tmp18 = circ->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(818)
										tmp18->x = circ->localCOMx;
										HX_STACK_LINE(818)
										::zpp_nape::geom::ZPP_Vec2 tmp19 = circ->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(818)
										tmp19->y = circ->localCOMy;
										HX_STACK_LINE(818)
										{
										}
									}
								}
							}
							HX_STACK_LINE(818)
							{
								HX_STACK_LINE(818)
								::zpp_nape::phys::ZPP_Body _this = circ->body;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(818)
								bool tmp13 = _this->zip_axis;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(818)
								if ((tmp13)){
									HX_STACK_LINE(818)
									_this->zip_axis = false;
									HX_STACK_LINE(818)
									{
										HX_STACK_LINE(818)
										Float tmp14 = _this->rot;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(818)
										Float tmp15 = ::Math_obj::sin(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(818)
										_this->axisx = tmp15;
										HX_STACK_LINE(818)
										Float tmp16 = _this->rot;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(818)
										Float tmp17 = ::Math_obj::cos(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(818)
										_this->axisy = tmp17;
										HX_STACK_LINE(818)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(818)
							{
								HX_STACK_LINE(818)
								Float tmp13 = circ->body->posx;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(818)
								Float tmp14 = circ->body->axisy;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(818)
								Float tmp15 = circ->localCOMx;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(818)
								Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(818)
								Float tmp17 = circ->body->axisx;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(818)
								Float tmp18 = circ->localCOMy;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(818)
								Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(818)
								Float tmp20 = (tmp16 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(818)
								Float tmp21 = (tmp13 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(818)
								circ->worldCOMx = tmp21;
								HX_STACK_LINE(818)
								Float tmp22 = circ->body->posy;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(818)
								Float tmp23 = circ->localCOMx;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(818)
								Float tmp24 = circ->body->axisx;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(818)
								Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(818)
								Float tmp26 = circ->localCOMy;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(818)
								Float tmp27 = circ->body->axisy;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(818)
								Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(818)
								Float tmp29 = (tmp25 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(818)
								Float tmp30 = (tmp22 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(818)
								circ->worldCOMy = tmp30;
							}
						}
					}
				}
				HX_STACK_LINE(819)
				Float vx = circ->worldCOMx;		HX_STACK_VAR(vx,"vx");
				HX_STACK_LINE(820)
				Float vy = circ->worldCOMy;		HX_STACK_VAR(vy,"vy");
				HX_STACK_LINE(821)
				bool tmp11 = xnull;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(821)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(821)
				if ((tmp12)){
					HX_STACK_LINE(822)
					Float tmp13 = (xform->a * vx);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(822)
					Float tmp14 = (xform->b * vy);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(822)
					Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(822)
					Float tmp16 = xform->tx;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(822)
					Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(822)
					Float t = tmp17;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(823)
					Float tmp18 = (xform->c * vx);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(823)
					Float tmp19 = (xform->d * vy);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(823)
					Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(823)
					Float tmp21 = xform->ty;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(823)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(823)
					vy = tmp22;
					HX_STACK_LINE(824)
					vx = t;
				}
				HX_STACK_LINE(826)
				::openfl::_legacy::display::Graphics tmp13 = this->graphics;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(826)
				Float tmp14 = vx;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(826)
				Float tmp15 = vy;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(826)
				Float tmp16 = (circ->radius * xdet);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(826)
				tmp13->drawCircle(tmp14,tmp15,tmp16);
				HX_STACK_LINE(827)
				::nape::util::Debug tmp17 = this->outer;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(827)
				bool tmp18 = tmp17->drawShapeAngleIndicators;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(827)
				if ((tmp18)){
					HX_STACK_LINE(828)
					Float tmp19 = circ->worldCOMx;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(828)
					Float tmp20 = (((Float)0.3) * circ->radius);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(828)
					Float tmp21 = body->axisy;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(828)
					Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(828)
					Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(828)
					Float v0x = tmp23;		HX_STACK_VAR(v0x,"v0x");
					HX_STACK_LINE(829)
					Float tmp24 = circ->worldCOMy;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(829)
					Float tmp25 = (((Float)0.3) * circ->radius);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(829)
					Float tmp26 = body->axisx;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(829)
					Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(829)
					Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(829)
					Float v0y = tmp28;		HX_STACK_VAR(v0y,"v0y");
					HX_STACK_LINE(830)
					Float tmp29 = circ->worldCOMx;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(830)
					Float tmp30 = (circ->radius * body->axisy);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(830)
					Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(830)
					Float v1x = tmp31;		HX_STACK_VAR(v1x,"v1x");
					HX_STACK_LINE(831)
					Float tmp32 = circ->worldCOMy;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(831)
					Float tmp33 = (circ->radius * body->axisx);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(831)
					Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(831)
					Float v1y = tmp34;		HX_STACK_VAR(v1y,"v1y");
					HX_STACK_LINE(832)
					bool tmp35 = xnull;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(832)
					bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(832)
					if ((tmp36)){
						HX_STACK_LINE(833)
						Float tmp37 = (xform->a * v0x);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(833)
						Float tmp38 = (xform->b * v0y);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(833)
						Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(833)
						Float tmp40 = xform->tx;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(833)
						Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(833)
						Float t = tmp41;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(834)
						Float tmp42 = (xform->c * v0x);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(834)
						Float tmp43 = (xform->d * v0y);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(834)
						Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(834)
						Float tmp45 = xform->ty;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(834)
						Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(834)
						v0y = tmp46;
						HX_STACK_LINE(835)
						v0x = t;
					}
					HX_STACK_LINE(837)
					bool tmp37 = xnull;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(837)
					bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(837)
					if ((tmp38)){
						HX_STACK_LINE(838)
						Float tmp39 = (xform->a * v1x);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(838)
						Float tmp40 = (xform->b * v1y);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(838)
						Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(838)
						Float tmp42 = xform->tx;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(838)
						Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(838)
						Float t = tmp43;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(839)
						Float tmp44 = (xform->c * v1x);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(839)
						Float tmp45 = (xform->d * v1y);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(839)
						Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(839)
						Float tmp47 = xform->ty;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(839)
						Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(839)
						v1y = tmp48;
						HX_STACK_LINE(840)
						v1x = t;
					}
					HX_STACK_LINE(842)
					::openfl::_legacy::display::Graphics tmp39 = this->graphics;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(842)
					Float tmp40 = v0x;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(842)
					Float tmp41 = v0y;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(842)
					tmp39->moveTo(tmp40,tmp41);
					HX_STACK_LINE(843)
					::openfl::_legacy::display::Graphics tmp42 = this->graphics;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(843)
					Float tmp43 = v1x;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(843)
					Float tmp44 = v1y;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(843)
					tmp42->lineTo(tmp43,tmp44);
				}
			}
			else{
				HX_STACK_LINE(847)
				::zpp_nape::shape::ZPP_Polygon poly = shape->polygon;		HX_STACK_VAR(poly,"poly");
				HX_STACK_LINE(848)
				{
					HX_STACK_LINE(848)
					bool tmp11 = poly->zip_gverts;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(848)
					if ((tmp11)){
						HX_STACK_LINE(848)
						bool tmp12 = (poly->body != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(848)
						if ((tmp12)){
							HX_STACK_LINE(848)
							poly->zip_gverts = false;
							HX_STACK_LINE(848)
							poly->validate_lverts();
							HX_STACK_LINE(848)
							{
								HX_STACK_LINE(848)
								::zpp_nape::phys::ZPP_Body _this = poly->body;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(848)
								bool tmp13 = _this->zip_axis;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(848)
								if ((tmp13)){
									HX_STACK_LINE(848)
									_this->zip_axis = false;
									HX_STACK_LINE(848)
									{
										HX_STACK_LINE(848)
										Float tmp14 = _this->rot;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(848)
										Float tmp15 = ::Math_obj::sin(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(848)
										_this->axisx = tmp15;
										HX_STACK_LINE(848)
										Float tmp16 = _this->rot;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(848)
										Float tmp17 = ::Math_obj::cos(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(848)
										_this->axisy = tmp17;
										HX_STACK_LINE(848)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(848)
							::zpp_nape::geom::ZPP_Vec2 tmp13 = poly->lverts->next;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(848)
							::zpp_nape::geom::ZPP_Vec2 li = tmp13;		HX_STACK_VAR(li,"li");
							HX_STACK_LINE(848)
							{
								HX_STACK_LINE(848)
								::zpp_nape::geom::ZPP_Vec2 tmp14 = poly->gverts->next;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(848)
								::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp14;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(848)
								while((true)){
									HX_STACK_LINE(848)
									bool tmp15 = (cx_ite != null());		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(848)
									bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(848)
									if ((tmp16)){
										HX_STACK_LINE(848)
										break;
									}
									HX_STACK_LINE(848)
									::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(848)
									{
										HX_STACK_LINE(848)
										::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
										HX_STACK_LINE(848)
										li = li->next;
										HX_STACK_LINE(848)
										{
											HX_STACK_LINE(848)
											Float tmp17 = poly->body->posx;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(848)
											Float tmp18 = poly->body->axisy;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(848)
											Float tmp19 = l->x;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(848)
											Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(848)
											Float tmp21 = poly->body->axisx;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(848)
											Float tmp22 = l->y;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(848)
											Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(848)
											Float tmp24 = (tmp20 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(848)
											Float tmp25 = (tmp17 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(848)
											g->x = tmp25;
											HX_STACK_LINE(848)
											Float tmp26 = poly->body->posy;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(848)
											Float tmp27 = l->x;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(848)
											Float tmp28 = poly->body->axisx;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(848)
											Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(848)
											Float tmp30 = l->y;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(848)
											Float tmp31 = poly->body->axisy;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(848)
											Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(848)
											Float tmp33 = (tmp29 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(848)
											Float tmp34 = (tmp26 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(848)
											g->y = tmp34;
										}
									}
									HX_STACK_LINE(848)
									cx_ite = cx_ite->next;
								}
							}
						}
					}
				}
				HX_STACK_LINE(849)
				::zpp_nape::geom::ZPP_Vec2 tmp11 = poly->gverts->next;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(849)
				::zpp_nape::geom::ZPP_Vec2 u = tmp11;		HX_STACK_VAR(u,"u");
				HX_STACK_LINE(850)
				Float vx = u->x;		HX_STACK_VAR(vx,"vx");
				HX_STACK_LINE(851)
				Float vy = u->y;		HX_STACK_VAR(vy,"vy");
				HX_STACK_LINE(852)
				bool tmp12 = xnull;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(852)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(852)
				if ((tmp13)){
					HX_STACK_LINE(853)
					Float tmp14 = (xform->a * vx);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(853)
					Float tmp15 = (xform->b * vy);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(853)
					Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(853)
					Float tmp17 = xform->tx;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(853)
					Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(853)
					Float t = tmp18;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(854)
					Float tmp19 = (xform->c * vx);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(854)
					Float tmp20 = (xform->d * vy);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(854)
					Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(854)
					Float tmp22 = xform->ty;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(854)
					Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(854)
					vy = tmp23;
					HX_STACK_LINE(855)
					vx = t;
				}
				HX_STACK_LINE(857)
				::openfl::_legacy::display::Graphics tmp14 = this->graphics;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(857)
				Float tmp15 = vx;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(857)
				Float tmp16 = vy;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(857)
				tmp14->moveTo(tmp15,tmp16);
				HX_STACK_LINE(858)
				Float vox = vx;		HX_STACK_VAR(vox,"vox");
				HX_STACK_LINE(859)
				Float voy = vy;		HX_STACK_VAR(voy,"voy");
				HX_STACK_LINE(860)
				{
					HX_STACK_LINE(861)
					::zpp_nape::geom::ZPP_Vec2 tmp17 = poly->gverts->next;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(861)
					::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp17->next;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(862)
					while((true)){
						HX_STACK_LINE(862)
						bool tmp18 = (cx_ite != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(862)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(862)
						if ((tmp19)){
							HX_STACK_LINE(862)
							break;
						}
						HX_STACK_LINE(863)
						::zpp_nape::geom::ZPP_Vec2 u1 = cx_ite;		HX_STACK_VAR(u1,"u1");
						HX_STACK_LINE(864)
						{
							HX_STACK_LINE(865)
							vx = u1->x;
							HX_STACK_LINE(866)
							vy = u1->y;
							HX_STACK_LINE(867)
							bool tmp20 = xnull;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(867)
							bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(867)
							if ((tmp21)){
								HX_STACK_LINE(868)
								Float tmp22 = (xform->a * vx);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(868)
								Float tmp23 = (xform->b * vy);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(868)
								Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(868)
								Float tmp25 = xform->tx;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(868)
								Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(868)
								Float t = tmp26;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(869)
								Float tmp27 = (xform->c * vx);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(869)
								Float tmp28 = (xform->d * vy);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(869)
								Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(869)
								Float tmp30 = xform->ty;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(869)
								Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(869)
								vy = tmp31;
								HX_STACK_LINE(870)
								vx = t;
							}
							HX_STACK_LINE(872)
							::openfl::_legacy::display::Graphics tmp22 = this->graphics;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(872)
							Float tmp23 = vx;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(872)
							Float tmp24 = vy;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(872)
							tmp22->lineTo(tmp23,tmp24);
						}
						HX_STACK_LINE(874)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(877)
				::openfl::_legacy::display::Graphics tmp17 = this->graphics;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(877)
				Float tmp18 = vox;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(877)
				Float tmp19 = voy;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(877)
				tmp17->lineTo(tmp18,tmp19);
				HX_STACK_LINE(878)
				::nape::util::Debug tmp20 = this->outer;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(878)
				bool tmp21 = tmp20->drawShapeAngleIndicators;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(878)
				if ((tmp21)){
					HX_STACK_LINE(879)
					{
						HX_STACK_LINE(879)
						bool tmp22 = poly->zip_worldCOM;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(879)
						if ((tmp22)){
							HX_STACK_LINE(879)
							bool tmp23 = (poly->body != null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(879)
							if ((tmp23)){
								HX_STACK_LINE(879)
								poly->zip_worldCOM = false;
								HX_STACK_LINE(879)
								{
									HX_STACK_LINE(879)
									bool tmp24 = poly->zip_localCOM;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(879)
									if ((tmp24)){
										HX_STACK_LINE(879)
										poly->zip_localCOM = false;
										HX_STACK_LINE(879)
										int tmp25 = poly->type;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(879)
										int tmp26 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(879)
										bool tmp27 = (tmp25 == tmp26);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(879)
										if ((tmp27)){
											HX_STACK_LINE(879)
											::zpp_nape::shape::ZPP_Polygon _this = poly->polygon;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(879)
											::zpp_nape::geom::ZPP_Vec2 tmp28 = _this->lverts->next;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(879)
											::zpp_nape::geom::ZPP_Vec2 tmp29 = tmp28->next;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(879)
											bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(879)
											if ((tmp30)){
												HX_STACK_LINE(879)
												::zpp_nape::geom::ZPP_Vec2 tmp31 = _this->lverts->next;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(879)
												_this->localCOMx = tmp31->x;
												HX_STACK_LINE(879)
												::zpp_nape::geom::ZPP_Vec2 tmp32 = _this->lverts->next;		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(879)
												_this->localCOMy = tmp32->y;
												HX_STACK_LINE(879)
												Dynamic();
											}
											else{
												HX_STACK_LINE(879)
												::zpp_nape::geom::ZPP_Vec2 tmp31 = _this->lverts->next;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(879)
												::zpp_nape::geom::ZPP_Vec2 tmp32 = tmp31->next->next;		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(879)
												bool tmp33 = (tmp32 == null());		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(879)
												if ((tmp33)){
													HX_STACK_LINE(879)
													{
														HX_STACK_LINE(879)
														::zpp_nape::geom::ZPP_Vec2 tmp34 = _this->lverts->next;		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(879)
														_this->localCOMx = tmp34->x;
														HX_STACK_LINE(879)
														::zpp_nape::geom::ZPP_Vec2 tmp35 = _this->lverts->next;		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(879)
														_this->localCOMy = tmp35->y;
														HX_STACK_LINE(879)
														{
														}
													}
													HX_STACK_LINE(879)
													{
														HX_STACK_LINE(879)
														Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(879)
														::zpp_nape::geom::ZPP_Vec2 tmp34 = _this->lverts->next;		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(879)
														Float tmp35 = tmp34->next->x;		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(879)
														Float tmp36 = t;		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(879)
														Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(879)
														hx::AddEq(_this->localCOMx,tmp37);
														HX_STACK_LINE(879)
														::zpp_nape::geom::ZPP_Vec2 tmp38 = _this->lverts->next;		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(879)
														Float tmp39 = tmp38->next->y;		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(879)
														Float tmp40 = t;		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(879)
														Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(879)
														hx::AddEq(_this->localCOMy,tmp41);
													}
													HX_STACK_LINE(879)
													{
														HX_STACK_LINE(879)
														Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(879)
														hx::MultEq(_this->localCOMx,t);
														HX_STACK_LINE(879)
														hx::MultEq(_this->localCOMy,t);
													}
												}
												else{
													HX_STACK_LINE(879)
													{
														HX_STACK_LINE(879)
														_this->localCOMx = (int)0;
														HX_STACK_LINE(879)
														_this->localCOMy = (int)0;
														HX_STACK_LINE(879)
														{
														}
													}
													HX_STACK_LINE(879)
													Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
													HX_STACK_LINE(879)
													{
														HX_STACK_LINE(879)
														::zpp_nape::geom::ZPP_Vec2 tmp34 = _this->lverts->next;		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(879)
														::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp34;		HX_STACK_VAR(cx_ite,"cx_ite");
														HX_STACK_LINE(879)
														::zpp_nape::geom::ZPP_Vec2 u1 = cx_ite;		HX_STACK_VAR(u1,"u1");
														HX_STACK_LINE(879)
														cx_ite = cx_ite->next;
														HX_STACK_LINE(879)
														::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
														HX_STACK_LINE(879)
														cx_ite = cx_ite->next;
														HX_STACK_LINE(879)
														while((true)){
															HX_STACK_LINE(879)
															bool tmp35 = (cx_ite != null());		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(879)
															bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(879)
															if ((tmp36)){
																HX_STACK_LINE(879)
																break;
															}
															HX_STACK_LINE(879)
															::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
															HX_STACK_LINE(879)
															{
																HX_STACK_LINE(879)
																Float tmp37 = v->x;		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(879)
																Float tmp38 = (w->y - u1->y);		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(879)
																Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(879)
																hx::AddEq(area,tmp39);
																HX_STACK_LINE(879)
																Float tmp40 = (w->y * v->x);		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(879)
																Float tmp41 = (w->x * v->y);		HX_STACK_VAR(tmp41,"tmp41");
																HX_STACK_LINE(879)
																Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																HX_STACK_LINE(879)
																Float cf = tmp42;		HX_STACK_VAR(cf,"cf");
																HX_STACK_LINE(879)
																Float tmp43 = (v->x + w->x);		HX_STACK_VAR(tmp43,"tmp43");
																HX_STACK_LINE(879)
																Float tmp44 = cf;		HX_STACK_VAR(tmp44,"tmp44");
																HX_STACK_LINE(879)
																Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
																HX_STACK_LINE(879)
																hx::AddEq(_this->localCOMx,tmp45);
																HX_STACK_LINE(879)
																Float tmp46 = (v->y + w->y);		HX_STACK_VAR(tmp46,"tmp46");
																HX_STACK_LINE(879)
																Float tmp47 = cf;		HX_STACK_VAR(tmp47,"tmp47");
																HX_STACK_LINE(879)
																Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
																HX_STACK_LINE(879)
																hx::AddEq(_this->localCOMy,tmp48);
															}
															HX_STACK_LINE(879)
															u1 = v;
															HX_STACK_LINE(879)
															v = w;
															HX_STACK_LINE(879)
															cx_ite = cx_ite->next;
														}
														HX_STACK_LINE(879)
														::zpp_nape::geom::ZPP_Vec2 tmp35 = _this->lverts->next;		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(879)
														cx_ite = tmp35;
														HX_STACK_LINE(879)
														::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
														HX_STACK_LINE(879)
														{
															HX_STACK_LINE(879)
															Float tmp36 = v->x;		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(879)
															Float tmp37 = (w->y - u1->y);		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(879)
															Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
															HX_STACK_LINE(879)
															hx::AddEq(area,tmp38);
															HX_STACK_LINE(879)
															Float tmp39 = (w->y * v->x);		HX_STACK_VAR(tmp39,"tmp39");
															HX_STACK_LINE(879)
															Float tmp40 = (w->x * v->y);		HX_STACK_VAR(tmp40,"tmp40");
															HX_STACK_LINE(879)
															Float tmp41 = (tmp39 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
															HX_STACK_LINE(879)
															Float cf = tmp41;		HX_STACK_VAR(cf,"cf");
															HX_STACK_LINE(879)
															Float tmp42 = (v->x + w->x);		HX_STACK_VAR(tmp42,"tmp42");
															HX_STACK_LINE(879)
															Float tmp43 = cf;		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(879)
															Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(879)
															hx::AddEq(_this->localCOMx,tmp44);
															HX_STACK_LINE(879)
															Float tmp45 = (v->y + w->y);		HX_STACK_VAR(tmp45,"tmp45");
															HX_STACK_LINE(879)
															Float tmp46 = cf;		HX_STACK_VAR(tmp46,"tmp46");
															HX_STACK_LINE(879)
															Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(879)
															hx::AddEq(_this->localCOMy,tmp47);
														}
														HX_STACK_LINE(879)
														u1 = v;
														HX_STACK_LINE(879)
														v = w;
														HX_STACK_LINE(879)
														cx_ite = cx_ite->next;
														HX_STACK_LINE(879)
														::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
														HX_STACK_LINE(879)
														{
															HX_STACK_LINE(879)
															Float tmp36 = v->x;		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(879)
															Float tmp37 = (w1->y - u1->y);		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(879)
															Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
															HX_STACK_LINE(879)
															hx::AddEq(area,tmp38);
															HX_STACK_LINE(879)
															Float tmp39 = (w1->y * v->x);		HX_STACK_VAR(tmp39,"tmp39");
															HX_STACK_LINE(879)
															Float tmp40 = (w1->x * v->y);		HX_STACK_VAR(tmp40,"tmp40");
															HX_STACK_LINE(879)
															Float tmp41 = (tmp39 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
															HX_STACK_LINE(879)
															Float cf = tmp41;		HX_STACK_VAR(cf,"cf");
															HX_STACK_LINE(879)
															Float tmp42 = (v->x + w1->x);		HX_STACK_VAR(tmp42,"tmp42");
															HX_STACK_LINE(879)
															Float tmp43 = cf;		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(879)
															Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(879)
															hx::AddEq(_this->localCOMx,tmp44);
															HX_STACK_LINE(879)
															Float tmp45 = (v->y + w1->y);		HX_STACK_VAR(tmp45,"tmp45");
															HX_STACK_LINE(879)
															Float tmp46 = cf;		HX_STACK_VAR(tmp46,"tmp46");
															HX_STACK_LINE(879)
															Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(879)
															hx::AddEq(_this->localCOMy,tmp47);
														}
													}
													HX_STACK_LINE(879)
													Float tmp34 = ((int)3 * area);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(879)
													Float tmp35 = (Float((int)1) / Float(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(879)
													area = tmp35;
													HX_STACK_LINE(879)
													{
														HX_STACK_LINE(879)
														Float t = area;		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(879)
														hx::MultEq(_this->localCOMx,t);
														HX_STACK_LINE(879)
														hx::MultEq(_this->localCOMy,t);
													}
												}
											}
										}
										HX_STACK_LINE(879)
										bool tmp28 = (poly->wrap_localCOM != null());		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(879)
										if ((tmp28)){
											HX_STACK_LINE(879)
											::zpp_nape::geom::ZPP_Vec2 tmp29 = poly->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(879)
											tmp29->x = poly->localCOMx;
											HX_STACK_LINE(879)
											::zpp_nape::geom::ZPP_Vec2 tmp30 = poly->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(879)
											tmp30->y = poly->localCOMy;
											HX_STACK_LINE(879)
											{
											}
										}
									}
								}
								HX_STACK_LINE(879)
								{
									HX_STACK_LINE(879)
									::zpp_nape::phys::ZPP_Body _this = poly->body;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(879)
									bool tmp24 = _this->zip_axis;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(879)
									if ((tmp24)){
										HX_STACK_LINE(879)
										_this->zip_axis = false;
										HX_STACK_LINE(879)
										{
											HX_STACK_LINE(879)
											Float tmp25 = _this->rot;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(879)
											Float tmp26 = ::Math_obj::sin(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(879)
											_this->axisx = tmp26;
											HX_STACK_LINE(879)
											Float tmp27 = _this->rot;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(879)
											Float tmp28 = ::Math_obj::cos(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(879)
											_this->axisy = tmp28;
											HX_STACK_LINE(879)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(879)
								{
									HX_STACK_LINE(879)
									Float tmp24 = poly->body->posx;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(879)
									Float tmp25 = poly->body->axisy;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(879)
									Float tmp26 = poly->localCOMx;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(879)
									Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(879)
									Float tmp28 = poly->body->axisx;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(879)
									Float tmp29 = poly->localCOMy;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(879)
									Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(879)
									Float tmp31 = (tmp27 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(879)
									Float tmp32 = (tmp24 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(879)
									poly->worldCOMx = tmp32;
									HX_STACK_LINE(879)
									Float tmp33 = poly->body->posy;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(879)
									Float tmp34 = poly->localCOMx;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(879)
									Float tmp35 = poly->body->axisx;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(879)
									Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(879)
									Float tmp37 = poly->localCOMy;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(879)
									Float tmp38 = poly->body->axisy;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(879)
									Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(879)
									Float tmp40 = (tmp36 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(879)
									Float tmp41 = (tmp33 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(879)
									poly->worldCOMy = tmp41;
								}
							}
						}
					}
					HX_STACK_LINE(880)
					bool tmp22 = xnull;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(880)
					if ((tmp22)){
						HX_STACK_LINE(881)
						vx = poly->worldCOMx;
						HX_STACK_LINE(882)
						vy = poly->worldCOMy;
						HX_STACK_LINE(891)
						{
						}
					}
					else{
						HX_STACK_LINE(901)
						Float tmp23 = (xform->a * poly->worldCOMx);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(901)
						Float tmp24 = (xform->b * poly->worldCOMy);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(901)
						Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(901)
						Float tmp26 = xform->tx;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(901)
						Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(901)
						vx = tmp27;
						HX_STACK_LINE(902)
						Float tmp28 = (xform->c * poly->worldCOMx);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(902)
						Float tmp29 = (xform->d * poly->worldCOMy);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(902)
						Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(902)
						Float tmp31 = xform->ty;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(902)
						Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(902)
						vy = tmp32;
					}
					HX_STACK_LINE(904)
					::openfl::_legacy::display::Graphics tmp23 = this->graphics;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(904)
					Float tmp24 = vx;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(904)
					Float tmp25 = vy;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(904)
					tmp23->moveTo(tmp24,tmp25);
					HX_STACK_LINE(905)
					::openfl::_legacy::display::Graphics tmp26 = this->graphics;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(905)
					Float tmp27 = vox;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(905)
					Float tmp28 = voy;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(905)
					tmp26->lineTo(tmp27,tmp28);
				}
			}
			HX_STACK_LINE(908)
			::nape::util::Debug tmp11 = this->outer;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(908)
			bool tmp12 = tmp11->drawShapeDetail;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(908)
			if ((tmp12)){
				HX_STACK_LINE(909)
				{
					HX_STACK_LINE(909)
					bool tmp13 = shape->zip_worldCOM;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(909)
					if ((tmp13)){
						HX_STACK_LINE(909)
						bool tmp14 = (shape->body != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(909)
						if ((tmp14)){
							HX_STACK_LINE(909)
							shape->zip_worldCOM = false;
							HX_STACK_LINE(909)
							{
								HX_STACK_LINE(909)
								bool tmp15 = shape->zip_localCOM;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(909)
								if ((tmp15)){
									HX_STACK_LINE(909)
									shape->zip_localCOM = false;
									HX_STACK_LINE(909)
									int tmp16 = shape->type;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(909)
									int tmp17 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(909)
									bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(909)
									if ((tmp18)){
										HX_STACK_LINE(909)
										::zpp_nape::shape::ZPP_Polygon _this = shape->polygon;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(909)
										::zpp_nape::geom::ZPP_Vec2 tmp19 = _this->lverts->next;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(909)
										::zpp_nape::geom::ZPP_Vec2 tmp20 = tmp19->next;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(909)
										bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(909)
										if ((tmp21)){
											HX_STACK_LINE(909)
											::zpp_nape::geom::ZPP_Vec2 tmp22 = _this->lverts->next;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(909)
											_this->localCOMx = tmp22->x;
											HX_STACK_LINE(909)
											::zpp_nape::geom::ZPP_Vec2 tmp23 = _this->lverts->next;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(909)
											_this->localCOMy = tmp23->y;
											HX_STACK_LINE(909)
											Dynamic();
										}
										else{
											HX_STACK_LINE(909)
											::zpp_nape::geom::ZPP_Vec2 tmp22 = _this->lverts->next;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(909)
											::zpp_nape::geom::ZPP_Vec2 tmp23 = tmp22->next->next;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(909)
											bool tmp24 = (tmp23 == null());		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(909)
											if ((tmp24)){
												HX_STACK_LINE(909)
												{
													HX_STACK_LINE(909)
													::zpp_nape::geom::ZPP_Vec2 tmp25 = _this->lverts->next;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(909)
													_this->localCOMx = tmp25->x;
													HX_STACK_LINE(909)
													::zpp_nape::geom::ZPP_Vec2 tmp26 = _this->lverts->next;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(909)
													_this->localCOMy = tmp26->y;
													HX_STACK_LINE(909)
													{
													}
												}
												HX_STACK_LINE(909)
												{
													HX_STACK_LINE(909)
													Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(909)
													::zpp_nape::geom::ZPP_Vec2 tmp25 = _this->lverts->next;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(909)
													Float tmp26 = tmp25->next->x;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(909)
													Float tmp27 = t;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(909)
													Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(909)
													hx::AddEq(_this->localCOMx,tmp28);
													HX_STACK_LINE(909)
													::zpp_nape::geom::ZPP_Vec2 tmp29 = _this->lverts->next;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(909)
													Float tmp30 = tmp29->next->y;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(909)
													Float tmp31 = t;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(909)
													Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(909)
													hx::AddEq(_this->localCOMy,tmp32);
												}
												HX_STACK_LINE(909)
												{
													HX_STACK_LINE(909)
													Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(909)
													hx::MultEq(_this->localCOMx,t);
													HX_STACK_LINE(909)
													hx::MultEq(_this->localCOMy,t);
												}
											}
											else{
												HX_STACK_LINE(909)
												{
													HX_STACK_LINE(909)
													_this->localCOMx = (int)0;
													HX_STACK_LINE(909)
													_this->localCOMy = (int)0;
													HX_STACK_LINE(909)
													{
													}
												}
												HX_STACK_LINE(909)
												Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
												HX_STACK_LINE(909)
												{
													HX_STACK_LINE(909)
													::zpp_nape::geom::ZPP_Vec2 tmp25 = _this->lverts->next;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(909)
													::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp25;		HX_STACK_VAR(cx_ite,"cx_ite");
													HX_STACK_LINE(909)
													::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
													HX_STACK_LINE(909)
													cx_ite = cx_ite->next;
													HX_STACK_LINE(909)
													::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
													HX_STACK_LINE(909)
													cx_ite = cx_ite->next;
													HX_STACK_LINE(909)
													while((true)){
														HX_STACK_LINE(909)
														bool tmp26 = (cx_ite != null());		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(909)
														bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(909)
														if ((tmp27)){
															HX_STACK_LINE(909)
															break;
														}
														HX_STACK_LINE(909)
														::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
														HX_STACK_LINE(909)
														{
															HX_STACK_LINE(909)
															Float tmp28 = v->x;		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(909)
															Float tmp29 = (w->y - u->y);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(909)
															Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(909)
															hx::AddEq(area,tmp30);
															HX_STACK_LINE(909)
															Float tmp31 = (w->y * v->x);		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(909)
															Float tmp32 = (w->x * v->y);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(909)
															Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(909)
															Float cf = tmp33;		HX_STACK_VAR(cf,"cf");
															HX_STACK_LINE(909)
															Float tmp34 = (v->x + w->x);		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(909)
															Float tmp35 = cf;		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(909)
															Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(909)
															hx::AddEq(_this->localCOMx,tmp36);
															HX_STACK_LINE(909)
															Float tmp37 = (v->y + w->y);		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(909)
															Float tmp38 = cf;		HX_STACK_VAR(tmp38,"tmp38");
															HX_STACK_LINE(909)
															Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
															HX_STACK_LINE(909)
															hx::AddEq(_this->localCOMy,tmp39);
														}
														HX_STACK_LINE(909)
														u = v;
														HX_STACK_LINE(909)
														v = w;
														HX_STACK_LINE(909)
														cx_ite = cx_ite->next;
													}
													HX_STACK_LINE(909)
													::zpp_nape::geom::ZPP_Vec2 tmp26 = _this->lverts->next;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(909)
													cx_ite = tmp26;
													HX_STACK_LINE(909)
													::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
													HX_STACK_LINE(909)
													{
														HX_STACK_LINE(909)
														Float tmp27 = v->x;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(909)
														Float tmp28 = (w->y - u->y);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(909)
														Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(909)
														hx::AddEq(area,tmp29);
														HX_STACK_LINE(909)
														Float tmp30 = (w->y * v->x);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(909)
														Float tmp31 = (w->x * v->y);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(909)
														Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(909)
														Float cf = tmp32;		HX_STACK_VAR(cf,"cf");
														HX_STACK_LINE(909)
														Float tmp33 = (v->x + w->x);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(909)
														Float tmp34 = cf;		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(909)
														Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(909)
														hx::AddEq(_this->localCOMx,tmp35);
														HX_STACK_LINE(909)
														Float tmp36 = (v->y + w->y);		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(909)
														Float tmp37 = cf;		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(909)
														Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(909)
														hx::AddEq(_this->localCOMy,tmp38);
													}
													HX_STACK_LINE(909)
													u = v;
													HX_STACK_LINE(909)
													v = w;
													HX_STACK_LINE(909)
													cx_ite = cx_ite->next;
													HX_STACK_LINE(909)
													::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
													HX_STACK_LINE(909)
													{
														HX_STACK_LINE(909)
														Float tmp27 = v->x;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(909)
														Float tmp28 = (w1->y - u->y);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(909)
														Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(909)
														hx::AddEq(area,tmp29);
														HX_STACK_LINE(909)
														Float tmp30 = (w1->y * v->x);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(909)
														Float tmp31 = (w1->x * v->y);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(909)
														Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(909)
														Float cf = tmp32;		HX_STACK_VAR(cf,"cf");
														HX_STACK_LINE(909)
														Float tmp33 = (v->x + w1->x);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(909)
														Float tmp34 = cf;		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(909)
														Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(909)
														hx::AddEq(_this->localCOMx,tmp35);
														HX_STACK_LINE(909)
														Float tmp36 = (v->y + w1->y);		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(909)
														Float tmp37 = cf;		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(909)
														Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(909)
														hx::AddEq(_this->localCOMy,tmp38);
													}
												}
												HX_STACK_LINE(909)
												Float tmp25 = ((int)3 * area);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(909)
												Float tmp26 = (Float((int)1) / Float(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(909)
												area = tmp26;
												HX_STACK_LINE(909)
												{
													HX_STACK_LINE(909)
													Float t = area;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(909)
													hx::MultEq(_this->localCOMx,t);
													HX_STACK_LINE(909)
													hx::MultEq(_this->localCOMy,t);
												}
											}
										}
									}
									HX_STACK_LINE(909)
									bool tmp19 = (shape->wrap_localCOM != null());		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(909)
									if ((tmp19)){
										HX_STACK_LINE(909)
										::zpp_nape::geom::ZPP_Vec2 tmp20 = shape->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(909)
										tmp20->x = shape->localCOMx;
										HX_STACK_LINE(909)
										::zpp_nape::geom::ZPP_Vec2 tmp21 = shape->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(909)
										tmp21->y = shape->localCOMy;
										HX_STACK_LINE(909)
										{
										}
									}
								}
							}
							HX_STACK_LINE(909)
							{
								HX_STACK_LINE(909)
								::zpp_nape::phys::ZPP_Body _this = shape->body;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(909)
								bool tmp15 = _this->zip_axis;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(909)
								if ((tmp15)){
									HX_STACK_LINE(909)
									_this->zip_axis = false;
									HX_STACK_LINE(909)
									{
										HX_STACK_LINE(909)
										Float tmp16 = _this->rot;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(909)
										Float tmp17 = ::Math_obj::sin(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(909)
										_this->axisx = tmp17;
										HX_STACK_LINE(909)
										Float tmp18 = _this->rot;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(909)
										Float tmp19 = ::Math_obj::cos(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(909)
										_this->axisy = tmp19;
										HX_STACK_LINE(909)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(909)
							{
								HX_STACK_LINE(909)
								Float tmp15 = shape->body->posx;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(909)
								Float tmp16 = shape->body->axisy;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(909)
								Float tmp17 = shape->localCOMx;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(909)
								Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(909)
								Float tmp19 = shape->body->axisx;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(909)
								Float tmp20 = shape->localCOMy;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(909)
								Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(909)
								Float tmp22 = (tmp18 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(909)
								Float tmp23 = (tmp15 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(909)
								shape->worldCOMx = tmp23;
								HX_STACK_LINE(909)
								Float tmp24 = shape->body->posy;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(909)
								Float tmp25 = shape->localCOMx;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(909)
								Float tmp26 = shape->body->axisx;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(909)
								Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(909)
								Float tmp28 = shape->localCOMy;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(909)
								Float tmp29 = shape->body->axisy;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(909)
								Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(909)
								Float tmp31 = (tmp27 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(909)
								Float tmp32 = (tmp24 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(909)
								shape->worldCOMy = tmp32;
							}
						}
					}
				}
				HX_STACK_LINE(910)
				::openfl::_legacy::display::Graphics tmp13 = this->graphics;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(910)
				::nape::util::ShapeDebug tmp14 = this->outer_zn;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(910)
				Float tmp15 = tmp14->thickness;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(910)
				int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(910)
				{
					HX_STACK_LINE(911)
					int col1 = col;		HX_STACK_VAR(col1,"col1");
					HX_STACK_LINE(912)
					int ncol = (int)16711680;		HX_STACK_VAR(ncol,"ncol");
					HX_STACK_LINE(913)
					Float f = ((Float)0.8);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(914)
					int tmp17 = (int(col1) >> int((int)16));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(914)
					int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(914)
					Float tmp19 = f;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(914)
					Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(914)
					int tmp21 = (int(ncol) >> int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(914)
					int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(914)
					Float tmp23 = ((int)1 - f);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(914)
					Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(914)
					Float tmp25 = (tmp20 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(914)
					int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(914)
					int _r = tmp26;		HX_STACK_VAR(_r,"_r");
					HX_STACK_LINE(915)
					int tmp27 = (int(col1) >> int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(915)
					int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(915)
					Float tmp29 = f;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(915)
					Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(915)
					int tmp31 = (int(ncol) >> int((int)8));		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(915)
					int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(915)
					Float tmp33 = ((int)1 - f);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(915)
					Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(915)
					Float tmp35 = (tmp30 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(915)
					int tmp36 = ::Std_obj::_int(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(915)
					int _g = tmp36;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(916)
					int tmp37 = (int(col1) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(916)
					Float tmp38 = f;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(916)
					Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(916)
					int tmp40 = (int(ncol) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(916)
					Float tmp41 = ((int)1 - f);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(916)
					Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(916)
					Float tmp43 = (tmp39 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(916)
					int tmp44 = ::Std_obj::_int(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(916)
					int _b = tmp44;		HX_STACK_VAR(_b,"_b");
					HX_STACK_LINE(917)
					int tmp45 = (int(_r) << int((int)16));		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(917)
					int tmp46 = (int((int)-16777216) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(917)
					int tmp47 = (int(_g) << int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(917)
					int tmp48 = (int(tmp46) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(917)
					int tmp49 = _b;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(917)
					tmp16 = (int(tmp48) | int(tmp49));
				}
				HX_STACK_LINE(910)
				tmp13->lineStyle(tmp15,tmp16,(int)1,null(),null(),null(),null(),null());
				HX_STACK_LINE(920)
				Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
				HX_STACK_LINE(921)
				Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
				HX_STACK_LINE(922)
				bool tmp17 = xnull;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(922)
				if ((tmp17)){
					HX_STACK_LINE(923)
					vx = shape->worldCOMx;
					HX_STACK_LINE(924)
					vy = shape->worldCOMy;
					HX_STACK_LINE(933)
					{
					}
				}
				else{
					HX_STACK_LINE(943)
					Float tmp18 = (xform->a * shape->worldCOMx);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(943)
					Float tmp19 = (xform->b * shape->worldCOMy);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(943)
					Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(943)
					Float tmp21 = xform->tx;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(943)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(943)
					vx = tmp22;
					HX_STACK_LINE(944)
					Float tmp23 = (xform->c * shape->worldCOMx);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(944)
					Float tmp24 = (xform->d * shape->worldCOMy);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(944)
					Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(944)
					Float tmp26 = xform->ty;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(944)
					Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(944)
					vy = tmp27;
				}
				HX_STACK_LINE(946)
				::openfl::_legacy::display::Graphics tmp18 = this->graphics;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(946)
				Float tmp19 = vx;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(946)
				Float tmp20 = vy;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(946)
				tmp18->drawCircle(tmp19,tmp20,(int)1);
				HX_STACK_LINE(947)
				{
					HX_STACK_LINE(947)
					bool tmp21 = shape->zip_aabb;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(947)
					if ((tmp21)){
						HX_STACK_LINE(947)
						bool tmp22 = (shape->body != null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(947)
						if ((tmp22)){
							HX_STACK_LINE(947)
							shape->zip_aabb = false;
							HX_STACK_LINE(947)
							int tmp23 = shape->type;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(947)
							int tmp24 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(947)
							bool tmp25 = (tmp23 == tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(947)
							if ((tmp25)){
								HX_STACK_LINE(947)
								::zpp_nape::shape::ZPP_Circle _this = shape->circle;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(947)
								{
									HX_STACK_LINE(947)
									bool tmp26 = _this->zip_worldCOM;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(947)
									if ((tmp26)){
										HX_STACK_LINE(947)
										bool tmp27 = (_this->body != null());		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(947)
										if ((tmp27)){
											HX_STACK_LINE(947)
											_this->zip_worldCOM = false;
											HX_STACK_LINE(947)
											{
												HX_STACK_LINE(947)
												bool tmp28 = _this->zip_localCOM;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(947)
												if ((tmp28)){
													HX_STACK_LINE(947)
													_this->zip_localCOM = false;
													HX_STACK_LINE(947)
													int tmp29 = _this->type;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(947)
													int tmp30 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(947)
													bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(947)
													if ((tmp31)){
														HX_STACK_LINE(947)
														::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
														HX_STACK_LINE(947)
														::zpp_nape::geom::ZPP_Vec2 tmp32 = _this1->lverts->next;		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(947)
														::zpp_nape::geom::ZPP_Vec2 tmp33 = tmp32->next;		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(947)
														bool tmp34 = (tmp33 == null());		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(947)
														if ((tmp34)){
															HX_STACK_LINE(947)
															::zpp_nape::geom::ZPP_Vec2 tmp35 = _this1->lverts->next;		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(947)
															_this1->localCOMx = tmp35->x;
															HX_STACK_LINE(947)
															::zpp_nape::geom::ZPP_Vec2 tmp36 = _this1->lverts->next;		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(947)
															_this1->localCOMy = tmp36->y;
															HX_STACK_LINE(947)
															Dynamic();
														}
														else{
															HX_STACK_LINE(947)
															::zpp_nape::geom::ZPP_Vec2 tmp35 = _this1->lverts->next;		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(947)
															::zpp_nape::geom::ZPP_Vec2 tmp36 = tmp35->next->next;		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(947)
															bool tmp37 = (tmp36 == null());		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(947)
															if ((tmp37)){
																HX_STACK_LINE(947)
																{
																	HX_STACK_LINE(947)
																	::zpp_nape::geom::ZPP_Vec2 tmp38 = _this1->lverts->next;		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(947)
																	_this1->localCOMx = tmp38->x;
																	HX_STACK_LINE(947)
																	::zpp_nape::geom::ZPP_Vec2 tmp39 = _this1->lverts->next;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(947)
																	_this1->localCOMy = tmp39->y;
																	HX_STACK_LINE(947)
																	{
																	}
																}
																HX_STACK_LINE(947)
																{
																	HX_STACK_LINE(947)
																	Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(947)
																	::zpp_nape::geom::ZPP_Vec2 tmp38 = _this1->lverts->next;		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(947)
																	Float tmp39 = tmp38->next->x;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(947)
																	Float tmp40 = t;		HX_STACK_VAR(tmp40,"tmp40");
																	HX_STACK_LINE(947)
																	Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
																	HX_STACK_LINE(947)
																	hx::AddEq(_this1->localCOMx,tmp41);
																	HX_STACK_LINE(947)
																	::zpp_nape::geom::ZPP_Vec2 tmp42 = _this1->lverts->next;		HX_STACK_VAR(tmp42,"tmp42");
																	HX_STACK_LINE(947)
																	Float tmp43 = tmp42->next->y;		HX_STACK_VAR(tmp43,"tmp43");
																	HX_STACK_LINE(947)
																	Float tmp44 = t;		HX_STACK_VAR(tmp44,"tmp44");
																	HX_STACK_LINE(947)
																	Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
																	HX_STACK_LINE(947)
																	hx::AddEq(_this1->localCOMy,tmp45);
																}
																HX_STACK_LINE(947)
																{
																	HX_STACK_LINE(947)
																	Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(947)
																	hx::MultEq(_this1->localCOMx,t);
																	HX_STACK_LINE(947)
																	hx::MultEq(_this1->localCOMy,t);
																}
															}
															else{
																HX_STACK_LINE(947)
																{
																	HX_STACK_LINE(947)
																	_this1->localCOMx = (int)0;
																	HX_STACK_LINE(947)
																	_this1->localCOMy = (int)0;
																	HX_STACK_LINE(947)
																	{
																	}
																}
																HX_STACK_LINE(947)
																Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
																HX_STACK_LINE(947)
																{
																	HX_STACK_LINE(947)
																	::zpp_nape::geom::ZPP_Vec2 tmp38 = _this1->lverts->next;		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(947)
																	::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp38;		HX_STACK_VAR(cx_ite,"cx_ite");
																	HX_STACK_LINE(947)
																	::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
																	HX_STACK_LINE(947)
																	cx_ite = cx_ite->next;
																	HX_STACK_LINE(947)
																	::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
																	HX_STACK_LINE(947)
																	cx_ite = cx_ite->next;
																	HX_STACK_LINE(947)
																	while((true)){
																		HX_STACK_LINE(947)
																		bool tmp39 = (cx_ite != null());		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(947)
																		bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(947)
																		if ((tmp40)){
																			HX_STACK_LINE(947)
																			break;
																		}
																		HX_STACK_LINE(947)
																		::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																		HX_STACK_LINE(947)
																		{
																			HX_STACK_LINE(947)
																			Float tmp41 = v->x;		HX_STACK_VAR(tmp41,"tmp41");
																			HX_STACK_LINE(947)
																			Float tmp42 = (w->y - u->y);		HX_STACK_VAR(tmp42,"tmp42");
																			HX_STACK_LINE(947)
																			Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
																			HX_STACK_LINE(947)
																			hx::AddEq(area,tmp43);
																			HX_STACK_LINE(947)
																			Float tmp44 = (w->y * v->x);		HX_STACK_VAR(tmp44,"tmp44");
																			HX_STACK_LINE(947)
																			Float tmp45 = (w->x * v->y);		HX_STACK_VAR(tmp45,"tmp45");
																			HX_STACK_LINE(947)
																			Float tmp46 = (tmp44 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
																			HX_STACK_LINE(947)
																			Float cf = tmp46;		HX_STACK_VAR(cf,"cf");
																			HX_STACK_LINE(947)
																			Float tmp47 = (v->x + w->x);		HX_STACK_VAR(tmp47,"tmp47");
																			HX_STACK_LINE(947)
																			Float tmp48 = cf;		HX_STACK_VAR(tmp48,"tmp48");
																			HX_STACK_LINE(947)
																			Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
																			HX_STACK_LINE(947)
																			hx::AddEq(_this1->localCOMx,tmp49);
																			HX_STACK_LINE(947)
																			Float tmp50 = (v->y + w->y);		HX_STACK_VAR(tmp50,"tmp50");
																			HX_STACK_LINE(947)
																			Float tmp51 = cf;		HX_STACK_VAR(tmp51,"tmp51");
																			HX_STACK_LINE(947)
																			Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
																			HX_STACK_LINE(947)
																			hx::AddEq(_this1->localCOMy,tmp52);
																		}
																		HX_STACK_LINE(947)
																		u = v;
																		HX_STACK_LINE(947)
																		v = w;
																		HX_STACK_LINE(947)
																		cx_ite = cx_ite->next;
																	}
																	HX_STACK_LINE(947)
																	::zpp_nape::geom::ZPP_Vec2 tmp39 = _this1->lverts->next;		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(947)
																	cx_ite = tmp39;
																	HX_STACK_LINE(947)
																	::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																	HX_STACK_LINE(947)
																	{
																		HX_STACK_LINE(947)
																		Float tmp40 = v->x;		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(947)
																		Float tmp41 = (w->y - u->y);		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(947)
																		Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(947)
																		hx::AddEq(area,tmp42);
																		HX_STACK_LINE(947)
																		Float tmp43 = (w->y * v->x);		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(947)
																		Float tmp44 = (w->x * v->y);		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(947)
																		Float tmp45 = (tmp43 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
																		HX_STACK_LINE(947)
																		Float cf = tmp45;		HX_STACK_VAR(cf,"cf");
																		HX_STACK_LINE(947)
																		Float tmp46 = (v->x + w->x);		HX_STACK_VAR(tmp46,"tmp46");
																		HX_STACK_LINE(947)
																		Float tmp47 = cf;		HX_STACK_VAR(tmp47,"tmp47");
																		HX_STACK_LINE(947)
																		Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
																		HX_STACK_LINE(947)
																		hx::AddEq(_this1->localCOMx,tmp48);
																		HX_STACK_LINE(947)
																		Float tmp49 = (v->y + w->y);		HX_STACK_VAR(tmp49,"tmp49");
																		HX_STACK_LINE(947)
																		Float tmp50 = cf;		HX_STACK_VAR(tmp50,"tmp50");
																		HX_STACK_LINE(947)
																		Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
																		HX_STACK_LINE(947)
																		hx::AddEq(_this1->localCOMy,tmp51);
																	}
																	HX_STACK_LINE(947)
																	u = v;
																	HX_STACK_LINE(947)
																	v = w;
																	HX_STACK_LINE(947)
																	cx_ite = cx_ite->next;
																	HX_STACK_LINE(947)
																	::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
																	HX_STACK_LINE(947)
																	{
																		HX_STACK_LINE(947)
																		Float tmp40 = v->x;		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(947)
																		Float tmp41 = (w1->y - u->y);		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(947)
																		Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
																		HX_STACK_LINE(947)
																		hx::AddEq(area,tmp42);
																		HX_STACK_LINE(947)
																		Float tmp43 = (w1->y * v->x);		HX_STACK_VAR(tmp43,"tmp43");
																		HX_STACK_LINE(947)
																		Float tmp44 = (w1->x * v->y);		HX_STACK_VAR(tmp44,"tmp44");
																		HX_STACK_LINE(947)
																		Float tmp45 = (tmp43 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
																		HX_STACK_LINE(947)
																		Float cf = tmp45;		HX_STACK_VAR(cf,"cf");
																		HX_STACK_LINE(947)
																		Float tmp46 = (v->x + w1->x);		HX_STACK_VAR(tmp46,"tmp46");
																		HX_STACK_LINE(947)
																		Float tmp47 = cf;		HX_STACK_VAR(tmp47,"tmp47");
																		HX_STACK_LINE(947)
																		Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
																		HX_STACK_LINE(947)
																		hx::AddEq(_this1->localCOMx,tmp48);
																		HX_STACK_LINE(947)
																		Float tmp49 = (v->y + w1->y);		HX_STACK_VAR(tmp49,"tmp49");
																		HX_STACK_LINE(947)
																		Float tmp50 = cf;		HX_STACK_VAR(tmp50,"tmp50");
																		HX_STACK_LINE(947)
																		Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
																		HX_STACK_LINE(947)
																		hx::AddEq(_this1->localCOMy,tmp51);
																	}
																}
																HX_STACK_LINE(947)
																Float tmp38 = ((int)3 * area);		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(947)
																Float tmp39 = (Float((int)1) / Float(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(947)
																area = tmp39;
																HX_STACK_LINE(947)
																{
																	HX_STACK_LINE(947)
																	Float t = area;		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(947)
																	hx::MultEq(_this1->localCOMx,t);
																	HX_STACK_LINE(947)
																	hx::MultEq(_this1->localCOMy,t);
																}
															}
														}
													}
													HX_STACK_LINE(947)
													bool tmp32 = (_this->wrap_localCOM != null());		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(947)
													if ((tmp32)){
														HX_STACK_LINE(947)
														::zpp_nape::geom::ZPP_Vec2 tmp33 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(947)
														tmp33->x = _this->localCOMx;
														HX_STACK_LINE(947)
														::zpp_nape::geom::ZPP_Vec2 tmp34 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(947)
														tmp34->y = _this->localCOMy;
														HX_STACK_LINE(947)
														{
														}
													}
												}
											}
											HX_STACK_LINE(947)
											{
												HX_STACK_LINE(947)
												::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(947)
												bool tmp28 = _this1->zip_axis;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(947)
												if ((tmp28)){
													HX_STACK_LINE(947)
													_this1->zip_axis = false;
													HX_STACK_LINE(947)
													{
														HX_STACK_LINE(947)
														Float tmp29 = _this1->rot;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(947)
														Float tmp30 = ::Math_obj::sin(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(947)
														_this1->axisx = tmp30;
														HX_STACK_LINE(947)
														Float tmp31 = _this1->rot;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(947)
														Float tmp32 = ::Math_obj::cos(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(947)
														_this1->axisy = tmp32;
														HX_STACK_LINE(947)
														Dynamic();
													}
												}
											}
											HX_STACK_LINE(947)
											{
												HX_STACK_LINE(947)
												Float tmp28 = _this->body->posx;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(947)
												Float tmp29 = _this->body->axisy;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(947)
												Float tmp30 = _this->localCOMx;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(947)
												Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(947)
												Float tmp32 = _this->body->axisx;		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(947)
												Float tmp33 = _this->localCOMy;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(947)
												Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(947)
												Float tmp35 = (tmp31 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(947)
												Float tmp36 = (tmp28 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(947)
												_this->worldCOMx = tmp36;
												HX_STACK_LINE(947)
												Float tmp37 = _this->body->posy;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(947)
												Float tmp38 = _this->localCOMx;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(947)
												Float tmp39 = _this->body->axisx;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(947)
												Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(947)
												Float tmp41 = _this->localCOMy;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(947)
												Float tmp42 = _this->body->axisy;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(947)
												Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(947)
												Float tmp44 = (tmp40 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(947)
												Float tmp45 = (tmp37 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(947)
												_this->worldCOMy = tmp45;
											}
										}
									}
								}
								HX_STACK_LINE(947)
								Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
								HX_STACK_LINE(947)
								Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
								HX_STACK_LINE(947)
								{
									HX_STACK_LINE(947)
									Float tmp26 = (_this->worldCOMx - rx);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(947)
									_this->aabb->minx = tmp26;
									HX_STACK_LINE(947)
									Float tmp27 = (_this->worldCOMy - ry);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(947)
									_this->aabb->miny = tmp27;
								}
								HX_STACK_LINE(947)
								{
									HX_STACK_LINE(947)
									Float tmp26 = (_this->worldCOMx + rx);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(947)
									_this->aabb->maxx = tmp26;
									HX_STACK_LINE(947)
									Float tmp27 = (_this->worldCOMy + ry);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(947)
									_this->aabb->maxy = tmp27;
								}
							}
							else{
								HX_STACK_LINE(947)
								::zpp_nape::shape::ZPP_Polygon _this = shape->polygon;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(947)
								{
									HX_STACK_LINE(947)
									bool tmp26 = _this->zip_gverts;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(947)
									if ((tmp26)){
										HX_STACK_LINE(947)
										bool tmp27 = (_this->body != null());		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(947)
										if ((tmp27)){
											HX_STACK_LINE(947)
											_this->zip_gverts = false;
											HX_STACK_LINE(947)
											_this->validate_lverts();
											HX_STACK_LINE(947)
											{
												HX_STACK_LINE(947)
												::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(947)
												bool tmp28 = _this1->zip_axis;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(947)
												if ((tmp28)){
													HX_STACK_LINE(947)
													_this1->zip_axis = false;
													HX_STACK_LINE(947)
													{
														HX_STACK_LINE(947)
														Float tmp29 = _this1->rot;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(947)
														Float tmp30 = ::Math_obj::sin(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(947)
														_this1->axisx = tmp30;
														HX_STACK_LINE(947)
														Float tmp31 = _this1->rot;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(947)
														Float tmp32 = ::Math_obj::cos(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(947)
														_this1->axisy = tmp32;
														HX_STACK_LINE(947)
														Dynamic();
													}
												}
											}
											HX_STACK_LINE(947)
											::zpp_nape::geom::ZPP_Vec2 tmp28 = _this->lverts->next;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(947)
											::zpp_nape::geom::ZPP_Vec2 li = tmp28;		HX_STACK_VAR(li,"li");
											HX_STACK_LINE(947)
											{
												HX_STACK_LINE(947)
												::zpp_nape::geom::ZPP_Vec2 tmp29 = _this->gverts->next;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(947)
												::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp29;		HX_STACK_VAR(cx_ite,"cx_ite");
												HX_STACK_LINE(947)
												while((true)){
													HX_STACK_LINE(947)
													bool tmp30 = (cx_ite != null());		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(947)
													bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(947)
													if ((tmp31)){
														HX_STACK_LINE(947)
														break;
													}
													HX_STACK_LINE(947)
													::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
													HX_STACK_LINE(947)
													{
														HX_STACK_LINE(947)
														::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
														HX_STACK_LINE(947)
														li = li->next;
														HX_STACK_LINE(947)
														{
															HX_STACK_LINE(947)
															Float tmp32 = _this->body->posx;		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(947)
															Float tmp33 = _this->body->axisy;		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(947)
															Float tmp34 = l->x;		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(947)
															Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(947)
															Float tmp36 = _this->body->axisx;		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(947)
															Float tmp37 = l->y;		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(947)
															Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
															HX_STACK_LINE(947)
															Float tmp39 = (tmp35 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
															HX_STACK_LINE(947)
															Float tmp40 = (tmp32 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
															HX_STACK_LINE(947)
															g->x = tmp40;
															HX_STACK_LINE(947)
															Float tmp41 = _this->body->posy;		HX_STACK_VAR(tmp41,"tmp41");
															HX_STACK_LINE(947)
															Float tmp42 = l->x;		HX_STACK_VAR(tmp42,"tmp42");
															HX_STACK_LINE(947)
															Float tmp43 = _this->body->axisx;		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(947)
															Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(947)
															Float tmp45 = l->y;		HX_STACK_VAR(tmp45,"tmp45");
															HX_STACK_LINE(947)
															Float tmp46 = _this->body->axisy;		HX_STACK_VAR(tmp46,"tmp46");
															HX_STACK_LINE(947)
															Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(947)
															Float tmp48 = (tmp44 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(947)
															Float tmp49 = (tmp41 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
															HX_STACK_LINE(947)
															g->y = tmp49;
														}
													}
													HX_STACK_LINE(947)
													cx_ite = cx_ite->next;
												}
											}
										}
									}
								}
								HX_STACK_LINE(947)
								::zpp_nape::geom::ZPP_Vec2 tmp26 = _this->gverts->next;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(947)
								::zpp_nape::geom::ZPP_Vec2 p0 = tmp26;		HX_STACK_VAR(p0,"p0");
								HX_STACK_LINE(947)
								{
									HX_STACK_LINE(947)
									_this->aabb->minx = p0->x;
									HX_STACK_LINE(947)
									_this->aabb->miny = p0->y;
									HX_STACK_LINE(947)
									{
									}
								}
								HX_STACK_LINE(947)
								{
									HX_STACK_LINE(947)
									_this->aabb->maxx = p0->x;
									HX_STACK_LINE(947)
									_this->aabb->maxy = p0->y;
									HX_STACK_LINE(947)
									{
									}
								}
								HX_STACK_LINE(947)
								{
									HX_STACK_LINE(947)
									::zpp_nape::geom::ZPP_Vec2 tmp27 = _this->gverts->next;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(947)
									::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp27->next;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(947)
									while((true)){
										HX_STACK_LINE(947)
										bool tmp28 = (cx_ite != null());		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(947)
										bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(947)
										if ((tmp29)){
											HX_STACK_LINE(947)
											break;
										}
										HX_STACK_LINE(947)
										::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
										HX_STACK_LINE(947)
										{
											HX_STACK_LINE(947)
											Float tmp30 = p->x;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(947)
											Float tmp31 = _this->aabb->minx;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(947)
											bool tmp32 = (tmp30 < tmp31);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(947)
											if ((tmp32)){
												HX_STACK_LINE(947)
												_this->aabb->minx = p->x;
											}
											HX_STACK_LINE(947)
											Float tmp33 = p->x;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(947)
											Float tmp34 = _this->aabb->maxx;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(947)
											bool tmp35 = (tmp33 > tmp34);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(947)
											if ((tmp35)){
												HX_STACK_LINE(947)
												_this->aabb->maxx = p->x;
											}
											HX_STACK_LINE(947)
											Float tmp36 = p->y;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(947)
											Float tmp37 = _this->aabb->miny;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(947)
											bool tmp38 = (tmp36 < tmp37);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(947)
											if ((tmp38)){
												HX_STACK_LINE(947)
												_this->aabb->miny = p->y;
											}
											HX_STACK_LINE(947)
											Float tmp39 = p->y;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(947)
											Float tmp40 = _this->aabb->maxy;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(947)
											bool tmp41 = (tmp39 > tmp40);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(947)
											if ((tmp41)){
												HX_STACK_LINE(947)
												_this->aabb->maxy = p->y;
											}
										}
										HX_STACK_LINE(947)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(948)
				{
					HX_STACK_LINE(949)
					bool tmp21 = xnull;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(949)
					if ((tmp21)){
						HX_STACK_LINE(949)
						::openfl::_legacy::display::Graphics tmp22 = this->graphics;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(949)
						Float tmp23 = shape->aabb->minx;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(949)
						Float tmp24 = shape->aabb->miny;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(949)
						Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(949)
						{
							HX_STACK_LINE(949)
							::zpp_nape::geom::ZPP_AABB _this = shape->aabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(949)
							tmp25 = (_this->maxx - _this->minx);
						}
						HX_STACK_LINE(949)
						Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(949)
						{
							HX_STACK_LINE(949)
							::zpp_nape::geom::ZPP_AABB _this = shape->aabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(949)
							tmp26 = (_this->maxy - _this->miny);
						}
						HX_STACK_LINE(949)
						tmp22->drawRect(tmp23,tmp24,tmp25,tmp26);
					}
					else{
						HX_STACK_LINE(951)
						Float ox = ((Float)0.0);		HX_STACK_VAR(ox,"ox");
						HX_STACK_LINE(952)
						Float oy = ((Float)0.0);		HX_STACK_VAR(oy,"oy");
						HX_STACK_LINE(973)
						{
							HX_STACK_LINE(974)
							Float tmp22 = xform->a;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(974)
							Float tmp23 = shape->aabb->minx;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(974)
							Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(974)
							Float tmp25 = xform->b;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(974)
							Float tmp26 = shape->aabb->miny;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(974)
							Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(974)
							Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(974)
							Float tmp29 = xform->tx;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(974)
							Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(974)
							ox = tmp30;
							HX_STACK_LINE(975)
							Float tmp31 = xform->c;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(975)
							Float tmp32 = shape->aabb->minx;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(975)
							Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(975)
							Float tmp34 = xform->d;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(975)
							Float tmp35 = shape->aabb->miny;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(975)
							Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(975)
							Float tmp37 = (tmp33 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(975)
							Float tmp38 = xform->ty;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(975)
							Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(975)
							oy = tmp39;
						}
						HX_STACK_LINE(977)
						Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(977)
						{
							HX_STACK_LINE(977)
							::zpp_nape::geom::ZPP_AABB _this = shape->aabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(977)
							tmp22 = (_this->maxx - _this->minx);
						}
						HX_STACK_LINE(977)
						Float wx = tmp22;		HX_STACK_VAR(wx,"wx");
						HX_STACK_LINE(978)
						Float wy = (int)0;		HX_STACK_VAR(wy,"wy");
						HX_STACK_LINE(995)
						bool tmp23 = true;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(995)
						if ((tmp23)){
							HX_STACK_LINE(996)
							Float tmp24 = (xform->a * wx);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(996)
							Float tmp25 = (xform->b * wy);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(996)
							Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(996)
							Float t = tmp26;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(997)
							Float tmp27 = (xform->c * wx);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(997)
							Float tmp28 = (xform->d * wy);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(997)
							Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(997)
							wy = tmp29;
							HX_STACK_LINE(998)
							wx = t;
						}
						HX_STACK_LINE(1000)
						Float hx = (int)0;		HX_STACK_VAR(hx,"hx");
						HX_STACK_LINE(1001)
						Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1001)
						{
							HX_STACK_LINE(1001)
							::zpp_nape::geom::ZPP_AABB _this = shape->aabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1001)
							tmp24 = (_this->maxy - _this->miny);
						}
						HX_STACK_LINE(1001)
						Float hy = tmp24;		HX_STACK_VAR(hy,"hy");
						HX_STACK_LINE(1018)
						bool tmp25 = true;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1018)
						if ((tmp25)){
							HX_STACK_LINE(1019)
							Float tmp26 = (xform->a * hx);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1019)
							Float tmp27 = (xform->b * hy);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1019)
							Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1019)
							Float t = tmp28;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(1020)
							Float tmp29 = (xform->c * hx);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1020)
							Float tmp30 = (xform->d * hy);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1020)
							Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1020)
							hy = tmp31;
							HX_STACK_LINE(1021)
							hx = t;
						}
						HX_STACK_LINE(1023)
						::openfl::_legacy::display::Graphics tmp26 = this->graphics;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1023)
						Float tmp27 = ox;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1023)
						Float tmp28 = oy;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1023)
						tmp26->moveTo(tmp27,tmp28);
						HX_STACK_LINE(1024)
						::openfl::_legacy::display::Graphics tmp29 = this->graphics;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1024)
						Float tmp30 = (ox + wx);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1024)
						Float tmp31 = (oy + wy);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1024)
						tmp29->lineTo(tmp30,tmp31);
						HX_STACK_LINE(1025)
						::openfl::_legacy::display::Graphics tmp32 = this->graphics;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1025)
						Float tmp33 = (ox + wx);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1025)
						Float tmp34 = hx;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1025)
						Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1025)
						Float tmp36 = (oy + wy);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1025)
						Float tmp37 = hy;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1025)
						Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1025)
						tmp32->lineTo(tmp35,tmp38);
						HX_STACK_LINE(1026)
						::openfl::_legacy::display::Graphics tmp39 = this->graphics;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1026)
						Float tmp40 = (ox + hx);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(1026)
						Float tmp41 = (oy + hy);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(1026)
						tmp39->lineTo(tmp40,tmp41);
						HX_STACK_LINE(1027)
						::openfl::_legacy::display::Graphics tmp42 = this->graphics;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(1027)
						Float tmp43 = ox;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(1027)
						Float tmp44 = oy;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(1027)
						tmp42->lineTo(tmp43,tmp44);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_ShapeDebug_obj,draw_shape,(void))

Void ZPP_ShapeDebug_obj::draw_arbiter( ::zpp_nape::dynamics::ZPP_Arbiter arb,::zpp_nape::geom::ZPP_Mat23 xform,Float xdet,bool xnull){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_ShapeDebug","draw_arbiter",0x43b84dba,"zpp_nape.util.ZPP_ShapeDebug.draw_arbiter","zpp_nape/util/Debug.hx",1033,0xeecbde16)
		HX_STACK_THIS(this)
		HX_STACK_ARG(arb,"arb")
		HX_STACK_ARG(xform,"xform")
		HX_STACK_ARG(xdet,"xdet")
		HX_STACK_ARG(xnull,"xnull")
		HX_STACK_LINE(1034)
		Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
		HX_STACK_LINE(1035)
		Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
		HX_STACK_LINE(1036)
		::zpp_nape::dynamics::ZPP_Arbiter tmp = arb->outer->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1036)
		int tmp1 = tmp->type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1036)
		int tmp2 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::SENSOR;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1036)
		bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1036)
		if ((tmp3)){
			HX_STACK_LINE(1037)
			::nape::util::Debug tmp4 = this->outer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1037)
			bool tmp5 = tmp4->drawSensorArbiters;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1037)
			if ((tmp5)){
				HX_STACK_LINE(1038)
				::nape::dynamics::Arbiter sarb = arb->outer;		HX_STACK_VAR(sarb,"sarb");
				HX_STACK_LINE(1039)
				::openfl::_legacy::display::Graphics tmp6 = this->graphics;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1039)
				::nape::util::ShapeDebug tmp7 = this->outer_zn;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1039)
				Float tmp8 = tmp7->thickness;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1039)
				int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1039)
				{
					HX_STACK_LINE(1040)
					int col = (int)65280;		HX_STACK_VAR(col,"col");
					HX_STACK_LINE(1041)
					int tmp10 = this->bg_col;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1041)
					int tmp11 = ~(int)(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1041)
					int ncol = tmp11;		HX_STACK_VAR(ncol,"ncol");
					HX_STACK_LINE(1042)
					Float f = ((Float)0.7);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(1043)
					int tmp12 = (int(col) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1043)
					int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1043)
					Float tmp14 = f;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1043)
					Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1043)
					int tmp16 = (int(ncol) >> int((int)16));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1043)
					int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1043)
					Float tmp18 = ((int)1 - f);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1043)
					Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1043)
					Float tmp20 = (tmp15 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1043)
					int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1043)
					int _r = tmp21;		HX_STACK_VAR(_r,"_r");
					HX_STACK_LINE(1044)
					int tmp22 = (int(col) >> int((int)8));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1044)
					int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1044)
					Float tmp24 = f;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1044)
					Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1044)
					int tmp26 = (int(ncol) >> int((int)8));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1044)
					int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1044)
					Float tmp28 = ((int)1 - f);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1044)
					Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1044)
					Float tmp30 = (tmp25 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1044)
					int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1044)
					int _g = tmp31;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1045)
					int tmp32 = (int(col) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1045)
					Float tmp33 = f;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1045)
					Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1045)
					int tmp35 = (int(ncol) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1045)
					Float tmp36 = ((int)1 - f);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(1045)
					Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1045)
					Float tmp38 = (tmp34 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(1045)
					int tmp39 = ::Std_obj::_int(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(1045)
					int _b = tmp39;		HX_STACK_VAR(_b,"_b");
					HX_STACK_LINE(1046)
					int tmp40 = (int(_r) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(1046)
					int tmp41 = (int((int)-16777216) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(1046)
					int tmp42 = (int(_g) << int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(1046)
					int tmp43 = (int(tmp41) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(1046)
					int tmp44 = _b;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(1046)
					tmp9 = (int(tmp43) | int(tmp44));
				}
				HX_STACK_LINE(1039)
				tmp6->lineStyle(tmp8,tmp9,(int)1,null(),null(),null(),null(),null());
				HX_STACK_LINE(1049)
				bool tmp10 = xnull;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1049)
				if ((tmp10)){
					HX_STACK_LINE(1050)
					Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1050)
					{
						HX_STACK_LINE(1050)
						::nape::geom::Vec2 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1050)
						{
							HX_STACK_LINE(1050)
							::zpp_nape::shape::ZPP_Shape tmp13 = sarb->zpp_inner->ws1;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1050)
							int tmp14 = tmp13->id;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1050)
							::zpp_nape::shape::ZPP_Shape tmp15 = sarb->zpp_inner->ws2;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1050)
							int tmp16 = tmp15->id;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1050)
							bool tmp17 = (tmp14 > tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1050)
							::nape::shape::Shape tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1050)
							if ((tmp17)){
								HX_STACK_LINE(1050)
								::zpp_nape::shape::ZPP_Shape tmp19 = sarb->zpp_inner->ws2;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1050)
								tmp18 = tmp19->outer;
							}
							else{
								HX_STACK_LINE(1050)
								::zpp_nape::shape::ZPP_Shape tmp19 = sarb->zpp_inner->ws1;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1050)
								tmp18 = tmp19->outer;
							}
							HX_STACK_LINE(1050)
							::nape::shape::Shape _this = tmp18;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1050)
							::nape::geom::Vec2 tmp19 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1050)
							bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1050)
							if ((tmp20)){
								HX_STACK_LINE(1050)
								::nape::geom::Vec2 tmp21;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1050)
								{
									HX_STACK_LINE(1050)
									Float tmp22 = _this->zpp_inner->worldCOMx;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(1050)
									Float x = tmp22;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1050)
									Float tmp23 = _this->zpp_inner->worldCOMy;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1050)
									Float y = tmp23;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1050)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(1050)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(1050)
									{
										HX_STACK_LINE(1050)
										::nape::geom::Vec2 tmp24 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(1050)
										bool tmp25 = (tmp24 == null());		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1050)
										if ((tmp25)){
											HX_STACK_LINE(1050)
											::nape::geom::Vec2 tmp26 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(1050)
											ret = tmp26;
										}
										else{
											HX_STACK_LINE(1050)
											::nape::geom::Vec2 tmp26 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(1050)
											ret = tmp26;
											HX_STACK_LINE(1050)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
											HX_STACK_LINE(1050)
											ret->zpp_pool = null();
										}
									}
									HX_STACK_LINE(1050)
									bool tmp24 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1050)
									if ((tmp24)){
										HX_STACK_LINE(1050)
										::zpp_nape::geom::ZPP_Vec2 tmp25;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1050)
										{
											HX_STACK_LINE(1050)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(1050)
											::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1050)
											{
												HX_STACK_LINE(1050)
												::zpp_nape::geom::ZPP_Vec2 tmp26 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(1050)
												bool tmp27 = (tmp26 == null());		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(1050)
												if ((tmp27)){
													HX_STACK_LINE(1050)
													::zpp_nape::geom::ZPP_Vec2 tmp28 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(1050)
													ret1 = tmp28;
												}
												else{
													HX_STACK_LINE(1050)
													::zpp_nape::geom::ZPP_Vec2 tmp28 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(1050)
													ret1 = tmp28;
													HX_STACK_LINE(1050)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1050)
													ret1->next = null();
												}
												HX_STACK_LINE(1050)
												ret1->weak = false;
											}
											HX_STACK_LINE(1050)
											ret1->_immutable = immutable;
											HX_STACK_LINE(1050)
											{
												HX_STACK_LINE(1050)
												ret1->x = x;
												HX_STACK_LINE(1050)
												ret1->y = y;
												HX_STACK_LINE(1050)
												{
												}
											}
											HX_STACK_LINE(1050)
											tmp25 = ret1;
										}
										HX_STACK_LINE(1050)
										ret->zpp_inner = tmp25;
										HX_STACK_LINE(1050)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(1050)
										Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1050)
										{
											HX_STACK_LINE(1050)
											{
												HX_STACK_LINE(1050)
												::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1050)
												bool tmp26 = (_this1->_validate != null());		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(1050)
												if ((tmp26)){
													HX_STACK_LINE(1050)
													_this1->_validate();
												}
											}
											HX_STACK_LINE(1050)
											tmp25 = ret->zpp_inner->x;
										}
										HX_STACK_LINE(1050)
										Float tmp26 = x;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1050)
										bool tmp27 = (tmp25 == tmp26);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1050)
										bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1050)
										if ((tmp27)){
											HX_STACK_LINE(1050)
											Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1050)
											{
												HX_STACK_LINE(1050)
												{
													HX_STACK_LINE(1050)
													::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1050)
													bool tmp30 = (_this1->_validate != null());		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(1050)
													bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(1050)
													bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(1050)
													if ((tmp32)){
														HX_STACK_LINE(1050)
														_this1->_validate();
													}
												}
												HX_STACK_LINE(1050)
												Float tmp30 = ret->zpp_inner->y;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1050)
												tmp29 = tmp30;
											}
											HX_STACK_LINE(1050)
											Float tmp30 = y;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1050)
											tmp28 = (tmp29 == tmp30);
										}
										else{
											HX_STACK_LINE(1050)
											tmp28 = false;
										}
										HX_STACK_LINE(1050)
										bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1050)
										if ((tmp29)){
											HX_STACK_LINE(1050)
											{
												HX_STACK_LINE(1050)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(1050)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(1050)
												{
												}
											}
											HX_STACK_LINE(1050)
											{
												HX_STACK_LINE(1050)
												::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1050)
												bool tmp30 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1050)
												if ((tmp30)){
													HX_STACK_LINE(1050)
													::zpp_nape::geom::ZPP_Vec2 tmp31 = _this1;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(1050)
													_this1->_invalidate(tmp31);
												}
											}
										}
										HX_STACK_LINE(1050)
										ret;
									}
									HX_STACK_LINE(1050)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(1050)
									tmp21 = ret;
								}
								HX_STACK_LINE(1050)
								_this->zpp_inner->wrap_worldCOM = tmp21;
								HX_STACK_LINE(1050)
								::nape::geom::Vec2 tmp22 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1050)
								tmp22->zpp_inner->_inuse = true;
								HX_STACK_LINE(1050)
								::nape::geom::Vec2 tmp23 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1050)
								tmp23->zpp_inner->_immutable = true;
								HX_STACK_LINE(1050)
								Dynamic tmp24 = _this->zpp_inner->getworldCOM_dyn();		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1050)
								::nape::geom::Vec2 tmp25 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1050)
								tmp25->zpp_inner->_validate = tmp24;
							}
							HX_STACK_LINE(1050)
							tmp12 = _this->zpp_inner->wrap_worldCOM;
						}
						HX_STACK_LINE(1050)
						::nape::geom::Vec2 _this = tmp12;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1050)
						{
							HX_STACK_LINE(1050)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1050)
							bool tmp13 = (_this1->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1050)
							if ((tmp13)){
								HX_STACK_LINE(1050)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(1050)
						tmp11 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(1050)
					vx = tmp11;
					HX_STACK_LINE(1051)
					Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1051)
					{
						HX_STACK_LINE(1051)
						::nape::geom::Vec2 tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1051)
						{
							HX_STACK_LINE(1051)
							::zpp_nape::shape::ZPP_Shape tmp14 = sarb->zpp_inner->ws1;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1051)
							int tmp15 = tmp14->id;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1051)
							::zpp_nape::shape::ZPP_Shape tmp16 = sarb->zpp_inner->ws2;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1051)
							int tmp17 = tmp16->id;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1051)
							bool tmp18 = (tmp15 > tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1051)
							::nape::shape::Shape tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1051)
							if ((tmp18)){
								HX_STACK_LINE(1051)
								::zpp_nape::shape::ZPP_Shape tmp20 = sarb->zpp_inner->ws2;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1051)
								tmp19 = tmp20->outer;
							}
							else{
								HX_STACK_LINE(1051)
								::zpp_nape::shape::ZPP_Shape tmp20 = sarb->zpp_inner->ws1;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1051)
								tmp19 = tmp20->outer;
							}
							HX_STACK_LINE(1051)
							::nape::shape::Shape _this = tmp19;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1051)
							::nape::geom::Vec2 tmp20 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1051)
							bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1051)
							if ((tmp21)){
								HX_STACK_LINE(1051)
								::nape::geom::Vec2 tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1051)
								{
									HX_STACK_LINE(1051)
									Float tmp23 = _this->zpp_inner->worldCOMx;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1051)
									Float x = tmp23;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1051)
									Float tmp24 = _this->zpp_inner->worldCOMy;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1051)
									Float y = tmp24;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1051)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(1051)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(1051)
									{
										HX_STACK_LINE(1051)
										::nape::geom::Vec2 tmp25 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1051)
										bool tmp26 = (tmp25 == null());		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1051)
										if ((tmp26)){
											HX_STACK_LINE(1051)
											::nape::geom::Vec2 tmp27 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1051)
											ret = tmp27;
										}
										else{
											HX_STACK_LINE(1051)
											::nape::geom::Vec2 tmp27 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1051)
											ret = tmp27;
											HX_STACK_LINE(1051)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
											HX_STACK_LINE(1051)
											ret->zpp_pool = null();
										}
									}
									HX_STACK_LINE(1051)
									bool tmp25 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1051)
									if ((tmp25)){
										HX_STACK_LINE(1051)
										::zpp_nape::geom::ZPP_Vec2 tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1051)
										{
											HX_STACK_LINE(1051)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(1051)
											::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1051)
											{
												HX_STACK_LINE(1051)
												::zpp_nape::geom::ZPP_Vec2 tmp27 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(1051)
												bool tmp28 = (tmp27 == null());		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(1051)
												if ((tmp28)){
													HX_STACK_LINE(1051)
													::zpp_nape::geom::ZPP_Vec2 tmp29 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(1051)
													ret1 = tmp29;
												}
												else{
													HX_STACK_LINE(1051)
													::zpp_nape::geom::ZPP_Vec2 tmp29 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(1051)
													ret1 = tmp29;
													HX_STACK_LINE(1051)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1051)
													ret1->next = null();
												}
												HX_STACK_LINE(1051)
												ret1->weak = false;
											}
											HX_STACK_LINE(1051)
											ret1->_immutable = immutable;
											HX_STACK_LINE(1051)
											{
												HX_STACK_LINE(1051)
												ret1->x = x;
												HX_STACK_LINE(1051)
												ret1->y = y;
												HX_STACK_LINE(1051)
												{
												}
											}
											HX_STACK_LINE(1051)
											tmp26 = ret1;
										}
										HX_STACK_LINE(1051)
										ret->zpp_inner = tmp26;
										HX_STACK_LINE(1051)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(1051)
										Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1051)
										{
											HX_STACK_LINE(1051)
											{
												HX_STACK_LINE(1051)
												::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1051)
												bool tmp27 = (_this1->_validate != null());		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(1051)
												if ((tmp27)){
													HX_STACK_LINE(1051)
													_this1->_validate();
												}
											}
											HX_STACK_LINE(1051)
											tmp26 = ret->zpp_inner->x;
										}
										HX_STACK_LINE(1051)
										Float tmp27 = x;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1051)
										bool tmp28 = (tmp26 == tmp27);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1051)
										bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1051)
										if ((tmp28)){
											HX_STACK_LINE(1051)
											Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1051)
											{
												HX_STACK_LINE(1051)
												{
													HX_STACK_LINE(1051)
													::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1051)
													bool tmp31 = (_this1->_validate != null());		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(1051)
													bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(1051)
													bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(1051)
													if ((tmp33)){
														HX_STACK_LINE(1051)
														_this1->_validate();
													}
												}
												HX_STACK_LINE(1051)
												Float tmp31 = ret->zpp_inner->y;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1051)
												tmp30 = tmp31;
											}
											HX_STACK_LINE(1051)
											Float tmp31 = y;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1051)
											tmp29 = (tmp30 == tmp31);
										}
										else{
											HX_STACK_LINE(1051)
											tmp29 = false;
										}
										HX_STACK_LINE(1051)
										bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1051)
										if ((tmp30)){
											HX_STACK_LINE(1051)
											{
												HX_STACK_LINE(1051)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(1051)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(1051)
												{
												}
											}
											HX_STACK_LINE(1051)
											{
												HX_STACK_LINE(1051)
												::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1051)
												bool tmp31 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1051)
												if ((tmp31)){
													HX_STACK_LINE(1051)
													::zpp_nape::geom::ZPP_Vec2 tmp32 = _this1;		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(1051)
													_this1->_invalidate(tmp32);
												}
											}
										}
										HX_STACK_LINE(1051)
										ret;
									}
									HX_STACK_LINE(1051)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(1051)
									tmp22 = ret;
								}
								HX_STACK_LINE(1051)
								_this->zpp_inner->wrap_worldCOM = tmp22;
								HX_STACK_LINE(1051)
								::nape::geom::Vec2 tmp23 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1051)
								tmp23->zpp_inner->_inuse = true;
								HX_STACK_LINE(1051)
								::nape::geom::Vec2 tmp24 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1051)
								tmp24->zpp_inner->_immutable = true;
								HX_STACK_LINE(1051)
								Dynamic tmp25 = _this->zpp_inner->getworldCOM_dyn();		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1051)
								::nape::geom::Vec2 tmp26 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1051)
								tmp26->zpp_inner->_validate = tmp25;
							}
							HX_STACK_LINE(1051)
							tmp13 = _this->zpp_inner->wrap_worldCOM;
						}
						HX_STACK_LINE(1051)
						::nape::geom::Vec2 _this = tmp13;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1051)
						{
							HX_STACK_LINE(1051)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1051)
							bool tmp14 = (_this1->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1051)
							if ((tmp14)){
								HX_STACK_LINE(1051)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(1051)
						tmp12 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(1051)
					vy = tmp12;
					HX_STACK_LINE(1060)
					{
					}
				}
				else{
					HX_STACK_LINE(1070)
					Float tmp11 = xform->a;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1070)
					Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1070)
					{
						HX_STACK_LINE(1070)
						::nape::geom::Vec2 tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1070)
						{
							HX_STACK_LINE(1070)
							::zpp_nape::shape::ZPP_Shape tmp14 = sarb->zpp_inner->ws1;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1070)
							int tmp15 = tmp14->id;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1070)
							::zpp_nape::shape::ZPP_Shape tmp16 = sarb->zpp_inner->ws2;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1070)
							int tmp17 = tmp16->id;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1070)
							bool tmp18 = (tmp15 > tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1070)
							::nape::shape::Shape tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1070)
							if ((tmp18)){
								HX_STACK_LINE(1070)
								::zpp_nape::shape::ZPP_Shape tmp20 = sarb->zpp_inner->ws2;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1070)
								tmp19 = tmp20->outer;
							}
							else{
								HX_STACK_LINE(1070)
								::zpp_nape::shape::ZPP_Shape tmp20 = sarb->zpp_inner->ws1;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1070)
								tmp19 = tmp20->outer;
							}
							HX_STACK_LINE(1070)
							::nape::shape::Shape _this = tmp19;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1070)
							::nape::geom::Vec2 tmp20 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1070)
							bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1070)
							if ((tmp21)){
								HX_STACK_LINE(1070)
								::nape::geom::Vec2 tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1070)
								{
									HX_STACK_LINE(1070)
									Float tmp23 = _this->zpp_inner->worldCOMx;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1070)
									Float x = tmp23;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1070)
									Float tmp24 = _this->zpp_inner->worldCOMy;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1070)
									Float y = tmp24;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1070)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(1070)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(1070)
									{
										HX_STACK_LINE(1070)
										::nape::geom::Vec2 tmp25 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1070)
										bool tmp26 = (tmp25 == null());		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1070)
										if ((tmp26)){
											HX_STACK_LINE(1070)
											::nape::geom::Vec2 tmp27 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1070)
											ret = tmp27;
										}
										else{
											HX_STACK_LINE(1070)
											::nape::geom::Vec2 tmp27 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1070)
											ret = tmp27;
											HX_STACK_LINE(1070)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
											HX_STACK_LINE(1070)
											ret->zpp_pool = null();
										}
									}
									HX_STACK_LINE(1070)
									bool tmp25 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1070)
									if ((tmp25)){
										HX_STACK_LINE(1070)
										::zpp_nape::geom::ZPP_Vec2 tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1070)
										{
											HX_STACK_LINE(1070)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(1070)
											::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1070)
											{
												HX_STACK_LINE(1070)
												::zpp_nape::geom::ZPP_Vec2 tmp27 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(1070)
												bool tmp28 = (tmp27 == null());		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(1070)
												if ((tmp28)){
													HX_STACK_LINE(1070)
													::zpp_nape::geom::ZPP_Vec2 tmp29 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(1070)
													ret1 = tmp29;
												}
												else{
													HX_STACK_LINE(1070)
													::zpp_nape::geom::ZPP_Vec2 tmp29 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(1070)
													ret1 = tmp29;
													HX_STACK_LINE(1070)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1070)
													ret1->next = null();
												}
												HX_STACK_LINE(1070)
												ret1->weak = false;
											}
											HX_STACK_LINE(1070)
											ret1->_immutable = immutable;
											HX_STACK_LINE(1070)
											{
												HX_STACK_LINE(1070)
												ret1->x = x;
												HX_STACK_LINE(1070)
												ret1->y = y;
												HX_STACK_LINE(1070)
												{
												}
											}
											HX_STACK_LINE(1070)
											tmp26 = ret1;
										}
										HX_STACK_LINE(1070)
										ret->zpp_inner = tmp26;
										HX_STACK_LINE(1070)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(1070)
										Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1070)
										{
											HX_STACK_LINE(1070)
											{
												HX_STACK_LINE(1070)
												::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1070)
												bool tmp27 = (_this1->_validate != null());		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(1070)
												if ((tmp27)){
													HX_STACK_LINE(1070)
													_this1->_validate();
												}
											}
											HX_STACK_LINE(1070)
											tmp26 = ret->zpp_inner->x;
										}
										HX_STACK_LINE(1070)
										Float tmp27 = x;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1070)
										bool tmp28 = (tmp26 == tmp27);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1070)
										bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1070)
										if ((tmp28)){
											HX_STACK_LINE(1070)
											Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1070)
											{
												HX_STACK_LINE(1070)
												{
													HX_STACK_LINE(1070)
													::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1070)
													bool tmp31 = (_this1->_validate != null());		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(1070)
													bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(1070)
													bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(1070)
													if ((tmp33)){
														HX_STACK_LINE(1070)
														_this1->_validate();
													}
												}
												HX_STACK_LINE(1070)
												Float tmp31 = ret->zpp_inner->y;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1070)
												tmp30 = tmp31;
											}
											HX_STACK_LINE(1070)
											Float tmp31 = y;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1070)
											tmp29 = (tmp30 == tmp31);
										}
										else{
											HX_STACK_LINE(1070)
											tmp29 = false;
										}
										HX_STACK_LINE(1070)
										bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1070)
										if ((tmp30)){
											HX_STACK_LINE(1070)
											{
												HX_STACK_LINE(1070)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(1070)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(1070)
												{
												}
											}
											HX_STACK_LINE(1070)
											{
												HX_STACK_LINE(1070)
												::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1070)
												bool tmp31 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1070)
												if ((tmp31)){
													HX_STACK_LINE(1070)
													::zpp_nape::geom::ZPP_Vec2 tmp32 = _this1;		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(1070)
													_this1->_invalidate(tmp32);
												}
											}
										}
										HX_STACK_LINE(1070)
										ret;
									}
									HX_STACK_LINE(1070)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(1070)
									tmp22 = ret;
								}
								HX_STACK_LINE(1070)
								_this->zpp_inner->wrap_worldCOM = tmp22;
								HX_STACK_LINE(1070)
								::nape::geom::Vec2 tmp23 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1070)
								tmp23->zpp_inner->_inuse = true;
								HX_STACK_LINE(1070)
								::nape::geom::Vec2 tmp24 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1070)
								tmp24->zpp_inner->_immutable = true;
								HX_STACK_LINE(1070)
								Dynamic tmp25 = _this->zpp_inner->getworldCOM_dyn();		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1070)
								::nape::geom::Vec2 tmp26 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1070)
								tmp26->zpp_inner->_validate = tmp25;
							}
							HX_STACK_LINE(1070)
							tmp13 = _this->zpp_inner->wrap_worldCOM;
						}
						HX_STACK_LINE(1070)
						::nape::geom::Vec2 _this = tmp13;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1070)
						{
							HX_STACK_LINE(1070)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1070)
							bool tmp14 = (_this1->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1070)
							if ((tmp14)){
								HX_STACK_LINE(1070)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(1070)
						tmp12 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(1070)
					Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1070)
					Float tmp14 = xform->b;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1070)
					Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1070)
					{
						HX_STACK_LINE(1070)
						::nape::geom::Vec2 tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1070)
						{
							HX_STACK_LINE(1070)
							::zpp_nape::shape::ZPP_Shape tmp17 = sarb->zpp_inner->ws1;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1070)
							int tmp18 = tmp17->id;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1070)
							::zpp_nape::shape::ZPP_Shape tmp19 = sarb->zpp_inner->ws2;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1070)
							int tmp20 = tmp19->id;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1070)
							bool tmp21 = (tmp18 > tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1070)
							::nape::shape::Shape tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1070)
							if ((tmp21)){
								HX_STACK_LINE(1070)
								::zpp_nape::shape::ZPP_Shape tmp23 = sarb->zpp_inner->ws2;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1070)
								tmp22 = tmp23->outer;
							}
							else{
								HX_STACK_LINE(1070)
								::zpp_nape::shape::ZPP_Shape tmp23 = sarb->zpp_inner->ws1;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1070)
								tmp22 = tmp23->outer;
							}
							HX_STACK_LINE(1070)
							::nape::shape::Shape _this = tmp22;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1070)
							::nape::geom::Vec2 tmp23 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1070)
							bool tmp24 = (tmp23 == null());		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1070)
							if ((tmp24)){
								HX_STACK_LINE(1070)
								::nape::geom::Vec2 tmp25;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1070)
								{
									HX_STACK_LINE(1070)
									Float tmp26 = _this->zpp_inner->worldCOMx;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1070)
									Float x = tmp26;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1070)
									Float tmp27 = _this->zpp_inner->worldCOMy;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1070)
									Float y = tmp27;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1070)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(1070)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(1070)
									{
										HX_STACK_LINE(1070)
										::nape::geom::Vec2 tmp28 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1070)
										bool tmp29 = (tmp28 == null());		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1070)
										if ((tmp29)){
											HX_STACK_LINE(1070)
											::nape::geom::Vec2 tmp30 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1070)
											ret = tmp30;
										}
										else{
											HX_STACK_LINE(1070)
											::nape::geom::Vec2 tmp30 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1070)
											ret = tmp30;
											HX_STACK_LINE(1070)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
											HX_STACK_LINE(1070)
											ret->zpp_pool = null();
										}
									}
									HX_STACK_LINE(1070)
									bool tmp28 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(1070)
									if ((tmp28)){
										HX_STACK_LINE(1070)
										::zpp_nape::geom::ZPP_Vec2 tmp29;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1070)
										{
											HX_STACK_LINE(1070)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(1070)
											::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1070)
											{
												HX_STACK_LINE(1070)
												::zpp_nape::geom::ZPP_Vec2 tmp30 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1070)
												bool tmp31 = (tmp30 == null());		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1070)
												if ((tmp31)){
													HX_STACK_LINE(1070)
													::zpp_nape::geom::ZPP_Vec2 tmp32 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(1070)
													ret1 = tmp32;
												}
												else{
													HX_STACK_LINE(1070)
													::zpp_nape::geom::ZPP_Vec2 tmp32 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(1070)
													ret1 = tmp32;
													HX_STACK_LINE(1070)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1070)
													ret1->next = null();
												}
												HX_STACK_LINE(1070)
												ret1->weak = false;
											}
											HX_STACK_LINE(1070)
											ret1->_immutable = immutable;
											HX_STACK_LINE(1070)
											{
												HX_STACK_LINE(1070)
												ret1->x = x;
												HX_STACK_LINE(1070)
												ret1->y = y;
												HX_STACK_LINE(1070)
												{
												}
											}
											HX_STACK_LINE(1070)
											tmp29 = ret1;
										}
										HX_STACK_LINE(1070)
										ret->zpp_inner = tmp29;
										HX_STACK_LINE(1070)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(1070)
										Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1070)
										{
											HX_STACK_LINE(1070)
											{
												HX_STACK_LINE(1070)
												::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1070)
												bool tmp30 = (_this1->_validate != null());		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1070)
												if ((tmp30)){
													HX_STACK_LINE(1070)
													_this1->_validate();
												}
											}
											HX_STACK_LINE(1070)
											tmp29 = ret->zpp_inner->x;
										}
										HX_STACK_LINE(1070)
										Float tmp30 = x;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1070)
										bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(1070)
										bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(1070)
										if ((tmp31)){
											HX_STACK_LINE(1070)
											Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(1070)
											{
												HX_STACK_LINE(1070)
												{
													HX_STACK_LINE(1070)
													::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1070)
													bool tmp34 = (_this1->_validate != null());		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(1070)
													bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(1070)
													bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1070)
													if ((tmp36)){
														HX_STACK_LINE(1070)
														_this1->_validate();
													}
												}
												HX_STACK_LINE(1070)
												Float tmp34 = ret->zpp_inner->y;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1070)
												tmp33 = tmp34;
											}
											HX_STACK_LINE(1070)
											Float tmp34 = y;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1070)
											tmp32 = (tmp33 == tmp34);
										}
										else{
											HX_STACK_LINE(1070)
											tmp32 = false;
										}
										HX_STACK_LINE(1070)
										bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1070)
										if ((tmp33)){
											HX_STACK_LINE(1070)
											{
												HX_STACK_LINE(1070)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(1070)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(1070)
												{
												}
											}
											HX_STACK_LINE(1070)
											{
												HX_STACK_LINE(1070)
												::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1070)
												bool tmp34 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1070)
												if ((tmp34)){
													HX_STACK_LINE(1070)
													::zpp_nape::geom::ZPP_Vec2 tmp35 = _this1;		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(1070)
													_this1->_invalidate(tmp35);
												}
											}
										}
										HX_STACK_LINE(1070)
										ret;
									}
									HX_STACK_LINE(1070)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(1070)
									tmp25 = ret;
								}
								HX_STACK_LINE(1070)
								_this->zpp_inner->wrap_worldCOM = tmp25;
								HX_STACK_LINE(1070)
								::nape::geom::Vec2 tmp26 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1070)
								tmp26->zpp_inner->_inuse = true;
								HX_STACK_LINE(1070)
								::nape::geom::Vec2 tmp27 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1070)
								tmp27->zpp_inner->_immutable = true;
								HX_STACK_LINE(1070)
								Dynamic tmp28 = _this->zpp_inner->getworldCOM_dyn();		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1070)
								::nape::geom::Vec2 tmp29 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1070)
								tmp29->zpp_inner->_validate = tmp28;
							}
							HX_STACK_LINE(1070)
							tmp16 = _this->zpp_inner->wrap_worldCOM;
						}
						HX_STACK_LINE(1070)
						::nape::geom::Vec2 _this = tmp16;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1070)
						{
							HX_STACK_LINE(1070)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1070)
							bool tmp17 = (_this1->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1070)
							if ((tmp17)){
								HX_STACK_LINE(1070)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(1070)
						tmp15 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(1070)
					Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1070)
					Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1070)
					Float tmp18 = xform->tx;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1070)
					Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1070)
					vx = tmp19;
					HX_STACK_LINE(1071)
					Float tmp20 = xform->c;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1071)
					Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1071)
					{
						HX_STACK_LINE(1071)
						::nape::geom::Vec2 tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1071)
						{
							HX_STACK_LINE(1071)
							::zpp_nape::shape::ZPP_Shape tmp23 = sarb->zpp_inner->ws1;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1071)
							int tmp24 = tmp23->id;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1071)
							::zpp_nape::shape::ZPP_Shape tmp25 = sarb->zpp_inner->ws2;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1071)
							int tmp26 = tmp25->id;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1071)
							bool tmp27 = (tmp24 > tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1071)
							::nape::shape::Shape tmp28;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1071)
							if ((tmp27)){
								HX_STACK_LINE(1071)
								::zpp_nape::shape::ZPP_Shape tmp29 = sarb->zpp_inner->ws2;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1071)
								tmp28 = tmp29->outer;
							}
							else{
								HX_STACK_LINE(1071)
								::zpp_nape::shape::ZPP_Shape tmp29 = sarb->zpp_inner->ws1;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1071)
								tmp28 = tmp29->outer;
							}
							HX_STACK_LINE(1071)
							::nape::shape::Shape _this = tmp28;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1071)
							::nape::geom::Vec2 tmp29 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1071)
							bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1071)
							if ((tmp30)){
								HX_STACK_LINE(1071)
								::nape::geom::Vec2 tmp31;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1071)
								{
									HX_STACK_LINE(1071)
									Float tmp32 = _this->zpp_inner->worldCOMx;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(1071)
									Float x = tmp32;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1071)
									Float tmp33 = _this->zpp_inner->worldCOMy;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(1071)
									Float y = tmp33;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1071)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(1071)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(1071)
									{
										HX_STACK_LINE(1071)
										::nape::geom::Vec2 tmp34 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(1071)
										bool tmp35 = (tmp34 == null());		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(1071)
										if ((tmp35)){
											HX_STACK_LINE(1071)
											::nape::geom::Vec2 tmp36 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(1071)
											ret = tmp36;
										}
										else{
											HX_STACK_LINE(1071)
											::nape::geom::Vec2 tmp36 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(1071)
											ret = tmp36;
											HX_STACK_LINE(1071)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
											HX_STACK_LINE(1071)
											ret->zpp_pool = null();
										}
									}
									HX_STACK_LINE(1071)
									bool tmp34 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(1071)
									if ((tmp34)){
										HX_STACK_LINE(1071)
										::zpp_nape::geom::ZPP_Vec2 tmp35;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(1071)
										{
											HX_STACK_LINE(1071)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(1071)
											::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1071)
											{
												HX_STACK_LINE(1071)
												::zpp_nape::geom::ZPP_Vec2 tmp36 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(1071)
												bool tmp37 = (tmp36 == null());		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(1071)
												if ((tmp37)){
													HX_STACK_LINE(1071)
													::zpp_nape::geom::ZPP_Vec2 tmp38 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(1071)
													ret1 = tmp38;
												}
												else{
													HX_STACK_LINE(1071)
													::zpp_nape::geom::ZPP_Vec2 tmp38 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(1071)
													ret1 = tmp38;
													HX_STACK_LINE(1071)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1071)
													ret1->next = null();
												}
												HX_STACK_LINE(1071)
												ret1->weak = false;
											}
											HX_STACK_LINE(1071)
											ret1->_immutable = immutable;
											HX_STACK_LINE(1071)
											{
												HX_STACK_LINE(1071)
												ret1->x = x;
												HX_STACK_LINE(1071)
												ret1->y = y;
												HX_STACK_LINE(1071)
												{
												}
											}
											HX_STACK_LINE(1071)
											tmp35 = ret1;
										}
										HX_STACK_LINE(1071)
										ret->zpp_inner = tmp35;
										HX_STACK_LINE(1071)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(1071)
										Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(1071)
										{
											HX_STACK_LINE(1071)
											{
												HX_STACK_LINE(1071)
												::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1071)
												bool tmp36 = (_this1->_validate != null());		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(1071)
												if ((tmp36)){
													HX_STACK_LINE(1071)
													_this1->_validate();
												}
											}
											HX_STACK_LINE(1071)
											tmp35 = ret->zpp_inner->x;
										}
										HX_STACK_LINE(1071)
										Float tmp36 = x;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(1071)
										bool tmp37 = (tmp35 == tmp36);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(1071)
										bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(1071)
										if ((tmp37)){
											HX_STACK_LINE(1071)
											Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1071)
											{
												HX_STACK_LINE(1071)
												{
													HX_STACK_LINE(1071)
													::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1071)
													bool tmp40 = (_this1->_validate != null());		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(1071)
													bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(1071)
													bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(1071)
													if ((tmp42)){
														HX_STACK_LINE(1071)
														_this1->_validate();
													}
												}
												HX_STACK_LINE(1071)
												Float tmp40 = ret->zpp_inner->y;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(1071)
												tmp39 = tmp40;
											}
											HX_STACK_LINE(1071)
											Float tmp40 = y;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(1071)
											tmp38 = (tmp39 == tmp40);
										}
										else{
											HX_STACK_LINE(1071)
											tmp38 = false;
										}
										HX_STACK_LINE(1071)
										bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(1071)
										if ((tmp39)){
											HX_STACK_LINE(1071)
											{
												HX_STACK_LINE(1071)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(1071)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(1071)
												{
												}
											}
											HX_STACK_LINE(1071)
											{
												HX_STACK_LINE(1071)
												::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1071)
												bool tmp40 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(1071)
												if ((tmp40)){
													HX_STACK_LINE(1071)
													::zpp_nape::geom::ZPP_Vec2 tmp41 = _this1;		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(1071)
													_this1->_invalidate(tmp41);
												}
											}
										}
										HX_STACK_LINE(1071)
										ret;
									}
									HX_STACK_LINE(1071)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(1071)
									tmp31 = ret;
								}
								HX_STACK_LINE(1071)
								_this->zpp_inner->wrap_worldCOM = tmp31;
								HX_STACK_LINE(1071)
								::nape::geom::Vec2 tmp32 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1071)
								tmp32->zpp_inner->_inuse = true;
								HX_STACK_LINE(1071)
								::nape::geom::Vec2 tmp33 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1071)
								tmp33->zpp_inner->_immutable = true;
								HX_STACK_LINE(1071)
								Dynamic tmp34 = _this->zpp_inner->getworldCOM_dyn();		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1071)
								::nape::geom::Vec2 tmp35 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1071)
								tmp35->zpp_inner->_validate = tmp34;
							}
							HX_STACK_LINE(1071)
							tmp22 = _this->zpp_inner->wrap_worldCOM;
						}
						HX_STACK_LINE(1071)
						::nape::geom::Vec2 _this = tmp22;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1071)
						{
							HX_STACK_LINE(1071)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1071)
							bool tmp23 = (_this1->_validate != null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1071)
							if ((tmp23)){
								HX_STACK_LINE(1071)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(1071)
						tmp21 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(1071)
					Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1071)
					Float tmp23 = xform->d;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1071)
					Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1071)
					{
						HX_STACK_LINE(1071)
						::nape::geom::Vec2 tmp25;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1071)
						{
							HX_STACK_LINE(1071)
							::zpp_nape::shape::ZPP_Shape tmp26 = sarb->zpp_inner->ws1;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1071)
							int tmp27 = tmp26->id;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1071)
							::zpp_nape::shape::ZPP_Shape tmp28 = sarb->zpp_inner->ws2;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1071)
							int tmp29 = tmp28->id;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1071)
							bool tmp30 = (tmp27 > tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1071)
							::nape::shape::Shape tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1071)
							if ((tmp30)){
								HX_STACK_LINE(1071)
								::zpp_nape::shape::ZPP_Shape tmp32 = sarb->zpp_inner->ws2;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1071)
								tmp31 = tmp32->outer;
							}
							else{
								HX_STACK_LINE(1071)
								::zpp_nape::shape::ZPP_Shape tmp32 = sarb->zpp_inner->ws1;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1071)
								tmp31 = tmp32->outer;
							}
							HX_STACK_LINE(1071)
							::nape::shape::Shape _this = tmp31;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1071)
							::nape::geom::Vec2 tmp32 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1071)
							bool tmp33 = (tmp32 == null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1071)
							if ((tmp33)){
								HX_STACK_LINE(1071)
								::nape::geom::Vec2 tmp34;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1071)
								{
									HX_STACK_LINE(1071)
									Float tmp35 = _this->zpp_inner->worldCOMx;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(1071)
									Float x = tmp35;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1071)
									Float tmp36 = _this->zpp_inner->worldCOMy;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1071)
									Float y = tmp36;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1071)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(1071)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(1071)
									{
										HX_STACK_LINE(1071)
										::nape::geom::Vec2 tmp37 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(1071)
										bool tmp38 = (tmp37 == null());		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(1071)
										if ((tmp38)){
											HX_STACK_LINE(1071)
											::nape::geom::Vec2 tmp39 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1071)
											ret = tmp39;
										}
										else{
											HX_STACK_LINE(1071)
											::nape::geom::Vec2 tmp39 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1071)
											ret = tmp39;
											HX_STACK_LINE(1071)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
											HX_STACK_LINE(1071)
											ret->zpp_pool = null();
										}
									}
									HX_STACK_LINE(1071)
									bool tmp37 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1071)
									if ((tmp37)){
										HX_STACK_LINE(1071)
										::zpp_nape::geom::ZPP_Vec2 tmp38;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(1071)
										{
											HX_STACK_LINE(1071)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(1071)
											::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1071)
											{
												HX_STACK_LINE(1071)
												::zpp_nape::geom::ZPP_Vec2 tmp39 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(1071)
												bool tmp40 = (tmp39 == null());		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(1071)
												if ((tmp40)){
													HX_STACK_LINE(1071)
													::zpp_nape::geom::ZPP_Vec2 tmp41 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(1071)
													ret1 = tmp41;
												}
												else{
													HX_STACK_LINE(1071)
													::zpp_nape::geom::ZPP_Vec2 tmp41 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(1071)
													ret1 = tmp41;
													HX_STACK_LINE(1071)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1071)
													ret1->next = null();
												}
												HX_STACK_LINE(1071)
												ret1->weak = false;
											}
											HX_STACK_LINE(1071)
											ret1->_immutable = immutable;
											HX_STACK_LINE(1071)
											{
												HX_STACK_LINE(1071)
												ret1->x = x;
												HX_STACK_LINE(1071)
												ret1->y = y;
												HX_STACK_LINE(1071)
												{
												}
											}
											HX_STACK_LINE(1071)
											tmp38 = ret1;
										}
										HX_STACK_LINE(1071)
										ret->zpp_inner = tmp38;
										HX_STACK_LINE(1071)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(1071)
										Float tmp38;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(1071)
										{
											HX_STACK_LINE(1071)
											{
												HX_STACK_LINE(1071)
												::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1071)
												bool tmp39 = (_this1->_validate != null());		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(1071)
												if ((tmp39)){
													HX_STACK_LINE(1071)
													_this1->_validate();
												}
											}
											HX_STACK_LINE(1071)
											tmp38 = ret->zpp_inner->x;
										}
										HX_STACK_LINE(1071)
										Float tmp39 = x;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(1071)
										bool tmp40 = (tmp38 == tmp39);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(1071)
										bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(1071)
										if ((tmp40)){
											HX_STACK_LINE(1071)
											Float tmp42;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(1071)
											{
												HX_STACK_LINE(1071)
												{
													HX_STACK_LINE(1071)
													::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1071)
													bool tmp43 = (_this1->_validate != null());		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(1071)
													bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(1071)
													bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(1071)
													if ((tmp45)){
														HX_STACK_LINE(1071)
														_this1->_validate();
													}
												}
												HX_STACK_LINE(1071)
												Float tmp43 = ret->zpp_inner->y;		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(1071)
												tmp42 = tmp43;
											}
											HX_STACK_LINE(1071)
											Float tmp43 = y;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(1071)
											tmp41 = (tmp42 == tmp43);
										}
										else{
											HX_STACK_LINE(1071)
											tmp41 = false;
										}
										HX_STACK_LINE(1071)
										bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(1071)
										if ((tmp42)){
											HX_STACK_LINE(1071)
											{
												HX_STACK_LINE(1071)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(1071)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(1071)
												{
												}
											}
											HX_STACK_LINE(1071)
											{
												HX_STACK_LINE(1071)
												::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1071)
												bool tmp43 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(1071)
												if ((tmp43)){
													HX_STACK_LINE(1071)
													::zpp_nape::geom::ZPP_Vec2 tmp44 = _this1;		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(1071)
													_this1->_invalidate(tmp44);
												}
											}
										}
										HX_STACK_LINE(1071)
										ret;
									}
									HX_STACK_LINE(1071)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(1071)
									tmp34 = ret;
								}
								HX_STACK_LINE(1071)
								_this->zpp_inner->wrap_worldCOM = tmp34;
								HX_STACK_LINE(1071)
								::nape::geom::Vec2 tmp35 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1071)
								tmp35->zpp_inner->_inuse = true;
								HX_STACK_LINE(1071)
								::nape::geom::Vec2 tmp36 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1071)
								tmp36->zpp_inner->_immutable = true;
								HX_STACK_LINE(1071)
								Dynamic tmp37 = _this->zpp_inner->getworldCOM_dyn();		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1071)
								::nape::geom::Vec2 tmp38 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(1071)
								tmp38->zpp_inner->_validate = tmp37;
							}
							HX_STACK_LINE(1071)
							tmp25 = _this->zpp_inner->wrap_worldCOM;
						}
						HX_STACK_LINE(1071)
						::nape::geom::Vec2 _this = tmp25;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1071)
						{
							HX_STACK_LINE(1071)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1071)
							bool tmp26 = (_this1->_validate != null());		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1071)
							if ((tmp26)){
								HX_STACK_LINE(1071)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(1071)
						tmp24 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(1071)
					Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1071)
					Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1071)
					Float tmp27 = xform->ty;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1071)
					Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1071)
					vy = tmp28;
				}
				HX_STACK_LINE(1073)
				::openfl::_legacy::display::Graphics tmp11 = this->graphics;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1073)
				Float tmp12 = vx;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1073)
				Float tmp13 = vy;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1073)
				tmp11->moveTo(tmp12,tmp13);
				HX_STACK_LINE(1074)
				bool tmp14 = xnull;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1074)
				if ((tmp14)){
					HX_STACK_LINE(1075)
					Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1075)
					{
						HX_STACK_LINE(1075)
						::nape::geom::Vec2 tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1075)
						{
							HX_STACK_LINE(1075)
							::zpp_nape::shape::ZPP_Shape tmp17 = sarb->zpp_inner->ws1;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1075)
							int tmp18 = tmp17->id;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1075)
							::zpp_nape::shape::ZPP_Shape tmp19 = sarb->zpp_inner->ws2;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1075)
							int tmp20 = tmp19->id;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1075)
							bool tmp21 = (tmp18 > tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1075)
							::nape::shape::Shape tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1075)
							if ((tmp21)){
								HX_STACK_LINE(1075)
								::zpp_nape::shape::ZPP_Shape tmp23 = sarb->zpp_inner->ws1;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1075)
								tmp22 = tmp23->outer;
							}
							else{
								HX_STACK_LINE(1075)
								::zpp_nape::shape::ZPP_Shape tmp23 = sarb->zpp_inner->ws2;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1075)
								tmp22 = tmp23->outer;
							}
							HX_STACK_LINE(1075)
							::nape::shape::Shape _this = tmp22;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1075)
							::nape::geom::Vec2 tmp23 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1075)
							bool tmp24 = (tmp23 == null());		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1075)
							if ((tmp24)){
								HX_STACK_LINE(1075)
								::nape::geom::Vec2 tmp25;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1075)
								{
									HX_STACK_LINE(1075)
									Float tmp26 = _this->zpp_inner->worldCOMx;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1075)
									Float x = tmp26;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1075)
									Float tmp27 = _this->zpp_inner->worldCOMy;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1075)
									Float y = tmp27;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1075)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(1075)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(1075)
									{
										HX_STACK_LINE(1075)
										::nape::geom::Vec2 tmp28 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1075)
										bool tmp29 = (tmp28 == null());		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1075)
										if ((tmp29)){
											HX_STACK_LINE(1075)
											::nape::geom::Vec2 tmp30 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1075)
											ret = tmp30;
										}
										else{
											HX_STACK_LINE(1075)
											::nape::geom::Vec2 tmp30 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1075)
											ret = tmp30;
											HX_STACK_LINE(1075)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
											HX_STACK_LINE(1075)
											ret->zpp_pool = null();
										}
									}
									HX_STACK_LINE(1075)
									bool tmp28 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(1075)
									if ((tmp28)){
										HX_STACK_LINE(1075)
										::zpp_nape::geom::ZPP_Vec2 tmp29;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1075)
										{
											HX_STACK_LINE(1075)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(1075)
											::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1075)
											{
												HX_STACK_LINE(1075)
												::zpp_nape::geom::ZPP_Vec2 tmp30 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1075)
												bool tmp31 = (tmp30 == null());		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1075)
												if ((tmp31)){
													HX_STACK_LINE(1075)
													::zpp_nape::geom::ZPP_Vec2 tmp32 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(1075)
													ret1 = tmp32;
												}
												else{
													HX_STACK_LINE(1075)
													::zpp_nape::geom::ZPP_Vec2 tmp32 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(1075)
													ret1 = tmp32;
													HX_STACK_LINE(1075)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1075)
													ret1->next = null();
												}
												HX_STACK_LINE(1075)
												ret1->weak = false;
											}
											HX_STACK_LINE(1075)
											ret1->_immutable = immutable;
											HX_STACK_LINE(1075)
											{
												HX_STACK_LINE(1075)
												ret1->x = x;
												HX_STACK_LINE(1075)
												ret1->y = y;
												HX_STACK_LINE(1075)
												{
												}
											}
											HX_STACK_LINE(1075)
											tmp29 = ret1;
										}
										HX_STACK_LINE(1075)
										ret->zpp_inner = tmp29;
										HX_STACK_LINE(1075)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(1075)
										Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1075)
										{
											HX_STACK_LINE(1075)
											{
												HX_STACK_LINE(1075)
												::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1075)
												bool tmp30 = (_this1->_validate != null());		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1075)
												if ((tmp30)){
													HX_STACK_LINE(1075)
													_this1->_validate();
												}
											}
											HX_STACK_LINE(1075)
											tmp29 = ret->zpp_inner->x;
										}
										HX_STACK_LINE(1075)
										Float tmp30 = x;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1075)
										bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(1075)
										bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(1075)
										if ((tmp31)){
											HX_STACK_LINE(1075)
											Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(1075)
											{
												HX_STACK_LINE(1075)
												{
													HX_STACK_LINE(1075)
													::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1075)
													bool tmp34 = (_this1->_validate != null());		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(1075)
													bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(1075)
													bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1075)
													if ((tmp36)){
														HX_STACK_LINE(1075)
														_this1->_validate();
													}
												}
												HX_STACK_LINE(1075)
												Float tmp34 = ret->zpp_inner->y;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1075)
												tmp33 = tmp34;
											}
											HX_STACK_LINE(1075)
											Float tmp34 = y;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1075)
											tmp32 = (tmp33 == tmp34);
										}
										else{
											HX_STACK_LINE(1075)
											tmp32 = false;
										}
										HX_STACK_LINE(1075)
										bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1075)
										if ((tmp33)){
											HX_STACK_LINE(1075)
											{
												HX_STACK_LINE(1075)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(1075)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(1075)
												{
												}
											}
											HX_STACK_LINE(1075)
											{
												HX_STACK_LINE(1075)
												::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1075)
												bool tmp34 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1075)
												if ((tmp34)){
													HX_STACK_LINE(1075)
													::zpp_nape::geom::ZPP_Vec2 tmp35 = _this1;		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(1075)
													_this1->_invalidate(tmp35);
												}
											}
										}
										HX_STACK_LINE(1075)
										ret;
									}
									HX_STACK_LINE(1075)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(1075)
									tmp25 = ret;
								}
								HX_STACK_LINE(1075)
								_this->zpp_inner->wrap_worldCOM = tmp25;
								HX_STACK_LINE(1075)
								::nape::geom::Vec2 tmp26 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1075)
								tmp26->zpp_inner->_inuse = true;
								HX_STACK_LINE(1075)
								::nape::geom::Vec2 tmp27 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1075)
								tmp27->zpp_inner->_immutable = true;
								HX_STACK_LINE(1075)
								Dynamic tmp28 = _this->zpp_inner->getworldCOM_dyn();		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1075)
								::nape::geom::Vec2 tmp29 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1075)
								tmp29->zpp_inner->_validate = tmp28;
							}
							HX_STACK_LINE(1075)
							tmp16 = _this->zpp_inner->wrap_worldCOM;
						}
						HX_STACK_LINE(1075)
						::nape::geom::Vec2 _this = tmp16;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1075)
						{
							HX_STACK_LINE(1075)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1075)
							bool tmp17 = (_this1->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1075)
							if ((tmp17)){
								HX_STACK_LINE(1075)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(1075)
						tmp15 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(1075)
					vx = tmp15;
					HX_STACK_LINE(1076)
					Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1076)
					{
						HX_STACK_LINE(1076)
						::nape::geom::Vec2 tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1076)
						{
							HX_STACK_LINE(1076)
							::zpp_nape::shape::ZPP_Shape tmp18 = sarb->zpp_inner->ws1;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1076)
							int tmp19 = tmp18->id;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1076)
							::zpp_nape::shape::ZPP_Shape tmp20 = sarb->zpp_inner->ws2;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1076)
							int tmp21 = tmp20->id;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1076)
							bool tmp22 = (tmp19 > tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1076)
							::nape::shape::Shape tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1076)
							if ((tmp22)){
								HX_STACK_LINE(1076)
								::zpp_nape::shape::ZPP_Shape tmp24 = sarb->zpp_inner->ws1;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1076)
								tmp23 = tmp24->outer;
							}
							else{
								HX_STACK_LINE(1076)
								::zpp_nape::shape::ZPP_Shape tmp24 = sarb->zpp_inner->ws2;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1076)
								tmp23 = tmp24->outer;
							}
							HX_STACK_LINE(1076)
							::nape::shape::Shape _this = tmp23;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1076)
							::nape::geom::Vec2 tmp24 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1076)
							bool tmp25 = (tmp24 == null());		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1076)
							if ((tmp25)){
								HX_STACK_LINE(1076)
								::nape::geom::Vec2 tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1076)
								{
									HX_STACK_LINE(1076)
									Float tmp27 = _this->zpp_inner->worldCOMx;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1076)
									Float x = tmp27;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1076)
									Float tmp28 = _this->zpp_inner->worldCOMy;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(1076)
									Float y = tmp28;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1076)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(1076)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(1076)
									{
										HX_STACK_LINE(1076)
										::nape::geom::Vec2 tmp29 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1076)
										bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1076)
										if ((tmp30)){
											HX_STACK_LINE(1076)
											::nape::geom::Vec2 tmp31 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1076)
											ret = tmp31;
										}
										else{
											HX_STACK_LINE(1076)
											::nape::geom::Vec2 tmp31 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1076)
											ret = tmp31;
											HX_STACK_LINE(1076)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
											HX_STACK_LINE(1076)
											ret->zpp_pool = null();
										}
									}
									HX_STACK_LINE(1076)
									bool tmp29 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1076)
									if ((tmp29)){
										HX_STACK_LINE(1076)
										::zpp_nape::geom::ZPP_Vec2 tmp30;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1076)
										{
											HX_STACK_LINE(1076)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(1076)
											::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1076)
											{
												HX_STACK_LINE(1076)
												::zpp_nape::geom::ZPP_Vec2 tmp31 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1076)
												bool tmp32 = (tmp31 == null());		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(1076)
												if ((tmp32)){
													HX_STACK_LINE(1076)
													::zpp_nape::geom::ZPP_Vec2 tmp33 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(1076)
													ret1 = tmp33;
												}
												else{
													HX_STACK_LINE(1076)
													::zpp_nape::geom::ZPP_Vec2 tmp33 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(1076)
													ret1 = tmp33;
													HX_STACK_LINE(1076)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1076)
													ret1->next = null();
												}
												HX_STACK_LINE(1076)
												ret1->weak = false;
											}
											HX_STACK_LINE(1076)
											ret1->_immutable = immutable;
											HX_STACK_LINE(1076)
											{
												HX_STACK_LINE(1076)
												ret1->x = x;
												HX_STACK_LINE(1076)
												ret1->y = y;
												HX_STACK_LINE(1076)
												{
												}
											}
											HX_STACK_LINE(1076)
											tmp30 = ret1;
										}
										HX_STACK_LINE(1076)
										ret->zpp_inner = tmp30;
										HX_STACK_LINE(1076)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(1076)
										Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1076)
										{
											HX_STACK_LINE(1076)
											{
												HX_STACK_LINE(1076)
												::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1076)
												bool tmp31 = (_this1->_validate != null());		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1076)
												if ((tmp31)){
													HX_STACK_LINE(1076)
													_this1->_validate();
												}
											}
											HX_STACK_LINE(1076)
											tmp30 = ret->zpp_inner->x;
										}
										HX_STACK_LINE(1076)
										Float tmp31 = x;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(1076)
										bool tmp32 = (tmp30 == tmp31);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(1076)
										bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1076)
										if ((tmp32)){
											HX_STACK_LINE(1076)
											Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1076)
											{
												HX_STACK_LINE(1076)
												{
													HX_STACK_LINE(1076)
													::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1076)
													bool tmp35 = (_this1->_validate != null());		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(1076)
													bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1076)
													bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(1076)
													if ((tmp37)){
														HX_STACK_LINE(1076)
														_this1->_validate();
													}
												}
												HX_STACK_LINE(1076)
												Float tmp35 = ret->zpp_inner->y;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1076)
												tmp34 = tmp35;
											}
											HX_STACK_LINE(1076)
											Float tmp35 = y;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(1076)
											tmp33 = (tmp34 == tmp35);
										}
										else{
											HX_STACK_LINE(1076)
											tmp33 = false;
										}
										HX_STACK_LINE(1076)
										bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(1076)
										if ((tmp34)){
											HX_STACK_LINE(1076)
											{
												HX_STACK_LINE(1076)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(1076)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(1076)
												{
												}
											}
											HX_STACK_LINE(1076)
											{
												HX_STACK_LINE(1076)
												::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1076)
												bool tmp35 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1076)
												if ((tmp35)){
													HX_STACK_LINE(1076)
													::zpp_nape::geom::ZPP_Vec2 tmp36 = _this1;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1076)
													_this1->_invalidate(tmp36);
												}
											}
										}
										HX_STACK_LINE(1076)
										ret;
									}
									HX_STACK_LINE(1076)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(1076)
									tmp26 = ret;
								}
								HX_STACK_LINE(1076)
								_this->zpp_inner->wrap_worldCOM = tmp26;
								HX_STACK_LINE(1076)
								::nape::geom::Vec2 tmp27 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1076)
								tmp27->zpp_inner->_inuse = true;
								HX_STACK_LINE(1076)
								::nape::geom::Vec2 tmp28 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1076)
								tmp28->zpp_inner->_immutable = true;
								HX_STACK_LINE(1076)
								Dynamic tmp29 = _this->zpp_inner->getworldCOM_dyn();		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1076)
								::nape::geom::Vec2 tmp30 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1076)
								tmp30->zpp_inner->_validate = tmp29;
							}
							HX_STACK_LINE(1076)
							tmp17 = _this->zpp_inner->wrap_worldCOM;
						}
						HX_STACK_LINE(1076)
						::nape::geom::Vec2 _this = tmp17;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1076)
						{
							HX_STACK_LINE(1076)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1076)
							bool tmp18 = (_this1->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1076)
							if ((tmp18)){
								HX_STACK_LINE(1076)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(1076)
						tmp16 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(1076)
					vy = tmp16;
					HX_STACK_LINE(1085)
					{
					}
				}
				else{
					HX_STACK_LINE(1095)
					Float tmp15 = xform->a;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1095)
					Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1095)
					{
						HX_STACK_LINE(1095)
						::nape::geom::Vec2 tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1095)
						{
							HX_STACK_LINE(1095)
							::zpp_nape::shape::ZPP_Shape tmp18 = sarb->zpp_inner->ws1;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1095)
							int tmp19 = tmp18->id;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1095)
							::zpp_nape::shape::ZPP_Shape tmp20 = sarb->zpp_inner->ws2;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1095)
							int tmp21 = tmp20->id;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1095)
							bool tmp22 = (tmp19 > tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1095)
							::nape::shape::Shape tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1095)
							if ((tmp22)){
								HX_STACK_LINE(1095)
								::zpp_nape::shape::ZPP_Shape tmp24 = sarb->zpp_inner->ws1;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1095)
								tmp23 = tmp24->outer;
							}
							else{
								HX_STACK_LINE(1095)
								::zpp_nape::shape::ZPP_Shape tmp24 = sarb->zpp_inner->ws2;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1095)
								tmp23 = tmp24->outer;
							}
							HX_STACK_LINE(1095)
							::nape::shape::Shape _this = tmp23;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1095)
							::nape::geom::Vec2 tmp24 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1095)
							bool tmp25 = (tmp24 == null());		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1095)
							if ((tmp25)){
								HX_STACK_LINE(1095)
								::nape::geom::Vec2 tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1095)
								{
									HX_STACK_LINE(1095)
									Float tmp27 = _this->zpp_inner->worldCOMx;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1095)
									Float x = tmp27;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1095)
									Float tmp28 = _this->zpp_inner->worldCOMy;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(1095)
									Float y = tmp28;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1095)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(1095)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(1095)
									{
										HX_STACK_LINE(1095)
										::nape::geom::Vec2 tmp29 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1095)
										bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1095)
										if ((tmp30)){
											HX_STACK_LINE(1095)
											::nape::geom::Vec2 tmp31 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1095)
											ret = tmp31;
										}
										else{
											HX_STACK_LINE(1095)
											::nape::geom::Vec2 tmp31 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1095)
											ret = tmp31;
											HX_STACK_LINE(1095)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
											HX_STACK_LINE(1095)
											ret->zpp_pool = null();
										}
									}
									HX_STACK_LINE(1095)
									bool tmp29 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1095)
									if ((tmp29)){
										HX_STACK_LINE(1095)
										::zpp_nape::geom::ZPP_Vec2 tmp30;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1095)
										{
											HX_STACK_LINE(1095)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(1095)
											::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1095)
											{
												HX_STACK_LINE(1095)
												::zpp_nape::geom::ZPP_Vec2 tmp31 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1095)
												bool tmp32 = (tmp31 == null());		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(1095)
												if ((tmp32)){
													HX_STACK_LINE(1095)
													::zpp_nape::geom::ZPP_Vec2 tmp33 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(1095)
													ret1 = tmp33;
												}
												else{
													HX_STACK_LINE(1095)
													::zpp_nape::geom::ZPP_Vec2 tmp33 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(1095)
													ret1 = tmp33;
													HX_STACK_LINE(1095)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1095)
													ret1->next = null();
												}
												HX_STACK_LINE(1095)
												ret1->weak = false;
											}
											HX_STACK_LINE(1095)
											ret1->_immutable = immutable;
											HX_STACK_LINE(1095)
											{
												HX_STACK_LINE(1095)
												ret1->x = x;
												HX_STACK_LINE(1095)
												ret1->y = y;
												HX_STACK_LINE(1095)
												{
												}
											}
											HX_STACK_LINE(1095)
											tmp30 = ret1;
										}
										HX_STACK_LINE(1095)
										ret->zpp_inner = tmp30;
										HX_STACK_LINE(1095)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(1095)
										Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1095)
										{
											HX_STACK_LINE(1095)
											{
												HX_STACK_LINE(1095)
												::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1095)
												bool tmp31 = (_this1->_validate != null());		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1095)
												if ((tmp31)){
													HX_STACK_LINE(1095)
													_this1->_validate();
												}
											}
											HX_STACK_LINE(1095)
											tmp30 = ret->zpp_inner->x;
										}
										HX_STACK_LINE(1095)
										Float tmp31 = x;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(1095)
										bool tmp32 = (tmp30 == tmp31);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(1095)
										bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1095)
										if ((tmp32)){
											HX_STACK_LINE(1095)
											Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1095)
											{
												HX_STACK_LINE(1095)
												{
													HX_STACK_LINE(1095)
													::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1095)
													bool tmp35 = (_this1->_validate != null());		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(1095)
													bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1095)
													bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(1095)
													if ((tmp37)){
														HX_STACK_LINE(1095)
														_this1->_validate();
													}
												}
												HX_STACK_LINE(1095)
												Float tmp35 = ret->zpp_inner->y;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1095)
												tmp34 = tmp35;
											}
											HX_STACK_LINE(1095)
											Float tmp35 = y;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(1095)
											tmp33 = (tmp34 == tmp35);
										}
										else{
											HX_STACK_LINE(1095)
											tmp33 = false;
										}
										HX_STACK_LINE(1095)
										bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(1095)
										if ((tmp34)){
											HX_STACK_LINE(1095)
											{
												HX_STACK_LINE(1095)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(1095)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(1095)
												{
												}
											}
											HX_STACK_LINE(1095)
											{
												HX_STACK_LINE(1095)
												::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1095)
												bool tmp35 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1095)
												if ((tmp35)){
													HX_STACK_LINE(1095)
													::zpp_nape::geom::ZPP_Vec2 tmp36 = _this1;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1095)
													_this1->_invalidate(tmp36);
												}
											}
										}
										HX_STACK_LINE(1095)
										ret;
									}
									HX_STACK_LINE(1095)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(1095)
									tmp26 = ret;
								}
								HX_STACK_LINE(1095)
								_this->zpp_inner->wrap_worldCOM = tmp26;
								HX_STACK_LINE(1095)
								::nape::geom::Vec2 tmp27 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1095)
								tmp27->zpp_inner->_inuse = true;
								HX_STACK_LINE(1095)
								::nape::geom::Vec2 tmp28 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1095)
								tmp28->zpp_inner->_immutable = true;
								HX_STACK_LINE(1095)
								Dynamic tmp29 = _this->zpp_inner->getworldCOM_dyn();		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1095)
								::nape::geom::Vec2 tmp30 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1095)
								tmp30->zpp_inner->_validate = tmp29;
							}
							HX_STACK_LINE(1095)
							tmp17 = _this->zpp_inner->wrap_worldCOM;
						}
						HX_STACK_LINE(1095)
						::nape::geom::Vec2 _this = tmp17;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1095)
						{
							HX_STACK_LINE(1095)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1095)
							bool tmp18 = (_this1->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1095)
							if ((tmp18)){
								HX_STACK_LINE(1095)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(1095)
						tmp16 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(1095)
					Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1095)
					Float tmp18 = xform->b;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1095)
					Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1095)
					{
						HX_STACK_LINE(1095)
						::nape::geom::Vec2 tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1095)
						{
							HX_STACK_LINE(1095)
							::zpp_nape::shape::ZPP_Shape tmp21 = sarb->zpp_inner->ws1;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1095)
							int tmp22 = tmp21->id;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1095)
							::zpp_nape::shape::ZPP_Shape tmp23 = sarb->zpp_inner->ws2;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1095)
							int tmp24 = tmp23->id;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1095)
							bool tmp25 = (tmp22 > tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1095)
							::nape::shape::Shape tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1095)
							if ((tmp25)){
								HX_STACK_LINE(1095)
								::zpp_nape::shape::ZPP_Shape tmp27 = sarb->zpp_inner->ws1;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1095)
								tmp26 = tmp27->outer;
							}
							else{
								HX_STACK_LINE(1095)
								::zpp_nape::shape::ZPP_Shape tmp27 = sarb->zpp_inner->ws2;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1095)
								tmp26 = tmp27->outer;
							}
							HX_STACK_LINE(1095)
							::nape::shape::Shape _this = tmp26;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1095)
							::nape::geom::Vec2 tmp27 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1095)
							bool tmp28 = (tmp27 == null());		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1095)
							if ((tmp28)){
								HX_STACK_LINE(1095)
								::nape::geom::Vec2 tmp29;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1095)
								{
									HX_STACK_LINE(1095)
									Float tmp30 = _this->zpp_inner->worldCOMx;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(1095)
									Float x = tmp30;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1095)
									Float tmp31 = _this->zpp_inner->worldCOMy;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1095)
									Float y = tmp31;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1095)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(1095)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(1095)
									{
										HX_STACK_LINE(1095)
										::nape::geom::Vec2 tmp32 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(1095)
										bool tmp33 = (tmp32 == null());		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1095)
										if ((tmp33)){
											HX_STACK_LINE(1095)
											::nape::geom::Vec2 tmp34 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1095)
											ret = tmp34;
										}
										else{
											HX_STACK_LINE(1095)
											::nape::geom::Vec2 tmp34 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1095)
											ret = tmp34;
											HX_STACK_LINE(1095)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
											HX_STACK_LINE(1095)
											ret->zpp_pool = null();
										}
									}
									HX_STACK_LINE(1095)
									bool tmp32 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(1095)
									if ((tmp32)){
										HX_STACK_LINE(1095)
										::zpp_nape::geom::ZPP_Vec2 tmp33;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1095)
										{
											HX_STACK_LINE(1095)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(1095)
											::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1095)
											{
												HX_STACK_LINE(1095)
												::zpp_nape::geom::ZPP_Vec2 tmp34 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1095)
												bool tmp35 = (tmp34 == null());		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1095)
												if ((tmp35)){
													HX_STACK_LINE(1095)
													::zpp_nape::geom::ZPP_Vec2 tmp36 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1095)
													ret1 = tmp36;
												}
												else{
													HX_STACK_LINE(1095)
													::zpp_nape::geom::ZPP_Vec2 tmp36 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1095)
													ret1 = tmp36;
													HX_STACK_LINE(1095)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1095)
													ret1->next = null();
												}
												HX_STACK_LINE(1095)
												ret1->weak = false;
											}
											HX_STACK_LINE(1095)
											ret1->_immutable = immutable;
											HX_STACK_LINE(1095)
											{
												HX_STACK_LINE(1095)
												ret1->x = x;
												HX_STACK_LINE(1095)
												ret1->y = y;
												HX_STACK_LINE(1095)
												{
												}
											}
											HX_STACK_LINE(1095)
											tmp33 = ret1;
										}
										HX_STACK_LINE(1095)
										ret->zpp_inner = tmp33;
										HX_STACK_LINE(1095)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(1095)
										Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1095)
										{
											HX_STACK_LINE(1095)
											{
												HX_STACK_LINE(1095)
												::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1095)
												bool tmp34 = (_this1->_validate != null());		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1095)
												if ((tmp34)){
													HX_STACK_LINE(1095)
													_this1->_validate();
												}
											}
											HX_STACK_LINE(1095)
											tmp33 = ret->zpp_inner->x;
										}
										HX_STACK_LINE(1095)
										Float tmp34 = x;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(1095)
										bool tmp35 = (tmp33 == tmp34);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(1095)
										bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(1095)
										if ((tmp35)){
											HX_STACK_LINE(1095)
											Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(1095)
											{
												HX_STACK_LINE(1095)
												{
													HX_STACK_LINE(1095)
													::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1095)
													bool tmp38 = (_this1->_validate != null());		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(1095)
													bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(1095)
													bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(1095)
													if ((tmp40)){
														HX_STACK_LINE(1095)
														_this1->_validate();
													}
												}
												HX_STACK_LINE(1095)
												Float tmp38 = ret->zpp_inner->y;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(1095)
												tmp37 = tmp38;
											}
											HX_STACK_LINE(1095)
											Float tmp38 = y;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1095)
											tmp36 = (tmp37 == tmp38);
										}
										else{
											HX_STACK_LINE(1095)
											tmp36 = false;
										}
										HX_STACK_LINE(1095)
										bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(1095)
										if ((tmp37)){
											HX_STACK_LINE(1095)
											{
												HX_STACK_LINE(1095)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(1095)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(1095)
												{
												}
											}
											HX_STACK_LINE(1095)
											{
												HX_STACK_LINE(1095)
												::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1095)
												bool tmp38 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(1095)
												if ((tmp38)){
													HX_STACK_LINE(1095)
													::zpp_nape::geom::ZPP_Vec2 tmp39 = _this1;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(1095)
													_this1->_invalidate(tmp39);
												}
											}
										}
										HX_STACK_LINE(1095)
										ret;
									}
									HX_STACK_LINE(1095)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(1095)
									tmp29 = ret;
								}
								HX_STACK_LINE(1095)
								_this->zpp_inner->wrap_worldCOM = tmp29;
								HX_STACK_LINE(1095)
								::nape::geom::Vec2 tmp30 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1095)
								tmp30->zpp_inner->_inuse = true;
								HX_STACK_LINE(1095)
								::nape::geom::Vec2 tmp31 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1095)
								tmp31->zpp_inner->_immutable = true;
								HX_STACK_LINE(1095)
								Dynamic tmp32 = _this->zpp_inner->getworldCOM_dyn();		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1095)
								::nape::geom::Vec2 tmp33 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1095)
								tmp33->zpp_inner->_validate = tmp32;
							}
							HX_STACK_LINE(1095)
							tmp20 = _this->zpp_inner->wrap_worldCOM;
						}
						HX_STACK_LINE(1095)
						::nape::geom::Vec2 _this = tmp20;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1095)
						{
							HX_STACK_LINE(1095)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1095)
							bool tmp21 = (_this1->_validate != null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1095)
							if ((tmp21)){
								HX_STACK_LINE(1095)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(1095)
						tmp19 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(1095)
					Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1095)
					Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1095)
					Float tmp22 = xform->tx;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1095)
					Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1095)
					vx = tmp23;
					HX_STACK_LINE(1096)
					Float tmp24 = xform->c;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1096)
					Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1096)
					{
						HX_STACK_LINE(1096)
						::nape::geom::Vec2 tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1096)
						{
							HX_STACK_LINE(1096)
							::zpp_nape::shape::ZPP_Shape tmp27 = sarb->zpp_inner->ws1;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1096)
							int tmp28 = tmp27->id;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1096)
							::zpp_nape::shape::ZPP_Shape tmp29 = sarb->zpp_inner->ws2;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1096)
							int tmp30 = tmp29->id;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1096)
							bool tmp31 = (tmp28 > tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1096)
							::nape::shape::Shape tmp32;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1096)
							if ((tmp31)){
								HX_STACK_LINE(1096)
								::zpp_nape::shape::ZPP_Shape tmp33 = sarb->zpp_inner->ws1;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1096)
								tmp32 = tmp33->outer;
							}
							else{
								HX_STACK_LINE(1096)
								::zpp_nape::shape::ZPP_Shape tmp33 = sarb->zpp_inner->ws2;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1096)
								tmp32 = tmp33->outer;
							}
							HX_STACK_LINE(1096)
							::nape::shape::Shape _this = tmp32;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1096)
							::nape::geom::Vec2 tmp33 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1096)
							bool tmp34 = (tmp33 == null());		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1096)
							if ((tmp34)){
								HX_STACK_LINE(1096)
								::nape::geom::Vec2 tmp35;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1096)
								{
									HX_STACK_LINE(1096)
									Float tmp36 = _this->zpp_inner->worldCOMx;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1096)
									Float x = tmp36;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1096)
									Float tmp37 = _this->zpp_inner->worldCOMy;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1096)
									Float y = tmp37;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1096)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(1096)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(1096)
									{
										HX_STACK_LINE(1096)
										::nape::geom::Vec2 tmp38 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(1096)
										bool tmp39 = (tmp38 == null());		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(1096)
										if ((tmp39)){
											HX_STACK_LINE(1096)
											::nape::geom::Vec2 tmp40 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(1096)
											ret = tmp40;
										}
										else{
											HX_STACK_LINE(1096)
											::nape::geom::Vec2 tmp40 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(1096)
											ret = tmp40;
											HX_STACK_LINE(1096)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
											HX_STACK_LINE(1096)
											ret->zpp_pool = null();
										}
									}
									HX_STACK_LINE(1096)
									bool tmp38 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(1096)
									if ((tmp38)){
										HX_STACK_LINE(1096)
										::zpp_nape::geom::ZPP_Vec2 tmp39;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(1096)
										{
											HX_STACK_LINE(1096)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(1096)
											::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1096)
											{
												HX_STACK_LINE(1096)
												::zpp_nape::geom::ZPP_Vec2 tmp40 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(1096)
												bool tmp41 = (tmp40 == null());		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(1096)
												if ((tmp41)){
													HX_STACK_LINE(1096)
													::zpp_nape::geom::ZPP_Vec2 tmp42 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(1096)
													ret1 = tmp42;
												}
												else{
													HX_STACK_LINE(1096)
													::zpp_nape::geom::ZPP_Vec2 tmp42 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(1096)
													ret1 = tmp42;
													HX_STACK_LINE(1096)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1096)
													ret1->next = null();
												}
												HX_STACK_LINE(1096)
												ret1->weak = false;
											}
											HX_STACK_LINE(1096)
											ret1->_immutable = immutable;
											HX_STACK_LINE(1096)
											{
												HX_STACK_LINE(1096)
												ret1->x = x;
												HX_STACK_LINE(1096)
												ret1->y = y;
												HX_STACK_LINE(1096)
												{
												}
											}
											HX_STACK_LINE(1096)
											tmp39 = ret1;
										}
										HX_STACK_LINE(1096)
										ret->zpp_inner = tmp39;
										HX_STACK_LINE(1096)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(1096)
										Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(1096)
										{
											HX_STACK_LINE(1096)
											{
												HX_STACK_LINE(1096)
												::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1096)
												bool tmp40 = (_this1->_validate != null());		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(1096)
												if ((tmp40)){
													HX_STACK_LINE(1096)
													_this1->_validate();
												}
											}
											HX_STACK_LINE(1096)
											tmp39 = ret->zpp_inner->x;
										}
										HX_STACK_LINE(1096)
										Float tmp40 = x;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(1096)
										bool tmp41 = (tmp39 == tmp40);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(1096)
										bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(1096)
										if ((tmp41)){
											HX_STACK_LINE(1096)
											Float tmp43;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(1096)
											{
												HX_STACK_LINE(1096)
												{
													HX_STACK_LINE(1096)
													::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1096)
													bool tmp44 = (_this1->_validate != null());		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(1096)
													bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(1096)
													bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(1096)
													if ((tmp46)){
														HX_STACK_LINE(1096)
														_this1->_validate();
													}
												}
												HX_STACK_LINE(1096)
												Float tmp44 = ret->zpp_inner->y;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(1096)
												tmp43 = tmp44;
											}
											HX_STACK_LINE(1096)
											Float tmp44 = y;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(1096)
											tmp42 = (tmp43 == tmp44);
										}
										else{
											HX_STACK_LINE(1096)
											tmp42 = false;
										}
										HX_STACK_LINE(1096)
										bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(1096)
										if ((tmp43)){
											HX_STACK_LINE(1096)
											{
												HX_STACK_LINE(1096)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(1096)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(1096)
												{
												}
											}
											HX_STACK_LINE(1096)
											{
												HX_STACK_LINE(1096)
												::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1096)
												bool tmp44 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(1096)
												if ((tmp44)){
													HX_STACK_LINE(1096)
													::zpp_nape::geom::ZPP_Vec2 tmp45 = _this1;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(1096)
													_this1->_invalidate(tmp45);
												}
											}
										}
										HX_STACK_LINE(1096)
										ret;
									}
									HX_STACK_LINE(1096)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(1096)
									tmp35 = ret;
								}
								HX_STACK_LINE(1096)
								_this->zpp_inner->wrap_worldCOM = tmp35;
								HX_STACK_LINE(1096)
								::nape::geom::Vec2 tmp36 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1096)
								tmp36->zpp_inner->_inuse = true;
								HX_STACK_LINE(1096)
								::nape::geom::Vec2 tmp37 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1096)
								tmp37->zpp_inner->_immutable = true;
								HX_STACK_LINE(1096)
								Dynamic tmp38 = _this->zpp_inner->getworldCOM_dyn();		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(1096)
								::nape::geom::Vec2 tmp39 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(1096)
								tmp39->zpp_inner->_validate = tmp38;
							}
							HX_STACK_LINE(1096)
							tmp26 = _this->zpp_inner->wrap_worldCOM;
						}
						HX_STACK_LINE(1096)
						::nape::geom::Vec2 _this = tmp26;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1096)
						{
							HX_STACK_LINE(1096)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1096)
							bool tmp27 = (_this1->_validate != null());		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1096)
							if ((tmp27)){
								HX_STACK_LINE(1096)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(1096)
						tmp25 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(1096)
					Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1096)
					Float tmp27 = xform->d;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1096)
					Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1096)
					{
						HX_STACK_LINE(1096)
						::nape::geom::Vec2 tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1096)
						{
							HX_STACK_LINE(1096)
							::zpp_nape::shape::ZPP_Shape tmp30 = sarb->zpp_inner->ws1;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1096)
							int tmp31 = tmp30->id;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1096)
							::zpp_nape::shape::ZPP_Shape tmp32 = sarb->zpp_inner->ws2;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1096)
							int tmp33 = tmp32->id;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1096)
							bool tmp34 = (tmp31 > tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1096)
							::nape::shape::Shape tmp35;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1096)
							if ((tmp34)){
								HX_STACK_LINE(1096)
								::zpp_nape::shape::ZPP_Shape tmp36 = sarb->zpp_inner->ws1;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1096)
								tmp35 = tmp36->outer;
							}
							else{
								HX_STACK_LINE(1096)
								::zpp_nape::shape::ZPP_Shape tmp36 = sarb->zpp_inner->ws2;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1096)
								tmp35 = tmp36->outer;
							}
							HX_STACK_LINE(1096)
							::nape::shape::Shape _this = tmp35;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1096)
							::nape::geom::Vec2 tmp36 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1096)
							bool tmp37 = (tmp36 == null());		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1096)
							if ((tmp37)){
								HX_STACK_LINE(1096)
								::nape::geom::Vec2 tmp38;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(1096)
								{
									HX_STACK_LINE(1096)
									Float tmp39 = _this->zpp_inner->worldCOMx;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(1096)
									Float x = tmp39;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1096)
									Float tmp40 = _this->zpp_inner->worldCOMy;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(1096)
									Float y = tmp40;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1096)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(1096)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(1096)
									{
										HX_STACK_LINE(1096)
										::nape::geom::Vec2 tmp41 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(1096)
										bool tmp42 = (tmp41 == null());		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(1096)
										if ((tmp42)){
											HX_STACK_LINE(1096)
											::nape::geom::Vec2 tmp43 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(1096)
											ret = tmp43;
										}
										else{
											HX_STACK_LINE(1096)
											::nape::geom::Vec2 tmp43 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(1096)
											ret = tmp43;
											HX_STACK_LINE(1096)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
											HX_STACK_LINE(1096)
											ret->zpp_pool = null();
										}
									}
									HX_STACK_LINE(1096)
									bool tmp41 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(1096)
									if ((tmp41)){
										HX_STACK_LINE(1096)
										::zpp_nape::geom::ZPP_Vec2 tmp42;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(1096)
										{
											HX_STACK_LINE(1096)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(1096)
											::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1096)
											{
												HX_STACK_LINE(1096)
												::zpp_nape::geom::ZPP_Vec2 tmp43 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(1096)
												bool tmp44 = (tmp43 == null());		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(1096)
												if ((tmp44)){
													HX_STACK_LINE(1096)
													::zpp_nape::geom::ZPP_Vec2 tmp45 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(1096)
													ret1 = tmp45;
												}
												else{
													HX_STACK_LINE(1096)
													::zpp_nape::geom::ZPP_Vec2 tmp45 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(1096)
													ret1 = tmp45;
													HX_STACK_LINE(1096)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1096)
													ret1->next = null();
												}
												HX_STACK_LINE(1096)
												ret1->weak = false;
											}
											HX_STACK_LINE(1096)
											ret1->_immutable = immutable;
											HX_STACK_LINE(1096)
											{
												HX_STACK_LINE(1096)
												ret1->x = x;
												HX_STACK_LINE(1096)
												ret1->y = y;
												HX_STACK_LINE(1096)
												{
												}
											}
											HX_STACK_LINE(1096)
											tmp42 = ret1;
										}
										HX_STACK_LINE(1096)
										ret->zpp_inner = tmp42;
										HX_STACK_LINE(1096)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(1096)
										Float tmp42;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(1096)
										{
											HX_STACK_LINE(1096)
											{
												HX_STACK_LINE(1096)
												::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1096)
												bool tmp43 = (_this1->_validate != null());		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(1096)
												if ((tmp43)){
													HX_STACK_LINE(1096)
													_this1->_validate();
												}
											}
											HX_STACK_LINE(1096)
											tmp42 = ret->zpp_inner->x;
										}
										HX_STACK_LINE(1096)
										Float tmp43 = x;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(1096)
										bool tmp44 = (tmp42 == tmp43);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(1096)
										bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(1096)
										if ((tmp44)){
											HX_STACK_LINE(1096)
											Float tmp46;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(1096)
											{
												HX_STACK_LINE(1096)
												{
													HX_STACK_LINE(1096)
													::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1096)
													bool tmp47 = (_this1->_validate != null());		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(1096)
													bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(1096)
													bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(1096)
													if ((tmp49)){
														HX_STACK_LINE(1096)
														_this1->_validate();
													}
												}
												HX_STACK_LINE(1096)
												Float tmp47 = ret->zpp_inner->y;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(1096)
												tmp46 = tmp47;
											}
											HX_STACK_LINE(1096)
											Float tmp47 = y;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(1096)
											tmp45 = (tmp46 == tmp47);
										}
										else{
											HX_STACK_LINE(1096)
											tmp45 = false;
										}
										HX_STACK_LINE(1096)
										bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(1096)
										if ((tmp46)){
											HX_STACK_LINE(1096)
											{
												HX_STACK_LINE(1096)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(1096)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(1096)
												{
												}
											}
											HX_STACK_LINE(1096)
											{
												HX_STACK_LINE(1096)
												::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1096)
												bool tmp47 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(1096)
												if ((tmp47)){
													HX_STACK_LINE(1096)
													::zpp_nape::geom::ZPP_Vec2 tmp48 = _this1;		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(1096)
													_this1->_invalidate(tmp48);
												}
											}
										}
										HX_STACK_LINE(1096)
										ret;
									}
									HX_STACK_LINE(1096)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(1096)
									tmp38 = ret;
								}
								HX_STACK_LINE(1096)
								_this->zpp_inner->wrap_worldCOM = tmp38;
								HX_STACK_LINE(1096)
								::nape::geom::Vec2 tmp39 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(1096)
								tmp39->zpp_inner->_inuse = true;
								HX_STACK_LINE(1096)
								::nape::geom::Vec2 tmp40 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(1096)
								tmp40->zpp_inner->_immutable = true;
								HX_STACK_LINE(1096)
								Dynamic tmp41 = _this->zpp_inner->getworldCOM_dyn();		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(1096)
								::nape::geom::Vec2 tmp42 = _this->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(1096)
								tmp42->zpp_inner->_validate = tmp41;
							}
							HX_STACK_LINE(1096)
							tmp29 = _this->zpp_inner->wrap_worldCOM;
						}
						HX_STACK_LINE(1096)
						::nape::geom::Vec2 _this = tmp29;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1096)
						{
							HX_STACK_LINE(1096)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1096)
							bool tmp30 = (_this1->_validate != null());		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1096)
							if ((tmp30)){
								HX_STACK_LINE(1096)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(1096)
						tmp28 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(1096)
					Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1096)
					Float tmp30 = (tmp26 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1096)
					Float tmp31 = xform->ty;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1096)
					Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1096)
					vy = tmp32;
				}
				HX_STACK_LINE(1098)
				::openfl::_legacy::display::Graphics tmp15 = this->graphics;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1098)
				Float tmp16 = vx;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1098)
				Float tmp17 = vy;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1098)
				tmp15->lineTo(tmp16,tmp17);
			}
		}
		else{
			HX_STACK_LINE(1101)
			::zpp_nape::dynamics::ZPP_Arbiter tmp4 = arb->outer->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1101)
			int tmp5 = tmp4->type;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1101)
			int tmp6 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1101)
			bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1101)
			if ((tmp7)){
				HX_STACK_LINE(1102)
				::nape::util::Debug tmp8 = this->outer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1102)
				bool tmp9 = tmp8->drawFluidArbiters;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1102)
				if ((tmp9)){
					HX_STACK_LINE(1103)
					::nape::dynamics::FluidArbiter tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1103)
					{
						HX_STACK_LINE(1103)
						::nape::dynamics::Arbiter _this = arb->outer;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1103)
						int tmp11 = _this->zpp_inner->type;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1103)
						int tmp12 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1103)
						bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1103)
						if ((tmp13)){
							HX_STACK_LINE(1103)
							::zpp_nape::dynamics::ZPP_FluidArbiter tmp14 = _this->zpp_inner->fluidarb;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1103)
							tmp10 = tmp14->outer_zn;
						}
						else{
							HX_STACK_LINE(1103)
							tmp10 = null();
						}
					}
					HX_STACK_LINE(1103)
					::nape::dynamics::FluidArbiter farb = tmp10;		HX_STACK_VAR(farb,"farb");
					HX_STACK_LINE(1104)
					::openfl::_legacy::display::Graphics tmp11 = this->graphics;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1104)
					::nape::util::ShapeDebug tmp12 = this->outer_zn;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1104)
					Float tmp13 = tmp12->thickness;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1104)
					int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1104)
					{
						HX_STACK_LINE(1105)
						int col = (int)255;		HX_STACK_VAR(col,"col");
						HX_STACK_LINE(1106)
						int tmp15 = this->bg_col;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1106)
						int tmp16 = ~(int)(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1106)
						int ncol = tmp16;		HX_STACK_VAR(ncol,"ncol");
						HX_STACK_LINE(1107)
						Float f = ((Float)0.7);		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(1108)
						int tmp17 = (int(col) >> int((int)16));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1108)
						int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1108)
						Float tmp19 = f;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1108)
						Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1108)
						int tmp21 = (int(ncol) >> int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1108)
						int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1108)
						Float tmp23 = ((int)1 - f);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1108)
						Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1108)
						Float tmp25 = (tmp20 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1108)
						int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1108)
						int _r = tmp26;		HX_STACK_VAR(_r,"_r");
						HX_STACK_LINE(1109)
						int tmp27 = (int(col) >> int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1109)
						int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1109)
						Float tmp29 = f;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1109)
						Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1109)
						int tmp31 = (int(ncol) >> int((int)8));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1109)
						int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1109)
						Float tmp33 = ((int)1 - f);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1109)
						Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1109)
						Float tmp35 = (tmp30 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1109)
						int tmp36 = ::Std_obj::_int(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1109)
						int _g = tmp36;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1110)
						int tmp37 = (int(col) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1110)
						Float tmp38 = f;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1110)
						Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1110)
						int tmp40 = (int(ncol) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(1110)
						Float tmp41 = ((int)1 - f);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(1110)
						Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(1110)
						Float tmp43 = (tmp39 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(1110)
						int tmp44 = ::Std_obj::_int(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(1110)
						int _b = tmp44;		HX_STACK_VAR(_b,"_b");
						HX_STACK_LINE(1111)
						int tmp45 = (int(_r) << int((int)16));		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(1111)
						int tmp46 = (int((int)-16777216) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(1111)
						int tmp47 = (int(_g) << int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(1111)
						int tmp48 = (int(tmp46) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(1111)
						int tmp49 = _b;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(1111)
						tmp14 = (int(tmp48) | int(tmp49));
					}
					HX_STACK_LINE(1104)
					tmp11->lineStyle(tmp13,tmp14,(int)1,null(),null(),null(),null(),null());
					HX_STACK_LINE(1114)
					bool tmp15 = xnull;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1114)
					if ((tmp15)){
						HX_STACK_LINE(1115)
						Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1115)
						{
							HX_STACK_LINE(1115)
							::nape::geom::Vec2 tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1115)
							{
								HX_STACK_LINE(1115)
								::zpp_nape::dynamics::ZPP_FluidArbiter tmp18 = farb->zpp_inner->fluidarb;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1115)
								::nape::geom::Vec2 tmp19 = tmp18->wrap_position;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1115)
								bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1115)
								if ((tmp20)){
									HX_STACK_LINE(1115)
									::zpp_nape::dynamics::ZPP_FluidArbiter tmp21 = farb->zpp_inner->fluidarb;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(1115)
									tmp21->getposition();
								}
								HX_STACK_LINE(1115)
								::zpp_nape::dynamics::ZPP_FluidArbiter tmp21 = farb->zpp_inner->fluidarb;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1115)
								tmp17 = tmp21->wrap_position;
							}
							HX_STACK_LINE(1115)
							::nape::geom::Vec2 _this = tmp17;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1115)
							{
								HX_STACK_LINE(1115)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1115)
								bool tmp18 = (_this1->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1115)
								if ((tmp18)){
									HX_STACK_LINE(1115)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(1115)
							tmp16 = _this->zpp_inner->x;
						}
						HX_STACK_LINE(1115)
						vx = tmp16;
						HX_STACK_LINE(1116)
						Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1116)
						{
							HX_STACK_LINE(1116)
							::nape::geom::Vec2 tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1116)
							{
								HX_STACK_LINE(1116)
								::zpp_nape::dynamics::ZPP_FluidArbiter tmp19 = farb->zpp_inner->fluidarb;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1116)
								::nape::geom::Vec2 tmp20 = tmp19->wrap_position;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1116)
								bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1116)
								if ((tmp21)){
									HX_STACK_LINE(1116)
									::zpp_nape::dynamics::ZPP_FluidArbiter tmp22 = farb->zpp_inner->fluidarb;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(1116)
									tmp22->getposition();
								}
								HX_STACK_LINE(1116)
								::zpp_nape::dynamics::ZPP_FluidArbiter tmp22 = farb->zpp_inner->fluidarb;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1116)
								tmp18 = tmp22->wrap_position;
							}
							HX_STACK_LINE(1116)
							::nape::geom::Vec2 _this = tmp18;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1116)
							{
								HX_STACK_LINE(1116)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1116)
								bool tmp19 = (_this1->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1116)
								if ((tmp19)){
									HX_STACK_LINE(1116)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(1116)
							tmp17 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(1116)
						vy = tmp17;
						HX_STACK_LINE(1125)
						{
						}
					}
					else{
						HX_STACK_LINE(1135)
						Float tmp16 = xform->a;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1135)
						Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1135)
						{
							HX_STACK_LINE(1135)
							::nape::geom::Vec2 tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1135)
							{
								HX_STACK_LINE(1135)
								::zpp_nape::dynamics::ZPP_FluidArbiter tmp19 = farb->zpp_inner->fluidarb;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1135)
								::nape::geom::Vec2 tmp20 = tmp19->wrap_position;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1135)
								bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1135)
								if ((tmp21)){
									HX_STACK_LINE(1135)
									::zpp_nape::dynamics::ZPP_FluidArbiter tmp22 = farb->zpp_inner->fluidarb;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(1135)
									tmp22->getposition();
								}
								HX_STACK_LINE(1135)
								::zpp_nape::dynamics::ZPP_FluidArbiter tmp22 = farb->zpp_inner->fluidarb;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1135)
								tmp18 = tmp22->wrap_position;
							}
							HX_STACK_LINE(1135)
							::nape::geom::Vec2 _this = tmp18;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1135)
							{
								HX_STACK_LINE(1135)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1135)
								bool tmp19 = (_this1->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1135)
								if ((tmp19)){
									HX_STACK_LINE(1135)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(1135)
							tmp17 = _this->zpp_inner->x;
						}
						HX_STACK_LINE(1135)
						Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1135)
						Float tmp19 = xform->b;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1135)
						Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1135)
						{
							HX_STACK_LINE(1135)
							::nape::geom::Vec2 tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1135)
							{
								HX_STACK_LINE(1135)
								::zpp_nape::dynamics::ZPP_FluidArbiter tmp22 = farb->zpp_inner->fluidarb;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1135)
								::nape::geom::Vec2 tmp23 = tmp22->wrap_position;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1135)
								bool tmp24 = (tmp23 == null());		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1135)
								if ((tmp24)){
									HX_STACK_LINE(1135)
									::zpp_nape::dynamics::ZPP_FluidArbiter tmp25 = farb->zpp_inner->fluidarb;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1135)
									tmp25->getposition();
								}
								HX_STACK_LINE(1135)
								::zpp_nape::dynamics::ZPP_FluidArbiter tmp25 = farb->zpp_inner->fluidarb;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1135)
								tmp21 = tmp25->wrap_position;
							}
							HX_STACK_LINE(1135)
							::nape::geom::Vec2 _this = tmp21;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1135)
							{
								HX_STACK_LINE(1135)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1135)
								bool tmp22 = (_this1->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1135)
								if ((tmp22)){
									HX_STACK_LINE(1135)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(1135)
							tmp20 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(1135)
						Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1135)
						Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1135)
						Float tmp23 = xform->tx;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1135)
						Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1135)
						vx = tmp24;
						HX_STACK_LINE(1136)
						Float tmp25 = xform->c;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1136)
						Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1136)
						{
							HX_STACK_LINE(1136)
							::nape::geom::Vec2 tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1136)
							{
								HX_STACK_LINE(1136)
								::zpp_nape::dynamics::ZPP_FluidArbiter tmp28 = farb->zpp_inner->fluidarb;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1136)
								::nape::geom::Vec2 tmp29 = tmp28->wrap_position;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1136)
								bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1136)
								if ((tmp30)){
									HX_STACK_LINE(1136)
									::zpp_nape::dynamics::ZPP_FluidArbiter tmp31 = farb->zpp_inner->fluidarb;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1136)
									tmp31->getposition();
								}
								HX_STACK_LINE(1136)
								::zpp_nape::dynamics::ZPP_FluidArbiter tmp31 = farb->zpp_inner->fluidarb;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1136)
								tmp27 = tmp31->wrap_position;
							}
							HX_STACK_LINE(1136)
							::nape::geom::Vec2 _this = tmp27;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1136)
							{
								HX_STACK_LINE(1136)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1136)
								bool tmp28 = (_this1->_validate != null());		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1136)
								if ((tmp28)){
									HX_STACK_LINE(1136)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(1136)
							tmp26 = _this->zpp_inner->x;
						}
						HX_STACK_LINE(1136)
						Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1136)
						Float tmp28 = xform->d;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1136)
						Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1136)
						{
							HX_STACK_LINE(1136)
							::nape::geom::Vec2 tmp30;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1136)
							{
								HX_STACK_LINE(1136)
								::zpp_nape::dynamics::ZPP_FluidArbiter tmp31 = farb->zpp_inner->fluidarb;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1136)
								::nape::geom::Vec2 tmp32 = tmp31->wrap_position;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1136)
								bool tmp33 = (tmp32 == null());		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1136)
								if ((tmp33)){
									HX_STACK_LINE(1136)
									::zpp_nape::dynamics::ZPP_FluidArbiter tmp34 = farb->zpp_inner->fluidarb;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(1136)
									tmp34->getposition();
								}
								HX_STACK_LINE(1136)
								::zpp_nape::dynamics::ZPP_FluidArbiter tmp34 = farb->zpp_inner->fluidarb;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1136)
								tmp30 = tmp34->wrap_position;
							}
							HX_STACK_LINE(1136)
							::nape::geom::Vec2 _this = tmp30;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1136)
							{
								HX_STACK_LINE(1136)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1136)
								bool tmp31 = (_this1->_validate != null());		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1136)
								if ((tmp31)){
									HX_STACK_LINE(1136)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(1136)
							tmp29 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(1136)
						Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1136)
						Float tmp31 = (tmp27 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1136)
						Float tmp32 = xform->ty;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1136)
						Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1136)
						vy = tmp33;
					}
					HX_STACK_LINE(1138)
					::openfl::_legacy::display::Graphics tmp16 = this->graphics;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1138)
					Float tmp17 = vx;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1138)
					Float tmp18 = vy;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1138)
					tmp16->drawCircle(tmp17,tmp18,((Float)0.75));
				}
			}
			else{
				HX_STACK_LINE(1142)
				::nape::util::Debug tmp8 = this->outer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1142)
				bool tmp9 = tmp8->drawCollisionArbiters;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1142)
				if ((tmp9)){
					HX_STACK_LINE(1143)
					::nape::dynamics::CollisionArbiter tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1143)
					{
						HX_STACK_LINE(1143)
						::nape::dynamics::Arbiter _this = arb->outer;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1143)
						int tmp11 = _this->zpp_inner->type;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1143)
						int tmp12 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1143)
						bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1143)
						if ((tmp13)){
							HX_STACK_LINE(1143)
							::zpp_nape::dynamics::ZPP_ColArbiter tmp14 = _this->zpp_inner->colarb;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1143)
							tmp10 = tmp14->outer_zn;
						}
						else{
							HX_STACK_LINE(1143)
							tmp10 = null();
						}
					}
					HX_STACK_LINE(1143)
					::nape::dynamics::CollisionArbiter carb = tmp10;		HX_STACK_VAR(carb,"carb");
					HX_STACK_LINE(1144)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1144)
					{
						HX_STACK_LINE(1144)
						::nape::dynamics::ContactList tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1144)
						{
							HX_STACK_LINE(1144)
							::zpp_nape::dynamics::ZPP_ColArbiter tmp13 = carb->zpp_inner->colarb;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1144)
							::nape::dynamics::ContactList tmp14 = tmp13->wrap_contacts;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1144)
							bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1144)
							if ((tmp15)){
								HX_STACK_LINE(1144)
								::zpp_nape::dynamics::ZPP_ColArbiter tmp16 = carb->zpp_inner->colarb;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1144)
								tmp16->setupcontacts();
							}
							HX_STACK_LINE(1144)
							::zpp_nape::dynamics::ZPP_ColArbiter tmp16 = carb->zpp_inner->colarb;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1144)
							tmp12 = tmp16->wrap_contacts;
						}
						HX_STACK_LINE(1144)
						::nape::dynamics::ContactList _this = tmp12;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1144)
						{
							HX_STACK_LINE(1144)
							int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1144)
							{
								HX_STACK_LINE(1144)
								_this->zpp_inner->valmod();
								HX_STACK_LINE(1144)
								bool tmp14 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1144)
								if ((tmp14)){
									HX_STACK_LINE(1144)
									_this->zpp_inner->zip_length = false;
									HX_STACK_LINE(1144)
									{
										HX_STACK_LINE(1144)
										_this->zpp_inner->user_length = (int)0;
										HX_STACK_LINE(1144)
										{
											HX_STACK_LINE(1144)
											::zpp_nape::dynamics::ZPP_Contact tmp15 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1144)
											::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp15->next;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(1144)
											while((true)){
												HX_STACK_LINE(1144)
												bool tmp16 = (cx_ite != null());		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(1144)
												bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(1144)
												if ((tmp17)){
													HX_STACK_LINE(1144)
													break;
												}
												HX_STACK_LINE(1144)
												::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(1144)
												bool tmp18 = i->active;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(1144)
												bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(1144)
												if ((tmp18)){
													HX_STACK_LINE(1144)
													tmp19 = i->arbiter->active;
												}
												else{
													HX_STACK_LINE(1144)
													tmp19 = false;
												}
												HX_STACK_LINE(1144)
												if ((tmp19)){
													HX_STACK_LINE(1144)
													(_this->zpp_inner->user_length)++;
												}
												HX_STACK_LINE(1144)
												cx_ite = cx_ite->next;
											}
										}
									}
								}
								HX_STACK_LINE(1144)
								tmp13 = _this->zpp_inner->user_length;
							}
							HX_STACK_LINE(1144)
							tmp11 = (tmp13 == (int)0);
						}
					}
					HX_STACK_LINE(1144)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1144)
					if ((tmp12)){
						HX_STACK_LINE(1145)
						Float px = ((Float)0.0);		HX_STACK_VAR(px,"px");
						HX_STACK_LINE(1146)
						Float py = ((Float)0.0);		HX_STACK_VAR(py,"py");
						HX_STACK_LINE(1147)
						int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1147)
						{
							HX_STACK_LINE(1147)
							::nape::dynamics::ContactList tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1147)
							{
								HX_STACK_LINE(1147)
								::zpp_nape::dynamics::ZPP_ColArbiter tmp15 = carb->zpp_inner->colarb;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1147)
								::nape::dynamics::ContactList tmp16 = tmp15->wrap_contacts;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1147)
								bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1147)
								if ((tmp17)){
									HX_STACK_LINE(1147)
									::zpp_nape::dynamics::ZPP_ColArbiter tmp18 = carb->zpp_inner->colarb;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(1147)
									tmp18->setupcontacts();
								}
								HX_STACK_LINE(1147)
								::zpp_nape::dynamics::ZPP_ColArbiter tmp18 = carb->zpp_inner->colarb;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1147)
								tmp14 = tmp18->wrap_contacts;
							}
							HX_STACK_LINE(1147)
							::nape::dynamics::ContactList _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1147)
							_this->zpp_inner->valmod();
							HX_STACK_LINE(1147)
							bool tmp15 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1147)
							if ((tmp15)){
								HX_STACK_LINE(1147)
								_this->zpp_inner->zip_length = false;
								HX_STACK_LINE(1147)
								{
									HX_STACK_LINE(1147)
									_this->zpp_inner->user_length = (int)0;
									HX_STACK_LINE(1147)
									{
										HX_STACK_LINE(1147)
										::zpp_nape::dynamics::ZPP_Contact tmp16 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(1147)
										::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp16->next;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(1147)
										while((true)){
											HX_STACK_LINE(1147)
											bool tmp17 = (cx_ite != null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(1147)
											bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(1147)
											if ((tmp18)){
												HX_STACK_LINE(1147)
												break;
											}
											HX_STACK_LINE(1147)
											::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(1147)
											bool tmp19 = i->active;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1147)
											bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(1147)
											if ((tmp19)){
												HX_STACK_LINE(1147)
												tmp20 = i->arbiter->active;
											}
											else{
												HX_STACK_LINE(1147)
												tmp20 = false;
											}
											HX_STACK_LINE(1147)
											if ((tmp20)){
												HX_STACK_LINE(1147)
												(_this->zpp_inner->user_length)++;
											}
											HX_STACK_LINE(1147)
											cx_ite = cx_ite->next;
										}
									}
								}
							}
							HX_STACK_LINE(1147)
							tmp13 = _this->zpp_inner->user_length;
						}
						HX_STACK_LINE(1147)
						bool tmp14 = (tmp13 == (int)2);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1147)
						if ((tmp14)){
							HX_STACK_LINE(1148)
							::nape::geom::Vec2 tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1148)
							{
								HX_STACK_LINE(1148)
								::nape::dynamics::ContactList tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1148)
								{
									HX_STACK_LINE(1148)
									::zpp_nape::dynamics::ZPP_ColArbiter tmp17 = carb->zpp_inner->colarb;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1148)
									::nape::dynamics::ContactList tmp18 = tmp17->wrap_contacts;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(1148)
									bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(1148)
									if ((tmp19)){
										HX_STACK_LINE(1148)
										::zpp_nape::dynamics::ZPP_ColArbiter tmp20 = carb->zpp_inner->colarb;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1148)
										tmp20->setupcontacts();
									}
									HX_STACK_LINE(1148)
									::zpp_nape::dynamics::ZPP_ColArbiter tmp20 = carb->zpp_inner->colarb;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(1148)
									tmp16 = tmp20->wrap_contacts;
								}
								HX_STACK_LINE(1148)
								::nape::dynamics::Contact tmp17 = tmp16->at((int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1148)
								::nape::dynamics::Contact _this = tmp17;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1148)
								::nape::geom::Vec2 tmp18 = _this->zpp_inner->wrap_position;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1148)
								bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1148)
								if ((tmp19)){
									HX_STACK_LINE(1148)
									_this->zpp_inner->getposition();
								}
								HX_STACK_LINE(1148)
								tmp15 = _this->zpp_inner->wrap_position;
							}
							HX_STACK_LINE(1148)
							::nape::geom::Vec2 c1 = tmp15;		HX_STACK_VAR(c1,"c1");
							HX_STACK_LINE(1149)
							::nape::geom::Vec2 tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1149)
							{
								HX_STACK_LINE(1149)
								::nape::dynamics::ContactList tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1149)
								{
									HX_STACK_LINE(1149)
									::zpp_nape::dynamics::ZPP_ColArbiter tmp18 = carb->zpp_inner->colarb;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(1149)
									::nape::dynamics::ContactList tmp19 = tmp18->wrap_contacts;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(1149)
									bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(1149)
									if ((tmp20)){
										HX_STACK_LINE(1149)
										::zpp_nape::dynamics::ZPP_ColArbiter tmp21 = carb->zpp_inner->colarb;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1149)
										tmp21->setupcontacts();
									}
									HX_STACK_LINE(1149)
									::zpp_nape::dynamics::ZPP_ColArbiter tmp21 = carb->zpp_inner->colarb;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(1149)
									tmp17 = tmp21->wrap_contacts;
								}
								HX_STACK_LINE(1149)
								::nape::dynamics::Contact tmp18 = tmp17->at((int)1);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1149)
								::nape::dynamics::Contact _this = tmp18;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1149)
								::nape::geom::Vec2 tmp19 = _this->zpp_inner->wrap_position;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1149)
								bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1149)
								if ((tmp20)){
									HX_STACK_LINE(1149)
									_this->zpp_inner->getposition();
								}
								HX_STACK_LINE(1149)
								tmp16 = _this->zpp_inner->wrap_position;
							}
							HX_STACK_LINE(1149)
							::nape::geom::Vec2 c2 = tmp16;		HX_STACK_VAR(c2,"c2");
							HX_STACK_LINE(1150)
							::nape::geom::Vec2 tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1150)
							{
								HX_STACK_LINE(1150)
								::zpp_nape::dynamics::ZPP_ColArbiter tmp18 = carb->zpp_inner->colarb;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1150)
								::nape::geom::Vec2 tmp19 = tmp18->wrap_normal;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1150)
								bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1150)
								if ((tmp20)){
									HX_STACK_LINE(1150)
									::zpp_nape::dynamics::ZPP_ColArbiter tmp21 = carb->zpp_inner->colarb;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(1150)
									tmp21->getnormal();
								}
								HX_STACK_LINE(1150)
								::zpp_nape::dynamics::ZPP_ColArbiter tmp21 = carb->zpp_inner->colarb;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1150)
								tmp17 = tmp21->wrap_normal;
							}
							HX_STACK_LINE(1150)
							::nape::geom::Vec2 n = tmp17;		HX_STACK_VAR(n,"n");
							HX_STACK_LINE(1151)
							Float x = ((Float)0.661437828);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1152)
							Float y = ((Float)0.75);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1153)
							Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1153)
							{
								HX_STACK_LINE(1153)
								{
									HX_STACK_LINE(1153)
									::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1153)
									bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(1153)
									if ((tmp19)){
										HX_STACK_LINE(1153)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1153)
								tmp18 = n->zpp_inner->y;
							}
							HX_STACK_LINE(1153)
							Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1153)
							{
								HX_STACK_LINE(1153)
								{
									HX_STACK_LINE(1153)
									::zpp_nape::geom::ZPP_Vec2 _this = c1->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1153)
									bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(1153)
									if ((tmp20)){
										HX_STACK_LINE(1153)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1153)
								tmp19 = c1->zpp_inner->x;
							}
							HX_STACK_LINE(1153)
							Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1153)
							Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1153)
							{
								HX_STACK_LINE(1153)
								{
									HX_STACK_LINE(1153)
									::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1153)
									bool tmp22 = (_this->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(1153)
									if ((tmp22)){
										HX_STACK_LINE(1153)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1153)
								tmp21 = n->zpp_inner->x;
							}
							HX_STACK_LINE(1153)
							Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1153)
							{
								HX_STACK_LINE(1153)
								{
									HX_STACK_LINE(1153)
									::zpp_nape::geom::ZPP_Vec2 _this = c1->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1153)
									bool tmp23 = (_this->_validate != null());		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1153)
									if ((tmp23)){
										HX_STACK_LINE(1153)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1153)
								tmp22 = c1->zpp_inner->y;
							}
							HX_STACK_LINE(1153)
							Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1153)
							Float tmp24 = (tmp20 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1153)
							Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1153)
							{
								HX_STACK_LINE(1153)
								{
									HX_STACK_LINE(1153)
									::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1153)
									bool tmp26 = (_this->_validate != null());		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1153)
									if ((tmp26)){
										HX_STACK_LINE(1153)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1153)
								tmp25 = n->zpp_inner->y;
							}
							HX_STACK_LINE(1153)
							Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1153)
							{
								HX_STACK_LINE(1153)
								{
									HX_STACK_LINE(1153)
									::zpp_nape::geom::ZPP_Vec2 _this = c2->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1153)
									bool tmp27 = (_this->_validate != null());		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1153)
									if ((tmp27)){
										HX_STACK_LINE(1153)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1153)
								tmp26 = c2->zpp_inner->x;
							}
							HX_STACK_LINE(1153)
							Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1153)
							Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1153)
							{
								HX_STACK_LINE(1153)
								{
									HX_STACK_LINE(1153)
									::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1153)
									bool tmp29 = (_this->_validate != null());		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1153)
									if ((tmp29)){
										HX_STACK_LINE(1153)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1153)
								tmp28 = n->zpp_inner->x;
							}
							HX_STACK_LINE(1153)
							Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1153)
							{
								HX_STACK_LINE(1153)
								{
									HX_STACK_LINE(1153)
									::zpp_nape::geom::ZPP_Vec2 _this = c2->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1153)
									bool tmp30 = (_this->_validate != null());		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(1153)
									if ((tmp30)){
										HX_STACK_LINE(1153)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1153)
								tmp29 = c2->zpp_inner->y;
							}
							HX_STACK_LINE(1153)
							Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1153)
							Float tmp31 = (tmp27 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1153)
							bool tmp32 = (tmp24 < tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1153)
							if ((tmp32)){
								HX_STACK_LINE(1154)
								Float tmp33 = x;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1154)
								Float tmp34 = -(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1154)
								x = tmp34;
								HX_STACK_LINE(1155)
								Float tmp35 = y;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1155)
								Float tmp36 = -(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1155)
								y = tmp36;
							}
							HX_STACK_LINE(1157)
							::openfl::_legacy::display::Graphics tmp33 = this->graphics;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1157)
							::nape::util::ShapeDebug tmp34 = this->outer_zn;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1157)
							Float tmp35 = tmp34->thickness;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1157)
							int tmp36;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1157)
							{
								HX_STACK_LINE(1158)
								int col = (int)255;		HX_STACK_VAR(col,"col");
								HX_STACK_LINE(1159)
								int tmp37 = this->bg_col;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1159)
								int tmp38 = ~(int)(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(1159)
								int ncol = tmp38;		HX_STACK_VAR(ncol,"ncol");
								HX_STACK_LINE(1160)
								Float f = ((Float)0.7);		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(1161)
								int tmp39 = (int(col) >> int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(1161)
								int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(1161)
								Float tmp41 = f;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(1161)
								Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(1161)
								int tmp43 = (int(ncol) >> int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(1161)
								int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(1161)
								Float tmp45 = ((int)1 - f);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(1161)
								Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(1161)
								Float tmp47 = (tmp42 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(1161)
								int tmp48 = ::Std_obj::_int(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(1161)
								int _r = tmp48;		HX_STACK_VAR(_r,"_r");
								HX_STACK_LINE(1162)
								int tmp49 = (int(col) >> int((int)8));		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(1162)
								int tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(1162)
								Float tmp51 = f;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(1162)
								Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(1162)
								int tmp53 = (int(ncol) >> int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(1162)
								int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(1162)
								Float tmp55 = ((int)1 - f);		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(1162)
								Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(1162)
								Float tmp57 = (tmp52 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(1162)
								int tmp58 = ::Std_obj::_int(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(1162)
								int _g = tmp58;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1163)
								int tmp59 = (int(col) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(1163)
								Float tmp60 = f;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(1163)
								Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(1163)
								int tmp62 = (int(ncol) & int((int)255));		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(1163)
								Float tmp63 = ((int)1 - f);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(1163)
								Float tmp64 = (tmp62 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(1163)
								Float tmp65 = (tmp61 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(1163)
								int tmp66 = ::Std_obj::_int(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(1163)
								int _b = tmp66;		HX_STACK_VAR(_b,"_b");
								HX_STACK_LINE(1164)
								int tmp67 = (int(_r) << int((int)16));		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(1164)
								int tmp68 = (int((int)-16777216) | int(tmp67));		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(1164)
								int tmp69 = (int(_g) << int((int)8));		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(1164)
								int tmp70 = (int(tmp68) | int(tmp69));		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(1164)
								int tmp71 = _b;		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(1164)
								tmp36 = (int(tmp70) | int(tmp71));
							}
							HX_STACK_LINE(1157)
							tmp33->lineStyle(tmp35,tmp36,(int)1,null(),null(),null(),null(),null());
							HX_STACK_LINE(1167)
							{
								HX_STACK_LINE(1168)
								Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1168)
								{
									HX_STACK_LINE(1168)
									{
										HX_STACK_LINE(1168)
										::zpp_nape::geom::ZPP_Vec2 _this = c1->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1168)
										bool tmp38 = (_this->_validate != null());		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(1168)
										if ((tmp38)){
											HX_STACK_LINE(1168)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1168)
									tmp37 = c1->zpp_inner->x;
								}
								HX_STACK_LINE(1168)
								Float tmp38;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(1168)
								{
									HX_STACK_LINE(1168)
									{
										HX_STACK_LINE(1168)
										::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1168)
										bool tmp39 = (_this->_validate != null());		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(1168)
										if ((tmp39)){
											HX_STACK_LINE(1168)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1168)
									tmp38 = n->zpp_inner->x;
								}
								HX_STACK_LINE(1168)
								Float tmp39 = y;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(1168)
								Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(1168)
								Float tmp41 = (tmp37 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(1168)
								Float tmp42;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(1168)
								{
									HX_STACK_LINE(1168)
									{
										HX_STACK_LINE(1168)
										::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1168)
										bool tmp43 = (_this->_validate != null());		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(1168)
										if ((tmp43)){
											HX_STACK_LINE(1168)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1168)
									tmp42 = n->zpp_inner->y;
								}
								HX_STACK_LINE(1168)
								Float tmp43 = x;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(1168)
								Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(1168)
								Float tmp45 = (tmp41 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(1168)
								vx = tmp45;
								HX_STACK_LINE(1169)
								Float tmp46;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(1169)
								{
									HX_STACK_LINE(1169)
									{
										HX_STACK_LINE(1169)
										::zpp_nape::geom::ZPP_Vec2 _this = c1->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1169)
										bool tmp47 = (_this->_validate != null());		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(1169)
										if ((tmp47)){
											HX_STACK_LINE(1169)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1169)
									tmp46 = c1->zpp_inner->y;
								}
								HX_STACK_LINE(1169)
								Float tmp47;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(1169)
								{
									HX_STACK_LINE(1169)
									{
										HX_STACK_LINE(1169)
										::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1169)
										bool tmp48 = (_this->_validate != null());		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(1169)
										if ((tmp48)){
											HX_STACK_LINE(1169)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1169)
									tmp47 = n->zpp_inner->y;
								}
								HX_STACK_LINE(1169)
								Float tmp48 = y;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(1169)
								Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(1169)
								Float tmp50 = (tmp46 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(1169)
								Float tmp51;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(1169)
								{
									HX_STACK_LINE(1169)
									{
										HX_STACK_LINE(1169)
										::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1169)
										bool tmp52 = (_this->_validate != null());		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(1169)
										if ((tmp52)){
											HX_STACK_LINE(1169)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1169)
									tmp51 = n->zpp_inner->x;
								}
								HX_STACK_LINE(1169)
								Float tmp52 = x;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(1169)
								Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(1169)
								Float tmp54 = (tmp50 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(1169)
								vy = tmp54;
								HX_STACK_LINE(1178)
								{
								}
							}
							HX_STACK_LINE(1187)
							bool tmp37 = xnull;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1187)
							bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1187)
							if ((tmp38)){
								HX_STACK_LINE(1188)
								Float tmp39 = (xform->a * vx);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(1188)
								Float tmp40 = (xform->b * vy);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(1188)
								Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(1188)
								Float tmp42 = xform->tx;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(1188)
								Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(1188)
								Float t = tmp43;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1189)
								Float tmp44 = (xform->c * vx);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(1189)
								Float tmp45 = (xform->d * vy);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(1189)
								Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(1189)
								Float tmp47 = xform->ty;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(1189)
								Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(1189)
								vy = tmp48;
								HX_STACK_LINE(1190)
								vx = t;
							}
							HX_STACK_LINE(1192)
							::openfl::_legacy::display::Graphics tmp39 = this->graphics;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1192)
							Float tmp40 = vx;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1192)
							Float tmp41 = vy;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1192)
							tmp39->moveTo(tmp40,tmp41);
							HX_STACK_LINE(1193)
							{
								HX_STACK_LINE(1194)
								Float tmp42;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(1194)
								{
									HX_STACK_LINE(1194)
									{
										HX_STACK_LINE(1194)
										::zpp_nape::geom::ZPP_Vec2 _this = c2->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1194)
										bool tmp43 = (_this->_validate != null());		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(1194)
										if ((tmp43)){
											HX_STACK_LINE(1194)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1194)
									tmp42 = c2->zpp_inner->x;
								}
								HX_STACK_LINE(1194)
								Float tmp43;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(1194)
								{
									HX_STACK_LINE(1194)
									{
										HX_STACK_LINE(1194)
										::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1194)
										bool tmp44 = (_this->_validate != null());		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(1194)
										if ((tmp44)){
											HX_STACK_LINE(1194)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1194)
									tmp43 = n->zpp_inner->x;
								}
								HX_STACK_LINE(1194)
								Float tmp44 = y;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(1194)
								Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(1194)
								Float tmp46 = (tmp42 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(1194)
								Float tmp47;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(1194)
								{
									HX_STACK_LINE(1194)
									{
										HX_STACK_LINE(1194)
										::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1194)
										bool tmp48 = (_this->_validate != null());		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(1194)
										if ((tmp48)){
											HX_STACK_LINE(1194)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1194)
									tmp47 = n->zpp_inner->y;
								}
								HX_STACK_LINE(1194)
								Float tmp48 = x;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(1194)
								Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(1194)
								Float tmp50 = (tmp46 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(1194)
								vx = tmp50;
								HX_STACK_LINE(1195)
								Float tmp51;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(1195)
								{
									HX_STACK_LINE(1195)
									{
										HX_STACK_LINE(1195)
										::zpp_nape::geom::ZPP_Vec2 _this = c2->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1195)
										bool tmp52 = (_this->_validate != null());		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(1195)
										if ((tmp52)){
											HX_STACK_LINE(1195)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1195)
									tmp51 = c2->zpp_inner->y;
								}
								HX_STACK_LINE(1195)
								Float tmp52;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(1195)
								{
									HX_STACK_LINE(1195)
									{
										HX_STACK_LINE(1195)
										::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1195)
										bool tmp53 = (_this->_validate != null());		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(1195)
										if ((tmp53)){
											HX_STACK_LINE(1195)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1195)
									tmp52 = n->zpp_inner->y;
								}
								HX_STACK_LINE(1195)
								Float tmp53 = y;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(1195)
								Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(1195)
								Float tmp55 = (tmp51 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(1195)
								Float tmp56;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(1195)
								{
									HX_STACK_LINE(1195)
									{
										HX_STACK_LINE(1195)
										::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1195)
										bool tmp57 = (_this->_validate != null());		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(1195)
										if ((tmp57)){
											HX_STACK_LINE(1195)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1195)
									tmp56 = n->zpp_inner->x;
								}
								HX_STACK_LINE(1195)
								Float tmp57 = x;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(1195)
								Float tmp58 = (tmp56 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(1195)
								Float tmp59 = (tmp55 - tmp58);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(1195)
								vy = tmp59;
								HX_STACK_LINE(1204)
								{
								}
							}
							HX_STACK_LINE(1213)
							bool tmp42 = xnull;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1213)
							bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1213)
							if ((tmp43)){
								HX_STACK_LINE(1214)
								Float tmp44 = (xform->a * vx);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(1214)
								Float tmp45 = (xform->b * vy);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(1214)
								Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(1214)
								Float tmp47 = xform->tx;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(1214)
								Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(1214)
								Float t = tmp48;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1215)
								Float tmp49 = (xform->c * vx);		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(1215)
								Float tmp50 = (xform->d * vy);		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(1215)
								Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(1215)
								Float tmp52 = xform->ty;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(1215)
								Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(1215)
								vy = tmp53;
								HX_STACK_LINE(1216)
								vx = t;
							}
							HX_STACK_LINE(1218)
							::openfl::_legacy::display::Graphics tmp44 = this->graphics;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1218)
							Float tmp45 = vx;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1218)
							Float tmp46 = vy;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1218)
							tmp44->lineTo(tmp45,tmp46);
							HX_STACK_LINE(1219)
							::openfl::_legacy::display::Graphics tmp47 = this->graphics;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1219)
							::nape::util::ShapeDebug tmp48 = this->outer_zn;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1219)
							Float tmp49 = tmp48->thickness;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1219)
							int tmp50;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1219)
							{
								HX_STACK_LINE(1220)
								int col = (int)16711680;		HX_STACK_VAR(col,"col");
								HX_STACK_LINE(1221)
								int tmp51 = this->bg_col;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(1221)
								int tmp52 = ~(int)(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(1221)
								int ncol = tmp52;		HX_STACK_VAR(ncol,"ncol");
								HX_STACK_LINE(1222)
								Float f = ((Float)0.7);		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(1223)
								int tmp53 = (int(col) >> int((int)16));		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(1223)
								int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(1223)
								Float tmp55 = f;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(1223)
								Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(1223)
								int tmp57 = (int(ncol) >> int((int)16));		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(1223)
								int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(1223)
								Float tmp59 = ((int)1 - f);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(1223)
								Float tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(1223)
								Float tmp61 = (tmp56 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(1223)
								int tmp62 = ::Std_obj::_int(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(1223)
								int _r = tmp62;		HX_STACK_VAR(_r,"_r");
								HX_STACK_LINE(1224)
								int tmp63 = (int(col) >> int((int)8));		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(1224)
								int tmp64 = (int(tmp63) & int((int)255));		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(1224)
								Float tmp65 = f;		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(1224)
								Float tmp66 = (tmp64 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(1224)
								int tmp67 = (int(ncol) >> int((int)8));		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(1224)
								int tmp68 = (int(tmp67) & int((int)255));		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(1224)
								Float tmp69 = ((int)1 - f);		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(1224)
								Float tmp70 = (tmp68 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(1224)
								Float tmp71 = (tmp66 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(1224)
								int tmp72 = ::Std_obj::_int(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(1224)
								int _g = tmp72;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1225)
								int tmp73 = (int(col) & int((int)255));		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(1225)
								Float tmp74 = f;		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(1225)
								Float tmp75 = (tmp73 * tmp74);		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(1225)
								int tmp76 = (int(ncol) & int((int)255));		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(1225)
								Float tmp77 = ((int)1 - f);		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(1225)
								Float tmp78 = (tmp76 * tmp77);		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(1225)
								Float tmp79 = (tmp75 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
								HX_STACK_LINE(1225)
								int tmp80 = ::Std_obj::_int(tmp79);		HX_STACK_VAR(tmp80,"tmp80");
								HX_STACK_LINE(1225)
								int _b = tmp80;		HX_STACK_VAR(_b,"_b");
								HX_STACK_LINE(1226)
								int tmp81 = (int(_r) << int((int)16));		HX_STACK_VAR(tmp81,"tmp81");
								HX_STACK_LINE(1226)
								int tmp82 = (int((int)-16777216) | int(tmp81));		HX_STACK_VAR(tmp82,"tmp82");
								HX_STACK_LINE(1226)
								int tmp83 = (int(_g) << int((int)8));		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(1226)
								int tmp84 = (int(tmp82) | int(tmp83));		HX_STACK_VAR(tmp84,"tmp84");
								HX_STACK_LINE(1226)
								int tmp85 = _b;		HX_STACK_VAR(tmp85,"tmp85");
								HX_STACK_LINE(1226)
								tmp50 = (int(tmp84) | int(tmp85));
							}
							HX_STACK_LINE(1219)
							tmp47->lineStyle(tmp49,tmp50,(int)1,null(),null(),null(),null(),null());
							HX_STACK_LINE(1229)
							{
								HX_STACK_LINE(1230)
								Float tmp51;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(1230)
								{
									HX_STACK_LINE(1230)
									{
										HX_STACK_LINE(1230)
										::zpp_nape::geom::ZPP_Vec2 _this = c1->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1230)
										bool tmp52 = (_this->_validate != null());		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(1230)
										if ((tmp52)){
											HX_STACK_LINE(1230)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1230)
									tmp51 = c1->zpp_inner->x;
								}
								HX_STACK_LINE(1230)
								Float tmp52;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(1230)
								{
									HX_STACK_LINE(1230)
									{
										HX_STACK_LINE(1230)
										::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1230)
										bool tmp53 = (_this->_validate != null());		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(1230)
										if ((tmp53)){
											HX_STACK_LINE(1230)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1230)
									tmp52 = n->zpp_inner->x;
								}
								HX_STACK_LINE(1230)
								Float tmp53 = y;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(1230)
								Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(1230)
								Float tmp55 = (tmp51 - tmp54);		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(1230)
								Float tmp56;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(1230)
								{
									HX_STACK_LINE(1230)
									{
										HX_STACK_LINE(1230)
										::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1230)
										bool tmp57 = (_this->_validate != null());		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(1230)
										if ((tmp57)){
											HX_STACK_LINE(1230)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1230)
									tmp56 = n->zpp_inner->y;
								}
								HX_STACK_LINE(1230)
								Float tmp57 = x;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(1230)
								Float tmp58 = (tmp56 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(1230)
								Float tmp59 = (tmp55 - tmp58);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(1230)
								vx = tmp59;
								HX_STACK_LINE(1231)
								Float tmp60;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(1231)
								{
									HX_STACK_LINE(1231)
									{
										HX_STACK_LINE(1231)
										::zpp_nape::geom::ZPP_Vec2 _this = c1->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1231)
										bool tmp61 = (_this->_validate != null());		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(1231)
										if ((tmp61)){
											HX_STACK_LINE(1231)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1231)
									tmp60 = c1->zpp_inner->y;
								}
								HX_STACK_LINE(1231)
								Float tmp61;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(1231)
								{
									HX_STACK_LINE(1231)
									{
										HX_STACK_LINE(1231)
										::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1231)
										bool tmp62 = (_this->_validate != null());		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(1231)
										if ((tmp62)){
											HX_STACK_LINE(1231)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1231)
									tmp61 = n->zpp_inner->y;
								}
								HX_STACK_LINE(1231)
								Float tmp62 = y;		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(1231)
								Float tmp63 = (tmp61 * tmp62);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(1231)
								Float tmp64 = (tmp60 - tmp63);		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(1231)
								Float tmp65;		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(1231)
								{
									HX_STACK_LINE(1231)
									{
										HX_STACK_LINE(1231)
										::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1231)
										bool tmp66 = (_this->_validate != null());		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(1231)
										if ((tmp66)){
											HX_STACK_LINE(1231)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1231)
									tmp65 = n->zpp_inner->x;
								}
								HX_STACK_LINE(1231)
								Float tmp66 = x;		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(1231)
								Float tmp67 = (tmp65 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(1231)
								Float tmp68 = (tmp64 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(1231)
								vy = tmp68;
								HX_STACK_LINE(1240)
								{
								}
							}
							HX_STACK_LINE(1249)
							bool tmp51 = xnull;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1249)
							bool tmp52 = !(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1249)
							if ((tmp52)){
								HX_STACK_LINE(1250)
								Float tmp53 = (xform->a * vx);		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(1250)
								Float tmp54 = (xform->b * vy);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(1250)
								Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(1250)
								Float tmp56 = xform->tx;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(1250)
								Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(1250)
								Float t = tmp57;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1251)
								Float tmp58 = (xform->c * vx);		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(1251)
								Float tmp59 = (xform->d * vy);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(1251)
								Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(1251)
								Float tmp61 = xform->ty;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(1251)
								Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(1251)
								vy = tmp62;
								HX_STACK_LINE(1252)
								vx = t;
							}
							HX_STACK_LINE(1254)
							::openfl::_legacy::display::Graphics tmp53 = this->graphics;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1254)
							Float tmp54 = vx;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1254)
							Float tmp55 = vy;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1254)
							tmp53->moveTo(tmp54,tmp55);
							HX_STACK_LINE(1255)
							{
								HX_STACK_LINE(1256)
								Float tmp56;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(1256)
								{
									HX_STACK_LINE(1256)
									{
										HX_STACK_LINE(1256)
										::zpp_nape::geom::ZPP_Vec2 _this = c2->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1256)
										bool tmp57 = (_this->_validate != null());		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(1256)
										if ((tmp57)){
											HX_STACK_LINE(1256)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1256)
									tmp56 = c2->zpp_inner->x;
								}
								HX_STACK_LINE(1256)
								Float tmp57;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(1256)
								{
									HX_STACK_LINE(1256)
									{
										HX_STACK_LINE(1256)
										::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1256)
										bool tmp58 = (_this->_validate != null());		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(1256)
										if ((tmp58)){
											HX_STACK_LINE(1256)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1256)
									tmp57 = n->zpp_inner->x;
								}
								HX_STACK_LINE(1256)
								Float tmp58 = y;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(1256)
								Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(1256)
								Float tmp60 = (tmp56 - tmp59);		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(1256)
								Float tmp61;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(1256)
								{
									HX_STACK_LINE(1256)
									{
										HX_STACK_LINE(1256)
										::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1256)
										bool tmp62 = (_this->_validate != null());		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(1256)
										if ((tmp62)){
											HX_STACK_LINE(1256)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1256)
									tmp61 = n->zpp_inner->y;
								}
								HX_STACK_LINE(1256)
								Float tmp62 = x;		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(1256)
								Float tmp63 = (tmp61 * tmp62);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(1256)
								Float tmp64 = (tmp60 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(1256)
								vx = tmp64;
								HX_STACK_LINE(1257)
								Float tmp65;		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(1257)
								{
									HX_STACK_LINE(1257)
									{
										HX_STACK_LINE(1257)
										::zpp_nape::geom::ZPP_Vec2 _this = c2->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1257)
										bool tmp66 = (_this->_validate != null());		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(1257)
										if ((tmp66)){
											HX_STACK_LINE(1257)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1257)
									tmp65 = c2->zpp_inner->y;
								}
								HX_STACK_LINE(1257)
								Float tmp66;		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(1257)
								{
									HX_STACK_LINE(1257)
									{
										HX_STACK_LINE(1257)
										::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1257)
										bool tmp67 = (_this->_validate != null());		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(1257)
										if ((tmp67)){
											HX_STACK_LINE(1257)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1257)
									tmp66 = n->zpp_inner->y;
								}
								HX_STACK_LINE(1257)
								Float tmp67 = y;		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(1257)
								Float tmp68 = (tmp66 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(1257)
								Float tmp69 = (tmp65 - tmp68);		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(1257)
								Float tmp70;		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(1257)
								{
									HX_STACK_LINE(1257)
									{
										HX_STACK_LINE(1257)
										::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1257)
										bool tmp71 = (_this->_validate != null());		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(1257)
										if ((tmp71)){
											HX_STACK_LINE(1257)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1257)
									tmp70 = n->zpp_inner->x;
								}
								HX_STACK_LINE(1257)
								Float tmp71 = x;		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(1257)
								Float tmp72 = (tmp70 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(1257)
								Float tmp73 = (tmp69 - tmp72);		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(1257)
								vy = tmp73;
								HX_STACK_LINE(1266)
								{
								}
							}
							HX_STACK_LINE(1275)
							bool tmp56 = xnull;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1275)
							bool tmp57 = !(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1275)
							if ((tmp57)){
								HX_STACK_LINE(1276)
								Float tmp58 = (xform->a * vx);		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(1276)
								Float tmp59 = (xform->b * vy);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(1276)
								Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(1276)
								Float tmp61 = xform->tx;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(1276)
								Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(1276)
								Float t = tmp62;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1277)
								Float tmp63 = (xform->c * vx);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(1277)
								Float tmp64 = (xform->d * vy);		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(1277)
								Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(1277)
								Float tmp66 = xform->ty;		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(1277)
								Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(1277)
								vy = tmp67;
								HX_STACK_LINE(1278)
								vx = t;
							}
							HX_STACK_LINE(1280)
							::openfl::_legacy::display::Graphics tmp58 = this->graphics;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1280)
							Float tmp59 = vx;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1280)
							Float tmp60 = vy;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1280)
							tmp58->lineTo(tmp59,tmp60);
							HX_STACK_LINE(1281)
							{
								HX_STACK_LINE(1282)
								Float tmp61;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(1282)
								{
									HX_STACK_LINE(1282)
									{
										HX_STACK_LINE(1282)
										::zpp_nape::geom::ZPP_Vec2 _this = c1->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1282)
										bool tmp62 = (_this->_validate != null());		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(1282)
										if ((tmp62)){
											HX_STACK_LINE(1282)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1282)
									tmp61 = c1->zpp_inner->x;
								}
								HX_STACK_LINE(1282)
								Float tmp62;		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(1282)
								{
									HX_STACK_LINE(1282)
									{
										HX_STACK_LINE(1282)
										::zpp_nape::geom::ZPP_Vec2 _this = c2->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1282)
										bool tmp63 = (_this->_validate != null());		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(1282)
										if ((tmp63)){
											HX_STACK_LINE(1282)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1282)
									tmp62 = c2->zpp_inner->x;
								}
								HX_STACK_LINE(1282)
								Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(1282)
								Float tmp64 = (((Float)0.5) * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(1282)
								px = tmp64;
								HX_STACK_LINE(1283)
								Float tmp65;		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(1283)
								{
									HX_STACK_LINE(1283)
									{
										HX_STACK_LINE(1283)
										::zpp_nape::geom::ZPP_Vec2 _this = c1->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1283)
										bool tmp66 = (_this->_validate != null());		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(1283)
										if ((tmp66)){
											HX_STACK_LINE(1283)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1283)
									tmp65 = c1->zpp_inner->y;
								}
								HX_STACK_LINE(1283)
								Float tmp66;		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(1283)
								{
									HX_STACK_LINE(1283)
									{
										HX_STACK_LINE(1283)
										::zpp_nape::geom::ZPP_Vec2 _this = c2->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1283)
										bool tmp67 = (_this->_validate != null());		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(1283)
										if ((tmp67)){
											HX_STACK_LINE(1283)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1283)
									tmp66 = c2->zpp_inner->y;
								}
								HX_STACK_LINE(1283)
								Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(1283)
								Float tmp68 = (((Float)0.5) * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(1283)
								py = tmp68;
								HX_STACK_LINE(1292)
								{
								}
							}
							HX_STACK_LINE(1301)
							bool tmp61 = xnull;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1301)
							bool tmp62 = !(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(1301)
							if ((tmp62)){
								HX_STACK_LINE(1302)
								Float tmp63 = (xform->a * px);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(1302)
								Float tmp64 = (xform->b * py);		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(1302)
								Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(1302)
								Float tmp66 = xform->tx;		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(1302)
								Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(1302)
								Float t = tmp67;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1303)
								Float tmp68 = (xform->c * px);		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(1303)
								Float tmp69 = (xform->d * py);		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(1303)
								Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(1303)
								Float tmp71 = xform->ty;		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(1303)
								Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(1303)
								py = tmp72;
								HX_STACK_LINE(1304)
								px = t;
							}
						}
						else{
							HX_STACK_LINE(1308)
							{
								HX_STACK_LINE(1309)
								Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1309)
								{
									HX_STACK_LINE(1309)
									::nape::geom::Vec2 tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1309)
									{
										HX_STACK_LINE(1309)
										::nape::dynamics::ContactList tmp17;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1309)
										{
											HX_STACK_LINE(1309)
											::zpp_nape::dynamics::ZPP_ColArbiter tmp18 = carb->zpp_inner->colarb;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(1309)
											::nape::dynamics::ContactList tmp19 = tmp18->wrap_contacts;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1309)
											bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(1309)
											if ((tmp20)){
												HX_STACK_LINE(1309)
												::zpp_nape::dynamics::ZPP_ColArbiter tmp21 = carb->zpp_inner->colarb;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(1309)
												tmp21->setupcontacts();
											}
											HX_STACK_LINE(1309)
											::zpp_nape::dynamics::ZPP_ColArbiter tmp21 = carb->zpp_inner->colarb;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(1309)
											tmp17 = tmp21->wrap_contacts;
										}
										HX_STACK_LINE(1309)
										::nape::dynamics::Contact tmp18 = tmp17->at((int)0);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1309)
										::nape::dynamics::Contact _this = tmp18;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1309)
										::nape::geom::Vec2 tmp19 = _this->zpp_inner->wrap_position;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1309)
										bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1309)
										if ((tmp20)){
											HX_STACK_LINE(1309)
											_this->zpp_inner->getposition();
										}
										HX_STACK_LINE(1309)
										tmp16 = _this->zpp_inner->wrap_position;
									}
									HX_STACK_LINE(1309)
									::nape::geom::Vec2 _this = tmp16;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1309)
									{
										HX_STACK_LINE(1309)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(1309)
										bool tmp17 = (_this1->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1309)
										if ((tmp17)){
											HX_STACK_LINE(1309)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(1309)
									tmp15 = _this->zpp_inner->x;
								}
								HX_STACK_LINE(1309)
								px = tmp15;
								HX_STACK_LINE(1310)
								Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1310)
								{
									HX_STACK_LINE(1310)
									::nape::geom::Vec2 tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1310)
									{
										HX_STACK_LINE(1310)
										::nape::dynamics::ContactList tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1310)
										{
											HX_STACK_LINE(1310)
											::zpp_nape::dynamics::ZPP_ColArbiter tmp19 = carb->zpp_inner->colarb;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1310)
											::nape::dynamics::ContactList tmp20 = tmp19->wrap_contacts;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(1310)
											bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(1310)
											if ((tmp21)){
												HX_STACK_LINE(1310)
												::zpp_nape::dynamics::ZPP_ColArbiter tmp22 = carb->zpp_inner->colarb;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(1310)
												tmp22->setupcontacts();
											}
											HX_STACK_LINE(1310)
											::zpp_nape::dynamics::ZPP_ColArbiter tmp22 = carb->zpp_inner->colarb;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(1310)
											tmp18 = tmp22->wrap_contacts;
										}
										HX_STACK_LINE(1310)
										::nape::dynamics::Contact tmp19 = tmp18->at((int)0);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1310)
										::nape::dynamics::Contact _this = tmp19;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1310)
										::nape::geom::Vec2 tmp20 = _this->zpp_inner->wrap_position;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1310)
										bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1310)
										if ((tmp21)){
											HX_STACK_LINE(1310)
											_this->zpp_inner->getposition();
										}
										HX_STACK_LINE(1310)
										tmp17 = _this->zpp_inner->wrap_position;
									}
									HX_STACK_LINE(1310)
									::nape::geom::Vec2 _this = tmp17;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1310)
									{
										HX_STACK_LINE(1310)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(1310)
										bool tmp18 = (_this1->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1310)
										if ((tmp18)){
											HX_STACK_LINE(1310)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(1310)
									tmp16 = _this->zpp_inner->y;
								}
								HX_STACK_LINE(1310)
								py = tmp16;
								HX_STACK_LINE(1319)
								{
								}
							}
							HX_STACK_LINE(1328)
							bool tmp15 = xnull;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1328)
							bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1328)
							if ((tmp16)){
								HX_STACK_LINE(1329)
								Float tmp17 = (xform->a * px);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1329)
								Float tmp18 = (xform->b * py);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1329)
								Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1329)
								Float tmp20 = xform->tx;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1329)
								Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1329)
								Float t = tmp21;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1330)
								Float tmp22 = (xform->c * px);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1330)
								Float tmp23 = (xform->d * py);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1330)
								Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1330)
								Float tmp25 = xform->ty;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1330)
								Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1330)
								py = tmp26;
								HX_STACK_LINE(1331)
								px = t;
							}
							HX_STACK_LINE(1333)
							::openfl::_legacy::display::Graphics tmp17 = this->graphics;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1333)
							::nape::util::ShapeDebug tmp18 = this->outer_zn;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1333)
							Float tmp19 = tmp18->thickness;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1333)
							int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1333)
							{
								HX_STACK_LINE(1334)
								int col = (int)16711935;		HX_STACK_VAR(col,"col");
								HX_STACK_LINE(1335)
								int tmp21 = this->bg_col;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1335)
								int tmp22 = ~(int)(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1335)
								int ncol = tmp22;		HX_STACK_VAR(ncol,"ncol");
								HX_STACK_LINE(1336)
								Float f = ((Float)0.7);		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(1337)
								int tmp23 = (int(col) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1337)
								int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1337)
								Float tmp25 = f;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1337)
								Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1337)
								int tmp27 = (int(ncol) >> int((int)16));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1337)
								int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1337)
								Float tmp29 = ((int)1 - f);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1337)
								Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1337)
								Float tmp31 = (tmp26 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1337)
								int tmp32 = ::Std_obj::_int(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1337)
								int _r = tmp32;		HX_STACK_VAR(_r,"_r");
								HX_STACK_LINE(1338)
								int tmp33 = (int(col) >> int((int)8));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1338)
								int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1338)
								Float tmp35 = f;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1338)
								Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1338)
								int tmp37 = (int(ncol) >> int((int)8));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1338)
								int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(1338)
								Float tmp39 = ((int)1 - f);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(1338)
								Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(1338)
								Float tmp41 = (tmp36 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(1338)
								int tmp42 = ::Std_obj::_int(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(1338)
								int _g = tmp42;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1339)
								int tmp43 = (int(col) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(1339)
								Float tmp44 = f;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(1339)
								Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(1339)
								int tmp46 = (int(ncol) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(1339)
								Float tmp47 = ((int)1 - f);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(1339)
								Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(1339)
								Float tmp49 = (tmp45 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(1339)
								int tmp50 = ::Std_obj::_int(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(1339)
								int _b = tmp50;		HX_STACK_VAR(_b,"_b");
								HX_STACK_LINE(1340)
								int tmp51 = (int(_r) << int((int)16));		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(1340)
								int tmp52 = (int((int)-16777216) | int(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(1340)
								int tmp53 = (int(_g) << int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(1340)
								int tmp54 = (int(tmp52) | int(tmp53));		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(1340)
								int tmp55 = _b;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(1340)
								tmp20 = (int(tmp54) | int(tmp55));
							}
							HX_STACK_LINE(1333)
							tmp17->lineStyle(tmp19,tmp20,(int)1,null(),null(),null(),null(),null());
							HX_STACK_LINE(1343)
							::openfl::_legacy::display::Graphics tmp21 = this->graphics;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1343)
							Float tmp22 = px;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1343)
							Float tmp23 = py;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1343)
							tmp21->drawCircle(tmp22,tmp23,(int)1);
						}
						HX_STACK_LINE(1345)
						::openfl::_legacy::display::Graphics tmp15 = this->graphics;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1345)
						::nape::util::ShapeDebug tmp16 = this->outer_zn;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1345)
						Float tmp17 = tmp16->thickness;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1345)
						int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1345)
						{
							HX_STACK_LINE(1346)
							int tmp19 = this->bg_col;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1346)
							int tmp20 = ~(int)(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1346)
							int col = tmp20;		HX_STACK_VAR(col,"col");
							HX_STACK_LINE(1347)
							int tmp21 = this->bg_col;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1347)
							int ncol = tmp21;		HX_STACK_VAR(ncol,"ncol");
							HX_STACK_LINE(1348)
							Float f = ((Float)0.7);		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(1349)
							int tmp22 = (int(col) >> int((int)16));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1349)
							int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1349)
							Float tmp24 = f;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1349)
							Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1349)
							int tmp26 = (int(ncol) >> int((int)16));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1349)
							int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1349)
							Float tmp28 = ((int)1 - f);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1349)
							Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1349)
							Float tmp30 = (tmp25 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1349)
							int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1349)
							int _r = tmp31;		HX_STACK_VAR(_r,"_r");
							HX_STACK_LINE(1350)
							int tmp32 = (int(col) >> int((int)8));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1350)
							int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1350)
							Float tmp34 = f;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1350)
							Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1350)
							int tmp36 = (int(ncol) >> int((int)8));		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1350)
							int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1350)
							Float tmp38 = ((int)1 - f);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1350)
							Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1350)
							Float tmp40 = (tmp35 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1350)
							int tmp41 = ::Std_obj::_int(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1350)
							int _g = tmp41;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1351)
							int tmp42 = (int(col) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1351)
							Float tmp43 = f;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1351)
							Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1351)
							int tmp45 = (int(ncol) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1351)
							Float tmp46 = ((int)1 - f);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1351)
							Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1351)
							Float tmp48 = (tmp44 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1351)
							int tmp49 = ::Std_obj::_int(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1351)
							int _b = tmp49;		HX_STACK_VAR(_b,"_b");
							HX_STACK_LINE(1352)
							int tmp50 = (int(_r) << int((int)16));		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1352)
							int tmp51 = (int((int)-16777216) | int(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1352)
							int tmp52 = (int(_g) << int((int)8));		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1352)
							int tmp53 = (int(tmp51) | int(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1352)
							int tmp54 = _b;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1352)
							tmp18 = (int(tmp53) | int(tmp54));
						}
						HX_STACK_LINE(1345)
						tmp15->lineStyle(tmp17,tmp18,(int)1,null(),null(),null(),null(),null());
						HX_STACK_LINE(1355)
						::openfl::_legacy::display::Graphics tmp19 = this->graphics;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1355)
						Float tmp20 = px;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1355)
						Float tmp21 = py;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1355)
						tmp19->moveTo(tmp20,tmp21);
						HX_STACK_LINE(1356)
						{
							HX_STACK_LINE(1357)
							Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1357)
							{
								HX_STACK_LINE(1357)
								::nape::geom::Vec2 tmp23;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1357)
								{
									HX_STACK_LINE(1357)
									::zpp_nape::dynamics::ZPP_ColArbiter tmp24 = carb->zpp_inner->colarb;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1357)
									::nape::geom::Vec2 tmp25 = tmp24->wrap_normal;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1357)
									bool tmp26 = (tmp25 == null());		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1357)
									if ((tmp26)){
										HX_STACK_LINE(1357)
										::zpp_nape::dynamics::ZPP_ColArbiter tmp27 = carb->zpp_inner->colarb;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1357)
										tmp27->getnormal();
									}
									HX_STACK_LINE(1357)
									::zpp_nape::dynamics::ZPP_ColArbiter tmp27 = carb->zpp_inner->colarb;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1357)
									tmp23 = tmp27->wrap_normal;
								}
								HX_STACK_LINE(1357)
								::nape::geom::Vec2 _this = tmp23;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1357)
								{
									HX_STACK_LINE(1357)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(1357)
									bool tmp24 = (_this1->_validate != null());		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1357)
									if ((tmp24)){
										HX_STACK_LINE(1357)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(1357)
								tmp22 = _this->zpp_inner->x;
							}
							HX_STACK_LINE(1357)
							Float tmp23 = (tmp22 * (int)5);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1357)
							vx = tmp23;
							HX_STACK_LINE(1358)
							Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1358)
							{
								HX_STACK_LINE(1358)
								::nape::geom::Vec2 tmp25;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1358)
								{
									HX_STACK_LINE(1358)
									::zpp_nape::dynamics::ZPP_ColArbiter tmp26 = carb->zpp_inner->colarb;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1358)
									::nape::geom::Vec2 tmp27 = tmp26->wrap_normal;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1358)
									bool tmp28 = (tmp27 == null());		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(1358)
									if ((tmp28)){
										HX_STACK_LINE(1358)
										::zpp_nape::dynamics::ZPP_ColArbiter tmp29 = carb->zpp_inner->colarb;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1358)
										tmp29->getnormal();
									}
									HX_STACK_LINE(1358)
									::zpp_nape::dynamics::ZPP_ColArbiter tmp29 = carb->zpp_inner->colarb;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1358)
									tmp25 = tmp29->wrap_normal;
								}
								HX_STACK_LINE(1358)
								::nape::geom::Vec2 _this = tmp25;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1358)
								{
									HX_STACK_LINE(1358)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(1358)
									bool tmp26 = (_this1->_validate != null());		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1358)
									if ((tmp26)){
										HX_STACK_LINE(1358)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(1358)
								tmp24 = _this->zpp_inner->y;
							}
							HX_STACK_LINE(1358)
							Float tmp25 = (tmp24 * (int)5);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1358)
							vy = tmp25;
							HX_STACK_LINE(1367)
							{
							}
						}
						HX_STACK_LINE(1376)
						bool tmp22 = xnull;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1376)
						bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1376)
						if ((tmp23)){
							HX_STACK_LINE(1377)
							Float tmp24 = (xform->a * vx);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1377)
							Float tmp25 = (xform->b * vy);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1377)
							Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1377)
							Float t = tmp26;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(1378)
							Float tmp27 = (xform->c * vx);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1378)
							Float tmp28 = (xform->d * vy);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1378)
							Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1378)
							vy = tmp29;
							HX_STACK_LINE(1379)
							vx = t;
						}
						HX_STACK_LINE(1381)
						::openfl::_legacy::display::Graphics tmp24 = this->graphics;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1381)
						Float tmp25 = (px + vx);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1381)
						Float tmp26 = (py + vy);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1381)
						tmp24->lineTo(tmp25,tmp26);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_ShapeDebug_obj,draw_arbiter,(void))


ZPP_ShapeDebug_obj::ZPP_ShapeDebug_obj()
{
}

void ZPP_ShapeDebug_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_ShapeDebug);
	HX_MARK_MEMBER_NAME(outer_zn,"outer_zn");
	HX_MARK_MEMBER_NAME(shape,"shape");
	HX_MARK_MEMBER_NAME(graphics,"graphics");
	HX_MARK_MEMBER_NAME(compoundstack,"compoundstack");
	HX_MARK_MEMBER_NAME(shapeList,"shapeList");
	HX_MARK_MEMBER_NAME(bodyList,"bodyList");
	::zpp_nape::util::ZPP_Debug_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_ShapeDebug_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer_zn,"outer_zn");
	HX_VISIT_MEMBER_NAME(shape,"shape");
	HX_VISIT_MEMBER_NAME(graphics,"graphics");
	HX_VISIT_MEMBER_NAME(compoundstack,"compoundstack");
	HX_VISIT_MEMBER_NAME(shapeList,"shapeList");
	HX_VISIT_MEMBER_NAME(bodyList,"bodyList");
	::zpp_nape::util::ZPP_Debug_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_ShapeDebug_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { return shape; }
		if (HX_FIELD_EQ(inName,"setbg") ) { return setbg_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { return outer_zn; }
		if (HX_FIELD_EQ(inName,"graphics") ) { return graphics; }
		if (HX_FIELD_EQ(inName,"bodyList") ) { return bodyList; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shapeList") ) { return shapeList; }
		if (HX_FIELD_EQ(inName,"draw_body") ) { return draw_body_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"draw_space") ) { return draw_space_dyn(); }
		if (HX_FIELD_EQ(inName,"draw_shape") ) { return draw_shape_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"draw_arbiter") ) { return draw_arbiter_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"compoundstack") ) { return compoundstack; }
		if (HX_FIELD_EQ(inName,"draw_compound") ) { return draw_compound_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_ShapeDebug_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { shape=inValue.Cast< ::openfl::_legacy::display::Shape >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast< ::nape::util::ShapeDebug >(); return inValue; }
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=inValue.Cast< ::openfl::_legacy::display::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bodyList") ) { bodyList=inValue.Cast< ::nape::phys::BodyList >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shapeList") ) { shapeList=inValue.Cast< ::nape::shape::ShapeList >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"compoundstack") ) { compoundstack=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Compound >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_ShapeDebug_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2"));
	outFields->push(HX_HCSTRING("shape","\x21","\xe3","\x1c","\x7c"));
	outFields->push(HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"));
	outFields->push(HX_HCSTRING("compoundstack","\xfd","\x5f","\x68","\x73"));
	outFields->push(HX_HCSTRING("shapeList","\x1f","\xd0","\x8f","\xe2"));
	outFields->push(HX_HCSTRING("bodyList","\x20","\xbc","\xd6","\xc6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::util::ShapeDebug*/ ,(int)offsetof(ZPP_ShapeDebug_obj,outer_zn),HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2")},
	{hx::fsObject /*::openfl::_legacy::display::Shape*/ ,(int)offsetof(ZPP_ShapeDebug_obj,shape),HX_HCSTRING("shape","\x21","\xe3","\x1c","\x7c")},
	{hx::fsObject /*::openfl::_legacy::display::Graphics*/ ,(int)offsetof(ZPP_ShapeDebug_obj,graphics),HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Compound*/ ,(int)offsetof(ZPP_ShapeDebug_obj,compoundstack),HX_HCSTRING("compoundstack","\xfd","\x5f","\x68","\x73")},
	{hx::fsObject /*::nape::shape::ShapeList*/ ,(int)offsetof(ZPP_ShapeDebug_obj,shapeList),HX_HCSTRING("shapeList","\x1f","\xd0","\x8f","\xe2")},
	{hx::fsObject /*::nape::phys::BodyList*/ ,(int)offsetof(ZPP_ShapeDebug_obj,bodyList),HX_HCSTRING("bodyList","\x20","\xbc","\xd6","\xc6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2"),
	HX_HCSTRING("shape","\x21","\xe3","\x1c","\x7c"),
	HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"),
	HX_HCSTRING("setbg","\xe7","\x9d","\x2f","\x7a"),
	HX_HCSTRING("compoundstack","\xfd","\x5f","\x68","\x73"),
	HX_HCSTRING("draw_compound","\x46","\xee","\xb9","\x86"),
	HX_HCSTRING("shapeList","\x1f","\xd0","\x8f","\xe2"),
	HX_HCSTRING("bodyList","\x20","\xbc","\xd6","\xc6"),
	HX_HCSTRING("draw_space","\x0b","\xdb","\x7c","\x8a"),
	HX_HCSTRING("draw_body","\xfd","\x5b","\x0a","\x29"),
	HX_HCSTRING("draw_shape","\x66","\x31","\x33","\x85"),
	HX_HCSTRING("draw_arbiter","\x6e","\xe9","\x4f","\x3f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_ShapeDebug_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_ShapeDebug_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_ShapeDebug_obj::__mClass;

void ZPP_ShapeDebug_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZPP_ShapeDebug","\xa2","\x0b","\x32","\xd1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_ShapeDebug_obj >;
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

} // end namespace zpp_nape
} // end namespace util
