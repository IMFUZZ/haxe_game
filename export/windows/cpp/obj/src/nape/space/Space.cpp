#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_InteractionType
#include <nape/callbacks/InteractionType.h>
#endif
#ifndef INCLUDED_nape_callbacks_ListenerList
#include <nape/callbacks/ListenerList.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintIterator
#include <nape/constraint/ConstraintIterator.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintList
#include <nape/constraint/ConstraintList.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterList
#include <nape/dynamics/ArbiterList.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_ConvexResult
#include <nape/geom/ConvexResult.h>
#endif
#ifndef INCLUDED_nape_geom_ConvexResultList
#include <nape/geom/ConvexResultList.h>
#endif
#ifndef INCLUDED_nape_geom_Ray
#include <nape/geom/Ray.h>
#endif
#ifndef INCLUDED_nape_geom_RayResult
#include <nape/geom/RayResult.h>
#endif
#ifndef INCLUDED_nape_geom_RayResultList
#include <nape/geom/RayResultList.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyIterator
#include <nape/phys/BodyIterator.h>
#endif
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
#endif
#ifndef INCLUDED_nape_phys_Compound
#include <nape/phys/Compound.h>
#endif
#ifndef INCLUDED_nape_phys_CompoundIterator
#include <nape/phys/CompoundIterator.h>
#endif
#ifndef INCLUDED_nape_phys_CompoundList
#include <nape/phys/CompoundList.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeIterator
#include <nape/shape/ShapeIterator.h>
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
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionGroup
#include <zpp_nape/dynamics/ZPP_InteractionGroup.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_SpaceArbiterList
#include <zpp_nape/dynamics/ZPP_SpaceArbiterList.h>
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
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Broadphase
#include <zpp_nape/space/ZPP_Broadphase.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Constraint
#include <zpp_nape/util/ZNPNode_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_CompoundList
#include <zpp_nape/util/ZPP_CompoundList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ConstraintList
#include <zpp_nape/util/ZPP_ConstraintList.h>
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
namespace nape{
namespace space{

Void Space_obj::__construct(::nape::geom::Vec2 gravity,::nape::space::Broadphase broadphase)
{
HX_STACK_FRAME("nape.space.Space","new",0xca3d1b6a,"nape.space.Space.new","nape/space/Space.hx",177,0x769bc808)
HX_STACK_THIS(this)
HX_STACK_ARG(gravity,"gravity")
HX_STACK_ARG(broadphase,"broadphase")
{
	HX_STACK_LINE(181)
	this->zpp_inner = null();
	HX_STACK_LINE(544)
	bool tmp = (gravity == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(544)
	::zpp_nape::geom::ZPP_Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(544)
	if ((tmp)){
		HX_STACK_LINE(544)
		tmp1 = null();
	}
	else{
		HX_STACK_LINE(544)
		tmp1 = gravity->zpp_inner;
	}
	HX_STACK_LINE(544)
	::nape::space::Broadphase tmp2 = broadphase;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(544)
	::zpp_nape::space::ZPP_Space tmp3 = ::zpp_nape::space::ZPP_Space_obj::__new(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(544)
	this->zpp_inner = tmp3;
	HX_STACK_LINE(545)
	::zpp_nape::space::ZPP_Space tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(545)
	tmp4->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(546)
	bool tmp5 = (gravity != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(546)
	if ((tmp5)){
		HX_STACK_LINE(547)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(548)
		tmp6 = gravity->zpp_inner->weak;
		HX_STACK_LINE(547)
		if ((tmp6)){
			HX_STACK_LINE(550)
			{
				HX_STACK_LINE(550)
				::zpp_nape::geom::ZPP_Vec2 inner = gravity->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(550)
				gravity->zpp_inner->outer = null();
				HX_STACK_LINE(550)
				gravity->zpp_inner = null();
				HX_STACK_LINE(550)
				{
					HX_STACK_LINE(550)
					::nape::geom::Vec2 o = gravity;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(550)
					::nape::geom::Vec2 tmp7 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(550)
					o->zpp_pool = tmp7;
					HX_STACK_LINE(550)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(550)
				{
					HX_STACK_LINE(550)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(550)
					{
						HX_STACK_LINE(550)
						bool tmp7 = (o->outer != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(550)
						if ((tmp7)){
							HX_STACK_LINE(550)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(550)
							o->outer = null();
						}
						HX_STACK_LINE(550)
						o->_isimmutable = null();
						HX_STACK_LINE(550)
						o->_validate = null();
						HX_STACK_LINE(550)
						o->_invalidate = null();
					}
					HX_STACK_LINE(550)
					::zpp_nape::geom::ZPP_Vec2 tmp7 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(550)
					o->next = tmp7;
					HX_STACK_LINE(550)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(551)
			true;
		}
		else{
			HX_STACK_LINE(554)
			false;
		}
	}
}
;
	return null();
}

//Space_obj::~Space_obj() { }

Dynamic Space_obj::__CreateEmpty() { return  new Space_obj; }
hx::ObjectPtr< Space_obj > Space_obj::__new(::nape::geom::Vec2 gravity,::nape::space::Broadphase broadphase)
{  hx::ObjectPtr< Space_obj > _result_ = new Space_obj();
	_result_->__construct(gravity,broadphase);
	return _result_;}

Dynamic Space_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Space_obj > _result_ = new Space_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Dynamic Space_obj::get_userData( ){
	HX_STACK_FRAME("nape.space.Space","get_userData",0x3f404dd4,"nape.space.Space.get_userData","nape/space/Space.hx",195,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(196)
	::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(196)
	Dynamic tmp1 = tmp->userData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(196)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(196)
	if ((tmp2)){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/space/Space.hx",197,0x769bc808)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(197)
		Dynamic tmp3 = _Function_2_1::Block();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(197)
		::zpp_nape::space::ZPP_Space tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(197)
		tmp4->userData = tmp3;
	}
	HX_STACK_LINE(199)
	::zpp_nape::space::ZPP_Space tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(199)
	Dynamic tmp4 = tmp3->userData;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(199)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_userData,return )

::nape::geom::Vec2 Space_obj::get_gravity( ){
	HX_STACK_FRAME("nape.space.Space","get_gravity",0x5014336f,"nape.space.Space.get_gravity","nape/space/Space.hx",209,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(210)
	::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(210)
	::nape::geom::Vec2 tmp1 = tmp->wrap_gravity;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(210)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(210)
	if ((tmp2)){
		HX_STACK_LINE(210)
		::zpp_nape::space::ZPP_Space tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(210)
		tmp3->getgravity();
	}
	HX_STACK_LINE(211)
	::zpp_nape::space::ZPP_Space tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(211)
	::nape::geom::Vec2 tmp4 = tmp3->wrap_gravity;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(211)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_gravity,return )

::nape::geom::Vec2 Space_obj::set_gravity( ::nape::geom::Vec2 gravity){
	HX_STACK_FRAME("nape.space.Space","set_gravity",0x5a813a7b,"nape.space.Space.set_gravity","nape/space/Space.hx",213,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gravity,"gravity")
	HX_STACK_LINE(223)
	{
		HX_STACK_LINE(223)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(223)
		{
			HX_STACK_LINE(223)
			::zpp_nape::space::ZPP_Space tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(223)
			::nape::geom::Vec2 tmp2 = tmp1->wrap_gravity;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(223)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(223)
			if ((tmp3)){
				HX_STACK_LINE(223)
				::zpp_nape::space::ZPP_Space tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(223)
				tmp4->getgravity();
			}
			HX_STACK_LINE(223)
			::zpp_nape::space::ZPP_Space tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(223)
			tmp = tmp4->wrap_gravity;
		}
		HX_STACK_LINE(223)
		::nape::geom::Vec2 _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(223)
		::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(223)
		{
			HX_STACK_LINE(223)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(223)
					::zpp_nape::geom::ZPP_Vec2 _this1 = gravity->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(223)
					bool tmp3 = (_this1->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(223)
					if ((tmp3)){
						HX_STACK_LINE(223)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(223)
				tmp2 = gravity->zpp_inner->x;
			}
			HX_STACK_LINE(223)
			Float x = tmp2;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(223)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(223)
					::zpp_nape::geom::ZPP_Vec2 _this1 = gravity->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(223)
					bool tmp4 = (_this1->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(223)
					if ((tmp4)){
						HX_STACK_LINE(223)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(223)
				tmp3 = gravity->zpp_inner->y;
			}
			HX_STACK_LINE(223)
			Float y = tmp3;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(223)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(223)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(223)
					bool tmp5 = (_this1->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(223)
					if ((tmp5)){
						HX_STACK_LINE(223)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(223)
				tmp4 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(223)
			Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(223)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(223)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(223)
			if ((tmp6)){
				HX_STACK_LINE(223)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(223)
					{
						HX_STACK_LINE(223)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(223)
						bool tmp9 = (_this1->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(223)
						bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(223)
						bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(223)
						if ((tmp11)){
							HX_STACK_LINE(223)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(223)
					Float tmp9 = _this->zpp_inner->y;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(223)
					tmp8 = tmp9;
				}
				HX_STACK_LINE(223)
				Float tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(223)
				tmp7 = (tmp8 == tmp9);
			}
			else{
				HX_STACK_LINE(223)
				tmp7 = false;
			}
			HX_STACK_LINE(223)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(223)
			if ((tmp8)){
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(223)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(223)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(223)
					{
					}
				}
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(223)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(223)
					bool tmp9 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(223)
					if ((tmp9)){
						HX_STACK_LINE(223)
						::zpp_nape::geom::ZPP_Vec2 tmp10 = _this1;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(223)
						_this1->_invalidate(tmp10);
					}
				}
			}
			HX_STACK_LINE(223)
			tmp1 = _this;
		}
		HX_STACK_LINE(223)
		::nape::geom::Vec2 ret = tmp1;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(223)
		{
			HX_STACK_LINE(223)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(223)
			tmp2 = gravity->zpp_inner->weak;
			HX_STACK_LINE(223)
			if ((tmp2)){
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(223)
					::zpp_nape::geom::ZPP_Vec2 inner = gravity->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(223)
					gravity->zpp_inner->outer = null();
					HX_STACK_LINE(223)
					gravity->zpp_inner = null();
					HX_STACK_LINE(223)
					{
						HX_STACK_LINE(223)
						::nape::geom::Vec2 o = gravity;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(223)
						::nape::geom::Vec2 tmp3 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(223)
						o->zpp_pool = tmp3;
						HX_STACK_LINE(223)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(223)
					{
						HX_STACK_LINE(223)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(223)
						{
							HX_STACK_LINE(223)
							bool tmp3 = (o->outer != null());		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(223)
							if ((tmp3)){
								HX_STACK_LINE(223)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(223)
								o->outer = null();
							}
							HX_STACK_LINE(223)
							o->_isimmutable = null();
							HX_STACK_LINE(223)
							o->_validate = null();
							HX_STACK_LINE(223)
							o->_invalidate = null();
						}
						HX_STACK_LINE(223)
						::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(223)
						o->next = tmp3;
						HX_STACK_LINE(223)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(223)
				true;
			}
			else{
				HX_STACK_LINE(223)
				false;
			}
		}
		HX_STACK_LINE(223)
		ret;
	}
	HX_STACK_LINE(225)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(225)
	{
		HX_STACK_LINE(225)
		::zpp_nape::space::ZPP_Space tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(225)
		::nape::geom::Vec2 tmp2 = tmp1->wrap_gravity;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(225)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(225)
		if ((tmp3)){
			HX_STACK_LINE(225)
			::zpp_nape::space::ZPP_Space tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(225)
			tmp4->getgravity();
		}
		HX_STACK_LINE(225)
		::zpp_nape::space::ZPP_Space tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(225)
		tmp = tmp4->wrap_gravity;
	}
	HX_STACK_LINE(225)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Space_obj,set_gravity,return )

::nape::space::Broadphase Space_obj::get_broadphase( ){
	HX_STACK_FRAME("nape.space.Space","get_broadphase",0x9161c338,"nape.space.Space.get_broadphase","nape/space/Space.hx",232,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(233)
	::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(233)
	bool tmp1 = tmp->bphase->is_sweep;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(233)
	::nape::space::Broadphase tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(233)
	if ((tmp1)){
		HX_STACK_LINE(233)
		::nape::space::Broadphase tmp3 = ::zpp_nape::util::ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(233)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(233)
		if ((tmp4)){
			HX_STACK_LINE(233)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(233)
			::nape::space::Broadphase tmp5 = ::nape::space::Broadphase_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(233)
			::zpp_nape::util::ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE = tmp5;
			HX_STACK_LINE(233)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(233)
		tmp2 = ::zpp_nape::util::ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE;
	}
	else{
		HX_STACK_LINE(233)
		::nape::space::Broadphase tmp3 = ::zpp_nape::util::ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(233)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(233)
		if ((tmp4)){
			HX_STACK_LINE(233)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(233)
			::nape::space::Broadphase tmp5 = ::nape::space::Broadphase_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(233)
			::zpp_nape::util::ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE = tmp5;
			HX_STACK_LINE(233)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(233)
		tmp2 = ::zpp_nape::util::ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE;
	}
	HX_STACK_LINE(233)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_broadphase,return )

bool Space_obj::get_sortContacts( ){
	HX_STACK_FRAME("nape.space.Space","get_sortContacts",0x856c4690,"nape.space.Space.get_sortContacts","nape/space/Space.hx",253,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(254)
	::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(254)
	bool tmp1 = tmp->sortcontacts;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(254)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_sortContacts,return )

bool Space_obj::set_sortContacts( bool sortContacts){
	HX_STACK_FRAME("nape.space.Space","set_sortContacts",0xdbae3404,"nape.space.Space.set_sortContacts","nape/space/Space.hx",256,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sortContacts,"sortContacts")
	HX_STACK_LINE(257)
	{
		HX_STACK_LINE(258)
		::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(258)
		tmp->sortcontacts = sortContacts;
	}
	HX_STACK_LINE(260)
	::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(260)
	bool tmp1 = tmp->sortcontacts;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(260)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Space_obj,set_sortContacts,return )

Float Space_obj::get_worldAngularDrag( ){
	HX_STACK_FRAME("nape.space.Space","get_worldAngularDrag",0x1b380d83,"nape.space.Space.get_worldAngularDrag","nape/space/Space.hx",272,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(273)
	::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(273)
	Float tmp1 = tmp->global_ang_drag;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(273)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_worldAngularDrag,return )

Float Space_obj::set_worldAngularDrag( Float worldAngularDrag){
	HX_STACK_FRAME("nape.space.Space","set_worldAngularDrag",0xe7efc4f7,"nape.space.Space.set_worldAngularDrag","nape/space/Space.hx",275,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(worldAngularDrag,"worldAngularDrag")
	HX_STACK_LINE(276)
	{
		HX_STACK_LINE(277)
		Float d = worldAngularDrag;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(281)
		::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(281)
		tmp->global_ang_drag = d;
	}
	HX_STACK_LINE(283)
	::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(283)
	Float tmp1 = tmp->global_ang_drag;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(283)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Space_obj,set_worldAngularDrag,return )

Float Space_obj::get_worldLinearDrag( ){
	HX_STACK_FRAME("nape.space.Space","get_worldLinearDrag",0x00d4c38c,"nape.space.Space.get_worldLinearDrag","nape/space/Space.hx",295,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(296)
	::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(296)
	Float tmp1 = tmp->global_lin_drag;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(296)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_worldLinearDrag,return )

Float Space_obj::set_worldLinearDrag( Float worldLinearDrag){
	HX_STACK_FRAME("nape.space.Space","set_worldLinearDrag",0x3d71b698,"nape.space.Space.set_worldLinearDrag","nape/space/Space.hx",298,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(worldLinearDrag,"worldLinearDrag")
	HX_STACK_LINE(299)
	{
		HX_STACK_LINE(300)
		Float d = worldLinearDrag;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(304)
		::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(304)
		tmp->global_lin_drag = d;
	}
	HX_STACK_LINE(306)
	::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(306)
	Float tmp1 = tmp->global_lin_drag;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(306)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Space_obj,set_worldLinearDrag,return )

::nape::phys::CompoundList Space_obj::get_compounds( ){
	HX_STACK_FRAME("nape.space.Space","get_compounds",0xaea44a09,"nape.space.Space.get_compounds","nape/space/Space.hx",319,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(320)
	::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(320)
	::nape::phys::CompoundList tmp1 = tmp->wrap_compounds;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(320)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_compounds,return )

::nape::phys::BodyList Space_obj::get_bodies( ){
	HX_STACK_FRAME("nape.space.Space","get_bodies",0x8403157f,"nape.space.Space.get_bodies","nape/space/Space.hx",333,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(334)
	::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(334)
	::nape::phys::BodyList tmp1 = tmp->wrap_bodies;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(334)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_bodies,return )

::nape::phys::BodyList Space_obj::get_liveBodies( ){
	HX_STACK_FRAME("nape.space.Space","get_liveBodies",0xb25d0d0b,"nape.space.Space.get_liveBodies","nape/space/Space.hx",345,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(346)
	::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(346)
	::nape::phys::BodyList tmp1 = tmp->wrap_live;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(346)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_liveBodies,return )

::nape::constraint::ConstraintList Space_obj::get_constraints( ){
	HX_STACK_FRAME("nape.space.Space","get_constraints",0x7a48bb17,"nape.space.Space.get_constraints","nape/space/Space.hx",359,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(360)
	::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(360)
	::nape::constraint::ConstraintList tmp1 = tmp->wrap_constraints;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(360)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_constraints,return )

::nape::constraint::ConstraintList Space_obj::get_liveConstraints( ){
	HX_STACK_FRAME("nape.space.Space","get_liveConstraints",0xc965e80b,"nape.space.Space.get_liveConstraints","nape/space/Space.hx",371,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(372)
	::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(372)
	::nape::constraint::ConstraintList tmp1 = tmp->wrap_livecon;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(372)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_liveConstraints,return )

Void Space_obj::visitBodies( Dynamic lambda){
{
		HX_STACK_FRAME("nape.space.Space","visitBodies",0x367958b5,"nape.space.Space.visitBodies","nape/space/Space.hx",383,0x769bc808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(387)
		{
			HX_STACK_LINE(387)
			::nape::phys::BodyIterator tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(387)
			{
				HX_STACK_LINE(387)
				::zpp_nape::space::ZPP_Space tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(387)
				::nape::phys::BodyList _this = tmp1->wrap_bodies;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(387)
				_this->zpp_inner->valmod();
				HX_STACK_LINE(387)
				::nape::phys::BodyList tmp2 = _this;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(387)
				tmp = ::nape::phys::BodyIterator_obj::get(tmp2);
			}
			HX_STACK_LINE(387)
			::nape::phys::BodyIterator _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(387)
			while((true)){
				HX_STACK_LINE(387)
				bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(387)
				{
					HX_STACK_LINE(387)
					::zpp_nape::util::ZPP_BodyList tmp2 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(387)
					tmp2->valmod();
					HX_STACK_LINE(387)
					int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(387)
					{
						HX_STACK_LINE(387)
						::nape::phys::BodyList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(387)
						_this->zpp_inner->valmod();
						HX_STACK_LINE(387)
						bool tmp4 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(387)
						if ((tmp4)){
							HX_STACK_LINE(387)
							_this->zpp_inner->zip_length = false;
							HX_STACK_LINE(387)
							{
								HX_STACK_LINE(387)
								::zpp_nape::util::ZNPList_ZPP_Body tmp5 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(387)
								_this->zpp_inner->user_length = tmp5->length;
							}
						}
						HX_STACK_LINE(387)
						tmp3 = _this->zpp_inner->user_length;
					}
					HX_STACK_LINE(387)
					int length = tmp3;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(387)
					_g->zpp_critical = true;
					HX_STACK_LINE(387)
					bool tmp4 = (_g->zpp_i < length);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(387)
					if ((tmp4)){
						HX_STACK_LINE(387)
						tmp1 = true;
					}
					else{
						HX_STACK_LINE(387)
						{
							HX_STACK_LINE(387)
							::nape::phys::BodyIterator tmp5 = ::nape::phys::BodyIterator_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(387)
							_g->zpp_next = tmp5;
							HX_STACK_LINE(387)
							::nape::phys::BodyIterator_obj::zpp_pool = _g;
							HX_STACK_LINE(387)
							_g->zpp_inner = null();
						}
						HX_STACK_LINE(387)
						tmp1 = false;
					}
				}
				HX_STACK_LINE(387)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(387)
				if ((tmp2)){
					HX_STACK_LINE(387)
					break;
				}
				HX_STACK_LINE(387)
				::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(387)
				{
					HX_STACK_LINE(387)
					_g->zpp_critical = false;
					HX_STACK_LINE(387)
					int tmp4 = (_g->zpp_i)++;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(387)
					tmp3 = _g->zpp_inner->at(tmp4);
				}
				HX_STACK_LINE(387)
				::nape::phys::Body b = tmp3;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(387)
				::nape::phys::Body tmp4 = b;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(387)
				lambda(tmp4).Cast< Void >();
			}
		}
		HX_STACK_LINE(388)
		{
			HX_STACK_LINE(388)
			::nape::phys::CompoundIterator tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(388)
			{
				HX_STACK_LINE(388)
				::zpp_nape::space::ZPP_Space tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(388)
				::nape::phys::CompoundList _this = tmp1->wrap_compounds;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(388)
				_this->zpp_inner->valmod();
				HX_STACK_LINE(388)
				::nape::phys::CompoundList tmp2 = _this;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(388)
				tmp = ::nape::phys::CompoundIterator_obj::get(tmp2);
			}
			HX_STACK_LINE(388)
			::nape::phys::CompoundIterator _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(388)
			while((true)){
				HX_STACK_LINE(388)
				bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(388)
				{
					HX_STACK_LINE(388)
					::zpp_nape::util::ZPP_CompoundList tmp2 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(388)
					tmp2->valmod();
					HX_STACK_LINE(388)
					int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(388)
					{
						HX_STACK_LINE(388)
						::nape::phys::CompoundList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(388)
						_this->zpp_inner->valmod();
						HX_STACK_LINE(388)
						bool tmp4 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(388)
						if ((tmp4)){
							HX_STACK_LINE(388)
							_this->zpp_inner->zip_length = false;
							HX_STACK_LINE(388)
							{
								HX_STACK_LINE(388)
								::zpp_nape::util::ZNPList_ZPP_Compound tmp5 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(388)
								_this->zpp_inner->user_length = tmp5->length;
							}
						}
						HX_STACK_LINE(388)
						tmp3 = _this->zpp_inner->user_length;
					}
					HX_STACK_LINE(388)
					int length = tmp3;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(388)
					_g->zpp_critical = true;
					HX_STACK_LINE(388)
					bool tmp4 = (_g->zpp_i < length);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(388)
					if ((tmp4)){
						HX_STACK_LINE(388)
						tmp1 = true;
					}
					else{
						HX_STACK_LINE(388)
						{
							HX_STACK_LINE(388)
							::nape::phys::CompoundIterator tmp5 = ::nape::phys::CompoundIterator_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(388)
							_g->zpp_next = tmp5;
							HX_STACK_LINE(388)
							::nape::phys::CompoundIterator_obj::zpp_pool = _g;
							HX_STACK_LINE(388)
							_g->zpp_inner = null();
						}
						HX_STACK_LINE(388)
						tmp1 = false;
					}
				}
				HX_STACK_LINE(388)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(388)
				if ((tmp2)){
					HX_STACK_LINE(388)
					break;
				}
				HX_STACK_LINE(388)
				::nape::phys::Compound tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(388)
				{
					HX_STACK_LINE(388)
					_g->zpp_critical = false;
					HX_STACK_LINE(388)
					int tmp4 = (_g->zpp_i)++;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(388)
					tmp3 = _g->zpp_inner->at(tmp4);
				}
				HX_STACK_LINE(388)
				::nape::phys::Compound c = tmp3;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(388)
				Dynamic tmp4 = lambda;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(388)
				c->visitBodies(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Space_obj,visitBodies,(void))

Void Space_obj::visitConstraints( Dynamic lambda){
{
		HX_STACK_FRAME("nape.space.Space","visitConstraints",0x9c851421,"nape.space.Space.visitConstraints","nape/space/Space.hx",399,0x769bc808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(403)
		{
			HX_STACK_LINE(403)
			::nape::constraint::ConstraintIterator tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(403)
			{
				HX_STACK_LINE(403)
				::zpp_nape::space::ZPP_Space tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(403)
				::nape::constraint::ConstraintList _this = tmp1->wrap_constraints;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(403)
				_this->zpp_inner->valmod();
				HX_STACK_LINE(403)
				::nape::constraint::ConstraintList tmp2 = _this;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(403)
				tmp = ::nape::constraint::ConstraintIterator_obj::get(tmp2);
			}
			HX_STACK_LINE(403)
			::nape::constraint::ConstraintIterator _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(403)
			while((true)){
				HX_STACK_LINE(403)
				bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(403)
				{
					HX_STACK_LINE(403)
					::zpp_nape::util::ZPP_ConstraintList tmp2 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(403)
					tmp2->valmod();
					HX_STACK_LINE(403)
					int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(403)
					{
						HX_STACK_LINE(403)
						::nape::constraint::ConstraintList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(403)
						_this->zpp_inner->valmod();
						HX_STACK_LINE(403)
						bool tmp4 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(403)
						if ((tmp4)){
							HX_STACK_LINE(403)
							_this->zpp_inner->zip_length = false;
							HX_STACK_LINE(403)
							{
								HX_STACK_LINE(403)
								::zpp_nape::util::ZNPList_ZPP_Constraint tmp5 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(403)
								_this->zpp_inner->user_length = tmp5->length;
							}
						}
						HX_STACK_LINE(403)
						tmp3 = _this->zpp_inner->user_length;
					}
					HX_STACK_LINE(403)
					int length = tmp3;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(403)
					_g->zpp_critical = true;
					HX_STACK_LINE(403)
					bool tmp4 = (_g->zpp_i < length);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(403)
					if ((tmp4)){
						HX_STACK_LINE(403)
						tmp1 = true;
					}
					else{
						HX_STACK_LINE(403)
						{
							HX_STACK_LINE(403)
							::nape::constraint::ConstraintIterator tmp5 = ::nape::constraint::ConstraintIterator_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(403)
							_g->zpp_next = tmp5;
							HX_STACK_LINE(403)
							::nape::constraint::ConstraintIterator_obj::zpp_pool = _g;
							HX_STACK_LINE(403)
							_g->zpp_inner = null();
						}
						HX_STACK_LINE(403)
						tmp1 = false;
					}
				}
				HX_STACK_LINE(403)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(403)
				if ((tmp2)){
					HX_STACK_LINE(403)
					break;
				}
				HX_STACK_LINE(403)
				::nape::constraint::Constraint tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(403)
				{
					HX_STACK_LINE(403)
					_g->zpp_critical = false;
					HX_STACK_LINE(403)
					int tmp4 = (_g->zpp_i)++;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(403)
					tmp3 = _g->zpp_inner->at(tmp4);
				}
				HX_STACK_LINE(403)
				::nape::constraint::Constraint c = tmp3;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(403)
				::nape::constraint::Constraint tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(403)
				lambda(tmp4).Cast< Void >();
			}
		}
		HX_STACK_LINE(404)
		{
			HX_STACK_LINE(404)
			::nape::phys::CompoundIterator tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(404)
			{
				HX_STACK_LINE(404)
				::zpp_nape::space::ZPP_Space tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(404)
				::nape::phys::CompoundList _this = tmp1->wrap_compounds;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(404)
				_this->zpp_inner->valmod();
				HX_STACK_LINE(404)
				::nape::phys::CompoundList tmp2 = _this;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(404)
				tmp = ::nape::phys::CompoundIterator_obj::get(tmp2);
			}
			HX_STACK_LINE(404)
			::nape::phys::CompoundIterator _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(404)
			while((true)){
				HX_STACK_LINE(404)
				bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(404)
				{
					HX_STACK_LINE(404)
					::zpp_nape::util::ZPP_CompoundList tmp2 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(404)
					tmp2->valmod();
					HX_STACK_LINE(404)
					int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(404)
					{
						HX_STACK_LINE(404)
						::nape::phys::CompoundList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(404)
						_this->zpp_inner->valmod();
						HX_STACK_LINE(404)
						bool tmp4 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(404)
						if ((tmp4)){
							HX_STACK_LINE(404)
							_this->zpp_inner->zip_length = false;
							HX_STACK_LINE(404)
							{
								HX_STACK_LINE(404)
								::zpp_nape::util::ZNPList_ZPP_Compound tmp5 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(404)
								_this->zpp_inner->user_length = tmp5->length;
							}
						}
						HX_STACK_LINE(404)
						tmp3 = _this->zpp_inner->user_length;
					}
					HX_STACK_LINE(404)
					int length = tmp3;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(404)
					_g->zpp_critical = true;
					HX_STACK_LINE(404)
					bool tmp4 = (_g->zpp_i < length);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(404)
					if ((tmp4)){
						HX_STACK_LINE(404)
						tmp1 = true;
					}
					else{
						HX_STACK_LINE(404)
						{
							HX_STACK_LINE(404)
							::nape::phys::CompoundIterator tmp5 = ::nape::phys::CompoundIterator_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(404)
							_g->zpp_next = tmp5;
							HX_STACK_LINE(404)
							::nape::phys::CompoundIterator_obj::zpp_pool = _g;
							HX_STACK_LINE(404)
							_g->zpp_inner = null();
						}
						HX_STACK_LINE(404)
						tmp1 = false;
					}
				}
				HX_STACK_LINE(404)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(404)
				if ((tmp2)){
					HX_STACK_LINE(404)
					break;
				}
				HX_STACK_LINE(404)
				::nape::phys::Compound tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(404)
				{
					HX_STACK_LINE(404)
					_g->zpp_critical = false;
					HX_STACK_LINE(404)
					int tmp4 = (_g->zpp_i)++;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(404)
					tmp3 = _g->zpp_inner->at(tmp4);
				}
				HX_STACK_LINE(404)
				::nape::phys::Compound c = tmp3;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(404)
				Dynamic tmp4 = lambda;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(404)
				c->visitConstraints(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Space_obj,visitConstraints,(void))

Void Space_obj::visitCompounds( Dynamic lambda){
{
		HX_STACK_FRAME("nape.space.Space","visitCompounds",0xd6eb6c93,"nape.space.Space.visitCompounds","nape/space/Space.hx",419,0x769bc808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(419)
		::nape::phys::CompoundIterator tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(419)
		{
			HX_STACK_LINE(419)
			::zpp_nape::space::ZPP_Space tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(419)
			::nape::phys::CompoundList _this = tmp1->wrap_compounds;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(419)
			_this->zpp_inner->valmod();
			HX_STACK_LINE(419)
			::nape::phys::CompoundList tmp2 = _this;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(419)
			tmp = ::nape::phys::CompoundIterator_obj::get(tmp2);
		}
		HX_STACK_LINE(419)
		::nape::phys::CompoundIterator _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(419)
		while((true)){
			HX_STACK_LINE(419)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(419)
			{
				HX_STACK_LINE(419)
				::zpp_nape::util::ZPP_CompoundList tmp2 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(419)
				tmp2->valmod();
				HX_STACK_LINE(419)
				int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					::nape::phys::CompoundList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(419)
					_this->zpp_inner->valmod();
					HX_STACK_LINE(419)
					bool tmp4 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(419)
					if ((tmp4)){
						HX_STACK_LINE(419)
						_this->zpp_inner->zip_length = false;
						HX_STACK_LINE(419)
						{
							HX_STACK_LINE(419)
							::zpp_nape::util::ZNPList_ZPP_Compound tmp5 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(419)
							_this->zpp_inner->user_length = tmp5->length;
						}
					}
					HX_STACK_LINE(419)
					tmp3 = _this->zpp_inner->user_length;
				}
				HX_STACK_LINE(419)
				int length = tmp3;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(419)
				_g->zpp_critical = true;
				HX_STACK_LINE(419)
				bool tmp4 = (_g->zpp_i < length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(419)
				if ((tmp4)){
					HX_STACK_LINE(419)
					tmp1 = true;
				}
				else{
					HX_STACK_LINE(419)
					{
						HX_STACK_LINE(419)
						::nape::phys::CompoundIterator tmp5 = ::nape::phys::CompoundIterator_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(419)
						_g->zpp_next = tmp5;
						HX_STACK_LINE(419)
						::nape::phys::CompoundIterator_obj::zpp_pool = _g;
						HX_STACK_LINE(419)
						_g->zpp_inner = null();
					}
					HX_STACK_LINE(419)
					tmp1 = false;
				}
			}
			HX_STACK_LINE(419)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(419)
			if ((tmp2)){
				HX_STACK_LINE(419)
				break;
			}
			HX_STACK_LINE(419)
			::nape::phys::Compound tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(419)
			{
				HX_STACK_LINE(419)
				_g->zpp_critical = false;
				HX_STACK_LINE(419)
				int tmp4 = (_g->zpp_i)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(419)
				tmp3 = _g->zpp_inner->at(tmp4);
			}
			HX_STACK_LINE(419)
			::nape::phys::Compound c = tmp3;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(420)
			::nape::phys::Compound tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(420)
			lambda(tmp4).Cast< Void >();
			HX_STACK_LINE(421)
			Dynamic tmp5 = lambda;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(421)
			c->visitCompounds(tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Space_obj,visitCompounds,(void))

::nape::phys::Body Space_obj::get_world( ){
	HX_STACK_FRAME("nape.space.Space","get_world",0x1a582133,"nape.space.Space.get_world","nape/space/Space.hx",436,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(437)
	::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(437)
	::nape::phys::Body tmp1 = tmp->__static;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(437)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_world,return )

::nape::dynamics::ArbiterList Space_obj::get_arbiters( ){
	HX_STACK_FRAME("nape.space.Space","get_arbiters",0x5bc9e429,"nape.space.Space.get_arbiters","nape/space/Space.hx",446,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(447)
	::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(447)
	::nape::dynamics::ArbiterList tmp1 = tmp->wrap_arbiters;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(447)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(447)
	if ((tmp2)){
		HX_STACK_LINE(448)
		::zpp_nape::dynamics::ZPP_SpaceArbiterList tmp3 = ::zpp_nape::dynamics::ZPP_SpaceArbiterList_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(448)
		::zpp_nape::dynamics::ZPP_SpaceArbiterList ret = tmp3;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(449)
		::zpp_nape::space::ZPP_Space tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(449)
		ret->space = tmp4;
		HX_STACK_LINE(450)
		::zpp_nape::space::ZPP_Space tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(450)
		tmp5->wrap_arbiters = ret;
	}
	HX_STACK_LINE(452)
	::zpp_nape::space::ZPP_Space tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(452)
	::nape::dynamics::ArbiterList tmp4 = tmp3->wrap_arbiters;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(452)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_arbiters,return )

::nape::callbacks::ListenerList Space_obj::get_listeners( ){
	HX_STACK_FRAME("nape.space.Space","get_listeners",0x8e3774e0,"nape.space.Space.get_listeners","nape/space/Space.hx",462,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(463)
	::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(463)
	::nape::callbacks::ListenerList tmp1 = tmp->wrap_listeners;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(463)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_listeners,return )

Void Space_obj::clear( ){
{
		HX_STACK_FRAME("nape.space.Space","clear",0x57751317,"nape.space.Space.clear","nape/space/Space.hx",475,0x769bc808)
		HX_STACK_THIS(this)
		HX_STACK_LINE(479)
		::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(479)
		tmp->clear();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,clear,(void))

Void Space_obj::step( Float deltaTime,hx::Null< int >  __o_velocityIterations,hx::Null< int >  __o_positionIterations){
int velocityIterations = __o_velocityIterations.Default(10);
int positionIterations = __o_positionIterations.Default(10);
	HX_STACK_FRAME("nape.space.Space","step",0x2e944502,"nape.space.Space.step","nape/space/Space.hx",501,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(deltaTime,"deltaTime")
	HX_STACK_ARG(velocityIterations,"velocityIterations")
	HX_STACK_ARG(positionIterations,"positionIterations")
{
		HX_STACK_LINE(508)
		::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(508)
		Float tmp1 = deltaTime;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(508)
		int tmp2 = velocityIterations;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(508)
		int tmp3 = positionIterations;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(508)
		tmp->step(tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Space_obj,step,(void))

int Space_obj::get_timeStamp( ){
	HX_STACK_FRAME("nape.space.Space","get_timeStamp",0xd3a55417,"nape.space.Space.get_timeStamp","nape/space/Space.hx",517,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(518)
	::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(518)
	int tmp1 = tmp->stamp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(518)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_timeStamp,return )

Float Space_obj::get_elapsedTime( ){
	HX_STACK_FRAME("nape.space.Space","get_elapsedTime",0x2961c80a,"nape.space.Space.get_elapsedTime","nape/space/Space.hx",527,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(528)
	::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(528)
	Float tmp1 = tmp->time;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(528)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_elapsedTime,return )

::nape::callbacks::InteractionType Space_obj::interactionType( ::nape::shape::Shape shape1,::nape::shape::Shape shape2){
	HX_STACK_FRAME("nape.space.Space","interactionType",0xaa7b59b6,"nape.space.Space.interactionType","nape/space/Space.hx",578,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shape1,"shape1")
	HX_STACK_ARG(shape2,"shape2")
	HX_STACK_LINE(585)
	::zpp_nape::phys::ZPP_Body tmp = shape1->zpp_inner->body;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(585)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(585)
	::nape::phys::Body tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(585)
	if ((tmp1)){
		HX_STACK_LINE(585)
		::zpp_nape::phys::ZPP_Body tmp3 = shape1->zpp_inner->body;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(585)
		tmp2 = tmp3->outer;
	}
	else{
		HX_STACK_LINE(585)
		tmp2 = null();
	}
	HX_STACK_LINE(585)
	int tmp3 = tmp2->zpp_inner->type;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(585)
	int tmp4 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(585)
	bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(585)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(585)
	if ((tmp5)){
		HX_STACK_LINE(585)
		::zpp_nape::phys::ZPP_Body tmp7 = shape2->zpp_inner->body;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(585)
		::zpp_nape::phys::ZPP_Body tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(585)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(585)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(585)
		::nape::phys::Body tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(585)
		bool tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(585)
		if ((tmp12)){
			HX_STACK_LINE(585)
			::zpp_nape::phys::ZPP_Body tmp13 = shape2->zpp_inner->body;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(585)
			::zpp_nape::phys::ZPP_Body tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(585)
			tmp11 = tmp14->outer;
		}
		else{
			HX_STACK_LINE(585)
			tmp11 = null();
		}
		HX_STACK_LINE(585)
		int tmp13 = tmp11->zpp_inner->type;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(585)
		int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(585)
		int tmp15 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(585)
		int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(585)
		tmp6 = (tmp14 == tmp16);
	}
	else{
		HX_STACK_LINE(585)
		tmp6 = false;
	}
	HX_STACK_LINE(585)
	if ((tmp6)){
		HX_STACK_LINE(585)
		return null();
	}
	HX_STACK_LINE(586)
	::zpp_nape::phys::ZPP_Body tmp7 = shape1->zpp_inner->body;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(586)
	bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(586)
	::nape::phys::Body tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(586)
	if ((tmp8)){
		HX_STACK_LINE(586)
		::zpp_nape::phys::ZPP_Body tmp10 = shape1->zpp_inner->body;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(586)
		tmp9 = tmp10->outer;
	}
	else{
		HX_STACK_LINE(586)
		tmp9 = null();
	}
	HX_STACK_LINE(586)
	::zpp_nape::phys::ZPP_Body tmp10 = shape2->zpp_inner->body;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(586)
	bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(586)
	::nape::phys::Body tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(586)
	if ((tmp11)){
		HX_STACK_LINE(586)
		::zpp_nape::phys::ZPP_Body tmp13 = shape2->zpp_inner->body;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(586)
		tmp12 = tmp13->outer;
	}
	else{
		HX_STACK_LINE(586)
		tmp12 = null();
	}
	HX_STACK_LINE(586)
	bool tmp13 = (tmp9 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(586)
	if ((tmp13)){
		HX_STACK_LINE(586)
		return null();
	}
	HX_STACK_LINE(587)
	::zpp_nape::shape::ZPP_Shape s1 = shape1->zpp_inner;		HX_STACK_VAR(s1,"s1");
	HX_STACK_LINE(588)
	::zpp_nape::shape::ZPP_Shape s2 = shape2->zpp_inner;		HX_STACK_VAR(s2,"s2");
	HX_STACK_LINE(589)
	::nape::callbacks::InteractionType tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(589)
	{
		HX_STACK_LINE(589)
		int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(589)
		{
			HX_STACK_LINE(589)
			::zpp_nape::phys::ZPP_Body b1 = s1->body;		HX_STACK_VAR(b1,"b1");
			HX_STACK_LINE(589)
			::zpp_nape::phys::ZPP_Body b2 = s2->body;		HX_STACK_VAR(b2,"b2");
			HX_STACK_LINE(589)
			bool con_ignore;		HX_STACK_VAR(con_ignore,"con_ignore");
			HX_STACK_LINE(589)
			{
				HX_STACK_LINE(589)
				con_ignore = false;
				HX_STACK_LINE(589)
				{
					HX_STACK_LINE(589)
					::zpp_nape::util::ZNPNode_ZPP_Constraint tmp16 = b1->constraints->head;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(589)
					::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = tmp16;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(589)
					while((true)){
						HX_STACK_LINE(589)
						bool tmp17 = (cx_ite != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(589)
						bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(589)
						if ((tmp18)){
							HX_STACK_LINE(589)
							break;
						}
						HX_STACK_LINE(589)
						::zpp_nape::constraint::ZPP_Constraint con = cx_ite->elt;		HX_STACK_VAR(con,"con");
						HX_STACK_LINE(589)
						{
							HX_STACK_LINE(589)
							bool tmp19 = con->ignore;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(589)
							bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(589)
							if ((tmp19)){
								HX_STACK_LINE(589)
								int tmp21 = b1->id;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(589)
								int tmp22 = b2->id;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(589)
								int tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(589)
								int tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(589)
								tmp20 = con->pair_exists(tmp23,tmp24);
							}
							else{
								HX_STACK_LINE(589)
								tmp20 = false;
							}
							HX_STACK_LINE(589)
							if ((tmp20)){
								HX_STACK_LINE(589)
								con_ignore = true;
								HX_STACK_LINE(589)
								break;
							}
						}
						HX_STACK_LINE(589)
						cx_ite = cx_ite->next;
					}
				}
			}
			HX_STACK_LINE(589)
			bool tmp16 = con_ignore;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(589)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(589)
			bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(589)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(589)
			if ((tmp18)){
				HX_STACK_LINE(589)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(589)
				{
					HX_STACK_LINE(589)
					::zpp_nape::dynamics::ZPP_InteractionGroup tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(589)
					{
						HX_STACK_LINE(589)
						::zpp_nape::phys::ZPP_Interactor cur = s1;		HX_STACK_VAR(cur,"cur");
						HX_STACK_LINE(589)
						while((true)){
							HX_STACK_LINE(589)
							bool tmp22 = (cur != null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(589)
							bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(589)
							bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(589)
							bool tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(589)
							if ((tmp25)){
								HX_STACK_LINE(589)
								bool tmp26 = (cur->group == null());		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(589)
								tmp24 = tmp26;
							}
							else{
								HX_STACK_LINE(589)
								tmp24 = false;
							}
							HX_STACK_LINE(589)
							bool tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(589)
							bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(589)
							bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(589)
							bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(589)
							if ((tmp29)){
								HX_STACK_LINE(589)
								break;
							}
							HX_STACK_LINE(589)
							bool tmp30 = (cur->ishape != null());		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(589)
							bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(589)
							bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(589)
							if ((tmp32)){
								HX_STACK_LINE(589)
								::zpp_nape::phys::ZPP_Body tmp33 = cur->ishape->body;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(589)
								::zpp_nape::phys::ZPP_Body tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(589)
								cur = tmp34;
							}
							else{
								HX_STACK_LINE(589)
								bool tmp33 = (cur->icompound != null());		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(589)
								bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(589)
								bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(589)
								if ((tmp35)){
									HX_STACK_LINE(589)
									::zpp_nape::phys::ZPP_Compound tmp36 = cur->icompound->compound;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(589)
									::zpp_nape::phys::ZPP_Compound tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(589)
									cur = tmp37;
								}
								else{
									HX_STACK_LINE(589)
									::zpp_nape::phys::ZPP_Compound tmp36 = cur->ibody->compound;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(589)
									::zpp_nape::phys::ZPP_Compound tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(589)
									cur = tmp37;
								}
							}
						}
						HX_STACK_LINE(589)
						bool tmp22 = (cur == null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(589)
						bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(589)
						bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(589)
						if ((tmp24)){
							HX_STACK_LINE(589)
							tmp21 = null();
						}
						else{
							HX_STACK_LINE(589)
							tmp21 = cur->group;
						}
					}
					HX_STACK_LINE(589)
					::zpp_nape::dynamics::ZPP_InteractionGroup g1 = tmp21;		HX_STACK_VAR(g1,"g1");
					HX_STACK_LINE(589)
					bool tmp22 = (g1 == null());		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(589)
					bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(589)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(589)
					if ((tmp24)){
						HX_STACK_LINE(589)
						tmp20 = false;
					}
					else{
						HX_STACK_LINE(589)
						::zpp_nape::dynamics::ZPP_InteractionGroup tmp25;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(589)
						{
							HX_STACK_LINE(589)
							::zpp_nape::phys::ZPP_Interactor cur = s2;		HX_STACK_VAR(cur,"cur");
							HX_STACK_LINE(589)
							while((true)){
								HX_STACK_LINE(589)
								bool tmp26 = (cur != null());		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(589)
								bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(589)
								bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(589)
								bool tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(589)
								if ((tmp29)){
									HX_STACK_LINE(589)
									bool tmp30 = (cur->group == null());		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(589)
									tmp28 = tmp30;
								}
								else{
									HX_STACK_LINE(589)
									tmp28 = false;
								}
								HX_STACK_LINE(589)
								bool tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(589)
								bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(589)
								bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(589)
								bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(589)
								if ((tmp33)){
									HX_STACK_LINE(589)
									break;
								}
								HX_STACK_LINE(589)
								bool tmp34 = (cur->ishape != null());		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(589)
								bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(589)
								bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(589)
								if ((tmp36)){
									HX_STACK_LINE(589)
									::zpp_nape::phys::ZPP_Body tmp37 = cur->ishape->body;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(589)
									::zpp_nape::phys::ZPP_Body tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(589)
									cur = tmp38;
								}
								else{
									HX_STACK_LINE(589)
									bool tmp37 = (cur->icompound != null());		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(589)
									bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(589)
									bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(589)
									if ((tmp39)){
										HX_STACK_LINE(589)
										::zpp_nape::phys::ZPP_Compound tmp40 = cur->icompound->compound;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(589)
										::zpp_nape::phys::ZPP_Compound tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(589)
										cur = tmp41;
									}
									else{
										HX_STACK_LINE(589)
										::zpp_nape::phys::ZPP_Compound tmp40 = cur->ibody->compound;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(589)
										::zpp_nape::phys::ZPP_Compound tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(589)
										cur = tmp41;
									}
								}
							}
							HX_STACK_LINE(589)
							bool tmp26 = (cur == null());		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(589)
							bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(589)
							bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(589)
							if ((tmp28)){
								HX_STACK_LINE(589)
								tmp25 = null();
							}
							else{
								HX_STACK_LINE(589)
								tmp25 = cur->group;
							}
						}
						HX_STACK_LINE(589)
						::zpp_nape::dynamics::ZPP_InteractionGroup g2 = tmp25;		HX_STACK_VAR(g2,"g2");
						HX_STACK_LINE(589)
						bool tmp26 = (g2 == null());		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(589)
						bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(589)
						bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(589)
						if ((tmp28)){
							HX_STACK_LINE(589)
							tmp20 = false;
						}
						else{
							HX_STACK_LINE(589)
							bool ret = false;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(589)
							while((true)){
								HX_STACK_LINE(589)
								bool tmp29 = (g1 != null());		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(589)
								bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(589)
								bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(589)
								bool tmp32 = tmp30;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(589)
								if ((tmp32)){
									HX_STACK_LINE(589)
									bool tmp33 = (g2 != null());		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(589)
									tmp31 = tmp33;
								}
								else{
									HX_STACK_LINE(589)
									tmp31 = false;
								}
								HX_STACK_LINE(589)
								bool tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(589)
								bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(589)
								bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(589)
								bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(589)
								if ((tmp36)){
									HX_STACK_LINE(589)
									break;
								}
								HX_STACK_LINE(589)
								bool tmp37 = (g1 == g2);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(589)
								bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(589)
								bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(589)
								if ((tmp39)){
									HX_STACK_LINE(589)
									ret = g1->ignore;
									HX_STACK_LINE(589)
									break;
								}
								HX_STACK_LINE(589)
								bool tmp40 = (g1->depth < g2->depth);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(589)
								bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(589)
								bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(589)
								if ((tmp42)){
									HX_STACK_LINE(589)
									g2 = g2->group;
								}
								else{
									HX_STACK_LINE(589)
									g1 = g1->group;
								}
							}
							HX_STACK_LINE(589)
							tmp20 = ret;
						}
					}
				}
				HX_STACK_LINE(589)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(589)
				tmp19 = !(tmp21);
			}
			else{
				HX_STACK_LINE(589)
				tmp19 = false;
			}
			HX_STACK_LINE(589)
			if ((tmp19)){
				HX_STACK_LINE(589)
				bool tmp20 = s1->sensorEnabled;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(589)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(589)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(589)
				bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(589)
				if ((tmp22)){
					HX_STACK_LINE(589)
					tmp23 = s2->sensorEnabled;
				}
				else{
					HX_STACK_LINE(589)
					tmp23 = true;
				}
				HX_STACK_LINE(589)
				bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(589)
				if ((tmp23)){
					HX_STACK_LINE(589)
					::zpp_nape::dynamics::ZPP_InteractionFilter _this = s1->filter;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(589)
					::zpp_nape::dynamics::ZPP_InteractionFilter x = s2->filter;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(589)
					int tmp25 = (int(_this->sensorMask) & int(x->sensorGroup));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(589)
					int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(589)
					bool tmp27 = (tmp26 != (int)0);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(589)
					bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(589)
					bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(589)
					if ((tmp29)){
						HX_STACK_LINE(589)
						int tmp30 = (int(x->sensorMask) & int(_this->sensorGroup));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(589)
						int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(589)
						int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(589)
						tmp24 = (tmp32 != (int)0);
					}
					else{
						HX_STACK_LINE(589)
						tmp24 = false;
					}
				}
				else{
					HX_STACK_LINE(589)
					tmp24 = false;
				}
				HX_STACK_LINE(589)
				if ((tmp24)){
					HX_STACK_LINE(589)
					tmp15 = (int)2;
				}
				else{
					HX_STACK_LINE(589)
					bool tmp25 = s1->fluidEnabled;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(589)
					bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(589)
					bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(589)
					bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(589)
					if ((tmp27)){
						HX_STACK_LINE(589)
						tmp28 = s2->fluidEnabled;
					}
					else{
						HX_STACK_LINE(589)
						tmp28 = true;
					}
					HX_STACK_LINE(589)
					bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(589)
					bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(589)
					if ((tmp29)){
						HX_STACK_LINE(589)
						::zpp_nape::dynamics::ZPP_InteractionFilter _this = s1->filter;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(589)
						::zpp_nape::dynamics::ZPP_InteractionFilter x = s2->filter;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(589)
						int tmp31 = (int(_this->fluidMask) & int(x->fluidGroup));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(589)
						int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(589)
						int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(589)
						bool tmp34 = (tmp33 != (int)0);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(589)
						bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(589)
						bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(589)
						bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(589)
						bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(589)
						if ((tmp38)){
							HX_STACK_LINE(589)
							int tmp39 = (int(x->fluidMask) & int(_this->fluidGroup));		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(589)
							int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(589)
							int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(589)
							int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(589)
							tmp30 = (tmp42 != (int)0);
						}
						else{
							HX_STACK_LINE(589)
							tmp30 = false;
						}
					}
					else{
						HX_STACK_LINE(589)
						tmp30 = false;
					}
					HX_STACK_LINE(589)
					bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(589)
					if ((tmp30)){
						HX_STACK_LINE(589)
						bool tmp32 = (b1->imass == (int)0);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(589)
						bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(589)
						bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(589)
						bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(589)
						bool tmp36 = tmp34;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(589)
						if ((tmp36)){
							HX_STACK_LINE(589)
							bool tmp37 = (b2->imass == (int)0);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(589)
							tmp35 = tmp37;
						}
						else{
							HX_STACK_LINE(589)
							tmp35 = false;
						}
						HX_STACK_LINE(589)
						bool tmp37 = tmp35;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(589)
						bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(589)
						bool tmp39 = tmp37;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(589)
						if ((tmp39)){
							HX_STACK_LINE(589)
							bool tmp40 = (b1->iinertia == (int)0);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(589)
							tmp38 = tmp40;
						}
						else{
							HX_STACK_LINE(589)
							tmp38 = false;
						}
						HX_STACK_LINE(589)
						bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(589)
						bool tmp41 = tmp38;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(589)
						if ((tmp41)){
							HX_STACK_LINE(589)
							bool tmp42 = (b2->iinertia == (int)0);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(589)
							tmp40 = tmp42;
						}
						else{
							HX_STACK_LINE(589)
							tmp40 = false;
						}
						HX_STACK_LINE(589)
						bool tmp42 = tmp40;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(589)
						tmp31 = !(tmp42);
					}
					else{
						HX_STACK_LINE(589)
						tmp31 = false;
					}
					HX_STACK_LINE(589)
					if ((tmp31)){
						HX_STACK_LINE(589)
						tmp15 = (int)0;
					}
					else{
						HX_STACK_LINE(589)
						bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(589)
						{
							HX_STACK_LINE(589)
							::zpp_nape::dynamics::ZPP_InteractionFilter _this = s1->filter;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(589)
							::zpp_nape::dynamics::ZPP_InteractionFilter x = s2->filter;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(589)
							int tmp33 = (int(_this->collisionMask) & int(x->collisionGroup));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(589)
							int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(589)
							bool tmp35 = (tmp34 != (int)0);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(589)
							bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(589)
							bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(589)
							if ((tmp37)){
								HX_STACK_LINE(589)
								int tmp38 = (int(x->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(589)
								int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(589)
								int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(589)
								tmp32 = (tmp40 != (int)0);
							}
							else{
								HX_STACK_LINE(589)
								tmp32 = false;
							}
						}
						HX_STACK_LINE(589)
						bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(589)
						if ((tmp32)){
							HX_STACK_LINE(589)
							bool tmp34 = (b1->imass == (int)0);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(589)
							bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(589)
							bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(589)
							bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(589)
							bool tmp38 = tmp36;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(589)
							if ((tmp38)){
								HX_STACK_LINE(589)
								bool tmp39 = (b2->imass == (int)0);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(589)
								tmp37 = tmp39;
							}
							else{
								HX_STACK_LINE(589)
								tmp37 = false;
							}
							HX_STACK_LINE(589)
							bool tmp39 = tmp37;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(589)
							bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(589)
							bool tmp41 = tmp39;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(589)
							if ((tmp41)){
								HX_STACK_LINE(589)
								bool tmp42 = (b1->iinertia == (int)0);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(589)
								tmp40 = tmp42;
							}
							else{
								HX_STACK_LINE(589)
								tmp40 = false;
							}
							HX_STACK_LINE(589)
							bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(589)
							bool tmp43 = tmp40;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(589)
							if ((tmp43)){
								HX_STACK_LINE(589)
								bool tmp44 = (b2->iinertia == (int)0);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(589)
								tmp42 = tmp44;
							}
							else{
								HX_STACK_LINE(589)
								tmp42 = false;
							}
							HX_STACK_LINE(589)
							bool tmp44 = tmp42;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(589)
							tmp33 = !(tmp44);
						}
						else{
							HX_STACK_LINE(589)
							tmp33 = false;
						}
						HX_STACK_LINE(589)
						if ((tmp33)){
							HX_STACK_LINE(589)
							tmp15 = (int)1;
						}
						else{
							HX_STACK_LINE(589)
							tmp15 = (int)-1;
						}
					}
				}
			}
			else{
				HX_STACK_LINE(589)
				tmp15 = (int)-1;
			}
		}
		HX_STACK_LINE(589)
		int _g = tmp15;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(589)
		int tmp16 = _g;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(589)
		switch( (int)(tmp16)){
			case (int)0: {
				HX_STACK_LINE(590)
				::nape::callbacks::InteractionType tmp17 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(590)
				bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(590)
				if ((tmp18)){
					HX_STACK_LINE(590)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(590)
					::nape::callbacks::InteractionType tmp19 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(590)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = tmp19;
					HX_STACK_LINE(590)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(590)
				tmp14 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(591)
				::nape::callbacks::InteractionType tmp17 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(591)
				bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(591)
				if ((tmp18)){
					HX_STACK_LINE(591)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(591)
					::nape::callbacks::InteractionType tmp19 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(591)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = tmp19;
					HX_STACK_LINE(591)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(591)
				tmp14 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(592)
				::nape::callbacks::InteractionType tmp17 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(592)
				bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(592)
				if ((tmp18)){
					HX_STACK_LINE(592)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(592)
					::nape::callbacks::InteractionType tmp19 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(592)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = tmp19;
					HX_STACK_LINE(592)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(592)
				tmp14 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
			}
			;break;
			default: {
				HX_STACK_LINE(593)
				tmp14 = null();
			}
		}
	}
	HX_STACK_LINE(589)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC2(Space_obj,interactionType,return )

::nape::shape::ShapeList Space_obj::shapesUnderPoint( ::nape::geom::Vec2 point,::nape::dynamics::InteractionFilter filter,::nape::shape::ShapeList output){
	HX_STACK_FRAME("nape.space.Space","shapesUnderPoint",0x226603a0,"nape.space.Space.shapesUnderPoint","nape/space/Space.hx",610,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(619)
	::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(619)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(619)
	{
		HX_STACK_LINE(619)
		{
			HX_STACK_LINE(619)
			::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(619)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(619)
			if ((tmp2)){
				HX_STACK_LINE(619)
				_this->_validate();
			}
		}
		HX_STACK_LINE(619)
		tmp1 = point->zpp_inner->x;
	}
	HX_STACK_LINE(619)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(619)
	{
		HX_STACK_LINE(619)
		{
			HX_STACK_LINE(619)
			::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(619)
			bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(619)
			if ((tmp3)){
				HX_STACK_LINE(619)
				_this->_validate();
			}
		}
		HX_STACK_LINE(619)
		tmp2 = point->zpp_inner->y;
	}
	HX_STACK_LINE(619)
	bool tmp3 = (filter == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(619)
	::zpp_nape::dynamics::ZPP_InteractionFilter tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(619)
	if ((tmp3)){
		HX_STACK_LINE(619)
		tmp4 = null();
	}
	else{
		HX_STACK_LINE(619)
		tmp4 = filter->zpp_inner;
	}
	HX_STACK_LINE(619)
	::nape::shape::ShapeList tmp5 = output;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(619)
	::nape::shape::ShapeList tmp6 = tmp->shapesUnderPoint(tmp1,tmp2,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(619)
	::nape::shape::ShapeList ret = tmp6;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(620)
	{
		HX_STACK_LINE(621)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(622)
		tmp7 = point->zpp_inner->weak;
		HX_STACK_LINE(621)
		if ((tmp7)){
			HX_STACK_LINE(624)
			{
				HX_STACK_LINE(624)
				::zpp_nape::geom::ZPP_Vec2 inner = point->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(624)
				point->zpp_inner->outer = null();
				HX_STACK_LINE(624)
				point->zpp_inner = null();
				HX_STACK_LINE(624)
				{
					HX_STACK_LINE(624)
					::nape::geom::Vec2 o = point;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(624)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(624)
					o->zpp_pool = tmp8;
					HX_STACK_LINE(624)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(624)
				{
					HX_STACK_LINE(624)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(624)
					{
						HX_STACK_LINE(624)
						bool tmp8 = (o->outer != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(624)
						if ((tmp8)){
							HX_STACK_LINE(624)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(624)
							o->outer = null();
						}
						HX_STACK_LINE(624)
						o->_isimmutable = null();
						HX_STACK_LINE(624)
						o->_validate = null();
						HX_STACK_LINE(624)
						o->_invalidate = null();
					}
					HX_STACK_LINE(624)
					::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(624)
					o->next = tmp8;
					HX_STACK_LINE(624)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(625)
			true;
		}
		else{
			HX_STACK_LINE(628)
			false;
		}
	}
	HX_STACK_LINE(631)
	::nape::shape::ShapeList tmp7 = ret;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(631)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC3(Space_obj,shapesUnderPoint,return )

::nape::phys::BodyList Space_obj::bodiesUnderPoint( ::nape::geom::Vec2 point,::nape::dynamics::InteractionFilter filter,::nape::phys::BodyList output){
	HX_STACK_FRAME("nape.space.Space","bodiesUnderPoint",0x5ad9326e,"nape.space.Space.bodiesUnderPoint","nape/space/Space.hx",647,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(656)
	::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(656)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(656)
	{
		HX_STACK_LINE(656)
		{
			HX_STACK_LINE(656)
			::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(656)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(656)
			if ((tmp2)){
				HX_STACK_LINE(656)
				_this->_validate();
			}
		}
		HX_STACK_LINE(656)
		tmp1 = point->zpp_inner->x;
	}
	HX_STACK_LINE(656)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(656)
	{
		HX_STACK_LINE(656)
		{
			HX_STACK_LINE(656)
			::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(656)
			bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(656)
			if ((tmp3)){
				HX_STACK_LINE(656)
				_this->_validate();
			}
		}
		HX_STACK_LINE(656)
		tmp2 = point->zpp_inner->y;
	}
	HX_STACK_LINE(656)
	bool tmp3 = (filter == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(656)
	::zpp_nape::dynamics::ZPP_InteractionFilter tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(656)
	if ((tmp3)){
		HX_STACK_LINE(656)
		tmp4 = null();
	}
	else{
		HX_STACK_LINE(656)
		tmp4 = filter->zpp_inner;
	}
	HX_STACK_LINE(656)
	::nape::phys::BodyList tmp5 = output;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(656)
	::nape::phys::BodyList tmp6 = tmp->bodiesUnderPoint(tmp1,tmp2,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(656)
	::nape::phys::BodyList ret = tmp6;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(657)
	{
		HX_STACK_LINE(658)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(659)
		tmp7 = point->zpp_inner->weak;
		HX_STACK_LINE(658)
		if ((tmp7)){
			HX_STACK_LINE(661)
			{
				HX_STACK_LINE(661)
				::zpp_nape::geom::ZPP_Vec2 inner = point->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(661)
				point->zpp_inner->outer = null();
				HX_STACK_LINE(661)
				point->zpp_inner = null();
				HX_STACK_LINE(661)
				{
					HX_STACK_LINE(661)
					::nape::geom::Vec2 o = point;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(661)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(661)
					o->zpp_pool = tmp8;
					HX_STACK_LINE(661)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(661)
				{
					HX_STACK_LINE(661)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(661)
					{
						HX_STACK_LINE(661)
						bool tmp8 = (o->outer != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(661)
						if ((tmp8)){
							HX_STACK_LINE(661)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(661)
							o->outer = null();
						}
						HX_STACK_LINE(661)
						o->_isimmutable = null();
						HX_STACK_LINE(661)
						o->_validate = null();
						HX_STACK_LINE(661)
						o->_invalidate = null();
					}
					HX_STACK_LINE(661)
					::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(661)
					o->next = tmp8;
					HX_STACK_LINE(661)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(662)
			true;
		}
		else{
			HX_STACK_LINE(665)
			false;
		}
	}
	HX_STACK_LINE(668)
	::nape::phys::BodyList tmp7 = ret;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(668)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC3(Space_obj,bodiesUnderPoint,return )

::nape::shape::ShapeList Space_obj::shapesInAABB( ::nape::geom::AABB aabb,hx::Null< bool >  __o_containment,hx::Null< bool >  __o_strict,::nape::dynamics::InteractionFilter filter,::nape::shape::ShapeList output){
bool containment = __o_containment.Default(false);
bool strict = __o_strict.Default(true);
	HX_STACK_FRAME("nape.space.Space","shapesInAABB",0x7e82208d,"nape.space.Space.shapesInAABB","nape/space/Space.hx",690,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(aabb,"aabb")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(strict,"strict")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
{
		HX_STACK_LINE(695)
		::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(695)
		::nape::geom::AABB tmp1 = aabb;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(695)
		bool tmp2 = strict;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(695)
		bool tmp3 = containment;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(695)
		bool tmp4 = (filter == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(695)
		::zpp_nape::dynamics::ZPP_InteractionFilter tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(695)
		if ((tmp4)){
			HX_STACK_LINE(695)
			tmp5 = null();
		}
		else{
			HX_STACK_LINE(695)
			tmp5 = filter->zpp_inner;
		}
		HX_STACK_LINE(695)
		::nape::shape::ShapeList tmp6 = output;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(695)
		::nape::shape::ShapeList tmp7 = tmp->shapesInAABB(tmp1,tmp2,tmp3,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(695)
		return tmp7;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Space_obj,shapesInAABB,return )

::nape::phys::BodyList Space_obj::bodiesInAABB( ::nape::geom::AABB aabb,hx::Null< bool >  __o_containment,hx::Null< bool >  __o_strict,::nape::dynamics::InteractionFilter filter,::nape::phys::BodyList output){
bool containment = __o_containment.Default(false);
bool strict = __o_strict.Default(true);
	HX_STACK_FRAME("nape.space.Space","bodiesInAABB",0x2326505b,"nape.space.Space.bodiesInAABB","nape/space/Space.hx",718,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(aabb,"aabb")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(strict,"strict")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
{
		HX_STACK_LINE(723)
		::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(723)
		::nape::geom::AABB tmp1 = aabb;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(723)
		bool tmp2 = strict;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(723)
		bool tmp3 = containment;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(723)
		bool tmp4 = (filter == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(723)
		::zpp_nape::dynamics::ZPP_InteractionFilter tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(723)
		if ((tmp4)){
			HX_STACK_LINE(723)
			tmp5 = null();
		}
		else{
			HX_STACK_LINE(723)
			tmp5 = filter->zpp_inner;
		}
		HX_STACK_LINE(723)
		::nape::phys::BodyList tmp6 = output;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(723)
		::nape::phys::BodyList tmp7 = tmp->bodiesInAABB(tmp1,tmp2,tmp3,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(723)
		return tmp7;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Space_obj,bodiesInAABB,return )

::nape::shape::ShapeList Space_obj::shapesInCircle( ::nape::geom::Vec2 position,Float radius,hx::Null< bool >  __o_containment,::nape::dynamics::InteractionFilter filter,::nape::shape::ShapeList output){
bool containment = __o_containment.Default(false);
	HX_STACK_FRAME("nape.space.Space","shapesInCircle",0xb046b15d,"nape.space.Space.shapesInCircle","nape/space/Space.hx",744,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_ARG(radius,"radius")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
{
		HX_STACK_LINE(755)
		::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(755)
		::nape::geom::Vec2 tmp1 = position;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(755)
		Float tmp2 = radius;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(755)
		bool tmp3 = containment;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(755)
		bool tmp4 = (filter == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(755)
		::zpp_nape::dynamics::ZPP_InteractionFilter tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(755)
		if ((tmp4)){
			HX_STACK_LINE(755)
			tmp5 = null();
		}
		else{
			HX_STACK_LINE(755)
			tmp5 = filter->zpp_inner;
		}
		HX_STACK_LINE(755)
		::nape::shape::ShapeList tmp6 = output;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(755)
		::nape::shape::ShapeList tmp7 = tmp->shapesInCircle(tmp1,tmp2,tmp3,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(755)
		::nape::shape::ShapeList ret = tmp7;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(756)
		{
			HX_STACK_LINE(757)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(758)
			tmp8 = position->zpp_inner->weak;
			HX_STACK_LINE(757)
			if ((tmp8)){
				HX_STACK_LINE(760)
				{
					HX_STACK_LINE(760)
					::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(760)
					position->zpp_inner->outer = null();
					HX_STACK_LINE(760)
					position->zpp_inner = null();
					HX_STACK_LINE(760)
					{
						HX_STACK_LINE(760)
						::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(760)
						::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(760)
						o->zpp_pool = tmp9;
						HX_STACK_LINE(760)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(760)
					{
						HX_STACK_LINE(760)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(760)
						{
							HX_STACK_LINE(760)
							bool tmp9 = (o->outer != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(760)
							if ((tmp9)){
								HX_STACK_LINE(760)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(760)
								o->outer = null();
							}
							HX_STACK_LINE(760)
							o->_isimmutable = null();
							HX_STACK_LINE(760)
							o->_validate = null();
							HX_STACK_LINE(760)
							o->_invalidate = null();
						}
						HX_STACK_LINE(760)
						::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(760)
						o->next = tmp9;
						HX_STACK_LINE(760)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(761)
				true;
			}
			else{
				HX_STACK_LINE(764)
				false;
			}
		}
		HX_STACK_LINE(767)
		::nape::shape::ShapeList tmp8 = ret;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(767)
		return tmp8;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Space_obj,shapesInCircle,return )

::nape::phys::BodyList Space_obj::bodiesInCircle( ::nape::geom::Vec2 position,Float radius,hx::Null< bool >  __o_containment,::nape::dynamics::InteractionFilter filter,::nape::phys::BodyList output){
bool containment = __o_containment.Default(false);
	HX_STACK_FRAME("nape.space.Space","bodiesInCircle",0xea30f0ab,"nape.space.Space.bodiesInCircle","nape/space/Space.hx",791,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_ARG(radius,"radius")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
{
		HX_STACK_LINE(802)
		::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(802)
		::nape::geom::Vec2 tmp1 = position;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(802)
		Float tmp2 = radius;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(802)
		bool tmp3 = containment;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(802)
		bool tmp4 = (filter == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(802)
		::zpp_nape::dynamics::ZPP_InteractionFilter tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(802)
		if ((tmp4)){
			HX_STACK_LINE(802)
			tmp5 = null();
		}
		else{
			HX_STACK_LINE(802)
			tmp5 = filter->zpp_inner;
		}
		HX_STACK_LINE(802)
		::nape::phys::BodyList tmp6 = output;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(802)
		::nape::phys::BodyList tmp7 = tmp->bodiesInCircle(tmp1,tmp2,tmp3,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(802)
		::nape::phys::BodyList ret = tmp7;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(803)
		{
			HX_STACK_LINE(804)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(805)
			tmp8 = position->zpp_inner->weak;
			HX_STACK_LINE(804)
			if ((tmp8)){
				HX_STACK_LINE(807)
				{
					HX_STACK_LINE(807)
					::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(807)
					position->zpp_inner->outer = null();
					HX_STACK_LINE(807)
					position->zpp_inner = null();
					HX_STACK_LINE(807)
					{
						HX_STACK_LINE(807)
						::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(807)
						::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(807)
						o->zpp_pool = tmp9;
						HX_STACK_LINE(807)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(807)
					{
						HX_STACK_LINE(807)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(807)
						{
							HX_STACK_LINE(807)
							bool tmp9 = (o->outer != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(807)
							if ((tmp9)){
								HX_STACK_LINE(807)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(807)
								o->outer = null();
							}
							HX_STACK_LINE(807)
							o->_isimmutable = null();
							HX_STACK_LINE(807)
							o->_validate = null();
							HX_STACK_LINE(807)
							o->_invalidate = null();
						}
						HX_STACK_LINE(807)
						::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(807)
						o->next = tmp9;
						HX_STACK_LINE(807)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(808)
				true;
			}
			else{
				HX_STACK_LINE(811)
				false;
			}
		}
		HX_STACK_LINE(814)
		::nape::phys::BodyList tmp8 = ret;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(814)
		return tmp8;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Space_obj,bodiesInCircle,return )

::nape::shape::ShapeList Space_obj::shapesInShape( ::nape::shape::Shape shape,hx::Null< bool >  __o_containment,::nape::dynamics::InteractionFilter filter,::nape::shape::ShapeList output){
bool containment = __o_containment.Default(false);
	HX_STACK_FRAME("nape.space.Space","shapesInShape",0xaa6fcc74,"nape.space.Space.shapesInShape","nape/space/Space.hx",838,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shape,"shape")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
{
		HX_STACK_LINE(847)
		::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(847)
		::zpp_nape::shape::ZPP_Shape tmp1 = shape->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(847)
		bool tmp2 = containment;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(847)
		bool tmp3 = (filter == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(847)
		::zpp_nape::dynamics::ZPP_InteractionFilter tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(847)
		if ((tmp3)){
			HX_STACK_LINE(847)
			tmp4 = null();
		}
		else{
			HX_STACK_LINE(847)
			tmp4 = filter->zpp_inner;
		}
		HX_STACK_LINE(847)
		::nape::shape::ShapeList tmp5 = output;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(847)
		::nape::shape::ShapeList tmp6 = tmp->shapesInShape(tmp1,tmp2,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(847)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Space_obj,shapesInShape,return )

::nape::phys::BodyList Space_obj::bodiesInShape( ::nape::shape::Shape shape,hx::Null< bool >  __o_containment,::nape::dynamics::InteractionFilter filter,::nape::phys::BodyList output){
bool containment = __o_containment.Default(false);
	HX_STACK_FRAME("nape.space.Space","bodiesInShape",0x157570e6,"nape.space.Space.bodiesInShape","nape/space/Space.hx",870,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shape,"shape")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
{
		HX_STACK_LINE(879)
		::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(879)
		::zpp_nape::shape::ZPP_Shape tmp1 = shape->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(879)
		bool tmp2 = containment;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(879)
		bool tmp3 = (filter == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(879)
		::zpp_nape::dynamics::ZPP_InteractionFilter tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(879)
		if ((tmp3)){
			HX_STACK_LINE(879)
			tmp4 = null();
		}
		else{
			HX_STACK_LINE(879)
			tmp4 = filter->zpp_inner;
		}
		HX_STACK_LINE(879)
		::nape::phys::BodyList tmp5 = output;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(879)
		::nape::phys::BodyList tmp6 = tmp->bodiesInShape(tmp1,tmp2,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(879)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Space_obj,bodiesInShape,return )

::nape::shape::ShapeList Space_obj::shapesInBody( ::nape::phys::Body body,::nape::dynamics::InteractionFilter filter,::nape::shape::ShapeList output){
	HX_STACK_FRAME("nape.space.Space","shapesInBody",0x7f4e5caf,"nape.space.Space.shapesInBody","nape/space/Space.hx",898,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(902)
	bool tmp = (output == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(902)
	::nape::shape::ShapeList tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(902)
	if ((tmp)){
		HX_STACK_LINE(902)
		tmp1 = ::nape::shape::ShapeList_obj::__new();
	}
	else{
		HX_STACK_LINE(902)
		tmp1 = output;
	}
	HX_STACK_LINE(902)
	::nape::shape::ShapeList ret = tmp1;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(903)
	{
		HX_STACK_LINE(903)
		::nape::shape::ShapeIterator tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(903)
		{
			HX_STACK_LINE(903)
			::nape::shape::ShapeList tmp3 = body->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(903)
			::nape::shape::ShapeList _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(903)
			_this->zpp_inner->valmod();
			HX_STACK_LINE(903)
			::nape::shape::ShapeList tmp4 = _this;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(903)
			tmp2 = ::nape::shape::ShapeIterator_obj::get(tmp4);
		}
		HX_STACK_LINE(903)
		::nape::shape::ShapeIterator _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(903)
		while((true)){
			HX_STACK_LINE(903)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(903)
			{
				HX_STACK_LINE(903)
				::zpp_nape::util::ZPP_ShapeList tmp4 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(903)
				tmp4->valmod();
				HX_STACK_LINE(903)
				int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(903)
				{
					HX_STACK_LINE(903)
					::nape::shape::ShapeList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(903)
					_this->zpp_inner->valmod();
					HX_STACK_LINE(903)
					bool tmp6 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(903)
					if ((tmp6)){
						HX_STACK_LINE(903)
						_this->zpp_inner->zip_length = false;
						HX_STACK_LINE(903)
						{
							HX_STACK_LINE(903)
							::zpp_nape::util::ZNPList_ZPP_Shape tmp7 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(903)
							_this->zpp_inner->user_length = tmp7->length;
						}
					}
					HX_STACK_LINE(903)
					tmp5 = _this->zpp_inner->user_length;
				}
				HX_STACK_LINE(903)
				int length = tmp5;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(903)
				_g->zpp_critical = true;
				HX_STACK_LINE(903)
				bool tmp6 = (_g->zpp_i < length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(903)
				if ((tmp6)){
					HX_STACK_LINE(903)
					tmp3 = true;
				}
				else{
					HX_STACK_LINE(903)
					{
						HX_STACK_LINE(903)
						::nape::shape::ShapeIterator tmp7 = ::nape::shape::ShapeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(903)
						_g->zpp_next = tmp7;
						HX_STACK_LINE(903)
						::nape::shape::ShapeIterator_obj::zpp_pool = _g;
						HX_STACK_LINE(903)
						_g->zpp_inner = null();
					}
					HX_STACK_LINE(903)
					tmp3 = false;
				}
			}
			HX_STACK_LINE(903)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(903)
			if ((tmp4)){
				HX_STACK_LINE(903)
				break;
			}
			HX_STACK_LINE(903)
			::nape::shape::Shape tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(903)
			{
				HX_STACK_LINE(903)
				_g->zpp_critical = false;
				HX_STACK_LINE(903)
				int tmp6 = (_g->zpp_i)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(903)
				tmp5 = _g->zpp_inner->at(tmp6);
			}
			HX_STACK_LINE(903)
			::nape::shape::Shape shape = tmp5;		HX_STACK_VAR(shape,"shape");
			HX_STACK_LINE(904)
			::nape::shape::Shape tmp6 = shape;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(904)
			::nape::dynamics::InteractionFilter tmp7 = filter;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(904)
			::nape::shape::ShapeList tmp8 = ret;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(904)
			::nape::shape::ShapeList tmp9 = this->shapesInShape(tmp6,false,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(904)
			::nape::shape::ShapeList cur = tmp9;		HX_STACK_VAR(cur,"cur");
		}
	}
	HX_STACK_LINE(906)
	::nape::shape::ShapeList tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(906)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC3(Space_obj,shapesInBody,return )

::nape::phys::BodyList Space_obj::bodiesInBody( ::nape::phys::Body body,::nape::dynamics::InteractionFilter filter,::nape::phys::BodyList output){
	HX_STACK_FRAME("nape.space.Space","bodiesInBody",0x23f28c7d,"nape.space.Space.bodiesInBody","nape/space/Space.hx",924,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(928)
	bool tmp = (output == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(928)
	::nape::phys::BodyList tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(928)
	if ((tmp)){
		HX_STACK_LINE(928)
		tmp1 = ::nape::phys::BodyList_obj::__new();
	}
	else{
		HX_STACK_LINE(928)
		tmp1 = output;
	}
	HX_STACK_LINE(928)
	::nape::phys::BodyList ret = tmp1;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(929)
	{
		HX_STACK_LINE(929)
		::nape::shape::ShapeIterator tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(929)
		{
			HX_STACK_LINE(929)
			::nape::shape::ShapeList tmp3 = body->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(929)
			::nape::shape::ShapeList _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(929)
			_this->zpp_inner->valmod();
			HX_STACK_LINE(929)
			::nape::shape::ShapeList tmp4 = _this;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(929)
			tmp2 = ::nape::shape::ShapeIterator_obj::get(tmp4);
		}
		HX_STACK_LINE(929)
		::nape::shape::ShapeIterator _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(929)
		while((true)){
			HX_STACK_LINE(929)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(929)
			{
				HX_STACK_LINE(929)
				::zpp_nape::util::ZPP_ShapeList tmp4 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(929)
				tmp4->valmod();
				HX_STACK_LINE(929)
				int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(929)
				{
					HX_STACK_LINE(929)
					::nape::shape::ShapeList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(929)
					_this->zpp_inner->valmod();
					HX_STACK_LINE(929)
					bool tmp6 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(929)
					if ((tmp6)){
						HX_STACK_LINE(929)
						_this->zpp_inner->zip_length = false;
						HX_STACK_LINE(929)
						{
							HX_STACK_LINE(929)
							::zpp_nape::util::ZNPList_ZPP_Shape tmp7 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(929)
							_this->zpp_inner->user_length = tmp7->length;
						}
					}
					HX_STACK_LINE(929)
					tmp5 = _this->zpp_inner->user_length;
				}
				HX_STACK_LINE(929)
				int length = tmp5;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(929)
				_g->zpp_critical = true;
				HX_STACK_LINE(929)
				bool tmp6 = (_g->zpp_i < length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(929)
				if ((tmp6)){
					HX_STACK_LINE(929)
					tmp3 = true;
				}
				else{
					HX_STACK_LINE(929)
					{
						HX_STACK_LINE(929)
						::nape::shape::ShapeIterator tmp7 = ::nape::shape::ShapeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(929)
						_g->zpp_next = tmp7;
						HX_STACK_LINE(929)
						::nape::shape::ShapeIterator_obj::zpp_pool = _g;
						HX_STACK_LINE(929)
						_g->zpp_inner = null();
					}
					HX_STACK_LINE(929)
					tmp3 = false;
				}
			}
			HX_STACK_LINE(929)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(929)
			if ((tmp4)){
				HX_STACK_LINE(929)
				break;
			}
			HX_STACK_LINE(929)
			::nape::shape::Shape tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(929)
			{
				HX_STACK_LINE(929)
				_g->zpp_critical = false;
				HX_STACK_LINE(929)
				int tmp6 = (_g->zpp_i)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(929)
				tmp5 = _g->zpp_inner->at(tmp6);
			}
			HX_STACK_LINE(929)
			::nape::shape::Shape shape = tmp5;		HX_STACK_VAR(shape,"shape");
			HX_STACK_LINE(930)
			::nape::shape::Shape tmp6 = shape;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(930)
			::nape::dynamics::InteractionFilter tmp7 = filter;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(930)
			::nape::phys::BodyList tmp8 = ret;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(930)
			::nape::phys::BodyList tmp9 = this->bodiesInShape(tmp6,false,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(930)
			::nape::phys::BodyList cur = tmp9;		HX_STACK_VAR(cur,"cur");
		}
	}
	HX_STACK_LINE(932)
	::nape::phys::BodyList tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(932)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC3(Space_obj,bodiesInBody,return )

::nape::geom::ConvexResult Space_obj::convexCast( ::nape::shape::Shape shape,Float deltaTime,hx::Null< bool >  __o_liveSweep,::nape::dynamics::InteractionFilter filter){
bool liveSweep = __o_liveSweep.Default(false);
	HX_STACK_FRAME("nape.space.Space","convexCast",0x715d8bfc,"nape.space.Space.convexCast","nape/space/Space.hx",957,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shape,"shape")
	HX_STACK_ARG(deltaTime,"deltaTime")
	HX_STACK_ARG(liveSweep,"liveSweep")
	HX_STACK_ARG(filter,"filter")
{
		HX_STACK_LINE(967)
		::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(967)
		::zpp_nape::shape::ZPP_Shape tmp1 = shape->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(967)
		Float tmp2 = deltaTime;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(967)
		::nape::dynamics::InteractionFilter tmp3 = filter;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(967)
		bool tmp4 = liveSweep;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(967)
		::nape::geom::ConvexResult tmp5 = tmp->convexCast(tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(967)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Space_obj,convexCast,return )

::nape::geom::ConvexResultList Space_obj::convexMultiCast( ::nape::shape::Shape shape,Float deltaTime,hx::Null< bool >  __o_liveSweep,::nape::dynamics::InteractionFilter filter,::nape::geom::ConvexResultList output){
bool liveSweep = __o_liveSweep.Default(false);
	HX_STACK_FRAME("nape.space.Space","convexMultiCast",0x0e887b7b,"nape.space.Space.convexMultiCast","nape/space/Space.hx",992,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shape,"shape")
	HX_STACK_ARG(deltaTime,"deltaTime")
	HX_STACK_ARG(liveSweep,"liveSweep")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
{
		HX_STACK_LINE(1002)
		::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1002)
		::zpp_nape::shape::ZPP_Shape tmp1 = shape->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1002)
		Float tmp2 = deltaTime;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1002)
		::nape::dynamics::InteractionFilter tmp3 = filter;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1002)
		bool tmp4 = liveSweep;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1002)
		::nape::geom::ConvexResultList tmp5 = output;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1002)
		::nape::geom::ConvexResultList tmp6 = tmp->convexMultiCast(tmp1,tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1002)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Space_obj,convexMultiCast,return )

::nape::geom::RayResult Space_obj::rayCast( ::nape::geom::Ray ray,hx::Null< bool >  __o_inner,::nape::dynamics::InteractionFilter filter){
bool inner = __o_inner.Default(false);
	HX_STACK_FRAME("nape.space.Space","rayCast",0x6728f5d3,"nape.space.Space.rayCast","nape/space/Space.hx",1023,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ray,"ray")
	HX_STACK_ARG(inner,"inner")
	HX_STACK_ARG(filter,"filter")
{
		HX_STACK_LINE(1027)
		::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1027)
		::nape::geom::Ray tmp1 = ray;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1027)
		bool tmp2 = inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1027)
		::nape::dynamics::InteractionFilter tmp3 = filter;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1027)
		::nape::geom::RayResult tmp4 = tmp->rayCast(tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1027)
		return tmp4;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Space_obj,rayCast,return )

::nape::geom::RayResultList Space_obj::rayMultiCast( ::nape::geom::Ray ray,hx::Null< bool >  __o_inner,::nape::dynamics::InteractionFilter filter,::nape::geom::RayResultList output){
bool inner = __o_inner.Default(false);
	HX_STACK_FRAME("nape.space.Space","rayMultiCast",0xa87b0644,"nape.space.Space.rayMultiCast","nape/space/Space.hx",1048,0x769bc808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ray,"ray")
	HX_STACK_ARG(inner,"inner")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
{
		HX_STACK_LINE(1052)
		::zpp_nape::space::ZPP_Space tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1052)
		::nape::geom::Ray tmp1 = ray;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1052)
		bool tmp2 = inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1052)
		::nape::dynamics::InteractionFilter tmp3 = filter;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1052)
		::nape::geom::RayResultList tmp4 = output;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1052)
		::nape::geom::RayResultList tmp5 = tmp->rayMultiCast(tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1052)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Space_obj,rayMultiCast,return )


Space_obj::Space_obj()
{
}

void Space_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Space);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void Space_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic Space_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"step") ) { return step_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"world") ) { if (inCallProp == hx::paccAlways) return get_world(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bodies") ) { if (inCallProp == hx::paccAlways) return get_bodies(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { if (inCallProp == hx::paccAlways) return get_gravity(); }
		if (HX_FIELD_EQ(inName,"rayCast") ) { return rayCast_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { if (inCallProp == hx::paccAlways) return get_userData(); }
		if (HX_FIELD_EQ(inName,"arbiters") ) { if (inCallProp == hx::paccAlways) return get_arbiters(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"compounds") ) { if (inCallProp == hx::paccAlways) return get_compounds(); }
		if (HX_FIELD_EQ(inName,"get_world") ) { return get_world_dyn(); }
		if (HX_FIELD_EQ(inName,"listeners") ) { if (inCallProp == hx::paccAlways) return get_listeners(); }
		if (HX_FIELD_EQ(inName,"timeStamp") ) { if (inCallProp == hx::paccAlways) return get_timeStamp(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"broadphase") ) { if (inCallProp == hx::paccAlways) return get_broadphase(); }
		if (HX_FIELD_EQ(inName,"get_bodies") ) { return get_bodies_dyn(); }
		if (HX_FIELD_EQ(inName,"liveBodies") ) { if (inCallProp == hx::paccAlways) return get_liveBodies(); }
		if (HX_FIELD_EQ(inName,"convexCast") ) { return convexCast_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_gravity") ) { return get_gravity_dyn(); }
		if (HX_FIELD_EQ(inName,"set_gravity") ) { return set_gravity_dyn(); }
		if (HX_FIELD_EQ(inName,"constraints") ) { if (inCallProp == hx::paccAlways) return get_constraints(); }
		if (HX_FIELD_EQ(inName,"visitBodies") ) { return visitBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"elapsedTime") ) { if (inCallProp == hx::paccAlways) return get_elapsedTime(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_userData") ) { return get_userData_dyn(); }
		if (HX_FIELD_EQ(inName,"sortContacts") ) { if (inCallProp == hx::paccAlways) return get_sortContacts(); }
		if (HX_FIELD_EQ(inName,"get_arbiters") ) { return get_arbiters_dyn(); }
		if (HX_FIELD_EQ(inName,"shapesInAABB") ) { return shapesInAABB_dyn(); }
		if (HX_FIELD_EQ(inName,"bodiesInAABB") ) { return bodiesInAABB_dyn(); }
		if (HX_FIELD_EQ(inName,"shapesInBody") ) { return shapesInBody_dyn(); }
		if (HX_FIELD_EQ(inName,"bodiesInBody") ) { return bodiesInBody_dyn(); }
		if (HX_FIELD_EQ(inName,"rayMultiCast") ) { return rayMultiCast_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_compounds") ) { return get_compounds_dyn(); }
		if (HX_FIELD_EQ(inName,"get_listeners") ) { return get_listeners_dyn(); }
		if (HX_FIELD_EQ(inName,"get_timeStamp") ) { return get_timeStamp_dyn(); }
		if (HX_FIELD_EQ(inName,"shapesInShape") ) { return shapesInShape_dyn(); }
		if (HX_FIELD_EQ(inName,"bodiesInShape") ) { return bodiesInShape_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_broadphase") ) { return get_broadphase_dyn(); }
		if (HX_FIELD_EQ(inName,"get_liveBodies") ) { return get_liveBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"visitCompounds") ) { return visitCompounds_dyn(); }
		if (HX_FIELD_EQ(inName,"shapesInCircle") ) { return shapesInCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"bodiesInCircle") ) { return bodiesInCircle_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"worldLinearDrag") ) { if (inCallProp == hx::paccAlways) return get_worldLinearDrag(); }
		if (HX_FIELD_EQ(inName,"get_constraints") ) { return get_constraints_dyn(); }
		if (HX_FIELD_EQ(inName,"liveConstraints") ) { if (inCallProp == hx::paccAlways) return get_liveConstraints(); }
		if (HX_FIELD_EQ(inName,"get_elapsedTime") ) { return get_elapsedTime_dyn(); }
		if (HX_FIELD_EQ(inName,"interactionType") ) { return interactionType_dyn(); }
		if (HX_FIELD_EQ(inName,"convexMultiCast") ) { return convexMultiCast_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_sortContacts") ) { return get_sortContacts_dyn(); }
		if (HX_FIELD_EQ(inName,"set_sortContacts") ) { return set_sortContacts_dyn(); }
		if (HX_FIELD_EQ(inName,"worldAngularDrag") ) { if (inCallProp == hx::paccAlways) return get_worldAngularDrag(); }
		if (HX_FIELD_EQ(inName,"visitConstraints") ) { return visitConstraints_dyn(); }
		if (HX_FIELD_EQ(inName,"shapesUnderPoint") ) { return shapesUnderPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"bodiesUnderPoint") ) { return bodiesUnderPoint_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_worldLinearDrag") ) { return get_worldLinearDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"set_worldLinearDrag") ) { return set_worldLinearDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"get_liveConstraints") ) { return get_liveConstraints_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_worldAngularDrag") ) { return get_worldAngularDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"set_worldAngularDrag") ) { return set_worldAngularDrag_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Space_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { if (inCallProp == hx::paccAlways) return set_gravity(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::space::ZPP_Space >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sortContacts") ) { if (inCallProp == hx::paccAlways) return set_sortContacts(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"worldLinearDrag") ) { if (inCallProp == hx::paccAlways) return set_worldLinearDrag(inValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"worldAngularDrag") ) { if (inCallProp == hx::paccAlways) return set_worldAngularDrag(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Space_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("userData","\x15","\x96","\x28","\x05"));
	outFields->push(HX_HCSTRING("gravity","\x4e","\x6e","\xff","\x77"));
	outFields->push(HX_HCSTRING("broadphase","\xb9","\x5d","\x1d","\xd8"));
	outFields->push(HX_HCSTRING("sortContacts","\x51","\x43","\x24","\xa6"));
	outFields->push(HX_HCSTRING("worldAngularDrag","\xc4","\xfe","\xf3","\x7d"));
	outFields->push(HX_HCSTRING("worldLinearDrag","\x6b","\x75","\xd4","\xfd"));
	outFields->push(HX_HCSTRING("compounds","\xa8","\x3a","\xfb","\x13"));
	outFields->push(HX_HCSTRING("bodies","\x80","\x1b","\xdd","\x5a"));
	outFields->push(HX_HCSTRING("liveBodies","\x8c","\xa7","\x18","\xf9"));
	outFields->push(HX_HCSTRING("constraints","\x76","\x51","\xb4","\x17"));
	outFields->push(HX_HCSTRING("liveConstraints","\xea","\x99","\x65","\xc6"));
	outFields->push(HX_HCSTRING("world","\x52","\x96","\x64","\xce"));
	outFields->push(HX_HCSTRING("arbiters","\x6a","\x2c","\xb2","\x21"));
	outFields->push(HX_HCSTRING("listeners","\x7f","\x65","\x8e","\xf3"));
	outFields->push(HX_HCSTRING("timeStamp","\xb6","\x44","\xfc","\x38"));
	outFields->push(HX_HCSTRING("elapsedTime","\x69","\x5e","\xcd","\xc6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::space::ZPP_Space*/ ,(int)offsetof(Space_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("get_userData","\x1e","\x4a","\x42","\xba"),
	HX_HCSTRING("get_gravity","\x65","\xce","\xf9","\xfd"),
	HX_HCSTRING("set_gravity","\x71","\xd5","\x66","\x08"),
	HX_HCSTRING("get_broadphase","\x02","\xe6","\x12","\x4e"),
	HX_HCSTRING("get_sortContacts","\xda","\x2f","\xc3","\xaa"),
	HX_HCSTRING("set_sortContacts","\x4e","\x1d","\x05","\x01"),
	HX_HCSTRING("get_worldAngularDrag","\xcd","\x63","\x5e","\x9c"),
	HX_HCSTRING("set_worldAngularDrag","\x41","\x1b","\x16","\x69"),
	HX_HCSTRING("get_worldLinearDrag","\x82","\x44","\xdf","\x88"),
	HX_HCSTRING("set_worldLinearDrag","\x8e","\x37","\x7c","\xc5"),
	HX_HCSTRING("get_compounds","\x7f","\x0e","\x5f","\xd5"),
	HX_HCSTRING("get_bodies","\x49","\x8b","\x64","\x4b"),
	HX_HCSTRING("get_liveBodies","\xd5","\x2f","\x0e","\x6f"),
	HX_HCSTRING("get_constraints","\x0d","\x09","\x96","\xd8"),
	HX_HCSTRING("get_liveConstraints","\x01","\x69","\x70","\x51"),
	HX_HCSTRING("visitBodies","\xab","\xf3","\x5e","\xe4"),
	HX_HCSTRING("visitConstraints","\x6b","\xfd","\xdb","\xc1"),
	HX_HCSTRING("visitCompounds","\x5d","\x8f","\x9c","\x93"),
	HX_HCSTRING("get_world","\xa9","\xf2","\x0d","\x12"),
	HX_HCSTRING("get_arbiters","\x73","\xe0","\xcb","\xd6"),
	HX_HCSTRING("get_listeners","\x56","\x39","\xf2","\xb4"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("step","\x4c","\xe7","\x5b","\x4c"),
	HX_HCSTRING("get_timeStamp","\x8d","\x18","\x60","\xfa"),
	HX_HCSTRING("get_elapsedTime","\x00","\x16","\xaf","\x87"),
	HX_HCSTRING("interactionType","\xac","\xa7","\xc8","\x08"),
	HX_HCSTRING("shapesUnderPoint","\xea","\xec","\xbc","\x47"),
	HX_HCSTRING("bodiesUnderPoint","\xb8","\x1b","\x30","\x80"),
	HX_HCSTRING("shapesInAABB","\xd7","\x1c","\x84","\xf9"),
	HX_HCSTRING("bodiesInAABB","\xa5","\x4c","\x28","\x9e"),
	HX_HCSTRING("shapesInCircle","\x27","\xd4","\xf7","\x6c"),
	HX_HCSTRING("bodiesInCircle","\x75","\x13","\xe2","\xa6"),
	HX_HCSTRING("shapesInShape","\xea","\x90","\x2a","\xd1"),
	HX_HCSTRING("bodiesInShape","\x5c","\x35","\x30","\x3c"),
	HX_HCSTRING("shapesInBody","\xf9","\x58","\x50","\xfa"),
	HX_HCSTRING("bodiesInBody","\xc7","\x88","\xf4","\x9e"),
	HX_HCSTRING("convexCast","\xc6","\x01","\xbf","\x38"),
	HX_HCSTRING("convexMultiCast","\x71","\xc9","\xd5","\x6c"),
	HX_HCSTRING("rayCast","\xc9","\x5d","\x3c","\x25"),
	HX_HCSTRING("rayMultiCast","\x8e","\x02","\x7d","\x23"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Space_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Space_obj::__mClass,"__mClass");
};

#endif

hx::Class Space_obj::__mClass;

void Space_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.space.Space","\x78","\xde","\xa4","\x7c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Space_obj >;
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
} // end namespace space
