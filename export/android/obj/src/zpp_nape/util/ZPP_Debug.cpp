#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_geom_Mat23
#include <nape/geom/Mat23.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_util_Debug
#include <nape/util/Debug.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_Debug
#include <zpp_nape/util/ZPP_Debug.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeDebug
#include <zpp_nape/util/ZPP_ShapeDebug.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_Debug_obj::__construct(int width,int height)
{
HX_STACK_FRAME("zpp_nape.util.ZPP_Debug","new",0x869f8a95,"zpp_nape.util.ZPP_Debug.new","zpp_nape/util/Debug.hx",174,0xeecbde16)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
{
	HX_STACK_LINE(269)
	this->tmpab = null();
	HX_STACK_LINE(191)
	this->iport = null();
	HX_STACK_LINE(190)
	this->viewport = null();
	HX_STACK_LINE(189)
	this->height = (int)0;
	HX_STACK_LINE(188)
	this->width = (int)0;
	HX_STACK_LINE(187)
	this->xdet = ((Float)0.0);
	HX_STACK_LINE(186)
	this->xnull = false;
	HX_STACK_LINE(185)
	this->xform = null();
	HX_STACK_LINE(184)
	this->bg_col = (int)0;
	HX_STACK_LINE(183)
	this->bg_b = ((Float)0.0);
	HX_STACK_LINE(182)
	this->bg_g = ((Float)0.0);
	HX_STACK_LINE(181)
	this->bg_r = ((Float)0.0);
	HX_STACK_LINE(180)
	this->d_shape = null();
	HX_STACK_LINE(177)
	this->isbmp = false;
	HX_STACK_LINE(176)
	this->outer = null();
	HX_STACK_LINE(193)
	this->xnull = true;
	HX_STACK_LINE(194)
	this->xdet = ((Float)1.0);
	HX_STACK_LINE(195)
	this->width = width;
	HX_STACK_LINE(196)
	this->height = height;
	HX_STACK_LINE(197)
	::zpp_nape::geom::ZPP_AABB tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(197)
	{
		HX_STACK_LINE(197)
		::zpp_nape::geom::ZPP_AABB ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(197)
		{
			HX_STACK_LINE(197)
			::zpp_nape::geom::ZPP_AABB tmp1 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(197)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(197)
			if ((tmp2)){
				HX_STACK_LINE(197)
				::zpp_nape::geom::ZPP_AABB tmp3 = ::zpp_nape::geom::ZPP_AABB_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(197)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(197)
				::zpp_nape::geom::ZPP_AABB tmp3 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(197)
				ret = tmp3;
				HX_STACK_LINE(197)
				::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = ret->next;
				HX_STACK_LINE(197)
				ret->next = null();
			}
			HX_STACK_LINE(197)
			Dynamic();
		}
		HX_STACK_LINE(197)
		{
			HX_STACK_LINE(197)
			ret->minx = (int)0;
			HX_STACK_LINE(197)
			ret->miny = (int)0;
			HX_STACK_LINE(197)
			{
			}
		}
		HX_STACK_LINE(197)
		{
			HX_STACK_LINE(197)
			ret->maxx = width;
			HX_STACK_LINE(197)
			ret->maxy = height;
			HX_STACK_LINE(197)
			{
			}
		}
		HX_STACK_LINE(197)
		tmp = ret;
	}
	HX_STACK_LINE(197)
	this->viewport = tmp;
	HX_STACK_LINE(198)
	::zpp_nape::geom::ZPP_AABB tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(198)
	{
		HX_STACK_LINE(198)
		::zpp_nape::geom::ZPP_AABB ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(198)
		{
			HX_STACK_LINE(198)
			::zpp_nape::geom::ZPP_AABB tmp2 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(198)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(198)
			if ((tmp3)){
				HX_STACK_LINE(198)
				::zpp_nape::geom::ZPP_AABB tmp4 = ::zpp_nape::geom::ZPP_AABB_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(198)
				ret = tmp4;
			}
			else{
				HX_STACK_LINE(198)
				::zpp_nape::geom::ZPP_AABB tmp4 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(198)
				ret = tmp4;
				HX_STACK_LINE(198)
				::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = ret->next;
				HX_STACK_LINE(198)
				ret->next = null();
			}
			HX_STACK_LINE(198)
			Dynamic();
		}
		HX_STACK_LINE(198)
		{
			HX_STACK_LINE(198)
			ret->minx = (int)0;
			HX_STACK_LINE(198)
			ret->miny = (int)0;
			HX_STACK_LINE(198)
			{
			}
		}
		HX_STACK_LINE(198)
		{
			HX_STACK_LINE(198)
			ret->maxx = width;
			HX_STACK_LINE(198)
			ret->maxy = height;
			HX_STACK_LINE(198)
			{
			}
		}
		HX_STACK_LINE(198)
		tmp1 = ret;
	}
	HX_STACK_LINE(198)
	this->iport = tmp1;
	HX_STACK_LINE(199)
	::zpp_nape::geom::ZPP_AABB tmp2 = ::zpp_nape::geom::ZPP_AABB_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(199)
	this->tmpab = tmp2;
}
;
	return null();
}

//ZPP_Debug_obj::~ZPP_Debug_obj() { }

Dynamic ZPP_Debug_obj::__CreateEmpty() { return  new ZPP_Debug_obj; }
hx::ObjectPtr< ZPP_Debug_obj > ZPP_Debug_obj::__new(int width,int height)
{  hx::ObjectPtr< ZPP_Debug_obj > _result_ = new ZPP_Debug_obj();
	_result_->__construct(width,height);
	return _result_;}

