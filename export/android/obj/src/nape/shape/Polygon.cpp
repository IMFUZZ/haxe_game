#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPoly
#include <nape/geom/GeomPoly.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2Iterator
#include <nape/geom/Vec2Iterator.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2List
#include <nape/geom/Vec2List.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_nape_shape_EdgeList
#include <nape/shape/EdgeList.h>
#endif
#ifndef INCLUDED_nape_shape_Polygon
#include <nape/shape/Polygon.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ValidationResult
#include <nape/shape/ValidationResult.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomPoly
#include <zpp_nape/geom/ZPP_GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Material
#include <zpp_nape/phys/ZPP_Material.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Vec2
#include <zpp_nape/util/ZNPList_ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Vec2
#include <zpp_nape/util/ZNPNode_ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Vec2List
#include <zpp_nape/util/ZPP_Vec2List.h>
#endif
namespace nape{
namespace shape{

Void Polygon_obj::__construct(Dynamic localVerts,::nape::phys::Material material,::nape::dynamics::InteractionFilter filter)
{
HX_STACK_FRAME("nape.shape.Polygon","new",0x3561fe79,"nape.shape.Polygon.new","nape/shape/Polygon.hx",179,0x3fc17059)
HX_STACK_THIS(this)
HX_STACK_ARG(localVerts,"localVerts")
HX_STACK_ARG(material,"material")
HX_STACK_ARG(filter,"filter")
{
	HX_STACK_LINE(183)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(338)
	super::__construct();
	HX_STACK_LINE(343)
	::zpp_nape::shape::ZPP_Polygon tmp = ::zpp_nape::shape::ZPP_Polygon_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(343)
	this->zpp_inner_zn = tmp;
	HX_STACK_LINE(344)
	::zpp_nape::shape::ZPP_Polygon tmp1 = this->zpp_inner_zn;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(344)
	tmp1->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(345)
	::zpp_nape::shape::ZPP_Polygon tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(345)
	tmp2->outer_zn = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(346)
	::zpp_nape::shape::ZPP_Polygon tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(346)
	this->zpp_inner = tmp3;
	HX_STACK_LINE(347)
	::zpp_nape::shape::ZPP_Shape tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(347)
	this->zpp_inner_i = tmp4;
	HX_STACK_LINE(348)
	::zpp_nape::phys::ZPP_Interactor tmp5 = this->zpp_inner_i;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(348)
	tmp5->outer_i = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(349)
	{
		HX_STACK_LINE(350)
		Dynamic tmp6 = localVerts;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(350)
		bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(350)
		if ((tmp7)){
			HX_STACK_LINE(351)
			cpp::ArrayBase lv = localVerts;		HX_STACK_VAR(lv,"lv");
			HX_STACK_LINE(352)
			{
				HX_STACK_LINE(352)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(352)
				while((true)){
					HX_STACK_LINE(352)
					bool tmp8 = (_g < lv->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(352)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(352)
					if ((tmp9)){
						HX_STACK_LINE(352)
						break;
					}
					HX_STACK_LINE(352)
					Dynamic tmp10 = lv->__GetItem(_g);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(352)
					Dynamic vite = tmp10;		HX_STACK_VAR(vite,"vite");
					HX_STACK_LINE(352)
					++(_g);
					HX_STACK_LINE(359)
					::nape::geom::Vec2 x = vite;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(365)
					::nape::geom::Vec2List tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(365)
					{
						HX_STACK_LINE(365)
						::zpp_nape::shape::ZPP_Polygon tmp12 = this->zpp_inner_zn;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(365)
						::nape::geom::Vec2List tmp13 = tmp12->wrap_lverts;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(365)
						bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(365)
						if ((tmp14)){
							HX_STACK_LINE(365)
							::zpp_nape::shape::ZPP_Polygon tmp15 = this->zpp_inner_zn;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(365)
							tmp15->getlverts();
						}
						HX_STACK_LINE(365)
						::zpp_nape::shape::ZPP_Polygon tmp15 = this->zpp_inner_zn;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(365)
						tmp11 = tmp15->wrap_lverts;
					}
					HX_STACK_LINE(365)
					::nape::geom::Vec2 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(365)
					{
						HX_STACK_LINE(365)
						bool weak = false;		HX_STACK_VAR(weak,"weak");
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								{
									HX_STACK_LINE(365)
									::zpp_nape::geom::ZPP_Vec2 _this = x->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(365)
									bool tmp14 = (_this->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(365)
									if ((tmp14)){
										HX_STACK_LINE(365)
										_this->_validate();
									}
								}
								HX_STACK_LINE(365)
								tmp13 = x->zpp_inner->x;
							}
							HX_STACK_LINE(365)
							Float x1 = tmp13;		HX_STACK_VAR(x1,"x1");
							HX_STACK_LINE(365)
							Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								{
									HX_STACK_LINE(365)
									::zpp_nape::geom::ZPP_Vec2 _this = x->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(365)
									bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(365)
									if ((tmp15)){
										HX_STACK_LINE(365)
										_this->_validate();
									}
								}
								HX_STACK_LINE(365)
								tmp14 = x->zpp_inner->y;
							}
							HX_STACK_LINE(365)
							Float y = tmp14;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(365)
							::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								::nape::geom::Vec2 tmp15 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(365)
								bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(365)
								if ((tmp16)){
									HX_STACK_LINE(365)
									::nape::geom::Vec2 tmp17 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(365)
									ret = tmp17;
								}
								else{
									HX_STACK_LINE(365)
									::nape::geom::Vec2 tmp17 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(365)
									ret = tmp17;
									HX_STACK_LINE(365)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
									HX_STACK_LINE(365)
									ret->zpp_pool = null();
								}
							}
							HX_STACK_LINE(365)
							bool tmp15 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(365)
							if ((tmp15)){
								HX_STACK_LINE(365)
								::zpp_nape::geom::ZPP_Vec2 tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(365)
								{
									HX_STACK_LINE(365)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(365)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(365)
									{
										HX_STACK_LINE(365)
										::zpp_nape::geom::ZPP_Vec2 tmp17 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(365)
										bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(365)
										if ((tmp18)){
											HX_STACK_LINE(365)
											::zpp_nape::geom::ZPP_Vec2 tmp19 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(365)
											ret1 = tmp19;
										}
										else{
											HX_STACK_LINE(365)
											::zpp_nape::geom::ZPP_Vec2 tmp19 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(365)
											ret1 = tmp19;
											HX_STACK_LINE(365)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(365)
											ret1->next = null();
										}
										HX_STACK_LINE(365)
										ret1->weak = false;
									}
									HX_STACK_LINE(365)
									ret1->_immutable = immutable;
									HX_STACK_LINE(365)
									{
										HX_STACK_LINE(365)
										ret1->x = x1;
										HX_STACK_LINE(365)
										ret1->y = y;
										HX_STACK_LINE(365)
										{
										}
									}
									HX_STACK_LINE(365)
									tmp16 = ret1;
								}
								HX_STACK_LINE(365)
								ret->zpp_inner = tmp16;
								HX_STACK_LINE(365)
								ret->zpp_inner->outer = ret;
							}
							else{
								HX_STACK_LINE(365)
								Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(365)
								{
									HX_STACK_LINE(365)
									{
										HX_STACK_LINE(365)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(365)
										bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(365)
										if ((tmp17)){
											HX_STACK_LINE(365)
											_this->_validate();
										}
									}
									HX_STACK_LINE(365)
									tmp16 = ret->zpp_inner->x;
								}
								HX_STACK_LINE(365)
								Float tmp17 = x1;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(365)
								bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(365)
								bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(365)
								if ((tmp18)){
									HX_STACK_LINE(365)
									Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(365)
									{
										HX_STACK_LINE(365)
										{
											HX_STACK_LINE(365)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(365)
											bool tmp21 = (_this->_validate != null());		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(365)
											bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(365)
											bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(365)
											if ((tmp23)){
												HX_STACK_LINE(365)
												_this->_validate();
											}
										}
										HX_STACK_LINE(365)
										Float tmp21 = ret->zpp_inner->y;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(365)
										tmp20 = tmp21;
									}
									HX_STACK_LINE(365)
									Float tmp21 = y;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(365)
									tmp19 = (tmp20 == tmp21);
								}
								else{
									HX_STACK_LINE(365)
									tmp19 = false;
								}
								HX_STACK_LINE(365)
								bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(365)
								if ((tmp20)){
									HX_STACK_LINE(365)
									{
										HX_STACK_LINE(365)
										ret->zpp_inner->x = x1;
										HX_STACK_LINE(365)
										ret->zpp_inner->y = y;
										HX_STACK_LINE(365)
										{
										}
									}
									HX_STACK_LINE(365)
									{
										HX_STACK_LINE(365)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(365)
										bool tmp21 = (_this->_invalidate != null());		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(365)
										if ((tmp21)){
											HX_STACK_LINE(365)
											::zpp_nape::geom::ZPP_Vec2 tmp22 = _this;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(365)
											_this->_invalidate(tmp22);
										}
									}
								}
								HX_STACK_LINE(365)
								ret;
							}
							HX_STACK_LINE(365)
							ret->zpp_inner->weak = weak;
							HX_STACK_LINE(365)
							tmp12 = ret;
						}
					}
					HX_STACK_LINE(365)
					tmp11->push(tmp12);
				}
			}
		}
		else{
			HX_STACK_LINE(384)
			Dynamic tmp8 = localVerts;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(384)
			bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::nape::geom::Vec2List >());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(384)
			if ((tmp9)){
				HX_STACK_LINE(385)
				::nape::geom::Vec2List lv = localVerts;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(386)
				{
					HX_STACK_LINE(386)
					::nape::geom::Vec2Iterator tmp10 = lv->iterator();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(386)
					::nape::geom::Vec2Iterator _g = tmp10;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(386)
					while((true)){
						HX_STACK_LINE(386)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(386)
						{
							HX_STACK_LINE(386)
							::zpp_nape::util::ZPP_Vec2List tmp12 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(386)
							tmp12->valmod();
							HX_STACK_LINE(386)
							int tmp13 = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(386)
							int length = tmp13;		HX_STACK_VAR(length,"length");
							HX_STACK_LINE(386)
							_g->zpp_critical = true;
							HX_STACK_LINE(386)
							bool tmp14 = (_g->zpp_i < length);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(386)
							if ((tmp14)){
								HX_STACK_LINE(386)
								tmp11 = true;
							}
							else{
								HX_STACK_LINE(386)
								{
									HX_STACK_LINE(386)
									::nape::geom::Vec2Iterator tmp15 = ::nape::geom::Vec2Iterator_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(386)
									_g->zpp_next = tmp15;
									HX_STACK_LINE(386)
									::nape::geom::Vec2Iterator_obj::zpp_pool = _g;
									HX_STACK_LINE(386)
									_g->zpp_inner = null();
								}
								HX_STACK_LINE(386)
								tmp11 = false;
							}
						}
						HX_STACK_LINE(386)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(386)
						if ((tmp12)){
							HX_STACK_LINE(386)
							break;
						}
						HX_STACK_LINE(386)
						::nape::geom::Vec2 tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(386)
						{
							HX_STACK_LINE(386)
							_g->zpp_critical = false;
							HX_STACK_LINE(386)
							int tmp14 = (_g->zpp_i)++;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(386)
							tmp13 = _g->zpp_inner->at(tmp14);
						}
						HX_STACK_LINE(386)
						::nape::geom::Vec2 x = tmp13;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(395)
						::nape::geom::Vec2List tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(395)
						{
							HX_STACK_LINE(395)
							::zpp_nape::shape::ZPP_Polygon tmp15 = this->zpp_inner_zn;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(395)
							::nape::geom::Vec2List tmp16 = tmp15->wrap_lverts;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(395)
							bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(395)
							if ((tmp17)){
								HX_STACK_LINE(395)
								::zpp_nape::shape::ZPP_Polygon tmp18 = this->zpp_inner_zn;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(395)
								tmp18->getlverts();
							}
							HX_STACK_LINE(395)
							::zpp_nape::shape::ZPP_Polygon tmp18 = this->zpp_inner_zn;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(395)
							tmp14 = tmp18->wrap_lverts;
						}
						HX_STACK_LINE(395)
						::nape::geom::Vec2 tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(395)
						{
							HX_STACK_LINE(395)
							bool weak = false;		HX_STACK_VAR(weak,"weak");
							HX_STACK_LINE(395)
							{
								HX_STACK_LINE(395)
								Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(395)
								{
									HX_STACK_LINE(395)
									{
										HX_STACK_LINE(395)
										::zpp_nape::geom::ZPP_Vec2 _this = x->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(395)
										bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(395)
										if ((tmp17)){
											HX_STACK_LINE(395)
											_this->_validate();
										}
									}
									HX_STACK_LINE(395)
									tmp16 = x->zpp_inner->x;
								}
								HX_STACK_LINE(395)
								Float x1 = tmp16;		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(395)
								Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(395)
								{
									HX_STACK_LINE(395)
									{
										HX_STACK_LINE(395)
										::zpp_nape::geom::ZPP_Vec2 _this = x->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(395)
										bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(395)
										if ((tmp18)){
											HX_STACK_LINE(395)
											_this->_validate();
										}
									}
									HX_STACK_LINE(395)
									tmp17 = x->zpp_inner->y;
								}
								HX_STACK_LINE(395)
								Float y = tmp17;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(395)
								::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(395)
								{
									HX_STACK_LINE(395)
									::nape::geom::Vec2 tmp18 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(395)
									bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(395)
									if ((tmp19)){
										HX_STACK_LINE(395)
										::nape::geom::Vec2 tmp20 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(395)
										ret = tmp20;
									}
									else{
										HX_STACK_LINE(395)
										::nape::geom::Vec2 tmp20 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(395)
										ret = tmp20;
										HX_STACK_LINE(395)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
										HX_STACK_LINE(395)
										ret->zpp_pool = null();
									}
								}
								HX_STACK_LINE(395)
								bool tmp18 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(395)
								if ((tmp18)){
									HX_STACK_LINE(395)
									::zpp_nape::geom::ZPP_Vec2 tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(395)
									{
										HX_STACK_LINE(395)
										bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
										HX_STACK_LINE(395)
										::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
										HX_STACK_LINE(395)
										{
											HX_STACK_LINE(395)
											::zpp_nape::geom::ZPP_Vec2 tmp20 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(395)
											bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(395)
											if ((tmp21)){
												HX_STACK_LINE(395)
												::zpp_nape::geom::ZPP_Vec2 tmp22 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(395)
												ret1 = tmp22;
											}
											else{
												HX_STACK_LINE(395)
												::zpp_nape::geom::ZPP_Vec2 tmp22 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(395)
												ret1 = tmp22;
												HX_STACK_LINE(395)
												::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
												HX_STACK_LINE(395)
												ret1->next = null();
											}
											HX_STACK_LINE(395)
											ret1->weak = false;
										}
										HX_STACK_LINE(395)
										ret1->_immutable = immutable;
										HX_STACK_LINE(395)
										{
											HX_STACK_LINE(395)
											ret1->x = x1;
											HX_STACK_LINE(395)
											ret1->y = y;
											HX_STACK_LINE(395)
											{
											}
										}
										HX_STACK_LINE(395)
										tmp19 = ret1;
									}
									HX_STACK_LINE(395)
									ret->zpp_inner = tmp19;
									HX_STACK_LINE(395)
									ret->zpp_inner->outer = ret;
								}
								else{
									HX_STACK_LINE(395)
									Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(395)
									{
										HX_STACK_LINE(395)
										{
											HX_STACK_LINE(395)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(395)
											bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(395)
											if ((tmp20)){
												HX_STACK_LINE(395)
												_this->_validate();
											}
										}
										HX_STACK_LINE(395)
										tmp19 = ret->zpp_inner->x;
									}
									HX_STACK_LINE(395)
									Float tmp20 = x1;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(395)
									bool tmp21 = (tmp19 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(395)
									bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(395)
									if ((tmp21)){
										HX_STACK_LINE(395)
										Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(395)
										{
											HX_STACK_LINE(395)
											{
												HX_STACK_LINE(395)
												::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(395)
												bool tmp24 = (_this->_validate != null());		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(395)
												bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(395)
												bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(395)
												if ((tmp26)){
													HX_STACK_LINE(395)
													_this->_validate();
												}
											}
											HX_STACK_LINE(395)
											Float tmp24 = ret->zpp_inner->y;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(395)
											tmp23 = tmp24;
										}
										HX_STACK_LINE(395)
										Float tmp24 = y;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(395)
										tmp22 = (tmp23 == tmp24);
									}
									else{
										HX_STACK_LINE(395)
										tmp22 = false;
									}
									HX_STACK_LINE(395)
									bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(395)
									if ((tmp23)){
										HX_STACK_LINE(395)
										{
											HX_STACK_LINE(395)
											ret->zpp_inner->x = x1;
											HX_STACK_LINE(395)
											ret->zpp_inner->y = y;
											HX_STACK_LINE(395)
											{
											}
										}
										HX_STACK_LINE(395)
										{
											HX_STACK_LINE(395)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(395)
											bool tmp24 = (_this->_invalidate != null());		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(395)
											if ((tmp24)){
												HX_STACK_LINE(395)
												::zpp_nape::geom::ZPP_Vec2 tmp25 = _this;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(395)
												_this->_invalidate(tmp25);
											}
										}
									}
									HX_STACK_LINE(395)
									ret;
								}
								HX_STACK_LINE(395)
								ret->zpp_inner->weak = weak;
								HX_STACK_LINE(395)
								tmp15 = ret;
							}
						}
						HX_STACK_LINE(395)
						tmp14->push(tmp15);
					}
				}
			}
			else{
				HX_STACK_LINE(398)
				Dynamic tmp10 = localVerts;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(398)
				bool tmp11 = ::Std_obj::is(tmp10,hx::ClassOf< ::nape::geom::GeomPoly >());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(398)
				if ((tmp11)){
					HX_STACK_LINE(399)
					::nape::geom::GeomPoly lv = localVerts;		HX_STACK_VAR(lv,"lv");
					HX_STACK_LINE(405)
					::zpp_nape::geom::ZPP_GeomVert tmp12 = lv->zpp_inner->vertices;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(405)
					::zpp_nape::geom::ZPP_GeomVert verts = tmp12;		HX_STACK_VAR(verts,"verts");
					HX_STACK_LINE(406)
					bool tmp13 = (verts != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(406)
					if ((tmp13)){
						HX_STACK_LINE(407)
						::zpp_nape::geom::ZPP_GeomVert vite = verts;		HX_STACK_VAR(vite,"vite");
						HX_STACK_LINE(408)
						while((true)){
							HX_STACK_LINE(409)
							::nape::geom::Vec2 tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(409)
							{
								HX_STACK_LINE(409)
								Float x = vite->x;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(409)
								Float y = vite->y;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(409)
								bool weak = false;		HX_STACK_VAR(weak,"weak");
								HX_STACK_LINE(409)
								::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(409)
								{
									HX_STACK_LINE(409)
									::nape::geom::Vec2 tmp15 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(409)
									bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(409)
									if ((tmp16)){
										HX_STACK_LINE(409)
										::nape::geom::Vec2 tmp17 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(409)
										ret = tmp17;
									}
									else{
										HX_STACK_LINE(409)
										::nape::geom::Vec2 tmp17 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(409)
										ret = tmp17;
										HX_STACK_LINE(409)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
										HX_STACK_LINE(409)
										ret->zpp_pool = null();
									}
								}
								HX_STACK_LINE(409)
								bool tmp15 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(409)
								if ((tmp15)){
									HX_STACK_LINE(409)
									::zpp_nape::geom::ZPP_Vec2 tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(409)
									{
										HX_STACK_LINE(409)
										bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
										HX_STACK_LINE(409)
										::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
										HX_STACK_LINE(409)
										{
											HX_STACK_LINE(409)
											::zpp_nape::geom::ZPP_Vec2 tmp17 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(409)
											bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(409)
											if ((tmp18)){
												HX_STACK_LINE(409)
												::zpp_nape::geom::ZPP_Vec2 tmp19 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(409)
												ret1 = tmp19;
											}
											else{
												HX_STACK_LINE(409)
												::zpp_nape::geom::ZPP_Vec2 tmp19 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(409)
												ret1 = tmp19;
												HX_STACK_LINE(409)
												::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
												HX_STACK_LINE(409)
												ret1->next = null();
											}
											HX_STACK_LINE(409)
											ret1->weak = false;
										}
										HX_STACK_LINE(409)
										ret1->_immutable = immutable;
										HX_STACK_LINE(409)
										{
											HX_STACK_LINE(409)
											ret1->x = x;
											HX_STACK_LINE(409)
											ret1->y = y;
											HX_STACK_LINE(409)
											{
											}
										}
										HX_STACK_LINE(409)
										tmp16 = ret1;
									}
									HX_STACK_LINE(409)
									ret->zpp_inner = tmp16;
									HX_STACK_LINE(409)
									ret->zpp_inner->outer = ret;
								}
								else{
									HX_STACK_LINE(409)
									Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(409)
									{
										HX_STACK_LINE(409)
										{
											HX_STACK_LINE(409)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(409)
											bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(409)
											if ((tmp17)){
												HX_STACK_LINE(409)
												_this->_validate();
											}
										}
										HX_STACK_LINE(409)
										tmp16 = ret->zpp_inner->x;
									}
									HX_STACK_LINE(409)
									Float tmp17 = x;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(409)
									bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(409)
									bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(409)
									if ((tmp18)){
										HX_STACK_LINE(409)
										Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(409)
										{
											HX_STACK_LINE(409)
											{
												HX_STACK_LINE(409)
												::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(409)
												bool tmp21 = (_this->_validate != null());		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(409)
												bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(409)
												bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(409)
												if ((tmp23)){
													HX_STACK_LINE(409)
													_this->_validate();
												}
											}
											HX_STACK_LINE(409)
											Float tmp21 = ret->zpp_inner->y;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(409)
											tmp20 = tmp21;
										}
										HX_STACK_LINE(409)
										Float tmp21 = y;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(409)
										tmp19 = (tmp20 == tmp21);
									}
									else{
										HX_STACK_LINE(409)
										tmp19 = false;
									}
									HX_STACK_LINE(409)
									bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(409)
									if ((tmp20)){
										HX_STACK_LINE(409)
										{
											HX_STACK_LINE(409)
											ret->zpp_inner->x = x;
											HX_STACK_LINE(409)
											ret->zpp_inner->y = y;
											HX_STACK_LINE(409)
											{
											}
										}
										HX_STACK_LINE(409)
										{
											HX_STACK_LINE(409)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(409)
											bool tmp21 = (_this->_invalidate != null());		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(409)
											if ((tmp21)){
												HX_STACK_LINE(409)
												::zpp_nape::geom::ZPP_Vec2 tmp22 = _this;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(409)
												_this->_invalidate(tmp22);
											}
										}
									}
									HX_STACK_LINE(409)
									ret;
								}
								HX_STACK_LINE(409)
								ret->zpp_inner->weak = weak;
								HX_STACK_LINE(409)
								tmp14 = ret;
							}
							HX_STACK_LINE(409)
							::nape::geom::Vec2 x = tmp14;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(410)
							vite = vite->next;
							HX_STACK_LINE(411)
							::nape::geom::Vec2List tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(411)
							{
								HX_STACK_LINE(411)
								::zpp_nape::shape::ZPP_Polygon tmp16 = this->zpp_inner_zn;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(411)
								::nape::geom::Vec2List tmp17 = tmp16->wrap_lverts;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(411)
								bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(411)
								if ((tmp18)){
									HX_STACK_LINE(411)
									::zpp_nape::shape::ZPP_Polygon tmp19 = this->zpp_inner_zn;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(411)
									tmp19->getlverts();
								}
								HX_STACK_LINE(411)
								::zpp_nape::shape::ZPP_Polygon tmp19 = this->zpp_inner_zn;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(411)
								tmp15 = tmp19->wrap_lverts;
							}
							HX_STACK_LINE(411)
							::nape::geom::Vec2 tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(411)
							{
								HX_STACK_LINE(411)
								bool weak = false;		HX_STACK_VAR(weak,"weak");
								HX_STACK_LINE(411)
								{
									HX_STACK_LINE(411)
									Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(411)
									{
										HX_STACK_LINE(411)
										{
											HX_STACK_LINE(411)
											::zpp_nape::geom::ZPP_Vec2 _this = x->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(411)
											bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(411)
											if ((tmp18)){
												HX_STACK_LINE(411)
												_this->_validate();
											}
										}
										HX_STACK_LINE(411)
										tmp17 = x->zpp_inner->x;
									}
									HX_STACK_LINE(411)
									Float x1 = tmp17;		HX_STACK_VAR(x1,"x1");
									HX_STACK_LINE(411)
									Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(411)
									{
										HX_STACK_LINE(411)
										{
											HX_STACK_LINE(411)
											::zpp_nape::geom::ZPP_Vec2 _this = x->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(411)
											bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(411)
											if ((tmp19)){
												HX_STACK_LINE(411)
												_this->_validate();
											}
										}
										HX_STACK_LINE(411)
										tmp18 = x->zpp_inner->y;
									}
									HX_STACK_LINE(411)
									Float y = tmp18;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(411)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(411)
									{
										HX_STACK_LINE(411)
										::nape::geom::Vec2 tmp19 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(411)
										bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(411)
										if ((tmp20)){
											HX_STACK_LINE(411)
											::nape::geom::Vec2 tmp21 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(411)
											ret = tmp21;
										}
										else{
											HX_STACK_LINE(411)
											::nape::geom::Vec2 tmp21 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(411)
											ret = tmp21;
											HX_STACK_LINE(411)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
											HX_STACK_LINE(411)
											ret->zpp_pool = null();
										}
									}
									HX_STACK_LINE(411)
									bool tmp19 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(411)
									if ((tmp19)){
										HX_STACK_LINE(411)
										::zpp_nape::geom::ZPP_Vec2 tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(411)
										{
											HX_STACK_LINE(411)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(411)
											::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(411)
											{
												HX_STACK_LINE(411)
												::zpp_nape::geom::ZPP_Vec2 tmp21 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(411)
												bool tmp22 = (tmp21 == null());		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(411)
												if ((tmp22)){
													HX_STACK_LINE(411)
													::zpp_nape::geom::ZPP_Vec2 tmp23 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(411)
													ret1 = tmp23;
												}
												else{
													HX_STACK_LINE(411)
													::zpp_nape::geom::ZPP_Vec2 tmp23 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(411)
													ret1 = tmp23;
													HX_STACK_LINE(411)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(411)
													ret1->next = null();
												}
												HX_STACK_LINE(411)
												ret1->weak = false;
											}
											HX_STACK_LINE(411)
											ret1->_immutable = immutable;
											HX_STACK_LINE(411)
											{
												HX_STACK_LINE(411)
												ret1->x = x1;
												HX_STACK_LINE(411)
												ret1->y = y;
												HX_STACK_LINE(411)
												{
												}
											}
											HX_STACK_LINE(411)
											tmp20 = ret1;
										}
										HX_STACK_LINE(411)
										ret->zpp_inner = tmp20;
										HX_STACK_LINE(411)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(411)
										Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(411)
										{
											HX_STACK_LINE(411)
											{
												HX_STACK_LINE(411)
												::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(411)
												bool tmp21 = (_this->_validate != null());		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(411)
												if ((tmp21)){
													HX_STACK_LINE(411)
													_this->_validate();
												}
											}
											HX_STACK_LINE(411)
											tmp20 = ret->zpp_inner->x;
										}
										HX_STACK_LINE(411)
										Float tmp21 = x1;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(411)
										bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(411)
										bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(411)
										if ((tmp22)){
											HX_STACK_LINE(411)
											Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(411)
											{
												HX_STACK_LINE(411)
												{
													HX_STACK_LINE(411)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(411)
													bool tmp25 = (_this->_validate != null());		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(411)
													bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(411)
													bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(411)
													if ((tmp27)){
														HX_STACK_LINE(411)
														_this->_validate();
													}
												}
												HX_STACK_LINE(411)
												Float tmp25 = ret->zpp_inner->y;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(411)
												tmp24 = tmp25;
											}
											HX_STACK_LINE(411)
											Float tmp25 = y;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(411)
											tmp23 = (tmp24 == tmp25);
										}
										else{
											HX_STACK_LINE(411)
											tmp23 = false;
										}
										HX_STACK_LINE(411)
										bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(411)
										if ((tmp24)){
											HX_STACK_LINE(411)
											{
												HX_STACK_LINE(411)
												ret->zpp_inner->x = x1;
												HX_STACK_LINE(411)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(411)
												{
												}
											}
											HX_STACK_LINE(411)
											{
												HX_STACK_LINE(411)
												::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(411)
												bool tmp25 = (_this->_invalidate != null());		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(411)
												if ((tmp25)){
													HX_STACK_LINE(411)
													::zpp_nape::geom::ZPP_Vec2 tmp26 = _this;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(411)
													_this->_invalidate(tmp26);
												}
											}
										}
										HX_STACK_LINE(411)
										ret;
									}
									HX_STACK_LINE(411)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(411)
									tmp16 = ret;
								}
							}
							HX_STACK_LINE(411)
							tmp15->push(tmp16);
							HX_STACK_LINE(412)
							{
								HX_STACK_LINE(412)
								::zpp_nape::geom::ZPP_Vec2 inner = x->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(412)
								x->zpp_inner->outer = null();
								HX_STACK_LINE(412)
								x->zpp_inner = null();
								HX_STACK_LINE(412)
								{
									HX_STACK_LINE(412)
									::nape::geom::Vec2 o = x;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(412)
									::nape::geom::Vec2 tmp17 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(412)
									o->zpp_pool = tmp17;
									HX_STACK_LINE(412)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(412)
								{
									HX_STACK_LINE(412)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(412)
									{
										HX_STACK_LINE(412)
										bool tmp17 = (o->outer != null());		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(412)
										if ((tmp17)){
											HX_STACK_LINE(412)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(412)
											o->outer = null();
										}
										HX_STACK_LINE(412)
										o->_isimmutable = null();
										HX_STACK_LINE(412)
										o->_validate = null();
										HX_STACK_LINE(412)
										o->_invalidate = null();
									}
									HX_STACK_LINE(412)
									::zpp_nape::geom::ZPP_Vec2 tmp17 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(412)
									o->next = tmp17;
									HX_STACK_LINE(412)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(414)
							bool tmp17 = (vite != verts);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(414)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(408)
							if ((tmp18)){
								HX_STACK_LINE(408)
								break;
							}
						}
					}
				}
				else{
				}
			}
		}
	}
	HX_STACK_LINE(423)
	{
		HX_STACK_LINE(424)
		Dynamic tmp6 = localVerts;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(424)
		bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(424)
		if ((tmp7)){
			HX_STACK_LINE(425)
			Array< ::Dynamic > lv = localVerts;		HX_STACK_VAR(lv,"lv");
			HX_STACK_LINE(426)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(427)
			while((true)){
				HX_STACK_LINE(427)
				bool tmp8 = (i < lv->length);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(427)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(427)
				if ((tmp9)){
					HX_STACK_LINE(427)
					break;
				}
				HX_STACK_LINE(428)
				::nape::geom::Vec2 tmp10 = lv->__get(i).StaticCast< ::nape::geom::Vec2 >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(428)
				::nape::geom::Vec2 cur = tmp10;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(429)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(429)
				{
					HX_STACK_LINE(430)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(431)
					tmp12 = cur->zpp_inner->weak;
					HX_STACK_LINE(430)
					if ((tmp12)){
						HX_STACK_LINE(433)
						{
							HX_STACK_LINE(433)
							::zpp_nape::geom::ZPP_Vec2 inner = cur->zpp_inner;		HX_STACK_VAR(inner,"inner");
							HX_STACK_LINE(433)
							cur->zpp_inner->outer = null();
							HX_STACK_LINE(433)
							cur->zpp_inner = null();
							HX_STACK_LINE(433)
							{
								HX_STACK_LINE(433)
								::nape::geom::Vec2 o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(433)
								::nape::geom::Vec2 tmp13 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(433)
								o->zpp_pool = tmp13;
								HX_STACK_LINE(433)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(433)
							{
								HX_STACK_LINE(433)
								::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(433)
								{
									HX_STACK_LINE(433)
									bool tmp13 = (o->outer != null());		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(433)
									if ((tmp13)){
										HX_STACK_LINE(433)
										o->outer->zpp_inner = null();
										HX_STACK_LINE(433)
										o->outer = null();
									}
									HX_STACK_LINE(433)
									o->_isimmutable = null();
									HX_STACK_LINE(433)
									o->_validate = null();
									HX_STACK_LINE(433)
									o->_invalidate = null();
								}
								HX_STACK_LINE(433)
								::zpp_nape::geom::ZPP_Vec2 tmp13 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(433)
								o->next = tmp13;
								HX_STACK_LINE(433)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
							}
						}
						HX_STACK_LINE(434)
						tmp11 = true;
					}
					else{
						HX_STACK_LINE(437)
						tmp11 = false;
					}
				}
				HX_STACK_LINE(429)
				if ((tmp11)){
					HX_STACK_LINE(440)
					int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(440)
					lv->splice(tmp12,(int)1);
					HX_STACK_LINE(441)
					continue;
				}
				HX_STACK_LINE(443)
				(i)++;
			}
		}
		else{
			HX_STACK_LINE(471)
			Dynamic tmp8 = localVerts;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(471)
			bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::nape::geom::Vec2List >());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(471)
			if ((tmp9)){
				HX_STACK_LINE(472)
				::nape::geom::Vec2List lv = localVerts;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(473)
				Dynamic tmp10 = lv->zpp_inner->_validate;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(473)
				bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(473)
				if ((tmp11)){
					HX_STACK_LINE(473)
					lv->zpp_inner->_validate();
				}
				HX_STACK_LINE(474)
				::zpp_nape::util::ZNPList_ZPP_Vec2 tmp12 = lv->zpp_inner->inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(474)
				::zpp_nape::util::ZNPList_ZPP_Vec2 ins = tmp12;		HX_STACK_VAR(ins,"ins");
				HX_STACK_LINE(475)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(476)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 cur = ins->head;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(477)
				while((true)){
					HX_STACK_LINE(477)
					bool tmp13 = (cur != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(477)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(477)
					if ((tmp14)){
						HX_STACK_LINE(477)
						break;
					}
					HX_STACK_LINE(478)
					::zpp_nape::geom::ZPP_Vec2 x = cur->elt;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(479)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(479)
					{
						HX_STACK_LINE(480)
						::zpp_nape::geom::ZPP_Vec2 tmp16 = x->outer->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(480)
						tmp15 = tmp16->weak;
					}
					HX_STACK_LINE(479)
					if ((tmp15)){
						HX_STACK_LINE(482)
						::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp16 = pre;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(482)
						::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp17 = ins->erase(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(482)
						cur = tmp17;
						HX_STACK_LINE(483)
						{
							HX_STACK_LINE(484)
							bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(484)
							{
								HX_STACK_LINE(485)
								::zpp_nape::geom::ZPP_Vec2 tmp19 = x->outer->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(485)
								tmp18 = tmp19->weak;
							}
							HX_STACK_LINE(484)
							if ((tmp18)){
								HX_STACK_LINE(487)
								{
									HX_STACK_LINE(487)
									::nape::geom::Vec2 _this = x->outer;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(487)
									::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
									HX_STACK_LINE(487)
									_this->zpp_inner->outer = null();
									HX_STACK_LINE(487)
									_this->zpp_inner = null();
									HX_STACK_LINE(487)
									{
										HX_STACK_LINE(487)
										::nape::geom::Vec2 o = _this;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(487)
										::nape::geom::Vec2 tmp19 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(487)
										o->zpp_pool = tmp19;
										HX_STACK_LINE(487)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
									}
									HX_STACK_LINE(487)
									{
										HX_STACK_LINE(487)
										::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(487)
										{
											HX_STACK_LINE(487)
											bool tmp19 = (o->outer != null());		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(487)
											if ((tmp19)){
												HX_STACK_LINE(487)
												o->outer->zpp_inner = null();
												HX_STACK_LINE(487)
												o->outer = null();
											}
											HX_STACK_LINE(487)
											o->_isimmutable = null();
											HX_STACK_LINE(487)
											o->_validate = null();
											HX_STACK_LINE(487)
											o->_invalidate = null();
										}
										HX_STACK_LINE(487)
										::zpp_nape::geom::ZPP_Vec2 tmp19 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(487)
										o->next = tmp19;
										HX_STACK_LINE(487)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
									}
								}
								HX_STACK_LINE(488)
								true;
							}
							else{
								HX_STACK_LINE(491)
								false;
							}
						}
					}
					else{
						HX_STACK_LINE(496)
						pre = cur;
						HX_STACK_LINE(497)
						cur = cur->next;
					}
				}
			}
		}
	}
	HX_STACK_LINE(502)
	bool tmp6 = (material == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(502)
	if ((tmp6)){
		HX_STACK_LINE(503)
		::zpp_nape::phys::ZPP_Material tmp7 = ::zpp_nape::phys::ZPP_Material_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(503)
		bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(503)
		if ((tmp8)){
			HX_STACK_LINE(504)
			::zpp_nape::phys::ZPP_Material tmp9 = ::zpp_nape::phys::ZPP_Material_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(504)
			::zpp_nape::shape::ZPP_Shape tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(504)
			tmp10->material = tmp9;
		}
		else{
			HX_STACK_LINE(510)
			::zpp_nape::phys::ZPP_Material tmp9 = ::zpp_nape::phys::ZPP_Material_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(510)
			::zpp_nape::shape::ZPP_Shape tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(510)
			tmp10->material = tmp9;
			HX_STACK_LINE(511)
			::zpp_nape::shape::ZPP_Shape tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(511)
			::zpp_nape::phys::ZPP_Material tmp12 = tmp11->material->next;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(511)
			::zpp_nape::phys::ZPP_Material_obj::zpp_pool = tmp12;
			HX_STACK_LINE(512)
			::zpp_nape::shape::ZPP_Shape tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(512)
			tmp13->material->next = null();
		}
		HX_STACK_LINE(517)
		Dynamic();
	}
	else{
		HX_STACK_LINE(519)
		{
			HX_STACK_LINE(519)
			::zpp_nape::shape::ZPP_Shape tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(519)
			tmp7->immutable_midstep(HX_HCSTRING("Shape::material","\xa8","\xcd","\xa4","\xb9"));
			HX_STACK_LINE(519)
			::zpp_nape::shape::ZPP_Shape tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(519)
			::zpp_nape::phys::ZPP_Material tmp9 = material->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(519)
			tmp8->setMaterial(tmp9);
		}
		HX_STACK_LINE(519)
		::zpp_nape::shape::ZPP_Shape tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(519)
		tmp7->material->wrapper();
	}
	HX_STACK_LINE(520)
	bool tmp7 = (filter == null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(520)
	if ((tmp7)){
		HX_STACK_LINE(521)
		::zpp_nape::dynamics::ZPP_InteractionFilter tmp8 = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(521)
		bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(521)
		if ((tmp9)){
			HX_STACK_LINE(522)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp10 = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(522)
			::zpp_nape::shape::ZPP_Shape tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(522)
			tmp11->filter = tmp10;
		}
		else{
			HX_STACK_LINE(528)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp10 = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(528)
			::zpp_nape::shape::ZPP_Shape tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(528)
			tmp11->filter = tmp10;
			HX_STACK_LINE(529)
			::zpp_nape::shape::ZPP_Shape tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(529)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp13 = tmp12->filter->next;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(529)
			::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool = tmp13;
			HX_STACK_LINE(530)
			::zpp_nape::shape::ZPP_Shape tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(530)
			tmp14->filter->next = null();
		}
		HX_STACK_LINE(535)
		Dynamic();
	}
	else{
		HX_STACK_LINE(537)
		{
			HX_STACK_LINE(537)
			::zpp_nape::shape::ZPP_Shape tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(537)
			tmp8->immutable_midstep(HX_HCSTRING("Shape::filter","\x79","\x9e","\xc6","\x67"));
			HX_STACK_LINE(537)
			::zpp_nape::shape::ZPP_Shape tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(537)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp10 = filter->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(537)
			tmp9->setFilter(tmp10);
		}
		HX_STACK_LINE(537)
		::zpp_nape::shape::ZPP_Shape tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(537)
		tmp8->filter->wrapper();
	}
	HX_STACK_LINE(538)
	::zpp_nape::phys::ZPP_Interactor tmp8 = this->zpp_inner_i;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(538)
	::nape::callbacks::CbType tmp9 = ::zpp_nape::callbacks::ZPP_CbType_obj::ANY_SHAPE;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(538)
	::zpp_nape::callbacks::ZPP_CbType tmp10 = tmp9->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(538)
	tmp8->insert_cbtype(tmp10);
}
;
	return null();
}

//Polygon_obj::~Polygon_obj() { }

Dynamic Polygon_obj::__CreateEmpty() { return  new Polygon_obj; }
hx::ObjectPtr< Polygon_obj > Polygon_obj::__new(Dynamic localVerts,::nape::phys::Material material,::nape::dynamics::InteractionFilter filter)
{  hx::ObjectPtr< Polygon_obj > _result_ = new Polygon_obj();
	_result_->__construct(localVerts,material,filter);
	return _result_;}

Dynamic Polygon_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Polygon_obj > _result_ = new Polygon_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::nape::geom::Vec2List Polygon_obj::get_localVerts( ){
	HX_STACK_FRAME("nape.shape.Polygon","get_localVerts",0x9d615807,"nape.shape.Polygon.get_localVerts","nape/shape/Polygon.hx",279,0x3fc17059)
	HX_STACK_THIS(this)
	HX_STACK_LINE(280)
	::zpp_nape::shape::ZPP_Polygon tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(280)
	::nape::geom::Vec2List tmp1 = tmp->wrap_lverts;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(280)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(280)
	if ((tmp2)){
		HX_STACK_LINE(280)
		::zpp_nape::shape::ZPP_Polygon tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(280)
		tmp3->getlverts();
	}
	HX_STACK_LINE(281)
	::zpp_nape::shape::ZPP_Polygon tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(281)
	::nape::geom::Vec2List tmp4 = tmp3->wrap_lverts;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(281)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,get_localVerts,return )

::nape::geom::Vec2List Polygon_obj::get_worldVerts( ){
	HX_STACK_FRAME("nape.shape.Polygon","get_worldVerts",0xd11a65c0,"nape.shape.Polygon.get_worldVerts","nape/shape/Polygon.hx",293,0x3fc17059)
	HX_STACK_THIS(this)
	HX_STACK_LINE(294)
	::zpp_nape::shape::ZPP_Polygon tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(294)
	::nape::geom::Vec2List tmp1 = tmp->wrap_gverts;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(294)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(294)
	if ((tmp2)){
		HX_STACK_LINE(294)
		::zpp_nape::shape::ZPP_Polygon tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(294)
		tmp3->getgverts();
	}
	HX_STACK_LINE(295)
	::zpp_nape::shape::ZPP_Polygon tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(295)
	::nape::geom::Vec2List tmp4 = tmp3->wrap_gverts;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(295)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,get_worldVerts,return )

::nape::shape::EdgeList Polygon_obj::get_edges( ){
	HX_STACK_FRAME("nape.shape.Polygon","get_edges",0x0c0710c6,"nape.shape.Polygon.get_edges","nape/shape/Polygon.hx",304,0x3fc17059)
	HX_STACK_THIS(this)
	HX_STACK_LINE(305)
	::zpp_nape::shape::ZPP_Polygon tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(305)
	::nape::shape::EdgeList tmp1 = tmp->wrap_edges;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(305)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(305)
	if ((tmp2)){
		HX_STACK_LINE(305)
		::zpp_nape::shape::ZPP_Polygon tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(305)
		tmp3->getedges();
	}
	HX_STACK_LINE(306)
	::zpp_nape::shape::ZPP_Polygon tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(306)
	::nape::shape::EdgeList tmp4 = tmp3->wrap_edges;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(306)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,get_edges,return )

::nape::shape::ValidationResult Polygon_obj::validity( ){
	HX_STACK_FRAME("nape.shape.Polygon","validity",0x26a0f9f9,"nape.shape.Polygon.validity","nape/shape/Polygon.hx",312,0x3fc17059)
	HX_STACK_THIS(this)
	HX_STACK_LINE(313)
	::zpp_nape::shape::ZPP_Polygon tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(313)
	::nape::shape::ValidationResult tmp1 = tmp->valid();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(313)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,validity,return )

Array< ::Dynamic > Polygon_obj::rect( Float x,Float y,Float width,Float height,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.shape.Polygon","rect",0x830174eb,"nape.shape.Polygon.rect","nape/shape/Polygon.hx",209,0x3fc17059)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(213)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(213)
		{
			HX_STACK_LINE(213)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(213)
			{
				HX_STACK_LINE(213)
				::nape::geom::Vec2 tmp1 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(213)
				bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(213)
				if ((tmp2)){
					HX_STACK_LINE(213)
					::nape::geom::Vec2 tmp3 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(213)
					ret = tmp3;
				}
				else{
					HX_STACK_LINE(213)
					::nape::geom::Vec2 tmp3 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(213)
					ret = tmp3;
					HX_STACK_LINE(213)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(213)
					ret->zpp_pool = null();
				}
			}
			HX_STACK_LINE(213)
			bool tmp1 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(213)
			if ((tmp1)){
				HX_STACK_LINE(213)
				::zpp_nape::geom::ZPP_Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(213)
				{
					HX_STACK_LINE(213)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(213)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(213)
						bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(213)
						if ((tmp4)){
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 tmp5 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(213)
							ret1 = tmp5;
						}
						else{
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 tmp5 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(213)
							ret1 = tmp5;
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(213)
							ret1->next = null();
						}
						HX_STACK_LINE(213)
						ret1->weak = false;
					}
					HX_STACK_LINE(213)
					ret1->_immutable = immutable;
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						ret1->x = x;
						HX_STACK_LINE(213)
						ret1->y = y;
						HX_STACK_LINE(213)
						{
						}
					}
					HX_STACK_LINE(213)
					tmp2 = ret1;
				}
				HX_STACK_LINE(213)
				ret->zpp_inner = tmp2;
				HX_STACK_LINE(213)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(213)
				Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(213)
				{
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(213)
						bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(213)
						if ((tmp3)){
							HX_STACK_LINE(213)
							_this->_validate();
						}
					}
					HX_STACK_LINE(213)
					tmp2 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(213)
				Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(213)
				bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(213)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(213)
				if ((tmp4)){
					HX_STACK_LINE(213)
					Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						{
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(213)
							bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(213)
							bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(213)
							bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(213)
							if ((tmp9)){
								HX_STACK_LINE(213)
								_this->_validate();
							}
						}
						HX_STACK_LINE(213)
						Float tmp7 = ret->zpp_inner->y;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(213)
						tmp6 = tmp7;
					}
					HX_STACK_LINE(213)
					Float tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(213)
					tmp5 = (tmp6 == tmp7);
				}
				else{
					HX_STACK_LINE(213)
					tmp5 = false;
				}
				HX_STACK_LINE(213)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(213)
				if ((tmp6)){
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(213)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(213)
						{
						}
					}
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(213)
						bool tmp7 = (_this->_invalidate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(213)
						if ((tmp7)){
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 tmp8 = _this;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(213)
							_this->_invalidate(tmp8);
						}
					}
				}
				HX_STACK_LINE(213)
				ret;
			}
			HX_STACK_LINE(213)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(213)
			tmp = ret;
		}
		HX_STACK_LINE(213)
		::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(213)
		{
			HX_STACK_LINE(213)
			Float tmp2 = (x + width);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(213)
			Float x1 = tmp2;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(213)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(213)
			{
				HX_STACK_LINE(213)
				::nape::geom::Vec2 tmp3 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(213)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(213)
				if ((tmp4)){
					HX_STACK_LINE(213)
					::nape::geom::Vec2 tmp5 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(213)
					ret = tmp5;
				}
				else{
					HX_STACK_LINE(213)
					::nape::geom::Vec2 tmp5 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(213)
					ret = tmp5;
					HX_STACK_LINE(213)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(213)
					ret->zpp_pool = null();
				}
			}
			HX_STACK_LINE(213)
			bool tmp3 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(213)
			if ((tmp3)){
				HX_STACK_LINE(213)
				::zpp_nape::geom::ZPP_Vec2 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(213)
				{
					HX_STACK_LINE(213)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(213)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						::zpp_nape::geom::ZPP_Vec2 tmp5 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(213)
						bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(213)
						if ((tmp6)){
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 tmp7 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(213)
							ret1 = tmp7;
						}
						else{
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 tmp7 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(213)
							ret1 = tmp7;
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(213)
							ret1->next = null();
						}
						HX_STACK_LINE(213)
						ret1->weak = false;
					}
					HX_STACK_LINE(213)
					ret1->_immutable = immutable;
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						ret1->x = x1;
						HX_STACK_LINE(213)
						ret1->y = y;
						HX_STACK_LINE(213)
						{
						}
					}
					HX_STACK_LINE(213)
					tmp4 = ret1;
				}
				HX_STACK_LINE(213)
				ret->zpp_inner = tmp4;
				HX_STACK_LINE(213)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(213)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(213)
				{
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(213)
						bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(213)
						if ((tmp5)){
							HX_STACK_LINE(213)
							_this->_validate();
						}
					}
					HX_STACK_LINE(213)
					tmp4 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(213)
				Float tmp5 = x1;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(213)
				bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(213)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(213)
				if ((tmp6)){
					HX_STACK_LINE(213)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						{
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(213)
							bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(213)
							bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(213)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(213)
							if ((tmp11)){
								HX_STACK_LINE(213)
								_this->_validate();
							}
						}
						HX_STACK_LINE(213)
						Float tmp9 = ret->zpp_inner->y;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(213)
						tmp8 = tmp9;
					}
					HX_STACK_LINE(213)
					Float tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(213)
					tmp7 = (tmp8 == tmp9);
				}
				else{
					HX_STACK_LINE(213)
					tmp7 = false;
				}
				HX_STACK_LINE(213)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(213)
				if ((tmp8)){
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						ret->zpp_inner->x = x1;
						HX_STACK_LINE(213)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(213)
						{
						}
					}
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(213)
						bool tmp9 = (_this->_invalidate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(213)
						if ((tmp9)){
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = _this;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(213)
							_this->_invalidate(tmp10);
						}
					}
				}
				HX_STACK_LINE(213)
				ret;
			}
			HX_STACK_LINE(213)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(213)
			tmp1 = ret;
		}
		HX_STACK_LINE(213)
		::nape::geom::Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(213)
		{
			HX_STACK_LINE(213)
			Float tmp3 = (x + width);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(213)
			Float x1 = tmp3;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(213)
			Float tmp4 = (y + height);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(213)
			Float y1 = tmp4;		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(213)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(213)
			{
				HX_STACK_LINE(213)
				::nape::geom::Vec2 tmp5 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(213)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(213)
				if ((tmp6)){
					HX_STACK_LINE(213)
					::nape::geom::Vec2 tmp7 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(213)
					ret = tmp7;
				}
				else{
					HX_STACK_LINE(213)
					::nape::geom::Vec2 tmp7 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(213)
					ret = tmp7;
					HX_STACK_LINE(213)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(213)
					ret->zpp_pool = null();
				}
			}
			HX_STACK_LINE(213)
			bool tmp5 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(213)
			if ((tmp5)){
				HX_STACK_LINE(213)
				::zpp_nape::geom::ZPP_Vec2 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(213)
				{
					HX_STACK_LINE(213)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(213)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						::zpp_nape::geom::ZPP_Vec2 tmp7 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(213)
						bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(213)
						if ((tmp8)){
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(213)
							ret1 = tmp9;
						}
						else{
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(213)
							ret1 = tmp9;
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(213)
							ret1->next = null();
						}
						HX_STACK_LINE(213)
						ret1->weak = false;
					}
					HX_STACK_LINE(213)
					ret1->_immutable = immutable;
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						ret1->x = x1;
						HX_STACK_LINE(213)
						ret1->y = y1;
						HX_STACK_LINE(213)
						{
						}
					}
					HX_STACK_LINE(213)
					tmp6 = ret1;
				}
				HX_STACK_LINE(213)
				ret->zpp_inner = tmp6;
				HX_STACK_LINE(213)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(213)
				Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(213)
				{
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(213)
						bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(213)
						if ((tmp7)){
							HX_STACK_LINE(213)
							_this->_validate();
						}
					}
					HX_STACK_LINE(213)
					tmp6 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(213)
				Float tmp7 = x1;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(213)
				bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(213)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(213)
				if ((tmp8)){
					HX_STACK_LINE(213)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						{
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(213)
							bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(213)
							bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(213)
							bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(213)
							if ((tmp13)){
								HX_STACK_LINE(213)
								_this->_validate();
							}
						}
						HX_STACK_LINE(213)
						Float tmp11 = ret->zpp_inner->y;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(213)
						tmp10 = tmp11;
					}
					HX_STACK_LINE(213)
					Float tmp11 = y1;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(213)
					tmp9 = (tmp10 == tmp11);
				}
				else{
					HX_STACK_LINE(213)
					tmp9 = false;
				}
				HX_STACK_LINE(213)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(213)
				if ((tmp10)){
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						ret->zpp_inner->x = x1;
						HX_STACK_LINE(213)
						ret->zpp_inner->y = y1;
						HX_STACK_LINE(213)
						{
						}
					}
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(213)
						bool tmp11 = (_this->_invalidate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(213)
						if ((tmp11)){
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 tmp12 = _this;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(213)
							_this->_invalidate(tmp12);
						}
					}
				}
				HX_STACK_LINE(213)
				ret;
			}
			HX_STACK_LINE(213)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(213)
			tmp2 = ret;
		}
		HX_STACK_LINE(213)
		::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(213)
		{
			HX_STACK_LINE(213)
			Float tmp4 = (y + height);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(213)
			Float y1 = tmp4;		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(213)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(213)
			{
				HX_STACK_LINE(213)
				::nape::geom::Vec2 tmp5 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(213)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(213)
				if ((tmp6)){
					HX_STACK_LINE(213)
					::nape::geom::Vec2 tmp7 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(213)
					ret = tmp7;
				}
				else{
					HX_STACK_LINE(213)
					::nape::geom::Vec2 tmp7 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(213)
					ret = tmp7;
					HX_STACK_LINE(213)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(213)
					ret->zpp_pool = null();
				}
			}
			HX_STACK_LINE(213)
			bool tmp5 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(213)
			if ((tmp5)){
				HX_STACK_LINE(213)
				::zpp_nape::geom::ZPP_Vec2 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(213)
				{
					HX_STACK_LINE(213)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(213)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						::zpp_nape::geom::ZPP_Vec2 tmp7 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(213)
						bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(213)
						if ((tmp8)){
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(213)
							ret1 = tmp9;
						}
						else{
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(213)
							ret1 = tmp9;
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(213)
							ret1->next = null();
						}
						HX_STACK_LINE(213)
						ret1->weak = false;
					}
					HX_STACK_LINE(213)
					ret1->_immutable = immutable;
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						ret1->x = x;
						HX_STACK_LINE(213)
						ret1->y = y1;
						HX_STACK_LINE(213)
						{
						}
					}
					HX_STACK_LINE(213)
					tmp6 = ret1;
				}
				HX_STACK_LINE(213)
				ret->zpp_inner = tmp6;
				HX_STACK_LINE(213)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(213)
				Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(213)
				{
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(213)
						bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(213)
						if ((tmp7)){
							HX_STACK_LINE(213)
							_this->_validate();
						}
					}
					HX_STACK_LINE(213)
					tmp6 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(213)
				Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(213)
				bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(213)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(213)
				if ((tmp8)){
					HX_STACK_LINE(213)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						{
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(213)
							bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(213)
							bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(213)
							bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(213)
							if ((tmp13)){
								HX_STACK_LINE(213)
								_this->_validate();
							}
						}
						HX_STACK_LINE(213)
						Float tmp11 = ret->zpp_inner->y;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(213)
						tmp10 = tmp11;
					}
					HX_STACK_LINE(213)
					Float tmp11 = y1;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(213)
					tmp9 = (tmp10 == tmp11);
				}
				else{
					HX_STACK_LINE(213)
					tmp9 = false;
				}
				HX_STACK_LINE(213)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(213)
				if ((tmp10)){
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(213)
						ret->zpp_inner->y = y1;
						HX_STACK_LINE(213)
						{
						}
					}
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(213)
						bool tmp11 = (_this->_invalidate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(213)
						if ((tmp11)){
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 tmp12 = _this;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(213)
							_this->_invalidate(tmp12);
						}
					}
				}
				HX_STACK_LINE(213)
				ret;
			}
			HX_STACK_LINE(213)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(213)
			tmp3 = ret;
		}
		HX_STACK_LINE(213)
		return Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Polygon_obj,rect,return )

