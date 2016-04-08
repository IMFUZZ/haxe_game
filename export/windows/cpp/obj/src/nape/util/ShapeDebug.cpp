#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPoly
#include <nape/geom/GeomPoly.h>
#endif
#ifndef INCLUDED_nape_geom_Mat23
#include <nape/geom/Mat23.h>
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
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Compound
#include <nape/phys/Compound.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
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
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_JointStyle
#include <openfl/_legacy/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_LineScaleMode
#include <openfl/_legacy/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomPoly
#include <zpp_nape/geom/ZPP_GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
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
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Vec2
#include <zpp_nape/util/ZNPList_ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Vec2
#include <zpp_nape/util/ZNPNode_ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Debug
#include <zpp_nape/util/ZPP_Debug.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeDebug
#include <zpp_nape/util/ZPP_ShapeDebug.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Vec2List
#include <zpp_nape/util/ZPP_Vec2List.h>
#endif
namespace nape{
namespace util{

Void ShapeDebug_obj::__construct(int width,int height,hx::Null< int >  __o_bgColour)
{
HX_STACK_FRAME("nape.util.ShapeDebug","new",0xf3c659ea,"nape.util.ShapeDebug.new","nape/util/ShapeDebug.hx",182,0xfa2f3866)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(__o_bgColour,"bgColour")
int bgColour = __o_bgColour.Default(3355443);
{
	HX_STACK_LINE(191)
	this->thickness = ((Float)0.0);
	HX_STACK_LINE(186)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(217)
	super::__construct();
	HX_STACK_LINE(221)
	::zpp_nape::util::ZPP_ShapeDebug tmp = ::zpp_nape::util::ZPP_ShapeDebug_obj::__new(width,height);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(221)
	this->zpp_inner_zn = tmp;
	HX_STACK_LINE(222)
	::zpp_nape::util::ZPP_ShapeDebug tmp1 = this->zpp_inner_zn;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(222)
	tmp1->outer_zn = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(223)
	::zpp_nape::util::ZPP_ShapeDebug tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(223)
	this->zpp_inner = tmp2;
	HX_STACK_LINE(224)
	::zpp_nape::util::ZPP_Debug tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(224)
	tmp3->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(225)
	{
		HX_STACK_LINE(225)
		{
			HX_STACK_LINE(225)
			::zpp_nape::util::ZPP_Debug tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(225)
			int tmp5 = bgColour;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(225)
			tmp4->d_shape->setbg(tmp5);
		}
		HX_STACK_LINE(225)
		::zpp_nape::util::ZPP_Debug tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(225)
		tmp4->bg_col;
	}
	HX_STACK_LINE(226)
	this->thickness = ((Float)0.1);
}
;
	return null();
}

//ShapeDebug_obj::~ShapeDebug_obj() { }

Dynamic ShapeDebug_obj::__CreateEmpty() { return  new ShapeDebug_obj; }
hx::ObjectPtr< ShapeDebug_obj > ShapeDebug_obj::__new(int width,int height,hx::Null< int >  __o_bgColour)
{  hx::ObjectPtr< ShapeDebug_obj > _result_ = new ShapeDebug_obj();
	_result_->__construct(width,height,__o_bgColour);
	return _result_;}

Dynamic ShapeDebug_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShapeDebug_obj > _result_ = new ShapeDebug_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void ShapeDebug_obj::clear( ){
{
		HX_STACK_FRAME("nape.util.ShapeDebug","clear",0xe4aaf197,"nape.util.ShapeDebug.clear","nape/util/ShapeDebug.hx",231,0xfa2f3866)
		HX_STACK_THIS(this)
		HX_STACK_LINE(232)
		::zpp_nape::util::ZPP_ShapeDebug tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(232)
		tmp->graphics->clear();
	}
return null();
}


Void ShapeDebug_obj::drawLine( ::nape::geom::Vec2 start,::nape::geom::Vec2 end,int colour){
{
		HX_STACK_FRAME("nape.util.ShapeDebug","drawLine",0xbd19644e,"nape.util.ShapeDebug.drawLine","nape/util/ShapeDebug.hx",237,0xfa2f3866)
		HX_STACK_THIS(this)
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(end,"end")
		HX_STACK_ARG(colour,"colour")
		HX_STACK_LINE(255)
		::zpp_nape::util::ZPP_ShapeDebug tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(255)
		::openfl::_legacy::display::Graphics g = tmp->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(256)
		Float tmp1 = this->thickness;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(256)
		int tmp2 = (int(colour) & int((int)16777215));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(256)
		g->lineStyle(tmp1,tmp2,(int)1,null(),null(),null(),null(),null());
		HX_STACK_LINE(257)
		::zpp_nape::util::ZPP_Debug tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(257)
		bool tmp4 = tmp3->xnull;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(257)
		if ((tmp4)){
			HX_STACK_LINE(258)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(258)
			{
				HX_STACK_LINE(258)
				{
					HX_STACK_LINE(258)
					::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(258)
					bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(258)
					if ((tmp6)){
						HX_STACK_LINE(258)
						_this->_validate();
					}
				}
				HX_STACK_LINE(258)
				tmp5 = start->zpp_inner->x;
			}
			HX_STACK_LINE(258)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(258)
			{
				HX_STACK_LINE(258)
				{
					HX_STACK_LINE(258)
					::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(258)
					bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(258)
					if ((tmp7)){
						HX_STACK_LINE(258)
						_this->_validate();
					}
				}
				HX_STACK_LINE(258)
				tmp6 = start->zpp_inner->y;
			}
			HX_STACK_LINE(258)
			g->moveTo(tmp5,tmp6);
			HX_STACK_LINE(259)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(259)
			{
				HX_STACK_LINE(259)
				{
					HX_STACK_LINE(259)
					::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(259)
					bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(259)
					if ((tmp8)){
						HX_STACK_LINE(259)
						_this->_validate();
					}
				}
				HX_STACK_LINE(259)
				tmp7 = end->zpp_inner->x;
			}
			HX_STACK_LINE(259)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(259)
			{
				HX_STACK_LINE(259)
				{
					HX_STACK_LINE(259)
					::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(259)
					bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(259)
					if ((tmp9)){
						HX_STACK_LINE(259)
						_this->_validate();
					}
				}
				HX_STACK_LINE(259)
				tmp8 = end->zpp_inner->y;
			}
			HX_STACK_LINE(259)
			g->lineTo(tmp7,tmp8);
			HX_STACK_LINE(260)
			{
				HX_STACK_LINE(261)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(262)
				tmp9 = start->zpp_inner->weak;
				HX_STACK_LINE(261)
				if ((tmp9)){
					HX_STACK_LINE(264)
					{
						HX_STACK_LINE(264)
						::zpp_nape::geom::ZPP_Vec2 inner = start->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(264)
						start->zpp_inner->outer = null();
						HX_STACK_LINE(264)
						start->zpp_inner = null();
						HX_STACK_LINE(264)
						{
							HX_STACK_LINE(264)
							::nape::geom::Vec2 o = start;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(264)
							::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(264)
							o->zpp_pool = tmp10;
							HX_STACK_LINE(264)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(264)
						{
							HX_STACK_LINE(264)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(264)
							{
								HX_STACK_LINE(264)
								bool tmp10 = (o->outer != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(264)
								if ((tmp10)){
									HX_STACK_LINE(264)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(264)
									o->outer = null();
								}
								HX_STACK_LINE(264)
								o->_isimmutable = null();
								HX_STACK_LINE(264)
								o->_validate = null();
								HX_STACK_LINE(264)
								o->_invalidate = null();
							}
							HX_STACK_LINE(264)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(264)
							o->next = tmp10;
							HX_STACK_LINE(264)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(265)
					true;
				}
				else{
					HX_STACK_LINE(268)
					false;
				}
			}
			HX_STACK_LINE(271)
			{
				HX_STACK_LINE(272)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(273)
				tmp9 = end->zpp_inner->weak;
				HX_STACK_LINE(272)
				if ((tmp9)){
					HX_STACK_LINE(275)
					{
						HX_STACK_LINE(275)
						::zpp_nape::geom::ZPP_Vec2 inner = end->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(275)
						end->zpp_inner->outer = null();
						HX_STACK_LINE(275)
						end->zpp_inner = null();
						HX_STACK_LINE(275)
						{
							HX_STACK_LINE(275)
							::nape::geom::Vec2 o = end;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(275)
							::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(275)
							o->zpp_pool = tmp10;
							HX_STACK_LINE(275)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(275)
						{
							HX_STACK_LINE(275)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(275)
							{
								HX_STACK_LINE(275)
								bool tmp10 = (o->outer != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(275)
								if ((tmp10)){
									HX_STACK_LINE(275)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(275)
									o->outer = null();
								}
								HX_STACK_LINE(275)
								o->_isimmutable = null();
								HX_STACK_LINE(275)
								o->_validate = null();
								HX_STACK_LINE(275)
								o->_invalidate = null();
							}
							HX_STACK_LINE(275)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(275)
							o->next = tmp10;
							HX_STACK_LINE(275)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(276)
					true;
				}
				else{
					HX_STACK_LINE(279)
					false;
				}
			}
		}
		else{
			HX_STACK_LINE(284)
			::zpp_nape::util::ZPP_Debug tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(284)
			::nape::geom::Mat23 tmp6 = tmp5->xform->outer;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(284)
			::nape::geom::Vec2 tmp7 = start;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(284)
			::nape::geom::Vec2 tmp8 = tmp6->transform(tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(284)
			::nape::geom::Vec2 v = tmp8;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(285)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(285)
			{
				HX_STACK_LINE(285)
				{
					HX_STACK_LINE(285)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(285)
					bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(285)
					if ((tmp10)){
						HX_STACK_LINE(285)
						_this->_validate();
					}
				}
				HX_STACK_LINE(285)
				tmp9 = v->zpp_inner->x;
			}
			HX_STACK_LINE(285)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(285)
			{
				HX_STACK_LINE(285)
				{
					HX_STACK_LINE(285)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(285)
					bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(285)
					if ((tmp11)){
						HX_STACK_LINE(285)
						_this->_validate();
					}
				}
				HX_STACK_LINE(285)
				tmp10 = v->zpp_inner->y;
			}
			HX_STACK_LINE(285)
			g->moveTo(tmp9,tmp10);
			HX_STACK_LINE(286)
			{
				HX_STACK_LINE(286)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(286)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(286)
				v->zpp_inner = null();
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(286)
					::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(286)
					o->zpp_pool = tmp11;
					HX_STACK_LINE(286)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(286)
					{
						HX_STACK_LINE(286)
						bool tmp11 = (o->outer != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(286)
						if ((tmp11)){
							HX_STACK_LINE(286)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(286)
							o->outer = null();
						}
						HX_STACK_LINE(286)
						o->_isimmutable = null();
						HX_STACK_LINE(286)
						o->_validate = null();
						HX_STACK_LINE(286)
						o->_invalidate = null();
					}
					HX_STACK_LINE(286)
					::zpp_nape::geom::ZPP_Vec2 tmp11 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(286)
					o->next = tmp11;
					HX_STACK_LINE(286)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(287)
			::zpp_nape::util::ZPP_Debug tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(287)
			::nape::geom::Mat23 tmp12 = tmp11->xform->outer;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(287)
			::nape::geom::Vec2 tmp13 = end;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(287)
			::nape::geom::Vec2 tmp14 = tmp12->transform(tmp13,null(),null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(287)
			v = tmp14;
			HX_STACK_LINE(288)
			Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(288)
			{
				HX_STACK_LINE(288)
				{
					HX_STACK_LINE(288)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(288)
					bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(288)
					if ((tmp16)){
						HX_STACK_LINE(288)
						_this->_validate();
					}
				}
				HX_STACK_LINE(288)
				tmp15 = v->zpp_inner->x;
			}
			HX_STACK_LINE(288)
			Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(288)
			{
				HX_STACK_LINE(288)
				{
					HX_STACK_LINE(288)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(288)
					bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(288)
					if ((tmp17)){
						HX_STACK_LINE(288)
						_this->_validate();
					}
				}
				HX_STACK_LINE(288)
				tmp16 = v->zpp_inner->y;
			}
			HX_STACK_LINE(288)
			g->lineTo(tmp15,tmp16);
			HX_STACK_LINE(289)
			{
				HX_STACK_LINE(289)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(289)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(289)
				v->zpp_inner = null();
				HX_STACK_LINE(289)
				{
					HX_STACK_LINE(289)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(289)
					::nape::geom::Vec2 tmp17 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(289)
					o->zpp_pool = tmp17;
					HX_STACK_LINE(289)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(289)
				{
					HX_STACK_LINE(289)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(289)
					{
						HX_STACK_LINE(289)
						bool tmp17 = (o->outer != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(289)
						if ((tmp17)){
							HX_STACK_LINE(289)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(289)
							o->outer = null();
						}
						HX_STACK_LINE(289)
						o->_isimmutable = null();
						HX_STACK_LINE(289)
						o->_validate = null();
						HX_STACK_LINE(289)
						o->_invalidate = null();
					}
					HX_STACK_LINE(289)
					::zpp_nape::geom::ZPP_Vec2 tmp17 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(289)
					o->next = tmp17;
					HX_STACK_LINE(289)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::drawCurve( ::nape::geom::Vec2 start,::nape::geom::Vec2 control,::nape::geom::Vec2 end,int colour){
{
		HX_STACK_FRAME("nape.util.ShapeDebug","drawCurve",0x9274cf15,"nape.util.ShapeDebug.drawCurve","nape/util/ShapeDebug.hx",295,0xfa2f3866)
		HX_STACK_THIS(this)
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(control,"control")
		HX_STACK_ARG(end,"end")
		HX_STACK_ARG(colour,"colour")
		HX_STACK_LINE(319)
		::zpp_nape::util::ZPP_ShapeDebug tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(319)
		::openfl::_legacy::display::Graphics g = tmp->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(320)
		Float tmp1 = this->thickness;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(320)
		int tmp2 = (int(colour) & int((int)16777215));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(320)
		g->lineStyle(tmp1,tmp2,(int)1,null(),null(),null(),null(),null());
		HX_STACK_LINE(321)
		::zpp_nape::util::ZPP_Debug tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(321)
		bool tmp4 = tmp3->xnull;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(321)
		if ((tmp4)){
			HX_STACK_LINE(322)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(322)
			{
				HX_STACK_LINE(322)
				{
					HX_STACK_LINE(322)
					::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(322)
					bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(322)
					if ((tmp6)){
						HX_STACK_LINE(322)
						_this->_validate();
					}
				}
				HX_STACK_LINE(322)
				tmp5 = start->zpp_inner->x;
			}
			HX_STACK_LINE(322)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(322)
			{
				HX_STACK_LINE(322)
				{
					HX_STACK_LINE(322)
					::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(322)
					bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(322)
					if ((tmp7)){
						HX_STACK_LINE(322)
						_this->_validate();
					}
				}
				HX_STACK_LINE(322)
				tmp6 = start->zpp_inner->y;
			}
			HX_STACK_LINE(322)
			g->moveTo(tmp5,tmp6);
			HX_STACK_LINE(323)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(323)
			{
				HX_STACK_LINE(323)
				{
					HX_STACK_LINE(323)
					::zpp_nape::geom::ZPP_Vec2 _this = control->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(323)
					bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(323)
					if ((tmp8)){
						HX_STACK_LINE(323)
						_this->_validate();
					}
				}
				HX_STACK_LINE(323)
				tmp7 = control->zpp_inner->x;
			}
			HX_STACK_LINE(323)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(323)
			{
				HX_STACK_LINE(323)
				{
					HX_STACK_LINE(323)
					::zpp_nape::geom::ZPP_Vec2 _this = control->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(323)
					bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(323)
					if ((tmp9)){
						HX_STACK_LINE(323)
						_this->_validate();
					}
				}
				HX_STACK_LINE(323)
				tmp8 = control->zpp_inner->y;
			}
			HX_STACK_LINE(323)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(323)
			{
				HX_STACK_LINE(323)
				{
					HX_STACK_LINE(323)
					::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(323)
					bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(323)
					if ((tmp10)){
						HX_STACK_LINE(323)
						_this->_validate();
					}
				}
				HX_STACK_LINE(323)
				tmp9 = end->zpp_inner->x;
			}
			HX_STACK_LINE(323)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(323)
			{
				HX_STACK_LINE(323)
				{
					HX_STACK_LINE(323)
					::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(323)
					bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(323)
					if ((tmp11)){
						HX_STACK_LINE(323)
						_this->_validate();
					}
				}
				HX_STACK_LINE(323)
				tmp10 = end->zpp_inner->y;
			}
			HX_STACK_LINE(323)
			g->curveTo(tmp7,tmp8,tmp9,tmp10);
			HX_STACK_LINE(324)
			{
				HX_STACK_LINE(325)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(326)
				tmp11 = start->zpp_inner->weak;
				HX_STACK_LINE(325)
				if ((tmp11)){
					HX_STACK_LINE(328)
					{
						HX_STACK_LINE(328)
						::zpp_nape::geom::ZPP_Vec2 inner = start->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(328)
						start->zpp_inner->outer = null();
						HX_STACK_LINE(328)
						start->zpp_inner = null();
						HX_STACK_LINE(328)
						{
							HX_STACK_LINE(328)
							::nape::geom::Vec2 o = start;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(328)
							::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(328)
							o->zpp_pool = tmp12;
							HX_STACK_LINE(328)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(328)
						{
							HX_STACK_LINE(328)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(328)
							{
								HX_STACK_LINE(328)
								bool tmp12 = (o->outer != null());		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(328)
								if ((tmp12)){
									HX_STACK_LINE(328)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(328)
									o->outer = null();
								}
								HX_STACK_LINE(328)
								o->_isimmutable = null();
								HX_STACK_LINE(328)
								o->_validate = null();
								HX_STACK_LINE(328)
								o->_invalidate = null();
							}
							HX_STACK_LINE(328)
							::zpp_nape::geom::ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(328)
							o->next = tmp12;
							HX_STACK_LINE(328)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(329)
					true;
				}
				else{
					HX_STACK_LINE(332)
					false;
				}
			}
			HX_STACK_LINE(335)
			{
				HX_STACK_LINE(336)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(337)
				tmp11 = control->zpp_inner->weak;
				HX_STACK_LINE(336)
				if ((tmp11)){
					HX_STACK_LINE(339)
					{
						HX_STACK_LINE(339)
						::zpp_nape::geom::ZPP_Vec2 inner = control->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(339)
						control->zpp_inner->outer = null();
						HX_STACK_LINE(339)
						control->zpp_inner = null();
						HX_STACK_LINE(339)
						{
							HX_STACK_LINE(339)
							::nape::geom::Vec2 o = control;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(339)
							::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(339)
							o->zpp_pool = tmp12;
							HX_STACK_LINE(339)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(339)
						{
							HX_STACK_LINE(339)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(339)
							{
								HX_STACK_LINE(339)
								bool tmp12 = (o->outer != null());		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(339)
								if ((tmp12)){
									HX_STACK_LINE(339)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(339)
									o->outer = null();
								}
								HX_STACK_LINE(339)
								o->_isimmutable = null();
								HX_STACK_LINE(339)
								o->_validate = null();
								HX_STACK_LINE(339)
								o->_invalidate = null();
							}
							HX_STACK_LINE(339)
							::zpp_nape::geom::ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(339)
							o->next = tmp12;
							HX_STACK_LINE(339)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(340)
					true;
				}
				else{
					HX_STACK_LINE(343)
					false;
				}
			}
			HX_STACK_LINE(346)
			{
				HX_STACK_LINE(347)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(348)
				tmp11 = end->zpp_inner->weak;
				HX_STACK_LINE(347)
				if ((tmp11)){
					HX_STACK_LINE(350)
					{
						HX_STACK_LINE(350)
						::zpp_nape::geom::ZPP_Vec2 inner = end->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(350)
						end->zpp_inner->outer = null();
						HX_STACK_LINE(350)
						end->zpp_inner = null();
						HX_STACK_LINE(350)
						{
							HX_STACK_LINE(350)
							::nape::geom::Vec2 o = end;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(350)
							::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(350)
							o->zpp_pool = tmp12;
							HX_STACK_LINE(350)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(350)
						{
							HX_STACK_LINE(350)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(350)
							{
								HX_STACK_LINE(350)
								bool tmp12 = (o->outer != null());		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(350)
								if ((tmp12)){
									HX_STACK_LINE(350)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(350)
									o->outer = null();
								}
								HX_STACK_LINE(350)
								o->_isimmutable = null();
								HX_STACK_LINE(350)
								o->_validate = null();
								HX_STACK_LINE(350)
								o->_invalidate = null();
							}
							HX_STACK_LINE(350)
							::zpp_nape::geom::ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(350)
							o->next = tmp12;
							HX_STACK_LINE(350)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(351)
					true;
				}
				else{
					HX_STACK_LINE(354)
					false;
				}
			}
		}
		else{
			HX_STACK_LINE(359)
			::zpp_nape::util::ZPP_Debug tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(359)
			::nape::geom::Mat23 tmp6 = tmp5->xform->outer;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(359)
			::nape::geom::Vec2 tmp7 = start;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(359)
			::nape::geom::Vec2 tmp8 = tmp6->transform(tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(359)
			::nape::geom::Vec2 u = tmp8;		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(360)
			::zpp_nape::util::ZPP_Debug tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(360)
			::nape::geom::Mat23 tmp10 = tmp9->xform->outer;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(360)
			::nape::geom::Vec2 tmp11 = control;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(360)
			::nape::geom::Vec2 tmp12 = tmp10->transform(tmp11,null(),null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(360)
			::nape::geom::Vec2 v = tmp12;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(361)
			::zpp_nape::util::ZPP_Debug tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(361)
			::nape::geom::Mat23 tmp14 = tmp13->xform->outer;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(361)
			::nape::geom::Vec2 tmp15 = end;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(361)
			::nape::geom::Vec2 tmp16 = tmp14->transform(tmp15,null(),null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(361)
			::nape::geom::Vec2 q = tmp16;		HX_STACK_VAR(q,"q");
			HX_STACK_LINE(362)
			Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(362)
			{
				HX_STACK_LINE(362)
				{
					HX_STACK_LINE(362)
					::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(362)
					bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(362)
					if ((tmp18)){
						HX_STACK_LINE(362)
						_this->_validate();
					}
				}
				HX_STACK_LINE(362)
				tmp17 = u->zpp_inner->x;
			}
			HX_STACK_LINE(362)
			Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(362)
			{
				HX_STACK_LINE(362)
				{
					HX_STACK_LINE(362)
					::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(362)
					bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(362)
					if ((tmp19)){
						HX_STACK_LINE(362)
						_this->_validate();
					}
				}
				HX_STACK_LINE(362)
				tmp18 = u->zpp_inner->y;
			}
			HX_STACK_LINE(362)
			g->moveTo(tmp17,tmp18);
			HX_STACK_LINE(363)
			Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(363)
			{
				HX_STACK_LINE(363)
				{
					HX_STACK_LINE(363)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(363)
					bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(363)
					if ((tmp20)){
						HX_STACK_LINE(363)
						_this->_validate();
					}
				}
				HX_STACK_LINE(363)
				tmp19 = v->zpp_inner->x;
			}
			HX_STACK_LINE(363)
			Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(363)
			{
				HX_STACK_LINE(363)
				{
					HX_STACK_LINE(363)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(363)
					bool tmp21 = (_this->_validate != null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(363)
					if ((tmp21)){
						HX_STACK_LINE(363)
						_this->_validate();
					}
				}
				HX_STACK_LINE(363)
				tmp20 = v->zpp_inner->y;
			}
			HX_STACK_LINE(363)
			Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(363)
			{
				HX_STACK_LINE(363)
				{
					HX_STACK_LINE(363)
					::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(363)
					bool tmp22 = (_this->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(363)
					if ((tmp22)){
						HX_STACK_LINE(363)
						_this->_validate();
					}
				}
				HX_STACK_LINE(363)
				tmp21 = q->zpp_inner->x;
			}
			HX_STACK_LINE(363)
			Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(363)
			{
				HX_STACK_LINE(363)
				{
					HX_STACK_LINE(363)
					::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(363)
					bool tmp23 = (_this->_validate != null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(363)
					if ((tmp23)){
						HX_STACK_LINE(363)
						_this->_validate();
					}
				}
				HX_STACK_LINE(363)
				tmp22 = q->zpp_inner->y;
			}
			HX_STACK_LINE(363)
			g->curveTo(tmp19,tmp20,tmp21,tmp22);
			HX_STACK_LINE(364)
			{
				HX_STACK_LINE(364)
				::zpp_nape::geom::ZPP_Vec2 inner = u->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(364)
				u->zpp_inner->outer = null();
				HX_STACK_LINE(364)
				u->zpp_inner = null();
				HX_STACK_LINE(364)
				{
					HX_STACK_LINE(364)
					::nape::geom::Vec2 o = u;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(364)
					::nape::geom::Vec2 tmp23 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(364)
					o->zpp_pool = tmp23;
					HX_STACK_LINE(364)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(364)
				{
					HX_STACK_LINE(364)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(364)
					{
						HX_STACK_LINE(364)
						bool tmp23 = (o->outer != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(364)
						if ((tmp23)){
							HX_STACK_LINE(364)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(364)
							o->outer = null();
						}
						HX_STACK_LINE(364)
						o->_isimmutable = null();
						HX_STACK_LINE(364)
						o->_validate = null();
						HX_STACK_LINE(364)
						o->_invalidate = null();
					}
					HX_STACK_LINE(364)
					::zpp_nape::geom::ZPP_Vec2 tmp23 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(364)
					o->next = tmp23;
					HX_STACK_LINE(364)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(365)
			{
				HX_STACK_LINE(365)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(365)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(365)
				v->zpp_inner = null();
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(365)
					::nape::geom::Vec2 tmp23 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(365)
					o->zpp_pool = tmp23;
					HX_STACK_LINE(365)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(365)
					{
						HX_STACK_LINE(365)
						bool tmp23 = (o->outer != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(365)
						if ((tmp23)){
							HX_STACK_LINE(365)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(365)
							o->outer = null();
						}
						HX_STACK_LINE(365)
						o->_isimmutable = null();
						HX_STACK_LINE(365)
						o->_validate = null();
						HX_STACK_LINE(365)
						o->_invalidate = null();
					}
					HX_STACK_LINE(365)
					::zpp_nape::geom::ZPP_Vec2 tmp23 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(365)
					o->next = tmp23;
					HX_STACK_LINE(365)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(366)
			{
				HX_STACK_LINE(366)
				::zpp_nape::geom::ZPP_Vec2 inner = q->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(366)
				q->zpp_inner->outer = null();
				HX_STACK_LINE(366)
				q->zpp_inner = null();
				HX_STACK_LINE(366)
				{
					HX_STACK_LINE(366)
					::nape::geom::Vec2 o = q;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(366)
					::nape::geom::Vec2 tmp23 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(366)
					o->zpp_pool = tmp23;
					HX_STACK_LINE(366)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(366)
				{
					HX_STACK_LINE(366)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(366)
					{
						HX_STACK_LINE(366)
						bool tmp23 = (o->outer != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(366)
						if ((tmp23)){
							HX_STACK_LINE(366)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(366)
							o->outer = null();
						}
						HX_STACK_LINE(366)
						o->_isimmutable = null();
						HX_STACK_LINE(366)
						o->_validate = null();
						HX_STACK_LINE(366)
						o->_invalidate = null();
					}
					HX_STACK_LINE(366)
					::zpp_nape::geom::ZPP_Vec2 tmp23 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(366)
					o->next = tmp23;
					HX_STACK_LINE(366)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::drawCircle( ::nape::geom::Vec2 position,Float radius,int colour){
{
		HX_STACK_FRAME("nape.util.ShapeDebug","drawCircle",0xaae308ea,"nape.util.ShapeDebug.drawCircle","nape/util/ShapeDebug.hx",372,0xfa2f3866)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_ARG(colour,"colour")
		HX_STACK_LINE(385)
		::zpp_nape::util::ZPP_ShapeDebug tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(385)
		::openfl::_legacy::display::Graphics g = tmp->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(386)
		Float tmp1 = this->thickness;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(386)
		int tmp2 = (int(colour) & int((int)16777215));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(386)
		g->lineStyle(tmp1,tmp2,(int)1,null(),null(),null(),null(),null());
		HX_STACK_LINE(387)
		::zpp_nape::util::ZPP_Debug tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(387)
		bool tmp4 = tmp3->xnull;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(387)
		if ((tmp4)){
			HX_STACK_LINE(388)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(388)
			{
				HX_STACK_LINE(388)
				{
					HX_STACK_LINE(388)
					::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(388)
					bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(388)
					if ((tmp6)){
						HX_STACK_LINE(388)
						_this->_validate();
					}
				}
				HX_STACK_LINE(388)
				tmp5 = position->zpp_inner->x;
			}
			HX_STACK_LINE(388)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(388)
			{
				HX_STACK_LINE(388)
				{
					HX_STACK_LINE(388)
					::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(388)
					bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(388)
					if ((tmp7)){
						HX_STACK_LINE(388)
						_this->_validate();
					}
				}
				HX_STACK_LINE(388)
				tmp6 = position->zpp_inner->y;
			}
			HX_STACK_LINE(388)
			Float tmp7 = radius;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(388)
			g->drawCircle(tmp5,tmp6,tmp7);
			HX_STACK_LINE(389)
			{
				HX_STACK_LINE(390)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(391)
				tmp8 = position->zpp_inner->weak;
				HX_STACK_LINE(390)
				if ((tmp8)){
					HX_STACK_LINE(393)
					{
						HX_STACK_LINE(393)
						::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(393)
						position->zpp_inner->outer = null();
						HX_STACK_LINE(393)
						position->zpp_inner = null();
						HX_STACK_LINE(393)
						{
							HX_STACK_LINE(393)
							::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(393)
							::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(393)
							o->zpp_pool = tmp9;
							HX_STACK_LINE(393)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(393)
						{
							HX_STACK_LINE(393)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(393)
							{
								HX_STACK_LINE(393)
								bool tmp9 = (o->outer != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(393)
								if ((tmp9)){
									HX_STACK_LINE(393)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(393)
									o->outer = null();
								}
								HX_STACK_LINE(393)
								o->_isimmutable = null();
								HX_STACK_LINE(393)
								o->_validate = null();
								HX_STACK_LINE(393)
								o->_invalidate = null();
							}
							HX_STACK_LINE(393)
							::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(393)
							o->next = tmp9;
							HX_STACK_LINE(393)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(394)
					true;
				}
				else{
					HX_STACK_LINE(397)
					false;
				}
			}
		}
		else{
			HX_STACK_LINE(402)
			::zpp_nape::util::ZPP_Debug tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(402)
			::nape::geom::Mat23 tmp6 = tmp5->xform->outer;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(402)
			::nape::geom::Vec2 tmp7 = position;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(402)
			::nape::geom::Vec2 tmp8 = tmp6->transform(tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(402)
			::nape::geom::Vec2 v = tmp8;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(403)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(403)
			{
				HX_STACK_LINE(403)
				{
					HX_STACK_LINE(403)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(403)
					bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(403)
					if ((tmp10)){
						HX_STACK_LINE(403)
						_this->_validate();
					}
				}
				HX_STACK_LINE(403)
				tmp9 = v->zpp_inner->x;
			}
			HX_STACK_LINE(403)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(403)
			{
				HX_STACK_LINE(403)
				{
					HX_STACK_LINE(403)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(403)
					bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(403)
					if ((tmp11)){
						HX_STACK_LINE(403)
						_this->_validate();
					}
				}
				HX_STACK_LINE(403)
				tmp10 = v->zpp_inner->y;
			}
			HX_STACK_LINE(403)
			Float tmp11 = radius;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(403)
			::zpp_nape::util::ZPP_Debug tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(403)
			Float tmp13 = tmp12->xdet;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(403)
			Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(403)
			g->drawCircle(tmp9,tmp10,tmp14);
			HX_STACK_LINE(404)
			{
				HX_STACK_LINE(404)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(404)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(404)
				v->zpp_inner = null();
				HX_STACK_LINE(404)
				{
					HX_STACK_LINE(404)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(404)
					::nape::geom::Vec2 tmp15 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(404)
					o->zpp_pool = tmp15;
					HX_STACK_LINE(404)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(404)
				{
					HX_STACK_LINE(404)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(404)
					{
						HX_STACK_LINE(404)
						bool tmp15 = (o->outer != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(404)
						if ((tmp15)){
							HX_STACK_LINE(404)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(404)
							o->outer = null();
						}
						HX_STACK_LINE(404)
						o->_isimmutable = null();
						HX_STACK_LINE(404)
						o->_validate = null();
						HX_STACK_LINE(404)
						o->_invalidate = null();
					}
					HX_STACK_LINE(404)
					::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(404)
					o->next = tmp15;
					HX_STACK_LINE(404)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::drawAABB( ::nape::geom::AABB aabb,int colour){
{
		HX_STACK_FRAME("nape.util.ShapeDebug","drawAABB",0xb5b58ada,"nape.util.ShapeDebug.drawAABB","nape/util/ShapeDebug.hx",410,0xfa2f3866)
		HX_STACK_THIS(this)
		HX_STACK_ARG(aabb,"aabb")
		HX_STACK_ARG(colour,"colour")
		HX_STACK_LINE(417)
		::zpp_nape::util::ZPP_ShapeDebug tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(417)
		::openfl::_legacy::display::Graphics g = tmp->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(418)
		Float tmp1 = this->thickness;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(418)
		int tmp2 = (int(colour) & int((int)16777215));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(418)
		g->lineStyle(tmp1,tmp2,(int)1,null(),null(),null(),null(),null());
		HX_STACK_LINE(419)
		::zpp_nape::util::ZPP_Debug tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(419)
		bool tmp4 = tmp3->xnull;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(419)
		if ((tmp4)){
			HX_STACK_LINE(419)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(419)
			{
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(419)
					bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(419)
					if ((tmp6)){
						HX_STACK_LINE(419)
						_this->_validate();
					}
				}
				HX_STACK_LINE(419)
				tmp5 = aabb->zpp_inner->minx;
			}
			HX_STACK_LINE(419)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(419)
			{
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(419)
					bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(419)
					if ((tmp7)){
						HX_STACK_LINE(419)
						_this->_validate();
					}
				}
				HX_STACK_LINE(419)
				tmp6 = aabb->zpp_inner->miny;
			}
			HX_STACK_LINE(419)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(419)
			{
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(419)
					bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(419)
					if ((tmp8)){
						HX_STACK_LINE(419)
						_this->_validate();
					}
				}
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(419)
					tmp7 = (_this->maxx - _this->minx);
				}
			}
			HX_STACK_LINE(419)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(419)
			{
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(419)
					bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(419)
					if ((tmp9)){
						HX_STACK_LINE(419)
						_this->_validate();
					}
				}
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(419)
					tmp8 = (_this->maxy - _this->miny);
				}
			}
			HX_STACK_LINE(419)
			g->drawRect(tmp5,tmp6,tmp7,tmp8);
		}
		else{
			HX_STACK_LINE(421)
			::zpp_nape::util::ZPP_Debug tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(421)
			::nape::geom::Mat23 tmp6 = tmp5->xform->outer;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(421)
			::nape::geom::Vec2 tmp7 = aabb->zpp_inner->getmin();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(421)
			::nape::geom::Vec2 tmp8 = tmp6->transform(tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(421)
			::nape::geom::Vec2 v = tmp8;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(422)
			::nape::geom::Vec2 tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(422)
			{
				HX_STACK_LINE(422)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(422)
				{
					HX_STACK_LINE(422)
					{
						HX_STACK_LINE(422)
						::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(422)
						bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(422)
						if ((tmp11)){
							HX_STACK_LINE(422)
							_this->_validate();
						}
					}
					HX_STACK_LINE(422)
					{
						HX_STACK_LINE(422)
						::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(422)
						tmp10 = (_this->maxx - _this->minx);
					}
				}
				HX_STACK_LINE(422)
				Float x = tmp10;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(422)
				bool weak = false;		HX_STACK_VAR(weak,"weak");
				HX_STACK_LINE(422)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(422)
				{
					HX_STACK_LINE(422)
					::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(422)
					bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(422)
					if ((tmp12)){
						HX_STACK_LINE(422)
						::nape::geom::Vec2 tmp13 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(422)
						ret = tmp13;
					}
					else{
						HX_STACK_LINE(422)
						::nape::geom::Vec2 tmp13 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(422)
						ret = tmp13;
						HX_STACK_LINE(422)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(422)
						ret->zpp_pool = null();
					}
				}
				HX_STACK_LINE(422)
				bool tmp11 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(422)
				if ((tmp11)){
					HX_STACK_LINE(422)
					::zpp_nape::geom::ZPP_Vec2 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(422)
					{
						HX_STACK_LINE(422)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(422)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(422)
						{
							HX_STACK_LINE(422)
							::zpp_nape::geom::ZPP_Vec2 tmp13 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(422)
							bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(422)
							if ((tmp14)){
								HX_STACK_LINE(422)
								::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(422)
								ret1 = tmp15;
							}
							else{
								HX_STACK_LINE(422)
								::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(422)
								ret1 = tmp15;
								HX_STACK_LINE(422)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(422)
								ret1->next = null();
							}
							HX_STACK_LINE(422)
							ret1->weak = false;
						}
						HX_STACK_LINE(422)
						ret1->_immutable = immutable;
						HX_STACK_LINE(422)
						{
							HX_STACK_LINE(422)
							ret1->x = x;
							HX_STACK_LINE(422)
							ret1->y = (int)0;
							HX_STACK_LINE(422)
							{
							}
						}
						HX_STACK_LINE(422)
						tmp12 = ret1;
					}
					HX_STACK_LINE(422)
					ret->zpp_inner = tmp12;
					HX_STACK_LINE(422)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(422)
					Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(422)
					{
						HX_STACK_LINE(422)
						{
							HX_STACK_LINE(422)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(422)
							bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(422)
							if ((tmp13)){
								HX_STACK_LINE(422)
								_this->_validate();
							}
						}
						HX_STACK_LINE(422)
						tmp12 = ret->zpp_inner->x;
					}
					HX_STACK_LINE(422)
					Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(422)
					bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(422)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(422)
					if ((tmp14)){
						HX_STACK_LINE(422)
						Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(422)
						{
							HX_STACK_LINE(422)
							{
								HX_STACK_LINE(422)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(422)
								bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(422)
								bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(422)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(422)
								if ((tmp19)){
									HX_STACK_LINE(422)
									_this->_validate();
								}
							}
							HX_STACK_LINE(422)
							Float tmp17 = ret->zpp_inner->y;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(422)
							tmp16 = tmp17;
						}
						HX_STACK_LINE(422)
						tmp15 = (tmp16 == (int)0);
					}
					else{
						HX_STACK_LINE(422)
						tmp15 = false;
					}
					HX_STACK_LINE(422)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(422)
					if ((tmp16)){
						HX_STACK_LINE(422)
						{
							HX_STACK_LINE(422)
							ret->zpp_inner->x = x;
							HX_STACK_LINE(422)
							ret->zpp_inner->y = (int)0;
							HX_STACK_LINE(422)
							{
							}
						}
						HX_STACK_LINE(422)
						{
							HX_STACK_LINE(422)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(422)
							bool tmp17 = (_this->_invalidate != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(422)
							if ((tmp17)){
								HX_STACK_LINE(422)
								::zpp_nape::geom::ZPP_Vec2 tmp18 = _this;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(422)
								_this->_invalidate(tmp18);
							}
						}
					}
					HX_STACK_LINE(422)
					ret;
				}
				HX_STACK_LINE(422)
				ret->zpp_inner->weak = weak;
				HX_STACK_LINE(422)
				tmp9 = ret;
			}
			HX_STACK_LINE(422)
			::nape::geom::Vec2 w = tmp9;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(423)
			::zpp_nape::util::ZPP_Debug tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(423)
			::nape::geom::Mat23 tmp11 = tmp10->xform->outer;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(423)
			::nape::geom::Vec2 tmp12 = w;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(423)
			::nape::geom::Vec2 tmp13 = tmp11->transform(tmp12,true,null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(423)
			::nape::geom::Vec2 w2 = tmp13;		HX_STACK_VAR(w2,"w2");
			HX_STACK_LINE(424)
			::nape::geom::Vec2 tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(424)
			{
				HX_STACK_LINE(424)
				Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(424)
				{
					HX_STACK_LINE(424)
					{
						HX_STACK_LINE(424)
						::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(424)
						bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(424)
						if ((tmp16)){
							HX_STACK_LINE(424)
							_this->_validate();
						}
					}
					HX_STACK_LINE(424)
					{
						HX_STACK_LINE(424)
						::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(424)
						tmp15 = (_this->maxy - _this->miny);
					}
				}
				HX_STACK_LINE(424)
				Float y = tmp15;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(424)
				bool weak = false;		HX_STACK_VAR(weak,"weak");
				HX_STACK_LINE(424)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(424)
				{
					HX_STACK_LINE(424)
					::nape::geom::Vec2 tmp16 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(424)
					bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(424)
					if ((tmp17)){
						HX_STACK_LINE(424)
						::nape::geom::Vec2 tmp18 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(424)
						ret = tmp18;
					}
					else{
						HX_STACK_LINE(424)
						::nape::geom::Vec2 tmp18 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(424)
						ret = tmp18;
						HX_STACK_LINE(424)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(424)
						ret->zpp_pool = null();
					}
				}
				HX_STACK_LINE(424)
				bool tmp16 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(424)
				if ((tmp16)){
					HX_STACK_LINE(424)
					::zpp_nape::geom::ZPP_Vec2 tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(424)
					{
						HX_STACK_LINE(424)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(424)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(424)
						{
							HX_STACK_LINE(424)
							::zpp_nape::geom::ZPP_Vec2 tmp18 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(424)
							bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(424)
							if ((tmp19)){
								HX_STACK_LINE(424)
								::zpp_nape::geom::ZPP_Vec2 tmp20 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(424)
								ret1 = tmp20;
							}
							else{
								HX_STACK_LINE(424)
								::zpp_nape::geom::ZPP_Vec2 tmp20 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(424)
								ret1 = tmp20;
								HX_STACK_LINE(424)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(424)
								ret1->next = null();
							}
							HX_STACK_LINE(424)
							ret1->weak = false;
						}
						HX_STACK_LINE(424)
						ret1->_immutable = immutable;
						HX_STACK_LINE(424)
						{
							HX_STACK_LINE(424)
							ret1->x = (int)0;
							HX_STACK_LINE(424)
							ret1->y = y;
							HX_STACK_LINE(424)
							{
							}
						}
						HX_STACK_LINE(424)
						tmp17 = ret1;
					}
					HX_STACK_LINE(424)
					ret->zpp_inner = tmp17;
					HX_STACK_LINE(424)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(424)
					Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(424)
					{
						HX_STACK_LINE(424)
						{
							HX_STACK_LINE(424)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(424)
							bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(424)
							if ((tmp18)){
								HX_STACK_LINE(424)
								_this->_validate();
							}
						}
						HX_STACK_LINE(424)
						tmp17 = ret->zpp_inner->x;
					}
					HX_STACK_LINE(424)
					bool tmp18 = (tmp17 == (int)0);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(424)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(424)
					if ((tmp18)){
						HX_STACK_LINE(424)
						Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(424)
						{
							HX_STACK_LINE(424)
							{
								HX_STACK_LINE(424)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(424)
								bool tmp21 = (_this->_validate != null());		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(424)
								bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(424)
								bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(424)
								if ((tmp23)){
									HX_STACK_LINE(424)
									_this->_validate();
								}
							}
							HX_STACK_LINE(424)
							Float tmp21 = ret->zpp_inner->y;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(424)
							tmp20 = tmp21;
						}
						HX_STACK_LINE(424)
						Float tmp21 = y;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(424)
						tmp19 = (tmp20 == tmp21);
					}
					else{
						HX_STACK_LINE(424)
						tmp19 = false;
					}
					HX_STACK_LINE(424)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(424)
					if ((tmp20)){
						HX_STACK_LINE(424)
						{
							HX_STACK_LINE(424)
							ret->zpp_inner->x = (int)0;
							HX_STACK_LINE(424)
							ret->zpp_inner->y = y;
							HX_STACK_LINE(424)
							{
							}
						}
						HX_STACK_LINE(424)
						{
							HX_STACK_LINE(424)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(424)
							bool tmp21 = (_this->_invalidate != null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(424)
							if ((tmp21)){
								HX_STACK_LINE(424)
								::zpp_nape::geom::ZPP_Vec2 tmp22 = _this;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(424)
								_this->_invalidate(tmp22);
							}
						}
					}
					HX_STACK_LINE(424)
					ret;
				}
				HX_STACK_LINE(424)
				ret->zpp_inner->weak = weak;
				HX_STACK_LINE(424)
				tmp14 = ret;
			}
			HX_STACK_LINE(424)
			::nape::geom::Vec2 h = tmp14;		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(425)
			::zpp_nape::util::ZPP_Debug tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(425)
			::nape::geom::Mat23 tmp16 = tmp15->xform->outer;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(425)
			::nape::geom::Vec2 tmp17 = h;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(425)
			::nape::geom::Vec2 tmp18 = tmp16->transform(tmp17,true,null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(425)
			::nape::geom::Vec2 h2 = tmp18;		HX_STACK_VAR(h2,"h2");
			HX_STACK_LINE(426)
			Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(426)
			{
				HX_STACK_LINE(426)
				{
					HX_STACK_LINE(426)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(426)
					bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(426)
					if ((tmp20)){
						HX_STACK_LINE(426)
						_this->_validate();
					}
				}
				HX_STACK_LINE(426)
				tmp19 = v->zpp_inner->x;
			}
			HX_STACK_LINE(426)
			Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(426)
			{
				HX_STACK_LINE(426)
				{
					HX_STACK_LINE(426)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(426)
					bool tmp21 = (_this->_validate != null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(426)
					if ((tmp21)){
						HX_STACK_LINE(426)
						_this->_validate();
					}
				}
				HX_STACK_LINE(426)
				tmp20 = v->zpp_inner->y;
			}
			HX_STACK_LINE(426)
			g->moveTo(tmp19,tmp20);
			HX_STACK_LINE(427)
			Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(427)
			{
				HX_STACK_LINE(427)
				{
					HX_STACK_LINE(427)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(427)
					bool tmp22 = (_this->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(427)
					if ((tmp22)){
						HX_STACK_LINE(427)
						_this->_validate();
					}
				}
				HX_STACK_LINE(427)
				tmp21 = v->zpp_inner->x;
			}
			HX_STACK_LINE(427)
			Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(427)
			{
				HX_STACK_LINE(427)
				{
					HX_STACK_LINE(427)
					::zpp_nape::geom::ZPP_Vec2 _this = w2->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(427)
					bool tmp23 = (_this->_validate != null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(427)
					if ((tmp23)){
						HX_STACK_LINE(427)
						_this->_validate();
					}
				}
				HX_STACK_LINE(427)
				tmp22 = w2->zpp_inner->x;
			}
			HX_STACK_LINE(427)
			Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(427)
			Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(427)
			{
				HX_STACK_LINE(427)
				{
					HX_STACK_LINE(427)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(427)
					bool tmp25 = (_this->_validate != null());		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(427)
					if ((tmp25)){
						HX_STACK_LINE(427)
						_this->_validate();
					}
				}
				HX_STACK_LINE(427)
				tmp24 = v->zpp_inner->y;
			}
			HX_STACK_LINE(427)
			Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(427)
			{
				HX_STACK_LINE(427)
				{
					HX_STACK_LINE(427)
					::zpp_nape::geom::ZPP_Vec2 _this = w2->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(427)
					bool tmp26 = (_this->_validate != null());		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(427)
					if ((tmp26)){
						HX_STACK_LINE(427)
						_this->_validate();
					}
				}
				HX_STACK_LINE(427)
				tmp25 = w2->zpp_inner->y;
			}
			HX_STACK_LINE(427)
			Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(427)
			g->lineTo(tmp23,tmp26);
			HX_STACK_LINE(428)
			Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(428)
			{
				HX_STACK_LINE(428)
				{
					HX_STACK_LINE(428)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(428)
					bool tmp28 = (_this->_validate != null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(428)
					if ((tmp28)){
						HX_STACK_LINE(428)
						_this->_validate();
					}
				}
				HX_STACK_LINE(428)
				tmp27 = v->zpp_inner->x;
			}
			HX_STACK_LINE(428)
			Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(428)
			{
				HX_STACK_LINE(428)
				{
					HX_STACK_LINE(428)
					::zpp_nape::geom::ZPP_Vec2 _this = w2->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(428)
					bool tmp29 = (_this->_validate != null());		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(428)
					if ((tmp29)){
						HX_STACK_LINE(428)
						_this->_validate();
					}
				}
				HX_STACK_LINE(428)
				tmp28 = w2->zpp_inner->x;
			}
			HX_STACK_LINE(428)
			Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(428)
			Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(428)
			{
				HX_STACK_LINE(428)
				{
					HX_STACK_LINE(428)
					::zpp_nape::geom::ZPP_Vec2 _this = h2->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(428)
					bool tmp31 = (_this->_validate != null());		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(428)
					if ((tmp31)){
						HX_STACK_LINE(428)
						_this->_validate();
					}
				}
				HX_STACK_LINE(428)
				tmp30 = h2->zpp_inner->x;
			}
			HX_STACK_LINE(428)
			Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(428)
			Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(428)
			{
				HX_STACK_LINE(428)
				{
					HX_STACK_LINE(428)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(428)
					bool tmp33 = (_this->_validate != null());		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(428)
					if ((tmp33)){
						HX_STACK_LINE(428)
						_this->_validate();
					}
				}
				HX_STACK_LINE(428)
				tmp32 = v->zpp_inner->y;
			}
			HX_STACK_LINE(428)
			Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(428)
			{
				HX_STACK_LINE(428)
				{
					HX_STACK_LINE(428)
					::zpp_nape::geom::ZPP_Vec2 _this = w2->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(428)
					bool tmp34 = (_this->_validate != null());		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(428)
					if ((tmp34)){
						HX_STACK_LINE(428)
						_this->_validate();
					}
				}
				HX_STACK_LINE(428)
				tmp33 = w2->zpp_inner->y;
			}
			HX_STACK_LINE(428)
			Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(428)
			Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(428)
			{
				HX_STACK_LINE(428)
				{
					HX_STACK_LINE(428)
					::zpp_nape::geom::ZPP_Vec2 _this = h2->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(428)
					bool tmp36 = (_this->_validate != null());		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(428)
					if ((tmp36)){
						HX_STACK_LINE(428)
						_this->_validate();
					}
				}
				HX_STACK_LINE(428)
				tmp35 = h2->zpp_inner->y;
			}
			HX_STACK_LINE(428)
			Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(428)
			g->lineTo(tmp31,tmp36);
			HX_STACK_LINE(429)
			Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(429)
			{
				HX_STACK_LINE(429)
				{
					HX_STACK_LINE(429)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(429)
					bool tmp38 = (_this->_validate != null());		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(429)
					if ((tmp38)){
						HX_STACK_LINE(429)
						_this->_validate();
					}
				}
				HX_STACK_LINE(429)
				tmp37 = v->zpp_inner->x;
			}
			HX_STACK_LINE(429)
			Float tmp38;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(429)
			{
				HX_STACK_LINE(429)
				{
					HX_STACK_LINE(429)
					::zpp_nape::geom::ZPP_Vec2 _this = h2->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(429)
					bool tmp39 = (_this->_validate != null());		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(429)
					if ((tmp39)){
						HX_STACK_LINE(429)
						_this->_validate();
					}
				}
				HX_STACK_LINE(429)
				tmp38 = h2->zpp_inner->x;
			}
			HX_STACK_LINE(429)
			Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(429)
			Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(429)
			{
				HX_STACK_LINE(429)
				{
					HX_STACK_LINE(429)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(429)
					bool tmp41 = (_this->_validate != null());		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(429)
					if ((tmp41)){
						HX_STACK_LINE(429)
						_this->_validate();
					}
				}
				HX_STACK_LINE(429)
				tmp40 = v->zpp_inner->y;
			}
			HX_STACK_LINE(429)
			Float tmp41;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(429)
			{
				HX_STACK_LINE(429)
				{
					HX_STACK_LINE(429)
					::zpp_nape::geom::ZPP_Vec2 _this = h2->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(429)
					bool tmp42 = (_this->_validate != null());		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(429)
					if ((tmp42)){
						HX_STACK_LINE(429)
						_this->_validate();
					}
				}
				HX_STACK_LINE(429)
				tmp41 = h2->zpp_inner->y;
			}
			HX_STACK_LINE(429)
			Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(429)
			g->lineTo(tmp39,tmp42);
			HX_STACK_LINE(430)
			Float tmp43;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(430)
			{
				HX_STACK_LINE(430)
				{
					HX_STACK_LINE(430)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(430)
					bool tmp44 = (_this->_validate != null());		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(430)
					if ((tmp44)){
						HX_STACK_LINE(430)
						_this->_validate();
					}
				}
				HX_STACK_LINE(430)
				tmp43 = v->zpp_inner->x;
			}
			HX_STACK_LINE(430)
			Float tmp44;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(430)
			{
				HX_STACK_LINE(430)
				{
					HX_STACK_LINE(430)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(430)
					bool tmp45 = (_this->_validate != null());		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(430)
					if ((tmp45)){
						HX_STACK_LINE(430)
						_this->_validate();
					}
				}
				HX_STACK_LINE(430)
				tmp44 = v->zpp_inner->y;
			}
			HX_STACK_LINE(430)
			g->lineTo(tmp43,tmp44);
			HX_STACK_LINE(431)
			{
				HX_STACK_LINE(431)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(431)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(431)
				v->zpp_inner = null();
				HX_STACK_LINE(431)
				{
					HX_STACK_LINE(431)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(431)
					::nape::geom::Vec2 tmp45 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(431)
					o->zpp_pool = tmp45;
					HX_STACK_LINE(431)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(431)
				{
					HX_STACK_LINE(431)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(431)
					{
						HX_STACK_LINE(431)
						bool tmp45 = (o->outer != null());		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(431)
						if ((tmp45)){
							HX_STACK_LINE(431)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(431)
							o->outer = null();
						}
						HX_STACK_LINE(431)
						o->_isimmutable = null();
						HX_STACK_LINE(431)
						o->_validate = null();
						HX_STACK_LINE(431)
						o->_invalidate = null();
					}
					HX_STACK_LINE(431)
					::zpp_nape::geom::ZPP_Vec2 tmp45 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(431)
					o->next = tmp45;
					HX_STACK_LINE(431)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(432)
			{
				HX_STACK_LINE(432)
				::zpp_nape::geom::ZPP_Vec2 inner = w->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(432)
				w->zpp_inner->outer = null();
				HX_STACK_LINE(432)
				w->zpp_inner = null();
				HX_STACK_LINE(432)
				{
					HX_STACK_LINE(432)
					::nape::geom::Vec2 o = w;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(432)
					::nape::geom::Vec2 tmp45 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(432)
					o->zpp_pool = tmp45;
					HX_STACK_LINE(432)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(432)
				{
					HX_STACK_LINE(432)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(432)
					{
						HX_STACK_LINE(432)
						bool tmp45 = (o->outer != null());		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(432)
						if ((tmp45)){
							HX_STACK_LINE(432)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(432)
							o->outer = null();
						}
						HX_STACK_LINE(432)
						o->_isimmutable = null();
						HX_STACK_LINE(432)
						o->_validate = null();
						HX_STACK_LINE(432)
						o->_invalidate = null();
					}
					HX_STACK_LINE(432)
					::zpp_nape::geom::ZPP_Vec2 tmp45 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(432)
					o->next = tmp45;
					HX_STACK_LINE(432)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(433)
			{
				HX_STACK_LINE(433)
				::zpp_nape::geom::ZPP_Vec2 inner = w2->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(433)
				w2->zpp_inner->outer = null();
				HX_STACK_LINE(433)
				w2->zpp_inner = null();
				HX_STACK_LINE(433)
				{
					HX_STACK_LINE(433)
					::nape::geom::Vec2 o = w2;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(433)
					::nape::geom::Vec2 tmp45 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(433)
					o->zpp_pool = tmp45;
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
						bool tmp45 = (o->outer != null());		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(433)
						if ((tmp45)){
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
					::zpp_nape::geom::ZPP_Vec2 tmp45 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(433)
					o->next = tmp45;
					HX_STACK_LINE(433)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(434)
			{
				HX_STACK_LINE(434)
				::zpp_nape::geom::ZPP_Vec2 inner = h->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(434)
				h->zpp_inner->outer = null();
				HX_STACK_LINE(434)
				h->zpp_inner = null();
				HX_STACK_LINE(434)
				{
					HX_STACK_LINE(434)
					::nape::geom::Vec2 o = h;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(434)
					::nape::geom::Vec2 tmp45 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(434)
					o->zpp_pool = tmp45;
					HX_STACK_LINE(434)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(434)
				{
					HX_STACK_LINE(434)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(434)
					{
						HX_STACK_LINE(434)
						bool tmp45 = (o->outer != null());		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(434)
						if ((tmp45)){
							HX_STACK_LINE(434)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(434)
							o->outer = null();
						}
						HX_STACK_LINE(434)
						o->_isimmutable = null();
						HX_STACK_LINE(434)
						o->_validate = null();
						HX_STACK_LINE(434)
						o->_invalidate = null();
					}
					HX_STACK_LINE(434)
					::zpp_nape::geom::ZPP_Vec2 tmp45 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(434)
					o->next = tmp45;
					HX_STACK_LINE(434)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(435)
			{
				HX_STACK_LINE(435)
				::zpp_nape::geom::ZPP_Vec2 inner = h2->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(435)
				h2->zpp_inner->outer = null();
				HX_STACK_LINE(435)
				h2->zpp_inner = null();
				HX_STACK_LINE(435)
				{
					HX_STACK_LINE(435)
					::nape::geom::Vec2 o = h2;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(435)
					::nape::geom::Vec2 tmp45 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(435)
					o->zpp_pool = tmp45;
					HX_STACK_LINE(435)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(435)
				{
					HX_STACK_LINE(435)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(435)
					{
						HX_STACK_LINE(435)
						bool tmp45 = (o->outer != null());		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(435)
						if ((tmp45)){
							HX_STACK_LINE(435)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(435)
							o->outer = null();
						}
						HX_STACK_LINE(435)
						o->_isimmutable = null();
						HX_STACK_LINE(435)
						o->_validate = null();
						HX_STACK_LINE(435)
						o->_invalidate = null();
					}
					HX_STACK_LINE(435)
					::zpp_nape::geom::ZPP_Vec2 tmp45 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(435)
					o->next = tmp45;
					HX_STACK_LINE(435)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::drawFilledTriangle( ::nape::geom::Vec2 p0,::nape::geom::Vec2 p1,::nape::geom::Vec2 p2,int colour){
{
		HX_STACK_FRAME("nape.util.ShapeDebug","drawFilledTriangle",0xb9aefb64,"nape.util.ShapeDebug.drawFilledTriangle","nape/util/ShapeDebug.hx",441,0xfa2f3866)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p0,"p0")
		HX_STACK_ARG(p1,"p1")
		HX_STACK_ARG(p2,"p2")
		HX_STACK_ARG(colour,"colour")
		HX_STACK_LINE(463)
		::zpp_nape::util::ZPP_ShapeDebug tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(463)
		::openfl::_legacy::display::Graphics g = tmp->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(464)
		g->lineStyle((int)0,(int)0,(int)0,null(),null(),null(),null(),null());
		HX_STACK_LINE(465)
		int tmp1 = (int(colour) & int((int)16777215));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(465)
		g->beginFill(tmp1,(int)1);
		HX_STACK_LINE(466)
		::zpp_nape::util::ZPP_Debug tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(466)
		bool tmp3 = tmp2->xnull;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(466)
		if ((tmp3)){
			HX_STACK_LINE(467)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(467)
			{
				HX_STACK_LINE(467)
				{
					HX_STACK_LINE(467)
					::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(467)
					bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(467)
					if ((tmp5)){
						HX_STACK_LINE(467)
						_this->_validate();
					}
				}
				HX_STACK_LINE(467)
				tmp4 = p0->zpp_inner->x;
			}
			HX_STACK_LINE(467)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(467)
			{
				HX_STACK_LINE(467)
				{
					HX_STACK_LINE(467)
					::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(467)
					bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(467)
					if ((tmp6)){
						HX_STACK_LINE(467)
						_this->_validate();
					}
				}
				HX_STACK_LINE(467)
				tmp5 = p0->zpp_inner->y;
			}
			HX_STACK_LINE(467)
			g->moveTo(tmp4,tmp5);
			HX_STACK_LINE(468)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(468)
			{
				HX_STACK_LINE(468)
				{
					HX_STACK_LINE(468)
					::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(468)
					bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(468)
					if ((tmp7)){
						HX_STACK_LINE(468)
						_this->_validate();
					}
				}
				HX_STACK_LINE(468)
				tmp6 = p1->zpp_inner->x;
			}
			HX_STACK_LINE(468)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(468)
			{
				HX_STACK_LINE(468)
				{
					HX_STACK_LINE(468)
					::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(468)
					bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(468)
					if ((tmp8)){
						HX_STACK_LINE(468)
						_this->_validate();
					}
				}
				HX_STACK_LINE(468)
				tmp7 = p1->zpp_inner->y;
			}
			HX_STACK_LINE(468)
			g->lineTo(tmp6,tmp7);
			HX_STACK_LINE(469)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(469)
			{
				HX_STACK_LINE(469)
				{
					HX_STACK_LINE(469)
					::zpp_nape::geom::ZPP_Vec2 _this = p2->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(469)
					bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(469)
					if ((tmp9)){
						HX_STACK_LINE(469)
						_this->_validate();
					}
				}
				HX_STACK_LINE(469)
				tmp8 = p2->zpp_inner->x;
			}
			HX_STACK_LINE(469)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(469)
			{
				HX_STACK_LINE(469)
				{
					HX_STACK_LINE(469)
					::zpp_nape::geom::ZPP_Vec2 _this = p2->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(469)
					bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(469)
					if ((tmp10)){
						HX_STACK_LINE(469)
						_this->_validate();
					}
				}
				HX_STACK_LINE(469)
				tmp9 = p2->zpp_inner->y;
			}
			HX_STACK_LINE(469)
			g->lineTo(tmp8,tmp9);
			HX_STACK_LINE(470)
			{
				HX_STACK_LINE(471)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(472)
				tmp10 = p0->zpp_inner->weak;
				HX_STACK_LINE(471)
				if ((tmp10)){
					HX_STACK_LINE(474)
					{
						HX_STACK_LINE(474)
						::zpp_nape::geom::ZPP_Vec2 inner = p0->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(474)
						p0->zpp_inner->outer = null();
						HX_STACK_LINE(474)
						p0->zpp_inner = null();
						HX_STACK_LINE(474)
						{
							HX_STACK_LINE(474)
							::nape::geom::Vec2 o = p0;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(474)
							::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(474)
							o->zpp_pool = tmp11;
							HX_STACK_LINE(474)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(474)
						{
							HX_STACK_LINE(474)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(474)
							{
								HX_STACK_LINE(474)
								bool tmp11 = (o->outer != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(474)
								if ((tmp11)){
									HX_STACK_LINE(474)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(474)
									o->outer = null();
								}
								HX_STACK_LINE(474)
								o->_isimmutable = null();
								HX_STACK_LINE(474)
								o->_validate = null();
								HX_STACK_LINE(474)
								o->_invalidate = null();
							}
							HX_STACK_LINE(474)
							::zpp_nape::geom::ZPP_Vec2 tmp11 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(474)
							o->next = tmp11;
							HX_STACK_LINE(474)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(475)
					true;
				}
				else{
					HX_STACK_LINE(478)
					false;
				}
			}
			HX_STACK_LINE(481)
			{
				HX_STACK_LINE(482)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(483)
				tmp10 = p1->zpp_inner->weak;
				HX_STACK_LINE(482)
				if ((tmp10)){
					HX_STACK_LINE(485)
					{
						HX_STACK_LINE(485)
						::zpp_nape::geom::ZPP_Vec2 inner = p1->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(485)
						p1->zpp_inner->outer = null();
						HX_STACK_LINE(485)
						p1->zpp_inner = null();
						HX_STACK_LINE(485)
						{
							HX_STACK_LINE(485)
							::nape::geom::Vec2 o = p1;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(485)
							::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(485)
							o->zpp_pool = tmp11;
							HX_STACK_LINE(485)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(485)
						{
							HX_STACK_LINE(485)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(485)
							{
								HX_STACK_LINE(485)
								bool tmp11 = (o->outer != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(485)
								if ((tmp11)){
									HX_STACK_LINE(485)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(485)
									o->outer = null();
								}
								HX_STACK_LINE(485)
								o->_isimmutable = null();
								HX_STACK_LINE(485)
								o->_validate = null();
								HX_STACK_LINE(485)
								o->_invalidate = null();
							}
							HX_STACK_LINE(485)
							::zpp_nape::geom::ZPP_Vec2 tmp11 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(485)
							o->next = tmp11;
							HX_STACK_LINE(485)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(486)
					true;
				}
				else{
					HX_STACK_LINE(489)
					false;
				}
			}
			HX_STACK_LINE(492)
			{
				HX_STACK_LINE(493)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(494)
				tmp10 = p2->zpp_inner->weak;
				HX_STACK_LINE(493)
				if ((tmp10)){
					HX_STACK_LINE(496)
					{
						HX_STACK_LINE(496)
						::zpp_nape::geom::ZPP_Vec2 inner = p2->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(496)
						p2->zpp_inner->outer = null();
						HX_STACK_LINE(496)
						p2->zpp_inner = null();
						HX_STACK_LINE(496)
						{
							HX_STACK_LINE(496)
							::nape::geom::Vec2 o = p2;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(496)
							::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(496)
							o->zpp_pool = tmp11;
							HX_STACK_LINE(496)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(496)
						{
							HX_STACK_LINE(496)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(496)
							{
								HX_STACK_LINE(496)
								bool tmp11 = (o->outer != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(496)
								if ((tmp11)){
									HX_STACK_LINE(496)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(496)
									o->outer = null();
								}
								HX_STACK_LINE(496)
								o->_isimmutable = null();
								HX_STACK_LINE(496)
								o->_validate = null();
								HX_STACK_LINE(496)
								o->_invalidate = null();
							}
							HX_STACK_LINE(496)
							::zpp_nape::geom::ZPP_Vec2 tmp11 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(496)
							o->next = tmp11;
							HX_STACK_LINE(496)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(497)
					true;
				}
				else{
					HX_STACK_LINE(500)
					false;
				}
			}
		}
		else{
			HX_STACK_LINE(505)
			::zpp_nape::util::ZPP_Debug tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(505)
			::nape::geom::Mat23 tmp5 = tmp4->xform->outer;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(505)
			::nape::geom::Vec2 tmp6 = p0;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(505)
			::nape::geom::Vec2 tmp7 = tmp5->transform(tmp6,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(505)
			::nape::geom::Vec2 v = tmp7;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(506)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(506)
			{
				HX_STACK_LINE(506)
				{
					HX_STACK_LINE(506)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(506)
					bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(506)
					if ((tmp9)){
						HX_STACK_LINE(506)
						_this->_validate();
					}
				}
				HX_STACK_LINE(506)
				tmp8 = v->zpp_inner->x;
			}
			HX_STACK_LINE(506)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(506)
			{
				HX_STACK_LINE(506)
				{
					HX_STACK_LINE(506)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(506)
					bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(506)
					if ((tmp10)){
						HX_STACK_LINE(506)
						_this->_validate();
					}
				}
				HX_STACK_LINE(506)
				tmp9 = v->zpp_inner->y;
			}
			HX_STACK_LINE(506)
			g->moveTo(tmp8,tmp9);
			HX_STACK_LINE(507)
			{
				HX_STACK_LINE(507)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(507)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(507)
				v->zpp_inner = null();
				HX_STACK_LINE(507)
				{
					HX_STACK_LINE(507)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(507)
					::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(507)
					o->zpp_pool = tmp10;
					HX_STACK_LINE(507)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(507)
				{
					HX_STACK_LINE(507)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(507)
					{
						HX_STACK_LINE(507)
						bool tmp10 = (o->outer != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(507)
						if ((tmp10)){
							HX_STACK_LINE(507)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(507)
							o->outer = null();
						}
						HX_STACK_LINE(507)
						o->_isimmutable = null();
						HX_STACK_LINE(507)
						o->_validate = null();
						HX_STACK_LINE(507)
						o->_invalidate = null();
					}
					HX_STACK_LINE(507)
					::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(507)
					o->next = tmp10;
					HX_STACK_LINE(507)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(508)
			::zpp_nape::util::ZPP_Debug tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(508)
			::nape::geom::Mat23 tmp11 = tmp10->xform->outer;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(508)
			::nape::geom::Vec2 tmp12 = p1;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(508)
			::nape::geom::Vec2 tmp13 = tmp11->transform(tmp12,null(),null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(508)
			v = tmp13;
			HX_STACK_LINE(509)
			Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(509)
			{
				HX_STACK_LINE(509)
				{
					HX_STACK_LINE(509)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(509)
					bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(509)
					if ((tmp15)){
						HX_STACK_LINE(509)
						_this->_validate();
					}
				}
				HX_STACK_LINE(509)
				tmp14 = v->zpp_inner->x;
			}
			HX_STACK_LINE(509)
			Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(509)
			{
				HX_STACK_LINE(509)
				{
					HX_STACK_LINE(509)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(509)
					bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(509)
					if ((tmp16)){
						HX_STACK_LINE(509)
						_this->_validate();
					}
				}
				HX_STACK_LINE(509)
				tmp15 = v->zpp_inner->y;
			}
			HX_STACK_LINE(509)
			g->lineTo(tmp14,tmp15);
			HX_STACK_LINE(510)
			{
				HX_STACK_LINE(510)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(510)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(510)
				v->zpp_inner = null();
				HX_STACK_LINE(510)
				{
					HX_STACK_LINE(510)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(510)
					::nape::geom::Vec2 tmp16 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(510)
					o->zpp_pool = tmp16;
					HX_STACK_LINE(510)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(510)
				{
					HX_STACK_LINE(510)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(510)
					{
						HX_STACK_LINE(510)
						bool tmp16 = (o->outer != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(510)
						if ((tmp16)){
							HX_STACK_LINE(510)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(510)
							o->outer = null();
						}
						HX_STACK_LINE(510)
						o->_isimmutable = null();
						HX_STACK_LINE(510)
						o->_validate = null();
						HX_STACK_LINE(510)
						o->_invalidate = null();
					}
					HX_STACK_LINE(510)
					::zpp_nape::geom::ZPP_Vec2 tmp16 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(510)
					o->next = tmp16;
					HX_STACK_LINE(510)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(511)
			::zpp_nape::util::ZPP_Debug tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(511)
			::nape::geom::Mat23 tmp17 = tmp16->xform->outer;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(511)
			::nape::geom::Vec2 tmp18 = p2;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(511)
			::nape::geom::Vec2 tmp19 = tmp17->transform(tmp18,null(),null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(511)
			v = tmp19;
			HX_STACK_LINE(512)
			Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(512)
			{
				HX_STACK_LINE(512)
				{
					HX_STACK_LINE(512)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(512)
					bool tmp21 = (_this->_validate != null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(512)
					if ((tmp21)){
						HX_STACK_LINE(512)
						_this->_validate();
					}
				}
				HX_STACK_LINE(512)
				tmp20 = v->zpp_inner->x;
			}
			HX_STACK_LINE(512)
			Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(512)
			{
				HX_STACK_LINE(512)
				{
					HX_STACK_LINE(512)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(512)
					bool tmp22 = (_this->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(512)
					if ((tmp22)){
						HX_STACK_LINE(512)
						_this->_validate();
					}
				}
				HX_STACK_LINE(512)
				tmp21 = v->zpp_inner->y;
			}
			HX_STACK_LINE(512)
			g->lineTo(tmp20,tmp21);
			HX_STACK_LINE(513)
			{
				HX_STACK_LINE(513)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(513)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(513)
				v->zpp_inner = null();
				HX_STACK_LINE(513)
				{
					HX_STACK_LINE(513)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(513)
					::nape::geom::Vec2 tmp22 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(513)
					o->zpp_pool = tmp22;
					HX_STACK_LINE(513)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(513)
				{
					HX_STACK_LINE(513)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(513)
					{
						HX_STACK_LINE(513)
						bool tmp22 = (o->outer != null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(513)
						if ((tmp22)){
							HX_STACK_LINE(513)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(513)
							o->outer = null();
						}
						HX_STACK_LINE(513)
						o->_isimmutable = null();
						HX_STACK_LINE(513)
						o->_validate = null();
						HX_STACK_LINE(513)
						o->_invalidate = null();
					}
					HX_STACK_LINE(513)
					::zpp_nape::geom::ZPP_Vec2 tmp22 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(513)
					o->next = tmp22;
					HX_STACK_LINE(513)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(515)
		g->endFill();
	}
return null();
}


Void ShapeDebug_obj::drawFilledCircle( ::nape::geom::Vec2 position,Float radius,int colour){
{
		HX_STACK_FRAME("nape.util.ShapeDebug","drawFilledCircle",0xa41f0fac,"nape.util.ShapeDebug.drawFilledCircle","nape/util/ShapeDebug.hx",520,0xfa2f3866)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_ARG(colour,"colour")
		HX_STACK_LINE(533)
		::zpp_nape::util::ZPP_ShapeDebug tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(533)
		::openfl::_legacy::display::Graphics g = tmp->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(534)
		g->lineStyle((int)0,(int)0,(int)0,null(),null(),null(),null(),null());
		HX_STACK_LINE(535)
		int tmp1 = (int(colour) & int((int)16777215));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(535)
		g->beginFill(tmp1,(int)1);
		HX_STACK_LINE(536)
		::zpp_nape::util::ZPP_Debug tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(536)
		bool tmp3 = tmp2->xnull;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(536)
		if ((tmp3)){
			HX_STACK_LINE(537)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(537)
			{
				HX_STACK_LINE(537)
				{
					HX_STACK_LINE(537)
					::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(537)
					bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(537)
					if ((tmp5)){
						HX_STACK_LINE(537)
						_this->_validate();
					}
				}
				HX_STACK_LINE(537)
				tmp4 = position->zpp_inner->x;
			}
			HX_STACK_LINE(537)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(537)
			{
				HX_STACK_LINE(537)
				{
					HX_STACK_LINE(537)
					::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(537)
					bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(537)
					if ((tmp6)){
						HX_STACK_LINE(537)
						_this->_validate();
					}
				}
				HX_STACK_LINE(537)
				tmp5 = position->zpp_inner->y;
			}
			HX_STACK_LINE(537)
			Float tmp6 = radius;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(537)
			g->drawCircle(tmp4,tmp5,tmp6);
			HX_STACK_LINE(538)
			{
				HX_STACK_LINE(539)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(540)
				tmp7 = position->zpp_inner->weak;
				HX_STACK_LINE(539)
				if ((tmp7)){
					HX_STACK_LINE(542)
					{
						HX_STACK_LINE(542)
						::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(542)
						position->zpp_inner->outer = null();
						HX_STACK_LINE(542)
						position->zpp_inner = null();
						HX_STACK_LINE(542)
						{
							HX_STACK_LINE(542)
							::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(542)
							::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(542)
							o->zpp_pool = tmp8;
							HX_STACK_LINE(542)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(542)
						{
							HX_STACK_LINE(542)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(542)
							{
								HX_STACK_LINE(542)
								bool tmp8 = (o->outer != null());		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(542)
								if ((tmp8)){
									HX_STACK_LINE(542)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(542)
									o->outer = null();
								}
								HX_STACK_LINE(542)
								o->_isimmutable = null();
								HX_STACK_LINE(542)
								o->_validate = null();
								HX_STACK_LINE(542)
								o->_invalidate = null();
							}
							HX_STACK_LINE(542)
							::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(542)
							o->next = tmp8;
							HX_STACK_LINE(542)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(543)
					true;
				}
				else{
					HX_STACK_LINE(546)
					false;
				}
			}
		}
		else{
			HX_STACK_LINE(551)
			::zpp_nape::util::ZPP_Debug tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(551)
			::nape::geom::Mat23 tmp5 = tmp4->xform->outer;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(551)
			::nape::geom::Vec2 tmp6 = position;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(551)
			::nape::geom::Vec2 tmp7 = tmp5->transform(tmp6,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(551)
			::nape::geom::Vec2 v = tmp7;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(552)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(552)
			{
				HX_STACK_LINE(552)
				{
					HX_STACK_LINE(552)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(552)
					bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(552)
					if ((tmp9)){
						HX_STACK_LINE(552)
						_this->_validate();
					}
				}
				HX_STACK_LINE(552)
				tmp8 = v->zpp_inner->x;
			}
			HX_STACK_LINE(552)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(552)
			{
				HX_STACK_LINE(552)
				{
					HX_STACK_LINE(552)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(552)
					bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(552)
					if ((tmp10)){
						HX_STACK_LINE(552)
						_this->_validate();
					}
				}
				HX_STACK_LINE(552)
				tmp9 = v->zpp_inner->y;
			}
			HX_STACK_LINE(552)
			Float tmp10 = radius;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(552)
			::zpp_nape::util::ZPP_Debug tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(552)
			Float tmp12 = tmp11->xdet;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(552)
			Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(552)
			g->drawCircle(tmp8,tmp9,tmp13);
			HX_STACK_LINE(553)
			{
				HX_STACK_LINE(553)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(553)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(553)
				v->zpp_inner = null();
				HX_STACK_LINE(553)
				{
					HX_STACK_LINE(553)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(553)
					::nape::geom::Vec2 tmp14 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(553)
					o->zpp_pool = tmp14;
					HX_STACK_LINE(553)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(553)
				{
					HX_STACK_LINE(553)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(553)
					{
						HX_STACK_LINE(553)
						bool tmp14 = (o->outer != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(553)
						if ((tmp14)){
							HX_STACK_LINE(553)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(553)
							o->outer = null();
						}
						HX_STACK_LINE(553)
						o->_isimmutable = null();
						HX_STACK_LINE(553)
						o->_validate = null();
						HX_STACK_LINE(553)
						o->_invalidate = null();
					}
					HX_STACK_LINE(553)
					::zpp_nape::geom::ZPP_Vec2 tmp14 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(553)
					o->next = tmp14;
					HX_STACK_LINE(553)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(555)
		g->endFill();
	}
return null();
}


Void ShapeDebug_obj::drawPolygon( Dynamic polygon,int colour){
{
		HX_STACK_FRAME("nape.util.ShapeDebug","drawPolygon",0xf89f6a60,"nape.util.ShapeDebug.drawPolygon","nape/util/ShapeDebug.hx",560,0xfa2f3866)
		HX_STACK_THIS(this)
		HX_STACK_ARG(polygon,"polygon")
		HX_STACK_ARG(colour,"colour")
		HX_STACK_LINE(567)
		::zpp_nape::util::ZPP_ShapeDebug tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(567)
		::openfl::_legacy::display::Graphics g = tmp->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(568)
		Float tmp1 = this->thickness;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(568)
		int tmp2 = (int(colour) & int((int)16777215));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(568)
		g->lineStyle(tmp1,tmp2,((Float)1.0),null(),null(),null(),null(),null());
		HX_STACK_LINE(569)
		::nape::geom::Vec2 fst = null();		HX_STACK_VAR(fst,"fst");
		HX_STACK_LINE(570)
		bool fsttime = true;		HX_STACK_VAR(fsttime,"fsttime");
		HX_STACK_LINE(571)
		::zpp_nape::util::ZPP_Debug tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(571)
		bool tmp4 = tmp3->xnull;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(571)
		if ((tmp4)){
			HX_STACK_LINE(572)
			{
				HX_STACK_LINE(573)
				Dynamic tmp5 = polygon;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(573)
				bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(573)
				if ((tmp6)){
					HX_STACK_LINE(574)
					cpp::ArrayBase lv = polygon;		HX_STACK_VAR(lv,"lv");
					HX_STACK_LINE(575)
					{
						HX_STACK_LINE(575)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(575)
						while((true)){
							HX_STACK_LINE(575)
							bool tmp7 = (_g < lv->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(575)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(575)
							if ((tmp8)){
								HX_STACK_LINE(575)
								break;
							}
							HX_STACK_LINE(575)
							Dynamic tmp9 = lv->__GetItem(_g);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(575)
							Dynamic vite = tmp9;		HX_STACK_VAR(vite,"vite");
							HX_STACK_LINE(575)
							++(_g);
							HX_STACK_LINE(582)
							::nape::geom::Vec2 p = vite;		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(588)
							{
								HX_STACK_LINE(589)
								bool tmp10 = fsttime;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(589)
								if ((tmp10)){
									HX_STACK_LINE(590)
									::nape::geom::Vec2 tmp11;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(590)
									{
										HX_STACK_LINE(590)
										bool weak = false;		HX_STACK_VAR(weak,"weak");
										HX_STACK_LINE(590)
										{
											HX_STACK_LINE(590)
											Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(590)
											{
												HX_STACK_LINE(590)
												{
													HX_STACK_LINE(590)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(590)
													bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
													HX_STACK_LINE(590)
													if ((tmp13)){
														HX_STACK_LINE(590)
														_this->_validate();
													}
												}
												HX_STACK_LINE(590)
												tmp12 = p->zpp_inner->x;
											}
											HX_STACK_LINE(590)
											Float x = tmp12;		HX_STACK_VAR(x,"x");
											HX_STACK_LINE(590)
											Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(590)
											{
												HX_STACK_LINE(590)
												{
													HX_STACK_LINE(590)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(590)
													bool tmp14 = (_this->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
													HX_STACK_LINE(590)
													if ((tmp14)){
														HX_STACK_LINE(590)
														_this->_validate();
													}
												}
												HX_STACK_LINE(590)
												tmp13 = p->zpp_inner->y;
											}
											HX_STACK_LINE(590)
											Float y = tmp13;		HX_STACK_VAR(y,"y");
											HX_STACK_LINE(590)
											::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(590)
											{
												HX_STACK_LINE(590)
												::nape::geom::Vec2 tmp14 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(590)
												bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(590)
												if ((tmp15)){
													HX_STACK_LINE(590)
													::nape::geom::Vec2 tmp16 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(590)
													ret = tmp16;
												}
												else{
													HX_STACK_LINE(590)
													::nape::geom::Vec2 tmp16 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(590)
													ret = tmp16;
													HX_STACK_LINE(590)
													::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
													HX_STACK_LINE(590)
													ret->zpp_pool = null();
												}
											}
											HX_STACK_LINE(590)
											bool tmp14 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(590)
											if ((tmp14)){
												HX_STACK_LINE(590)
												::zpp_nape::geom::ZPP_Vec2 tmp15;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(590)
												{
													HX_STACK_LINE(590)
													bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
													HX_STACK_LINE(590)
													::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(590)
													{
														HX_STACK_LINE(590)
														::zpp_nape::geom::ZPP_Vec2 tmp16 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
														HX_STACK_LINE(590)
														bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
														HX_STACK_LINE(590)
														if ((tmp17)){
															HX_STACK_LINE(590)
															::zpp_nape::geom::ZPP_Vec2 tmp18 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
															HX_STACK_LINE(590)
															ret1 = tmp18;
														}
														else{
															HX_STACK_LINE(590)
															::zpp_nape::geom::ZPP_Vec2 tmp18 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
															HX_STACK_LINE(590)
															ret1 = tmp18;
															HX_STACK_LINE(590)
															::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(590)
															ret1->next = null();
														}
														HX_STACK_LINE(590)
														ret1->weak = false;
													}
													HX_STACK_LINE(590)
													ret1->_immutable = immutable;
													HX_STACK_LINE(590)
													{
														HX_STACK_LINE(590)
														ret1->x = x;
														HX_STACK_LINE(590)
														ret1->y = y;
														HX_STACK_LINE(590)
														{
														}
													}
													HX_STACK_LINE(590)
													tmp15 = ret1;
												}
												HX_STACK_LINE(590)
												ret->zpp_inner = tmp15;
												HX_STACK_LINE(590)
												ret->zpp_inner->outer = ret;
											}
											else{
												HX_STACK_LINE(590)
												Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(590)
												{
													HX_STACK_LINE(590)
													{
														HX_STACK_LINE(590)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(590)
														bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
														HX_STACK_LINE(590)
														if ((tmp16)){
															HX_STACK_LINE(590)
															_this->_validate();
														}
													}
													HX_STACK_LINE(590)
													tmp15 = ret->zpp_inner->x;
												}
												HX_STACK_LINE(590)
												Float tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(590)
												bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(590)
												bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(590)
												if ((tmp17)){
													HX_STACK_LINE(590)
													Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(590)
													{
														HX_STACK_LINE(590)
														{
															HX_STACK_LINE(590)
															::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(590)
															bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(590)
															bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(590)
															bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(590)
															if ((tmp22)){
																HX_STACK_LINE(590)
																_this->_validate();
															}
														}
														HX_STACK_LINE(590)
														Float tmp20 = ret->zpp_inner->y;		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(590)
														tmp19 = tmp20;
													}
													HX_STACK_LINE(590)
													Float tmp20 = y;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(590)
													tmp18 = (tmp19 == tmp20);
												}
												else{
													HX_STACK_LINE(590)
													tmp18 = false;
												}
												HX_STACK_LINE(590)
												bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(590)
												if ((tmp19)){
													HX_STACK_LINE(590)
													{
														HX_STACK_LINE(590)
														ret->zpp_inner->x = x;
														HX_STACK_LINE(590)
														ret->zpp_inner->y = y;
														HX_STACK_LINE(590)
														{
														}
													}
													HX_STACK_LINE(590)
													{
														HX_STACK_LINE(590)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(590)
														bool tmp20 = (_this->_invalidate != null());		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(590)
														if ((tmp20)){
															HX_STACK_LINE(590)
															::zpp_nape::geom::ZPP_Vec2 tmp21 = _this;		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(590)
															_this->_invalidate(tmp21);
														}
													}
												}
												HX_STACK_LINE(590)
												ret;
											}
											HX_STACK_LINE(590)
											ret->zpp_inner->weak = weak;
											HX_STACK_LINE(590)
											tmp11 = ret;
										}
									}
									HX_STACK_LINE(590)
									fst = tmp11;
									HX_STACK_LINE(591)
									Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(591)
									{
										HX_STACK_LINE(591)
										{
											HX_STACK_LINE(591)
											::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(591)
											bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(591)
											if ((tmp13)){
												HX_STACK_LINE(591)
												_this->_validate();
											}
										}
										HX_STACK_LINE(591)
										tmp12 = p->zpp_inner->x;
									}
									HX_STACK_LINE(591)
									Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(591)
									{
										HX_STACK_LINE(591)
										{
											HX_STACK_LINE(591)
											::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(591)
											bool tmp14 = (_this->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(591)
											if ((tmp14)){
												HX_STACK_LINE(591)
												_this->_validate();
											}
										}
										HX_STACK_LINE(591)
										tmp13 = p->zpp_inner->y;
									}
									HX_STACK_LINE(591)
									g->moveTo(tmp12,tmp13);
								}
								else{
									HX_STACK_LINE(593)
									Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(593)
									{
										HX_STACK_LINE(593)
										{
											HX_STACK_LINE(593)
											::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(593)
											bool tmp12 = (_this->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(593)
											if ((tmp12)){
												HX_STACK_LINE(593)
												_this->_validate();
											}
										}
										HX_STACK_LINE(593)
										tmp11 = p->zpp_inner->x;
									}
									HX_STACK_LINE(593)
									Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(593)
									{
										HX_STACK_LINE(593)
										{
											HX_STACK_LINE(593)
											::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(593)
											bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(593)
											if ((tmp13)){
												HX_STACK_LINE(593)
												_this->_validate();
											}
										}
										HX_STACK_LINE(593)
										tmp12 = p->zpp_inner->y;
									}
									HX_STACK_LINE(593)
									g->lineTo(tmp11,tmp12);
								}
								HX_STACK_LINE(594)
								fsttime = false;
							}
						}
					}
				}
				else{
					HX_STACK_LINE(621)
					Dynamic tmp7 = polygon;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(621)
					bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::nape::geom::Vec2List >());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(621)
					if ((tmp8)){
						HX_STACK_LINE(622)
						::nape::geom::Vec2List lv = polygon;		HX_STACK_VAR(lv,"lv");
						HX_STACK_LINE(623)
						{
							HX_STACK_LINE(623)
							::nape::geom::Vec2Iterator tmp9 = lv->iterator();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(623)
							::nape::geom::Vec2Iterator _g = tmp9;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(623)
							while((true)){
								HX_STACK_LINE(623)
								bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(623)
								{
									HX_STACK_LINE(623)
									::zpp_nape::util::ZPP_Vec2List tmp11 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(623)
									tmp11->valmod();
									HX_STACK_LINE(623)
									int tmp12 = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(623)
									int length = tmp12;		HX_STACK_VAR(length,"length");
									HX_STACK_LINE(623)
									_g->zpp_critical = true;
									HX_STACK_LINE(623)
									bool tmp13 = (_g->zpp_i < length);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(623)
									if ((tmp13)){
										HX_STACK_LINE(623)
										tmp10 = true;
									}
									else{
										HX_STACK_LINE(623)
										{
											HX_STACK_LINE(623)
											::nape::geom::Vec2Iterator tmp14 = ::nape::geom::Vec2Iterator_obj::zpp_pool;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(623)
											_g->zpp_next = tmp14;
											HX_STACK_LINE(623)
											::nape::geom::Vec2Iterator_obj::zpp_pool = _g;
											HX_STACK_LINE(623)
											_g->zpp_inner = null();
										}
										HX_STACK_LINE(623)
										tmp10 = false;
									}
								}
								HX_STACK_LINE(623)
								bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(623)
								if ((tmp11)){
									HX_STACK_LINE(623)
									break;
								}
								HX_STACK_LINE(623)
								::nape::geom::Vec2 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(623)
								{
									HX_STACK_LINE(623)
									_g->zpp_critical = false;
									HX_STACK_LINE(623)
									int tmp13 = (_g->zpp_i)++;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(623)
									tmp12 = _g->zpp_inner->at(tmp13);
								}
								HX_STACK_LINE(623)
								::nape::geom::Vec2 p = tmp12;		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(632)
								{
									HX_STACK_LINE(633)
									bool tmp13 = fsttime;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(633)
									if ((tmp13)){
										HX_STACK_LINE(634)
										::nape::geom::Vec2 tmp14;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(634)
										{
											HX_STACK_LINE(634)
											bool weak = false;		HX_STACK_VAR(weak,"weak");
											HX_STACK_LINE(634)
											{
												HX_STACK_LINE(634)
												Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(634)
												{
													HX_STACK_LINE(634)
													{
														HX_STACK_LINE(634)
														::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(634)
														bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
														HX_STACK_LINE(634)
														if ((tmp16)){
															HX_STACK_LINE(634)
															_this->_validate();
														}
													}
													HX_STACK_LINE(634)
													tmp15 = p->zpp_inner->x;
												}
												HX_STACK_LINE(634)
												Float x = tmp15;		HX_STACK_VAR(x,"x");
												HX_STACK_LINE(634)
												Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(634)
												{
													HX_STACK_LINE(634)
													{
														HX_STACK_LINE(634)
														::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(634)
														bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
														HX_STACK_LINE(634)
														if ((tmp17)){
															HX_STACK_LINE(634)
															_this->_validate();
														}
													}
													HX_STACK_LINE(634)
													tmp16 = p->zpp_inner->y;
												}
												HX_STACK_LINE(634)
												Float y = tmp16;		HX_STACK_VAR(y,"y");
												HX_STACK_LINE(634)
												::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(634)
												{
													HX_STACK_LINE(634)
													::nape::geom::Vec2 tmp17 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(634)
													bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(634)
													if ((tmp18)){
														HX_STACK_LINE(634)
														::nape::geom::Vec2 tmp19 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(634)
														ret = tmp19;
													}
													else{
														HX_STACK_LINE(634)
														::nape::geom::Vec2 tmp19 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(634)
														ret = tmp19;
														HX_STACK_LINE(634)
														::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
														HX_STACK_LINE(634)
														ret->zpp_pool = null();
													}
												}
												HX_STACK_LINE(634)
												bool tmp17 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(634)
												if ((tmp17)){
													HX_STACK_LINE(634)
													::zpp_nape::geom::ZPP_Vec2 tmp18;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(634)
													{
														HX_STACK_LINE(634)
														bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
														HX_STACK_LINE(634)
														::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(634)
														{
															HX_STACK_LINE(634)
															::zpp_nape::geom::ZPP_Vec2 tmp19 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp19,"tmp19");
															HX_STACK_LINE(634)
															bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(634)
															if ((tmp20)){
																HX_STACK_LINE(634)
																::zpp_nape::geom::ZPP_Vec2 tmp21 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp21,"tmp21");
																HX_STACK_LINE(634)
																ret1 = tmp21;
															}
															else{
																HX_STACK_LINE(634)
																::zpp_nape::geom::ZPP_Vec2 tmp21 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp21,"tmp21");
																HX_STACK_LINE(634)
																ret1 = tmp21;
																HX_STACK_LINE(634)
																::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(634)
																ret1->next = null();
															}
															HX_STACK_LINE(634)
															ret1->weak = false;
														}
														HX_STACK_LINE(634)
														ret1->_immutable = immutable;
														HX_STACK_LINE(634)
														{
															HX_STACK_LINE(634)
															ret1->x = x;
															HX_STACK_LINE(634)
															ret1->y = y;
															HX_STACK_LINE(634)
															{
															}
														}
														HX_STACK_LINE(634)
														tmp18 = ret1;
													}
													HX_STACK_LINE(634)
													ret->zpp_inner = tmp18;
													HX_STACK_LINE(634)
													ret->zpp_inner->outer = ret;
												}
												else{
													HX_STACK_LINE(634)
													Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(634)
													{
														HX_STACK_LINE(634)
														{
															HX_STACK_LINE(634)
															::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(634)
															bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
															HX_STACK_LINE(634)
															if ((tmp19)){
																HX_STACK_LINE(634)
																_this->_validate();
															}
														}
														HX_STACK_LINE(634)
														tmp18 = ret->zpp_inner->x;
													}
													HX_STACK_LINE(634)
													Float tmp19 = x;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(634)
													bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(634)
													bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(634)
													if ((tmp20)){
														HX_STACK_LINE(634)
														Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(634)
														{
															HX_STACK_LINE(634)
															{
																HX_STACK_LINE(634)
																::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(634)
																bool tmp23 = (_this->_validate != null());		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(634)
																bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(634)
																bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(634)
																if ((tmp25)){
																	HX_STACK_LINE(634)
																	_this->_validate();
																}
															}
															HX_STACK_LINE(634)
															Float tmp23 = ret->zpp_inner->y;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(634)
															tmp22 = tmp23;
														}
														HX_STACK_LINE(634)
														Float tmp23 = y;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(634)
														tmp21 = (tmp22 == tmp23);
													}
													else{
														HX_STACK_LINE(634)
														tmp21 = false;
													}
													HX_STACK_LINE(634)
													bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(634)
													if ((tmp22)){
														HX_STACK_LINE(634)
														{
															HX_STACK_LINE(634)
															ret->zpp_inner->x = x;
															HX_STACK_LINE(634)
															ret->zpp_inner->y = y;
															HX_STACK_LINE(634)
															{
															}
														}
														HX_STACK_LINE(634)
														{
															HX_STACK_LINE(634)
															::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(634)
															bool tmp23 = (_this->_invalidate != null());		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(634)
															if ((tmp23)){
																HX_STACK_LINE(634)
																::zpp_nape::geom::ZPP_Vec2 tmp24 = _this;		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(634)
																_this->_invalidate(tmp24);
															}
														}
													}
													HX_STACK_LINE(634)
													ret;
												}
												HX_STACK_LINE(634)
												ret->zpp_inner->weak = weak;
												HX_STACK_LINE(634)
												tmp14 = ret;
											}
										}
										HX_STACK_LINE(634)
										fst = tmp14;
										HX_STACK_LINE(635)
										Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(635)
										{
											HX_STACK_LINE(635)
											{
												HX_STACK_LINE(635)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(635)
												bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(635)
												if ((tmp16)){
													HX_STACK_LINE(635)
													_this->_validate();
												}
											}
											HX_STACK_LINE(635)
											tmp15 = p->zpp_inner->x;
										}
										HX_STACK_LINE(635)
										Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(635)
										{
											HX_STACK_LINE(635)
											{
												HX_STACK_LINE(635)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(635)
												bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(635)
												if ((tmp17)){
													HX_STACK_LINE(635)
													_this->_validate();
												}
											}
											HX_STACK_LINE(635)
											tmp16 = p->zpp_inner->y;
										}
										HX_STACK_LINE(635)
										g->moveTo(tmp15,tmp16);
									}
									else{
										HX_STACK_LINE(637)
										Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(637)
										{
											HX_STACK_LINE(637)
											{
												HX_STACK_LINE(637)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(637)
												bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(637)
												if ((tmp15)){
													HX_STACK_LINE(637)
													_this->_validate();
												}
											}
											HX_STACK_LINE(637)
											tmp14 = p->zpp_inner->x;
										}
										HX_STACK_LINE(637)
										Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(637)
										{
											HX_STACK_LINE(637)
											{
												HX_STACK_LINE(637)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(637)
												bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(637)
												if ((tmp16)){
													HX_STACK_LINE(637)
													_this->_validate();
												}
											}
											HX_STACK_LINE(637)
											tmp15 = p->zpp_inner->y;
										}
										HX_STACK_LINE(637)
										g->lineTo(tmp14,tmp15);
									}
									HX_STACK_LINE(638)
									fsttime = false;
								}
							}
						}
					}
					else{
						HX_STACK_LINE(642)
						Dynamic tmp9 = polygon;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(642)
						bool tmp10 = ::Std_obj::is(tmp9,hx::ClassOf< ::nape::geom::GeomPoly >());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(642)
						if ((tmp10)){
							HX_STACK_LINE(643)
							::nape::geom::GeomPoly lv = polygon;		HX_STACK_VAR(lv,"lv");
							HX_STACK_LINE(649)
							::zpp_nape::geom::ZPP_GeomVert tmp11 = lv->zpp_inner->vertices;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(649)
							::zpp_nape::geom::ZPP_GeomVert verts = tmp11;		HX_STACK_VAR(verts,"verts");
							HX_STACK_LINE(650)
							bool tmp12 = (verts != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(650)
							if ((tmp12)){
								HX_STACK_LINE(651)
								::zpp_nape::geom::ZPP_GeomVert vite = verts;		HX_STACK_VAR(vite,"vite");
								HX_STACK_LINE(652)
								while((true)){
									HX_STACK_LINE(653)
									::nape::geom::Vec2 tmp13;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(653)
									{
										HX_STACK_LINE(653)
										Float x = vite->x;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(653)
										Float y = vite->y;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(653)
										bool weak = false;		HX_STACK_VAR(weak,"weak");
										HX_STACK_LINE(653)
										::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(653)
										{
											HX_STACK_LINE(653)
											::nape::geom::Vec2 tmp14 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(653)
											bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(653)
											if ((tmp15)){
												HX_STACK_LINE(653)
												::nape::geom::Vec2 tmp16 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(653)
												ret = tmp16;
											}
											else{
												HX_STACK_LINE(653)
												::nape::geom::Vec2 tmp16 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(653)
												ret = tmp16;
												HX_STACK_LINE(653)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
												HX_STACK_LINE(653)
												ret->zpp_pool = null();
											}
										}
										HX_STACK_LINE(653)
										bool tmp14 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(653)
										if ((tmp14)){
											HX_STACK_LINE(653)
											::zpp_nape::geom::ZPP_Vec2 tmp15;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(653)
											{
												HX_STACK_LINE(653)
												bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
												HX_STACK_LINE(653)
												::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(653)
												{
													HX_STACK_LINE(653)
													::zpp_nape::geom::ZPP_Vec2 tmp16 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(653)
													bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(653)
													if ((tmp17)){
														HX_STACK_LINE(653)
														::zpp_nape::geom::ZPP_Vec2 tmp18 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(653)
														ret1 = tmp18;
													}
													else{
														HX_STACK_LINE(653)
														::zpp_nape::geom::ZPP_Vec2 tmp18 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(653)
														ret1 = tmp18;
														HX_STACK_LINE(653)
														::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(653)
														ret1->next = null();
													}
													HX_STACK_LINE(653)
													ret1->weak = false;
												}
												HX_STACK_LINE(653)
												ret1->_immutable = immutable;
												HX_STACK_LINE(653)
												{
													HX_STACK_LINE(653)
													ret1->x = x;
													HX_STACK_LINE(653)
													ret1->y = y;
													HX_STACK_LINE(653)
													{
													}
												}
												HX_STACK_LINE(653)
												tmp15 = ret1;
											}
											HX_STACK_LINE(653)
											ret->zpp_inner = tmp15;
											HX_STACK_LINE(653)
											ret->zpp_inner->outer = ret;
										}
										else{
											HX_STACK_LINE(653)
											Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(653)
											{
												HX_STACK_LINE(653)
												{
													HX_STACK_LINE(653)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(653)
													bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(653)
													if ((tmp16)){
														HX_STACK_LINE(653)
														_this->_validate();
													}
												}
												HX_STACK_LINE(653)
												tmp15 = ret->zpp_inner->x;
											}
											HX_STACK_LINE(653)
											Float tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(653)
											bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(653)
											bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(653)
											if ((tmp17)){
												HX_STACK_LINE(653)
												Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(653)
												{
													HX_STACK_LINE(653)
													{
														HX_STACK_LINE(653)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(653)
														bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(653)
														bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(653)
														bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(653)
														if ((tmp22)){
															HX_STACK_LINE(653)
															_this->_validate();
														}
													}
													HX_STACK_LINE(653)
													Float tmp20 = ret->zpp_inner->y;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(653)
													tmp19 = tmp20;
												}
												HX_STACK_LINE(653)
												Float tmp20 = y;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(653)
												tmp18 = (tmp19 == tmp20);
											}
											else{
												HX_STACK_LINE(653)
												tmp18 = false;
											}
											HX_STACK_LINE(653)
											bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(653)
											if ((tmp19)){
												HX_STACK_LINE(653)
												{
													HX_STACK_LINE(653)
													ret->zpp_inner->x = x;
													HX_STACK_LINE(653)
													ret->zpp_inner->y = y;
													HX_STACK_LINE(653)
													{
													}
												}
												HX_STACK_LINE(653)
												{
													HX_STACK_LINE(653)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(653)
													bool tmp20 = (_this->_invalidate != null());		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(653)
													if ((tmp20)){
														HX_STACK_LINE(653)
														::zpp_nape::geom::ZPP_Vec2 tmp21 = _this;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(653)
														_this->_invalidate(tmp21);
													}
												}
											}
											HX_STACK_LINE(653)
											ret;
										}
										HX_STACK_LINE(653)
										ret->zpp_inner->weak = weak;
										HX_STACK_LINE(653)
										tmp13 = ret;
									}
									HX_STACK_LINE(653)
									::nape::geom::Vec2 p = tmp13;		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(654)
									vite = vite->next;
									HX_STACK_LINE(655)
									{
										HX_STACK_LINE(656)
										bool tmp14 = fsttime;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(656)
										if ((tmp14)){
											HX_STACK_LINE(657)
											::nape::geom::Vec2 tmp15;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(657)
											{
												HX_STACK_LINE(657)
												bool weak = false;		HX_STACK_VAR(weak,"weak");
												HX_STACK_LINE(657)
												{
													HX_STACK_LINE(657)
													Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(657)
													{
														HX_STACK_LINE(657)
														{
															HX_STACK_LINE(657)
															::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(657)
															bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
															HX_STACK_LINE(657)
															if ((tmp17)){
																HX_STACK_LINE(657)
																_this->_validate();
															}
														}
														HX_STACK_LINE(657)
														tmp16 = p->zpp_inner->x;
													}
													HX_STACK_LINE(657)
													Float x = tmp16;		HX_STACK_VAR(x,"x");
													HX_STACK_LINE(657)
													Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(657)
													{
														HX_STACK_LINE(657)
														{
															HX_STACK_LINE(657)
															::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(657)
															bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
															HX_STACK_LINE(657)
															if ((tmp18)){
																HX_STACK_LINE(657)
																_this->_validate();
															}
														}
														HX_STACK_LINE(657)
														tmp17 = p->zpp_inner->y;
													}
													HX_STACK_LINE(657)
													Float y = tmp17;		HX_STACK_VAR(y,"y");
													HX_STACK_LINE(657)
													::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
													HX_STACK_LINE(657)
													{
														HX_STACK_LINE(657)
														::nape::geom::Vec2 tmp18 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(657)
														bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(657)
														if ((tmp19)){
															HX_STACK_LINE(657)
															::nape::geom::Vec2 tmp20 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(657)
															ret = tmp20;
														}
														else{
															HX_STACK_LINE(657)
															::nape::geom::Vec2 tmp20 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(657)
															ret = tmp20;
															HX_STACK_LINE(657)
															::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
															HX_STACK_LINE(657)
															ret->zpp_pool = null();
														}
													}
													HX_STACK_LINE(657)
													bool tmp18 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(657)
													if ((tmp18)){
														HX_STACK_LINE(657)
														::zpp_nape::geom::ZPP_Vec2 tmp19;		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(657)
														{
															HX_STACK_LINE(657)
															bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
															HX_STACK_LINE(657)
															::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(657)
															{
																HX_STACK_LINE(657)
																::zpp_nape::geom::ZPP_Vec2 tmp20 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(657)
																bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
																HX_STACK_LINE(657)
																if ((tmp21)){
																	HX_STACK_LINE(657)
																	::zpp_nape::geom::ZPP_Vec2 tmp22 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp22,"tmp22");
																	HX_STACK_LINE(657)
																	ret1 = tmp22;
																}
																else{
																	HX_STACK_LINE(657)
																	::zpp_nape::geom::ZPP_Vec2 tmp22 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp22,"tmp22");
																	HX_STACK_LINE(657)
																	ret1 = tmp22;
																	HX_STACK_LINE(657)
																	::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(657)
																	ret1->next = null();
																}
																HX_STACK_LINE(657)
																ret1->weak = false;
															}
															HX_STACK_LINE(657)
															ret1->_immutable = immutable;
															HX_STACK_LINE(657)
															{
																HX_STACK_LINE(657)
																ret1->x = x;
																HX_STACK_LINE(657)
																ret1->y = y;
																HX_STACK_LINE(657)
																{
																}
															}
															HX_STACK_LINE(657)
															tmp19 = ret1;
														}
														HX_STACK_LINE(657)
														ret->zpp_inner = tmp19;
														HX_STACK_LINE(657)
														ret->zpp_inner->outer = ret;
													}
													else{
														HX_STACK_LINE(657)
														Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(657)
														{
															HX_STACK_LINE(657)
															{
																HX_STACK_LINE(657)
																::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(657)
																bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(657)
																if ((tmp20)){
																	HX_STACK_LINE(657)
																	_this->_validate();
																}
															}
															HX_STACK_LINE(657)
															tmp19 = ret->zpp_inner->x;
														}
														HX_STACK_LINE(657)
														Float tmp20 = x;		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(657)
														bool tmp21 = (tmp19 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(657)
														bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(657)
														if ((tmp21)){
															HX_STACK_LINE(657)
															Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(657)
															{
																HX_STACK_LINE(657)
																{
																	HX_STACK_LINE(657)
																	::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(657)
																	bool tmp24 = (_this->_validate != null());		HX_STACK_VAR(tmp24,"tmp24");
																	HX_STACK_LINE(657)
																	bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
																	HX_STACK_LINE(657)
																	bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
																	HX_STACK_LINE(657)
																	if ((tmp26)){
																		HX_STACK_LINE(657)
																		_this->_validate();
																	}
																}
																HX_STACK_LINE(657)
																Float tmp24 = ret->zpp_inner->y;		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(657)
																tmp23 = tmp24;
															}
															HX_STACK_LINE(657)
															Float tmp24 = y;		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(657)
															tmp22 = (tmp23 == tmp24);
														}
														else{
															HX_STACK_LINE(657)
															tmp22 = false;
														}
														HX_STACK_LINE(657)
														bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(657)
														if ((tmp23)){
															HX_STACK_LINE(657)
															{
																HX_STACK_LINE(657)
																ret->zpp_inner->x = x;
																HX_STACK_LINE(657)
																ret->zpp_inner->y = y;
																HX_STACK_LINE(657)
																{
																}
															}
															HX_STACK_LINE(657)
															{
																HX_STACK_LINE(657)
																::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(657)
																bool tmp24 = (_this->_invalidate != null());		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(657)
																if ((tmp24)){
																	HX_STACK_LINE(657)
																	::zpp_nape::geom::ZPP_Vec2 tmp25 = _this;		HX_STACK_VAR(tmp25,"tmp25");
																	HX_STACK_LINE(657)
																	_this->_invalidate(tmp25);
																}
															}
														}
														HX_STACK_LINE(657)
														ret;
													}
													HX_STACK_LINE(657)
													ret->zpp_inner->weak = weak;
													HX_STACK_LINE(657)
													tmp15 = ret;
												}
											}
											HX_STACK_LINE(657)
											fst = tmp15;
											HX_STACK_LINE(658)
											Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(658)
											{
												HX_STACK_LINE(658)
												{
													HX_STACK_LINE(658)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(658)
													bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(658)
													if ((tmp17)){
														HX_STACK_LINE(658)
														_this->_validate();
													}
												}
												HX_STACK_LINE(658)
												tmp16 = p->zpp_inner->x;
											}
											HX_STACK_LINE(658)
											Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(658)
											{
												HX_STACK_LINE(658)
												{
													HX_STACK_LINE(658)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(658)
													bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(658)
													if ((tmp18)){
														HX_STACK_LINE(658)
														_this->_validate();
													}
												}
												HX_STACK_LINE(658)
												tmp17 = p->zpp_inner->y;
											}
											HX_STACK_LINE(658)
											g->moveTo(tmp16,tmp17);
										}
										else{
											HX_STACK_LINE(660)
											Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(660)
											{
												HX_STACK_LINE(660)
												{
													HX_STACK_LINE(660)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(660)
													bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(660)
													if ((tmp16)){
														HX_STACK_LINE(660)
														_this->_validate();
													}
												}
												HX_STACK_LINE(660)
												tmp15 = p->zpp_inner->x;
											}
											HX_STACK_LINE(660)
											Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(660)
											{
												HX_STACK_LINE(660)
												{
													HX_STACK_LINE(660)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(660)
													bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(660)
													if ((tmp17)){
														HX_STACK_LINE(660)
														_this->_validate();
													}
												}
												HX_STACK_LINE(660)
												tmp16 = p->zpp_inner->y;
											}
											HX_STACK_LINE(660)
											g->lineTo(tmp15,tmp16);
										}
										HX_STACK_LINE(661)
										fsttime = false;
									}
									HX_STACK_LINE(663)
									{
										HX_STACK_LINE(663)
										::zpp_nape::geom::ZPP_Vec2 inner = p->zpp_inner;		HX_STACK_VAR(inner,"inner");
										HX_STACK_LINE(663)
										p->zpp_inner->outer = null();
										HX_STACK_LINE(663)
										p->zpp_inner = null();
										HX_STACK_LINE(663)
										{
											HX_STACK_LINE(663)
											::nape::geom::Vec2 o = p;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(663)
											::nape::geom::Vec2 tmp14 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(663)
											o->zpp_pool = tmp14;
											HX_STACK_LINE(663)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
										}
										HX_STACK_LINE(663)
										{
											HX_STACK_LINE(663)
											::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(663)
											{
												HX_STACK_LINE(663)
												bool tmp14 = (o->outer != null());		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(663)
												if ((tmp14)){
													HX_STACK_LINE(663)
													o->outer->zpp_inner = null();
													HX_STACK_LINE(663)
													o->outer = null();
												}
												HX_STACK_LINE(663)
												o->_isimmutable = null();
												HX_STACK_LINE(663)
												o->_validate = null();
												HX_STACK_LINE(663)
												o->_invalidate = null();
											}
											HX_STACK_LINE(663)
											::zpp_nape::geom::ZPP_Vec2 tmp14 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(663)
											o->next = tmp14;
											HX_STACK_LINE(663)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
										}
									}
									HX_STACK_LINE(665)
									bool tmp14 = (vite != verts);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(665)
									bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(652)
									if ((tmp15)){
										HX_STACK_LINE(652)
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
			HX_STACK_LINE(674)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(674)
			{
				HX_STACK_LINE(674)
				{
					HX_STACK_LINE(674)
					::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(674)
					bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(674)
					if ((tmp6)){
						HX_STACK_LINE(674)
						_this->_validate();
					}
				}
				HX_STACK_LINE(674)
				tmp5 = fst->zpp_inner->x;
			}
			HX_STACK_LINE(674)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(674)
			{
				HX_STACK_LINE(674)
				{
					HX_STACK_LINE(674)
					::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(674)
					bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(674)
					if ((tmp7)){
						HX_STACK_LINE(674)
						_this->_validate();
					}
				}
				HX_STACK_LINE(674)
				tmp6 = fst->zpp_inner->y;
			}
			HX_STACK_LINE(674)
			g->lineTo(tmp5,tmp6);
			HX_STACK_LINE(675)
			{
				HX_STACK_LINE(675)
				::zpp_nape::geom::ZPP_Vec2 inner = fst->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(675)
				fst->zpp_inner->outer = null();
				HX_STACK_LINE(675)
				fst->zpp_inner = null();
				HX_STACK_LINE(675)
				{
					HX_STACK_LINE(675)
					::nape::geom::Vec2 o = fst;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(675)
					::nape::geom::Vec2 tmp7 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(675)
					o->zpp_pool = tmp7;
					HX_STACK_LINE(675)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(675)
				{
					HX_STACK_LINE(675)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(675)
					{
						HX_STACK_LINE(675)
						bool tmp7 = (o->outer != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(675)
						if ((tmp7)){
							HX_STACK_LINE(675)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(675)
							o->outer = null();
						}
						HX_STACK_LINE(675)
						o->_isimmutable = null();
						HX_STACK_LINE(675)
						o->_validate = null();
						HX_STACK_LINE(675)
						o->_invalidate = null();
					}
					HX_STACK_LINE(675)
					::zpp_nape::geom::ZPP_Vec2 tmp7 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(675)
					o->next = tmp7;
					HX_STACK_LINE(675)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		else{
			HX_STACK_LINE(678)
			{
				HX_STACK_LINE(679)
				Dynamic tmp5 = polygon;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(679)
				bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(679)
				if ((tmp6)){
					HX_STACK_LINE(680)
					cpp::ArrayBase lv = polygon;		HX_STACK_VAR(lv,"lv");
					HX_STACK_LINE(681)
					{
						HX_STACK_LINE(681)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(681)
						while((true)){
							HX_STACK_LINE(681)
							bool tmp7 = (_g < lv->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(681)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(681)
							if ((tmp8)){
								HX_STACK_LINE(681)
								break;
							}
							HX_STACK_LINE(681)
							Dynamic tmp9 = lv->__GetItem(_g);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(681)
							Dynamic vite = tmp9;		HX_STACK_VAR(vite,"vite");
							HX_STACK_LINE(681)
							++(_g);
							HX_STACK_LINE(688)
							::nape::geom::Vec2 p = vite;		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(694)
							{
								HX_STACK_LINE(695)
								::zpp_nape::util::ZPP_Debug tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(695)
								::nape::geom::Mat23 tmp11 = tmp10->xform->outer;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(695)
								::nape::geom::Vec2 tmp12 = p;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(695)
								::nape::geom::Vec2 tmp13 = tmp11->transform(tmp12,null(),null());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(695)
								::nape::geom::Vec2 v = tmp13;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(696)
								bool tmp14 = fsttime;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(696)
								if ((tmp14)){
									HX_STACK_LINE(697)
									fst = v;
									HX_STACK_LINE(698)
									Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(698)
									{
										HX_STACK_LINE(698)
										{
											HX_STACK_LINE(698)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(698)
											bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(698)
											if ((tmp16)){
												HX_STACK_LINE(698)
												_this->_validate();
											}
										}
										HX_STACK_LINE(698)
										tmp15 = v->zpp_inner->x;
									}
									HX_STACK_LINE(698)
									Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(698)
									{
										HX_STACK_LINE(698)
										{
											HX_STACK_LINE(698)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(698)
											bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(698)
											if ((tmp17)){
												HX_STACK_LINE(698)
												_this->_validate();
											}
										}
										HX_STACK_LINE(698)
										tmp16 = v->zpp_inner->y;
									}
									HX_STACK_LINE(698)
									g->moveTo(tmp15,tmp16);
								}
								else{
									HX_STACK_LINE(700)
									Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(700)
									{
										HX_STACK_LINE(700)
										{
											HX_STACK_LINE(700)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(700)
											bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(700)
											if ((tmp16)){
												HX_STACK_LINE(700)
												_this->_validate();
											}
										}
										HX_STACK_LINE(700)
										tmp15 = v->zpp_inner->x;
									}
									HX_STACK_LINE(700)
									Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(700)
									{
										HX_STACK_LINE(700)
										{
											HX_STACK_LINE(700)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(700)
											bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(700)
											if ((tmp17)){
												HX_STACK_LINE(700)
												_this->_validate();
											}
										}
										HX_STACK_LINE(700)
										tmp16 = v->zpp_inner->y;
									}
									HX_STACK_LINE(700)
									g->lineTo(tmp15,tmp16);
								}
								HX_STACK_LINE(701)
								bool tmp15 = fsttime;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(701)
								bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(701)
								if ((tmp16)){
									HX_STACK_LINE(701)
									::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
									HX_STACK_LINE(701)
									v->zpp_inner->outer = null();
									HX_STACK_LINE(701)
									v->zpp_inner = null();
									HX_STACK_LINE(701)
									{
										HX_STACK_LINE(701)
										::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(701)
										::nape::geom::Vec2 tmp17 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(701)
										o->zpp_pool = tmp17;
										HX_STACK_LINE(701)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
									}
									HX_STACK_LINE(701)
									{
										HX_STACK_LINE(701)
										::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(701)
										{
											HX_STACK_LINE(701)
											bool tmp17 = (o->outer != null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(701)
											if ((tmp17)){
												HX_STACK_LINE(701)
												o->outer->zpp_inner = null();
												HX_STACK_LINE(701)
												o->outer = null();
											}
											HX_STACK_LINE(701)
											o->_isimmutable = null();
											HX_STACK_LINE(701)
											o->_validate = null();
											HX_STACK_LINE(701)
											o->_invalidate = null();
										}
										HX_STACK_LINE(701)
										::zpp_nape::geom::ZPP_Vec2 tmp17 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(701)
										o->next = tmp17;
										HX_STACK_LINE(701)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
									}
								}
								HX_STACK_LINE(702)
								fsttime = false;
							}
						}
					}
				}
				else{
					HX_STACK_LINE(731)
					Dynamic tmp7 = polygon;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(731)
					bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::nape::geom::Vec2List >());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(731)
					if ((tmp8)){
						HX_STACK_LINE(732)
						::nape::geom::Vec2List lv = polygon;		HX_STACK_VAR(lv,"lv");
						HX_STACK_LINE(733)
						{
							HX_STACK_LINE(733)
							::nape::geom::Vec2Iterator tmp9 = lv->iterator();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(733)
							::nape::geom::Vec2Iterator _g = tmp9;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(733)
							while((true)){
								HX_STACK_LINE(733)
								bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(733)
								{
									HX_STACK_LINE(733)
									::zpp_nape::util::ZPP_Vec2List tmp11 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(733)
									tmp11->valmod();
									HX_STACK_LINE(733)
									int tmp12 = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(733)
									int length = tmp12;		HX_STACK_VAR(length,"length");
									HX_STACK_LINE(733)
									_g->zpp_critical = true;
									HX_STACK_LINE(733)
									bool tmp13 = (_g->zpp_i < length);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(733)
									if ((tmp13)){
										HX_STACK_LINE(733)
										tmp10 = true;
									}
									else{
										HX_STACK_LINE(733)
										{
											HX_STACK_LINE(733)
											::nape::geom::Vec2Iterator tmp14 = ::nape::geom::Vec2Iterator_obj::zpp_pool;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(733)
											_g->zpp_next = tmp14;
											HX_STACK_LINE(733)
											::nape::geom::Vec2Iterator_obj::zpp_pool = _g;
											HX_STACK_LINE(733)
											_g->zpp_inner = null();
										}
										HX_STACK_LINE(733)
										tmp10 = false;
									}
								}
								HX_STACK_LINE(733)
								bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(733)
								if ((tmp11)){
									HX_STACK_LINE(733)
									break;
								}
								HX_STACK_LINE(733)
								::nape::geom::Vec2 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(733)
								{
									HX_STACK_LINE(733)
									_g->zpp_critical = false;
									HX_STACK_LINE(733)
									int tmp13 = (_g->zpp_i)++;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(733)
									tmp12 = _g->zpp_inner->at(tmp13);
								}
								HX_STACK_LINE(733)
								::nape::geom::Vec2 p = tmp12;		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(742)
								{
									HX_STACK_LINE(743)
									::zpp_nape::util::ZPP_Debug tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(743)
									::nape::geom::Mat23 tmp14 = tmp13->xform->outer;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(743)
									::nape::geom::Vec2 tmp15 = p;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(743)
									::nape::geom::Vec2 tmp16 = tmp14->transform(tmp15,null(),null());		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(743)
									::nape::geom::Vec2 v = tmp16;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(744)
									bool tmp17 = fsttime;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(744)
									if ((tmp17)){
										HX_STACK_LINE(745)
										fst = v;
										HX_STACK_LINE(746)
										Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(746)
										{
											HX_STACK_LINE(746)
											{
												HX_STACK_LINE(746)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(746)
												bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(746)
												if ((tmp19)){
													HX_STACK_LINE(746)
													_this->_validate();
												}
											}
											HX_STACK_LINE(746)
											tmp18 = v->zpp_inner->x;
										}
										HX_STACK_LINE(746)
										Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(746)
										{
											HX_STACK_LINE(746)
											{
												HX_STACK_LINE(746)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(746)
												bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(746)
												if ((tmp20)){
													HX_STACK_LINE(746)
													_this->_validate();
												}
											}
											HX_STACK_LINE(746)
											tmp19 = v->zpp_inner->y;
										}
										HX_STACK_LINE(746)
										g->moveTo(tmp18,tmp19);
									}
									else{
										HX_STACK_LINE(748)
										Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(748)
										{
											HX_STACK_LINE(748)
											{
												HX_STACK_LINE(748)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(748)
												bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(748)
												if ((tmp19)){
													HX_STACK_LINE(748)
													_this->_validate();
												}
											}
											HX_STACK_LINE(748)
											tmp18 = v->zpp_inner->x;
										}
										HX_STACK_LINE(748)
										Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(748)
										{
											HX_STACK_LINE(748)
											{
												HX_STACK_LINE(748)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(748)
												bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(748)
												if ((tmp20)){
													HX_STACK_LINE(748)
													_this->_validate();
												}
											}
											HX_STACK_LINE(748)
											tmp19 = v->zpp_inner->y;
										}
										HX_STACK_LINE(748)
										g->lineTo(tmp18,tmp19);
									}
									HX_STACK_LINE(749)
									bool tmp18 = fsttime;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(749)
									bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(749)
									if ((tmp19)){
										HX_STACK_LINE(749)
										::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
										HX_STACK_LINE(749)
										v->zpp_inner->outer = null();
										HX_STACK_LINE(749)
										v->zpp_inner = null();
										HX_STACK_LINE(749)
										{
											HX_STACK_LINE(749)
											::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(749)
											::nape::geom::Vec2 tmp20 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(749)
											o->zpp_pool = tmp20;
											HX_STACK_LINE(749)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
										}
										HX_STACK_LINE(749)
										{
											HX_STACK_LINE(749)
											::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(749)
											{
												HX_STACK_LINE(749)
												bool tmp20 = (o->outer != null());		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(749)
												if ((tmp20)){
													HX_STACK_LINE(749)
													o->outer->zpp_inner = null();
													HX_STACK_LINE(749)
													o->outer = null();
												}
												HX_STACK_LINE(749)
												o->_isimmutable = null();
												HX_STACK_LINE(749)
												o->_validate = null();
												HX_STACK_LINE(749)
												o->_invalidate = null();
											}
											HX_STACK_LINE(749)
											::zpp_nape::geom::ZPP_Vec2 tmp20 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(749)
											o->next = tmp20;
											HX_STACK_LINE(749)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
										}
									}
									HX_STACK_LINE(750)
									fsttime = false;
								}
							}
						}
					}
					else{
						HX_STACK_LINE(754)
						Dynamic tmp9 = polygon;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(754)
						bool tmp10 = ::Std_obj::is(tmp9,hx::ClassOf< ::nape::geom::GeomPoly >());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(754)
						if ((tmp10)){
							HX_STACK_LINE(755)
							::nape::geom::GeomPoly lv = polygon;		HX_STACK_VAR(lv,"lv");
							HX_STACK_LINE(761)
							::zpp_nape::geom::ZPP_GeomVert tmp11 = lv->zpp_inner->vertices;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(761)
							::zpp_nape::geom::ZPP_GeomVert verts = tmp11;		HX_STACK_VAR(verts,"verts");
							HX_STACK_LINE(762)
							bool tmp12 = (verts != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(762)
							if ((tmp12)){
								HX_STACK_LINE(763)
								::zpp_nape::geom::ZPP_GeomVert vite = verts;		HX_STACK_VAR(vite,"vite");
								HX_STACK_LINE(764)
								while((true)){
									HX_STACK_LINE(765)
									::nape::geom::Vec2 tmp13;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(765)
									{
										HX_STACK_LINE(765)
										Float x = vite->x;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(765)
										Float y = vite->y;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(765)
										bool weak = false;		HX_STACK_VAR(weak,"weak");
										HX_STACK_LINE(765)
										::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(765)
										{
											HX_STACK_LINE(765)
											::nape::geom::Vec2 tmp14 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(765)
											bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(765)
											if ((tmp15)){
												HX_STACK_LINE(765)
												::nape::geom::Vec2 tmp16 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(765)
												ret = tmp16;
											}
											else{
												HX_STACK_LINE(765)
												::nape::geom::Vec2 tmp16 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(765)
												ret = tmp16;
												HX_STACK_LINE(765)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
												HX_STACK_LINE(765)
												ret->zpp_pool = null();
											}
										}
										HX_STACK_LINE(765)
										bool tmp14 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(765)
										if ((tmp14)){
											HX_STACK_LINE(765)
											::zpp_nape::geom::ZPP_Vec2 tmp15;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(765)
											{
												HX_STACK_LINE(765)
												bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
												HX_STACK_LINE(765)
												::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(765)
												{
													HX_STACK_LINE(765)
													::zpp_nape::geom::ZPP_Vec2 tmp16 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(765)
													bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(765)
													if ((tmp17)){
														HX_STACK_LINE(765)
														::zpp_nape::geom::ZPP_Vec2 tmp18 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(765)
														ret1 = tmp18;
													}
													else{
														HX_STACK_LINE(765)
														::zpp_nape::geom::ZPP_Vec2 tmp18 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(765)
														ret1 = tmp18;
														HX_STACK_LINE(765)
														::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(765)
														ret1->next = null();
													}
													HX_STACK_LINE(765)
													ret1->weak = false;
												}
												HX_STACK_LINE(765)
												ret1->_immutable = immutable;
												HX_STACK_LINE(765)
												{
													HX_STACK_LINE(765)
													ret1->x = x;
													HX_STACK_LINE(765)
													ret1->y = y;
													HX_STACK_LINE(765)
													{
													}
												}
												HX_STACK_LINE(765)
												tmp15 = ret1;
											}
											HX_STACK_LINE(765)
											ret->zpp_inner = tmp15;
											HX_STACK_LINE(765)
											ret->zpp_inner->outer = ret;
										}
										else{
											HX_STACK_LINE(765)
											Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(765)
											{
												HX_STACK_LINE(765)
												{
													HX_STACK_LINE(765)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(765)
													bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(765)
													if ((tmp16)){
														HX_STACK_LINE(765)
														_this->_validate();
													}
												}
												HX_STACK_LINE(765)
												tmp15 = ret->zpp_inner->x;
											}
											HX_STACK_LINE(765)
											Float tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(765)
											bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(765)
											bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(765)
											if ((tmp17)){
												HX_STACK_LINE(765)
												Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(765)
												{
													HX_STACK_LINE(765)
													{
														HX_STACK_LINE(765)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(765)
														bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(765)
														bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(765)
														bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(765)
														if ((tmp22)){
															HX_STACK_LINE(765)
															_this->_validate();
														}
													}
													HX_STACK_LINE(765)
													Float tmp20 = ret->zpp_inner->y;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(765)
													tmp19 = tmp20;
												}
												HX_STACK_LINE(765)
												Float tmp20 = y;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(765)
												tmp18 = (tmp19 == tmp20);
											}
											else{
												HX_STACK_LINE(765)
												tmp18 = false;
											}
											HX_STACK_LINE(765)
											bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(765)
											if ((tmp19)){
												HX_STACK_LINE(765)
												{
													HX_STACK_LINE(765)
													ret->zpp_inner->x = x;
													HX_STACK_LINE(765)
													ret->zpp_inner->y = y;
													HX_STACK_LINE(765)
													{
													}
												}
												HX_STACK_LINE(765)
												{
													HX_STACK_LINE(765)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(765)
													bool tmp20 = (_this->_invalidate != null());		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(765)
													if ((tmp20)){
														HX_STACK_LINE(765)
														::zpp_nape::geom::ZPP_Vec2 tmp21 = _this;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(765)
														_this->_invalidate(tmp21);
													}
												}
											}
											HX_STACK_LINE(765)
											ret;
										}
										HX_STACK_LINE(765)
										ret->zpp_inner->weak = weak;
										HX_STACK_LINE(765)
										tmp13 = ret;
									}
									HX_STACK_LINE(765)
									::nape::geom::Vec2 p = tmp13;		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(766)
									vite = vite->next;
									HX_STACK_LINE(767)
									{
										HX_STACK_LINE(768)
										::zpp_nape::util::ZPP_Debug tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(768)
										::nape::geom::Mat23 tmp15 = tmp14->xform->outer;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(768)
										::nape::geom::Vec2 tmp16 = p;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(768)
										::nape::geom::Vec2 tmp17 = tmp15->transform(tmp16,null(),null());		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(768)
										::nape::geom::Vec2 v = tmp17;		HX_STACK_VAR(v,"v");
										HX_STACK_LINE(769)
										bool tmp18 = fsttime;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(769)
										if ((tmp18)){
											HX_STACK_LINE(770)
											fst = v;
											HX_STACK_LINE(771)
											Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(771)
											{
												HX_STACK_LINE(771)
												{
													HX_STACK_LINE(771)
													::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(771)
													bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(771)
													if ((tmp20)){
														HX_STACK_LINE(771)
														_this->_validate();
													}
												}
												HX_STACK_LINE(771)
												tmp19 = v->zpp_inner->x;
											}
											HX_STACK_LINE(771)
											Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(771)
											{
												HX_STACK_LINE(771)
												{
													HX_STACK_LINE(771)
													::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(771)
													bool tmp21 = (_this->_validate != null());		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(771)
													if ((tmp21)){
														HX_STACK_LINE(771)
														_this->_validate();
													}
												}
												HX_STACK_LINE(771)
												tmp20 = v->zpp_inner->y;
											}
											HX_STACK_LINE(771)
											g->moveTo(tmp19,tmp20);
										}
										else{
											HX_STACK_LINE(773)
											Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(773)
											{
												HX_STACK_LINE(773)
												{
													HX_STACK_LINE(773)
													::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(773)
													bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(773)
													if ((tmp20)){
														HX_STACK_LINE(773)
														_this->_validate();
													}
												}
												HX_STACK_LINE(773)
												tmp19 = v->zpp_inner->x;
											}
											HX_STACK_LINE(773)
											Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(773)
											{
												HX_STACK_LINE(773)
												{
													HX_STACK_LINE(773)
													::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(773)
													bool tmp21 = (_this->_validate != null());		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(773)
													if ((tmp21)){
														HX_STACK_LINE(773)
														_this->_validate();
													}
												}
												HX_STACK_LINE(773)
												tmp20 = v->zpp_inner->y;
											}
											HX_STACK_LINE(773)
											g->lineTo(tmp19,tmp20);
										}
										HX_STACK_LINE(774)
										bool tmp19 = fsttime;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(774)
										bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(774)
										if ((tmp20)){
											HX_STACK_LINE(774)
											::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
											HX_STACK_LINE(774)
											v->zpp_inner->outer = null();
											HX_STACK_LINE(774)
											v->zpp_inner = null();
											HX_STACK_LINE(774)
											{
												HX_STACK_LINE(774)
												::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
												HX_STACK_LINE(774)
												::nape::geom::Vec2 tmp21 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(774)
												o->zpp_pool = tmp21;
												HX_STACK_LINE(774)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
											}
											HX_STACK_LINE(774)
											{
												HX_STACK_LINE(774)
												::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
												HX_STACK_LINE(774)
												{
													HX_STACK_LINE(774)
													bool tmp21 = (o->outer != null());		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(774)
													if ((tmp21)){
														HX_STACK_LINE(774)
														o->outer->zpp_inner = null();
														HX_STACK_LINE(774)
														o->outer = null();
													}
													HX_STACK_LINE(774)
													o->_isimmutable = null();
													HX_STACK_LINE(774)
													o->_validate = null();
													HX_STACK_LINE(774)
													o->_invalidate = null();
												}
												HX_STACK_LINE(774)
												::zpp_nape::geom::ZPP_Vec2 tmp21 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(774)
												o->next = tmp21;
												HX_STACK_LINE(774)
												::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
											}
										}
										HX_STACK_LINE(775)
										fsttime = false;
									}
									HX_STACK_LINE(777)
									{
										HX_STACK_LINE(777)
										::zpp_nape::geom::ZPP_Vec2 inner = p->zpp_inner;		HX_STACK_VAR(inner,"inner");
										HX_STACK_LINE(777)
										p->zpp_inner->outer = null();
										HX_STACK_LINE(777)
										p->zpp_inner = null();
										HX_STACK_LINE(777)
										{
											HX_STACK_LINE(777)
											::nape::geom::Vec2 o = p;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(777)
											::nape::geom::Vec2 tmp14 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(777)
											o->zpp_pool = tmp14;
											HX_STACK_LINE(777)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
										}
										HX_STACK_LINE(777)
										{
											HX_STACK_LINE(777)
											::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(777)
											{
												HX_STACK_LINE(777)
												bool tmp14 = (o->outer != null());		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(777)
												if ((tmp14)){
													HX_STACK_LINE(777)
													o->outer->zpp_inner = null();
													HX_STACK_LINE(777)
													o->outer = null();
												}
												HX_STACK_LINE(777)
												o->_isimmutable = null();
												HX_STACK_LINE(777)
												o->_validate = null();
												HX_STACK_LINE(777)
												o->_invalidate = null();
											}
											HX_STACK_LINE(777)
											::zpp_nape::geom::ZPP_Vec2 tmp14 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(777)
											o->next = tmp14;
											HX_STACK_LINE(777)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
										}
									}
									HX_STACK_LINE(779)
									bool tmp14 = (vite != verts);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(779)
									bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(764)
									if ((tmp15)){
										HX_STACK_LINE(764)
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
			HX_STACK_LINE(788)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(788)
			{
				HX_STACK_LINE(788)
				{
					HX_STACK_LINE(788)
					::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(788)
					bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(788)
					if ((tmp6)){
						HX_STACK_LINE(788)
						_this->_validate();
					}
				}
				HX_STACK_LINE(788)
				tmp5 = fst->zpp_inner->x;
			}
			HX_STACK_LINE(788)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(788)
			{
				HX_STACK_LINE(788)
				{
					HX_STACK_LINE(788)
					::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(788)
					bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(788)
					if ((tmp7)){
						HX_STACK_LINE(788)
						_this->_validate();
					}
				}
				HX_STACK_LINE(788)
				tmp6 = fst->zpp_inner->y;
			}
			HX_STACK_LINE(788)
			g->lineTo(tmp5,tmp6);
			HX_STACK_LINE(789)
			{
				HX_STACK_LINE(789)
				::zpp_nape::geom::ZPP_Vec2 inner = fst->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(789)
				fst->zpp_inner->outer = null();
				HX_STACK_LINE(789)
				fst->zpp_inner = null();
				HX_STACK_LINE(789)
				{
					HX_STACK_LINE(789)
					::nape::geom::Vec2 o = fst;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(789)
					::nape::geom::Vec2 tmp7 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(789)
					o->zpp_pool = tmp7;
					HX_STACK_LINE(789)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(789)
				{
					HX_STACK_LINE(789)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(789)
					{
						HX_STACK_LINE(789)
						bool tmp7 = (o->outer != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(789)
						if ((tmp7)){
							HX_STACK_LINE(789)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(789)
							o->outer = null();
						}
						HX_STACK_LINE(789)
						o->_isimmutable = null();
						HX_STACK_LINE(789)
						o->_validate = null();
						HX_STACK_LINE(789)
						o->_invalidate = null();
					}
					HX_STACK_LINE(789)
					::zpp_nape::geom::ZPP_Vec2 tmp7 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(789)
					o->next = tmp7;
					HX_STACK_LINE(789)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(791)
		{
			HX_STACK_LINE(792)
			Dynamic tmp5 = polygon;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(792)
			bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(792)
			if ((tmp6)){
				HX_STACK_LINE(793)
				Array< ::Dynamic > lv = polygon;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(794)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(795)
				while((true)){
					HX_STACK_LINE(795)
					bool tmp7 = (i < lv->length);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(795)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(795)
					if ((tmp8)){
						HX_STACK_LINE(795)
						break;
					}
					HX_STACK_LINE(796)
					::nape::geom::Vec2 tmp9 = lv->__get(i).StaticCast< ::nape::geom::Vec2 >();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(796)
					::nape::geom::Vec2 cur = tmp9;		HX_STACK_VAR(cur,"cur");
					HX_STACK_LINE(797)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(797)
					{
						HX_STACK_LINE(798)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(799)
						tmp11 = cur->zpp_inner->weak;
						HX_STACK_LINE(798)
						if ((tmp11)){
							HX_STACK_LINE(801)
							{
								HX_STACK_LINE(801)
								::zpp_nape::geom::ZPP_Vec2 inner = cur->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(801)
								cur->zpp_inner->outer = null();
								HX_STACK_LINE(801)
								cur->zpp_inner = null();
								HX_STACK_LINE(801)
								{
									HX_STACK_LINE(801)
									::nape::geom::Vec2 o = cur;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(801)
									::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(801)
									o->zpp_pool = tmp12;
									HX_STACK_LINE(801)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(801)
								{
									HX_STACK_LINE(801)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(801)
									{
										HX_STACK_LINE(801)
										bool tmp12 = (o->outer != null());		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(801)
										if ((tmp12)){
											HX_STACK_LINE(801)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(801)
											o->outer = null();
										}
										HX_STACK_LINE(801)
										o->_isimmutable = null();
										HX_STACK_LINE(801)
										o->_validate = null();
										HX_STACK_LINE(801)
										o->_invalidate = null();
									}
									HX_STACK_LINE(801)
									::zpp_nape::geom::ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(801)
									o->next = tmp12;
									HX_STACK_LINE(801)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(802)
							tmp10 = true;
						}
						else{
							HX_STACK_LINE(805)
							tmp10 = false;
						}
					}
					HX_STACK_LINE(797)
					if ((tmp10)){
						HX_STACK_LINE(808)
						int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(808)
						lv->splice(tmp11,(int)1);
						HX_STACK_LINE(809)
						continue;
					}
					HX_STACK_LINE(811)
					(i)++;
				}
			}
			else{
				HX_STACK_LINE(839)
				Dynamic tmp7 = polygon;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(839)
				bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::nape::geom::Vec2List >());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(839)
				if ((tmp8)){
					HX_STACK_LINE(840)
					::nape::geom::Vec2List lv = polygon;		HX_STACK_VAR(lv,"lv");
					HX_STACK_LINE(841)
					Dynamic tmp9 = lv->zpp_inner->_validate;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(841)
					bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(841)
					if ((tmp10)){
						HX_STACK_LINE(841)
						lv->zpp_inner->_validate();
					}
					HX_STACK_LINE(842)
					::zpp_nape::util::ZNPList_ZPP_Vec2 tmp11 = lv->zpp_inner->inner;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(842)
					::zpp_nape::util::ZNPList_ZPP_Vec2 ins = tmp11;		HX_STACK_VAR(ins,"ins");
					HX_STACK_LINE(843)
					::zpp_nape::util::ZNPNode_ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
					HX_STACK_LINE(844)
					::zpp_nape::util::ZNPNode_ZPP_Vec2 cur = ins->head;		HX_STACK_VAR(cur,"cur");
					HX_STACK_LINE(845)
					while((true)){
						HX_STACK_LINE(845)
						bool tmp12 = (cur != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(845)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(845)
						if ((tmp13)){
							HX_STACK_LINE(845)
							break;
						}
						HX_STACK_LINE(846)
						::zpp_nape::geom::ZPP_Vec2 x = cur->elt;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(847)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(847)
						{
							HX_STACK_LINE(848)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = x->outer->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(848)
							tmp14 = tmp15->weak;
						}
						HX_STACK_LINE(847)
						if ((tmp14)){
							HX_STACK_LINE(850)
							::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp15 = pre;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(850)
							::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp16 = ins->erase(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(850)
							cur = tmp16;
							HX_STACK_LINE(851)
							{
								HX_STACK_LINE(852)
								bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(852)
								{
									HX_STACK_LINE(853)
									::zpp_nape::geom::ZPP_Vec2 tmp18 = x->outer->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(853)
									tmp17 = tmp18->weak;
								}
								HX_STACK_LINE(852)
								if ((tmp17)){
									HX_STACK_LINE(855)
									{
										HX_STACK_LINE(855)
										::nape::geom::Vec2 _this = x->outer;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(855)
										::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
										HX_STACK_LINE(855)
										_this->zpp_inner->outer = null();
										HX_STACK_LINE(855)
										_this->zpp_inner = null();
										HX_STACK_LINE(855)
										{
											HX_STACK_LINE(855)
											::nape::geom::Vec2 o = _this;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(855)
											::nape::geom::Vec2 tmp18 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(855)
											o->zpp_pool = tmp18;
											HX_STACK_LINE(855)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
										}
										HX_STACK_LINE(855)
										{
											HX_STACK_LINE(855)
											::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(855)
											{
												HX_STACK_LINE(855)
												bool tmp18 = (o->outer != null());		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(855)
												if ((tmp18)){
													HX_STACK_LINE(855)
													o->outer->zpp_inner = null();
													HX_STACK_LINE(855)
													o->outer = null();
												}
												HX_STACK_LINE(855)
												o->_isimmutable = null();
												HX_STACK_LINE(855)
												o->_validate = null();
												HX_STACK_LINE(855)
												o->_invalidate = null();
											}
											HX_STACK_LINE(855)
											::zpp_nape::geom::ZPP_Vec2 tmp18 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(855)
											o->next = tmp18;
											HX_STACK_LINE(855)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
										}
									}
									HX_STACK_LINE(856)
									true;
								}
								else{
									HX_STACK_LINE(859)
									false;
								}
							}
						}
						else{
							HX_STACK_LINE(864)
							pre = cur;
							HX_STACK_LINE(865)
							cur = cur->next;
						}
					}
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::drawFilledPolygon( Dynamic polygon,int colour){
{
		HX_STACK_FRAME("nape.util.ShapeDebug","drawFilledPolygon",0x13e94d5e,"nape.util.ShapeDebug.drawFilledPolygon","nape/util/ShapeDebug.hx",874,0xfa2f3866)
		HX_STACK_THIS(this)
		HX_STACK_ARG(polygon,"polygon")
		HX_STACK_ARG(colour,"colour")
		HX_STACK_LINE(881)
		::zpp_nape::util::ZPP_ShapeDebug tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(881)
		::openfl::_legacy::display::Graphics g = tmp->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(882)
		int tmp1 = (int(colour) & int((int)16777215));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(882)
		g->beginFill(tmp1,((Float)1.0));
		HX_STACK_LINE(883)
		g->lineStyle((int)0,(int)0,(int)0,null(),null(),null(),null(),null());
		HX_STACK_LINE(884)
		::nape::geom::Vec2 fst = null();		HX_STACK_VAR(fst,"fst");
		HX_STACK_LINE(885)
		bool fsttime = true;		HX_STACK_VAR(fsttime,"fsttime");
		HX_STACK_LINE(886)
		::zpp_nape::util::ZPP_Debug tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(886)
		bool tmp3 = tmp2->xnull;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(886)
		if ((tmp3)){
			HX_STACK_LINE(887)
			{
				HX_STACK_LINE(888)
				Dynamic tmp4 = polygon;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(888)
				bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(888)
				if ((tmp5)){
					HX_STACK_LINE(889)
					cpp::ArrayBase lv = polygon;		HX_STACK_VAR(lv,"lv");
					HX_STACK_LINE(890)
					{
						HX_STACK_LINE(890)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(890)
						while((true)){
							HX_STACK_LINE(890)
							bool tmp6 = (_g < lv->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(890)
							bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(890)
							if ((tmp7)){
								HX_STACK_LINE(890)
								break;
							}
							HX_STACK_LINE(890)
							Dynamic tmp8 = lv->__GetItem(_g);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(890)
							Dynamic vite = tmp8;		HX_STACK_VAR(vite,"vite");
							HX_STACK_LINE(890)
							++(_g);
							HX_STACK_LINE(897)
							::nape::geom::Vec2 p = vite;		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(903)
							{
								HX_STACK_LINE(904)
								bool tmp9 = fsttime;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(904)
								if ((tmp9)){
									HX_STACK_LINE(905)
									::nape::geom::Vec2 tmp10;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(905)
									{
										HX_STACK_LINE(905)
										bool weak = false;		HX_STACK_VAR(weak,"weak");
										HX_STACK_LINE(905)
										{
											HX_STACK_LINE(905)
											Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(905)
											{
												HX_STACK_LINE(905)
												{
													HX_STACK_LINE(905)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(905)
													bool tmp12 = (_this->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
													HX_STACK_LINE(905)
													if ((tmp12)){
														HX_STACK_LINE(905)
														_this->_validate();
													}
												}
												HX_STACK_LINE(905)
												tmp11 = p->zpp_inner->x;
											}
											HX_STACK_LINE(905)
											Float x = tmp11;		HX_STACK_VAR(x,"x");
											HX_STACK_LINE(905)
											Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(905)
											{
												HX_STACK_LINE(905)
												{
													HX_STACK_LINE(905)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(905)
													bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
													HX_STACK_LINE(905)
													if ((tmp13)){
														HX_STACK_LINE(905)
														_this->_validate();
													}
												}
												HX_STACK_LINE(905)
												tmp12 = p->zpp_inner->y;
											}
											HX_STACK_LINE(905)
											Float y = tmp12;		HX_STACK_VAR(y,"y");
											HX_STACK_LINE(905)
											::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(905)
											{
												HX_STACK_LINE(905)
												::nape::geom::Vec2 tmp13 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(905)
												bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(905)
												if ((tmp14)){
													HX_STACK_LINE(905)
													::nape::geom::Vec2 tmp15 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(905)
													ret = tmp15;
												}
												else{
													HX_STACK_LINE(905)
													::nape::geom::Vec2 tmp15 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(905)
													ret = tmp15;
													HX_STACK_LINE(905)
													::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
													HX_STACK_LINE(905)
													ret->zpp_pool = null();
												}
											}
											HX_STACK_LINE(905)
											bool tmp13 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(905)
											if ((tmp13)){
												HX_STACK_LINE(905)
												::zpp_nape::geom::ZPP_Vec2 tmp14;		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(905)
												{
													HX_STACK_LINE(905)
													bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
													HX_STACK_LINE(905)
													::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(905)
													{
														HX_STACK_LINE(905)
														::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
														HX_STACK_LINE(905)
														bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
														HX_STACK_LINE(905)
														if ((tmp16)){
															HX_STACK_LINE(905)
															::zpp_nape::geom::ZPP_Vec2 tmp17 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
															HX_STACK_LINE(905)
															ret1 = tmp17;
														}
														else{
															HX_STACK_LINE(905)
															::zpp_nape::geom::ZPP_Vec2 tmp17 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
															HX_STACK_LINE(905)
															ret1 = tmp17;
															HX_STACK_LINE(905)
															::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(905)
															ret1->next = null();
														}
														HX_STACK_LINE(905)
														ret1->weak = false;
													}
													HX_STACK_LINE(905)
													ret1->_immutable = immutable;
													HX_STACK_LINE(905)
													{
														HX_STACK_LINE(905)
														ret1->x = x;
														HX_STACK_LINE(905)
														ret1->y = y;
														HX_STACK_LINE(905)
														{
														}
													}
													HX_STACK_LINE(905)
													tmp14 = ret1;
												}
												HX_STACK_LINE(905)
												ret->zpp_inner = tmp14;
												HX_STACK_LINE(905)
												ret->zpp_inner->outer = ret;
											}
											else{
												HX_STACK_LINE(905)
												Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(905)
												{
													HX_STACK_LINE(905)
													{
														HX_STACK_LINE(905)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(905)
														bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
														HX_STACK_LINE(905)
														if ((tmp15)){
															HX_STACK_LINE(905)
															_this->_validate();
														}
													}
													HX_STACK_LINE(905)
													tmp14 = ret->zpp_inner->x;
												}
												HX_STACK_LINE(905)
												Float tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(905)
												bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(905)
												bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(905)
												if ((tmp16)){
													HX_STACK_LINE(905)
													Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(905)
													{
														HX_STACK_LINE(905)
														{
															HX_STACK_LINE(905)
															::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(905)
															bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
															HX_STACK_LINE(905)
															bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(905)
															bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
															HX_STACK_LINE(905)
															if ((tmp21)){
																HX_STACK_LINE(905)
																_this->_validate();
															}
														}
														HX_STACK_LINE(905)
														Float tmp19 = ret->zpp_inner->y;		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(905)
														tmp18 = tmp19;
													}
													HX_STACK_LINE(905)
													Float tmp19 = y;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(905)
													tmp17 = (tmp18 == tmp19);
												}
												else{
													HX_STACK_LINE(905)
													tmp17 = false;
												}
												HX_STACK_LINE(905)
												bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(905)
												if ((tmp18)){
													HX_STACK_LINE(905)
													{
														HX_STACK_LINE(905)
														ret->zpp_inner->x = x;
														HX_STACK_LINE(905)
														ret->zpp_inner->y = y;
														HX_STACK_LINE(905)
														{
														}
													}
													HX_STACK_LINE(905)
													{
														HX_STACK_LINE(905)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(905)
														bool tmp19 = (_this->_invalidate != null());		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(905)
														if ((tmp19)){
															HX_STACK_LINE(905)
															::zpp_nape::geom::ZPP_Vec2 tmp20 = _this;		HX_STACK_VAR(tmp20,"tmp20");
															HX_STACK_LINE(905)
															_this->_invalidate(tmp20);
														}
													}
												}
												HX_STACK_LINE(905)
												ret;
											}
											HX_STACK_LINE(905)
											ret->zpp_inner->weak = weak;
											HX_STACK_LINE(905)
											tmp10 = ret;
										}
									}
									HX_STACK_LINE(905)
									fst = tmp10;
									HX_STACK_LINE(906)
									Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(906)
									{
										HX_STACK_LINE(906)
										{
											HX_STACK_LINE(906)
											::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(906)
											bool tmp12 = (_this->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(906)
											if ((tmp12)){
												HX_STACK_LINE(906)
												_this->_validate();
											}
										}
										HX_STACK_LINE(906)
										tmp11 = p->zpp_inner->x;
									}
									HX_STACK_LINE(906)
									Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(906)
									{
										HX_STACK_LINE(906)
										{
											HX_STACK_LINE(906)
											::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(906)
											bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(906)
											if ((tmp13)){
												HX_STACK_LINE(906)
												_this->_validate();
											}
										}
										HX_STACK_LINE(906)
										tmp12 = p->zpp_inner->y;
									}
									HX_STACK_LINE(906)
									g->moveTo(tmp11,tmp12);
								}
								else{
									HX_STACK_LINE(908)
									Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(908)
									{
										HX_STACK_LINE(908)
										{
											HX_STACK_LINE(908)
											::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(908)
											bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(908)
											if ((tmp11)){
												HX_STACK_LINE(908)
												_this->_validate();
											}
										}
										HX_STACK_LINE(908)
										tmp10 = p->zpp_inner->x;
									}
									HX_STACK_LINE(908)
									Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(908)
									{
										HX_STACK_LINE(908)
										{
											HX_STACK_LINE(908)
											::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(908)
											bool tmp12 = (_this->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(908)
											if ((tmp12)){
												HX_STACK_LINE(908)
												_this->_validate();
											}
										}
										HX_STACK_LINE(908)
										tmp11 = p->zpp_inner->y;
									}
									HX_STACK_LINE(908)
									g->lineTo(tmp10,tmp11);
								}
								HX_STACK_LINE(909)
								fsttime = false;
							}
						}
					}
				}
				else{
					HX_STACK_LINE(936)
					Dynamic tmp6 = polygon;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(936)
					bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::nape::geom::Vec2List >());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(936)
					if ((tmp7)){
						HX_STACK_LINE(937)
						::nape::geom::Vec2List lv = polygon;		HX_STACK_VAR(lv,"lv");
						HX_STACK_LINE(938)
						{
							HX_STACK_LINE(938)
							::nape::geom::Vec2Iterator tmp8 = lv->iterator();		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(938)
							::nape::geom::Vec2Iterator _g = tmp8;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(938)
							while((true)){
								HX_STACK_LINE(938)
								bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(938)
								{
									HX_STACK_LINE(938)
									::zpp_nape::util::ZPP_Vec2List tmp10 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(938)
									tmp10->valmod();
									HX_STACK_LINE(938)
									int tmp11 = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(938)
									int length = tmp11;		HX_STACK_VAR(length,"length");
									HX_STACK_LINE(938)
									_g->zpp_critical = true;
									HX_STACK_LINE(938)
									bool tmp12 = (_g->zpp_i < length);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(938)
									if ((tmp12)){
										HX_STACK_LINE(938)
										tmp9 = true;
									}
									else{
										HX_STACK_LINE(938)
										{
											HX_STACK_LINE(938)
											::nape::geom::Vec2Iterator tmp13 = ::nape::geom::Vec2Iterator_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(938)
											_g->zpp_next = tmp13;
											HX_STACK_LINE(938)
											::nape::geom::Vec2Iterator_obj::zpp_pool = _g;
											HX_STACK_LINE(938)
											_g->zpp_inner = null();
										}
										HX_STACK_LINE(938)
										tmp9 = false;
									}
								}
								HX_STACK_LINE(938)
								bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(938)
								if ((tmp10)){
									HX_STACK_LINE(938)
									break;
								}
								HX_STACK_LINE(938)
								::nape::geom::Vec2 tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(938)
								{
									HX_STACK_LINE(938)
									_g->zpp_critical = false;
									HX_STACK_LINE(938)
									int tmp12 = (_g->zpp_i)++;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(938)
									tmp11 = _g->zpp_inner->at(tmp12);
								}
								HX_STACK_LINE(938)
								::nape::geom::Vec2 p = tmp11;		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(947)
								{
									HX_STACK_LINE(948)
									bool tmp12 = fsttime;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(948)
									if ((tmp12)){
										HX_STACK_LINE(949)
										::nape::geom::Vec2 tmp13;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(949)
										{
											HX_STACK_LINE(949)
											bool weak = false;		HX_STACK_VAR(weak,"weak");
											HX_STACK_LINE(949)
											{
												HX_STACK_LINE(949)
												Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(949)
												{
													HX_STACK_LINE(949)
													{
														HX_STACK_LINE(949)
														::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(949)
														bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
														HX_STACK_LINE(949)
														if ((tmp15)){
															HX_STACK_LINE(949)
															_this->_validate();
														}
													}
													HX_STACK_LINE(949)
													tmp14 = p->zpp_inner->x;
												}
												HX_STACK_LINE(949)
												Float x = tmp14;		HX_STACK_VAR(x,"x");
												HX_STACK_LINE(949)
												Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(949)
												{
													HX_STACK_LINE(949)
													{
														HX_STACK_LINE(949)
														::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(949)
														bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
														HX_STACK_LINE(949)
														if ((tmp16)){
															HX_STACK_LINE(949)
															_this->_validate();
														}
													}
													HX_STACK_LINE(949)
													tmp15 = p->zpp_inner->y;
												}
												HX_STACK_LINE(949)
												Float y = tmp15;		HX_STACK_VAR(y,"y");
												HX_STACK_LINE(949)
												::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(949)
												{
													HX_STACK_LINE(949)
													::nape::geom::Vec2 tmp16 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(949)
													bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(949)
													if ((tmp17)){
														HX_STACK_LINE(949)
														::nape::geom::Vec2 tmp18 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(949)
														ret = tmp18;
													}
													else{
														HX_STACK_LINE(949)
														::nape::geom::Vec2 tmp18 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(949)
														ret = tmp18;
														HX_STACK_LINE(949)
														::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
														HX_STACK_LINE(949)
														ret->zpp_pool = null();
													}
												}
												HX_STACK_LINE(949)
												bool tmp16 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(949)
												if ((tmp16)){
													HX_STACK_LINE(949)
													::zpp_nape::geom::ZPP_Vec2 tmp17;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(949)
													{
														HX_STACK_LINE(949)
														bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
														HX_STACK_LINE(949)
														::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(949)
														{
															HX_STACK_LINE(949)
															::zpp_nape::geom::ZPP_Vec2 tmp18 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
															HX_STACK_LINE(949)
															bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
															HX_STACK_LINE(949)
															if ((tmp19)){
																HX_STACK_LINE(949)
																::zpp_nape::geom::ZPP_Vec2 tmp20 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(949)
																ret1 = tmp20;
															}
															else{
																HX_STACK_LINE(949)
																::zpp_nape::geom::ZPP_Vec2 tmp20 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(949)
																ret1 = tmp20;
																HX_STACK_LINE(949)
																::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(949)
																ret1->next = null();
															}
															HX_STACK_LINE(949)
															ret1->weak = false;
														}
														HX_STACK_LINE(949)
														ret1->_immutable = immutable;
														HX_STACK_LINE(949)
														{
															HX_STACK_LINE(949)
															ret1->x = x;
															HX_STACK_LINE(949)
															ret1->y = y;
															HX_STACK_LINE(949)
															{
															}
														}
														HX_STACK_LINE(949)
														tmp17 = ret1;
													}
													HX_STACK_LINE(949)
													ret->zpp_inner = tmp17;
													HX_STACK_LINE(949)
													ret->zpp_inner->outer = ret;
												}
												else{
													HX_STACK_LINE(949)
													Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(949)
													{
														HX_STACK_LINE(949)
														{
															HX_STACK_LINE(949)
															::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(949)
															bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
															HX_STACK_LINE(949)
															if ((tmp18)){
																HX_STACK_LINE(949)
																_this->_validate();
															}
														}
														HX_STACK_LINE(949)
														tmp17 = ret->zpp_inner->x;
													}
													HX_STACK_LINE(949)
													Float tmp18 = x;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(949)
													bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(949)
													bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(949)
													if ((tmp19)){
														HX_STACK_LINE(949)
														Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(949)
														{
															HX_STACK_LINE(949)
															{
																HX_STACK_LINE(949)
																::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(949)
																bool tmp22 = (_this->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
																HX_STACK_LINE(949)
																bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(949)
																bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(949)
																if ((tmp24)){
																	HX_STACK_LINE(949)
																	_this->_validate();
																}
															}
															HX_STACK_LINE(949)
															Float tmp22 = ret->zpp_inner->y;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(949)
															tmp21 = tmp22;
														}
														HX_STACK_LINE(949)
														Float tmp22 = y;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(949)
														tmp20 = (tmp21 == tmp22);
													}
													else{
														HX_STACK_LINE(949)
														tmp20 = false;
													}
													HX_STACK_LINE(949)
													bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(949)
													if ((tmp21)){
														HX_STACK_LINE(949)
														{
															HX_STACK_LINE(949)
															ret->zpp_inner->x = x;
															HX_STACK_LINE(949)
															ret->zpp_inner->y = y;
															HX_STACK_LINE(949)
															{
															}
														}
														HX_STACK_LINE(949)
														{
															HX_STACK_LINE(949)
															::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(949)
															bool tmp22 = (_this->_invalidate != null());		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(949)
															if ((tmp22)){
																HX_STACK_LINE(949)
																::zpp_nape::geom::ZPP_Vec2 tmp23 = _this;		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(949)
																_this->_invalidate(tmp23);
															}
														}
													}
													HX_STACK_LINE(949)
													ret;
												}
												HX_STACK_LINE(949)
												ret->zpp_inner->weak = weak;
												HX_STACK_LINE(949)
												tmp13 = ret;
											}
										}
										HX_STACK_LINE(949)
										fst = tmp13;
										HX_STACK_LINE(950)
										Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(950)
										{
											HX_STACK_LINE(950)
											{
												HX_STACK_LINE(950)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(950)
												bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(950)
												if ((tmp15)){
													HX_STACK_LINE(950)
													_this->_validate();
												}
											}
											HX_STACK_LINE(950)
											tmp14 = p->zpp_inner->x;
										}
										HX_STACK_LINE(950)
										Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(950)
										{
											HX_STACK_LINE(950)
											{
												HX_STACK_LINE(950)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(950)
												bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(950)
												if ((tmp16)){
													HX_STACK_LINE(950)
													_this->_validate();
												}
											}
											HX_STACK_LINE(950)
											tmp15 = p->zpp_inner->y;
										}
										HX_STACK_LINE(950)
										g->moveTo(tmp14,tmp15);
									}
									else{
										HX_STACK_LINE(952)
										Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(952)
										{
											HX_STACK_LINE(952)
											{
												HX_STACK_LINE(952)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(952)
												bool tmp14 = (_this->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(952)
												if ((tmp14)){
													HX_STACK_LINE(952)
													_this->_validate();
												}
											}
											HX_STACK_LINE(952)
											tmp13 = p->zpp_inner->x;
										}
										HX_STACK_LINE(952)
										Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(952)
										{
											HX_STACK_LINE(952)
											{
												HX_STACK_LINE(952)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(952)
												bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(952)
												if ((tmp15)){
													HX_STACK_LINE(952)
													_this->_validate();
												}
											}
											HX_STACK_LINE(952)
											tmp14 = p->zpp_inner->y;
										}
										HX_STACK_LINE(952)
										g->lineTo(tmp13,tmp14);
									}
									HX_STACK_LINE(953)
									fsttime = false;
								}
							}
						}
					}
					else{
						HX_STACK_LINE(957)
						Dynamic tmp8 = polygon;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(957)
						bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::nape::geom::GeomPoly >());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(957)
						if ((tmp9)){
							HX_STACK_LINE(958)
							::nape::geom::GeomPoly lv = polygon;		HX_STACK_VAR(lv,"lv");
							HX_STACK_LINE(964)
							::zpp_nape::geom::ZPP_GeomVert tmp10 = lv->zpp_inner->vertices;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(964)
							::zpp_nape::geom::ZPP_GeomVert verts = tmp10;		HX_STACK_VAR(verts,"verts");
							HX_STACK_LINE(965)
							bool tmp11 = (verts != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(965)
							if ((tmp11)){
								HX_STACK_LINE(966)
								::zpp_nape::geom::ZPP_GeomVert vite = verts;		HX_STACK_VAR(vite,"vite");
								HX_STACK_LINE(967)
								while((true)){
									HX_STACK_LINE(968)
									::nape::geom::Vec2 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(968)
									{
										HX_STACK_LINE(968)
										Float x = vite->x;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(968)
										Float y = vite->y;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(968)
										bool weak = false;		HX_STACK_VAR(weak,"weak");
										HX_STACK_LINE(968)
										::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(968)
										{
											HX_STACK_LINE(968)
											::nape::geom::Vec2 tmp13 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(968)
											bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(968)
											if ((tmp14)){
												HX_STACK_LINE(968)
												::nape::geom::Vec2 tmp15 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(968)
												ret = tmp15;
											}
											else{
												HX_STACK_LINE(968)
												::nape::geom::Vec2 tmp15 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(968)
												ret = tmp15;
												HX_STACK_LINE(968)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
												HX_STACK_LINE(968)
												ret->zpp_pool = null();
											}
										}
										HX_STACK_LINE(968)
										bool tmp13 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(968)
										if ((tmp13)){
											HX_STACK_LINE(968)
											::zpp_nape::geom::ZPP_Vec2 tmp14;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(968)
											{
												HX_STACK_LINE(968)
												bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
												HX_STACK_LINE(968)
												::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(968)
												{
													HX_STACK_LINE(968)
													::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(968)
													bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(968)
													if ((tmp16)){
														HX_STACK_LINE(968)
														::zpp_nape::geom::ZPP_Vec2 tmp17 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
														HX_STACK_LINE(968)
														ret1 = tmp17;
													}
													else{
														HX_STACK_LINE(968)
														::zpp_nape::geom::ZPP_Vec2 tmp17 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
														HX_STACK_LINE(968)
														ret1 = tmp17;
														HX_STACK_LINE(968)
														::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(968)
														ret1->next = null();
													}
													HX_STACK_LINE(968)
													ret1->weak = false;
												}
												HX_STACK_LINE(968)
												ret1->_immutable = immutable;
												HX_STACK_LINE(968)
												{
													HX_STACK_LINE(968)
													ret1->x = x;
													HX_STACK_LINE(968)
													ret1->y = y;
													HX_STACK_LINE(968)
													{
													}
												}
												HX_STACK_LINE(968)
												tmp14 = ret1;
											}
											HX_STACK_LINE(968)
											ret->zpp_inner = tmp14;
											HX_STACK_LINE(968)
											ret->zpp_inner->outer = ret;
										}
										else{
											HX_STACK_LINE(968)
											Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(968)
											{
												HX_STACK_LINE(968)
												{
													HX_STACK_LINE(968)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(968)
													bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(968)
													if ((tmp15)){
														HX_STACK_LINE(968)
														_this->_validate();
													}
												}
												HX_STACK_LINE(968)
												tmp14 = ret->zpp_inner->x;
											}
											HX_STACK_LINE(968)
											Float tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(968)
											bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(968)
											bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(968)
											if ((tmp16)){
												HX_STACK_LINE(968)
												Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(968)
												{
													HX_STACK_LINE(968)
													{
														HX_STACK_LINE(968)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(968)
														bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(968)
														bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(968)
														bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(968)
														if ((tmp21)){
															HX_STACK_LINE(968)
															_this->_validate();
														}
													}
													HX_STACK_LINE(968)
													Float tmp19 = ret->zpp_inner->y;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(968)
													tmp18 = tmp19;
												}
												HX_STACK_LINE(968)
												Float tmp19 = y;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(968)
												tmp17 = (tmp18 == tmp19);
											}
											else{
												HX_STACK_LINE(968)
												tmp17 = false;
											}
											HX_STACK_LINE(968)
											bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(968)
											if ((tmp18)){
												HX_STACK_LINE(968)
												{
													HX_STACK_LINE(968)
													ret->zpp_inner->x = x;
													HX_STACK_LINE(968)
													ret->zpp_inner->y = y;
													HX_STACK_LINE(968)
													{
													}
												}
												HX_STACK_LINE(968)
												{
													HX_STACK_LINE(968)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(968)
													bool tmp19 = (_this->_invalidate != null());		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(968)
													if ((tmp19)){
														HX_STACK_LINE(968)
														::zpp_nape::geom::ZPP_Vec2 tmp20 = _this;		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(968)
														_this->_invalidate(tmp20);
													}
												}
											}
											HX_STACK_LINE(968)
											ret;
										}
										HX_STACK_LINE(968)
										ret->zpp_inner->weak = weak;
										HX_STACK_LINE(968)
										tmp12 = ret;
									}
									HX_STACK_LINE(968)
									::nape::geom::Vec2 p = tmp12;		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(969)
									vite = vite->next;
									HX_STACK_LINE(970)
									{
										HX_STACK_LINE(971)
										bool tmp13 = fsttime;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(971)
										if ((tmp13)){
											HX_STACK_LINE(972)
											::nape::geom::Vec2 tmp14;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(972)
											{
												HX_STACK_LINE(972)
												bool weak = false;		HX_STACK_VAR(weak,"weak");
												HX_STACK_LINE(972)
												{
													HX_STACK_LINE(972)
													Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(972)
													{
														HX_STACK_LINE(972)
														{
															HX_STACK_LINE(972)
															::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(972)
															bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
															HX_STACK_LINE(972)
															if ((tmp16)){
																HX_STACK_LINE(972)
																_this->_validate();
															}
														}
														HX_STACK_LINE(972)
														tmp15 = p->zpp_inner->x;
													}
													HX_STACK_LINE(972)
													Float x = tmp15;		HX_STACK_VAR(x,"x");
													HX_STACK_LINE(972)
													Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(972)
													{
														HX_STACK_LINE(972)
														{
															HX_STACK_LINE(972)
															::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(972)
															bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
															HX_STACK_LINE(972)
															if ((tmp17)){
																HX_STACK_LINE(972)
																_this->_validate();
															}
														}
														HX_STACK_LINE(972)
														tmp16 = p->zpp_inner->y;
													}
													HX_STACK_LINE(972)
													Float y = tmp16;		HX_STACK_VAR(y,"y");
													HX_STACK_LINE(972)
													::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
													HX_STACK_LINE(972)
													{
														HX_STACK_LINE(972)
														::nape::geom::Vec2 tmp17 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp17,"tmp17");
														HX_STACK_LINE(972)
														bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(972)
														if ((tmp18)){
															HX_STACK_LINE(972)
															::nape::geom::Vec2 tmp19 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp19,"tmp19");
															HX_STACK_LINE(972)
															ret = tmp19;
														}
														else{
															HX_STACK_LINE(972)
															::nape::geom::Vec2 tmp19 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp19,"tmp19");
															HX_STACK_LINE(972)
															ret = tmp19;
															HX_STACK_LINE(972)
															::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
															HX_STACK_LINE(972)
															ret->zpp_pool = null();
														}
													}
													HX_STACK_LINE(972)
													bool tmp17 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(972)
													if ((tmp17)){
														HX_STACK_LINE(972)
														::zpp_nape::geom::ZPP_Vec2 tmp18;		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(972)
														{
															HX_STACK_LINE(972)
															bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
															HX_STACK_LINE(972)
															::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(972)
															{
																HX_STACK_LINE(972)
																::zpp_nape::geom::ZPP_Vec2 tmp19 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp19,"tmp19");
																HX_STACK_LINE(972)
																bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
																HX_STACK_LINE(972)
																if ((tmp20)){
																	HX_STACK_LINE(972)
																	::zpp_nape::geom::ZPP_Vec2 tmp21 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp21,"tmp21");
																	HX_STACK_LINE(972)
																	ret1 = tmp21;
																}
																else{
																	HX_STACK_LINE(972)
																	::zpp_nape::geom::ZPP_Vec2 tmp21 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp21,"tmp21");
																	HX_STACK_LINE(972)
																	ret1 = tmp21;
																	HX_STACK_LINE(972)
																	::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(972)
																	ret1->next = null();
																}
																HX_STACK_LINE(972)
																ret1->weak = false;
															}
															HX_STACK_LINE(972)
															ret1->_immutable = immutable;
															HX_STACK_LINE(972)
															{
																HX_STACK_LINE(972)
																ret1->x = x;
																HX_STACK_LINE(972)
																ret1->y = y;
																HX_STACK_LINE(972)
																{
																}
															}
															HX_STACK_LINE(972)
															tmp18 = ret1;
														}
														HX_STACK_LINE(972)
														ret->zpp_inner = tmp18;
														HX_STACK_LINE(972)
														ret->zpp_inner->outer = ret;
													}
													else{
														HX_STACK_LINE(972)
														Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
														HX_STACK_LINE(972)
														{
															HX_STACK_LINE(972)
															{
																HX_STACK_LINE(972)
																::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(972)
																bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
																HX_STACK_LINE(972)
																if ((tmp19)){
																	HX_STACK_LINE(972)
																	_this->_validate();
																}
															}
															HX_STACK_LINE(972)
															tmp18 = ret->zpp_inner->x;
														}
														HX_STACK_LINE(972)
														Float tmp19 = x;		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(972)
														bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(972)
														bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(972)
														if ((tmp20)){
															HX_STACK_LINE(972)
															Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(972)
															{
																HX_STACK_LINE(972)
																{
																	HX_STACK_LINE(972)
																	::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(972)
																	bool tmp23 = (_this->_validate != null());		HX_STACK_VAR(tmp23,"tmp23");
																	HX_STACK_LINE(972)
																	bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
																	HX_STACK_LINE(972)
																	bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
																	HX_STACK_LINE(972)
																	if ((tmp25)){
																		HX_STACK_LINE(972)
																		_this->_validate();
																	}
																}
																HX_STACK_LINE(972)
																Float tmp23 = ret->zpp_inner->y;		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(972)
																tmp22 = tmp23;
															}
															HX_STACK_LINE(972)
															Float tmp23 = y;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(972)
															tmp21 = (tmp22 == tmp23);
														}
														else{
															HX_STACK_LINE(972)
															tmp21 = false;
														}
														HX_STACK_LINE(972)
														bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(972)
														if ((tmp22)){
															HX_STACK_LINE(972)
															{
																HX_STACK_LINE(972)
																ret->zpp_inner->x = x;
																HX_STACK_LINE(972)
																ret->zpp_inner->y = y;
																HX_STACK_LINE(972)
																{
																}
															}
															HX_STACK_LINE(972)
															{
																HX_STACK_LINE(972)
																::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(972)
																bool tmp23 = (_this->_invalidate != null());		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(972)
																if ((tmp23)){
																	HX_STACK_LINE(972)
																	::zpp_nape::geom::ZPP_Vec2 tmp24 = _this;		HX_STACK_VAR(tmp24,"tmp24");
																	HX_STACK_LINE(972)
																	_this->_invalidate(tmp24);
																}
															}
														}
														HX_STACK_LINE(972)
														ret;
													}
													HX_STACK_LINE(972)
													ret->zpp_inner->weak = weak;
													HX_STACK_LINE(972)
													tmp14 = ret;
												}
											}
											HX_STACK_LINE(972)
											fst = tmp14;
											HX_STACK_LINE(973)
											Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(973)
											{
												HX_STACK_LINE(973)
												{
													HX_STACK_LINE(973)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(973)
													bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(973)
													if ((tmp16)){
														HX_STACK_LINE(973)
														_this->_validate();
													}
												}
												HX_STACK_LINE(973)
												tmp15 = p->zpp_inner->x;
											}
											HX_STACK_LINE(973)
											Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(973)
											{
												HX_STACK_LINE(973)
												{
													HX_STACK_LINE(973)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(973)
													bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(973)
													if ((tmp17)){
														HX_STACK_LINE(973)
														_this->_validate();
													}
												}
												HX_STACK_LINE(973)
												tmp16 = p->zpp_inner->y;
											}
											HX_STACK_LINE(973)
											g->moveTo(tmp15,tmp16);
										}
										else{
											HX_STACK_LINE(975)
											Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(975)
											{
												HX_STACK_LINE(975)
												{
													HX_STACK_LINE(975)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(975)
													bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(975)
													if ((tmp15)){
														HX_STACK_LINE(975)
														_this->_validate();
													}
												}
												HX_STACK_LINE(975)
												tmp14 = p->zpp_inner->x;
											}
											HX_STACK_LINE(975)
											Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(975)
											{
												HX_STACK_LINE(975)
												{
													HX_STACK_LINE(975)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(975)
													bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(975)
													if ((tmp16)){
														HX_STACK_LINE(975)
														_this->_validate();
													}
												}
												HX_STACK_LINE(975)
												tmp15 = p->zpp_inner->y;
											}
											HX_STACK_LINE(975)
											g->lineTo(tmp14,tmp15);
										}
										HX_STACK_LINE(976)
										fsttime = false;
									}
									HX_STACK_LINE(978)
									{
										HX_STACK_LINE(978)
										::zpp_nape::geom::ZPP_Vec2 inner = p->zpp_inner;		HX_STACK_VAR(inner,"inner");
										HX_STACK_LINE(978)
										p->zpp_inner->outer = null();
										HX_STACK_LINE(978)
										p->zpp_inner = null();
										HX_STACK_LINE(978)
										{
											HX_STACK_LINE(978)
											::nape::geom::Vec2 o = p;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(978)
											::nape::geom::Vec2 tmp13 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(978)
											o->zpp_pool = tmp13;
											HX_STACK_LINE(978)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
										}
										HX_STACK_LINE(978)
										{
											HX_STACK_LINE(978)
											::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(978)
											{
												HX_STACK_LINE(978)
												bool tmp13 = (o->outer != null());		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(978)
												if ((tmp13)){
													HX_STACK_LINE(978)
													o->outer->zpp_inner = null();
													HX_STACK_LINE(978)
													o->outer = null();
												}
												HX_STACK_LINE(978)
												o->_isimmutable = null();
												HX_STACK_LINE(978)
												o->_validate = null();
												HX_STACK_LINE(978)
												o->_invalidate = null();
											}
											HX_STACK_LINE(978)
											::zpp_nape::geom::ZPP_Vec2 tmp13 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(978)
											o->next = tmp13;
											HX_STACK_LINE(978)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
										}
									}
									HX_STACK_LINE(980)
									bool tmp13 = (vite != verts);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(980)
									bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(967)
									if ((tmp14)){
										HX_STACK_LINE(967)
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
			HX_STACK_LINE(989)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(989)
			{
				HX_STACK_LINE(989)
				{
					HX_STACK_LINE(989)
					::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(989)
					bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(989)
					if ((tmp5)){
						HX_STACK_LINE(989)
						_this->_validate();
					}
				}
				HX_STACK_LINE(989)
				tmp4 = fst->zpp_inner->x;
			}
			HX_STACK_LINE(989)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(989)
			{
				HX_STACK_LINE(989)
				{
					HX_STACK_LINE(989)
					::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(989)
					bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(989)
					if ((tmp6)){
						HX_STACK_LINE(989)
						_this->_validate();
					}
				}
				HX_STACK_LINE(989)
				tmp5 = fst->zpp_inner->y;
			}
			HX_STACK_LINE(989)
			g->lineTo(tmp4,tmp5);
			HX_STACK_LINE(990)
			{
				HX_STACK_LINE(990)
				::zpp_nape::geom::ZPP_Vec2 inner = fst->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(990)
				fst->zpp_inner->outer = null();
				HX_STACK_LINE(990)
				fst->zpp_inner = null();
				HX_STACK_LINE(990)
				{
					HX_STACK_LINE(990)
					::nape::geom::Vec2 o = fst;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(990)
					::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(990)
					o->zpp_pool = tmp6;
					HX_STACK_LINE(990)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(990)
				{
					HX_STACK_LINE(990)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(990)
					{
						HX_STACK_LINE(990)
						bool tmp6 = (o->outer != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(990)
						if ((tmp6)){
							HX_STACK_LINE(990)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(990)
							o->outer = null();
						}
						HX_STACK_LINE(990)
						o->_isimmutable = null();
						HX_STACK_LINE(990)
						o->_validate = null();
						HX_STACK_LINE(990)
						o->_invalidate = null();
					}
					HX_STACK_LINE(990)
					::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(990)
					o->next = tmp6;
					HX_STACK_LINE(990)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		else{
			HX_STACK_LINE(993)
			{
				HX_STACK_LINE(994)
				Dynamic tmp4 = polygon;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(994)
				bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(994)
				if ((tmp5)){
					HX_STACK_LINE(995)
					cpp::ArrayBase lv = polygon;		HX_STACK_VAR(lv,"lv");
					HX_STACK_LINE(996)
					{
						HX_STACK_LINE(996)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(996)
						while((true)){
							HX_STACK_LINE(996)
							bool tmp6 = (_g < lv->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(996)
							bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(996)
							if ((tmp7)){
								HX_STACK_LINE(996)
								break;
							}
							HX_STACK_LINE(996)
							Dynamic tmp8 = lv->__GetItem(_g);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(996)
							Dynamic vite = tmp8;		HX_STACK_VAR(vite,"vite");
							HX_STACK_LINE(996)
							++(_g);
							HX_STACK_LINE(1003)
							::nape::geom::Vec2 p = vite;		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(1009)
							{
								HX_STACK_LINE(1010)
								::zpp_nape::util::ZPP_Debug tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1010)
								::nape::geom::Mat23 tmp10 = tmp9->xform->outer;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1010)
								::nape::geom::Vec2 tmp11 = p;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1010)
								::nape::geom::Vec2 tmp12 = tmp10->transform(tmp11,null(),null());		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1010)
								::nape::geom::Vec2 v = tmp12;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(1011)
								bool tmp13 = fsttime;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1011)
								if ((tmp13)){
									HX_STACK_LINE(1012)
									fst = v;
									HX_STACK_LINE(1013)
									Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1013)
									{
										HX_STACK_LINE(1013)
										{
											HX_STACK_LINE(1013)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1013)
											bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1013)
											if ((tmp15)){
												HX_STACK_LINE(1013)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1013)
										tmp14 = v->zpp_inner->x;
									}
									HX_STACK_LINE(1013)
									Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1013)
									{
										HX_STACK_LINE(1013)
										{
											HX_STACK_LINE(1013)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1013)
											bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1013)
											if ((tmp16)){
												HX_STACK_LINE(1013)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1013)
										tmp15 = v->zpp_inner->y;
									}
									HX_STACK_LINE(1013)
									g->moveTo(tmp14,tmp15);
								}
								else{
									HX_STACK_LINE(1015)
									Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1015)
									{
										HX_STACK_LINE(1015)
										{
											HX_STACK_LINE(1015)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1015)
											bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1015)
											if ((tmp15)){
												HX_STACK_LINE(1015)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1015)
										tmp14 = v->zpp_inner->x;
									}
									HX_STACK_LINE(1015)
									Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1015)
									{
										HX_STACK_LINE(1015)
										{
											HX_STACK_LINE(1015)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1015)
											bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1015)
											if ((tmp16)){
												HX_STACK_LINE(1015)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1015)
										tmp15 = v->zpp_inner->y;
									}
									HX_STACK_LINE(1015)
									g->lineTo(tmp14,tmp15);
								}
								HX_STACK_LINE(1016)
								bool tmp14 = fsttime;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1016)
								bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1016)
								if ((tmp15)){
									HX_STACK_LINE(1016)
									::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
									HX_STACK_LINE(1016)
									v->zpp_inner->outer = null();
									HX_STACK_LINE(1016)
									v->zpp_inner = null();
									HX_STACK_LINE(1016)
									{
										HX_STACK_LINE(1016)
										::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1016)
										::nape::geom::Vec2 tmp16 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(1016)
										o->zpp_pool = tmp16;
										HX_STACK_LINE(1016)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
									}
									HX_STACK_LINE(1016)
									{
										HX_STACK_LINE(1016)
										::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1016)
										{
											HX_STACK_LINE(1016)
											bool tmp16 = (o->outer != null());		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1016)
											if ((tmp16)){
												HX_STACK_LINE(1016)
												o->outer->zpp_inner = null();
												HX_STACK_LINE(1016)
												o->outer = null();
											}
											HX_STACK_LINE(1016)
											o->_isimmutable = null();
											HX_STACK_LINE(1016)
											o->_validate = null();
											HX_STACK_LINE(1016)
											o->_invalidate = null();
										}
										HX_STACK_LINE(1016)
										::zpp_nape::geom::ZPP_Vec2 tmp16 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(1016)
										o->next = tmp16;
										HX_STACK_LINE(1016)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
									}
								}
								HX_STACK_LINE(1017)
								fsttime = false;
							}
						}
					}
				}
				else{
					HX_STACK_LINE(1046)
					Dynamic tmp6 = polygon;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1046)
					bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::nape::geom::Vec2List >());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1046)
					if ((tmp7)){
						HX_STACK_LINE(1047)
						::nape::geom::Vec2List lv = polygon;		HX_STACK_VAR(lv,"lv");
						HX_STACK_LINE(1048)
						{
							HX_STACK_LINE(1048)
							::nape::geom::Vec2Iterator tmp8 = lv->iterator();		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1048)
							::nape::geom::Vec2Iterator _g = tmp8;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1048)
							while((true)){
								HX_STACK_LINE(1048)
								bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1048)
								{
									HX_STACK_LINE(1048)
									::zpp_nape::util::ZPP_Vec2List tmp10 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(1048)
									tmp10->valmod();
									HX_STACK_LINE(1048)
									int tmp11 = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1048)
									int length = tmp11;		HX_STACK_VAR(length,"length");
									HX_STACK_LINE(1048)
									_g->zpp_critical = true;
									HX_STACK_LINE(1048)
									bool tmp12 = (_g->zpp_i < length);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1048)
									if ((tmp12)){
										HX_STACK_LINE(1048)
										tmp9 = true;
									}
									else{
										HX_STACK_LINE(1048)
										{
											HX_STACK_LINE(1048)
											::nape::geom::Vec2Iterator tmp13 = ::nape::geom::Vec2Iterator_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(1048)
											_g->zpp_next = tmp13;
											HX_STACK_LINE(1048)
											::nape::geom::Vec2Iterator_obj::zpp_pool = _g;
											HX_STACK_LINE(1048)
											_g->zpp_inner = null();
										}
										HX_STACK_LINE(1048)
										tmp9 = false;
									}
								}
								HX_STACK_LINE(1048)
								bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1048)
								if ((tmp10)){
									HX_STACK_LINE(1048)
									break;
								}
								HX_STACK_LINE(1048)
								::nape::geom::Vec2 tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1048)
								{
									HX_STACK_LINE(1048)
									_g->zpp_critical = false;
									HX_STACK_LINE(1048)
									int tmp12 = (_g->zpp_i)++;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1048)
									tmp11 = _g->zpp_inner->at(tmp12);
								}
								HX_STACK_LINE(1048)
								::nape::geom::Vec2 p = tmp11;		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(1057)
								{
									HX_STACK_LINE(1058)
									::zpp_nape::util::ZPP_Debug tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1058)
									::nape::geom::Mat23 tmp13 = tmp12->xform->outer;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1058)
									::nape::geom::Vec2 tmp14 = p;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1058)
									::nape::geom::Vec2 tmp15 = tmp13->transform(tmp14,null(),null());		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1058)
									::nape::geom::Vec2 v = tmp15;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(1059)
									bool tmp16 = fsttime;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1059)
									if ((tmp16)){
										HX_STACK_LINE(1060)
										fst = v;
										HX_STACK_LINE(1061)
										Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1061)
										{
											HX_STACK_LINE(1061)
											{
												HX_STACK_LINE(1061)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1061)
												bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(1061)
												if ((tmp18)){
													HX_STACK_LINE(1061)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1061)
											tmp17 = v->zpp_inner->x;
										}
										HX_STACK_LINE(1061)
										Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1061)
										{
											HX_STACK_LINE(1061)
											{
												HX_STACK_LINE(1061)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1061)
												bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(1061)
												if ((tmp19)){
													HX_STACK_LINE(1061)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1061)
											tmp18 = v->zpp_inner->y;
										}
										HX_STACK_LINE(1061)
										g->moveTo(tmp17,tmp18);
									}
									else{
										HX_STACK_LINE(1063)
										Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1063)
										{
											HX_STACK_LINE(1063)
											{
												HX_STACK_LINE(1063)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1063)
												bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(1063)
												if ((tmp18)){
													HX_STACK_LINE(1063)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1063)
											tmp17 = v->zpp_inner->x;
										}
										HX_STACK_LINE(1063)
										Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1063)
										{
											HX_STACK_LINE(1063)
											{
												HX_STACK_LINE(1063)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1063)
												bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(1063)
												if ((tmp19)){
													HX_STACK_LINE(1063)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1063)
											tmp18 = v->zpp_inner->y;
										}
										HX_STACK_LINE(1063)
										g->lineTo(tmp17,tmp18);
									}
									HX_STACK_LINE(1064)
									bool tmp17 = fsttime;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1064)
									bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(1064)
									if ((tmp18)){
										HX_STACK_LINE(1064)
										::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
										HX_STACK_LINE(1064)
										v->zpp_inner->outer = null();
										HX_STACK_LINE(1064)
										v->zpp_inner = null();
										HX_STACK_LINE(1064)
										{
											HX_STACK_LINE(1064)
											::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(1064)
											::nape::geom::Vec2 tmp19 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1064)
											o->zpp_pool = tmp19;
											HX_STACK_LINE(1064)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
										}
										HX_STACK_LINE(1064)
										{
											HX_STACK_LINE(1064)
											::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(1064)
											{
												HX_STACK_LINE(1064)
												bool tmp19 = (o->outer != null());		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(1064)
												if ((tmp19)){
													HX_STACK_LINE(1064)
													o->outer->zpp_inner = null();
													HX_STACK_LINE(1064)
													o->outer = null();
												}
												HX_STACK_LINE(1064)
												o->_isimmutable = null();
												HX_STACK_LINE(1064)
												o->_validate = null();
												HX_STACK_LINE(1064)
												o->_invalidate = null();
											}
											HX_STACK_LINE(1064)
											::zpp_nape::geom::ZPP_Vec2 tmp19 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1064)
											o->next = tmp19;
											HX_STACK_LINE(1064)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
										}
									}
									HX_STACK_LINE(1065)
									fsttime = false;
								}
							}
						}
					}
					else{
						HX_STACK_LINE(1069)
						Dynamic tmp8 = polygon;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1069)
						bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::nape::geom::GeomPoly >());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1069)
						if ((tmp9)){
							HX_STACK_LINE(1070)
							::nape::geom::GeomPoly lv = polygon;		HX_STACK_VAR(lv,"lv");
							HX_STACK_LINE(1076)
							::zpp_nape::geom::ZPP_GeomVert tmp10 = lv->zpp_inner->vertices;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1076)
							::zpp_nape::geom::ZPP_GeomVert verts = tmp10;		HX_STACK_VAR(verts,"verts");
							HX_STACK_LINE(1077)
							bool tmp11 = (verts != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1077)
							if ((tmp11)){
								HX_STACK_LINE(1078)
								::zpp_nape::geom::ZPP_GeomVert vite = verts;		HX_STACK_VAR(vite,"vite");
								HX_STACK_LINE(1079)
								while((true)){
									HX_STACK_LINE(1080)
									::nape::geom::Vec2 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1080)
									{
										HX_STACK_LINE(1080)
										Float x = vite->x;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(1080)
										Float y = vite->y;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(1080)
										bool weak = false;		HX_STACK_VAR(weak,"weak");
										HX_STACK_LINE(1080)
										::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(1080)
										{
											HX_STACK_LINE(1080)
											::nape::geom::Vec2 tmp13 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(1080)
											bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1080)
											if ((tmp14)){
												HX_STACK_LINE(1080)
												::nape::geom::Vec2 tmp15 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(1080)
												ret = tmp15;
											}
											else{
												HX_STACK_LINE(1080)
												::nape::geom::Vec2 tmp15 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(1080)
												ret = tmp15;
												HX_STACK_LINE(1080)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
												HX_STACK_LINE(1080)
												ret->zpp_pool = null();
											}
										}
										HX_STACK_LINE(1080)
										bool tmp13 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1080)
										if ((tmp13)){
											HX_STACK_LINE(1080)
											::zpp_nape::geom::ZPP_Vec2 tmp14;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1080)
											{
												HX_STACK_LINE(1080)
												bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
												HX_STACK_LINE(1080)
												::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(1080)
												{
													HX_STACK_LINE(1080)
													::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(1080)
													bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(1080)
													if ((tmp16)){
														HX_STACK_LINE(1080)
														::zpp_nape::geom::ZPP_Vec2 tmp17 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
														HX_STACK_LINE(1080)
														ret1 = tmp17;
													}
													else{
														HX_STACK_LINE(1080)
														::zpp_nape::geom::ZPP_Vec2 tmp17 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
														HX_STACK_LINE(1080)
														ret1 = tmp17;
														HX_STACK_LINE(1080)
														::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(1080)
														ret1->next = null();
													}
													HX_STACK_LINE(1080)
													ret1->weak = false;
												}
												HX_STACK_LINE(1080)
												ret1->_immutable = immutable;
												HX_STACK_LINE(1080)
												{
													HX_STACK_LINE(1080)
													ret1->x = x;
													HX_STACK_LINE(1080)
													ret1->y = y;
													HX_STACK_LINE(1080)
													{
													}
												}
												HX_STACK_LINE(1080)
												tmp14 = ret1;
											}
											HX_STACK_LINE(1080)
											ret->zpp_inner = tmp14;
											HX_STACK_LINE(1080)
											ret->zpp_inner->outer = ret;
										}
										else{
											HX_STACK_LINE(1080)
											Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1080)
											{
												HX_STACK_LINE(1080)
												{
													HX_STACK_LINE(1080)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1080)
													bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(1080)
													if ((tmp15)){
														HX_STACK_LINE(1080)
														_this->_validate();
													}
												}
												HX_STACK_LINE(1080)
												tmp14 = ret->zpp_inner->x;
											}
											HX_STACK_LINE(1080)
											Float tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1080)
											bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1080)
											bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(1080)
											if ((tmp16)){
												HX_STACK_LINE(1080)
												Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(1080)
												{
													HX_STACK_LINE(1080)
													{
														HX_STACK_LINE(1080)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1080)
														bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
														HX_STACK_LINE(1080)
														bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(1080)
														bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(1080)
														if ((tmp21)){
															HX_STACK_LINE(1080)
															_this->_validate();
														}
													}
													HX_STACK_LINE(1080)
													Float tmp19 = ret->zpp_inner->y;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(1080)
													tmp18 = tmp19;
												}
												HX_STACK_LINE(1080)
												Float tmp19 = y;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(1080)
												tmp17 = (tmp18 == tmp19);
											}
											else{
												HX_STACK_LINE(1080)
												tmp17 = false;
											}
											HX_STACK_LINE(1080)
											bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(1080)
											if ((tmp18)){
												HX_STACK_LINE(1080)
												{
													HX_STACK_LINE(1080)
													ret->zpp_inner->x = x;
													HX_STACK_LINE(1080)
													ret->zpp_inner->y = y;
													HX_STACK_LINE(1080)
													{
													}
												}
												HX_STACK_LINE(1080)
												{
													HX_STACK_LINE(1080)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1080)
													bool tmp19 = (_this->_invalidate != null());		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(1080)
													if ((tmp19)){
														HX_STACK_LINE(1080)
														::zpp_nape::geom::ZPP_Vec2 tmp20 = _this;		HX_STACK_VAR(tmp20,"tmp20");
														HX_STACK_LINE(1080)
														_this->_invalidate(tmp20);
													}
												}
											}
											HX_STACK_LINE(1080)
											ret;
										}
										HX_STACK_LINE(1080)
										ret->zpp_inner->weak = weak;
										HX_STACK_LINE(1080)
										tmp12 = ret;
									}
									HX_STACK_LINE(1080)
									::nape::geom::Vec2 p = tmp12;		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(1081)
									vite = vite->next;
									HX_STACK_LINE(1082)
									{
										HX_STACK_LINE(1083)
										::zpp_nape::util::ZPP_Debug tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1083)
										::nape::geom::Mat23 tmp14 = tmp13->xform->outer;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1083)
										::nape::geom::Vec2 tmp15 = p;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1083)
										::nape::geom::Vec2 tmp16 = tmp14->transform(tmp15,null(),null());		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(1083)
										::nape::geom::Vec2 v = tmp16;		HX_STACK_VAR(v,"v");
										HX_STACK_LINE(1084)
										bool tmp17 = fsttime;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1084)
										if ((tmp17)){
											HX_STACK_LINE(1085)
											fst = v;
											HX_STACK_LINE(1086)
											Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(1086)
											{
												HX_STACK_LINE(1086)
												{
													HX_STACK_LINE(1086)
													::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1086)
													bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(1086)
													if ((tmp19)){
														HX_STACK_LINE(1086)
														_this->_validate();
													}
												}
												HX_STACK_LINE(1086)
												tmp18 = v->zpp_inner->x;
											}
											HX_STACK_LINE(1086)
											Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1086)
											{
												HX_STACK_LINE(1086)
												{
													HX_STACK_LINE(1086)
													::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1086)
													bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(1086)
													if ((tmp20)){
														HX_STACK_LINE(1086)
														_this->_validate();
													}
												}
												HX_STACK_LINE(1086)
												tmp19 = v->zpp_inner->y;
											}
											HX_STACK_LINE(1086)
											g->moveTo(tmp18,tmp19);
										}
										else{
											HX_STACK_LINE(1088)
											Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(1088)
											{
												HX_STACK_LINE(1088)
												{
													HX_STACK_LINE(1088)
													::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1088)
													bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(1088)
													if ((tmp19)){
														HX_STACK_LINE(1088)
														_this->_validate();
													}
												}
												HX_STACK_LINE(1088)
												tmp18 = v->zpp_inner->x;
											}
											HX_STACK_LINE(1088)
											Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1088)
											{
												HX_STACK_LINE(1088)
												{
													HX_STACK_LINE(1088)
													::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1088)
													bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(1088)
													if ((tmp20)){
														HX_STACK_LINE(1088)
														_this->_validate();
													}
												}
												HX_STACK_LINE(1088)
												tmp19 = v->zpp_inner->y;
											}
											HX_STACK_LINE(1088)
											g->lineTo(tmp18,tmp19);
										}
										HX_STACK_LINE(1089)
										bool tmp18 = fsttime;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1089)
										bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1089)
										if ((tmp19)){
											HX_STACK_LINE(1089)
											::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
											HX_STACK_LINE(1089)
											v->zpp_inner->outer = null();
											HX_STACK_LINE(1089)
											v->zpp_inner = null();
											HX_STACK_LINE(1089)
											{
												HX_STACK_LINE(1089)
												::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
												HX_STACK_LINE(1089)
												::nape::geom::Vec2 tmp20 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(1089)
												o->zpp_pool = tmp20;
												HX_STACK_LINE(1089)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
											}
											HX_STACK_LINE(1089)
											{
												HX_STACK_LINE(1089)
												::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
												HX_STACK_LINE(1089)
												{
													HX_STACK_LINE(1089)
													bool tmp20 = (o->outer != null());		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(1089)
													if ((tmp20)){
														HX_STACK_LINE(1089)
														o->outer->zpp_inner = null();
														HX_STACK_LINE(1089)
														o->outer = null();
													}
													HX_STACK_LINE(1089)
													o->_isimmutable = null();
													HX_STACK_LINE(1089)
													o->_validate = null();
													HX_STACK_LINE(1089)
													o->_invalidate = null();
												}
												HX_STACK_LINE(1089)
												::zpp_nape::geom::ZPP_Vec2 tmp20 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(1089)
												o->next = tmp20;
												HX_STACK_LINE(1089)
												::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
											}
										}
										HX_STACK_LINE(1090)
										fsttime = false;
									}
									HX_STACK_LINE(1092)
									{
										HX_STACK_LINE(1092)
										::zpp_nape::geom::ZPP_Vec2 inner = p->zpp_inner;		HX_STACK_VAR(inner,"inner");
										HX_STACK_LINE(1092)
										p->zpp_inner->outer = null();
										HX_STACK_LINE(1092)
										p->zpp_inner = null();
										HX_STACK_LINE(1092)
										{
											HX_STACK_LINE(1092)
											::nape::geom::Vec2 o = p;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(1092)
											::nape::geom::Vec2 tmp13 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(1092)
											o->zpp_pool = tmp13;
											HX_STACK_LINE(1092)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
										}
										HX_STACK_LINE(1092)
										{
											HX_STACK_LINE(1092)
											::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(1092)
											{
												HX_STACK_LINE(1092)
												bool tmp13 = (o->outer != null());		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(1092)
												if ((tmp13)){
													HX_STACK_LINE(1092)
													o->outer->zpp_inner = null();
													HX_STACK_LINE(1092)
													o->outer = null();
												}
												HX_STACK_LINE(1092)
												o->_isimmutable = null();
												HX_STACK_LINE(1092)
												o->_validate = null();
												HX_STACK_LINE(1092)
												o->_invalidate = null();
											}
											HX_STACK_LINE(1092)
											::zpp_nape::geom::ZPP_Vec2 tmp13 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(1092)
											o->next = tmp13;
											HX_STACK_LINE(1092)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
										}
									}
									HX_STACK_LINE(1094)
									bool tmp13 = (vite != verts);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1094)
									bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1079)
									if ((tmp14)){
										HX_STACK_LINE(1079)
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
			HX_STACK_LINE(1103)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1103)
			{
				HX_STACK_LINE(1103)
				{
					HX_STACK_LINE(1103)
					::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1103)
					bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1103)
					if ((tmp5)){
						HX_STACK_LINE(1103)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1103)
				tmp4 = fst->zpp_inner->x;
			}
			HX_STACK_LINE(1103)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1103)
			{
				HX_STACK_LINE(1103)
				{
					HX_STACK_LINE(1103)
					::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1103)
					bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1103)
					if ((tmp6)){
						HX_STACK_LINE(1103)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1103)
				tmp5 = fst->zpp_inner->y;
			}
			HX_STACK_LINE(1103)
			g->lineTo(tmp4,tmp5);
			HX_STACK_LINE(1104)
			{
				HX_STACK_LINE(1104)
				::zpp_nape::geom::ZPP_Vec2 inner = fst->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1104)
				fst->zpp_inner->outer = null();
				HX_STACK_LINE(1104)
				fst->zpp_inner = null();
				HX_STACK_LINE(1104)
				{
					HX_STACK_LINE(1104)
					::nape::geom::Vec2 o = fst;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1104)
					::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1104)
					o->zpp_pool = tmp6;
					HX_STACK_LINE(1104)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1104)
				{
					HX_STACK_LINE(1104)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1104)
					{
						HX_STACK_LINE(1104)
						bool tmp6 = (o->outer != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1104)
						if ((tmp6)){
							HX_STACK_LINE(1104)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1104)
							o->outer = null();
						}
						HX_STACK_LINE(1104)
						o->_isimmutable = null();
						HX_STACK_LINE(1104)
						o->_validate = null();
						HX_STACK_LINE(1104)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1104)
					::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1104)
					o->next = tmp6;
					HX_STACK_LINE(1104)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(1106)
		g->endFill();
		HX_STACK_LINE(1107)
		{
			HX_STACK_LINE(1108)
			Dynamic tmp4 = polygon;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1108)
			bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1108)
			if ((tmp5)){
				HX_STACK_LINE(1109)
				Array< ::Dynamic > lv = polygon;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(1110)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1111)
				while((true)){
					HX_STACK_LINE(1111)
					bool tmp6 = (i < lv->length);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1111)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1111)
					if ((tmp7)){
						HX_STACK_LINE(1111)
						break;
					}
					HX_STACK_LINE(1112)
					::nape::geom::Vec2 tmp8 = lv->__get(i).StaticCast< ::nape::geom::Vec2 >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1112)
					::nape::geom::Vec2 cur = tmp8;		HX_STACK_VAR(cur,"cur");
					HX_STACK_LINE(1113)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1113)
					{
						HX_STACK_LINE(1114)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1115)
						tmp10 = cur->zpp_inner->weak;
						HX_STACK_LINE(1114)
						if ((tmp10)){
							HX_STACK_LINE(1117)
							{
								HX_STACK_LINE(1117)
								::zpp_nape::geom::ZPP_Vec2 inner = cur->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(1117)
								cur->zpp_inner->outer = null();
								HX_STACK_LINE(1117)
								cur->zpp_inner = null();
								HX_STACK_LINE(1117)
								{
									HX_STACK_LINE(1117)
									::nape::geom::Vec2 o = cur;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1117)
									::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1117)
									o->zpp_pool = tmp11;
									HX_STACK_LINE(1117)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(1117)
								{
									HX_STACK_LINE(1117)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1117)
									{
										HX_STACK_LINE(1117)
										bool tmp11 = (o->outer != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(1117)
										if ((tmp11)){
											HX_STACK_LINE(1117)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(1117)
											o->outer = null();
										}
										HX_STACK_LINE(1117)
										o->_isimmutable = null();
										HX_STACK_LINE(1117)
										o->_validate = null();
										HX_STACK_LINE(1117)
										o->_invalidate = null();
									}
									HX_STACK_LINE(1117)
									::zpp_nape::geom::ZPP_Vec2 tmp11 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1117)
									o->next = tmp11;
									HX_STACK_LINE(1117)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(1118)
							tmp9 = true;
						}
						else{
							HX_STACK_LINE(1121)
							tmp9 = false;
						}
					}
					HX_STACK_LINE(1113)
					if ((tmp9)){
						HX_STACK_LINE(1124)
						int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1124)
						lv->splice(tmp10,(int)1);
						HX_STACK_LINE(1125)
						continue;
					}
					HX_STACK_LINE(1127)
					(i)++;
				}
			}
			else{
				HX_STACK_LINE(1155)
				Dynamic tmp6 = polygon;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1155)
				bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::nape::geom::Vec2List >());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1155)
				if ((tmp7)){
					HX_STACK_LINE(1156)
					::nape::geom::Vec2List lv = polygon;		HX_STACK_VAR(lv,"lv");
					HX_STACK_LINE(1157)
					Dynamic tmp8 = lv->zpp_inner->_validate;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1157)
					bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1157)
					if ((tmp9)){
						HX_STACK_LINE(1157)
						lv->zpp_inner->_validate();
					}
					HX_STACK_LINE(1158)
					::zpp_nape::util::ZNPList_ZPP_Vec2 tmp10 = lv->zpp_inner->inner;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1158)
					::zpp_nape::util::ZNPList_ZPP_Vec2 ins = tmp10;		HX_STACK_VAR(ins,"ins");
					HX_STACK_LINE(1159)
					::zpp_nape::util::ZNPNode_ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
					HX_STACK_LINE(1160)
					::zpp_nape::util::ZNPNode_ZPP_Vec2 cur = ins->head;		HX_STACK_VAR(cur,"cur");
					HX_STACK_LINE(1161)
					while((true)){
						HX_STACK_LINE(1161)
						bool tmp11 = (cur != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1161)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1161)
						if ((tmp12)){
							HX_STACK_LINE(1161)
							break;
						}
						HX_STACK_LINE(1162)
						::zpp_nape::geom::ZPP_Vec2 x = cur->elt;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1163)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1163)
						{
							HX_STACK_LINE(1164)
							::zpp_nape::geom::ZPP_Vec2 tmp14 = x->outer->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1164)
							tmp13 = tmp14->weak;
						}
						HX_STACK_LINE(1163)
						if ((tmp13)){
							HX_STACK_LINE(1166)
							::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp14 = pre;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1166)
							::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp15 = ins->erase(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1166)
							cur = tmp15;
							HX_STACK_LINE(1167)
							{
								HX_STACK_LINE(1168)
								bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1168)
								{
									HX_STACK_LINE(1169)
									::zpp_nape::geom::ZPP_Vec2 tmp17 = x->outer->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1169)
									tmp16 = tmp17->weak;
								}
								HX_STACK_LINE(1168)
								if ((tmp16)){
									HX_STACK_LINE(1171)
									{
										HX_STACK_LINE(1171)
										::nape::geom::Vec2 _this = x->outer;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1171)
										::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
										HX_STACK_LINE(1171)
										_this->zpp_inner->outer = null();
										HX_STACK_LINE(1171)
										_this->zpp_inner = null();
										HX_STACK_LINE(1171)
										{
											HX_STACK_LINE(1171)
											::nape::geom::Vec2 o = _this;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(1171)
											::nape::geom::Vec2 tmp17 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(1171)
											o->zpp_pool = tmp17;
											HX_STACK_LINE(1171)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
										}
										HX_STACK_LINE(1171)
										{
											HX_STACK_LINE(1171)
											::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(1171)
											{
												HX_STACK_LINE(1171)
												bool tmp17 = (o->outer != null());		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(1171)
												if ((tmp17)){
													HX_STACK_LINE(1171)
													o->outer->zpp_inner = null();
													HX_STACK_LINE(1171)
													o->outer = null();
												}
												HX_STACK_LINE(1171)
												o->_isimmutable = null();
												HX_STACK_LINE(1171)
												o->_validate = null();
												HX_STACK_LINE(1171)
												o->_invalidate = null();
											}
											HX_STACK_LINE(1171)
											::zpp_nape::geom::ZPP_Vec2 tmp17 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(1171)
											o->next = tmp17;
											HX_STACK_LINE(1171)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
										}
									}
									HX_STACK_LINE(1172)
									true;
								}
								else{
									HX_STACK_LINE(1175)
									false;
								}
							}
						}
						else{
							HX_STACK_LINE(1180)
							pre = cur;
							HX_STACK_LINE(1181)
							cur = cur->next;
						}
					}
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::draw( Dynamic object){
{
		HX_STACK_FRAME("nape.util.ShapeDebug","draw",0x5335fb3a,"nape.util.ShapeDebug.draw","nape/util/ShapeDebug.hx",1191,0xfa2f3866)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_LINE(1195)
		::zpp_nape::util::ZPP_Debug tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1195)
		bool tmp1 = tmp->xnull;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1195)
		if ((tmp1)){
			HX_STACK_LINE(1196)
			Dynamic tmp2 = object;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1196)
			bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::nape::space::Space >());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1196)
			if ((tmp3)){
				HX_STACK_LINE(1196)
				::zpp_nape::util::ZPP_ShapeDebug tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1196)
				::nape::space::Space tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1196)
				tmp5 = hx::TCast< ::nape::space::Space >::cast(object);
				HX_STACK_LINE(1196)
				::zpp_nape::space::ZPP_Space tmp6 = tmp5->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1196)
				tmp4->draw_space(tmp6,null(),((Float)1.0),true);
			}
			else{
				HX_STACK_LINE(1197)
				Dynamic tmp4 = object;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1197)
				bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::nape::phys::Compound >());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1197)
				if ((tmp5)){
					HX_STACK_LINE(1197)
					::zpp_nape::util::ZPP_ShapeDebug tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1197)
					::nape::phys::Compound tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1197)
					tmp7 = hx::TCast< ::nape::phys::Compound >::cast(object);
					HX_STACK_LINE(1197)
					::zpp_nape::phys::ZPP_Compound tmp8 = tmp7->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1197)
					tmp6->draw_compound(tmp8,null(),((Float)1.0),true);
				}
				else{
					HX_STACK_LINE(1198)
					Dynamic tmp6 = object;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1198)
					bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::nape::phys::Body >());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1198)
					if ((tmp7)){
						HX_STACK_LINE(1198)
						::zpp_nape::util::ZPP_ShapeDebug tmp8 = this->zpp_inner_zn;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1198)
						::nape::phys::Body tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1198)
						tmp9 = hx::TCast< ::nape::phys::Body >::cast(object);
						HX_STACK_LINE(1198)
						::zpp_nape::phys::ZPP_Body tmp10 = tmp9->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1198)
						tmp8->draw_body(tmp10,null(),((Float)1.0),true);
					}
					else{
						HX_STACK_LINE(1199)
						Dynamic tmp8 = object;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1199)
						bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::nape::shape::Shape >());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1199)
						if ((tmp9)){
							HX_STACK_LINE(1199)
							::zpp_nape::util::ZPP_ShapeDebug tmp10 = this->zpp_inner_zn;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1199)
							::nape::shape::Shape tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1199)
							tmp11 = hx::TCast< ::nape::shape::Shape >::cast(object);
							HX_STACK_LINE(1199)
							::zpp_nape::shape::ZPP_Shape tmp12 = tmp11->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1199)
							tmp10->draw_shape(tmp12,null(),((Float)1.0),true);
						}
						else{
							HX_STACK_LINE(1200)
							Dynamic tmp10 = object;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1200)
							bool tmp11 = ::Std_obj::is(tmp10,hx::ClassOf< ::nape::constraint::Constraint >());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1200)
							if ((tmp11)){
								HX_STACK_LINE(1200)
								::nape::constraint::Constraint tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1200)
								tmp12 = hx::TCast< ::nape::constraint::Constraint >::cast(object);
								HX_STACK_LINE(1200)
								tmp12->zpp_inner->draw(hx::ObjectPtr<OBJ_>(this));
							}
							else{
							}
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(1208)
			Dynamic tmp2 = object;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1208)
			bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::nape::space::Space >());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1208)
			if ((tmp3)){
				HX_STACK_LINE(1208)
				::zpp_nape::util::ZPP_ShapeDebug tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1208)
				::nape::space::Space tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1208)
				tmp5 = hx::TCast< ::nape::space::Space >::cast(object);
				HX_STACK_LINE(1208)
				::zpp_nape::space::ZPP_Space tmp6 = tmp5->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1208)
				::zpp_nape::util::ZPP_Debug tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1208)
				::zpp_nape::geom::ZPP_Mat23 tmp8 = tmp7->xform;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1208)
				::zpp_nape::util::ZPP_Debug tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1208)
				Float tmp10 = tmp9->xdet;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1208)
				tmp4->draw_space(tmp6,tmp8,tmp10,false);
			}
			else{
				HX_STACK_LINE(1209)
				Dynamic tmp4 = object;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1209)
				bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::nape::phys::Body >());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1209)
				if ((tmp5)){
					HX_STACK_LINE(1209)
					::zpp_nape::util::ZPP_ShapeDebug tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1209)
					::nape::phys::Body tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1209)
					tmp7 = hx::TCast< ::nape::phys::Body >::cast(object);
					HX_STACK_LINE(1209)
					::zpp_nape::phys::ZPP_Body tmp8 = tmp7->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1209)
					::zpp_nape::util::ZPP_Debug tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1209)
					::zpp_nape::geom::ZPP_Mat23 tmp10 = tmp9->xform;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1209)
					::zpp_nape::util::ZPP_Debug tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1209)
					Float tmp12 = tmp11->xdet;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1209)
					tmp6->draw_body(tmp8,tmp10,tmp12,false);
				}
				else{
					HX_STACK_LINE(1210)
					Dynamic tmp6 = object;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1210)
					bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::nape::shape::Shape >());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1210)
					if ((tmp7)){
						HX_STACK_LINE(1210)
						::zpp_nape::util::ZPP_ShapeDebug tmp8 = this->zpp_inner_zn;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1210)
						::nape::shape::Shape tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1210)
						tmp9 = hx::TCast< ::nape::shape::Shape >::cast(object);
						HX_STACK_LINE(1210)
						::zpp_nape::shape::ZPP_Shape tmp10 = tmp9->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1210)
						::zpp_nape::util::ZPP_Debug tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1210)
						::zpp_nape::geom::ZPP_Mat23 tmp12 = tmp11->xform;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1210)
						::zpp_nape::util::ZPP_Debug tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1210)
						Float tmp14 = tmp13->xdet;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1210)
						tmp8->draw_shape(tmp10,tmp12,tmp14,false);
					}
					else{
						HX_STACK_LINE(1211)
						Dynamic tmp8 = object;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1211)
						bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::nape::constraint::Constraint >());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1211)
						if ((tmp9)){
							HX_STACK_LINE(1211)
							::nape::constraint::Constraint tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1211)
							tmp10 = hx::TCast< ::nape::constraint::Constraint >::cast(object);
							HX_STACK_LINE(1211)
							tmp10->zpp_inner->draw(hx::ObjectPtr<OBJ_>(this));
						}
						else{
						}
					}
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::drawSpring( ::nape::geom::Vec2 start,::nape::geom::Vec2 end,int colour,hx::Null< int >  __o_coils,hx::Null< Float >  __o_radius){
int coils = __o_coils.Default(3);
Float radius = __o_radius.Default(((Float)3.0));
	HX_STACK_FRAME("nape.util.ShapeDebug","drawSpring",0x186b6da7,"nape.util.ShapeDebug.drawSpring","nape/util/ShapeDebug.hx",1223,0xfa2f3866)
	HX_STACK_THIS(this)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(end,"end")
	HX_STACK_ARG(colour,"colour")
	HX_STACK_ARG(coils,"coils")
	HX_STACK_ARG(radius,"radius")
{
		HX_STACK_LINE(1243)
		bool tmp = (coils == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1243)
		if ((tmp)){
			HX_STACK_LINE(1243)
			::nape::geom::Vec2 tmp1 = start;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1243)
			::nape::geom::Vec2 tmp2 = end;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1243)
			int tmp3 = colour;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1243)
			this->drawLine(tmp1,tmp2,tmp3);
		}
		else{
			HX_STACK_LINE(1245)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1245)
			{
				HX_STACK_LINE(1245)
				{
					HX_STACK_LINE(1245)
					::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1245)
					bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1245)
					if ((tmp2)){
						HX_STACK_LINE(1245)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1245)
				tmp1 = end->zpp_inner->x;
			}
			HX_STACK_LINE(1245)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1245)
			{
				HX_STACK_LINE(1245)
				{
					HX_STACK_LINE(1245)
					::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1245)
					bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1245)
					if ((tmp3)){
						HX_STACK_LINE(1245)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1245)
				tmp2 = start->zpp_inner->x;
			}
			HX_STACK_LINE(1245)
			Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1245)
			Float dx = tmp3;		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(1246)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1246)
			{
				HX_STACK_LINE(1246)
				{
					HX_STACK_LINE(1246)
					::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1246)
					bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1246)
					if ((tmp5)){
						HX_STACK_LINE(1246)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1246)
				tmp4 = end->zpp_inner->y;
			}
			HX_STACK_LINE(1246)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1246)
			{
				HX_STACK_LINE(1246)
				{
					HX_STACK_LINE(1246)
					::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1246)
					bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1246)
					if ((tmp6)){
						HX_STACK_LINE(1246)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1246)
				tmp5 = start->zpp_inner->y;
			}
			HX_STACK_LINE(1246)
			Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1246)
			Float dy = tmp6;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(1263)
			{
				HX_STACK_LINE(1264)
				int tmp7 = (coils * (int)4);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1264)
				Float tmp8 = (Float(((Float)1.0)) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1264)
				Float t = tmp8;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1273)
				hx::MultEq(dx,t);
				HX_STACK_LINE(1274)
				hx::MultEq(dy,t);
			}
			HX_STACK_LINE(1276)
			Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(1277)
			Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
			HX_STACK_LINE(1278)
			{
				HX_STACK_LINE(1279)
				nx = dx;
				HX_STACK_LINE(1280)
				ny = dy;
				HX_STACK_LINE(1289)
				{
				}
			}
			HX_STACK_LINE(1298)
			Float tmp7 = (nx * nx);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1298)
			Float tmp8 = (ny * ny);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1298)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1298)
			bool tmp10 = (tmp9 < ((Float)0.1));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1298)
			if ((tmp10)){
				HX_STACK_LINE(1298)
				return null();
			}
			HX_STACK_LINE(1299)
			{
				HX_STACK_LINE(1300)
				{
					HX_STACK_LINE(1301)
					Float tmp11 = (nx * nx);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1301)
					Float tmp12 = (ny * ny);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1301)
					Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1301)
					Float d = tmp13;		HX_STACK_VAR(d,"d");
					HX_STACK_LINE(1310)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1310)
					{
						HX_STACK_LINE(1310)
						Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1310)
						{
							HX_STACK_LINE(1310)
							Float tmp16 = d;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1310)
							tmp15 = ::Math_obj::sqrt(tmp16);
						}
						HX_STACK_LINE(1310)
						tmp14 = (Float(((Float)1.0)) / Float(tmp15));
					}
					HX_STACK_LINE(1310)
					Float imag = tmp14;		HX_STACK_VAR(imag,"imag");
					HX_STACK_LINE(1311)
					{
						HX_STACK_LINE(1312)
						Float t = imag;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1321)
						hx::MultEq(nx,t);
						HX_STACK_LINE(1322)
						hx::MultEq(ny,t);
					}
				}
				HX_STACK_LINE(1325)
				{
					HX_STACK_LINE(1326)
					Float t = nx;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1327)
					Float tmp11 = ny;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1327)
					Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1327)
					nx = tmp12;
					HX_STACK_LINE(1328)
					ny = t;
				}
			}
			HX_STACK_LINE(1331)
			{
				HX_STACK_LINE(1332)
				Float tmp11 = (radius * (int)2);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1332)
				Float t = tmp11;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1341)
				hx::MultEq(nx,t);
				HX_STACK_LINE(1342)
				hx::MultEq(ny,t);
			}
			HX_STACK_LINE(1344)
			::nape::geom::Vec2 tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1344)
			{
				HX_STACK_LINE(1344)
				bool weak = false;		HX_STACK_VAR(weak,"weak");
				HX_STACK_LINE(1344)
				{
					HX_STACK_LINE(1344)
					Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1344)
					{
						HX_STACK_LINE(1344)
						{
							HX_STACK_LINE(1344)
							::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1344)
							bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1344)
							if ((tmp13)){
								HX_STACK_LINE(1344)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1344)
						tmp12 = start->zpp_inner->x;
					}
					HX_STACK_LINE(1344)
					Float x = tmp12;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(1344)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1344)
					{
						HX_STACK_LINE(1344)
						{
							HX_STACK_LINE(1344)
							::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1344)
							bool tmp14 = (_this->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1344)
							if ((tmp14)){
								HX_STACK_LINE(1344)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1344)
						tmp13 = start->zpp_inner->y;
					}
					HX_STACK_LINE(1344)
					Float y = tmp13;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(1344)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1344)
					{
						HX_STACK_LINE(1344)
						::nape::geom::Vec2 tmp14 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1344)
						bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1344)
						if ((tmp15)){
							HX_STACK_LINE(1344)
							::nape::geom::Vec2 tmp16 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1344)
							ret = tmp16;
						}
						else{
							HX_STACK_LINE(1344)
							::nape::geom::Vec2 tmp16 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1344)
							ret = tmp16;
							HX_STACK_LINE(1344)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
							HX_STACK_LINE(1344)
							ret->zpp_pool = null();
						}
					}
					HX_STACK_LINE(1344)
					bool tmp14 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1344)
					if ((tmp14)){
						HX_STACK_LINE(1344)
						::zpp_nape::geom::ZPP_Vec2 tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1344)
						{
							HX_STACK_LINE(1344)
							bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
							HX_STACK_LINE(1344)
							::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(1344)
							{
								HX_STACK_LINE(1344)
								::zpp_nape::geom::ZPP_Vec2 tmp16 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1344)
								bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1344)
								if ((tmp17)){
									HX_STACK_LINE(1344)
									::zpp_nape::geom::ZPP_Vec2 tmp18 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(1344)
									ret1 = tmp18;
								}
								else{
									HX_STACK_LINE(1344)
									::zpp_nape::geom::ZPP_Vec2 tmp18 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(1344)
									ret1 = tmp18;
									HX_STACK_LINE(1344)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
									HX_STACK_LINE(1344)
									ret1->next = null();
								}
								HX_STACK_LINE(1344)
								ret1->weak = false;
							}
							HX_STACK_LINE(1344)
							ret1->_immutable = immutable;
							HX_STACK_LINE(1344)
							{
								HX_STACK_LINE(1344)
								ret1->x = x;
								HX_STACK_LINE(1344)
								ret1->y = y;
								HX_STACK_LINE(1344)
								{
								}
							}
							HX_STACK_LINE(1344)
							tmp15 = ret1;
						}
						HX_STACK_LINE(1344)
						ret->zpp_inner = tmp15;
						HX_STACK_LINE(1344)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(1344)
						Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1344)
						{
							HX_STACK_LINE(1344)
							{
								HX_STACK_LINE(1344)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1344)
								bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1344)
								if ((tmp16)){
									HX_STACK_LINE(1344)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1344)
							tmp15 = ret->zpp_inner->x;
						}
						HX_STACK_LINE(1344)
						Float tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1344)
						bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1344)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1344)
						if ((tmp17)){
							HX_STACK_LINE(1344)
							Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1344)
							{
								HX_STACK_LINE(1344)
								{
									HX_STACK_LINE(1344)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1344)
									bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(1344)
									bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(1344)
									bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(1344)
									if ((tmp22)){
										HX_STACK_LINE(1344)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1344)
								Float tmp20 = ret->zpp_inner->y;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1344)
								tmp19 = tmp20;
							}
							HX_STACK_LINE(1344)
							Float tmp20 = y;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1344)
							tmp18 = (tmp19 == tmp20);
						}
						else{
							HX_STACK_LINE(1344)
							tmp18 = false;
						}
						HX_STACK_LINE(1344)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1344)
						if ((tmp19)){
							HX_STACK_LINE(1344)
							{
								HX_STACK_LINE(1344)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(1344)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(1344)
								{
								}
							}
							HX_STACK_LINE(1344)
							{
								HX_STACK_LINE(1344)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1344)
								bool tmp20 = (_this->_invalidate != null());		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1344)
								if ((tmp20)){
									HX_STACK_LINE(1344)
									::zpp_nape::geom::ZPP_Vec2 tmp21 = _this;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(1344)
									_this->_invalidate(tmp21);
								}
							}
						}
						HX_STACK_LINE(1344)
						ret;
					}
					HX_STACK_LINE(1344)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(1344)
					tmp11 = ret;
				}
			}
			HX_STACK_LINE(1344)
			::nape::geom::Vec2 u = tmp11;		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(1345)
			::nape::geom::Vec2 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1345)
			{
				HX_STACK_LINE(1345)
				Float x = (int)0;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(1345)
				Float y = (int)0;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(1345)
				bool weak = false;		HX_STACK_VAR(weak,"weak");
				HX_STACK_LINE(1345)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1345)
				{
					HX_STACK_LINE(1345)
					::nape::geom::Vec2 tmp13 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1345)
					bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1345)
					if ((tmp14)){
						HX_STACK_LINE(1345)
						::nape::geom::Vec2 tmp15 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1345)
						ret = tmp15;
					}
					else{
						HX_STACK_LINE(1345)
						::nape::geom::Vec2 tmp15 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1345)
						ret = tmp15;
						HX_STACK_LINE(1345)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(1345)
						ret->zpp_pool = null();
					}
				}
				HX_STACK_LINE(1345)
				bool tmp13 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1345)
				if ((tmp13)){
					HX_STACK_LINE(1345)
					::zpp_nape::geom::ZPP_Vec2 tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1345)
					{
						HX_STACK_LINE(1345)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(1345)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(1345)
						{
							HX_STACK_LINE(1345)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1345)
							bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1345)
							if ((tmp16)){
								HX_STACK_LINE(1345)
								::zpp_nape::geom::ZPP_Vec2 tmp17 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1345)
								ret1 = tmp17;
							}
							else{
								HX_STACK_LINE(1345)
								::zpp_nape::geom::ZPP_Vec2 tmp17 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1345)
								ret1 = tmp17;
								HX_STACK_LINE(1345)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(1345)
								ret1->next = null();
							}
							HX_STACK_LINE(1345)
							ret1->weak = false;
						}
						HX_STACK_LINE(1345)
						ret1->_immutable = immutable;
						HX_STACK_LINE(1345)
						{
							HX_STACK_LINE(1345)
							ret1->x = x;
							HX_STACK_LINE(1345)
							ret1->y = y;
							HX_STACK_LINE(1345)
							{
							}
						}
						HX_STACK_LINE(1345)
						tmp14 = ret1;
					}
					HX_STACK_LINE(1345)
					ret->zpp_inner = tmp14;
					HX_STACK_LINE(1345)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(1345)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1345)
					{
						HX_STACK_LINE(1345)
						{
							HX_STACK_LINE(1345)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1345)
							bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1345)
							if ((tmp15)){
								HX_STACK_LINE(1345)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1345)
						tmp14 = ret->zpp_inner->x;
					}
					HX_STACK_LINE(1345)
					Float tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1345)
					bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1345)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1345)
					if ((tmp16)){
						HX_STACK_LINE(1345)
						Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1345)
						{
							HX_STACK_LINE(1345)
							{
								HX_STACK_LINE(1345)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1345)
								bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1345)
								bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1345)
								bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1345)
								if ((tmp21)){
									HX_STACK_LINE(1345)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1345)
							Float tmp19 = ret->zpp_inner->y;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1345)
							tmp18 = tmp19;
						}
						HX_STACK_LINE(1345)
						Float tmp19 = y;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1345)
						tmp17 = (tmp18 == tmp19);
					}
					else{
						HX_STACK_LINE(1345)
						tmp17 = false;
					}
					HX_STACK_LINE(1345)
					bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1345)
					if ((tmp18)){
						HX_STACK_LINE(1345)
						{
							HX_STACK_LINE(1345)
							ret->zpp_inner->x = x;
							HX_STACK_LINE(1345)
							ret->zpp_inner->y = y;
							HX_STACK_LINE(1345)
							{
							}
						}
						HX_STACK_LINE(1345)
						{
							HX_STACK_LINE(1345)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1345)
							bool tmp19 = (_this->_invalidate != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1345)
							if ((tmp19)){
								HX_STACK_LINE(1345)
								::zpp_nape::geom::ZPP_Vec2 tmp20 = _this;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1345)
								_this->_invalidate(tmp20);
							}
						}
					}
					HX_STACK_LINE(1345)
					ret;
				}
				HX_STACK_LINE(1345)
				ret->zpp_inner->weak = weak;
				HX_STACK_LINE(1345)
				tmp12 = ret;
			}
			HX_STACK_LINE(1345)
			::nape::geom::Vec2 v = tmp12;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(1346)
			::nape::geom::Vec2 tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1346)
			{
				HX_STACK_LINE(1346)
				Float x = (int)0;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(1346)
				Float y = (int)0;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(1346)
				bool weak = false;		HX_STACK_VAR(weak,"weak");
				HX_STACK_LINE(1346)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1346)
				{
					HX_STACK_LINE(1346)
					::nape::geom::Vec2 tmp14 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1346)
					bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1346)
					if ((tmp15)){
						HX_STACK_LINE(1346)
						::nape::geom::Vec2 tmp16 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1346)
						ret = tmp16;
					}
					else{
						HX_STACK_LINE(1346)
						::nape::geom::Vec2 tmp16 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1346)
						ret = tmp16;
						HX_STACK_LINE(1346)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(1346)
						ret->zpp_pool = null();
					}
				}
				HX_STACK_LINE(1346)
				bool tmp14 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1346)
				if ((tmp14)){
					HX_STACK_LINE(1346)
					::zpp_nape::geom::ZPP_Vec2 tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1346)
					{
						HX_STACK_LINE(1346)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(1346)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(1346)
						{
							HX_STACK_LINE(1346)
							::zpp_nape::geom::ZPP_Vec2 tmp16 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1346)
							bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1346)
							if ((tmp17)){
								HX_STACK_LINE(1346)
								::zpp_nape::geom::ZPP_Vec2 tmp18 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1346)
								ret1 = tmp18;
							}
							else{
								HX_STACK_LINE(1346)
								::zpp_nape::geom::ZPP_Vec2 tmp18 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1346)
								ret1 = tmp18;
								HX_STACK_LINE(1346)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(1346)
								ret1->next = null();
							}
							HX_STACK_LINE(1346)
							ret1->weak = false;
						}
						HX_STACK_LINE(1346)
						ret1->_immutable = immutable;
						HX_STACK_LINE(1346)
						{
							HX_STACK_LINE(1346)
							ret1->x = x;
							HX_STACK_LINE(1346)
							ret1->y = y;
							HX_STACK_LINE(1346)
							{
							}
						}
						HX_STACK_LINE(1346)
						tmp15 = ret1;
					}
					HX_STACK_LINE(1346)
					ret->zpp_inner = tmp15;
					HX_STACK_LINE(1346)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(1346)
					Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1346)
					{
						HX_STACK_LINE(1346)
						{
							HX_STACK_LINE(1346)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1346)
							bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1346)
							if ((tmp16)){
								HX_STACK_LINE(1346)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1346)
						tmp15 = ret->zpp_inner->x;
					}
					HX_STACK_LINE(1346)
					Float tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1346)
					bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1346)
					bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1346)
					if ((tmp17)){
						HX_STACK_LINE(1346)
						Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1346)
						{
							HX_STACK_LINE(1346)
							{
								HX_STACK_LINE(1346)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1346)
								bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1346)
								bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1346)
								bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1346)
								if ((tmp22)){
									HX_STACK_LINE(1346)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1346)
							Float tmp20 = ret->zpp_inner->y;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1346)
							tmp19 = tmp20;
						}
						HX_STACK_LINE(1346)
						Float tmp20 = y;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1346)
						tmp18 = (tmp19 == tmp20);
					}
					else{
						HX_STACK_LINE(1346)
						tmp18 = false;
					}
					HX_STACK_LINE(1346)
					bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1346)
					if ((tmp19)){
						HX_STACK_LINE(1346)
						{
							HX_STACK_LINE(1346)
							ret->zpp_inner->x = x;
							HX_STACK_LINE(1346)
							ret->zpp_inner->y = y;
							HX_STACK_LINE(1346)
							{
							}
						}
						HX_STACK_LINE(1346)
						{
							HX_STACK_LINE(1346)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1346)
							bool tmp20 = (_this->_invalidate != null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1346)
							if ((tmp20)){
								HX_STACK_LINE(1346)
								::zpp_nape::geom::ZPP_Vec2 tmp21 = _this;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1346)
								_this->_invalidate(tmp21);
							}
						}
					}
					HX_STACK_LINE(1346)
					ret;
				}
				HX_STACK_LINE(1346)
				ret->zpp_inner->weak = weak;
				HX_STACK_LINE(1346)
				tmp13 = ret;
			}
			HX_STACK_LINE(1346)
			::nape::geom::Vec2 q = tmp13;		HX_STACK_VAR(q,"q");
			HX_STACK_LINE(1347)
			{
				HX_STACK_LINE(1347)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1347)
				while((true)){
					HX_STACK_LINE(1347)
					bool tmp14 = (_g < coils);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1347)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1347)
					if ((tmp15)){
						HX_STACK_LINE(1347)
						break;
					}
					HX_STACK_LINE(1347)
					int tmp16 = (_g)++;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1347)
					int i = tmp16;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1348)
					{
						HX_STACK_LINE(1348)
						Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1348)
						{
							HX_STACK_LINE(1348)
							{
								HX_STACK_LINE(1348)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1348)
								bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1348)
								if ((tmp18)){
									HX_STACK_LINE(1348)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1348)
							tmp17 = u->zpp_inner->x;
						}
						HX_STACK_LINE(1348)
						Float tmp18 = dx;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1348)
						Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1348)
						Float tmp20 = nx;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1348)
						Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1348)
						Float x = tmp21;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1348)
						{
							HX_STACK_LINE(1348)
							Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1348)
							{
								HX_STACK_LINE(1348)
								{
									HX_STACK_LINE(1348)
									::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1348)
									bool tmp23 = (_this->_validate != null());		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1348)
									if ((tmp23)){
										HX_STACK_LINE(1348)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1348)
								tmp22 = v->zpp_inner->x;
							}
							HX_STACK_LINE(1348)
							Float tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1348)
							bool tmp24 = (tmp22 != tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1348)
							if ((tmp24)){
								HX_STACK_LINE(1348)
								v->zpp_inner->x = x;
								HX_STACK_LINE(1348)
								{
									HX_STACK_LINE(1348)
									::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1348)
									bool tmp25 = (_this->_invalidate != null());		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1348)
									if ((tmp25)){
										HX_STACK_LINE(1348)
										::zpp_nape::geom::ZPP_Vec2 tmp26 = _this;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1348)
										_this->_invalidate(tmp26);
									}
								}
							}
						}
						HX_STACK_LINE(1348)
						{
							HX_STACK_LINE(1348)
							{
								HX_STACK_LINE(1348)
								::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1348)
								bool tmp22 = (_this->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1348)
								if ((tmp22)){
									HX_STACK_LINE(1348)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1348)
							v->zpp_inner->x;
						}
					}
					HX_STACK_LINE(1349)
					{
						HX_STACK_LINE(1349)
						Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1349)
						{
							HX_STACK_LINE(1349)
							{
								HX_STACK_LINE(1349)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1349)
								bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1349)
								if ((tmp18)){
									HX_STACK_LINE(1349)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1349)
							tmp17 = u->zpp_inner->y;
						}
						HX_STACK_LINE(1349)
						Float tmp18 = dy;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1349)
						Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1349)
						Float tmp20 = ny;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1349)
						Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1349)
						Float y = tmp21;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(1349)
						{
							HX_STACK_LINE(1349)
							Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1349)
							{
								HX_STACK_LINE(1349)
								{
									HX_STACK_LINE(1349)
									::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1349)
									bool tmp23 = (_this->_validate != null());		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1349)
									if ((tmp23)){
										HX_STACK_LINE(1349)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1349)
								tmp22 = v->zpp_inner->y;
							}
							HX_STACK_LINE(1349)
							Float tmp23 = y;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1349)
							bool tmp24 = (tmp22 != tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1349)
							if ((tmp24)){
								HX_STACK_LINE(1349)
								v->zpp_inner->y = y;
								HX_STACK_LINE(1349)
								{
									HX_STACK_LINE(1349)
									::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1349)
									bool tmp25 = (_this->_invalidate != null());		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1349)
									if ((tmp25)){
										HX_STACK_LINE(1349)
										::zpp_nape::geom::ZPP_Vec2 tmp26 = _this;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1349)
										_this->_invalidate(tmp26);
									}
								}
							}
						}
						HX_STACK_LINE(1349)
						{
							HX_STACK_LINE(1349)
							{
								HX_STACK_LINE(1349)
								::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1349)
								bool tmp22 = (_this->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1349)
								if ((tmp22)){
									HX_STACK_LINE(1349)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1349)
							v->zpp_inner->y;
						}
					}
					HX_STACK_LINE(1350)
					{
						HX_STACK_LINE(1350)
						Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1350)
						{
							HX_STACK_LINE(1350)
							{
								HX_STACK_LINE(1350)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1350)
								bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1350)
								if ((tmp18)){
									HX_STACK_LINE(1350)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1350)
							tmp17 = u->zpp_inner->x;
						}
						HX_STACK_LINE(1350)
						Float tmp18 = (dx * (int)2);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1350)
						Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1350)
						Float x = tmp19;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1350)
						{
							HX_STACK_LINE(1350)
							Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1350)
							{
								HX_STACK_LINE(1350)
								{
									HX_STACK_LINE(1350)
									::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1350)
									bool tmp21 = (_this->_validate != null());		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(1350)
									if ((tmp21)){
										HX_STACK_LINE(1350)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1350)
								tmp20 = q->zpp_inner->x;
							}
							HX_STACK_LINE(1350)
							Float tmp21 = x;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1350)
							bool tmp22 = (tmp20 != tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1350)
							if ((tmp22)){
								HX_STACK_LINE(1350)
								q->zpp_inner->x = x;
								HX_STACK_LINE(1350)
								{
									HX_STACK_LINE(1350)
									::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1350)
									bool tmp23 = (_this->_invalidate != null());		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1350)
									if ((tmp23)){
										HX_STACK_LINE(1350)
										::zpp_nape::geom::ZPP_Vec2 tmp24 = _this;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(1350)
										_this->_invalidate(tmp24);
									}
								}
							}
						}
						HX_STACK_LINE(1350)
						{
							HX_STACK_LINE(1350)
							{
								HX_STACK_LINE(1350)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1350)
								bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1350)
								if ((tmp20)){
									HX_STACK_LINE(1350)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1350)
							q->zpp_inner->x;
						}
					}
					HX_STACK_LINE(1351)
					{
						HX_STACK_LINE(1351)
						Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1351)
						{
							HX_STACK_LINE(1351)
							{
								HX_STACK_LINE(1351)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1351)
								bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1351)
								if ((tmp18)){
									HX_STACK_LINE(1351)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1351)
							tmp17 = u->zpp_inner->y;
						}
						HX_STACK_LINE(1351)
						Float tmp18 = (dy * (int)2);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1351)
						Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1351)
						Float y = tmp19;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(1351)
						{
							HX_STACK_LINE(1351)
							Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1351)
							{
								HX_STACK_LINE(1351)
								{
									HX_STACK_LINE(1351)
									::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1351)
									bool tmp21 = (_this->_validate != null());		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(1351)
									if ((tmp21)){
										HX_STACK_LINE(1351)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1351)
								tmp20 = q->zpp_inner->y;
							}
							HX_STACK_LINE(1351)
							Float tmp21 = y;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1351)
							bool tmp22 = (tmp20 != tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1351)
							if ((tmp22)){
								HX_STACK_LINE(1351)
								q->zpp_inner->y = y;
								HX_STACK_LINE(1351)
								{
									HX_STACK_LINE(1351)
									::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1351)
									bool tmp23 = (_this->_invalidate != null());		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1351)
									if ((tmp23)){
										HX_STACK_LINE(1351)
										::zpp_nape::geom::ZPP_Vec2 tmp24 = _this;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(1351)
										_this->_invalidate(tmp24);
									}
								}
							}
						}
						HX_STACK_LINE(1351)
						{
							HX_STACK_LINE(1351)
							{
								HX_STACK_LINE(1351)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1351)
								bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1351)
								if ((tmp20)){
									HX_STACK_LINE(1351)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1351)
							q->zpp_inner->y;
						}
					}
					HX_STACK_LINE(1352)
					::nape::geom::Vec2 tmp17 = u;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1352)
					::nape::geom::Vec2 tmp18 = v;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1352)
					::nape::geom::Vec2 tmp19 = q;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1352)
					int tmp20 = colour;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1352)
					this->drawCurve(tmp17,tmp18,tmp19,tmp20);
					HX_STACK_LINE(1353)
					{
						HX_STACK_LINE(1353)
						Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1353)
						{
							HX_STACK_LINE(1353)
							{
								HX_STACK_LINE(1353)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1353)
								bool tmp22 = (_this->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1353)
								if ((tmp22)){
									HX_STACK_LINE(1353)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1353)
							tmp21 = q->zpp_inner->x;
						}
						HX_STACK_LINE(1353)
						Float x = tmp21;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1353)
						{
							HX_STACK_LINE(1353)
							Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1353)
							{
								HX_STACK_LINE(1353)
								{
									HX_STACK_LINE(1353)
									::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1353)
									bool tmp23 = (_this->_validate != null());		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1353)
									if ((tmp23)){
										HX_STACK_LINE(1353)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1353)
								tmp22 = u->zpp_inner->x;
							}
							HX_STACK_LINE(1353)
							Float tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1353)
							bool tmp24 = (tmp22 != tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1353)
							if ((tmp24)){
								HX_STACK_LINE(1353)
								u->zpp_inner->x = x;
								HX_STACK_LINE(1353)
								{
									HX_STACK_LINE(1353)
									::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1353)
									bool tmp25 = (_this->_invalidate != null());		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1353)
									if ((tmp25)){
										HX_STACK_LINE(1353)
										::zpp_nape::geom::ZPP_Vec2 tmp26 = _this;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1353)
										_this->_invalidate(tmp26);
									}
								}
							}
						}
						HX_STACK_LINE(1353)
						{
							HX_STACK_LINE(1353)
							{
								HX_STACK_LINE(1353)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1353)
								bool tmp22 = (_this->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1353)
								if ((tmp22)){
									HX_STACK_LINE(1353)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1353)
							u->zpp_inner->x;
						}
					}
					HX_STACK_LINE(1354)
					{
						HX_STACK_LINE(1354)
						Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1354)
						{
							HX_STACK_LINE(1354)
							{
								HX_STACK_LINE(1354)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1354)
								bool tmp22 = (_this->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1354)
								if ((tmp22)){
									HX_STACK_LINE(1354)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1354)
							tmp21 = q->zpp_inner->y;
						}
						HX_STACK_LINE(1354)
						Float y = tmp21;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(1354)
						{
							HX_STACK_LINE(1354)
							Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1354)
							{
								HX_STACK_LINE(1354)
								{
									HX_STACK_LINE(1354)
									::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1354)
									bool tmp23 = (_this->_validate != null());		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1354)
									if ((tmp23)){
										HX_STACK_LINE(1354)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1354)
								tmp22 = u->zpp_inner->y;
							}
							HX_STACK_LINE(1354)
							Float tmp23 = y;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1354)
							bool tmp24 = (tmp22 != tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1354)
							if ((tmp24)){
								HX_STACK_LINE(1354)
								u->zpp_inner->y = y;
								HX_STACK_LINE(1354)
								{
									HX_STACK_LINE(1354)
									::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1354)
									bool tmp25 = (_this->_invalidate != null());		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1354)
									if ((tmp25)){
										HX_STACK_LINE(1354)
										::zpp_nape::geom::ZPP_Vec2 tmp26 = _this;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1354)
										_this->_invalidate(tmp26);
									}
								}
							}
						}
						HX_STACK_LINE(1354)
						{
							HX_STACK_LINE(1354)
							{
								HX_STACK_LINE(1354)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1354)
								bool tmp22 = (_this->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1354)
								if ((tmp22)){
									HX_STACK_LINE(1354)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1354)
							u->zpp_inner->y;
						}
					}
					HX_STACK_LINE(1355)
					{
						HX_STACK_LINE(1355)
						Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1355)
						{
							HX_STACK_LINE(1355)
							{
								HX_STACK_LINE(1355)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1355)
								bool tmp22 = (_this->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1355)
								if ((tmp22)){
									HX_STACK_LINE(1355)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1355)
							tmp21 = u->zpp_inner->x;
						}
						HX_STACK_LINE(1355)
						Float tmp22 = dx;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1355)
						Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1355)
						Float tmp24 = nx;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1355)
						Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1355)
						Float x = tmp25;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1355)
						{
							HX_STACK_LINE(1355)
							Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1355)
							{
								HX_STACK_LINE(1355)
								{
									HX_STACK_LINE(1355)
									::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1355)
									bool tmp27 = (_this->_validate != null());		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1355)
									if ((tmp27)){
										HX_STACK_LINE(1355)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1355)
								tmp26 = v->zpp_inner->x;
							}
							HX_STACK_LINE(1355)
							Float tmp27 = x;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1355)
							bool tmp28 = (tmp26 != tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1355)
							if ((tmp28)){
								HX_STACK_LINE(1355)
								v->zpp_inner->x = x;
								HX_STACK_LINE(1355)
								{
									HX_STACK_LINE(1355)
									::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1355)
									bool tmp29 = (_this->_invalidate != null());		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1355)
									if ((tmp29)){
										HX_STACK_LINE(1355)
										::zpp_nape::geom::ZPP_Vec2 tmp30 = _this;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1355)
										_this->_invalidate(tmp30);
									}
								}
							}
						}
						HX_STACK_LINE(1355)
						{
							HX_STACK_LINE(1355)
							{
								HX_STACK_LINE(1355)
								::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1355)
								bool tmp26 = (_this->_validate != null());		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1355)
								if ((tmp26)){
									HX_STACK_LINE(1355)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1355)
							v->zpp_inner->x;
						}
					}
					HX_STACK_LINE(1356)
					{
						HX_STACK_LINE(1356)
						Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1356)
						{
							HX_STACK_LINE(1356)
							{
								HX_STACK_LINE(1356)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1356)
								bool tmp22 = (_this->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1356)
								if ((tmp22)){
									HX_STACK_LINE(1356)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1356)
							tmp21 = u->zpp_inner->y;
						}
						HX_STACK_LINE(1356)
						Float tmp22 = dy;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1356)
						Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1356)
						Float tmp24 = ny;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1356)
						Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1356)
						Float y = tmp25;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(1356)
						{
							HX_STACK_LINE(1356)
							Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1356)
							{
								HX_STACK_LINE(1356)
								{
									HX_STACK_LINE(1356)
									::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1356)
									bool tmp27 = (_this->_validate != null());		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1356)
									if ((tmp27)){
										HX_STACK_LINE(1356)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1356)
								tmp26 = v->zpp_inner->y;
							}
							HX_STACK_LINE(1356)
							Float tmp27 = y;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1356)
							bool tmp28 = (tmp26 != tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1356)
							if ((tmp28)){
								HX_STACK_LINE(1356)
								v->zpp_inner->y = y;
								HX_STACK_LINE(1356)
								{
									HX_STACK_LINE(1356)
									::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1356)
									bool tmp29 = (_this->_invalidate != null());		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1356)
									if ((tmp29)){
										HX_STACK_LINE(1356)
										::zpp_nape::geom::ZPP_Vec2 tmp30 = _this;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1356)
										_this->_invalidate(tmp30);
									}
								}
							}
						}
						HX_STACK_LINE(1356)
						{
							HX_STACK_LINE(1356)
							{
								HX_STACK_LINE(1356)
								::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1356)
								bool tmp26 = (_this->_validate != null());		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1356)
								if ((tmp26)){
									HX_STACK_LINE(1356)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1356)
							v->zpp_inner->y;
						}
					}
					HX_STACK_LINE(1357)
					{
						HX_STACK_LINE(1357)
						Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1357)
						{
							HX_STACK_LINE(1357)
							{
								HX_STACK_LINE(1357)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1357)
								bool tmp22 = (_this->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1357)
								if ((tmp22)){
									HX_STACK_LINE(1357)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1357)
							tmp21 = u->zpp_inner->x;
						}
						HX_STACK_LINE(1357)
						Float tmp22 = (dx * (int)2);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1357)
						Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1357)
						Float x = tmp23;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1357)
						{
							HX_STACK_LINE(1357)
							Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1357)
							{
								HX_STACK_LINE(1357)
								{
									HX_STACK_LINE(1357)
									::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1357)
									bool tmp25 = (_this->_validate != null());		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1357)
									if ((tmp25)){
										HX_STACK_LINE(1357)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1357)
								tmp24 = q->zpp_inner->x;
							}
							HX_STACK_LINE(1357)
							Float tmp25 = x;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1357)
							bool tmp26 = (tmp24 != tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1357)
							if ((tmp26)){
								HX_STACK_LINE(1357)
								q->zpp_inner->x = x;
								HX_STACK_LINE(1357)
								{
									HX_STACK_LINE(1357)
									::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1357)
									bool tmp27 = (_this->_invalidate != null());		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1357)
									if ((tmp27)){
										HX_STACK_LINE(1357)
										::zpp_nape::geom::ZPP_Vec2 tmp28 = _this;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1357)
										_this->_invalidate(tmp28);
									}
								}
							}
						}
						HX_STACK_LINE(1357)
						{
							HX_STACK_LINE(1357)
							{
								HX_STACK_LINE(1357)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1357)
								bool tmp24 = (_this->_validate != null());		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1357)
								if ((tmp24)){
									HX_STACK_LINE(1357)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1357)
							q->zpp_inner->x;
						}
					}
					HX_STACK_LINE(1358)
					{
						HX_STACK_LINE(1358)
						Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1358)
						{
							HX_STACK_LINE(1358)
							{
								HX_STACK_LINE(1358)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1358)
								bool tmp22 = (_this->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1358)
								if ((tmp22)){
									HX_STACK_LINE(1358)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1358)
							tmp21 = u->zpp_inner->y;
						}
						HX_STACK_LINE(1358)
						Float tmp22 = (dy * (int)2);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1358)
						Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1358)
						Float y = tmp23;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(1358)
						{
							HX_STACK_LINE(1358)
							Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1358)
							{
								HX_STACK_LINE(1358)
								{
									HX_STACK_LINE(1358)
									::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1358)
									bool tmp25 = (_this->_validate != null());		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1358)
									if ((tmp25)){
										HX_STACK_LINE(1358)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1358)
								tmp24 = q->zpp_inner->y;
							}
							HX_STACK_LINE(1358)
							Float tmp25 = y;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1358)
							bool tmp26 = (tmp24 != tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1358)
							if ((tmp26)){
								HX_STACK_LINE(1358)
								q->zpp_inner->y = y;
								HX_STACK_LINE(1358)
								{
									HX_STACK_LINE(1358)
									::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1358)
									bool tmp27 = (_this->_invalidate != null());		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1358)
									if ((tmp27)){
										HX_STACK_LINE(1358)
										::zpp_nape::geom::ZPP_Vec2 tmp28 = _this;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1358)
										_this->_invalidate(tmp28);
									}
								}
							}
						}
						HX_STACK_LINE(1358)
						{
							HX_STACK_LINE(1358)
							{
								HX_STACK_LINE(1358)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1358)
								bool tmp24 = (_this->_validate != null());		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1358)
								if ((tmp24)){
									HX_STACK_LINE(1358)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1358)
							q->zpp_inner->y;
						}
					}
					HX_STACK_LINE(1359)
					::nape::geom::Vec2 tmp21 = u;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1359)
					::nape::geom::Vec2 tmp22 = v;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1359)
					::nape::geom::Vec2 tmp23 = q;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1359)
					int tmp24 = colour;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1359)
					this->drawCurve(tmp21,tmp22,tmp23,tmp24);
					HX_STACK_LINE(1360)
					{
						HX_STACK_LINE(1360)
						Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1360)
						{
							HX_STACK_LINE(1360)
							{
								HX_STACK_LINE(1360)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1360)
								bool tmp26 = (_this->_validate != null());		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1360)
								if ((tmp26)){
									HX_STACK_LINE(1360)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1360)
							tmp25 = q->zpp_inner->x;
						}
						HX_STACK_LINE(1360)
						Float x = tmp25;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1360)
						{
							HX_STACK_LINE(1360)
							Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1360)
							{
								HX_STACK_LINE(1360)
								{
									HX_STACK_LINE(1360)
									::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1360)
									bool tmp27 = (_this->_validate != null());		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1360)
									if ((tmp27)){
										HX_STACK_LINE(1360)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1360)
								tmp26 = u->zpp_inner->x;
							}
							HX_STACK_LINE(1360)
							Float tmp27 = x;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1360)
							bool tmp28 = (tmp26 != tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1360)
							if ((tmp28)){
								HX_STACK_LINE(1360)
								u->zpp_inner->x = x;
								HX_STACK_LINE(1360)
								{
									HX_STACK_LINE(1360)
									::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1360)
									bool tmp29 = (_this->_invalidate != null());		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1360)
									if ((tmp29)){
										HX_STACK_LINE(1360)
										::zpp_nape::geom::ZPP_Vec2 tmp30 = _this;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1360)
										_this->_invalidate(tmp30);
									}
								}
							}
						}
						HX_STACK_LINE(1360)
						{
							HX_STACK_LINE(1360)
							{
								HX_STACK_LINE(1360)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1360)
								bool tmp26 = (_this->_validate != null());		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1360)
								if ((tmp26)){
									HX_STACK_LINE(1360)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1360)
							u->zpp_inner->x;
						}
					}
					HX_STACK_LINE(1361)
					{
						HX_STACK_LINE(1361)
						Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1361)
						{
							HX_STACK_LINE(1361)
							{
								HX_STACK_LINE(1361)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1361)
								bool tmp26 = (_this->_validate != null());		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1361)
								if ((tmp26)){
									HX_STACK_LINE(1361)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1361)
							tmp25 = q->zpp_inner->y;
						}
						HX_STACK_LINE(1361)
						Float y = tmp25;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(1361)
						{
							HX_STACK_LINE(1361)
							Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1361)
							{
								HX_STACK_LINE(1361)
								{
									HX_STACK_LINE(1361)
									::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1361)
									bool tmp27 = (_this->_validate != null());		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1361)
									if ((tmp27)){
										HX_STACK_LINE(1361)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1361)
								tmp26 = u->zpp_inner->y;
							}
							HX_STACK_LINE(1361)
							Float tmp27 = y;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1361)
							bool tmp28 = (tmp26 != tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1361)
							if ((tmp28)){
								HX_STACK_LINE(1361)
								u->zpp_inner->y = y;
								HX_STACK_LINE(1361)
								{
									HX_STACK_LINE(1361)
									::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1361)
									bool tmp29 = (_this->_invalidate != null());		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1361)
									if ((tmp29)){
										HX_STACK_LINE(1361)
										::zpp_nape::geom::ZPP_Vec2 tmp30 = _this;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1361)
										_this->_invalidate(tmp30);
									}
								}
							}
						}
						HX_STACK_LINE(1361)
						{
							HX_STACK_LINE(1361)
							{
								HX_STACK_LINE(1361)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1361)
								bool tmp26 = (_this->_validate != null());		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1361)
								if ((tmp26)){
									HX_STACK_LINE(1361)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1361)
							u->zpp_inner->y;
						}
					}
				}
			}
			HX_STACK_LINE(1363)
			{
				HX_STACK_LINE(1363)
				::zpp_nape::geom::ZPP_Vec2 inner = u->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1363)
				u->zpp_inner->outer = null();
				HX_STACK_LINE(1363)
				u->zpp_inner = null();
				HX_STACK_LINE(1363)
				{
					HX_STACK_LINE(1363)
					::nape::geom::Vec2 o = u;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1363)
					::nape::geom::Vec2 tmp14 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1363)
					o->zpp_pool = tmp14;
					HX_STACK_LINE(1363)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1363)
				{
					HX_STACK_LINE(1363)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1363)
					{
						HX_STACK_LINE(1363)
						bool tmp14 = (o->outer != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1363)
						if ((tmp14)){
							HX_STACK_LINE(1363)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1363)
							o->outer = null();
						}
						HX_STACK_LINE(1363)
						o->_isimmutable = null();
						HX_STACK_LINE(1363)
						o->_validate = null();
						HX_STACK_LINE(1363)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1363)
					::zpp_nape::geom::ZPP_Vec2 tmp14 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1363)
					o->next = tmp14;
					HX_STACK_LINE(1363)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1364)
			{
				HX_STACK_LINE(1364)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1364)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(1364)
				v->zpp_inner = null();
				HX_STACK_LINE(1364)
				{
					HX_STACK_LINE(1364)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1364)
					::nape::geom::Vec2 tmp14 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1364)
					o->zpp_pool = tmp14;
					HX_STACK_LINE(1364)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1364)
				{
					HX_STACK_LINE(1364)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1364)
					{
						HX_STACK_LINE(1364)
						bool tmp14 = (o->outer != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1364)
						if ((tmp14)){
							HX_STACK_LINE(1364)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1364)
							o->outer = null();
						}
						HX_STACK_LINE(1364)
						o->_isimmutable = null();
						HX_STACK_LINE(1364)
						o->_validate = null();
						HX_STACK_LINE(1364)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1364)
					::zpp_nape::geom::ZPP_Vec2 tmp14 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1364)
					o->next = tmp14;
					HX_STACK_LINE(1364)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1365)
			{
				HX_STACK_LINE(1365)
				::zpp_nape::geom::ZPP_Vec2 inner = q->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1365)
				q->zpp_inner->outer = null();
				HX_STACK_LINE(1365)
				q->zpp_inner = null();
				HX_STACK_LINE(1365)
				{
					HX_STACK_LINE(1365)
					::nape::geom::Vec2 o = q;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1365)
					::nape::geom::Vec2 tmp14 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1365)
					o->zpp_pool = tmp14;
					HX_STACK_LINE(1365)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1365)
				{
					HX_STACK_LINE(1365)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1365)
					{
						HX_STACK_LINE(1365)
						bool tmp14 = (o->outer != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1365)
						if ((tmp14)){
							HX_STACK_LINE(1365)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1365)
							o->outer = null();
						}
						HX_STACK_LINE(1365)
						o->_isimmutable = null();
						HX_STACK_LINE(1365)
						o->_validate = null();
						HX_STACK_LINE(1365)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1365)
					::zpp_nape::geom::ZPP_Vec2 tmp14 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1365)
					o->next = tmp14;
					HX_STACK_LINE(1365)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(1367)
		{
			HX_STACK_LINE(1368)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1369)
			tmp1 = start->zpp_inner->weak;
			HX_STACK_LINE(1368)
			if ((tmp1)){
				HX_STACK_LINE(1371)
				{
					HX_STACK_LINE(1371)
					::zpp_nape::geom::ZPP_Vec2 inner = start->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(1371)
					start->zpp_inner->outer = null();
					HX_STACK_LINE(1371)
					start->zpp_inner = null();
					HX_STACK_LINE(1371)
					{
						HX_STACK_LINE(1371)
						::nape::geom::Vec2 o = start;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1371)
						::nape::geom::Vec2 tmp2 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(1371)
						o->zpp_pool = tmp2;
						HX_STACK_LINE(1371)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1371)
					{
						HX_STACK_LINE(1371)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1371)
						{
							HX_STACK_LINE(1371)
							bool tmp2 = (o->outer != null());		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(1371)
							if ((tmp2)){
								HX_STACK_LINE(1371)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(1371)
								o->outer = null();
							}
							HX_STACK_LINE(1371)
							o->_isimmutable = null();
							HX_STACK_LINE(1371)
							o->_validate = null();
							HX_STACK_LINE(1371)
							o->_invalidate = null();
						}
						HX_STACK_LINE(1371)
						::zpp_nape::geom::ZPP_Vec2 tmp2 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(1371)
						o->next = tmp2;
						HX_STACK_LINE(1371)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(1372)
				true;
			}
			else{
				HX_STACK_LINE(1375)
				false;
			}
		}
		HX_STACK_LINE(1378)
		{
			HX_STACK_LINE(1379)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1380)
			tmp1 = end->zpp_inner->weak;
			HX_STACK_LINE(1379)
			if ((tmp1)){
				HX_STACK_LINE(1382)
				{
					HX_STACK_LINE(1382)
					::zpp_nape::geom::ZPP_Vec2 inner = end->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(1382)
					end->zpp_inner->outer = null();
					HX_STACK_LINE(1382)
					end->zpp_inner = null();
					HX_STACK_LINE(1382)
					{
						HX_STACK_LINE(1382)
						::nape::geom::Vec2 o = end;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1382)
						::nape::geom::Vec2 tmp2 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(1382)
						o->zpp_pool = tmp2;
						HX_STACK_LINE(1382)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1382)
					{
						HX_STACK_LINE(1382)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1382)
						{
							HX_STACK_LINE(1382)
							bool tmp2 = (o->outer != null());		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(1382)
							if ((tmp2)){
								HX_STACK_LINE(1382)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(1382)
								o->outer = null();
							}
							HX_STACK_LINE(1382)
							o->_isimmutable = null();
							HX_STACK_LINE(1382)
							o->_validate = null();
							HX_STACK_LINE(1382)
							o->_invalidate = null();
						}
						HX_STACK_LINE(1382)
						::zpp_nape::geom::ZPP_Vec2 tmp2 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(1382)
						o->next = tmp2;
						HX_STACK_LINE(1382)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(1383)
				true;
			}
			else{
				HX_STACK_LINE(1386)
				false;
			}
		}
	}