Dynamic ZPP_Debug_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Debug_obj > _result_ = new ZPP_Debug_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void ZPP_Debug_obj::xform_invalidate( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Debug","xform_invalidate",0xef33d309,"zpp_nape.util.ZPP_Debug.xform_invalidate","zpp_nape/util/Debug.hx",201,0xeecbde16)
		HX_STACK_THIS(this)
		HX_STACK_LINE(202)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(202)
		{
			HX_STACK_LINE(202)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(202)
			{
				HX_STACK_LINE(203)
				Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(203)
				{
					HX_STACK_LINE(203)
					::zpp_nape::geom::ZPP_Mat23 tmp3 = this->xform;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(203)
					::nape::geom::Mat23 _this = tmp3->outer;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(203)
					Float tmp4 = _this->zpp_inner->a;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(203)
					Float tmp5 = _this->zpp_inner->d;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(203)
					Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(203)
					Float tmp7 = _this->zpp_inner->b;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(203)
					Float tmp8 = _this->zpp_inner->c;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(203)
					Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(203)
					tmp2 = (tmp6 - tmp9);
				}
				HX_STACK_LINE(203)
				Float x = tmp2;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(204)
				bool tmp3 = (x < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(204)
				if ((tmp3)){
					HX_STACK_LINE(204)
					Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(204)
					tmp1 = -(tmp4);
				}
				else{
					HX_STACK_LINE(204)
					tmp1 = x;
				}
			}
			HX_STACK_LINE(202)
			tmp = ::Math_obj::sqrt(tmp1);
		}
		HX_STACK_LINE(202)
		this->xdet = tmp;
		HX_STACK_LINE(206)
		::zpp_nape::geom::ZPP_Mat23 tmp1 = this->xform;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(206)
		Float tmp2 = tmp1->a;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(206)
		bool tmp3 = (tmp2 == ((Float)1.0));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(206)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(206)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(206)
		if ((tmp4)){
			HX_STACK_LINE(206)
			::zpp_nape::geom::ZPP_Mat23 tmp6 = this->xform;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(206)
			::zpp_nape::geom::ZPP_Mat23 tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(206)
			::zpp_nape::geom::ZPP_Mat23 tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(206)
			Float tmp9 = tmp8->b;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(206)
			tmp5 = (tmp9 == ((Float)0.0));
		}
		else{
			HX_STACK_LINE(206)
			tmp5 = false;
		}
		HX_STACK_LINE(206)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(206)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(206)
		if ((tmp6)){
			HX_STACK_LINE(206)
			::zpp_nape::geom::ZPP_Mat23 tmp8 = this->xform;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(206)
			::zpp_nape::geom::ZPP_Mat23 tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(206)
			::zpp_nape::geom::ZPP_Mat23 tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(206)
			Float tmp11 = tmp10->c;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(206)
			tmp7 = (tmp11 == ((Float)0.0));
		}
		else{
			HX_STACK_LINE(206)
			tmp7 = false;
		}
		HX_STACK_LINE(206)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(206)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(206)
		if ((tmp8)){
			HX_STACK_LINE(206)
			::zpp_nape::geom::ZPP_Mat23 tmp10 = this->xform;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(206)
			::zpp_nape::geom::ZPP_Mat23 tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(206)
			::zpp_nape::geom::ZPP_Mat23 tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(206)
			Float tmp13 = tmp12->d;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(206)
			tmp9 = (tmp13 == ((Float)1.0));
		}
		else{
			HX_STACK_LINE(206)
			tmp9 = false;
		}
		HX_STACK_LINE(206)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(206)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(206)
		if ((tmp10)){
			HX_STACK_LINE(206)
			::zpp_nape::geom::ZPP_Mat23 tmp12 = this->xform;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(206)
			::zpp_nape::geom::ZPP_Mat23 tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(206)
			::zpp_nape::geom::ZPP_Mat23 tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(206)
			Float tmp15 = tmp14->tx;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(206)
			tmp11 = (tmp15 == ((Float)0.0));
		}
		else{
			HX_STACK_LINE(206)
			tmp11 = false;
		}
		HX_STACK_LINE(206)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(206)
		if ((tmp11)){
			HX_STACK_LINE(206)
			::zpp_nape::geom::ZPP_Mat23 tmp13 = this->xform;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(206)
			::zpp_nape::geom::ZPP_Mat23 tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(206)
			Float tmp15 = tmp14->ty;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(206)
			tmp12 = (tmp15 == ((Float)0.0));
		}
		else{
			HX_STACK_LINE(206)
			tmp12 = false;
		}
		HX_STACK_LINE(206)
		this->xnull = tmp12;
		HX_STACK_LINE(207)
		::zpp_nape::geom::ZPP_Mat23 tmp13 = this->xform;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(207)
		::nape::geom::Mat23 tmp14 = tmp13->outer->inverse();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(207)
		::nape::geom::Mat23 qmat = tmp14;		HX_STACK_VAR(qmat,"qmat");
		HX_STACK_LINE(208)
		::nape::geom::Vec2 tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(208)
		{
			HX_STACK_LINE(208)
			Float x = (int)0;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(208)
			Float y = (int)0;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(208)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(208)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(208)
			{
				HX_STACK_LINE(208)
				::nape::geom::Vec2 tmp16 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(208)
				bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(208)
				if ((tmp17)){
					HX_STACK_LINE(208)
					::nape::geom::Vec2 tmp18 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(208)
					ret = tmp18;
				}
				else{
					HX_STACK_LINE(208)
					::nape::geom::Vec2 tmp18 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(208)
					ret = tmp18;
					HX_STACK_LINE(208)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(208)
					ret->zpp_pool = null();
				}
			}
			HX_STACK_LINE(208)
			bool tmp16 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(208)
			if ((tmp16)){
				HX_STACK_LINE(208)
				::zpp_nape::geom::ZPP_Vec2 tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(208)
				{
					HX_STACK_LINE(208)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(208)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(208)
					{
						HX_STACK_LINE(208)
						::zpp_nape::geom::ZPP_Vec2 tmp18 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(208)
						bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(208)
						if ((tmp19)){
							HX_STACK_LINE(208)
							::zpp_nape::geom::ZPP_Vec2 tmp20 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(208)
							ret1 = tmp20;
						}
						else{
							HX_STACK_LINE(208)
							::zpp_nape::geom::ZPP_Vec2 tmp20 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(208)
							ret1 = tmp20;
							HX_STACK_LINE(208)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(208)
							ret1->next = null();
						}
						HX_STACK_LINE(208)
						ret1->weak = false;
					}
					HX_STACK_LINE(208)
					ret1->_immutable = immutable;
					HX_STACK_LINE(208)
					{
						HX_STACK_LINE(208)
						ret1->x = x;
						HX_STACK_LINE(208)
						ret1->y = y;
						HX_STACK_LINE(208)
						{
						}
					}
					HX_STACK_LINE(208)
					tmp17 = ret1;
				}
				HX_STACK_LINE(208)
				ret->zpp_inner = tmp17;
				HX_STACK_LINE(208)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(208)
				Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(208)
				{
					HX_STACK_LINE(208)
					{
						HX_STACK_LINE(208)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(208)
						bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(208)
						if ((tmp18)){
							HX_STACK_LINE(208)
							_this->_validate();
						}
					}
					HX_STACK_LINE(208)
					tmp17 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(208)
				Float tmp18 = x;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(208)
				bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(208)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(208)
				if ((tmp19)){
					HX_STACK_LINE(208)
					Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(208)
					{
						HX_STACK_LINE(208)
						{
							HX_STACK_LINE(208)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(208)
							bool tmp22 = (_this->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(208)
							bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(208)
							bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(208)
							if ((tmp24)){
								HX_STACK_LINE(208)
								_this->_validate();
							}
						}
						HX_STACK_LINE(208)
						Float tmp22 = ret->zpp_inner->y;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(208)
						tmp21 = tmp22;
					}
					HX_STACK_LINE(208)
					Float tmp22 = y;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(208)
					tmp20 = (tmp21 == tmp22);
				}
				else{
					HX_STACK_LINE(208)
					tmp20 = false;
				}
				HX_STACK_LINE(208)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(208)
				if ((tmp21)){
					HX_STACK_LINE(208)
					{
						HX_STACK_LINE(208)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(208)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(208)
						{
						}
					}
					HX_STACK_LINE(208)
					{
						HX_STACK_LINE(208)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(208)
						bool tmp22 = (_this->_invalidate != null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(208)
						if ((tmp22)){
							HX_STACK_LINE(208)
							::zpp_nape::geom::ZPP_Vec2 tmp23 = _this;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(208)
							_this->_invalidate(tmp23);
						}
					}
				}
				HX_STACK_LINE(208)
				ret;
			}
			HX_STACK_LINE(208)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(208)
			tmp15 = ret;
		}
		HX_STACK_LINE(208)
		::nape::geom::Vec2 q = tmp15;		HX_STACK_VAR(q,"q");
		HX_STACK_LINE(209)
		::nape::geom::Vec2 tmp16 = q;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(209)
		::nape::geom::Vec2 tmp17 = qmat->transform(tmp16,null(),null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(209)
		::nape::geom::Vec2 v = tmp17;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(210)
		{
			HX_STACK_LINE(211)
			Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(211)
			{
				HX_STACK_LINE(211)
				{
					HX_STACK_LINE(211)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(211)
					bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(211)
					if ((tmp19)){
						HX_STACK_LINE(211)
						_this->_validate();
					}
				}
				HX_STACK_LINE(211)
				tmp18 = v->zpp_inner->x;
			}
			HX_STACK_LINE(211)
			::zpp_nape::geom::ZPP_AABB tmp19 = this->iport;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(211)
			tmp19->minx = tmp18;
			HX_STACK_LINE(212)
			Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(212)
			{
				HX_STACK_LINE(212)
				{
					HX_STACK_LINE(212)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(212)
					bool tmp21 = (_this->_validate != null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(212)
					if ((tmp21)){
						HX_STACK_LINE(212)
						_this->_validate();
					}
				}
				HX_STACK_LINE(212)
				tmp20 = v->zpp_inner->y;
			}
			HX_STACK_LINE(212)
			::zpp_nape::geom::ZPP_AABB tmp21 = this->iport;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(212)
			tmp21->miny = tmp20;
			HX_STACK_LINE(221)
			{
			}
		}
		HX_STACK_LINE(230)
		{
			HX_STACK_LINE(231)
			::zpp_nape::geom::ZPP_AABB tmp18 = this->iport;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(231)
			::zpp_nape::geom::ZPP_AABB tmp19 = this->iport;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(231)
			tmp19->maxx = tmp18->minx;
			HX_STACK_LINE(232)
			::zpp_nape::geom::ZPP_AABB tmp20 = this->iport;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(232)
			::zpp_nape::geom::ZPP_AABB tmp21 = this->iport;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(232)
			tmp21->maxy = tmp20->miny;
			HX_STACK_LINE(241)
			{
			}
		}
		HX_STACK_LINE(250)
		{
			HX_STACK_LINE(250)
			::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(250)
			v->zpp_inner->outer = null();
			HX_STACK_LINE(250)
			v->zpp_inner = null();
			HX_STACK_LINE(250)
			{
				HX_STACK_LINE(250)
				::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(250)
				::nape::geom::Vec2 tmp18 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(250)
				o->zpp_pool = tmp18;
				HX_STACK_LINE(250)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(250)
			{
				HX_STACK_LINE(250)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(250)
				{
					HX_STACK_LINE(250)
					bool tmp18 = (o->outer != null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(250)
					if ((tmp18)){
						HX_STACK_LINE(250)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(250)
						o->outer = null();
					}
					HX_STACK_LINE(250)
					o->_isimmutable = null();
					HX_STACK_LINE(250)
					o->_validate = null();
					HX_STACK_LINE(250)
					o->_invalidate = null();
				}
				HX_STACK_LINE(250)
				::zpp_nape::geom::ZPP_Vec2 tmp18 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(250)
				o->next = tmp18;
				HX_STACK_LINE(250)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(251)
		{
			HX_STACK_LINE(251)
			int tmp18 = this->width;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(251)
			Float x = tmp18;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(251)
			{
				HX_STACK_LINE(251)
				Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(251)
				{
					HX_STACK_LINE(251)
					{
						HX_STACK_LINE(251)
						::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(251)
						bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(251)
						if ((tmp20)){
							HX_STACK_LINE(251)
							_this->_validate();
						}
					}
					HX_STACK_LINE(251)
					tmp19 = q->zpp_inner->x;
				}
				HX_STACK_LINE(251)
				Float tmp20 = x;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(251)
				bool tmp21 = (tmp19 != tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(251)
				if ((tmp21)){
					HX_STACK_LINE(251)
					q->zpp_inner->x = x;
					HX_STACK_LINE(251)
					{
						HX_STACK_LINE(251)
						::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(251)
						bool tmp22 = (_this->_invalidate != null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(251)
						if ((tmp22)){
							HX_STACK_LINE(251)
							::zpp_nape::geom::ZPP_Vec2 tmp23 = _this;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(251)
							_this->_invalidate(tmp23);
						}
					}
				}
			}
			HX_STACK_LINE(251)
			{
				HX_STACK_LINE(251)
				{
					HX_STACK_LINE(251)
					::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(251)
					bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(251)
					if ((tmp19)){
						HX_STACK_LINE(251)
						_this->_validate();
					}
				}
				HX_STACK_LINE(251)
				q->zpp_inner->x;
			}
		}
		HX_STACK_LINE(252)
		::nape::geom::Vec2 tmp18 = q;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(252)
		::nape::geom::Vec2 tmp19 = qmat->transform(tmp18,null(),null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(252)
		v = tmp19;
		HX_STACK_LINE(253)
		{
			HX_STACK_LINE(253)
			::zpp_nape::geom::ZPP_AABB tmp20 = this->iport;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(253)
			::zpp_nape::geom::ZPP_AABB _this = tmp20;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(253)
			Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(253)
			{
				HX_STACK_LINE(253)
				{
					HX_STACK_LINE(253)
					::zpp_nape::geom::ZPP_Vec2 _this1 = v->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(253)
					bool tmp22 = (_this1->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(253)
					if ((tmp22)){
						HX_STACK_LINE(253)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(253)
				tmp21 = v->zpp_inner->x;
			}
			HX_STACK_LINE(253)
			Float x = tmp21;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(253)
			Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(253)
			{
				HX_STACK_LINE(253)
				{
					HX_STACK_LINE(253)
					::zpp_nape::geom::ZPP_Vec2 _this1 = v->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(253)
					bool tmp23 = (_this1->_validate != null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(253)
					if ((tmp23)){
						HX_STACK_LINE(253)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(253)
				tmp22 = v->zpp_inner->y;
			}
			HX_STACK_LINE(253)
			Float y = tmp22;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(253)
			bool tmp23 = (x < _this->minx);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(253)
			if ((tmp23)){
				HX_STACK_LINE(253)
				_this->minx = x;
			}
			HX_STACK_LINE(253)
			bool tmp24 = (x > _this->maxx);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(253)
			if ((tmp24)){
				HX_STACK_LINE(253)
				_this->maxx = x;
			}
			HX_STACK_LINE(253)
			bool tmp25 = (y < _this->miny);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(253)
			if ((tmp25)){
				HX_STACK_LINE(253)
				_this->miny = y;
			}
			HX_STACK_LINE(253)
			bool tmp26 = (y > _this->maxy);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(253)
			if ((tmp26)){
				HX_STACK_LINE(253)
				_this->maxy = y;
			}
		}
		HX_STACK_LINE(254)
		{
			HX_STACK_LINE(254)
			::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(254)
			v->zpp_inner->outer = null();
			HX_STACK_LINE(254)
			v->zpp_inner = null();
			HX_STACK_LINE(254)
			{
				HX_STACK_LINE(254)
				::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(254)
				::nape::geom::Vec2 tmp20 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(254)
				o->zpp_pool = tmp20;
				HX_STACK_LINE(254)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(254)
			{
				HX_STACK_LINE(254)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(254)
				{
					HX_STACK_LINE(254)
					bool tmp20 = (o->outer != null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(254)
					if ((tmp20)){
						HX_STACK_LINE(254)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(254)
						o->outer = null();
					}
					HX_STACK_LINE(254)
					o->_isimmutable = null();
					HX_STACK_LINE(254)
					o->_validate = null();
					HX_STACK_LINE(254)
					o->_invalidate = null();
				}
				HX_STACK_LINE(254)
				::zpp_nape::geom::ZPP_Vec2 tmp20 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(254)
				o->next = tmp20;
				HX_STACK_LINE(254)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(255)
		{
			HX_STACK_LINE(255)
			int tmp20 = this->height;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(255)
			Float y = tmp20;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(255)
			{
				HX_STACK_LINE(255)
				Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(255)
				{
					HX_STACK_LINE(255)
					{
						HX_STACK_LINE(255)
						::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(255)
						bool tmp22 = (_this->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(255)
						if ((tmp22)){
							HX_STACK_LINE(255)
							_this->_validate();
						}
					}
					HX_STACK_LINE(255)
					tmp21 = q->zpp_inner->y;
				}
				HX_STACK_LINE(255)
				Float tmp22 = y;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(255)
				bool tmp23 = (tmp21 != tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(255)
				if ((tmp23)){
					HX_STACK_LINE(255)
					q->zpp_inner->y = y;
					HX_STACK_LINE(255)
					{
						HX_STACK_LINE(255)
						::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(255)
						bool tmp24 = (_this->_invalidate != null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(255)
						if ((tmp24)){
							HX_STACK_LINE(255)
							::zpp_nape::geom::ZPP_Vec2 tmp25 = _this;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(255)
							_this->_invalidate(tmp25);
						}
					}
				}
			}
			HX_STACK_LINE(255)
			{
				HX_STACK_LINE(255)
				{
					HX_STACK_LINE(255)
					::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(255)
					bool tmp21 = (_this->_validate != null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(255)
					if ((tmp21)){
						HX_STACK_LINE(255)
						_this->_validate();
					}
				}
				HX_STACK_LINE(255)
				q->zpp_inner->y;
			}
		}
		HX_STACK_LINE(256)
		::nape::geom::Vec2 tmp20 = q;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(256)
		::nape::geom::Vec2 tmp21 = qmat->transform(tmp20,null(),null());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(256)
		v = tmp21;
		HX_STACK_LINE(257)
		{
			HX_STACK_LINE(257)
			::zpp_nape::geom::ZPP_AABB tmp22 = this->iport;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(257)
			::zpp_nape::geom::ZPP_AABB _this = tmp22;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(257)
			Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(257)
			{
				HX_STACK_LINE(257)
				{
					HX_STACK_LINE(257)
					::zpp_nape::geom::ZPP_Vec2 _this1 = v->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(257)
					bool tmp24 = (_this1->_validate != null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(257)
					if ((tmp24)){
						HX_STACK_LINE(257)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(257)
				tmp23 = v->zpp_inner->x;
			}
			HX_STACK_LINE(257)
			Float x = tmp23;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(257)
			Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(257)
			{
				HX_STACK_LINE(257)
				{
					HX_STACK_LINE(257)
					::zpp_nape::geom::ZPP_Vec2 _this1 = v->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(257)
					bool tmp25 = (_this1->_validate != null());		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(257)
					if ((tmp25)){
						HX_STACK_LINE(257)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(257)
				tmp24 = v->zpp_inner->y;
			}
			HX_STACK_LINE(257)
			Float y = tmp24;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(257)
			bool tmp25 = (x < _this->minx);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(257)
			if ((tmp25)){
				HX_STACK_LINE(257)
				_this->minx = x;
			}
			HX_STACK_LINE(257)
			bool tmp26 = (x > _this->maxx);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(257)
			if ((tmp26)){
				HX_STACK_LINE(257)
				_this->maxx = x;
			}
			HX_STACK_LINE(257)
			bool tmp27 = (y < _this->miny);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(257)
			if ((tmp27)){
				HX_STACK_LINE(257)
				_this->miny = y;
			}
			HX_STACK_LINE(257)
			bool tmp28 = (y > _this->maxy);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(257)
			if ((tmp28)){
				HX_STACK_LINE(257)
				_this->maxy = y;
			}
		}
		HX_STACK_LINE(258)
		{
			HX_STACK_LINE(258)
			::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(258)
			v->zpp_inner->outer = null();
			HX_STACK_LINE(258)
			v->zpp_inner = null();
			HX_STACK_LINE(258)
			{
				HX_STACK_LINE(258)
				::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(258)
				::nape::geom::Vec2 tmp22 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(258)
				o->zpp_pool = tmp22;
				HX_STACK_LINE(258)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(258)
			{
				HX_STACK_LINE(258)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(258)
				{
					HX_STACK_LINE(258)
					bool tmp22 = (o->outer != null());		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(258)
					if ((tmp22)){
						HX_STACK_LINE(258)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(258)
						o->outer = null();
					}
					HX_STACK_LINE(258)
					o->_isimmutable = null();
					HX_STACK_LINE(258)
					o->_validate = null();
					HX_STACK_LINE(258)
					o->_invalidate = null();
				}
				HX_STACK_LINE(258)
				::zpp_nape::geom::ZPP_Vec2 tmp22 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(258)
				o->next = tmp22;
				HX_STACK_LINE(258)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(259)
		{
			HX_STACK_LINE(259)
			{
				HX_STACK_LINE(259)
				Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(259)
				{
					HX_STACK_LINE(259)
					{
						HX_STACK_LINE(259)
						::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(259)
						bool tmp23 = (_this->_validate != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(259)
						if ((tmp23)){
							HX_STACK_LINE(259)
							_this->_validate();
						}
					}
					HX_STACK_LINE(259)
					tmp22 = q->zpp_inner->x;
				}
				HX_STACK_LINE(259)
				bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(259)
				if ((tmp23)){
					HX_STACK_LINE(259)
					q->zpp_inner->x = (int)0;
					HX_STACK_LINE(259)
					{
						HX_STACK_LINE(259)
						::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(259)
						bool tmp24 = (_this->_invalidate != null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(259)
						if ((tmp24)){
							HX_STACK_LINE(259)
							::zpp_nape::geom::ZPP_Vec2 tmp25 = _this;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(259)
							_this->_invalidate(tmp25);
						}
					}
				}
			}
			HX_STACK_LINE(259)
			{
				HX_STACK_LINE(259)
				{
					HX_STACK_LINE(259)
					::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(259)
					bool tmp22 = (_this->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(259)
					if ((tmp22)){
						HX_STACK_LINE(259)
						_this->_validate();
					}
				}
				HX_STACK_LINE(259)
				q->zpp_inner->x;
			}
		}
		HX_STACK_LINE(260)
		::nape::geom::Vec2 tmp22 = q;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(260)
		::nape::geom::Vec2 tmp23 = qmat->transform(tmp22,null(),null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(260)
		v = tmp23;
		HX_STACK_LINE(261)
		{
			HX_STACK_LINE(261)
			::zpp_nape::geom::ZPP_AABB tmp24 = this->iport;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(261)
			::zpp_nape::geom::ZPP_AABB _this = tmp24;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(261)
			Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(261)
			{
				HX_STACK_LINE(261)
				{
					HX_STACK_LINE(261)
					::zpp_nape::geom::ZPP_Vec2 _this1 = v->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(261)
					bool tmp26 = (_this1->_validate != null());		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(261)
					if ((tmp26)){
						HX_STACK_LINE(261)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(261)
				tmp25 = v->zpp_inner->x;
			}
			HX_STACK_LINE(261)
			Float x = tmp25;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(261)
			Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(261)
			{
				HX_STACK_LINE(261)
				{
					HX_STACK_LINE(261)
					::zpp_nape::geom::ZPP_Vec2 _this1 = v->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(261)
					bool tmp27 = (_this1->_validate != null());		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(261)
					if ((tmp27)){
						HX_STACK_LINE(261)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(261)
				tmp26 = v->zpp_inner->y;
			}
			HX_STACK_LINE(261)
			Float y = tmp26;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(261)
			bool tmp27 = (x < _this->minx);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(261)
			if ((tmp27)){
				HX_STACK_LINE(261)
				_this->minx = x;
			}
			HX_STACK_LINE(261)
			bool tmp28 = (x > _this->maxx);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(261)
			if ((tmp28)){
				HX_STACK_LINE(261)
				_this->maxx = x;
			}
			HX_STACK_LINE(261)
			bool tmp29 = (y < _this->miny);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(261)
			if ((tmp29)){
				HX_STACK_LINE(261)
				_this->miny = y;
			}
			HX_STACK_LINE(261)
			bool tmp30 = (y > _this->maxy);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(261)
			if ((tmp30)){
				HX_STACK_LINE(261)
				_this->maxy = y;
			}
		}
		HX_STACK_LINE(262)
		{
			HX_STACK_LINE(262)
			::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(262)
			v->zpp_inner->outer = null();
			HX_STACK_LINE(262)
			v->zpp_inner = null();
			HX_STACK_LINE(262)
			{
				HX_STACK_LINE(262)
				::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(262)
				::nape::geom::Vec2 tmp24 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(262)
				o->zpp_pool = tmp24;
				HX_STACK_LINE(262)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(262)
			{
				HX_STACK_LINE(262)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(262)
				{
					HX_STACK_LINE(262)
					bool tmp24 = (o->outer != null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(262)
					if ((tmp24)){
						HX_STACK_LINE(262)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(262)
						o->outer = null();
					}
					HX_STACK_LINE(262)
					o->_isimmutable = null();
					HX_STACK_LINE(262)
					o->_validate = null();
					HX_STACK_LINE(262)
					o->_invalidate = null();
				}
				HX_STACK_LINE(262)
				::zpp_nape::geom::ZPP_Vec2 tmp24 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(262)
				o->next = tmp24;
				HX_STACK_LINE(262)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(263)
		{
			HX_STACK_LINE(263)
			::zpp_nape::geom::ZPP_Vec2 inner = q->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(263)
			q->zpp_inner->outer = null();
			HX_STACK_LINE(263)
			q->zpp_inner = null();
			HX_STACK_LINE(263)
			{
				HX_STACK_LINE(263)
				::nape::geom::Vec2 o = q;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(263)
				::nape::geom::Vec2 tmp24 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(263)
				o->zpp_pool = tmp24;
				HX_STACK_LINE(263)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(263)
			{
				HX_STACK_LINE(263)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(263)
				{
					HX_STACK_LINE(263)
					bool tmp24 = (o->outer != null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(263)
					if ((tmp24)){
						HX_STACK_LINE(263)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(263)
						o->outer = null();
					}
					HX_STACK_LINE(263)
					o->_isimmutable = null();
					HX_STACK_LINE(263)
					o->_validate = null();
					HX_STACK_LINE(263)
					o->_invalidate = null();
				}
				HX_STACK_LINE(263)
				::zpp_nape::geom::ZPP_Vec2 tmp24 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(263)
				o->next = tmp24;
				HX_STACK_LINE(263)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Debug_obj,xform_invalidate,(void))

Void ZPP_Debug_obj::setform( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Debug","setform",0x3258ee9b,"zpp_nape.util.ZPP_Debug.setform","zpp_nape/util/Debug.hx",265,0xeecbde16)
		HX_STACK_THIS(this)
		HX_STACK_LINE(266)
		::nape::geom::Mat23 tmp = ::nape::geom::Mat23_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(266)
		this->xform = tmp->zpp_inner;
		HX_STACK_LINE(267)
		Dynamic tmp1 = this->xform_invalidate_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(267)
		::zpp_nape::geom::ZPP_Mat23 tmp2 = this->xform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(267)
		tmp2->_invalidate = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Debug_obj,setform,(void))

bool ZPP_Debug_obj::cull( ::zpp_nape::geom::ZPP_AABB aabb){
	HX_STACK_FRAME("zpp_nape.util.ZPP_Debug","cull",0x3dc079dd,"zpp_nape.util.ZPP_Debug.cull","zpp_nape/util/Debug.hx",270,0xeecbde16)
	HX_STACK_THIS(this)
	HX_STACK_ARG(aabb,"aabb")
	HX_STACK_LINE(271)
	bool tmp = this->xnull;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(271)
	if ((tmp)){
		HX_STACK_LINE(271)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(271)
		{
			HX_STACK_LINE(271)
			::zpp_nape::geom::ZPP_AABB tmp2 = this->viewport;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(271)
			::zpp_nape::geom::ZPP_AABB x = tmp2;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(271)
			bool tmp3 = (x->miny <= aabb->maxy);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(271)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(271)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(271)
			if ((tmp4)){
				HX_STACK_LINE(271)
				tmp5 = (aabb->miny <= x->maxy);
			}
			else{
				HX_STACK_LINE(271)
				tmp5 = false;
			}
			HX_STACK_LINE(271)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(271)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(271)
			if ((tmp6)){
				HX_STACK_LINE(271)
				tmp7 = (x->minx <= aabb->maxx);
			}
			else{
				HX_STACK_LINE(271)
				tmp7 = false;
			}
			HX_STACK_LINE(271)
			if ((tmp7)){
				HX_STACK_LINE(271)
				tmp1 = (aabb->minx <= x->maxx);
			}
			else{
				HX_STACK_LINE(271)
				tmp1 = false;
			}
		}
		HX_STACK_LINE(271)
		return tmp1;
	}
	else{
		HX_STACK_LINE(273)
		Float qx = ((Float)0.0);		HX_STACK_VAR(qx,"qx");
		HX_STACK_LINE(274)
		Float qy = ((Float)0.0);		HX_STACK_VAR(qy,"qy");
		HX_STACK_LINE(275)
		Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
		HX_STACK_LINE(276)
		Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
		HX_STACK_LINE(277)
		{
			HX_STACK_LINE(278)
			vx = aabb->minx;
			HX_STACK_LINE(279)
			vy = aabb->miny;
			HX_STACK_LINE(288)
			{
			}
		}
		HX_STACK_LINE(317)
		{
			HX_STACK_LINE(318)
			::zpp_nape::geom::ZPP_Mat23 tmp1 = this->xform;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(318)
			Float tmp2 = tmp1->a;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(318)
			Float tmp3 = vx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(318)
			Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(318)
			::zpp_nape::geom::ZPP_Mat23 tmp5 = this->xform;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(318)
			Float tmp6 = tmp5->b;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(318)
			Float tmp7 = vy;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(318)
			Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(318)
			Float tmp9 = (tmp4 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(318)
			::zpp_nape::geom::ZPP_Mat23 tmp10 = this->xform;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(318)
			Float tmp11 = tmp10->tx;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(318)
			Float tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(318)
			::zpp_nape::geom::ZPP_AABB tmp13 = this->tmpab;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(318)
			tmp13->minx = tmp12;
			HX_STACK_LINE(319)
			::zpp_nape::geom::ZPP_Mat23 tmp14 = this->xform;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(319)
			Float tmp15 = tmp14->c;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(319)
			Float tmp16 = vx;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(319)
			Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(319)
			::zpp_nape::geom::ZPP_Mat23 tmp18 = this->xform;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(319)
			Float tmp19 = tmp18->d;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(319)
			Float tmp20 = vy;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(319)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(319)
			Float tmp22 = (tmp17 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(319)
			::zpp_nape::geom::ZPP_Mat23 tmp23 = this->xform;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(319)
			Float tmp24 = tmp23->ty;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(319)
			Float tmp25 = (tmp22 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(319)
			::zpp_nape::geom::ZPP_AABB tmp26 = this->tmpab;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(319)
			tmp26->miny = tmp25;
		}
		HX_STACK_LINE(321)
		{
			HX_STACK_LINE(322)
			::zpp_nape::geom::ZPP_AABB tmp1 = this->tmpab;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(322)
			::zpp_nape::geom::ZPP_AABB tmp2 = this->tmpab;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(322)
			tmp2->maxx = tmp1->minx;
			HX_STACK_LINE(323)
			::zpp_nape::geom::ZPP_AABB tmp3 = this->tmpab;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(323)
			::zpp_nape::geom::ZPP_AABB tmp4 = this->tmpab;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(323)
			tmp4->maxy = tmp3->miny;
			HX_STACK_LINE(332)
			{
			}
		}
		HX_STACK_LINE(341)
		vx = aabb->maxx;
		HX_STACK_LINE(362)
		{
			HX_STACK_LINE(363)
			::zpp_nape::geom::ZPP_Mat23 tmp1 = this->xform;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(363)
			Float tmp2 = tmp1->a;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(363)
			Float tmp3 = vx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(363)
			Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(363)
			::zpp_nape::geom::ZPP_Mat23 tmp5 = this->xform;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(363)
			Float tmp6 = tmp5->b;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(363)
			Float tmp7 = vy;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(363)
			Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(363)
			Float tmp9 = (tmp4 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(363)
			::zpp_nape::geom::ZPP_Mat23 tmp10 = this->xform;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(363)
			Float tmp11 = tmp10->tx;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(363)
			Float tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(363)
			qx = tmp12;
			HX_STACK_LINE(364)
			::zpp_nape::geom::ZPP_Mat23 tmp13 = this->xform;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(364)
			Float tmp14 = tmp13->c;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(364)
			Float tmp15 = vx;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(364)
			Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(364)
			::zpp_nape::geom::ZPP_Mat23 tmp17 = this->xform;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(364)
			Float tmp18 = tmp17->d;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(364)
			Float tmp19 = vy;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(364)
			Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(364)
			Float tmp21 = (tmp16 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(364)
			::zpp_nape::geom::ZPP_Mat23 tmp22 = this->xform;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(364)
			Float tmp23 = tmp22->ty;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(364)
			Float tmp24 = (tmp21 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(364)
			qy = tmp24;
		}
		HX_STACK_LINE(366)
		{
			HX_STACK_LINE(366)
			::zpp_nape::geom::ZPP_AABB tmp1 = this->tmpab;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(366)
			::zpp_nape::geom::ZPP_AABB _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(366)
			bool tmp2 = (qx < _this->minx);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(366)
			if ((tmp2)){
				HX_STACK_LINE(366)
				_this->minx = qx;
			}
			HX_STACK_LINE(366)
			bool tmp3 = (qx > _this->maxx);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(366)
			if ((tmp3)){
				HX_STACK_LINE(366)
				_this->maxx = qx;
			}
			HX_STACK_LINE(366)
			bool tmp4 = (qy < _this->miny);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(366)
			if ((tmp4)){
				HX_STACK_LINE(366)
				_this->miny = qy;
			}
			HX_STACK_LINE(366)
			bool tmp5 = (qy > _this->maxy);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(366)
			if ((tmp5)){
				HX_STACK_LINE(366)
				_this->maxy = qy;
			}
		}
		HX_STACK_LINE(367)
		vy = aabb->maxy;
		HX_STACK_LINE(388)
		{
			HX_STACK_LINE(389)
			::zpp_nape::geom::ZPP_Mat23 tmp1 = this->xform;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(389)
			Float tmp2 = tmp1->a;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(389)
			Float tmp3 = vx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(389)
			Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(389)
			::zpp_nape::geom::ZPP_Mat23 tmp5 = this->xform;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(389)
			Float tmp6 = tmp5->b;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(389)
			Float tmp7 = vy;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(389)
			Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(389)
			Float tmp9 = (tmp4 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(389)
			::zpp_nape::geom::ZPP_Mat23 tmp10 = this->xform;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(389)
			Float tmp11 = tmp10->tx;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(389)
			Float tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(389)
			qx = tmp12;
			HX_STACK_LINE(390)
			::zpp_nape::geom::ZPP_Mat23 tmp13 = this->xform;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(390)
			Float tmp14 = tmp13->c;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(390)
			Float tmp15 = vx;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(390)
			Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(390)
			::zpp_nape::geom::ZPP_Mat23 tmp17 = this->xform;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(390)
			Float tmp18 = tmp17->d;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(390)
			Float tmp19 = vy;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(390)
			Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(390)
			Float tmp21 = (tmp16 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(390)
			::zpp_nape::geom::ZPP_Mat23 tmp22 = this->xform;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(390)
			Float tmp23 = tmp22->ty;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(390)
			Float tmp24 = (tmp21 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(390)
			qy = tmp24;
		}
		HX_STACK_LINE(392)
		{
			HX_STACK_LINE(392)
			::zpp_nape::geom::ZPP_AABB tmp1 = this->tmpab;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(392)
			::zpp_nape::geom::ZPP_AABB _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(392)
			bool tmp2 = (qx < _this->minx);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(392)
			if ((tmp2)){
				HX_STACK_LINE(392)
				_this->minx = qx;
			}
			HX_STACK_LINE(392)
			bool tmp3 = (qx > _this->maxx);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(392)
			if ((tmp3)){
				HX_STACK_LINE(392)
				_this->maxx = qx;
			}
			HX_STACK_LINE(392)
			bool tmp4 = (qy < _this->miny);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(392)
			if ((tmp4)){
				HX_STACK_LINE(392)
				_this->miny = qy;
			}
			HX_STACK_LINE(392)
			bool tmp5 = (qy > _this->maxy);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(392)
			if ((tmp5)){
				HX_STACK_LINE(392)
				_this->maxy = qy;
			}
		}
		HX_STACK_LINE(393)
		vx = aabb->minx;
		HX_STACK_LINE(414)
		{
			HX_STACK_LINE(415)
			::zpp_nape::geom::ZPP_Mat23 tmp1 = this->xform;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(415)
			Float tmp2 = tmp1->a;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(415)
			Float tmp3 = vx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(415)
			Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(415)
			::zpp_nape::geom::ZPP_Mat23 tmp5 = this->xform;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(415)
			Float tmp6 = tmp5->b;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(415)
			Float tmp7 = vy;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(415)
			Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(415)
			Float tmp9 = (tmp4 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(415)
			::zpp_nape::geom::ZPP_Mat23 tmp10 = this->xform;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(415)
			Float tmp11 = tmp10->tx;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(415)
			Float tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(415)
			qx = tmp12;
			HX_STACK_LINE(416)
			::zpp_nape::geom::ZPP_Mat23 tmp13 = this->xform;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(416)
			Float tmp14 = tmp13->c;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(416)
			Float tmp15 = vx;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(416)
			Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(416)
			::zpp_nape::geom::ZPP_Mat23 tmp17 = this->xform;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(416)
			Float tmp18 = tmp17->d;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(416)
			Float tmp19 = vy;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(416)
			Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(416)
			Float tmp21 = (tmp16 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(416)
			::zpp_nape::geom::ZPP_Mat23 tmp22 = this->xform;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(416)
			Float tmp23 = tmp22->ty;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(416)
			Float tmp24 = (tmp21 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(416)
			qy = tmp24;
		}
		HX_STACK_LINE(418)
		{
			HX_STACK_LINE(418)
			::zpp_nape::geom::ZPP_AABB tmp1 = this->tmpab;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(418)
			::zpp_nape::geom::ZPP_AABB _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(418)
			bool tmp2 = (qx < _this->minx);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(418)
			if ((tmp2)){
				HX_STACK_LINE(418)
				_this->minx = qx;
			}
			HX_STACK_LINE(418)
			bool tmp3 = (qx > _this->maxx);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(418)
			if ((tmp3)){
				HX_STACK_LINE(418)
				_this->maxx = qx;
			}
			HX_STACK_LINE(418)
			bool tmp4 = (qy < _this->miny);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(418)
			if ((tmp4)){
				HX_STACK_LINE(418)
				_this->miny = qy;
			}
			HX_STACK_LINE(418)
			bool tmp5 = (qy > _this->maxy);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(418)
			if ((tmp5)){
				HX_STACK_LINE(418)
				_this->maxy = qy;
			}
		}
		HX_STACK_LINE(419)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(419)
		{
			HX_STACK_LINE(419)
			::zpp_nape::geom::ZPP_AABB tmp2 = this->tmpab;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(419)
			::zpp_nape::geom::ZPP_AABB _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(419)
			::zpp_nape::geom::ZPP_AABB tmp3 = this->viewport;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(419)
			::zpp_nape::geom::ZPP_AABB x = tmp3;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(419)
			bool tmp4 = (x->miny <= _this->maxy);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(419)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(419)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(419)
			if ((tmp5)){
				HX_STACK_LINE(419)
				tmp6 = (_this->miny <= x->maxy);
			}
			else{
				HX_STACK_LINE(419)
				tmp6 = false;
			}
			HX_STACK_LINE(419)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(419)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(419)
			if ((tmp7)){
				HX_STACK_LINE(419)
				tmp8 = (x->minx <= _this->maxx);
			}
			else{
				HX_STACK_LINE(419)
				tmp8 = false;
			}
			HX_STACK_LINE(419)
			if ((tmp8)){
				HX_STACK_LINE(419)
				tmp1 = (_this->minx <= x->maxx);
			}
			else{
				HX_STACK_LINE(419)
				tmp1 = false;
			}
		}
		HX_STACK_LINE(419)
		return tmp1;
	}
	HX_STACK_LINE(271)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Debug_obj,cull,return )

Void ZPP_Debug_obj::sup_setbg( int bgcol){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_Debug","sup_setbg",0x92bffd2b,"zpp_nape.util.ZPP_Debug.sup_setbg","zpp_nape/util/Debug.hx",422,0xeecbde16)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bgcol,"bgcol")
		HX_STACK_LINE(423)
		int tmp = (int(bgcol) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(423)
		int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(423)
		this->bg_r = tmp1;
		HX_STACK_LINE(424)
		int tmp2 = (int(bgcol) >> int((int)8));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(424)
		int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(424)
		this->bg_g = tmp3;
		HX_STACK_LINE(425)
		int tmp4 = (int(bgcol) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(425)
		this->bg_b = tmp4;
		HX_STACK_LINE(426)
		this->bg_col = bgcol;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Debug_obj,sup_setbg,(void))

bool ZPP_Debug_obj::internal;


ZPP_Debug_obj::ZPP_Debug_obj()
{
}

void ZPP_Debug_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Debug);
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(isbmp,"isbmp");
	HX_MARK_MEMBER_NAME(d_shape,"d_shape");
	HX_MARK_MEMBER_NAME(bg_r,"bg_r");
	HX_MARK_MEMBER_NAME(bg_g,"bg_g");
	HX_MARK_MEMBER_NAME(bg_b,"bg_b");
	HX_MARK_MEMBER_NAME(bg_col,"bg_col");
	HX_MARK_MEMBER_NAME(xform,"xform");
	HX_MARK_MEMBER_NAME(xnull,"xnull");
	HX_MARK_MEMBER_NAME(xdet,"xdet");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(viewport,"viewport");
	HX_MARK_MEMBER_NAME(iport,"iport");
	HX_MARK_MEMBER_NAME(tmpab,"tmpab");
	HX_MARK_END_CLASS();
}

void ZPP_Debug_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(isbmp,"isbmp");
	HX_VISIT_MEMBER_NAME(d_shape,"d_shape");
	HX_VISIT_MEMBER_NAME(bg_r,"bg_r");
	HX_VISIT_MEMBER_NAME(bg_g,"bg_g");
	HX_VISIT_MEMBER_NAME(bg_b,"bg_b");
	HX_VISIT_MEMBER_NAME(bg_col,"bg_col");
	HX_VISIT_MEMBER_NAME(xform,"xform");
	HX_VISIT_MEMBER_NAME(xnull,"xnull");
	HX_VISIT_MEMBER_NAME(xdet,"xdet");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(viewport,"viewport");
	HX_VISIT_MEMBER_NAME(iport,"iport");
	HX_VISIT_MEMBER_NAME(tmpab,"tmpab");
}

Dynamic ZPP_Debug_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bg_r") ) { return bg_r; }
		if (HX_FIELD_EQ(inName,"bg_g") ) { return bg_g; }
		if (HX_FIELD_EQ(inName,"bg_b") ) { return bg_b; }
		if (HX_FIELD_EQ(inName,"xdet") ) { return xdet; }
		if (HX_FIELD_EQ(inName,"cull") ) { return cull_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		if (HX_FIELD_EQ(inName,"isbmp") ) { return isbmp; }
		if (HX_FIELD_EQ(inName,"xform") ) { return xform; }
		if (HX_FIELD_EQ(inName,"xnull") ) { return xnull; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"iport") ) { return iport; }
		if (HX_FIELD_EQ(inName,"tmpab") ) { return tmpab; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bg_col") ) { return bg_col; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"d_shape") ) { return d_shape; }
		if (HX_FIELD_EQ(inName,"setform") ) { return setform_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"viewport") ) { return viewport; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sup_setbg") ) { return sup_setbg_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"xform_invalidate") ) { return xform_invalidate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_Debug_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { outValue = internal; return true;  }
	}
	return false;
}

Dynamic ZPP_Debug_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bg_r") ) { bg_r=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bg_g") ) { bg_g=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bg_b") ) { bg_b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xdet") ) { xdet=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::util::Debug >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isbmp") ) { isbmp=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xform") ) { xform=inValue.Cast< ::zpp_nape::geom::ZPP_Mat23 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xnull") ) { xnull=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iport") ) { iport=inValue.Cast< ::zpp_nape::geom::ZPP_AABB >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tmpab") ) { tmpab=inValue.Cast< ::zpp_nape::geom::ZPP_AABB >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bg_col") ) { bg_col=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"d_shape") ) { d_shape=inValue.Cast< ::zpp_nape::util::ZPP_ShapeDebug >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"viewport") ) { viewport=inValue.Cast< ::zpp_nape::geom::ZPP_AABB >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_Debug_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { internal=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void ZPP_Debug_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"));
	outFields->push(HX_HCSTRING("isbmp","\x9b","\x2e","\x61","\xc1"));
	outFields->push(HX_HCSTRING("d_shape","\xc6","\x8d","\x66","\xb6"));
	outFields->push(HX_HCSTRING("bg_r","\x38","\x64","\x15","\x41"));
	outFields->push(HX_HCSTRING("bg_g","\x2d","\x64","\x15","\x41"));
	outFields->push(HX_HCSTRING("bg_b","\x28","\x64","\x15","\x41"));
	outFields->push(HX_HCSTRING("bg_col","\x86","\xe1","\x55","\xbc"));
	outFields->push(HX_HCSTRING("xform","\xbc","\xfd","\xd5","\x5b"));
	outFields->push(HX_HCSTRING("xnull","\xff","\x3a","\x24","\x61"));
	outFields->push(HX_HCSTRING("xdet","\x5b","\xd4","\x9d","\x4f"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("viewport","\x66","\x4c","\xa5","\x9c"));
	outFields->push(HX_HCSTRING("iport","\x6a","\x6c","\x6f","\xbf"));
	outFields->push(HX_HCSTRING("tmpab","\x78","\xdd","\xdc","\x12"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::util::Debug*/ ,(int)offsetof(ZPP_Debug_obj,outer),HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37")},
	{hx::fsBool,(int)offsetof(ZPP_Debug_obj,isbmp),HX_HCSTRING("isbmp","\x9b","\x2e","\x61","\xc1")},
	{hx::fsObject /*::zpp_nape::util::ZPP_ShapeDebug*/ ,(int)offsetof(ZPP_Debug_obj,d_shape),HX_HCSTRING("d_shape","\xc6","\x8d","\x66","\xb6")},
	{hx::fsFloat,(int)offsetof(ZPP_Debug_obj,bg_r),HX_HCSTRING("bg_r","\x38","\x64","\x15","\x41")},
	{hx::fsFloat,(int)offsetof(ZPP_Debug_obj,bg_g),HX_HCSTRING("bg_g","\x2d","\x64","\x15","\x41")},
	{hx::fsFloat,(int)offsetof(ZPP_Debug_obj,bg_b),HX_HCSTRING("bg_b","\x28","\x64","\x15","\x41")},
	{hx::fsInt,(int)offsetof(ZPP_Debug_obj,bg_col),HX_HCSTRING("bg_col","\x86","\xe1","\x55","\xbc")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_Mat23*/ ,(int)offsetof(ZPP_Debug_obj,xform),HX_HCSTRING("xform","\xbc","\xfd","\xd5","\x5b")},
	{hx::fsBool,(int)offsetof(ZPP_Debug_obj,xnull),HX_HCSTRING("xnull","\xff","\x3a","\x24","\x61")},
	{hx::fsFloat,(int)offsetof(ZPP_Debug_obj,xdet),HX_HCSTRING("xdet","\x5b","\xd4","\x9d","\x4f")},
	{hx::fsInt,(int)offsetof(ZPP_Debug_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(ZPP_Debug_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_AABB*/ ,(int)offsetof(ZPP_Debug_obj,viewport),HX_HCSTRING("viewport","\x66","\x4c","\xa5","\x9c")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_AABB*/ ,(int)offsetof(ZPP_Debug_obj,iport),HX_HCSTRING("iport","\x6a","\x6c","\x6f","\xbf")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_AABB*/ ,(int)offsetof(ZPP_Debug_obj,tmpab),HX_HCSTRING("tmpab","\x78","\xdd","\xdc","\x12")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &ZPP_Debug_obj::internal,HX_HCSTRING("internal","\x3d","\x67","\x76","\x28")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"),
	HX_HCSTRING("isbmp","\x9b","\x2e","\x61","\xc1"),
	HX_HCSTRING("d_shape","\xc6","\x8d","\x66","\xb6"),
	HX_HCSTRING("bg_r","\x38","\x64","\x15","\x41"),
	HX_HCSTRING("bg_g","\x2d","\x64","\x15","\x41"),
	HX_HCSTRING("bg_b","\x28","\x64","\x15","\x41"),
	HX_HCSTRING("bg_col","\x86","\xe1","\x55","\xbc"),
	HX_HCSTRING("xform","\xbc","\xfd","\xd5","\x5b"),
	HX_HCSTRING("xnull","\xff","\x3a","\x24","\x61"),
	HX_HCSTRING("xdet","\x5b","\xd4","\x9d","\x4f"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("viewport","\x66","\x4c","\xa5","\x9c"),
	HX_HCSTRING("iport","\x6a","\x6c","\x6f","\xbf"),
	HX_HCSTRING("xform_invalidate","\x5e","\x8a","\xe9","\x8b"),
	HX_HCSTRING("setform","\xe6","\x75","\x6b","\x1e"),
	HX_HCSTRING("tmpab","\x78","\xdd","\xdc","\x12"),
	HX_HCSTRING("cull","\xb2","\x45","\xc9","\x41"),
	HX_HCSTRING("sup_setbg","\x36","\x2d","\xfb","\x8d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Debug_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Debug_obj::internal,"internal");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Debug_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Debug_obj::internal,"internal");
};

#endif

hx::Class ZPP_Debug_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("internal","\x3d","\x67","\x76","\x28"),
	::String(null()) };

void ZPP_Debug_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZPP_Debug","\x23","\x9c","\xdf","\x62");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Debug_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_Debug_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_Debug_obj >;
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

void ZPP_Debug_obj::__boot()
{
	internal= false;
}

} // end namespace zpp_nape
} // end namespace util
