#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_util_Debug
#include <nape/util/Debug.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_AngleDraw
#include <zpp_nape/constraint/ZPP_AngleDraw.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace constraint{

Void ZPP_AngleDraw_obj::__construct()
{
	return null();
}

//ZPP_AngleDraw_obj::~ZPP_AngleDraw_obj() { }

Dynamic ZPP_AngleDraw_obj::__CreateEmpty() { return  new ZPP_AngleDraw_obj; }
hx::ObjectPtr< ZPP_AngleDraw_obj > ZPP_AngleDraw_obj::__new()
{  hx::ObjectPtr< ZPP_AngleDraw_obj > _result_ = new ZPP_AngleDraw_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_AngleDraw_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_AngleDraw_obj > _result_ = new ZPP_AngleDraw_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_AngleDraw_obj::indicator( ::nape::util::Debug g,::nape::geom::Vec2 c,Float ang,Float rad,int col){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_AngleDraw","indicator",0xbd951c03,"zpp_nape.constraint.ZPP_AngleDraw.indicator","zpp_nape/constraint/AngleJoint.hx",652,0x575b2617)
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(ang,"ang")
		HX_STACK_ARG(rad,"rad")
		HX_STACK_ARG(col,"col")
		HX_STACK_LINE(653)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(653)
		{
			HX_STACK_LINE(653)
			Float tmp1 = ang;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(653)
			Float tmp2 = ::Math_obj::cos(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(653)
			Float x = tmp2;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(653)
			Float tmp3 = ang;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(653)
			Float tmp4 = ::Math_obj::sin(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(653)
			Float y = tmp4;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(653)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(653)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(653)
			{
				HX_STACK_LINE(653)
				::nape::geom::Vec2 tmp5 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(653)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(653)
				if ((tmp6)){
					HX_STACK_LINE(653)
					::nape::geom::Vec2 tmp7 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(653)
					ret = tmp7;
				}
				else{
					HX_STACK_LINE(653)
					::nape::geom::Vec2 tmp7 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(653)
					ret = tmp7;
					HX_STACK_LINE(653)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(653)
					ret->zpp_pool = null();
				}
			}
			HX_STACK_LINE(653)
			bool tmp5 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(653)
			if ((tmp5)){
				HX_STACK_LINE(653)
				::zpp_nape::geom::ZPP_Vec2 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(653)
				{
					HX_STACK_LINE(653)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(653)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(653)
					{
						HX_STACK_LINE(653)
						::zpp_nape::geom::ZPP_Vec2 tmp7 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(653)
						bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(653)
						if ((tmp8)){
							HX_STACK_LINE(653)
							::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(653)
							ret1 = tmp9;
						}
						else{
							HX_STACK_LINE(653)
							::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(653)
							ret1 = tmp9;
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
					tmp6 = ret1;
				}
				HX_STACK_LINE(653)
				ret->zpp_inner = tmp6;
				HX_STACK_LINE(653)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(653)
				Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(653)
				{
					HX_STACK_LINE(653)
					{
						HX_STACK_LINE(653)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(653)
						bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(653)
						if ((tmp7)){
							HX_STACK_LINE(653)
							_this->_validate();
						}
					}
					HX_STACK_LINE(653)
					tmp6 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(653)
				Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(653)
				bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(653)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(653)
				if ((tmp8)){
					HX_STACK_LINE(653)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(653)
					{
						HX_STACK_LINE(653)
						{
							HX_STACK_LINE(653)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(653)
							bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(653)
							bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(653)
							bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(653)
							if ((tmp13)){
								HX_STACK_LINE(653)
								_this->_validate();
							}
						}
						HX_STACK_LINE(653)
						Float tmp11 = ret->zpp_inner->y;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(653)
						tmp10 = tmp11;
					}
					HX_STACK_LINE(653)
					Float tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(653)
					tmp9 = (tmp10 == tmp11);
				}
				else{
					HX_STACK_LINE(653)
					tmp9 = false;
				}
				HX_STACK_LINE(653)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(653)
				if ((tmp10)){
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
						bool tmp11 = (_this->_invalidate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(653)
						if ((tmp11)){
							HX_STACK_LINE(653)
							::zpp_nape::geom::ZPP_Vec2 tmp12 = _this;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(653)
							_this->_invalidate(tmp12);
						}
					}
				}
				HX_STACK_LINE(653)
				ret;
			}
			HX_STACK_LINE(653)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(653)
			tmp = ret;
		}
		HX_STACK_LINE(653)
		::nape::geom::Vec2 dir = tmp;		HX_STACK_VAR(dir,"dir");
		HX_STACK_LINE(654)
		Float tmp1 = rad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(654)
		::nape::geom::Vec2 tmp2 = dir->mul(tmp1,true);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(654)
		::nape::geom::Vec2 tmp3 = c->add(tmp2,true);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(654)
		int tmp4 = col;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(654)
		g->drawFilledCircle(tmp3,(int)2,tmp4);
		HX_STACK_LINE(655)
		{
			HX_STACK_LINE(655)
			::zpp_nape::geom::ZPP_Vec2 inner = dir->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(655)
			dir->zpp_inner->outer = null();
			HX_STACK_LINE(655)
			dir->zpp_inner = null();
			HX_STACK_LINE(655)
			{
				HX_STACK_LINE(655)
				::nape::geom::Vec2 o = dir;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(655)
				::nape::geom::Vec2 tmp5 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(655)
				o->zpp_pool = tmp5;
				HX_STACK_LINE(655)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(655)
			{
				HX_STACK_LINE(655)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(655)
				{
					HX_STACK_LINE(655)
					bool tmp5 = (o->outer != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(655)
					if ((tmp5)){
						HX_STACK_LINE(655)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(655)
						o->outer = null();
					}
					HX_STACK_LINE(655)
					o->_isimmutable = null();
					HX_STACK_LINE(655)
					o->_validate = null();
					HX_STACK_LINE(655)
					o->_invalidate = null();
				}
				HX_STACK_LINE(655)
				::zpp_nape::geom::ZPP_Vec2 tmp5 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(655)
				o->next = tmp5;
				HX_STACK_LINE(655)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ZPP_AngleDraw_obj,indicator,(void))

Float ZPP_AngleDraw_obj::maxarc;

Void ZPP_AngleDraw_obj::drawSpiralSpring( ::nape::util::Debug g,::nape::geom::Vec2 c,Float a0,Float a1,Float r0,Float r1,int col,hx::Null< int >  __o_coils){
int coils = __o_coils.Default(4);
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_AngleDraw","drawSpiralSpring",0xd52ba24e,"zpp_nape.constraint.ZPP_AngleDraw.drawSpiralSpring","zpp_nape/constraint/AngleJoint.hx",658,0x575b2617)
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(a0,"a0")
	HX_STACK_ARG(a1,"a1")
	HX_STACK_ARG(r0,"r0")
	HX_STACK_ARG(r1,"r1")
	HX_STACK_ARG(col,"col")
	HX_STACK_ARG(coils,"coils")
{
		HX_STACK_LINE(659)
		bool tmp = (a0 > a1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(659)
		if ((tmp)){
			HX_STACK_LINE(660)
			{
				HX_STACK_LINE(661)
				Float t = a0;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(662)
				a0 = a1;
				HX_STACK_LINE(663)
				a1 = t;
			}
			HX_STACK_LINE(665)
			{
				HX_STACK_LINE(666)
				Float t = r0;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(667)
				r0 = r1;
				HX_STACK_LINE(668)
				r1 = t;
			}
		}
		HX_STACK_LINE(671)
		bool tmp1 = (a0 == a1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(671)
		if ((tmp1)){
			HX_STACK_LINE(671)
			return null();
		}
		HX_STACK_LINE(672)
		Float tmp2 = (r1 - r0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(672)
		Float dr = tmp2;		HX_STACK_VAR(dr,"dr");
		HX_STACK_LINE(673)
		Float tmp3 = (a1 - a0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(673)
		Float da = tmp3;		HX_STACK_VAR(da,"da");
		HX_STACK_LINE(674)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(674)
		{
			HX_STACK_LINE(675)
			Float tmp5 = ::Math_obj::PI;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(675)
			Float tmp6 = ((int)2 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(675)
			Float tmp7 = dr;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(675)
			Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(675)
			Float tmp9 = da;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(675)
			Float tmp10 = (Float(tmp8) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(675)
			Float x = tmp10;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(676)
			bool tmp11 = (x < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(676)
			if ((tmp11)){
				HX_STACK_LINE(676)
				Float tmp12 = x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(676)
				tmp4 = -(tmp12);
			}
			else{
				HX_STACK_LINE(676)
				tmp4 = x;
			}
		}
		HX_STACK_LINE(674)
		Float Delta = tmp4;		HX_STACK_VAR(Delta,"Delta");
		HX_STACK_LINE(678)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(678)
		{
			HX_STACK_LINE(679)
			Float tmp6 = da;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(679)
			Float tmp7 = ::zpp_nape::constraint::ZPP_AngleDraw_obj::maxarc;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(679)
			Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(679)
			Float tmp9 = (tmp8 * (int)3);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(679)
			int tmp10 = ::Math_obj::ceil(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(679)
			int x = tmp10;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(680)
			int tmp11 = ((int)4 * coils);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(680)
			int y = tmp11;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(681)
			bool tmp12 = (x > y);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(681)
			if ((tmp12)){
				HX_STACK_LINE(681)
				tmp5 = x;
			}
			else{
				HX_STACK_LINE(681)
				tmp5 = y;
			}
		}
		HX_STACK_LINE(678)
		int dcnt = tmp5;		HX_STACK_VAR(dcnt,"dcnt");
		HX_STACK_LINE(683)
		Float tmp6 = (Float(dr) / Float(dcnt));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(683)
		Float drad = tmp6;		HX_STACK_VAR(drad,"drad");
		HX_STACK_LINE(684)
		Float tmp7 = (Float(da) / Float(dcnt));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(684)
		Float dang = tmp7;		HX_STACK_VAR(dang,"dang");
		HX_STACK_LINE(685)
		Float tmp8 = (Float((int)1) / Float(dcnt));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(685)
		Float dtime = tmp8;		HX_STACK_VAR(dtime,"dtime");
		HX_STACK_LINE(686)
		Float tmp9 = a0;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(686)
		Float tmp10 = ::Math_obj::cos(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(686)
		Float c0 = tmp10;		HX_STACK_VAR(c0,"c0");
		HX_STACK_LINE(687)
		Float tmp11 = a0;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(687)
		Float tmp12 = ::Math_obj::sin(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(687)
		Float s0 = tmp12;		HX_STACK_VAR(s0,"s0");
		HX_STACK_LINE(688)
		Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(688)
		{
			HX_STACK_LINE(689)
			Float tmp14 = r0;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(689)
			Float tmp15 = (dr * (int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(689)
			Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(689)
			Float p = tmp16;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(690)
			Float tmp17 = p;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(690)
			Float tmp18 = (((Float)0.75) * Delta);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(690)
			int tmp19 = ((int)2 * coils);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(690)
			Float tmp20 = ::Math_obj::PI;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(690)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(690)
			Float tmp22 = (tmp21 * (int)0);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(690)
			Float tmp23 = ::Math_obj::sin(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(690)
			Float tmp24 = (tmp18 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(690)
			tmp13 = (tmp17 + tmp24);
		}
		HX_STACK_LINE(688)
		Float R0 = tmp13;		HX_STACK_VAR(R0,"R0");
		HX_STACK_LINE(692)
		::nape::geom::Vec2 tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(692)
		{
			HX_STACK_LINE(692)
			Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(692)
			{
				HX_STACK_LINE(692)
				{
					HX_STACK_LINE(692)
					::zpp_nape::geom::ZPP_Vec2 _this = c->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(692)
					bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(692)
					if ((tmp16)){
						HX_STACK_LINE(692)
						_this->_validate();
					}
				}
				HX_STACK_LINE(692)
				tmp15 = c->zpp_inner->x;
			}
			HX_STACK_LINE(692)
			Float tmp16 = (R0 * c0);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(692)
			Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(692)
			Float x = tmp17;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(692)
			Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(692)
			{
				HX_STACK_LINE(692)
				{
					HX_STACK_LINE(692)
					::zpp_nape::geom::ZPP_Vec2 _this = c->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(692)
					bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(692)
					if ((tmp19)){
						HX_STACK_LINE(692)
						_this->_validate();
					}
				}
				HX_STACK_LINE(692)
				tmp18 = c->zpp_inner->y;
			}
			HX_STACK_LINE(692)
			Float tmp19 = (R0 * s0);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(692)
			Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(692)
			Float y = tmp20;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(692)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(692)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(692)
			{
				HX_STACK_LINE(692)
				::nape::geom::Vec2 tmp21 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(692)
				bool tmp22 = (tmp21 == null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(692)
				if ((tmp22)){
					HX_STACK_LINE(692)
					::nape::geom::Vec2 tmp23 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(692)
					ret = tmp23;
				}
				else{
					HX_STACK_LINE(692)
					::nape::geom::Vec2 tmp23 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(692)
					ret = tmp23;
					HX_STACK_LINE(692)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(692)
					ret->zpp_pool = null();
				}
			}
			HX_STACK_LINE(692)
			bool tmp21 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(692)
			if ((tmp21)){
				HX_STACK_LINE(692)
				::zpp_nape::geom::ZPP_Vec2 tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(692)
				{
					HX_STACK_LINE(692)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(692)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(692)
					{
						HX_STACK_LINE(692)
						::zpp_nape::geom::ZPP_Vec2 tmp23 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(692)
						bool tmp24 = (tmp23 == null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(692)
						if ((tmp24)){
							HX_STACK_LINE(692)
							::zpp_nape::geom::ZPP_Vec2 tmp25 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(692)
							ret1 = tmp25;
						}
						else{
							HX_STACK_LINE(692)
							::zpp_nape::geom::ZPP_Vec2 tmp25 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(692)
							ret1 = tmp25;
							HX_STACK_LINE(692)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(692)
							ret1->next = null();
						}
						HX_STACK_LINE(692)
						ret1->weak = false;
					}
					HX_STACK_LINE(692)
					ret1->_immutable = immutable;
					HX_STACK_LINE(692)
					{
						HX_STACK_LINE(692)
						ret1->x = x;
						HX_STACK_LINE(692)
						ret1->y = y;
						HX_STACK_LINE(692)
						{
						}
					}
					HX_STACK_LINE(692)
					tmp22 = ret1;
				}
				HX_STACK_LINE(692)
				ret->zpp_inner = tmp22;
				HX_STACK_LINE(692)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(692)
				Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(692)
				{
					HX_STACK_LINE(692)
					{
						HX_STACK_LINE(692)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(692)
						bool tmp23 = (_this->_validate != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(692)
						if ((tmp23)){
							HX_STACK_LINE(692)
							_this->_validate();
						}
					}
					HX_STACK_LINE(692)
					tmp22 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(692)
				Float tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(692)
				bool tmp24 = (tmp22 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(692)
				bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(692)
				if ((tmp24)){
					HX_STACK_LINE(692)
					Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(692)
					{
						HX_STACK_LINE(692)
						{
							HX_STACK_LINE(692)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(692)
							bool tmp27 = (_this->_validate != null());		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(692)
							bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(692)
							bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(692)
							if ((tmp29)){
								HX_STACK_LINE(692)
								_this->_validate();
							}
						}
						HX_STACK_LINE(692)
						Float tmp27 = ret->zpp_inner->y;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(692)
						tmp26 = tmp27;
					}
					HX_STACK_LINE(692)
					Float tmp27 = y;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(692)
					tmp25 = (tmp26 == tmp27);
				}
				else{
					HX_STACK_LINE(692)
					tmp25 = false;
				}
				HX_STACK_LINE(692)
				bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(692)
				if ((tmp26)){
					HX_STACK_LINE(692)
					{
						HX_STACK_LINE(692)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(692)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(692)
						{
						}
					}
					HX_STACK_LINE(692)
					{
						HX_STACK_LINE(692)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(692)
						bool tmp27 = (_this->_invalidate != null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(692)
						if ((tmp27)){
							HX_STACK_LINE(692)
							::zpp_nape::geom::ZPP_Vec2 tmp28 = _this;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(692)
							_this->_invalidate(tmp28);
						}
					}
				}
				HX_STACK_LINE(692)
				ret;
			}
			HX_STACK_LINE(692)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(692)
			tmp14 = ret;
		}
		HX_STACK_LINE(692)
		::nape::geom::Vec2 p0 = tmp14;		HX_STACK_VAR(p0,"p0");
		HX_STACK_LINE(693)
		Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(693)
		{
			HX_STACK_LINE(694)
			Float tmp16 = dr;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(694)
			Float tmp17 = (((Float)1.5) * coils);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(694)
			Float tmp18 = Delta;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(694)
			Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(694)
			Float tmp20 = ::Math_obj::PI;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(694)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(694)
			int tmp22 = ((int)2 * coils);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(694)
			Float tmp23 = ::Math_obj::PI;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(694)
			Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(694)
			Float tmp25 = (tmp24 * (int)0);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(694)
			Float tmp26 = ::Math_obj::cos(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(694)
			Float tmp27 = (tmp21 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(694)
			tmp15 = (tmp16 + tmp27);
		}
		HX_STACK_LINE(693)
		Float DR = tmp15;		HX_STACK_VAR(DR,"DR");
		HX_STACK_LINE(696)
		Float tmp16 = (DR * c0);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(696)
		Float tmp17 = (R0 * da);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(696)
		Float tmp18 = s0;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(696)
		Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(696)
		Float tmp20 = (tmp16 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(696)
		Float ux = tmp20;		HX_STACK_VAR(ux,"ux");
		HX_STACK_LINE(697)
		Float tmp21 = (DR * s0);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(697)
		Float tmp22 = (R0 * da);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(697)
		Float tmp23 = c0;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(697)
		Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(697)
		Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(697)
		Float uy = tmp25;		HX_STACK_VAR(uy,"uy");
		HX_STACK_LINE(698)
		::nape::geom::Vec2 tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(698)
		{
			HX_STACK_LINE(698)
			Float x = (int)0;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(698)
			Float y = (int)0;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(698)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(698)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(698)
			{
				HX_STACK_LINE(698)
				::nape::geom::Vec2 tmp27 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(698)
				bool tmp28 = (tmp27 == null());		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(698)
				if ((tmp28)){
					HX_STACK_LINE(698)
					::nape::geom::Vec2 tmp29 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(698)
					ret = tmp29;
				}
				else{
					HX_STACK_LINE(698)
					::nape::geom::Vec2 tmp29 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(698)
					ret = tmp29;
					HX_STACK_LINE(698)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(698)
					ret->zpp_pool = null();
				}
			}
			HX_STACK_LINE(698)
			bool tmp27 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(698)
			if ((tmp27)){
				HX_STACK_LINE(698)
				::zpp_nape::geom::ZPP_Vec2 tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(698)
				{
					HX_STACK_LINE(698)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(698)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(698)
					{
						HX_STACK_LINE(698)
						::zpp_nape::geom::ZPP_Vec2 tmp29 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(698)
						bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(698)
						if ((tmp30)){
							HX_STACK_LINE(698)
							::zpp_nape::geom::ZPP_Vec2 tmp31 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(698)
							ret1 = tmp31;
						}
						else{
							HX_STACK_LINE(698)
							::zpp_nape::geom::ZPP_Vec2 tmp31 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(698)
							ret1 = tmp31;
							HX_STACK_LINE(698)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(698)
							ret1->next = null();
						}
						HX_STACK_LINE(698)
						ret1->weak = false;
					}
					HX_STACK_LINE(698)
					ret1->_immutable = immutable;
					HX_STACK_LINE(698)
					{
						HX_STACK_LINE(698)
						ret1->x = x;
						HX_STACK_LINE(698)
						ret1->y = y;
						HX_STACK_LINE(698)
						{
						}
					}
					HX_STACK_LINE(698)
					tmp28 = ret1;
				}
				HX_STACK_LINE(698)
				ret->zpp_inner = tmp28;
				HX_STACK_LINE(698)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(698)
				Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(698)
				{
					HX_STACK_LINE(698)
					{
						HX_STACK_LINE(698)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(698)
						bool tmp29 = (_this->_validate != null());		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(698)
						if ((tmp29)){
							HX_STACK_LINE(698)
							_this->_validate();
						}
					}
					HX_STACK_LINE(698)
					tmp28 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(698)
				Float tmp29 = x;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(698)
				bool tmp30 = (tmp28 == tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(698)
				bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(698)
				if ((tmp30)){
					HX_STACK_LINE(698)
					Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(698)
					{
						HX_STACK_LINE(698)
						{
							HX_STACK_LINE(698)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(698)
							bool tmp33 = (_this->_validate != null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(698)
							bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(698)
							bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(698)
							if ((tmp35)){
								HX_STACK_LINE(698)
								_this->_validate();
							}
						}
						HX_STACK_LINE(698)
						Float tmp33 = ret->zpp_inner->y;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(698)
						tmp32 = tmp33;
					}
					HX_STACK_LINE(698)
					Float tmp33 = y;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(698)
					tmp31 = (tmp32 == tmp33);
				}
				else{
					HX_STACK_LINE(698)
					tmp31 = false;
				}
				HX_STACK_LINE(698)
				bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(698)
				if ((tmp32)){
					HX_STACK_LINE(698)
					{
						HX_STACK_LINE(698)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(698)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(698)
						{
						}
					}
					HX_STACK_LINE(698)
					{
						HX_STACK_LINE(698)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(698)
						bool tmp33 = (_this->_invalidate != null());		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(698)
						if ((tmp33)){
							HX_STACK_LINE(698)
							::zpp_nape::geom::ZPP_Vec2 tmp34 = _this;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(698)
							_this->_invalidate(tmp34);
						}
					}
				}
				HX_STACK_LINE(698)
				ret;
			}
			HX_STACK_LINE(698)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(698)
			tmp26 = ret;
		}
		HX_STACK_LINE(698)
		::nape::geom::Vec2 p1 = tmp26;		HX_STACK_VAR(p1,"p1");
		HX_STACK_LINE(699)
		::nape::geom::Vec2 tmp27;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(699)
		{
			HX_STACK_LINE(699)
			Float x = (int)0;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(699)
			Float y = (int)0;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(699)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(699)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(699)
			{
				HX_STACK_LINE(699)
				::nape::geom::Vec2 tmp28 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(699)
				bool tmp29 = (tmp28 == null());		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(699)
				if ((tmp29)){
					HX_STACK_LINE(699)
					::nape::geom::Vec2 tmp30 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(699)
					ret = tmp30;
				}
				else{
					HX_STACK_LINE(699)
					::nape::geom::Vec2 tmp30 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(699)
					ret = tmp30;
					HX_STACK_LINE(699)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(699)
					ret->zpp_pool = null();
				}
			}
			HX_STACK_LINE(699)
			bool tmp28 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(699)
			if ((tmp28)){
				HX_STACK_LINE(699)
				::zpp_nape::geom::ZPP_Vec2 tmp29;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(699)
				{
					HX_STACK_LINE(699)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(699)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(699)
					{
						HX_STACK_LINE(699)
						::zpp_nape::geom::ZPP_Vec2 tmp30 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(699)
						bool tmp31 = (tmp30 == null());		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(699)
						if ((tmp31)){
							HX_STACK_LINE(699)
							::zpp_nape::geom::ZPP_Vec2 tmp32 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(699)
							ret1 = tmp32;
						}
						else{
							HX_STACK_LINE(699)
							::zpp_nape::geom::ZPP_Vec2 tmp32 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(699)
							ret1 = tmp32;
							HX_STACK_LINE(699)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(699)
							ret1->next = null();
						}
						HX_STACK_LINE(699)
						ret1->weak = false;
					}
					HX_STACK_LINE(699)
					ret1->_immutable = immutable;
					HX_STACK_LINE(699)
					{
						HX_STACK_LINE(699)
						ret1->x = x;
						HX_STACK_LINE(699)
						ret1->y = y;
						HX_STACK_LINE(699)
						{
						}
					}
					HX_STACK_LINE(699)
					tmp29 = ret1;
				}
				HX_STACK_LINE(699)
				ret->zpp_inner = tmp29;
				HX_STACK_LINE(699)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(699)
				Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(699)
				{
					HX_STACK_LINE(699)
					{
						HX_STACK_LINE(699)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(699)
						bool tmp30 = (_this->_validate != null());		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(699)
						if ((tmp30)){
							HX_STACK_LINE(699)
							_this->_validate();
						}
					}
					HX_STACK_LINE(699)
					tmp29 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(699)
				Float tmp30 = x;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(699)
				bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(699)
				bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(699)
				if ((tmp31)){
					HX_STACK_LINE(699)
					Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(699)
					{
						HX_STACK_LINE(699)
						{
							HX_STACK_LINE(699)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(699)
							bool tmp34 = (_this->_validate != null());		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(699)
							bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(699)
							bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(699)
							if ((tmp36)){
								HX_STACK_LINE(699)
								_this->_validate();
							}
						}
						HX_STACK_LINE(699)
						Float tmp34 = ret->zpp_inner->y;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(699)
						tmp33 = tmp34;
					}
					HX_STACK_LINE(699)
					Float tmp34 = y;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(699)
					tmp32 = (tmp33 == tmp34);
				}
				else{
					HX_STACK_LINE(699)
					tmp32 = false;
				}
				HX_STACK_LINE(699)
				bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(699)
				if ((tmp33)){
					HX_STACK_LINE(699)
					{
						HX_STACK_LINE(699)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(699)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(699)
						{
						}
					}
					HX_STACK_LINE(699)
					{
						HX_STACK_LINE(699)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(699)
						bool tmp34 = (_this->_invalidate != null());		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(699)
						if ((tmp34)){
							HX_STACK_LINE(699)
							::zpp_nape::geom::ZPP_Vec2 tmp35 = _this;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(699)
							_this->_invalidate(tmp35);
						}
					}
				}
				HX_STACK_LINE(699)
				ret;
			}
			HX_STACK_LINE(699)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(699)
			tmp27 = ret;
		}
		HX_STACK_LINE(699)
		::nape::geom::Vec2 ct = tmp27;		HX_STACK_VAR(ct,"ct");
		HX_STACK_LINE(700)
		{
			HX_STACK_LINE(700)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(700)
			while((true)){
				HX_STACK_LINE(700)
				bool tmp28 = (_g < dcnt);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(700)
				bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(700)
				if ((tmp29)){
					HX_STACK_LINE(700)
					break;
				}
				HX_STACK_LINE(700)
				int tmp30 = (_g)++;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(700)
				int i = tmp30;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(701)
				Float tmp31 = (a0 + dang);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(701)
				Float a11 = tmp31;		HX_STACK_VAR(a11,"a11");
				HX_STACK_LINE(702)
				Float tmp32 = a11;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(702)
				Float tmp33 = ::Math_obj::cos(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(702)
				Float c1 = tmp33;		HX_STACK_VAR(c1,"c1");
				HX_STACK_LINE(703)
				Float tmp34 = a11;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(703)
				Float tmp35 = ::Math_obj::sin(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(703)
				Float s1 = tmp35;		HX_STACK_VAR(s1,"s1");
				HX_STACK_LINE(704)
				Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(704)
				{
					HX_STACK_LINE(705)
					Float tmp37 = r0;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(705)
					Float tmp38 = dr;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(705)
					int tmp39 = (i + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(705)
					Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(705)
					Float tmp41 = dtime;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(705)
					Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(705)
					Float tmp43 = (tmp37 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(705)
					Float p = tmp43;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(706)
					Float tmp44 = p;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(706)
					Float tmp45 = (((Float)0.75) * Delta);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(706)
					int tmp46 = ((int)2 * coils);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(706)
					Float tmp47 = ::Math_obj::PI;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(706)
					Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(706)
					int tmp49 = (i + (int)1);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(706)
					Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(706)
					Float tmp51 = dtime;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(706)
					Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(706)
					Float tmp53 = ::Math_obj::sin(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(706)
					Float tmp54 = (tmp45 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(706)
					tmp36 = (tmp44 + tmp54);
				}
				HX_STACK_LINE(704)
				Float R1 = tmp36;		HX_STACK_VAR(R1,"R1");
				HX_STACK_LINE(708)
				{
					HX_STACK_LINE(708)
					Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(708)
					{
						HX_STACK_LINE(708)
						{
							HX_STACK_LINE(708)
							::zpp_nape::geom::ZPP_Vec2 _this = c->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(708)
							bool tmp38 = (_this->_validate != null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(708)
							if ((tmp38)){
								HX_STACK_LINE(708)
								_this->_validate();
							}
						}
						HX_STACK_LINE(708)
						tmp37 = c->zpp_inner->x;
					}
					HX_STACK_LINE(708)
					Float tmp38 = (R1 * c1);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(708)
					Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(708)
					Float x = tmp39;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(708)
					Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(708)
					{
						HX_STACK_LINE(708)
						{
							HX_STACK_LINE(708)
							::zpp_nape::geom::ZPP_Vec2 _this = c->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(708)
							bool tmp41 = (_this->_validate != null());		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(708)
							if ((tmp41)){
								HX_STACK_LINE(708)
								_this->_validate();
							}
						}
						HX_STACK_LINE(708)
						tmp40 = c->zpp_inner->y;
					}
					HX_STACK_LINE(708)
					Float tmp41 = (R1 * s1);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(708)
					Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(708)
					Float y = tmp42;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(708)
					Float tmp43;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(708)
					{
						HX_STACK_LINE(708)
						{
							HX_STACK_LINE(708)
							::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(708)
							bool tmp44 = (_this->_validate != null());		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(708)
							if ((tmp44)){
								HX_STACK_LINE(708)
								_this->_validate();
							}
						}
						HX_STACK_LINE(708)
						tmp43 = p1->zpp_inner->x;
					}
					HX_STACK_LINE(708)
					Float tmp44 = x;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(708)
					bool tmp45 = (tmp43 == tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(708)
					bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(708)
					if ((tmp45)){
						HX_STACK_LINE(708)
						Float tmp47;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(708)
						{
							HX_STACK_LINE(708)
							{
								HX_STACK_LINE(708)
								::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(708)
								bool tmp48 = (_this->_validate != null());		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(708)
								bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(708)
								bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(708)
								if ((tmp50)){
									HX_STACK_LINE(708)
									_this->_validate();
								}
							}
							HX_STACK_LINE(708)
							Float tmp48 = p1->zpp_inner->y;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(708)
							tmp47 = tmp48;
						}
						HX_STACK_LINE(708)
						Float tmp48 = y;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(708)
						tmp46 = (tmp47 == tmp48);
					}
					else{
						HX_STACK_LINE(708)
						tmp46 = false;
					}
					HX_STACK_LINE(708)
					bool tmp47 = !(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(708)
					if ((tmp47)){
						HX_STACK_LINE(708)
						{
							HX_STACK_LINE(708)
							p1->zpp_inner->x = x;
							HX_STACK_LINE(708)
							p1->zpp_inner->y = y;
							HX_STACK_LINE(708)
							{
							}
						}
						HX_STACK_LINE(708)
						{
							HX_STACK_LINE(708)
							::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(708)
							bool tmp48 = (_this->_invalidate != null());		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(708)
							if ((tmp48)){
								HX_STACK_LINE(708)
								::zpp_nape::geom::ZPP_Vec2 tmp49 = _this;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(708)
								_this->_invalidate(tmp49);
							}
						}
					}
					HX_STACK_LINE(708)
					p1;
				}
				HX_STACK_LINE(709)
				Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(709)
				{
					HX_STACK_LINE(710)
					Float tmp38 = dr;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(710)
					Float tmp39 = (((Float)1.5) * coils);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(710)
					Float tmp40 = Delta;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(710)
					Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(710)
					Float tmp42 = ::Math_obj::PI;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(710)
					Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(710)
					int tmp44 = ((int)2 * coils);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(710)
					Float tmp45 = ::Math_obj::PI;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(710)
					Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(710)
					int tmp47 = (i + (int)1);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(710)
					Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(710)
					Float tmp49 = dtime;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(710)
					Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(710)
					Float tmp51 = ::Math_obj::cos(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(710)
					Float tmp52 = (tmp43 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(710)
					tmp37 = (tmp38 + tmp52);
				}
				HX_STACK_LINE(709)
				Float DR1 = tmp37;		HX_STACK_VAR(DR1,"DR1");
				HX_STACK_LINE(712)
				Float tmp38 = (DR1 * c1);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(712)
				Float tmp39 = (R1 * da);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(712)
				Float tmp40 = s1;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(712)
				Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(712)
				Float tmp42 = (tmp38 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(712)
				Float vx = tmp42;		HX_STACK_VAR(vx,"vx");
				HX_STACK_LINE(713)
				Float tmp43 = (DR1 * s1);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(713)
				Float tmp44 = (R1 * da);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(713)
				Float tmp45 = c1;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(713)
				Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(713)
				Float tmp47 = (tmp43 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(713)
				Float vy = tmp47;		HX_STACK_VAR(vy,"vy");
				HX_STACK_LINE(714)
				Float tmp48 = (ux * vy);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(714)
				Float tmp49 = (uy * vx);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(714)
				Float tmp50 = (tmp48 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(714)
				Float den = tmp50;		HX_STACK_VAR(den,"den");
				HX_STACK_LINE(715)
				Float tmp51 = (den * den);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(715)
				Float tmp52 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(715)
				bool tmp53 = (tmp51 < tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(715)
				bool tmp54 = !(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(715)
				bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(715)
				bool tmp56;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(715)
				if ((tmp55)){
					HX_STACK_LINE(715)
					Float tmp57 = (ux * vx);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(715)
					Float tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(715)
					Float tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(715)
					Float tmp60 = (uy * vy);		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(715)
					Float tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(715)
					Float tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(715)
					Float tmp63 = (tmp59 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(715)
					Float tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(715)
					Float tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(715)
					tmp56 = (tmp65 <= (int)0);
				}
				else{
					HX_STACK_LINE(715)
					tmp56 = true;
				}
				HX_STACK_LINE(715)
				bool tmp57 = !(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(715)
				bool tmp58;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(715)
				if ((tmp57)){
					HX_STACK_LINE(715)
					Float tmp59 = (ux * vx);		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(715)
					Float tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(715)
					Float tmp61 = (uy * vy);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(715)
					Float tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(715)
					Float tmp63 = (tmp60 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(715)
					Float tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(715)
					tmp58 = (tmp64 > ((Float)0.999));
				}
				else{
					HX_STACK_LINE(715)
					tmp58 = true;
				}
				HX_STACK_LINE(715)
				if ((tmp58)){
					HX_STACK_LINE(715)
					::nape::geom::Vec2 tmp59 = p0;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(715)
					::nape::geom::Vec2 tmp60 = p1;		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(715)
					int tmp61 = col;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(715)
					g->drawLine(tmp59,tmp60,tmp61);
				}
				else{
					HX_STACK_LINE(717)
					Float tmp59;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(717)
					{
						HX_STACK_LINE(717)
						{
							HX_STACK_LINE(717)
							::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(717)
							bool tmp60 = (_this->_validate != null());		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(717)
							if ((tmp60)){
								HX_STACK_LINE(717)
								_this->_validate();
							}
						}
						HX_STACK_LINE(717)
						tmp59 = p1->zpp_inner->x;
					}
					HX_STACK_LINE(717)
					Float tmp60;		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(717)
					{
						HX_STACK_LINE(717)
						{
							HX_STACK_LINE(717)
							::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(717)
							bool tmp61 = (_this->_validate != null());		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(717)
							if ((tmp61)){
								HX_STACK_LINE(717)
								_this->_validate();
							}
						}
						HX_STACK_LINE(717)
						tmp60 = p0->zpp_inner->x;
					}
					HX_STACK_LINE(717)
					Float tmp61 = (tmp59 - tmp60);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(717)
					Float tmp62 = vy;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(717)
					Float tmp63 = (tmp61 * tmp62);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(717)
					Float tmp64;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(717)
					{
						HX_STACK_LINE(717)
						{
							HX_STACK_LINE(717)
							::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(717)
							bool tmp65 = (_this->_validate != null());		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(717)
							if ((tmp65)){
								HX_STACK_LINE(717)
								_this->_validate();
							}
						}
						HX_STACK_LINE(717)
						tmp64 = p0->zpp_inner->y;
					}
					HX_STACK_LINE(717)
					Float tmp65;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(717)
					{
						HX_STACK_LINE(717)
						{
							HX_STACK_LINE(717)
							::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(717)
							bool tmp66 = (_this->_validate != null());		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(717)
							if ((tmp66)){
								HX_STACK_LINE(717)
								_this->_validate();
							}
						}
						HX_STACK_LINE(717)
						tmp65 = p1->zpp_inner->y;
					}
					HX_STACK_LINE(717)
					Float tmp66 = (tmp64 - tmp65);		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(717)
					Float tmp67 = vx;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(717)
					Float tmp68 = (tmp66 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(717)
					Float tmp69 = (tmp63 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(717)
					Float tmp70 = den;		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(717)
					Float tmp71 = (Float(tmp69) / Float(tmp70));		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(717)
					Float t = tmp71;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(718)
					bool tmp72 = (t <= (int)0);		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(718)
					if ((tmp72)){
						HX_STACK_LINE(718)
						::nape::geom::Vec2 tmp73 = p0;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(718)
						::nape::geom::Vec2 tmp74 = p1;		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(718)
						int tmp75 = col;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(718)
						g->drawLine(tmp73,tmp74,tmp75);
					}
					else{
						HX_STACK_LINE(720)
						{
							HX_STACK_LINE(720)
							Float tmp73;		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(720)
							{
								HX_STACK_LINE(720)
								{
									HX_STACK_LINE(720)
									::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(720)
									bool tmp74 = (_this->_validate != null());		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(720)
									if ((tmp74)){
										HX_STACK_LINE(720)
										_this->_validate();
									}
								}
								HX_STACK_LINE(720)
								tmp73 = p0->zpp_inner->x;
							}
							HX_STACK_LINE(720)
							Float tmp74 = (ux * t);		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(720)
							Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(720)
							Float x = tmp75;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(720)
							{
								HX_STACK_LINE(720)
								Float tmp76;		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(720)
								{
									HX_STACK_LINE(720)
									{
										HX_STACK_LINE(720)
										::zpp_nape::geom::ZPP_Vec2 _this = ct->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(720)
										bool tmp77 = (_this->_validate != null());		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(720)
										if ((tmp77)){
											HX_STACK_LINE(720)
											_this->_validate();
										}
									}
									HX_STACK_LINE(720)
									tmp76 = ct->zpp_inner->x;
								}
								HX_STACK_LINE(720)
								Float tmp77 = x;		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(720)
								bool tmp78 = (tmp76 != tmp77);		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(720)
								if ((tmp78)){
									HX_STACK_LINE(720)
									ct->zpp_inner->x = x;
									HX_STACK_LINE(720)
									{
										HX_STACK_LINE(720)
										::zpp_nape::geom::ZPP_Vec2 _this = ct->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(720)
										bool tmp79 = (_this->_invalidate != null());		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(720)
										if ((tmp79)){
											HX_STACK_LINE(720)
											::zpp_nape::geom::ZPP_Vec2 tmp80 = _this;		HX_STACK_VAR(tmp80,"tmp80");
											HX_STACK_LINE(720)
											_this->_invalidate(tmp80);
										}
									}
								}
							}
							HX_STACK_LINE(720)
							{
								HX_STACK_LINE(720)
								{
									HX_STACK_LINE(720)
									::zpp_nape::geom::ZPP_Vec2 _this = ct->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(720)
									bool tmp76 = (_this->_validate != null());		HX_STACK_VAR(tmp76,"tmp76");
									HX_STACK_LINE(720)
									if ((tmp76)){
										HX_STACK_LINE(720)
										_this->_validate();
									}
								}
								HX_STACK_LINE(720)
								ct->zpp_inner->x;
							}
						}
						HX_STACK_LINE(721)
						{
							HX_STACK_LINE(721)
							Float tmp73;		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(721)
							{
								HX_STACK_LINE(721)
								{
									HX_STACK_LINE(721)
									::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(721)
									bool tmp74 = (_this->_validate != null());		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(721)
									if ((tmp74)){
										HX_STACK_LINE(721)
										_this->_validate();
									}
								}
								HX_STACK_LINE(721)
								tmp73 = p0->zpp_inner->y;
							}
							HX_STACK_LINE(721)
							Float tmp74 = (uy * t);		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(721)
							Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(721)
							Float y = tmp75;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(721)
							{
								HX_STACK_LINE(721)
								Float tmp76;		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(721)
								{
									HX_STACK_LINE(721)
									{
										HX_STACK_LINE(721)
										::zpp_nape::geom::ZPP_Vec2 _this = ct->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(721)
										bool tmp77 = (_this->_validate != null());		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(721)
										if ((tmp77)){
											HX_STACK_LINE(721)
											_this->_validate();
										}
									}
									HX_STACK_LINE(721)
									tmp76 = ct->zpp_inner->y;
								}
								HX_STACK_LINE(721)
								Float tmp77 = y;		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(721)
								bool tmp78 = (tmp76 != tmp77);		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(721)
								if ((tmp78)){
									HX_STACK_LINE(721)
									ct->zpp_inner->y = y;
									HX_STACK_LINE(721)
									{
										HX_STACK_LINE(721)
										::zpp_nape::geom::ZPP_Vec2 _this = ct->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(721)
										bool tmp79 = (_this->_invalidate != null());		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(721)
										if ((tmp79)){
											HX_STACK_LINE(721)
											::zpp_nape::geom::ZPP_Vec2 tmp80 = _this;		HX_STACK_VAR(tmp80,"tmp80");
											HX_STACK_LINE(721)
											_this->_invalidate(tmp80);
										}
									}
								}
							}
							HX_STACK_LINE(721)
							{
								HX_STACK_LINE(721)
								{
									HX_STACK_LINE(721)
									::zpp_nape::geom::ZPP_Vec2 _this = ct->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(721)
									bool tmp76 = (_this->_validate != null());		HX_STACK_VAR(tmp76,"tmp76");
									HX_STACK_LINE(721)
									if ((tmp76)){
										HX_STACK_LINE(721)
										_this->_validate();
									}
								}
								HX_STACK_LINE(721)
								ct->zpp_inner->y;
							}
						}
						HX_STACK_LINE(722)
						::nape::geom::Vec2 tmp73 = p0;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(722)
						::nape::geom::Vec2 tmp74 = ct;		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(722)
						::nape::geom::Vec2 tmp75 = p1;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(722)
						int tmp76 = col;		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(722)
						g->drawCurve(tmp73,tmp74,tmp75,tmp76);
					}
				}
				HX_STACK_LINE(725)
				a0 = a11;
				HX_STACK_LINE(726)
				c0 = c1;
				HX_STACK_LINE(727)
				s0 = s1;
				HX_STACK_LINE(728)
				ux = vx;
				HX_STACK_LINE(729)
				uy = vy;
				HX_STACK_LINE(730)
				{
					HX_STACK_LINE(730)
					::nape::geom::Vec2 tmp59;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(730)
					{
						HX_STACK_LINE(730)
						Float tmp60;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(730)
						{
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(730)
								bool tmp61 = (_this->_validate != null());		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(730)
								if ((tmp61)){
									HX_STACK_LINE(730)
									_this->_validate();
								}
							}
							HX_STACK_LINE(730)
							tmp60 = p1->zpp_inner->x;
						}
						HX_STACK_LINE(730)
						Float x = tmp60;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(730)
						Float tmp61;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(730)
						{
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(730)
								bool tmp62 = (_this->_validate != null());		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(730)
								if ((tmp62)){
									HX_STACK_LINE(730)
									_this->_validate();
								}
							}
							HX_STACK_LINE(730)
							tmp61 = p1->zpp_inner->y;
						}
						HX_STACK_LINE(730)
						Float y = tmp61;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(730)
						Float tmp62;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(730)
						{
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(730)
								bool tmp63 = (_this->_validate != null());		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(730)
								if ((tmp63)){
									HX_STACK_LINE(730)
									_this->_validate();
								}
							}
							HX_STACK_LINE(730)
							tmp62 = p0->zpp_inner->x;
						}
						HX_STACK_LINE(730)
						Float tmp63 = x;		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(730)
						bool tmp64 = (tmp62 == tmp63);		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(730)
						bool tmp65;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(730)
						if ((tmp64)){
							HX_STACK_LINE(730)
							Float tmp66;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								{
									HX_STACK_LINE(730)
									::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(730)
									bool tmp67 = (_this->_validate != null());		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(730)
									bool tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(730)
									bool tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(730)
									if ((tmp69)){
										HX_STACK_LINE(730)
										_this->_validate();
									}
								}
								HX_STACK_LINE(730)
								Float tmp67 = p0->zpp_inner->y;		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(730)
								tmp66 = tmp67;
							}
							HX_STACK_LINE(730)
							Float tmp67 = y;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(730)
							tmp65 = (tmp66 == tmp67);
						}
						else{
							HX_STACK_LINE(730)
							tmp65 = false;
						}
						HX_STACK_LINE(730)
						bool tmp66 = !(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(730)
						if ((tmp66)){
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								p0->zpp_inner->x = x;
								HX_STACK_LINE(730)
								p0->zpp_inner->y = y;
								HX_STACK_LINE(730)
								{
								}
							}
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(730)
								bool tmp67 = (_this->_invalidate != null());		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(730)
								if ((tmp67)){
									HX_STACK_LINE(730)
									::zpp_nape::geom::ZPP_Vec2 tmp68 = _this;		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(730)
									_this->_invalidate(tmp68);
								}
							}
						}
						HX_STACK_LINE(730)
						tmp59 = p0;
					}
					HX_STACK_LINE(730)
					::nape::geom::Vec2 ret = tmp59;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(730)
					{
						HX_STACK_LINE(730)
						bool tmp60;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(730)
						tmp60 = p1->zpp_inner->weak;
						HX_STACK_LINE(730)
						if ((tmp60)){
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								::zpp_nape::geom::ZPP_Vec2 inner = p1->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(730)
								p1->zpp_inner->outer = null();
								HX_STACK_LINE(730)
								p1->zpp_inner = null();
								HX_STACK_LINE(730)
								{
									HX_STACK_LINE(730)
									::nape::geom::Vec2 o = p1;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(730)
									::nape::geom::Vec2 tmp61 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(730)
									o->zpp_pool = tmp61;
									HX_STACK_LINE(730)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(730)
								{
									HX_STACK_LINE(730)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(730)
									{
										HX_STACK_LINE(730)
										bool tmp61 = (o->outer != null());		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(730)
										if ((tmp61)){
											HX_STACK_LINE(730)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(730)
											o->outer = null();
										}
										HX_STACK_LINE(730)
										o->_isimmutable = null();
										HX_STACK_LINE(730)
										o->_validate = null();
										HX_STACK_LINE(730)
										o->_invalidate = null();
									}
									HX_STACK_LINE(730)
									::zpp_nape::geom::ZPP_Vec2 tmp61 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(730)
									o->next = tmp61;
									HX_STACK_LINE(730)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(730)
							true;
						}
						else{
							HX_STACK_LINE(730)
							false;
						}
					}
					HX_STACK_LINE(730)
					ret;
				}
			}
		}
		HX_STACK_LINE(732)
		{
			HX_STACK_LINE(732)
			::zpp_nape::geom::ZPP_Vec2 inner = p0->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(732)
			p0->zpp_inner->outer = null();
			HX_STACK_LINE(732)
			p0->zpp_inner = null();
			HX_STACK_LINE(732)
			{
				HX_STACK_LINE(732)
				::nape::geom::Vec2 o = p0;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(732)
				::nape::geom::Vec2 tmp28 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(732)
				o->zpp_pool = tmp28;
				HX_STACK_LINE(732)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(732)
			{
				HX_STACK_LINE(732)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(732)
				{
					HX_STACK_LINE(732)
					bool tmp28 = (o->outer != null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(732)
					if ((tmp28)){
						HX_STACK_LINE(732)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(732)
						o->outer = null();
					}
					HX_STACK_LINE(732)
					o->_isimmutable = null();
					HX_STACK_LINE(732)
					o->_validate = null();
					HX_STACK_LINE(732)
					o->_invalidate = null();
				}
				HX_STACK_LINE(732)
				::zpp_nape::geom::ZPP_Vec2 tmp28 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(732)
				o->next = tmp28;
				HX_STACK_LINE(732)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(733)
		{
			HX_STACK_LINE(733)
			::zpp_nape::geom::ZPP_Vec2 inner = p1->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(733)
			p1->zpp_inner->outer = null();
			HX_STACK_LINE(733)
			p1->zpp_inner = null();
			HX_STACK_LINE(733)
			{
				HX_STACK_LINE(733)
				::nape::geom::Vec2 o = p1;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(733)
				::nape::geom::Vec2 tmp28 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(733)
				o->zpp_pool = tmp28;
				HX_STACK_LINE(733)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(733)
			{
				HX_STACK_LINE(733)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(733)
				{
					HX_STACK_LINE(733)
					bool tmp28 = (o->outer != null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(733)
					if ((tmp28)){
						HX_STACK_LINE(733)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(733)
						o->outer = null();
					}
					HX_STACK_LINE(733)
					o->_isimmutable = null();
					HX_STACK_LINE(733)
					o->_validate = null();
					HX_STACK_LINE(733)
					o->_invalidate = null();
				}
				HX_STACK_LINE(733)
				::zpp_nape::geom::ZPP_Vec2 tmp28 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(733)
				o->next = tmp28;
				HX_STACK_LINE(733)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(734)
		{
			HX_STACK_LINE(734)
			::zpp_nape::geom::ZPP_Vec2 inner = ct->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(734)
			ct->zpp_inner->outer = null();
			HX_STACK_LINE(734)
			ct->zpp_inner = null();
			HX_STACK_LINE(734)
			{
				HX_STACK_LINE(734)
				::nape::geom::Vec2 o = ct;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(734)
				::nape::geom::Vec2 tmp28 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(734)
				o->zpp_pool = tmp28;
				HX_STACK_LINE(734)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(734)
			{
				HX_STACK_LINE(734)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(734)
				{
					HX_STACK_LINE(734)
					bool tmp28 = (o->outer != null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(734)
					if ((tmp28)){
						HX_STACK_LINE(734)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(734)
						o->outer = null();
					}
					HX_STACK_LINE(734)
					o->_isimmutable = null();
					HX_STACK_LINE(734)
					o->_validate = null();
					HX_STACK_LINE(734)
					o->_invalidate = null();
				}
				HX_STACK_LINE(734)
				::zpp_nape::geom::ZPP_Vec2 tmp28 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(734)
				o->next = tmp28;
				HX_STACK_LINE(734)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(ZPP_AngleDraw_obj,drawSpiralSpring,(void))

Void ZPP_AngleDraw_obj::drawSpiral( ::nape::util::Debug g,::nape::geom::Vec2 c,Float a0,Float a1,Float r0,Float r1,int col){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_AngleDraw","drawSpiral",0x7fd3a8a1,"zpp_nape.constraint.ZPP_AngleDraw.drawSpiral","zpp_nape/constraint/AngleJoint.hx",736,0x575b2617)
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(a0,"a0")
		HX_STACK_ARG(a1,"a1")
		HX_STACK_ARG(r0,"r0")
		HX_STACK_ARG(r1,"r1")
		HX_STACK_ARG(col,"col")
		HX_STACK_LINE(737)
		bool tmp = (a0 > a1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(737)
		if ((tmp)){
			HX_STACK_LINE(738)
			{
				HX_STACK_LINE(739)
				Float t = a0;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(740)
				a0 = a1;
				HX_STACK_LINE(741)
				a1 = t;
			}
			HX_STACK_LINE(743)
			{
				HX_STACK_LINE(744)
				Float t = r0;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(745)
				r0 = r1;
				HX_STACK_LINE(746)
				r1 = t;
			}
		}
		HX_STACK_LINE(749)
		bool tmp1 = (a0 == a1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(749)
		if ((tmp1)){
			HX_STACK_LINE(749)
			return null();
		}
		HX_STACK_LINE(750)
		Float tmp2 = (r1 - r0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(750)
		Float dr = tmp2;		HX_STACK_VAR(dr,"dr");
		HX_STACK_LINE(751)
		Float tmp3 = (a1 - a0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(751)
		Float da = tmp3;		HX_STACK_VAR(da,"da");
		HX_STACK_LINE(752)
		Float tmp4 = da;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(752)
		Float tmp5 = ::zpp_nape::constraint::ZPP_AngleDraw_obj::maxarc;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(752)
		Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(752)
		int tmp7 = ::Math_obj::ceil(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(752)
		int dcnt = tmp7;		HX_STACK_VAR(dcnt,"dcnt");
		HX_STACK_LINE(753)
		Float tmp8 = (Float(dr) / Float(dcnt));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(753)
		Float drad = tmp8;		HX_STACK_VAR(drad,"drad");
		HX_STACK_LINE(754)
		Float tmp9 = (Float(da) / Float(dcnt));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(754)
		Float dang = tmp9;		HX_STACK_VAR(dang,"dang");
		HX_STACK_LINE(755)
		Float tmp10 = a0;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(755)
		Float tmp11 = ::Math_obj::cos(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(755)
		Float c0 = tmp11;		HX_STACK_VAR(c0,"c0");
		HX_STACK_LINE(756)
		Float tmp12 = a0;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(756)
		Float tmp13 = ::Math_obj::sin(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(756)
		Float s0 = tmp13;		HX_STACK_VAR(s0,"s0");
		HX_STACK_LINE(757)
		::nape::geom::Vec2 tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(757)
		{
			HX_STACK_LINE(757)
			Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(757)
			{
				HX_STACK_LINE(757)
				{
					HX_STACK_LINE(757)
					::zpp_nape::geom::ZPP_Vec2 _this = c->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(757)
					bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(757)
					if ((tmp16)){
						HX_STACK_LINE(757)
						_this->_validate();
					}
				}
				HX_STACK_LINE(757)
				tmp15 = c->zpp_inner->x;
			}
			HX_STACK_LINE(757)
			Float tmp16 = (r0 * c0);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(757)
			Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(757)
			Float x = tmp17;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(757)
			Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(757)
			{
				HX_STACK_LINE(757)
				{
					HX_STACK_LINE(757)
					::zpp_nape::geom::ZPP_Vec2 _this = c->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(757)
					bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(757)
					if ((tmp19)){
						HX_STACK_LINE(757)
						_this->_validate();
					}
				}
				HX_STACK_LINE(757)
				tmp18 = c->zpp_inner->y;
			}
			HX_STACK_LINE(757)
			Float tmp19 = (r0 * s0);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(757)
			Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(757)
			Float y = tmp20;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(757)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(757)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(757)
			{
				HX_STACK_LINE(757)
				::nape::geom::Vec2 tmp21 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(757)
				bool tmp22 = (tmp21 == null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(757)
				if ((tmp22)){
					HX_STACK_LINE(757)
					::nape::geom::Vec2 tmp23 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(757)
					ret = tmp23;
				}
				else{
					HX_STACK_LINE(757)
					::nape::geom::Vec2 tmp23 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(757)
					ret = tmp23;
					HX_STACK_LINE(757)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(757)
					ret->zpp_pool = null();
				}
			}
			HX_STACK_LINE(757)
			bool tmp21 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(757)
			if ((tmp21)){
				HX_STACK_LINE(757)
				::zpp_nape::geom::ZPP_Vec2 tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(757)
				{
					HX_STACK_LINE(757)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(757)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(757)
					{
						HX_STACK_LINE(757)
						::zpp_nape::geom::ZPP_Vec2 tmp23 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(757)
						bool tmp24 = (tmp23 == null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(757)
						if ((tmp24)){
							HX_STACK_LINE(757)
							::zpp_nape::geom::ZPP_Vec2 tmp25 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(757)
							ret1 = tmp25;
						}
						else{
							HX_STACK_LINE(757)
							::zpp_nape::geom::ZPP_Vec2 tmp25 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(757)
							ret1 = tmp25;
							HX_STACK_LINE(757)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(757)
							ret1->next = null();
						}
						HX_STACK_LINE(757)
						ret1->weak = false;
					}
					HX_STACK_LINE(757)
					ret1->_immutable = immutable;
					HX_STACK_LINE(757)
					{
						HX_STACK_LINE(757)
						ret1->x = x;
						HX_STACK_LINE(757)
						ret1->y = y;
						HX_STACK_LINE(757)
						{
						}
					}
					HX_STACK_LINE(757)
					tmp22 = ret1;
				}
				HX_STACK_LINE(757)
				ret->zpp_inner = tmp22;
				HX_STACK_LINE(757)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(757)
				Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(757)
				{
					HX_STACK_LINE(757)
					{
						HX_STACK_LINE(757)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(757)
						bool tmp23 = (_this->_validate != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(757)
						if ((tmp23)){
							HX_STACK_LINE(757)
							_this->_validate();
						}
					}
					HX_STACK_LINE(757)
					tmp22 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(757)
				Float tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(757)
				bool tmp24 = (tmp22 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(757)
				bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(757)
				if ((tmp24)){
					HX_STACK_LINE(757)
					Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(757)
					{
						HX_STACK_LINE(757)
						{
							HX_STACK_LINE(757)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(757)
							bool tmp27 = (_this->_validate != null());		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(757)
							bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(757)
							bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(757)
							if ((tmp29)){
								HX_STACK_LINE(757)
								_this->_validate();
							}
						}
						HX_STACK_LINE(757)
						Float tmp27 = ret->zpp_inner->y;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(757)
						tmp26 = tmp27;
					}
					HX_STACK_LINE(757)
					Float tmp27 = y;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(757)
					tmp25 = (tmp26 == tmp27);
				}
				else{
					HX_STACK_LINE(757)
					tmp25 = false;
				}
				HX_STACK_LINE(757)
				bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(757)
				if ((tmp26)){
					HX_STACK_LINE(757)
					{
						HX_STACK_LINE(757)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(757)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(757)
						{
						}
					}
					HX_STACK_LINE(757)
					{
						HX_STACK_LINE(757)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(757)
						bool tmp27 = (_this->_invalidate != null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(757)
						if ((tmp27)){
							HX_STACK_LINE(757)
							::zpp_nape::geom::ZPP_Vec2 tmp28 = _this;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(757)
							_this->_invalidate(tmp28);
						}
					}
				}
				HX_STACK_LINE(757)
				ret;
			}
			HX_STACK_LINE(757)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(757)
			tmp14 = ret;
		}
		HX_STACK_LINE(757)
		::nape::geom::Vec2 p0 = tmp14;		HX_STACK_VAR(p0,"p0");
		HX_STACK_LINE(758)
		Float tmp15 = (dr * c0);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(758)
		Float tmp16 = (r0 * da);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(758)
		Float tmp17 = s0;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(758)
		Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(758)
		Float tmp19 = (tmp15 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(758)
		Float ux = tmp19;		HX_STACK_VAR(ux,"ux");
		HX_STACK_LINE(759)
		Float tmp20 = (dr * s0);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(759)
		Float tmp21 = (r0 * da);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(759)
		Float tmp22 = c0;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(759)
		Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(759)
		Float tmp24 = (tmp20 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(759)
		Float uy = tmp24;		HX_STACK_VAR(uy,"uy");
		HX_STACK_LINE(760)
		::nape::geom::Vec2 tmp25;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(760)
		{
			HX_STACK_LINE(760)
			Float x = (int)0;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(760)
			Float y = (int)0;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(760)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(760)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(760)
			{
				HX_STACK_LINE(760)
				::nape::geom::Vec2 tmp26 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(760)
				bool tmp27 = (tmp26 == null());		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(760)
				if ((tmp27)){
					HX_STACK_LINE(760)
					::nape::geom::Vec2 tmp28 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(760)
					ret = tmp28;
				}
				else{
					HX_STACK_LINE(760)
					::nape::geom::Vec2 tmp28 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(760)
					ret = tmp28;
					HX_STACK_LINE(760)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(760)
					ret->zpp_pool = null();
				}
			}
			HX_STACK_LINE(760)
			bool tmp26 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(760)
			if ((tmp26)){
				HX_STACK_LINE(760)
				::zpp_nape::geom::ZPP_Vec2 tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(760)
				{
					HX_STACK_LINE(760)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(760)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(760)
					{
						HX_STACK_LINE(760)
						::zpp_nape::geom::ZPP_Vec2 tmp28 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(760)
						bool tmp29 = (tmp28 == null());		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(760)
						if ((tmp29)){
							HX_STACK_LINE(760)
							::zpp_nape::geom::ZPP_Vec2 tmp30 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(760)
							ret1 = tmp30;
						}
						else{
							HX_STACK_LINE(760)
							::zpp_nape::geom::ZPP_Vec2 tmp30 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(760)
							ret1 = tmp30;
							HX_STACK_LINE(760)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(760)
							ret1->next = null();
						}
						HX_STACK_LINE(760)
						ret1->weak = false;
					}
					HX_STACK_LINE(760)
					ret1->_immutable = immutable;
					HX_STACK_LINE(760)
					{
						HX_STACK_LINE(760)
						ret1->x = x;
						HX_STACK_LINE(760)
						ret1->y = y;
						HX_STACK_LINE(760)
						{
						}
					}
					HX_STACK_LINE(760)
					tmp27 = ret1;
				}
				HX_STACK_LINE(760)
				ret->zpp_inner = tmp27;
				HX_STACK_LINE(760)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(760)
				Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(760)
				{
					HX_STACK_LINE(760)
					{
						HX_STACK_LINE(760)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(760)
						bool tmp28 = (_this->_validate != null());		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(760)
						if ((tmp28)){
							HX_STACK_LINE(760)
							_this->_validate();
						}
					}
					HX_STACK_LINE(760)
					tmp27 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(760)
				Float tmp28 = x;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(760)
				bool tmp29 = (tmp27 == tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(760)
				bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(760)
				if ((tmp29)){
					HX_STACK_LINE(760)
					Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(760)
					{
						HX_STACK_LINE(760)
						{
							HX_STACK_LINE(760)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(760)
							bool tmp32 = (_this->_validate != null());		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(760)
							bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(760)
							bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(760)
							if ((tmp34)){
								HX_STACK_LINE(760)
								_this->_validate();
							}
						}
						HX_STACK_LINE(760)
						Float tmp32 = ret->zpp_inner->y;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(760)
						tmp31 = tmp32;
					}
					HX_STACK_LINE(760)
					Float tmp32 = y;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(760)
					tmp30 = (tmp31 == tmp32);
				}
				else{
					HX_STACK_LINE(760)
					tmp30 = false;
				}
				HX_STACK_LINE(760)
				bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(760)
				if ((tmp31)){
					HX_STACK_LINE(760)
					{
						HX_STACK_LINE(760)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(760)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(760)
						{
						}
					}
					HX_STACK_LINE(760)
					{
						HX_STACK_LINE(760)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(760)
						bool tmp32 = (_this->_invalidate != null());		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(760)
						if ((tmp32)){
							HX_STACK_LINE(760)
							::zpp_nape::geom::ZPP_Vec2 tmp33 = _this;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(760)
							_this->_invalidate(tmp33);
						}
					}
				}
				HX_STACK_LINE(760)
				ret;
			}
			HX_STACK_LINE(760)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(760)
			tmp25 = ret;
		}
		HX_STACK_LINE(760)
		::nape::geom::Vec2 p1 = tmp25;		HX_STACK_VAR(p1,"p1");
		HX_STACK_LINE(761)
		::nape::geom::Vec2 tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(761)
		{
			HX_STACK_LINE(761)
			Float x = (int)0;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(761)
			Float y = (int)0;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(761)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(761)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(761)
			{
				HX_STACK_LINE(761)
				::nape::geom::Vec2 tmp27 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(761)
				bool tmp28 = (tmp27 == null());		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(761)
				if ((tmp28)){
					HX_STACK_LINE(761)
					::nape::geom::Vec2 tmp29 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(761)
					ret = tmp29;
				}
				else{
					HX_STACK_LINE(761)
					::nape::geom::Vec2 tmp29 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(761)
					ret = tmp29;
					HX_STACK_LINE(761)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(761)
					ret->zpp_pool = null();
				}
			}
			HX_STACK_LINE(761)
			bool tmp27 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(761)
			if ((tmp27)){
				HX_STACK_LINE(761)
				::zpp_nape::geom::ZPP_Vec2 tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(761)
				{
					HX_STACK_LINE(761)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(761)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(761)
					{
						HX_STACK_LINE(761)
						::zpp_nape::geom::ZPP_Vec2 tmp29 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(761)
						bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(761)
						if ((tmp30)){
							HX_STACK_LINE(761)
							::zpp_nape::geom::ZPP_Vec2 tmp31 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(761)
							ret1 = tmp31;
						}
						else{
							HX_STACK_LINE(761)
							::zpp_nape::geom::ZPP_Vec2 tmp31 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(761)
							ret1 = tmp31;
							HX_STACK_LINE(761)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(761)
							ret1->next = null();
						}
						HX_STACK_LINE(761)
						ret1->weak = false;
					}
					HX_STACK_LINE(761)
					ret1->_immutable = immutable;
					HX_STACK_LINE(761)
					{
						HX_STACK_LINE(761)
						ret1->x = x;
						HX_STACK_LINE(761)
						ret1->y = y;
						HX_STACK_LINE(761)
						{
						}
					}
					HX_STACK_LINE(761)
					tmp28 = ret1;
				}
				HX_STACK_LINE(761)
				ret->zpp_inner = tmp28;
				HX_STACK_LINE(761)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(761)
				Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(761)
				{
					HX_STACK_LINE(761)
					{
						HX_STACK_LINE(761)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(761)
						bool tmp29 = (_this->_validate != null());		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(761)
						if ((tmp29)){
							HX_STACK_LINE(761)
							_this->_validate();
						}
					}
					HX_STACK_LINE(761)
					tmp28 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(761)
				Float tmp29 = x;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(761)
				bool tmp30 = (tmp28 == tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(761)
				bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(761)
				if ((tmp30)){
					HX_STACK_LINE(761)
					Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(761)
					{
						HX_STACK_LINE(761)
						{
							HX_STACK_LINE(761)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(761)
							bool tmp33 = (_this->_validate != null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(761)
							bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(761)
							bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(761)
							if ((tmp35)){
								HX_STACK_LINE(761)
								_this->_validate();
							}
						}
						HX_STACK_LINE(761)
						Float tmp33 = ret->zpp_inner->y;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(761)
						tmp32 = tmp33;
					}
					HX_STACK_LINE(761)
					Float tmp33 = y;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(761)
					tmp31 = (tmp32 == tmp33);
				}
				else{
					HX_STACK_LINE(761)
					tmp31 = false;
				}
				HX_STACK_LINE(761)
				bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(761)
				if ((tmp32)){
					HX_STACK_LINE(761)
					{
						HX_STACK_LINE(761)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(761)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(761)
						{
						}
					}
					HX_STACK_LINE(761)
					{
						HX_STACK_LINE(761)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(761)
						bool tmp33 = (_this->_invalidate != null());		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(761)
						if ((tmp33)){
							HX_STACK_LINE(761)
							::zpp_nape::geom::ZPP_Vec2 tmp34 = _this;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(761)
							_this->_invalidate(tmp34);
						}
					}
				}
				HX_STACK_LINE(761)
				ret;
			}
			HX_STACK_LINE(761)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(761)
			tmp26 = ret;
		}
		HX_STACK_LINE(761)
		::nape::geom::Vec2 ct = tmp26;		HX_STACK_VAR(ct,"ct");
		HX_STACK_LINE(762)
		{
			HX_STACK_LINE(762)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(762)
			while((true)){
				HX_STACK_LINE(762)
				bool tmp27 = (_g < dcnt);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(762)
				bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(762)
				if ((tmp28)){
					HX_STACK_LINE(762)
					break;
				}
				HX_STACK_LINE(762)
				int tmp29 = (_g)++;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(762)
				int i = tmp29;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(763)
				Float tmp30 = (r0 + drad);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(763)
				Float r11 = tmp30;		HX_STACK_VAR(r11,"r11");
				HX_STACK_LINE(764)
				Float tmp31 = (a0 + dang);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(764)
				Float a11 = tmp31;		HX_STACK_VAR(a11,"a11");
				HX_STACK_LINE(765)
				Float tmp32 = a11;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(765)
				Float tmp33 = ::Math_obj::cos(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(765)
				Float c1 = tmp33;		HX_STACK_VAR(c1,"c1");
				HX_STACK_LINE(766)
				Float tmp34 = a11;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(766)
				Float tmp35 = ::Math_obj::sin(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(766)
				Float s1 = tmp35;		HX_STACK_VAR(s1,"s1");
				HX_STACK_LINE(767)
				{
					HX_STACK_LINE(767)
					Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(767)
					{
						HX_STACK_LINE(767)
						{
							HX_STACK_LINE(767)
							::zpp_nape::geom::ZPP_Vec2 _this = c->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(767)
							bool tmp37 = (_this->_validate != null());		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(767)
							if ((tmp37)){
								HX_STACK_LINE(767)
								_this->_validate();
							}
						}
						HX_STACK_LINE(767)
						tmp36 = c->zpp_inner->x;
					}
					HX_STACK_LINE(767)
					Float tmp37 = (r11 * c1);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(767)
					Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(767)
					Float x = tmp38;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(767)
					Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(767)
					{
						HX_STACK_LINE(767)
						{
							HX_STACK_LINE(767)
							::zpp_nape::geom::ZPP_Vec2 _this = c->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(767)
							bool tmp40 = (_this->_validate != null());		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(767)
							if ((tmp40)){
								HX_STACK_LINE(767)
								_this->_validate();
							}
						}
						HX_STACK_LINE(767)
						tmp39 = c->zpp_inner->y;
					}
					HX_STACK_LINE(767)
					Float tmp40 = (r11 * s1);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(767)
					Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(767)
					Float y = tmp41;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(767)
					Float tmp42;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(767)
					{
						HX_STACK_LINE(767)
						{
							HX_STACK_LINE(767)
							::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(767)
							bool tmp43 = (_this->_validate != null());		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(767)
							if ((tmp43)){
								HX_STACK_LINE(767)
								_this->_validate();
							}
						}
						HX_STACK_LINE(767)
						tmp42 = p1->zpp_inner->x;
					}
					HX_STACK_LINE(767)
					Float tmp43 = x;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(767)
					bool tmp44 = (tmp42 == tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(767)
					bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(767)
					if ((tmp44)){
						HX_STACK_LINE(767)
						Float tmp46;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(767)
						{
							HX_STACK_LINE(767)
							{
								HX_STACK_LINE(767)
								::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(767)
								bool tmp47 = (_this->_validate != null());		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(767)
								bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(767)
								bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(767)
								if ((tmp49)){
									HX_STACK_LINE(767)
									_this->_validate();
								}
							}
							HX_STACK_LINE(767)
							Float tmp47 = p1->zpp_inner->y;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(767)
							tmp46 = tmp47;
						}
						HX_STACK_LINE(767)
						Float tmp47 = y;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(767)
						tmp45 = (tmp46 == tmp47);
					}
					else{
						HX_STACK_LINE(767)
						tmp45 = false;
					}
					HX_STACK_LINE(767)
					bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(767)
					if ((tmp46)){
						HX_STACK_LINE(767)
						{
							HX_STACK_LINE(767)
							p1->zpp_inner->x = x;
							HX_STACK_LINE(767)
							p1->zpp_inner->y = y;
							HX_STACK_LINE(767)
							{
							}
						}
						HX_STACK_LINE(767)
						{
							HX_STACK_LINE(767)
							::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(767)
							bool tmp47 = (_this->_invalidate != null());		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(767)
							if ((tmp47)){
								HX_STACK_LINE(767)
								::zpp_nape::geom::ZPP_Vec2 tmp48 = _this;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(767)
								_this->_invalidate(tmp48);
							}
						}
					}
					HX_STACK_LINE(767)
					p1;
				}
				HX_STACK_LINE(768)
				Float tmp36 = (dr * c1);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(768)
				Float tmp37 = (r11 * da);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(768)
				Float tmp38 = s1;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(768)
				Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(768)
				Float tmp40 = (tmp36 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(768)
				Float vx = tmp40;		HX_STACK_VAR(vx,"vx");
				HX_STACK_LINE(769)
				Float tmp41 = (dr * s1);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(769)
				Float tmp42 = (r11 * da);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(769)
				Float tmp43 = c1;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(769)
				Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(769)
				Float tmp45 = (tmp41 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(769)
				Float vy = tmp45;		HX_STACK_VAR(vy,"vy");
				HX_STACK_LINE(770)
				Float tmp46 = (ux * vy);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(770)
				Float tmp47 = (uy * vx);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(770)
				Float tmp48 = (tmp46 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(770)
				Float den = tmp48;		HX_STACK_VAR(den,"den");
				HX_STACK_LINE(771)
				Float tmp49 = (den * den);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(771)
				Float tmp50 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(771)
				bool tmp51 = (tmp49 < tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(771)
				if ((tmp51)){
					HX_STACK_LINE(771)
					::nape::geom::Vec2 tmp52 = p0;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(771)
					::nape::geom::Vec2 tmp53 = p1;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(771)
					int tmp54 = col;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(771)
					g->drawLine(tmp52,tmp53,tmp54);
				}
				else{
					HX_STACK_LINE(773)
					Float tmp52;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(773)
					{
						HX_STACK_LINE(773)
						{
							HX_STACK_LINE(773)
							::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(773)
							bool tmp53 = (_this->_validate != null());		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(773)
							if ((tmp53)){
								HX_STACK_LINE(773)
								_this->_validate();
							}
						}
						HX_STACK_LINE(773)
						tmp52 = p1->zpp_inner->x;
					}
					HX_STACK_LINE(773)
					Float tmp53;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(773)
					{
						HX_STACK_LINE(773)
						{
							HX_STACK_LINE(773)
							::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(773)
							bool tmp54 = (_this->_validate != null());		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(773)
							if ((tmp54)){
								HX_STACK_LINE(773)
								_this->_validate();
							}
						}
						HX_STACK_LINE(773)
						tmp53 = p0->zpp_inner->x;
					}
					HX_STACK_LINE(773)
					Float tmp54 = (tmp52 - tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(773)
					Float tmp55 = vy;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(773)
					Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(773)
					Float tmp57;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(773)
					{
						HX_STACK_LINE(773)
						{
							HX_STACK_LINE(773)
							::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(773)
							bool tmp58 = (_this->_validate != null());		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(773)
							if ((tmp58)){
								HX_STACK_LINE(773)
								_this->_validate();
							}
						}
						HX_STACK_LINE(773)
						tmp57 = p0->zpp_inner->y;
					}
					HX_STACK_LINE(773)
					Float tmp58;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(773)
					{
						HX_STACK_LINE(773)
						{
							HX_STACK_LINE(773)
							::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(773)
							bool tmp59 = (_this->_validate != null());		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(773)
							if ((tmp59)){
								HX_STACK_LINE(773)
								_this->_validate();
							}
						}
						HX_STACK_LINE(773)
						tmp58 = p1->zpp_inner->y;
					}
					HX_STACK_LINE(773)
					Float tmp59 = (tmp57 - tmp58);		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(773)
					Float tmp60 = vx;		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(773)
					Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(773)
					Float tmp62 = (tmp56 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(773)
					Float tmp63 = den;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(773)
					Float tmp64 = (Float(tmp62) / Float(tmp63));		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(773)
					Float t = tmp64;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(774)
					bool tmp65 = (t <= (int)0);		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(774)
					if ((tmp65)){
						HX_STACK_LINE(774)
						::nape::geom::Vec2 tmp66 = p0;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(774)
						::nape::geom::Vec2 tmp67 = p1;		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(774)
						int tmp68 = col;		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(774)
						g->drawLine(tmp66,tmp67,tmp68);
					}
					else{
						HX_STACK_LINE(776)
						{
							HX_STACK_LINE(776)
							Float tmp66;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(776)
							{
								HX_STACK_LINE(776)
								{
									HX_STACK_LINE(776)
									::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(776)
									bool tmp67 = (_this->_validate != null());		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(776)
									if ((tmp67)){
										HX_STACK_LINE(776)
										_this->_validate();
									}
								}
								HX_STACK_LINE(776)
								tmp66 = p0->zpp_inner->x;
							}
							HX_STACK_LINE(776)
							Float tmp67 = (ux * t);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(776)
							Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(776)
							Float x = tmp68;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(776)
							{
								HX_STACK_LINE(776)
								Float tmp69;		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(776)
								{
									HX_STACK_LINE(776)
									{
										HX_STACK_LINE(776)
										::zpp_nape::geom::ZPP_Vec2 _this = ct->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(776)
										bool tmp70 = (_this->_validate != null());		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(776)
										if ((tmp70)){
											HX_STACK_LINE(776)
											_this->_validate();
										}
									}
									HX_STACK_LINE(776)
									tmp69 = ct->zpp_inner->x;
								}
								HX_STACK_LINE(776)
								Float tmp70 = x;		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(776)
								bool tmp71 = (tmp69 != tmp70);		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(776)
								if ((tmp71)){
									HX_STACK_LINE(776)
									ct->zpp_inner->x = x;
									HX_STACK_LINE(776)
									{
										HX_STACK_LINE(776)
										::zpp_nape::geom::ZPP_Vec2 _this = ct->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(776)
										bool tmp72 = (_this->_invalidate != null());		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(776)
										if ((tmp72)){
											HX_STACK_LINE(776)
											::zpp_nape::geom::ZPP_Vec2 tmp73 = _this;		HX_STACK_VAR(tmp73,"tmp73");
											HX_STACK_LINE(776)
											_this->_invalidate(tmp73);
										}
									}
								}
							}
							HX_STACK_LINE(776)
							{
								HX_STACK_LINE(776)
								{
									HX_STACK_LINE(776)
									::zpp_nape::geom::ZPP_Vec2 _this = ct->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(776)
									bool tmp69 = (_this->_validate != null());		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(776)
									if ((tmp69)){
										HX_STACK_LINE(776)
										_this->_validate();
									}
								}
								HX_STACK_LINE(776)
								ct->zpp_inner->x;
							}
						}
						HX_STACK_LINE(777)
						{
							HX_STACK_LINE(777)
							Float tmp66;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(777)
							{
								HX_STACK_LINE(777)
								{
									HX_STACK_LINE(777)
									::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(777)
									bool tmp67 = (_this->_validate != null());		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(777)
									if ((tmp67)){
										HX_STACK_LINE(777)
										_this->_validate();
									}
								}
								HX_STACK_LINE(777)
								tmp66 = p0->zpp_inner->y;
							}
							HX_STACK_LINE(777)
							Float tmp67 = (uy * t);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(777)
							Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(777)
							Float y = tmp68;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(777)
							{
								HX_STACK_LINE(777)
								Float tmp69;		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(777)
								{
									HX_STACK_LINE(777)
									{
										HX_STACK_LINE(777)
										::zpp_nape::geom::ZPP_Vec2 _this = ct->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(777)
										bool tmp70 = (_this->_validate != null());		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(777)
										if ((tmp70)){
											HX_STACK_LINE(777)
											_this->_validate();
										}
									}
									HX_STACK_LINE(777)
									tmp69 = ct->zpp_inner->y;
								}
								HX_STACK_LINE(777)
								Float tmp70 = y;		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(777)
								bool tmp71 = (tmp69 != tmp70);		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(777)
								if ((tmp71)){
									HX_STACK_LINE(777)
									ct->zpp_inner->y = y;
									HX_STACK_LINE(777)
									{
										HX_STACK_LINE(777)
										::zpp_nape::geom::ZPP_Vec2 _this = ct->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(777)
										bool tmp72 = (_this->_invalidate != null());		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(777)
										if ((tmp72)){
											HX_STACK_LINE(777)
											::zpp_nape::geom::ZPP_Vec2 tmp73 = _this;		HX_STACK_VAR(tmp73,"tmp73");
											HX_STACK_LINE(777)
											_this->_invalidate(tmp73);
										}
									}
								}
							}
							HX_STACK_LINE(777)
							{
								HX_STACK_LINE(777)
								{
									HX_STACK_LINE(777)
									::zpp_nape::geom::ZPP_Vec2 _this = ct->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(777)
									bool tmp69 = (_this->_validate != null());		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(777)
									if ((tmp69)){
										HX_STACK_LINE(777)
										_this->_validate();
									}
								}
								HX_STACK_LINE(777)
								ct->zpp_inner->y;
							}
						}
						HX_STACK_LINE(778)
						::nape::geom::Vec2 tmp66 = p0;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(778)
						::nape::geom::Vec2 tmp67 = ct;		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(778)
						::nape::geom::Vec2 tmp68 = p1;		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(778)
						int tmp69 = col;		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(778)
						g->drawCurve(tmp66,tmp67,tmp68,tmp69);
					}
				}
				HX_STACK_LINE(781)
				r0 = r11;
				HX_STACK_LINE(782)
				a0 = a11;
				HX_STACK_LINE(783)
				c0 = c1;
				HX_STACK_LINE(784)
				s0 = s1;
				HX_STACK_LINE(785)
				ux = vx;
				HX_STACK_LINE(786)
				uy = vy;
				HX_STACK_LINE(787)
				{
					HX_STACK_LINE(787)
					::nape::geom::Vec2 tmp52;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(787)
					{
						HX_STACK_LINE(787)
						Float tmp53;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(787)
						{
							HX_STACK_LINE(787)
							{
								HX_STACK_LINE(787)
								::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(787)
								bool tmp54 = (_this->_validate != null());		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(787)
								if ((tmp54)){
									HX_STACK_LINE(787)
									_this->_validate();
								}
							}
							HX_STACK_LINE(787)
							tmp53 = p1->zpp_inner->x;
						}
						HX_STACK_LINE(787)
						Float x = tmp53;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(787)
						Float tmp54;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(787)
						{
							HX_STACK_LINE(787)
							{
								HX_STACK_LINE(787)
								::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(787)
								bool tmp55 = (_this->_validate != null());		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(787)
								if ((tmp55)){
									HX_STACK_LINE(787)
									_this->_validate();
								}
							}
							HX_STACK_LINE(787)
							tmp54 = p1->zpp_inner->y;
						}
						HX_STACK_LINE(787)
						Float y = tmp54;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(787)
						Float tmp55;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(787)
						{
							HX_STACK_LINE(787)
							{
								HX_STACK_LINE(787)
								::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(787)
								bool tmp56 = (_this->_validate != null());		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(787)
								if ((tmp56)){
									HX_STACK_LINE(787)
									_this->_validate();
								}
							}
							HX_STACK_LINE(787)
							tmp55 = p0->zpp_inner->x;
						}
						HX_STACK_LINE(787)
						Float tmp56 = x;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(787)
						bool tmp57 = (tmp55 == tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(787)
						bool tmp58;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(787)
						if ((tmp57)){
							HX_STACK_LINE(787)
							Float tmp59;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(787)
							{
								HX_STACK_LINE(787)
								{
									HX_STACK_LINE(787)
									::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(787)
									bool tmp60 = (_this->_validate != null());		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(787)
									bool tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(787)
									bool tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(787)
									if ((tmp62)){
										HX_STACK_LINE(787)
										_this->_validate();
									}
								}
								HX_STACK_LINE(787)
								Float tmp60 = p0->zpp_inner->y;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(787)
								tmp59 = tmp60;
							}
							HX_STACK_LINE(787)
							Float tmp60 = y;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(787)
							tmp58 = (tmp59 == tmp60);
						}
						else{
							HX_STACK_LINE(787)
							tmp58 = false;
						}
						HX_STACK_LINE(787)
						bool tmp59 = !(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(787)
						if ((tmp59)){
							HX_STACK_LINE(787)
							{
								HX_STACK_LINE(787)
								p0->zpp_inner->x = x;
								HX_STACK_LINE(787)
								p0->zpp_inner->y = y;
								HX_STACK_LINE(787)
								{
								}
							}
							HX_STACK_LINE(787)
							{
								HX_STACK_LINE(787)
								::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(787)
								bool tmp60 = (_this->_invalidate != null());		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(787)
								if ((tmp60)){
									HX_STACK_LINE(787)
									::zpp_nape::geom::ZPP_Vec2 tmp61 = _this;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(787)
									_this->_invalidate(tmp61);
								}
							}
						}
						HX_STACK_LINE(787)
						tmp52 = p0;
					}
					HX_STACK_LINE(787)
					::nape::geom::Vec2 ret = tmp52;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(787)
					{
						HX_STACK_LINE(787)
						bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(787)
						tmp53 = p1->zpp_inner->weak;
						HX_STACK_LINE(787)
						if ((tmp53)){
							HX_STACK_LINE(787)
							{
								HX_STACK_LINE(787)
								::zpp_nape::geom::ZPP_Vec2 inner = p1->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(787)
								p1->zpp_inner->outer = null();
								HX_STACK_LINE(787)
								p1->zpp_inner = null();
								HX_STACK_LINE(787)
								{
									HX_STACK_LINE(787)
									::nape::geom::Vec2 o = p1;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(787)
									::nape::geom::Vec2 tmp54 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(787)
									o->zpp_pool = tmp54;
									HX_STACK_LINE(787)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(787)
								{
									HX_STACK_LINE(787)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(787)
									{
										HX_STACK_LINE(787)
										bool tmp54 = (o->outer != null());		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(787)
										if ((tmp54)){
											HX_STACK_LINE(787)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(787)
											o->outer = null();
										}
										HX_STACK_LINE(787)
										o->_isimmutable = null();
										HX_STACK_LINE(787)
										o->_validate = null();
										HX_STACK_LINE(787)
										o->_invalidate = null();
									}
									HX_STACK_LINE(787)
									::zpp_nape::geom::ZPP_Vec2 tmp54 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(787)
									o->next = tmp54;
									HX_STACK_LINE(787)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(787)
							true;
						}
						else{
							HX_STACK_LINE(787)
							false;
						}
					}
					HX_STACK_LINE(787)
					ret;
				}
			}
		}
		HX_STACK_LINE(789)
		{
			HX_STACK_LINE(789)
			::zpp_nape::geom::ZPP_Vec2 inner = p0->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(789)
			p0->zpp_inner->outer = null();
			HX_STACK_LINE(789)
			p0->zpp_inner = null();
			HX_STACK_LINE(789)
			{
				HX_STACK_LINE(789)
				::nape::geom::Vec2 o = p0;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(789)
				::nape::geom::Vec2 tmp27 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(789)
				o->zpp_pool = tmp27;
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
					bool tmp27 = (o->outer != null());		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(789)
					if ((tmp27)){
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
				::zpp_nape::geom::ZPP_Vec2 tmp27 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(789)
				o->next = tmp27;
				HX_STACK_LINE(789)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(790)
		{
			HX_STACK_LINE(790)
			::zpp_nape::geom::ZPP_Vec2 inner = p1->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(790)
			p1->zpp_inner->outer = null();
			HX_STACK_LINE(790)
			p1->zpp_inner = null();
			HX_STACK_LINE(790)
			{
				HX_STACK_LINE(790)
				::nape::geom::Vec2 o = p1;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(790)
				::nape::geom::Vec2 tmp27 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(790)
				o->zpp_pool = tmp27;
				HX_STACK_LINE(790)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(790)
			{
				HX_STACK_LINE(790)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(790)
				{
					HX_STACK_LINE(790)
					bool tmp27 = (o->outer != null());		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(790)
					if ((tmp27)){
						HX_STACK_LINE(790)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(790)
						o->outer = null();
					}
					HX_STACK_LINE(790)
					o->_isimmutable = null();
					HX_STACK_LINE(790)
					o->_validate = null();
					HX_STACK_LINE(790)
					o->_invalidate = null();
				}
				HX_STACK_LINE(790)
				::zpp_nape::geom::ZPP_Vec2 tmp27 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(790)
				o->next = tmp27;
				HX_STACK_LINE(790)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(791)
		{
			HX_STACK_LINE(791)
			::zpp_nape::geom::ZPP_Vec2 inner = ct->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(791)
			ct->zpp_inner->outer = null();
			HX_STACK_LINE(791)
			ct->zpp_inner = null();
			HX_STACK_LINE(791)
			{
				HX_STACK_LINE(791)
				::nape::geom::Vec2 o = ct;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(791)
				::nape::geom::Vec2 tmp27 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(791)
				o->zpp_pool = tmp27;
				HX_STACK_LINE(791)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(791)
			{
				HX_STACK_LINE(791)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(791)
				{
					HX_STACK_LINE(791)
					bool tmp27 = (o->outer != null());		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(791)
					if ((tmp27)){
						HX_STACK_LINE(791)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(791)
						o->outer = null();
					}
					HX_STACK_LINE(791)
					o->_isimmutable = null();
					HX_STACK_LINE(791)
					o->_validate = null();
					HX_STACK_LINE(791)
					o->_invalidate = null();
				}
				HX_STACK_LINE(791)
				::zpp_nape::geom::ZPP_Vec2 tmp27 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(791)
				o->next = tmp27;
				HX_STACK_LINE(791)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(ZPP_AngleDraw_obj,drawSpiral,(void))


ZPP_AngleDraw_obj::ZPP_AngleDraw_obj()
{
}

bool ZPP_AngleDraw_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"maxarc") ) { outValue = maxarc; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"indicator") ) { outValue = indicator_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawSpiral") ) { outValue = drawSpiral_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"drawSpiralSpring") ) { outValue = drawSpiralSpring_dyn(); return true;  }
	}
	return false;
}

bool ZPP_AngleDraw_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"maxarc") ) { maxarc=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &ZPP_AngleDraw_obj::maxarc,HX_HCSTRING("maxarc","\x2e","\x32","\x60","\xbe")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_AngleDraw_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_AngleDraw_obj::maxarc,"maxarc");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_AngleDraw_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_AngleDraw_obj::maxarc,"maxarc");
};

#endif

hx::Class ZPP_AngleDraw_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("indicator","\xcf","\xe7","\xad","\x93"),
	HX_HCSTRING("maxarc","\x2e","\x32","\x60","\xbe"),
	HX_HCSTRING("drawSpiralSpring","\x02","\x28","\xc5","\x06"),
	HX_HCSTRING("drawSpiral","\x55","\x2f","\x6d","\xff"),
	::String(null()) };

void ZPP_AngleDraw_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.constraint.ZPP_AngleDraw","\xa2","\x0b","\xaa","\x48");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_AngleDraw_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_AngleDraw_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ZPP_AngleDraw_obj >;
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

void ZPP_AngleDraw_obj::__boot()
{
struct _Function_0_1{
	inline static Float Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/constraint/AngleJoint.hx",657,0x575b2617)
		{
			HX_STACK_LINE(657)
			Float tmp = ::Math_obj::PI;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(657)
			return (Float(tmp) / Float((int)4));
		}
		return null();
	}
};
	maxarc= _Function_0_1::Block();
}

} // end namespace zpp_nape
} // end namespace constraint