return null();
}



ShapeDebug_obj::ShapeDebug_obj()
{
}

void ShapeDebug_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShapeDebug);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	HX_MARK_MEMBER_NAME(thickness,"thickness");
	::nape::util::Debug_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ShapeDebug_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	HX_VISIT_MEMBER_NAME(thickness,"thickness");
	::nape::util::Debug_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ShapeDebug_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawLine") ) { return drawLine_dyn(); }
		if (HX_FIELD_EQ(inName,"drawAABB") ) { return drawAABB_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"thickness") ) { return thickness; }
		if (HX_FIELD_EQ(inName,"drawCurve") ) { return drawCurve_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return drawCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"drawSpring") ) { return drawSpring_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"drawPolygon") ) { return drawPolygon_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { return zpp_inner_zn; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"drawFilledCircle") ) { return drawFilledCircle_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"drawFilledPolygon") ) { return drawFilledPolygon_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"drawFilledTriangle") ) { return drawFilledTriangle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ShapeDebug_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"thickness") ) { thickness=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::util::ZPP_ShapeDebug >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShapeDebug_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0"));
	outFields->push(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZPP_ShapeDebug*/ ,(int)offsetof(ShapeDebug_obj,zpp_inner_zn),HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0")},
	{hx::fsFloat,(int)offsetof(ShapeDebug_obj,thickness),HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0"),
	HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("drawLine","\x18","\xc2","\x1c","\x5c"),
	HX_HCSTRING("drawCurve","\x0b","\x82","\x63","\x16"),
	HX_HCSTRING("drawCircle","\x34","\xed","\xd0","\x97"),
	HX_HCSTRING("drawAABB","\xa4","\xe8","\xb8","\x54"),
	HX_HCSTRING("drawFilledTriangle","\xae","\x39","\xe9","\xd6"),
	HX_HCSTRING("drawFilledCircle","\x76","\x47","\xc4","\xa3"),
	HX_HCSTRING("drawPolygon","\xd6","\x46","\xd9","\x5b"),
	HX_HCSTRING("drawFilledPolygon","\x54","\xe6","\xd4","\xc4"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("drawSpring","\xf1","\x51","\x59","\x05"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShapeDebug_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShapeDebug_obj::__mClass,"__mClass");
};

#endif

hx::Class ShapeDebug_obj::__mClass;

void ShapeDebug_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.util.ShapeDebug","\xf8","\xdc","\x0c","\xec");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ShapeDebug_obj >;
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
} // end namespace util
