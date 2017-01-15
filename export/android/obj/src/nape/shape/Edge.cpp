#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Edge
#include <nape/shape/Edge.h>
#endif
#ifndef INCLUDED_nape_shape_Polygon
#include <nape/shape/Polygon.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
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
#ifndef INCLUDED_zpp_nape_shape_ZPP_Edge
#include <zpp_nape/shape/ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Edge
#include <zpp_nape/util/ZNPList_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Edge
#include <zpp_nape/util/ZNPNode_ZPP_Edge.h>
#endif
namespace nape{
namespace shape{

Void Edge_obj::__construct()
{
HX_STACK_FRAME("nape.shape.Edge","new",0xc0f99b82,"nape.shape.Edge.new","nape/shape/Edge.hx",177,0xab3b8fac)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(181)
	this->zpp_inner = null();
}
;
	return null();
}

//Edge_obj::~Edge_obj() { }

Dynamic Edge_obj::__CreateEmpty() { return  new Edge_obj; }
hx::ObjectPtr< Edge_obj > Edge_obj::__new()
{  hx::ObjectPtr< Edge_obj > _result_ = new Edge_obj();
	_result_->__construct();
	return _result_;}

Dynamic Edge_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Edge_obj > _result_ = new Edge_obj();
	_result_->__construct();
	return _result_;}