Array< ::Dynamic > Polygon_obj::box( Float width,Float height,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.shape.Polygon","box",0x3558ec24,"nape.shape.Polygon.box","nape/shape/Polygon.hx",231,0x3fc17059)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(235)
		Float tmp = width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(235)
		Float tmp1 = -(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(235)
		Float tmp2 = (Float(tmp1) / Float((int)2));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(235)
		Float tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(235)
		Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(235)
		Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(235)
		Float tmp6 = width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(235)
		Float tmp7 = height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(235)
		bool tmp8 = weak;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(235)
		return ::nape::shape::Polygon_obj::rect(tmp2,tmp5,tmp6,tmp7,tmp8);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polygon_obj,box,return )

Array< ::Dynamic > Polygon_obj::regular( Float xRadius,Float yRadius,int edgeCount,hx::Null< Float >  __o_angleOffset,hx::Null< bool >  __o_weak){
Float angleOffset = __o_angleOffset.Default(((Float)0.0));
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.shape.Polygon","regular",0x2a4a00f5,"nape.shape.Polygon.regular","nape/shape/Polygon.hx",257,0x3fc17059)
	HX_STACK_ARG(xRadius,"xRadius")
	HX_STACK_ARG(yRadius,"yRadius")
	HX_STACK_ARG(edgeCount,"edgeCount")
	HX_STACK_ARG(angleOffset,"angleOffset")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(261)
		Array< ::Dynamic > ret = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(262)
		Float tmp = ::Math_obj::PI;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(262)
		Float tmp1 = (tmp * (int)2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(262)
		int tmp2 = edgeCount;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(262)
		Float tmp3 = (Float(tmp1) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(262)
		Float dangle = tmp3;		HX_STACK_VAR(dangle,"dangle");
		HX_STACK_LINE(263)
		{
			HX_STACK_LINE(263)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(263)
			while((true)){
				HX_STACK_LINE(263)
				bool tmp4 = (_g < edgeCount);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(263)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(263)
				if ((tmp5)){
					HX_STACK_LINE(263)
					break;
				}
				HX_STACK_LINE(263)
				int tmp6 = (_g)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(263)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(264)
				Float tmp7 = (i * dangle);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(264)
				Float tmp8 = angleOffset;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(264)
				Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(264)
				Float ang = tmp9;		HX_STACK_VAR(ang,"ang");
				HX_STACK_LINE(265)
				::nape::geom::Vec2 tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(265)
				{
					HX_STACK_LINE(265)
					Float tmp11 = ang;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(265)
					Float tmp12 = ::Math_obj::cos(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(265)
					Float tmp13 = xRadius;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(265)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(265)
					Float x = tmp14;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(265)
					Float tmp15 = ang;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(265)
					Float tmp16 = ::Math_obj::sin(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(265)
					Float tmp17 = yRadius;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(265)
					Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(265)
					Float y = tmp18;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(265)
					::nape::geom::Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(265)
					{
						HX_STACK_LINE(265)
						::nape::geom::Vec2 tmp19 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(265)
						bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(265)
						if ((tmp20)){
							HX_STACK_LINE(265)
							::nape::geom::Vec2 tmp21 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(265)
							ret1 = tmp21;
						}
						else{
							HX_STACK_LINE(265)
							::nape::geom::Vec2 tmp21 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(265)
							ret1 = tmp21;
							HX_STACK_LINE(265)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret1->zpp_pool;
							HX_STACK_LINE(265)
							ret1->zpp_pool = null();
						}
					}
					HX_STACK_LINE(265)
					bool tmp19 = (ret1->zpp_inner == null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(265)
					if ((tmp19)){
						HX_STACK_LINE(265)
						::zpp_nape::geom::ZPP_Vec2 tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(265)
						{
							HX_STACK_LINE(265)
							bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
							HX_STACK_LINE(265)
							::zpp_nape::geom::ZPP_Vec2 ret2;		HX_STACK_VAR(ret2,"ret2");
							HX_STACK_LINE(265)
							{
								HX_STACK_LINE(265)
								::zpp_nape::geom::ZPP_Vec2 tmp21 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(265)
								bool tmp22 = (tmp21 == null());		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(265)
								if ((tmp22)){
									HX_STACK_LINE(265)
									::zpp_nape::geom::ZPP_Vec2 tmp23 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(265)
									ret2 = tmp23;
								}
								else{
									HX_STACK_LINE(265)
									::zpp_nape::geom::ZPP_Vec2 tmp23 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(265)
									ret2 = tmp23;
									HX_STACK_LINE(265)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret2->next;
									HX_STACK_LINE(265)
									ret2->next = null();
								}
								HX_STACK_LINE(265)
								ret2->weak = false;
							}
							HX_STACK_LINE(265)
							ret2->_immutable = immutable;
							HX_STACK_LINE(265)
							{
								HX_STACK_LINE(265)
								ret2->x = x;
								HX_STACK_LINE(265)
								ret2->y = y;
								HX_STACK_LINE(265)
								{
								}
							}
							HX_STACK_LINE(265)
							tmp20 = ret2;
						}
						HX_STACK_LINE(265)
						ret1->zpp_inner = tmp20;
						HX_STACK_LINE(265)
						ret1->zpp_inner->outer = ret1;
					}
					else{
						HX_STACK_LINE(265)
						Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(265)
						{
							HX_STACK_LINE(265)
							{
								HX_STACK_LINE(265)
								::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(265)
								bool tmp21 = (_this->_validate != null());		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(265)
								if ((tmp21)){
									HX_STACK_LINE(265)
									_this->_validate();
								}
							}
							HX_STACK_LINE(265)
							tmp20 = ret1->zpp_inner->x;
						}
						HX_STACK_LINE(265)
						Float tmp21 = x;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(265)
						bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(265)
						bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(265)
						if ((tmp22)){
							HX_STACK_LINE(265)
							Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(265)
							{
								HX_STACK_LINE(265)
								{
									HX_STACK_LINE(265)
									::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(265)
									bool tmp25 = (_this->_validate != null());		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(265)
									bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(265)
									bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(265)
									if ((tmp27)){
										HX_STACK_LINE(265)
										_this->_validate();
									}
								}
								HX_STACK_LINE(265)
								Float tmp25 = ret1->zpp_inner->y;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(265)
								tmp24 = tmp25;
							}
							HX_STACK_LINE(265)
							Float tmp25 = y;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(265)
							tmp23 = (tmp24 == tmp25);
						}
						else{
							HX_STACK_LINE(265)
							tmp23 = false;
						}
						HX_STACK_LINE(265)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(265)
						if ((tmp24)){
							HX_STACK_LINE(265)
							{
								HX_STACK_LINE(265)
								ret1->zpp_inner->x = x;
								HX_STACK_LINE(265)
								ret1->zpp_inner->y = y;
								HX_STACK_LINE(265)
								{
								}
							}
							HX_STACK_LINE(265)
							{
								HX_STACK_LINE(265)
								::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(265)
								bool tmp25 = (_this->_invalidate != null());		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(265)
								if ((tmp25)){
									HX_STACK_LINE(265)
									::zpp_nape::geom::ZPP_Vec2 tmp26 = _this;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(265)
									_this->_invalidate(tmp26);
								}
							}
						}
						HX_STACK_LINE(265)
						ret1;
					}
					HX_STACK_LINE(265)
					ret1->zpp_inner->weak = weak;
					HX_STACK_LINE(265)
					tmp10 = ret1;
				}
				HX_STACK_LINE(265)
				::nape::geom::Vec2 x = tmp10;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(266)
				::nape::geom::Vec2 tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(266)
				ret->push(tmp11);
			}
		}
		HX_STACK_LINE(268)
		return ret;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Polygon_obj,regular,return )


Polygon_obj::Polygon_obj()
{
}

void Polygon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Polygon);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::shape::Shape_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Polygon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::shape::Shape_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Polygon_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"edges") ) { if (inCallProp == hx::paccAlways) return get_edges(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validity") ) { return validity_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_edges") ) { return get_edges_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"localVerts") ) { if (inCallProp == hx::paccAlways) return get_localVerts(); }
		if (HX_FIELD_EQ(inName,"worldVerts") ) { if (inCallProp == hx::paccAlways) return get_worldVerts(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { return zpp_inner_zn; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_localVerts") ) { return get_localVerts_dyn(); }
		if (HX_FIELD_EQ(inName,"get_worldVerts") ) { return get_worldVerts_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Polygon_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { outValue = box_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { outValue = rect_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"regular") ) { outValue = regular_dyn(); return true;  }
	}
	return false;
}

Dynamic Polygon_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::shape::ZPP_Polygon >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Polygon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0"));
	outFields->push(HX_HCSTRING("localVerts","\x37","\x89","\x55","\x6c"));
	outFields->push(HX_HCSTRING("worldVerts","\xf0","\x96","\x0e","\xa0"));
	outFields->push(HX_HCSTRING("edges","\x96","\x6d","\xe0","\x69"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::shape::ZPP_Polygon*/ ,(int)offsetof(Polygon_obj,zpp_inner_zn),HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0"),
	HX_HCSTRING("get_localVerts","\x80","\x11","\x4b","\xe2"),
	HX_HCSTRING("get_worldVerts","\x39","\x1f","\x04","\x16"),
	HX_HCSTRING("get_edges","\xed","\xc9","\x89","\xad"),
	HX_HCSTRING("validity","\xb2","\xe2","\xe9","\x04"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Polygon_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Polygon_obj::__mClass,"__mClass");
};

#endif

hx::Class Polygon_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"),
	HX_HCSTRING("box","\x0b","\xbe","\x4a","\x00"),
	HX_HCSTRING("regular","\x5c","\x52","\x88","\x82"),
	::String(null()) };

void Polygon_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.shape.Polygon","\x07","\x4e","\x19","\xcd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Polygon_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Polygon_obj >;
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
} // end namespace shape