::nape::shape::Polygon Edge_obj::get_polygon( ){
	HX_STACK_FRAME("nape.shape.Edge","get_polygon",0x78841fb3,"nape.shape.Edge.get_polygon","nape/shape/Edge.hx",195,0xab3b8fac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(199)
	::zpp_nape::shape::ZPP_Edge tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(199)
	::nape::shape::Polygon tmp1 = tmp->polygon->outer_zn;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(199)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Edge_obj,get_polygon,return )

::nape::geom::Vec2 Edge_obj::get_localNormal( ){
	HX_STACK_FRAME("nape.shape.Edge","get_localNormal",0x39c0bfab,"nape.shape.Edge.get_localNormal","nape/shape/Edge.hx",208,0xab3b8fac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(212)
	::zpp_nape::shape::ZPP_Edge tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(212)
	::nape::geom::Vec2 tmp1 = tmp->wrap_lnorm;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(212)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(212)
	if ((tmp2)){
		HX_STACK_LINE(212)
		::zpp_nape::shape::ZPP_Edge tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(212)
		tmp3->getlnorm();
	}
	HX_STACK_LINE(213)
	::zpp_nape::shape::ZPP_Edge tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(213)
	::nape::geom::Vec2 tmp4 = tmp3->wrap_lnorm;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(213)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Edge_obj,get_localNormal,return )

::nape::geom::Vec2 Edge_obj::get_worldNormal( ){
	HX_STACK_FRAME("nape.shape.Edge","get_worldNormal",0x47f3b3d2,"nape.shape.Edge.get_worldNormal","nape/shape/Edge.hx",224,0xab3b8fac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(228)
	::zpp_nape::shape::ZPP_Edge tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(228)
	::nape::geom::Vec2 tmp1 = tmp->wrap_gnorm;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(228)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(228)
	if ((tmp2)){
		HX_STACK_LINE(228)
		::zpp_nape::shape::ZPP_Edge tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(228)
		tmp3->getgnorm();
	}
	HX_STACK_LINE(229)
	::zpp_nape::shape::ZPP_Edge tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(229)
	::nape::geom::Vec2 tmp4 = tmp3->wrap_gnorm;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(229)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Edge_obj,get_worldNormal,return )

Float Edge_obj::get_length( ){
	HX_STACK_FRAME("nape.shape.Edge","get_length",0xf6bbc1cd,"nape.shape.Edge.get_length","nape/shape/Edge.hx",236,0xab3b8fac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(240)
	::zpp_nape::shape::ZPP_Edge tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(240)
	tmp->polygon->validate_laxi();
	HX_STACK_LINE(241)
	::zpp_nape::shape::ZPP_Edge tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(241)
	Float tmp2 = tmp1->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(241)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Edge_obj,get_length,return )

Float Edge_obj::get_localProjection( ){
	HX_STACK_FRAME("nape.shape.Edge","get_localProjection",0xa0f1e813,"nape.shape.Edge.get_localProjection","nape/shape/Edge.hx",248,0xab3b8fac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(252)
	::zpp_nape::shape::ZPP_Edge tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(252)
	tmp->polygon->validate_laxi();
	HX_STACK_LINE(253)
	::zpp_nape::shape::ZPP_Edge tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(253)
	Float tmp2 = tmp1->lprojection;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(253)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Edge_obj,get_localProjection,return )

Float Edge_obj::get_worldProjection( ){
	HX_STACK_FRAME("nape.shape.Edge","get_worldProjection",0xea4f7bba,"nape.shape.Edge.get_worldProjection","nape/shape/Edge.hx",262,0xab3b8fac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(267)
	{
		HX_STACK_LINE(267)
		::zpp_nape::shape::ZPP_Edge tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(267)
		::zpp_nape::shape::ZPP_Polygon _this = tmp->polygon;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(267)
		bool tmp1 = _this->zip_gaxi;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(267)
		if ((tmp1)){
			HX_STACK_LINE(267)
			bool tmp2 = (_this->body != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(267)
			if ((tmp2)){
				HX_STACK_LINE(267)
				_this->zip_gaxi = false;
				HX_STACK_LINE(267)
				_this->validate_laxi();
				HX_STACK_LINE(267)
				{
					HX_STACK_LINE(267)
					::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(267)
					bool tmp3 = _this1->zip_axis;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(267)
					if ((tmp3)){
						HX_STACK_LINE(267)
						_this1->zip_axis = false;
						HX_STACK_LINE(267)
						{
							HX_STACK_LINE(267)
							Float tmp4 = _this1->rot;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(267)
							Float tmp5 = ::Math_obj::sin(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(267)
							_this1->axisx = tmp5;
							HX_STACK_LINE(267)
							Float tmp6 = _this1->rot;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(267)
							Float tmp7 = ::Math_obj::cos(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(267)
							_this1->axisy = tmp7;
							HX_STACK_LINE(267)
							Dynamic();
						}
					}
				}
				HX_STACK_LINE(267)
				{
					HX_STACK_LINE(267)
					bool tmp3 = _this->zip_gverts;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(267)
					if ((tmp3)){
						HX_STACK_LINE(267)
						bool tmp4 = (_this->body != null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(267)
						if ((tmp4)){
							HX_STACK_LINE(267)
							_this->zip_gverts = false;
							HX_STACK_LINE(267)
							_this->validate_lverts();
							HX_STACK_LINE(267)
							{
								HX_STACK_LINE(267)
								::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(267)
								bool tmp5 = _this1->zip_axis;		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(267)
								if ((tmp5)){
									HX_STACK_LINE(267)
									_this1->zip_axis = false;
									HX_STACK_LINE(267)
									{
										HX_STACK_LINE(267)
										Float tmp6 = _this1->rot;		HX_STACK_VAR(tmp6,"tmp6");
										HX_STACK_LINE(267)
										Float tmp7 = ::Math_obj::sin(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(267)
										_this1->axisx = tmp7;
										HX_STACK_LINE(267)
										Float tmp8 = _this1->rot;		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(267)
										Float tmp9 = ::Math_obj::cos(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(267)
										_this1->axisy = tmp9;
										HX_STACK_LINE(267)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(267)
							::zpp_nape::geom::ZPP_Vec2 tmp5 = _this->lverts->next;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(267)
							::zpp_nape::geom::ZPP_Vec2 li = tmp5;		HX_STACK_VAR(li,"li");
							HX_STACK_LINE(267)
							{
								HX_STACK_LINE(267)
								::zpp_nape::geom::ZPP_Vec2 tmp6 = _this->gverts->next;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(267)
								::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp6;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(267)
								while((true)){
									HX_STACK_LINE(267)
									bool tmp7 = (cx_ite != null());		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(267)
									bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(267)
									if ((tmp8)){
										HX_STACK_LINE(267)
										break;
									}
									HX_STACK_LINE(267)
									::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(267)
									{
										HX_STACK_LINE(267)
										::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
										HX_STACK_LINE(267)
										li = li->next;
										HX_STACK_LINE(267)
										{
											HX_STACK_LINE(267)
											Float tmp9 = _this->body->posx;		HX_STACK_VAR(tmp9,"tmp9");
											HX_STACK_LINE(267)
											Float tmp10 = _this->body->axisy;		HX_STACK_VAR(tmp10,"tmp10");
											HX_STACK_LINE(267)
											Float tmp11 = l->x;		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(267)
											Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(267)
											Float tmp13 = _this->body->axisx;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(267)
											Float tmp14 = l->y;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(267)
											Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(267)
											Float tmp16 = (tmp12 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(267)
											Float tmp17 = (tmp9 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(267)
											g->x = tmp17;
											HX_STACK_LINE(267)
											Float tmp18 = _this->body->posy;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(267)
											Float tmp19 = l->x;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(267)
											Float tmp20 = _this->body->axisx;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(267)
											Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(267)
											Float tmp22 = l->y;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(267)
											Float tmp23 = _this->body->axisy;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(267)
											Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(267)
											Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(267)
											Float tmp26 = (tmp18 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(267)
											g->y = tmp26;
										}
									}
									HX_STACK_LINE(267)
									cx_ite = cx_ite->next;
								}
							}
						}
					}
				}
				HX_STACK_LINE(267)
				::zpp_nape::util::ZNPNode_ZPP_Edge tmp3 = _this->edges->head;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(267)
				::zpp_nape::util::ZNPNode_ZPP_Edge ite = tmp3;		HX_STACK_VAR(ite,"ite");
				HX_STACK_LINE(267)
				{
					HX_STACK_LINE(267)
					::zpp_nape::geom::ZPP_Vec2 tmp4 = _this->gverts->next;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(267)
					::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp4;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(267)
					::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
					HX_STACK_LINE(267)
					cx_ite = cx_ite->next;
					HX_STACK_LINE(267)
					while((true)){
						HX_STACK_LINE(267)
						bool tmp5 = (cx_ite != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(267)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(267)
						if ((tmp6)){
							HX_STACK_LINE(267)
							break;
						}
						HX_STACK_LINE(267)
						::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(267)
						{
							HX_STACK_LINE(267)
							::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(267)
							ite = ite->next;
							HX_STACK_LINE(267)
							e->gp0 = u;
							HX_STACK_LINE(267)
							e->gp1 = v;
							HX_STACK_LINE(267)
							{
								HX_STACK_LINE(267)
								Float tmp7 = _this->body->axisy;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(267)
								Float tmp8 = e->lnormx;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(267)
								Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(267)
								Float tmp10 = _this->body->axisx;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(267)
								Float tmp11 = e->lnormy;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(267)
								Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(267)
								Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(267)
								e->gnormx = tmp13;
								HX_STACK_LINE(267)
								Float tmp14 = e->lnormx;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(267)
								Float tmp15 = _this->body->axisx;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(267)
								Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(267)
								Float tmp17 = e->lnormy;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(267)
								Float tmp18 = _this->body->axisy;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(267)
								Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(267)
								Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(267)
								e->gnormy = tmp20;
							}
							HX_STACK_LINE(267)
							Float tmp7 = _this->body->posx;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(267)
							Float tmp8 = e->gnormx;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(267)
							Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(267)
							Float tmp10 = _this->body->posy;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(267)
							Float tmp11 = e->gnormy;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(267)
							Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(267)
							Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(267)
							Float tmp14 = e->lprojection;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(267)
							Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(267)
							e->gprojection = tmp15;
							HX_STACK_LINE(267)
							bool tmp16 = (e->wrap_gnorm != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(267)
							if ((tmp16)){
								HX_STACK_LINE(267)
								::zpp_nape::geom::ZPP_Vec2 tmp17 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(267)
								tmp17->x = e->gnormx;
								HX_STACK_LINE(267)
								::zpp_nape::geom::ZPP_Vec2 tmp18 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(267)
								tmp18->y = e->gnormy;
								HX_STACK_LINE(267)
								{
								}
							}
							HX_STACK_LINE(267)
							Float tmp17 = e->gp0->y;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(267)
							Float tmp18 = e->gnormx;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(267)
							Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(267)
							Float tmp20 = e->gp0->x;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(267)
							Float tmp21 = e->gnormy;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(267)
							Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(267)
							Float tmp23 = (tmp19 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(267)
							e->tp0 = tmp23;
							HX_STACK_LINE(267)
							Float tmp24 = e->gp1->y;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(267)
							Float tmp25 = e->gnormx;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(267)
							Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(267)
							Float tmp27 = e->gp1->x;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(267)
							Float tmp28 = e->gnormy;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(267)
							Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(267)
							Float tmp30 = (tmp26 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(267)
							e->tp1 = tmp30;
						}
						HX_STACK_LINE(267)
						u = v;
						HX_STACK_LINE(267)
						cx_ite = cx_ite->next;
					}
					HX_STACK_LINE(267)
					::zpp_nape::geom::ZPP_Vec2 tmp5 = _this->gverts->next;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(267)
					::zpp_nape::geom::ZPP_Vec2 v = tmp5;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(267)
					{
						HX_STACK_LINE(267)
						::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(267)
						ite = ite->next;
						HX_STACK_LINE(267)
						e->gp0 = u;
						HX_STACK_LINE(267)
						e->gp1 = v;
						HX_STACK_LINE(267)
						{
							HX_STACK_LINE(267)
							Float tmp6 = _this->body->axisy;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(267)
							Float tmp7 = e->lnormx;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(267)
							Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(267)
							Float tmp9 = _this->body->axisx;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(267)
							Float tmp10 = e->lnormy;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(267)
							Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(267)
							Float tmp12 = (tmp8 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(267)
							e->gnormx = tmp12;
							HX_STACK_LINE(267)
							Float tmp13 = e->lnormx;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(267)
							Float tmp14 = _this->body->axisx;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(267)
							Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(267)
							Float tmp16 = e->lnormy;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(267)
							Float tmp17 = _this->body->axisy;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(267)
							Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(267)
							Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(267)
							e->gnormy = tmp19;
						}
						HX_STACK_LINE(267)
						Float tmp6 = _this->body->posx;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(267)
						Float tmp7 = e->gnormx;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(267)
						Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(267)
						Float tmp9 = _this->body->posy;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(267)
						Float tmp10 = e->gnormy;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(267)
						Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(267)
						Float tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(267)
						Float tmp13 = e->lprojection;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(267)
						Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(267)
						e->gprojection = tmp14;
						HX_STACK_LINE(267)
						bool tmp15 = (e->wrap_gnorm != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(267)
						if ((tmp15)){
							HX_STACK_LINE(267)
							::zpp_nape::geom::ZPP_Vec2 tmp16 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(267)
							tmp16->x = e->gnormx;
							HX_STACK_LINE(267)
							::zpp_nape::geom::ZPP_Vec2 tmp17 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(267)
							tmp17->y = e->gnormy;
							HX_STACK_LINE(267)
							{
							}
						}
						HX_STACK_LINE(267)
						Float tmp16 = e->gp0->y;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(267)
						Float tmp17 = e->gnormx;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(267)
						Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(267)
						Float tmp19 = e->gp0->x;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(267)
						Float tmp20 = e->gnormy;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(267)
						Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(267)
						Float tmp22 = (tmp18 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(267)
						e->tp0 = tmp22;
						HX_STACK_LINE(267)
						Float tmp23 = e->gp1->y;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(267)
						Float tmp24 = e->gnormx;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(267)
						Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(267)
						Float tmp26 = e->gp1->x;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(267)
						Float tmp27 = e->gnormy;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(267)
						Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(267)
						Float tmp29 = (tmp25 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(267)
						e->tp1 = tmp29;
					}
				}
			}
		}
	}
	HX_STACK_LINE(268)
	::zpp_nape::shape::ZPP_Edge tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(268)
	Float tmp1 = tmp->gprojection;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(268)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Edge_obj,get_worldProjection,return )

::nape::geom::Vec2 Edge_obj::get_localVertex1( ){
	HX_STACK_FRAME("nape.shape.Edge","get_localVertex1",0xa0a4a249,"nape.shape.Edge.get_localVertex1","nape/shape/Edge.hx",275,0xab3b8fac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(279)
	::zpp_nape::shape::ZPP_Edge tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(279)
	tmp->polygon->validate_laxi();
	HX_STACK_LINE(280)
	::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(280)
	{
		HX_STACK_LINE(280)
		::zpp_nape::shape::ZPP_Edge tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(280)
		::zpp_nape::geom::ZPP_Vec2 _this = tmp2->lp0;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(280)
		bool tmp3 = (_this->outer == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(280)
		if ((tmp3)){
			HX_STACK_LINE(280)
			::nape::geom::Vec2 tmp4 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(280)
			_this->outer = tmp4;
			HX_STACK_LINE(280)
			{
				HX_STACK_LINE(280)
				::zpp_nape::geom::ZPP_Vec2 tmp5 = _this->outer->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(280)
				::zpp_nape::geom::ZPP_Vec2 o = tmp5;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(280)
				{
					HX_STACK_LINE(280)
					bool tmp6 = (o->outer != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(280)
					if ((tmp6)){
						HX_STACK_LINE(280)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(280)
						o->outer = null();
					}
					HX_STACK_LINE(280)
					o->_isimmutable = null();
					HX_STACK_LINE(280)
					o->_validate = null();
					HX_STACK_LINE(280)
					o->_invalidate = null();
				}
				HX_STACK_LINE(280)
				::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(280)
				o->next = tmp6;
				HX_STACK_LINE(280)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
			HX_STACK_LINE(280)
			_this->outer->zpp_inner = _this;
		}
		HX_STACK_LINE(280)
		tmp1 = _this->outer;
	}
	HX_STACK_LINE(280)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Edge_obj,get_localVertex1,return )

::nape::geom::Vec2 Edge_obj::get_localVertex2( ){
	HX_STACK_FRAME("nape.shape.Edge","get_localVertex2",0xa0a4a24a,"nape.shape.Edge.get_localVertex2","nape/shape/Edge.hx",287,0xab3b8fac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(291)
	::zpp_nape::shape::ZPP_Edge tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(291)
	tmp->polygon->validate_laxi();
	HX_STACK_LINE(292)
	::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(292)
	{
		HX_STACK_LINE(292)
		::zpp_nape::shape::ZPP_Edge tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(292)
		::zpp_nape::geom::ZPP_Vec2 _this = tmp2->lp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(292)
		bool tmp3 = (_this->outer == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(292)
		if ((tmp3)){
			HX_STACK_LINE(292)
			::nape::geom::Vec2 tmp4 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(292)
			_this->outer = tmp4;
			HX_STACK_LINE(292)
			{
				HX_STACK_LINE(292)
				::zpp_nape::geom::ZPP_Vec2 tmp5 = _this->outer->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(292)
				::zpp_nape::geom::ZPP_Vec2 o = tmp5;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(292)
				{
					HX_STACK_LINE(292)
					bool tmp6 = (o->outer != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(292)
					if ((tmp6)){
						HX_STACK_LINE(292)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(292)
						o->outer = null();
					}
					HX_STACK_LINE(292)
					o->_isimmutable = null();
					HX_STACK_LINE(292)
					o->_validate = null();
					HX_STACK_LINE(292)
					o->_invalidate = null();
				}
				HX_STACK_LINE(292)
				::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(292)
				o->next = tmp6;
				HX_STACK_LINE(292)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
			HX_STACK_LINE(292)
			_this->outer->zpp_inner = _this;
		}
		HX_STACK_LINE(292)
		tmp1 = _this->outer;
	}
	HX_STACK_LINE(292)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Edge_obj,get_localVertex2,return )

::nape::geom::Vec2 Edge_obj::get_worldVertex1( ){
	HX_STACK_FRAME("nape.shape.Edge","get_worldVertex1",0xff075042,"nape.shape.Edge.get_worldVertex1","nape/shape/Edge.hx",299,0xab3b8fac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(303)
	{
		HX_STACK_LINE(303)
		::zpp_nape::shape::ZPP_Edge tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(303)
		::zpp_nape::shape::ZPP_Polygon _this = tmp->polygon;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(303)
		bool tmp1 = _this->zip_gaxi;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(303)
		if ((tmp1)){
			HX_STACK_LINE(303)
			bool tmp2 = (_this->body != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(303)
			if ((tmp2)){
				HX_STACK_LINE(303)
				_this->zip_gaxi = false;
				HX_STACK_LINE(303)
				_this->validate_laxi();
				HX_STACK_LINE(303)
				{
					HX_STACK_LINE(303)
					::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(303)
					bool tmp3 = _this1->zip_axis;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(303)
					if ((tmp3)){
						HX_STACK_LINE(303)
						_this1->zip_axis = false;
						HX_STACK_LINE(303)
						{
							HX_STACK_LINE(303)
							Float tmp4 = _this1->rot;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(303)
							Float tmp5 = ::Math_obj::sin(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(303)
							_this1->axisx = tmp5;
							HX_STACK_LINE(303)
							Float tmp6 = _this1->rot;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(303)
							Float tmp7 = ::Math_obj::cos(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(303)
							_this1->axisy = tmp7;
							HX_STACK_LINE(303)
							Dynamic();
						}
					}
				}
				HX_STACK_LINE(303)
				{
					HX_STACK_LINE(303)
					bool tmp3 = _this->zip_gverts;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(303)
					if ((tmp3)){
						HX_STACK_LINE(303)
						bool tmp4 = (_this->body != null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(303)
						if ((tmp4)){
							HX_STACK_LINE(303)
							_this->zip_gverts = false;
							HX_STACK_LINE(303)
							_this->validate_lverts();
							HX_STACK_LINE(303)
							{
								HX_STACK_LINE(303)
								::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(303)
								bool tmp5 = _this1->zip_axis;		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(303)
								if ((tmp5)){
									HX_STACK_LINE(303)
									_this1->zip_axis = false;
									HX_STACK_LINE(303)
									{
										HX_STACK_LINE(303)
										Float tmp6 = _this1->rot;		HX_STACK_VAR(tmp6,"tmp6");
										HX_STACK_LINE(303)
										Float tmp7 = ::Math_obj::sin(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(303)
										_this1->axisx = tmp7;
										HX_STACK_LINE(303)
										Float tmp8 = _this1->rot;		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(303)
										Float tmp9 = ::Math_obj::cos(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(303)
										_this1->axisy = tmp9;
										HX_STACK_LINE(303)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(303)
							::zpp_nape::geom::ZPP_Vec2 tmp5 = _this->lverts->next;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(303)
							::zpp_nape::geom::ZPP_Vec2 li = tmp5;		HX_STACK_VAR(li,"li");
							HX_STACK_LINE(303)
							{
								HX_STACK_LINE(303)
								::zpp_nape::geom::ZPP_Vec2 tmp6 = _this->gverts->next;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(303)
								::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp6;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(303)
								while((true)){
									HX_STACK_LINE(303)
									bool tmp7 = (cx_ite != null());		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(303)
									bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(303)
									if ((tmp8)){
										HX_STACK_LINE(303)
										break;
									}
									HX_STACK_LINE(303)
									::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(303)
									{
										HX_STACK_LINE(303)
										::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
										HX_STACK_LINE(303)
										li = li->next;
										HX_STACK_LINE(303)
										{
											HX_STACK_LINE(303)
											Float tmp9 = _this->body->posx;		HX_STACK_VAR(tmp9,"tmp9");
											HX_STACK_LINE(303)
											Float tmp10 = _this->body->axisy;		HX_STACK_VAR(tmp10,"tmp10");
											HX_STACK_LINE(303)
											Float tmp11 = l->x;		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(303)
											Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(303)
											Float tmp13 = _this->body->axisx;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(303)
											Float tmp14 = l->y;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(303)
											Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(303)
											Float tmp16 = (tmp12 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(303)
											Float tmp17 = (tmp9 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(303)
											g->x = tmp17;
											HX_STACK_LINE(303)
											Float tmp18 = _this->body->posy;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(303)
											Float tmp19 = l->x;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(303)
											Float tmp20 = _this->body->axisx;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(303)
											Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(303)
											Float tmp22 = l->y;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(303)
											Float tmp23 = _this->body->axisy;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(303)
											Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(303)
											Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(303)
											Float tmp26 = (tmp18 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(303)
											g->y = tmp26;
										}
									}
									HX_STACK_LINE(303)
									cx_ite = cx_ite->next;
								}
							}
						}
					}
				}
				HX_STACK_LINE(303)
				::zpp_nape::util::ZNPNode_ZPP_Edge tmp3 = _this->edges->head;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(303)
				::zpp_nape::util::ZNPNode_ZPP_Edge ite = tmp3;		HX_STACK_VAR(ite,"ite");
				HX_STACK_LINE(303)
				{
					HX_STACK_LINE(303)
					::zpp_nape::geom::ZPP_Vec2 tmp4 = _this->gverts->next;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(303)
					::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp4;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(303)
					::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
					HX_STACK_LINE(303)
					cx_ite = cx_ite->next;
					HX_STACK_LINE(303)
					while((true)){
						HX_STACK_LINE(303)
						bool tmp5 = (cx_ite != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(303)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(303)
						if ((tmp6)){
							HX_STACK_LINE(303)
							break;
						}
						HX_STACK_LINE(303)
						::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(303)
						{
							HX_STACK_LINE(303)
							::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(303)
							ite = ite->next;
							HX_STACK_LINE(303)
							e->gp0 = u;
							HX_STACK_LINE(303)
							e->gp1 = v;
							HX_STACK_LINE(303)
							{
								HX_STACK_LINE(303)
								Float tmp7 = _this->body->axisy;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(303)
								Float tmp8 = e->lnormx;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(303)
								Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(303)
								Float tmp10 = _this->body->axisx;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(303)
								Float tmp11 = e->lnormy;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(303)
								Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(303)
								Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(303)
								e->gnormx = tmp13;
								HX_STACK_LINE(303)
								Float tmp14 = e->lnormx;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(303)
								Float tmp15 = _this->body->axisx;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(303)
								Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(303)
								Float tmp17 = e->lnormy;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(303)
								Float tmp18 = _this->body->axisy;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(303)
								Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(303)
								Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(303)
								e->gnormy = tmp20;
							}
							HX_STACK_LINE(303)
							Float tmp7 = _this->body->posx;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(303)
							Float tmp8 = e->gnormx;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(303)
							Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(303)
							Float tmp10 = _this->body->posy;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(303)
							Float tmp11 = e->gnormy;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(303)
							Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(303)
							Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(303)
							Float tmp14 = e->lprojection;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(303)
							Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(303)
							e->gprojection = tmp15;
							HX_STACK_LINE(303)
							bool tmp16 = (e->wrap_gnorm != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(303)
							if ((tmp16)){
								HX_STACK_LINE(303)
								::zpp_nape::geom::ZPP_Vec2 tmp17 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(303)
								tmp17->x = e->gnormx;
								HX_STACK_LINE(303)
								::zpp_nape::geom::ZPP_Vec2 tmp18 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(303)
								tmp18->y = e->gnormy;
								HX_STACK_LINE(303)
								{
								}
							}
							HX_STACK_LINE(303)
							Float tmp17 = e->gp0->y;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(303)
							Float tmp18 = e->gnormx;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(303)
							Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(303)
							Float tmp20 = e->gp0->x;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(303)
							Float tmp21 = e->gnormy;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(303)
							Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(303)
							Float tmp23 = (tmp19 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(303)
							e->tp0 = tmp23;
							HX_STACK_LINE(303)
							Float tmp24 = e->gp1->y;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(303)
							Float tmp25 = e->gnormx;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(303)
							Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(303)
							Float tmp27 = e->gp1->x;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(303)
							Float tmp28 = e->gnormy;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(303)
							Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(303)
							Float tmp30 = (tmp26 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(303)
							e->tp1 = tmp30;
						}
						HX_STACK_LINE(303)
						u = v;
						HX_STACK_LINE(303)
						cx_ite = cx_ite->next;
					}
					HX_STACK_LINE(303)
					::zpp_nape::geom::ZPP_Vec2 tmp5 = _this->gverts->next;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(303)
					::zpp_nape::geom::ZPP_Vec2 v = tmp5;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(303)
					{
						HX_STACK_LINE(303)
						::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(303)
						ite = ite->next;
						HX_STACK_LINE(303)
						e->gp0 = u;
						HX_STACK_LINE(303)
						e->gp1 = v;
						HX_STACK_LINE(303)
						{
							HX_STACK_LINE(303)
							Float tmp6 = _this->body->axisy;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(303)
							Float tmp7 = e->lnormx;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(303)
							Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(303)
							Float tmp9 = _this->body->axisx;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(303)
							Float tmp10 = e->lnormy;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(303)
							Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(303)
							Float tmp12 = (tmp8 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(303)
							e->gnormx = tmp12;
							HX_STACK_LINE(303)
							Float tmp13 = e->lnormx;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(303)
							Float tmp14 = _this->body->axisx;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(303)
							Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(303)
							Float tmp16 = e->lnormy;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(303)
							Float tmp17 = _this->body->axisy;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(303)
							Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(303)
							Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(303)
							e->gnormy = tmp19;
						}
						HX_STACK_LINE(303)
						Float tmp6 = _this->body->posx;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(303)
						Float tmp7 = e->gnormx;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(303)
						Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(303)
						Float tmp9 = _this->body->posy;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(303)
						Float tmp10 = e->gnormy;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(303)
						Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(303)
						Float tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(303)
						Float tmp13 = e->lprojection;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(303)
						Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(303)
						e->gprojection = tmp14;
						HX_STACK_LINE(303)
						bool tmp15 = (e->wrap_gnorm != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(303)
						if ((tmp15)){
							HX_STACK_LINE(303)
							::zpp_nape::geom::ZPP_Vec2 tmp16 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(303)
							tmp16->x = e->gnormx;
							HX_STACK_LINE(303)
							::zpp_nape::geom::ZPP_Vec2 tmp17 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(303)
							tmp17->y = e->gnormy;
							HX_STACK_LINE(303)
							{
							}
						}
						HX_STACK_LINE(303)
						Float tmp16 = e->gp0->y;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(303)
						Float tmp17 = e->gnormx;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(303)
						Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(303)
						Float tmp19 = e->gp0->x;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(303)
						Float tmp20 = e->gnormy;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(303)
						Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(303)
						Float tmp22 = (tmp18 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(303)
						e->tp0 = tmp22;
						HX_STACK_LINE(303)
						Float tmp23 = e->gp1->y;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(303)
						Float tmp24 = e->gnormx;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(303)
						Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(303)
						Float tmp26 = e->gp1->x;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(303)
						Float tmp27 = e->gnormy;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(303)
						Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(303)
						Float tmp29 = (tmp25 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(303)
						e->tp1 = tmp29;
					}
				}
			}
		}
	}
	HX_STACK_LINE(304)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(304)
	{
		HX_STACK_LINE(304)
		::zpp_nape::shape::ZPP_Edge tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(304)
		::zpp_nape::geom::ZPP_Vec2 _this = tmp1->gp0;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(304)
		bool tmp2 = (_this->outer == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(304)
		if ((tmp2)){
			HX_STACK_LINE(304)
			::nape::geom::Vec2 tmp3 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(304)
			_this->outer = tmp3;
			HX_STACK_LINE(304)
			{
				HX_STACK_LINE(304)
				::zpp_nape::geom::ZPP_Vec2 tmp4 = _this->outer->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(304)
				::zpp_nape::geom::ZPP_Vec2 o = tmp4;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(304)
				{
					HX_STACK_LINE(304)
					bool tmp5 = (o->outer != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(304)
					if ((tmp5)){
						HX_STACK_LINE(304)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(304)
						o->outer = null();
					}
					HX_STACK_LINE(304)
					o->_isimmutable = null();
					HX_STACK_LINE(304)
					o->_validate = null();
					HX_STACK_LINE(304)
					o->_invalidate = null();
				}
				HX_STACK_LINE(304)
				::zpp_nape::geom::ZPP_Vec2 tmp5 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(304)
				o->next = tmp5;
				HX_STACK_LINE(304)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
			HX_STACK_LINE(304)
			_this->outer->zpp_inner = _this;
		}
		HX_STACK_LINE(304)
		tmp = _this->outer;
	}
	HX_STACK_LINE(304)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Edge_obj,get_worldVertex1,return )

::nape::geom::Vec2 Edge_obj::get_worldVertex2( ){
	HX_STACK_FRAME("nape.shape.Edge","get_worldVertex2",0xff075043,"nape.shape.Edge.get_worldVertex2","nape/shape/Edge.hx",311,0xab3b8fac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(315)
	{
		HX_STACK_LINE(315)
		::zpp_nape::shape::ZPP_Edge tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(315)
		::zpp_nape::shape::ZPP_Polygon _this = tmp->polygon;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(315)
		bool tmp1 = _this->zip_gaxi;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(315)
		if ((tmp1)){
			HX_STACK_LINE(315)
			bool tmp2 = (_this->body != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(315)
			if ((tmp2)){
				HX_STACK_LINE(315)
				_this->zip_gaxi = false;
				HX_STACK_LINE(315)
				_this->validate_laxi();
				HX_STACK_LINE(315)
				{
					HX_STACK_LINE(315)
					::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(315)
					bool tmp3 = _this1->zip_axis;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(315)
					if ((tmp3)){
						HX_STACK_LINE(315)
						_this1->zip_axis = false;
						HX_STACK_LINE(315)
						{
							HX_STACK_LINE(315)
							Float tmp4 = _this1->rot;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(315)
							Float tmp5 = ::Math_obj::sin(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(315)
							_this1->axisx = tmp5;
							HX_STACK_LINE(315)
							Float tmp6 = _this1->rot;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(315)
							Float tmp7 = ::Math_obj::cos(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(315)
							_this1->axisy = tmp7;
							HX_STACK_LINE(315)
							Dynamic();
						}
					}
				}
				HX_STACK_LINE(315)
				{
					HX_STACK_LINE(315)
					bool tmp3 = _this->zip_gverts;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(315)
					if ((tmp3)){
						HX_STACK_LINE(315)
						bool tmp4 = (_this->body != null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(315)
						if ((tmp4)){
							HX_STACK_LINE(315)
							_this->zip_gverts = false;
							HX_STACK_LINE(315)
							_this->validate_lverts();
							HX_STACK_LINE(315)
							{
								HX_STACK_LINE(315)
								::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(315)
								bool tmp5 = _this1->zip_axis;		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(315)
								if ((tmp5)){
									HX_STACK_LINE(315)
									_this1->zip_axis = false;
									HX_STACK_LINE(315)
									{
										HX_STACK_LINE(315)
										Float tmp6 = _this1->rot;		HX_STACK_VAR(tmp6,"tmp6");
										HX_STACK_LINE(315)
										Float tmp7 = ::Math_obj::sin(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(315)
										_this1->axisx = tmp7;
										HX_STACK_LINE(315)
										Float tmp8 = _this1->rot;		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(315)
										Float tmp9 = ::Math_obj::cos(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(315)
										_this1->axisy = tmp9;
										HX_STACK_LINE(315)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(315)
							::zpp_nape::geom::ZPP_Vec2 tmp5 = _this->lverts->next;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(315)
							::zpp_nape::geom::ZPP_Vec2 li = tmp5;		HX_STACK_VAR(li,"li");
							HX_STACK_LINE(315)
							{
								HX_STACK_LINE(315)
								::zpp_nape::geom::ZPP_Vec2 tmp6 = _this->gverts->next;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(315)
								::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp6;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(315)
								while((true)){
									HX_STACK_LINE(315)
									bool tmp7 = (cx_ite != null());		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(315)
									bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(315)
									if ((tmp8)){
										HX_STACK_LINE(315)
										break;
									}
									HX_STACK_LINE(315)
									::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(315)
									{
										HX_STACK_LINE(315)
										::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
										HX_STACK_LINE(315)
										li = li->next;
										HX_STACK_LINE(315)
										{
											HX_STACK_LINE(315)
											Float tmp9 = _this->body->posx;		HX_STACK_VAR(tmp9,"tmp9");
											HX_STACK_LINE(315)
											Float tmp10 = _this->body->axisy;		HX_STACK_VAR(tmp10,"tmp10");
											HX_STACK_LINE(315)
											Float tmp11 = l->x;		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(315)
											Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(315)
											Float tmp13 = _this->body->axisx;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(315)
											Float tmp14 = l->y;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(315)
											Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(315)
											Float tmp16 = (tmp12 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(315)
											Float tmp17 = (tmp9 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(315)
											g->x = tmp17;
											HX_STACK_LINE(315)
											Float tmp18 = _this->body->posy;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(315)
											Float tmp19 = l->x;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(315)
											Float tmp20 = _this->body->axisx;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(315)
											Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(315)
											Float tmp22 = l->y;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(315)
											Float tmp23 = _this->body->axisy;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(315)
											Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(315)
											Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(315)
											Float tmp26 = (tmp18 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(315)
											g->y = tmp26;
										}
									}
									HX_STACK_LINE(315)
									cx_ite = cx_ite->next;
								}
							}
						}
					}
				}
				HX_STACK_LINE(315)
				::zpp_nape::util::ZNPNode_ZPP_Edge tmp3 = _this->edges->head;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(315)
				::zpp_nape::util::ZNPNode_ZPP_Edge ite = tmp3;		HX_STACK_VAR(ite,"ite");
				HX_STACK_LINE(315)
				{
					HX_STACK_LINE(315)
					::zpp_nape::geom::ZPP_Vec2 tmp4 = _this->gverts->next;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(315)
					::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp4;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(315)
					::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
					HX_STACK_LINE(315)
					cx_ite = cx_ite->next;
					HX_STACK_LINE(315)
					while((true)){
						HX_STACK_LINE(315)
						bool tmp5 = (cx_ite != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(315)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(315)
						if ((tmp6)){
							HX_STACK_LINE(315)
							break;
						}
						HX_STACK_LINE(315)
						::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(315)
						{
							HX_STACK_LINE(315)
							::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(315)
							ite = ite->next;
							HX_STACK_LINE(315)
							e->gp0 = u;
							HX_STACK_LINE(315)
							e->gp1 = v;
							HX_STACK_LINE(315)
							{
								HX_STACK_LINE(315)
								Float tmp7 = _this->body->axisy;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(315)
								Float tmp8 = e->lnormx;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(315)
								Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(315)
								Float tmp10 = _this->body->axisx;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(315)
								Float tmp11 = e->lnormy;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(315)
								Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(315)
								Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(315)
								e->gnormx = tmp13;
								HX_STACK_LINE(315)
								Float tmp14 = e->lnormx;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(315)
								Float tmp15 = _this->body->axisx;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(315)
								Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(315)
								Float tmp17 = e->lnormy;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(315)
								Float tmp18 = _this->body->axisy;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(315)
								Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(315)
								Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(315)
								e->gnormy = tmp20;
							}
							HX_STACK_LINE(315)
							Float tmp7 = _this->body->posx;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(315)
							Float tmp8 = e->gnormx;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(315)
							Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(315)
							Float tmp10 = _this->body->posy;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(315)
							Float tmp11 = e->gnormy;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(315)
							Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(315)
							Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(315)
							Float tmp14 = e->lprojection;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(315)
							Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(315)
							e->gprojection = tmp15;
							HX_STACK_LINE(315)
							bool tmp16 = (e->wrap_gnorm != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(315)
							if ((tmp16)){
								HX_STACK_LINE(315)
								::zpp_nape::geom::ZPP_Vec2 tmp17 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(315)
								tmp17->x = e->gnormx;
								HX_STACK_LINE(315)
								::zpp_nape::geom::ZPP_Vec2 tmp18 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(315)
								tmp18->y = e->gnormy;
								HX_STACK_LINE(315)
								{
								}
							}
							HX_STACK_LINE(315)
							Float tmp17 = e->gp0->y;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(315)
							Float tmp18 = e->gnormx;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(315)
							Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(315)
							Float tmp20 = e->gp0->x;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(315)
							Float tmp21 = e->gnormy;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(315)
							Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(315)
							Float tmp23 = (tmp19 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(315)
							e->tp0 = tmp23;
							HX_STACK_LINE(315)
							Float tmp24 = e->gp1->y;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(315)
							Float tmp25 = e->gnormx;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(315)
							Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(315)
							Float tmp27 = e->gp1->x;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(315)
							Float tmp28 = e->gnormy;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(315)
							Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(315)
							Float tmp30 = (tmp26 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(315)
							e->tp1 = tmp30;
						}
						HX_STACK_LINE(315)
						u = v;
						HX_STACK_LINE(315)
						cx_ite = cx_ite->next;
					}
					HX_STACK_LINE(315)
					::zpp_nape::geom::ZPP_Vec2 tmp5 = _this->gverts->next;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(315)
					::zpp_nape::geom::ZPP_Vec2 v = tmp5;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(315)
					{
						HX_STACK_LINE(315)
						::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(315)
						ite = ite->next;
						HX_STACK_LINE(315)
						e->gp0 = u;
						HX_STACK_LINE(315)
						e->gp1 = v;
						HX_STACK_LINE(315)
						{
							HX_STACK_LINE(315)
							Float tmp6 = _this->body->axisy;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(315)
							Float tmp7 = e->lnormx;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(315)
							Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(315)
							Float tmp9 = _this->body->axisx;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(315)
							Float tmp10 = e->lnormy;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(315)
							Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(315)
							Float tmp12 = (tmp8 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(315)
							e->gnormx = tmp12;
							HX_STACK_LINE(315)
							Float tmp13 = e->lnormx;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(315)
							Float tmp14 = _this->body->axisx;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(315)
							Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(315)
							Float tmp16 = e->lnormy;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(315)
							Float tmp17 = _this->body->axisy;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(315)
							Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(315)
							Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(315)
							e->gnormy = tmp19;
						}
						HX_STACK_LINE(315)
						Float tmp6 = _this->body->posx;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(315)
						Float tmp7 = e->gnormx;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(315)
						Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(315)
						Float tmp9 = _this->body->posy;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(315)
						Float tmp10 = e->gnormy;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(315)
						Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(315)
						Float tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(315)
						Float tmp13 = e->lprojection;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(315)
						Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(315)
						e->gprojection = tmp14;
						HX_STACK_LINE(315)
						bool tmp15 = (e->wrap_gnorm != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(315)
						if ((tmp15)){
							HX_STACK_LINE(315)
							::zpp_nape::geom::ZPP_Vec2 tmp16 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(315)
							tmp16->x = e->gnormx;
							HX_STACK_LINE(315)
							::zpp_nape::geom::ZPP_Vec2 tmp17 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(315)
							tmp17->y = e->gnormy;
							HX_STACK_LINE(315)
							{
							}
						}
						HX_STACK_LINE(315)
						Float tmp16 = e->gp0->y;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(315)
						Float tmp17 = e->gnormx;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(315)
						Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(315)
						Float tmp19 = e->gp0->x;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(315)
						Float tmp20 = e->gnormy;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(315)
						Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(315)
						Float tmp22 = (tmp18 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(315)
						e->tp0 = tmp22;
						HX_STACK_LINE(315)
						Float tmp23 = e->gp1->y;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(315)
						Float tmp24 = e->gnormx;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(315)
						Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(315)
						Float tmp26 = e->gp1->x;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(315)
						Float tmp27 = e->gnormy;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(315)
						Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(315)
						Float tmp29 = (tmp25 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(315)
						e->tp1 = tmp29;
					}
				}
			}
		}
	}
	HX_STACK_LINE(316)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(316)
	{
		HX_STACK_LINE(316)
		::zpp_nape::shape::ZPP_Edge tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(316)
		::zpp_nape::geom::ZPP_Vec2 _this = tmp1->gp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(316)
		bool tmp2 = (_this->outer == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(316)
		if ((tmp2)){
			HX_STACK_LINE(316)
			::nape::geom::Vec2 tmp3 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(316)
			_this->outer = tmp3;
			HX_STACK_LINE(316)
			{
				HX_STACK_LINE(316)
				::zpp_nape::geom::ZPP_Vec2 tmp4 = _this->outer->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(316)
				::zpp_nape::geom::ZPP_Vec2 o = tmp4;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(316)
				{
					HX_STACK_LINE(316)
					bool tmp5 = (o->outer != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(316)
					if ((tmp5)){
						HX_STACK_LINE(316)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(316)
						o->outer = null();
					}
					HX_STACK_LINE(316)
					o->_isimmutable = null();
					HX_STACK_LINE(316)
					o->_validate = null();
					HX_STACK_LINE(316)
					o->_invalidate = null();
				}
				HX_STACK_LINE(316)
				::zpp_nape::geom::ZPP_Vec2 tmp5 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(316)
				o->next = tmp5;
				HX_STACK_LINE(316)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
			HX_STACK_LINE(316)
			_this->outer->zpp_inner = _this;
		}
		HX_STACK_LINE(316)
		tmp = _this->outer;
	}
	HX_STACK_LINE(316)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Edge_obj,get_worldVertex2,return )

::String Edge_obj::toString( ){
	HX_STACK_FRAME("nape.shape.Edge","toString",0x0c0b6a4a,"nape.shape.Edge.toString","nape/shape/Edge.hx",321,0xab3b8fac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(322)
	::zpp_nape::shape::ZPP_Edge tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(322)
	::zpp_nape::shape::ZPP_Polygon tmp1 = tmp->polygon;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(322)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(322)
	if ((tmp2)){
		HX_STACK_LINE(322)
		return HX_HCSTRING("Edge(object-pooled)","\x2b","\xc3","\x0e","\x0b");
	}
	else{
		HX_STACK_LINE(323)
		::zpp_nape::shape::ZPP_Edge tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(323)
		::zpp_nape::phys::ZPP_Body tmp4 = tmp3->polygon->body;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(323)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(323)
		if ((tmp5)){
			HX_STACK_LINE(324)
			::zpp_nape::shape::ZPP_Edge tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(324)
			tmp6->polygon->validate_laxi();
			HX_STACK_LINE(325)
			::zpp_nape::shape::ZPP_Edge tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(325)
			Float tmp8 = tmp7->lnormx;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(325)
			::String tmp9 = (HX_HCSTRING("{ x: ","\xf9","\x6e","\xcb","\xe7") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(325)
			::String tmp10 = (tmp9 + HX_HCSTRING(" y: ","\x3f","\xd7","\x82","\x15"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(325)
			::zpp_nape::shape::ZPP_Edge tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(325)
			Float tmp12 = tmp11->lnormy;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(325)
			::String tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(325)
			::String tmp14 = (tmp13 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(325)
			::String tmp15 = (HX_HCSTRING("{ localNormal : ","\x19","\x66","\x22","\x61") + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(325)
			::String tmp16 = (tmp15 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(325)
			return tmp16;
		}
		else{
			HX_STACK_LINE(328)
			{
				HX_STACK_LINE(328)
				::zpp_nape::shape::ZPP_Edge tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(328)
				::zpp_nape::shape::ZPP_Polygon _this = tmp6->polygon;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(328)
				bool tmp7 = _this->zip_gaxi;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(328)
				if ((tmp7)){
					HX_STACK_LINE(328)
					bool tmp8 = (_this->body != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(328)
					if ((tmp8)){
						HX_STACK_LINE(328)
						_this->zip_gaxi = false;
						HX_STACK_LINE(328)
						_this->validate_laxi();
						HX_STACK_LINE(328)
						{
							HX_STACK_LINE(328)
							::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(328)
							bool tmp9 = _this1->zip_axis;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(328)
							if ((tmp9)){
								HX_STACK_LINE(328)
								_this1->zip_axis = false;
								HX_STACK_LINE(328)
								{
									HX_STACK_LINE(328)
									Float tmp10 = _this1->rot;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(328)
									Float tmp11 = ::Math_obj::sin(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(328)
									_this1->axisx = tmp11;
									HX_STACK_LINE(328)
									Float tmp12 = _this1->rot;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(328)
									Float tmp13 = ::Math_obj::cos(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(328)
									_this1->axisy = tmp13;
									HX_STACK_LINE(328)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(328)
						{
							HX_STACK_LINE(328)
							bool tmp9 = _this->zip_gverts;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(328)
							if ((tmp9)){
								HX_STACK_LINE(328)
								bool tmp10 = (_this->body != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(328)
								if ((tmp10)){
									HX_STACK_LINE(328)
									_this->zip_gverts = false;
									HX_STACK_LINE(328)
									_this->validate_lverts();
									HX_STACK_LINE(328)
									{
										HX_STACK_LINE(328)
										::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(328)
										bool tmp11 = _this1->zip_axis;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(328)
										if ((tmp11)){
											HX_STACK_LINE(328)
											_this1->zip_axis = false;
											HX_STACK_LINE(328)
											{
												HX_STACK_LINE(328)
												Float tmp12 = _this1->rot;		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(328)
												Float tmp13 = ::Math_obj::sin(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(328)
												_this1->axisx = tmp13;
												HX_STACK_LINE(328)
												Float tmp14 = _this1->rot;		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(328)
												Float tmp15 = ::Math_obj::cos(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(328)
												_this1->axisy = tmp15;
												HX_STACK_LINE(328)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(328)
									::zpp_nape::geom::ZPP_Vec2 tmp11 = _this->lverts->next;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(328)
									::zpp_nape::geom::ZPP_Vec2 li = tmp11;		HX_STACK_VAR(li,"li");
									HX_STACK_LINE(328)
									{
										HX_STACK_LINE(328)
										::zpp_nape::geom::ZPP_Vec2 tmp12 = _this->gverts->next;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(328)
										::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp12;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(328)
										while((true)){
											HX_STACK_LINE(328)
											bool tmp13 = (cx_ite != null());		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(328)
											bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(328)
											if ((tmp14)){
												HX_STACK_LINE(328)
												break;
											}
											HX_STACK_LINE(328)
											::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(328)
											{
												HX_STACK_LINE(328)
												::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
												HX_STACK_LINE(328)
												li = li->next;
												HX_STACK_LINE(328)
												{
													HX_STACK_LINE(328)
													Float tmp15 = _this->body->posx;		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(328)
													Float tmp16 = _this->body->axisy;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(328)
													Float tmp17 = l->x;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(328)
													Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(328)
													Float tmp19 = _this->body->axisx;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(328)
													Float tmp20 = l->y;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(328)
													Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(328)
													Float tmp22 = (tmp18 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(328)
													Float tmp23 = (tmp15 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(328)
													g->x = tmp23;
													HX_STACK_LINE(328)
													Float tmp24 = _this->body->posy;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(328)
													Float tmp25 = l->x;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(328)
													Float tmp26 = _this->body->axisx;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(328)
													Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(328)
													Float tmp28 = l->y;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(328)
													Float tmp29 = _this->body->axisy;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(328)
													Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(328)
													Float tmp31 = (tmp27 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(328)
													Float tmp32 = (tmp24 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(328)
													g->y = tmp32;
												}
											}
											HX_STACK_LINE(328)
											cx_ite = cx_ite->next;
										}
									}
								}
							}
						}
						HX_STACK_LINE(328)
						::zpp_nape::util::ZNPNode_ZPP_Edge tmp9 = _this->edges->head;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(328)
						::zpp_nape::util::ZNPNode_ZPP_Edge ite = tmp9;		HX_STACK_VAR(ite,"ite");
						HX_STACK_LINE(328)
						{
							HX_STACK_LINE(328)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = _this->gverts->next;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(328)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp10;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(328)
							::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
							HX_STACK_LINE(328)
							cx_ite = cx_ite->next;
							HX_STACK_LINE(328)
							while((true)){
								HX_STACK_LINE(328)
								bool tmp11 = (cx_ite != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(328)
								bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(328)
								if ((tmp12)){
									HX_STACK_LINE(328)
									break;
								}
								HX_STACK_LINE(328)
								::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(328)
								{
									HX_STACK_LINE(328)
									::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
									HX_STACK_LINE(328)
									ite = ite->next;
									HX_STACK_LINE(328)
									e->gp0 = u;
									HX_STACK_LINE(328)
									e->gp1 = v;
									HX_STACK_LINE(328)
									{
										HX_STACK_LINE(328)
										Float tmp13 = _this->body->axisy;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(328)
										Float tmp14 = e->lnormx;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(328)
										Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(328)
										Float tmp16 = _this->body->axisx;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(328)
										Float tmp17 = e->lnormy;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(328)
										Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(328)
										Float tmp19 = (tmp15 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(328)
										e->gnormx = tmp19;
										HX_STACK_LINE(328)
										Float tmp20 = e->lnormx;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(328)
										Float tmp21 = _this->body->axisx;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(328)
										Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(328)
										Float tmp23 = e->lnormy;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(328)
										Float tmp24 = _this->body->axisy;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(328)
										Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(328)
										Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(328)
										e->gnormy = tmp26;
									}
									HX_STACK_LINE(328)
									Float tmp13 = _this->body->posx;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(328)
									Float tmp14 = e->gnormx;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(328)
									Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(328)
									Float tmp16 = _this->body->posy;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(328)
									Float tmp17 = e->gnormy;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(328)
									Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(328)
									Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(328)
									Float tmp20 = e->lprojection;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(328)
									Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(328)
									e->gprojection = tmp21;
									HX_STACK_LINE(328)
									bool tmp22 = (e->wrap_gnorm != null());		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(328)
									if ((tmp22)){
										HX_STACK_LINE(328)
										::zpp_nape::geom::ZPP_Vec2 tmp23 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(328)
										tmp23->x = e->gnormx;
										HX_STACK_LINE(328)
										::zpp_nape::geom::ZPP_Vec2 tmp24 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(328)
										tmp24->y = e->gnormy;
										HX_STACK_LINE(328)
										{
										}
									}
									HX_STACK_LINE(328)
									Float tmp23 = e->gp0->y;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(328)
									Float tmp24 = e->gnormx;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(328)
									Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(328)
									Float tmp26 = e->gp0->x;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(328)
									Float tmp27 = e->gnormy;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(328)
									Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(328)
									Float tmp29 = (tmp25 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(328)
									e->tp0 = tmp29;
									HX_STACK_LINE(328)
									Float tmp30 = e->gp1->y;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(328)
									Float tmp31 = e->gnormx;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(328)
									Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(328)
									Float tmp33 = e->gp1->x;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(328)
									Float tmp34 = e->gnormy;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(328)
									Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(328)
									Float tmp36 = (tmp32 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(328)
									e->tp1 = tmp36;
								}
								HX_STACK_LINE(328)
								u = v;
								HX_STACK_LINE(328)
								cx_ite = cx_ite->next;
							}
							HX_STACK_LINE(328)
							::zpp_nape::geom::ZPP_Vec2 tmp11 = _this->gverts->next;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(328)
							::zpp_nape::geom::ZPP_Vec2 v = tmp11;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(328)
							{
								HX_STACK_LINE(328)
								::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(328)
								ite = ite->next;
								HX_STACK_LINE(328)
								e->gp0 = u;
								HX_STACK_LINE(328)
								e->gp1 = v;
								HX_STACK_LINE(328)
								{
									HX_STACK_LINE(328)
									Float tmp12 = _this->body->axisy;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(328)
									Float tmp13 = e->lnormx;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(328)
									Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(328)
									Float tmp15 = _this->body->axisx;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(328)
									Float tmp16 = e->lnormy;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(328)
									Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(328)
									Float tmp18 = (tmp14 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(328)
									e->gnormx = tmp18;
									HX_STACK_LINE(328)
									Float tmp19 = e->lnormx;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(328)
									Float tmp20 = _this->body->axisx;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(328)
									Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(328)
									Float tmp22 = e->lnormy;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(328)
									Float tmp23 = _this->body->axisy;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(328)
									Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(328)
									Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(328)
									e->gnormy = tmp25;
								}
								HX_STACK_LINE(328)
								Float tmp12 = _this->body->posx;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(328)
								Float tmp13 = e->gnormx;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(328)
								Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(328)
								Float tmp15 = _this->body->posy;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(328)
								Float tmp16 = e->gnormy;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(328)
								Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(328)
								Float tmp18 = (tmp14 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(328)
								Float tmp19 = e->lprojection;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(328)
								Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(328)
								e->gprojection = tmp20;
								HX_STACK_LINE(328)
								bool tmp21 = (e->wrap_gnorm != null());		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(328)
								if ((tmp21)){
									HX_STACK_LINE(328)
									::zpp_nape::geom::ZPP_Vec2 tmp22 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(328)
									tmp22->x = e->gnormx;
									HX_STACK_LINE(328)
									::zpp_nape::geom::ZPP_Vec2 tmp23 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(328)
									tmp23->y = e->gnormy;
									HX_STACK_LINE(328)
									{
									}
								}
								HX_STACK_LINE(328)
								Float tmp22 = e->gp0->y;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(328)
								Float tmp23 = e->gnormx;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(328)
								Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(328)
								Float tmp25 = e->gp0->x;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(328)
								Float tmp26 = e->gnormy;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(328)
								Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(328)
								Float tmp28 = (tmp24 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(328)
								e->tp0 = tmp28;
								HX_STACK_LINE(328)
								Float tmp29 = e->gp1->y;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(328)
								Float tmp30 = e->gnormx;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(328)
								Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(328)
								Float tmp32 = e->gp1->x;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(328)
								Float tmp33 = e->gnormy;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(328)
								Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(328)
								Float tmp35 = (tmp31 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(328)
								e->tp1 = tmp35;
							}
						}
					}
				}
			}
			HX_STACK_LINE(329)
			::zpp_nape::shape::ZPP_Edge tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(329)
			Float tmp7 = tmp6->lnormx;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(329)
			::String tmp8 = (HX_HCSTRING("{ x: ","\xf9","\x6e","\xcb","\xe7") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(329)
			::String tmp9 = (tmp8 + HX_HCSTRING(" y: ","\x3f","\xd7","\x82","\x15"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(329)
			::zpp_nape::shape::ZPP_Edge tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(329)
			Float tmp11 = tmp10->lnormy;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(329)
			::String tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(329)
			::String tmp13 = (tmp12 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(329)
			::String tmp14 = (HX_HCSTRING("{ localNormal : ","\x19","\x66","\x22","\x61") + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(329)
			::String tmp15 = (tmp14 + HX_HCSTRING(" worldNormal : ","\x6d","\x82","\xe3","\x6b"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(329)
			::zpp_nape::shape::ZPP_Edge tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(329)
			Float tmp17 = tmp16->gnormx;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(329)
			::String tmp18 = (HX_HCSTRING("{ x: ","\xf9","\x6e","\xcb","\xe7") + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(329)
			::String tmp19 = (tmp18 + HX_HCSTRING(" y: ","\x3f","\xd7","\x82","\x15"));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(329)
			::zpp_nape::shape::ZPP_Edge tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(329)
			Float tmp21 = tmp20->gnormy;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(329)
			::String tmp22 = (tmp19 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(329)
			::String tmp23 = (tmp22 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(329)
			::String tmp24 = (tmp15 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(329)
			::String tmp25 = (tmp24 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(329)
			return tmp25;
		}
	}
	HX_STACK_LINE(322)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Edge_obj,toString,return )


Edge_obj::Edge_obj()
{
}

void Edge_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Edge);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void Edge_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic Edge_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"polygon") ) { if (inCallProp == hx::paccAlways) return get_polygon(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_polygon") ) { return get_polygon_dyn(); }
		if (HX_FIELD_EQ(inName,"localNormal") ) { if (inCallProp == hx::paccAlways) return get_localNormal(); }
		if (HX_FIELD_EQ(inName,"worldNormal") ) { if (inCallProp == hx::paccAlways) return get_worldNormal(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"localVertex1") ) { if (inCallProp == hx::paccAlways) return get_localVertex1(); }
		if (HX_FIELD_EQ(inName,"localVertex2") ) { if (inCallProp == hx::paccAlways) return get_localVertex2(); }
		if (HX_FIELD_EQ(inName,"worldVertex1") ) { if (inCallProp == hx::paccAlways) return get_worldVertex1(); }
		if (HX_FIELD_EQ(inName,"worldVertex2") ) { if (inCallProp == hx::paccAlways) return get_worldVertex2(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_localNormal") ) { return get_localNormal_dyn(); }
		if (HX_FIELD_EQ(inName,"get_worldNormal") ) { return get_worldNormal_dyn(); }
		if (HX_FIELD_EQ(inName,"localProjection") ) { if (inCallProp == hx::paccAlways) return get_localProjection(); }
		if (HX_FIELD_EQ(inName,"worldProjection") ) { if (inCallProp == hx::paccAlways) return get_worldProjection(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_localVertex1") ) { return get_localVertex1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_localVertex2") ) { return get_localVertex2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_worldVertex1") ) { return get_worldVertex1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_worldVertex2") ) { return get_worldVertex2_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_localProjection") ) { return get_localProjection_dyn(); }
		if (HX_FIELD_EQ(inName,"get_worldProjection") ) { return get_worldProjection_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Edge_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::shape::ZPP_Edge >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Edge_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("polygon","\x7a","\x02","\x91","\x12"));
	outFields->push(HX_HCSTRING("localNormal","\xf2","\x11","\xa4","\xed"));
	outFields->push(HX_HCSTRING("worldNormal","\x19","\x06","\xd7","\xfb"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("localProjection","\xda","\x69","\x59","\x3f"));
	outFields->push(HX_HCSTRING("worldProjection","\x81","\xfd","\xb6","\x88"));
	outFields->push(HX_HCSTRING("localVertex1","\x22","\x4e","\xa9","\x53"));
	outFields->push(HX_HCSTRING("localVertex2","\x23","\x4e","\xa9","\x53"));
	outFields->push(HX_HCSTRING("worldVertex1","\x1b","\xfc","\x0b","\xb2"));
	outFields->push(HX_HCSTRING("worldVertex2","\x1c","\xfc","\x0b","\xb2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::shape::ZPP_Edge*/ ,(int)offsetof(Edge_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("get_polygon","\x91","\x62","\x8b","\x98"),
	HX_HCSTRING("get_localNormal","\x89","\xc9","\x85","\xae"),
	HX_HCSTRING("get_worldNormal","\xb0","\xbd","\xb8","\xbc"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("get_localProjection","\xf1","\x38","\x64","\xca"),
	HX_HCSTRING("get_worldProjection","\x98","\xcc","\xc1","\x13"),
	HX_HCSTRING("get_localVertex1","\xab","\x3a","\x48","\x58"),
	HX_HCSTRING("get_localVertex2","\xac","\x3a","\x48","\x58"),
	HX_HCSTRING("get_worldVertex1","\xa4","\xe8","\xaa","\xb6"),
	HX_HCSTRING("get_worldVertex2","\xa5","\xe8","\xaa","\xb6"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Edge_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Edge_obj::__mClass,"__mClass");
};

#endif

hx::Class Edge_obj::__mClass;

void Edge_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.shape.Edge","\x90","\x72","\xe9","\x61");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Edge_obj >;
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
