#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_geom_Mat23
#include <nape/geom/Mat23.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Mat23
#include <zpp_nape/geom/ZPP_Mat23.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace nape{
namespace geom{

Void Mat23_obj::__construct(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty)
{
HX_STACK_FRAME("nape.geom.Mat23","new",0x0099b447,"nape.geom.Mat23.new","nape/geom/Mat23.hx",187,0xee046d69)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_a,"a")
HX_STACK_ARG(__o_b,"b")
HX_STACK_ARG(__o_c,"c")
HX_STACK_ARG(__o_d,"d")
HX_STACK_ARG(__o_tx,"tx")
HX_STACK_ARG(__o_ty,"ty")
Float a = __o_a.Default(((Float)1.0));
Float b = __o_b.Default(((Float)0.0));
Float c = __o_c.Default(((Float)0.0));
Float d = __o_d.Default(((Float)1.0));
Float tx = __o_tx.Default(((Float)0.0));
Float ty = __o_ty.Default(((Float)0.0));
{
	HX_STACK_LINE(191)
	this->zpp_inner = null();
	HX_STACK_LINE(371)
	::zpp_nape::geom::ZPP_Mat23 tmp = ::zpp_nape::geom::ZPP_Mat23_obj::get();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(371)
	this->zpp_inner = tmp;
	HX_STACK_LINE(372)
	::zpp_nape::geom::ZPP_Mat23 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(372)
	tmp1->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(373)
	{
		HX_STACK_LINE(373)
		{
			HX_STACK_LINE(373)
			::zpp_nape::geom::ZPP_Mat23 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(373)
			tmp2->a = a;
			HX_STACK_LINE(373)
			{
				HX_STACK_LINE(373)
				::zpp_nape::geom::ZPP_Mat23 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(373)
				::zpp_nape::geom::ZPP_Mat23 _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(373)
				bool tmp4 = (_this->_invalidate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(373)
				if ((tmp4)){
					HX_STACK_LINE(373)
					_this->_invalidate();
				}
			}
		}
		HX_STACK_LINE(373)
		::zpp_nape::geom::ZPP_Mat23 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(373)
		tmp2->a;
	}
	HX_STACK_LINE(374)
	{
		HX_STACK_LINE(374)
		{
			HX_STACK_LINE(374)
			::zpp_nape::geom::ZPP_Mat23 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(374)
			tmp2->b = b;
			HX_STACK_LINE(374)
			{
				HX_STACK_LINE(374)
				::zpp_nape::geom::ZPP_Mat23 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(374)
				::zpp_nape::geom::ZPP_Mat23 _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(374)
				bool tmp4 = (_this->_invalidate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(374)
				if ((tmp4)){
					HX_STACK_LINE(374)
					_this->_invalidate();
				}
			}
		}
		HX_STACK_LINE(374)
		::zpp_nape::geom::ZPP_Mat23 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(374)
		tmp2->b;
	}
	HX_STACK_LINE(375)
	{
		HX_STACK_LINE(375)
		{
			HX_STACK_LINE(375)
			::zpp_nape::geom::ZPP_Mat23 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(375)
			tmp2->tx = tx;
			HX_STACK_LINE(375)
			{
				HX_STACK_LINE(375)
				::zpp_nape::geom::ZPP_Mat23 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(375)
				::zpp_nape::geom::ZPP_Mat23 _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(375)
				bool tmp4 = (_this->_invalidate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(375)
				if ((tmp4)){
					HX_STACK_LINE(375)
					_this->_invalidate();
				}
			}
		}
		HX_STACK_LINE(375)
		::zpp_nape::geom::ZPP_Mat23 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(375)
		tmp2->tx;
	}
	HX_STACK_LINE(376)
	{
		HX_STACK_LINE(376)
		{
			HX_STACK_LINE(376)
			::zpp_nape::geom::ZPP_Mat23 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(376)
			tmp2->c = c;
			HX_STACK_LINE(376)
			{
				HX_STACK_LINE(376)
				::zpp_nape::geom::ZPP_Mat23 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(376)
				::zpp_nape::geom::ZPP_Mat23 _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(376)
				bool tmp4 = (_this->_invalidate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(376)
				if ((tmp4)){
					HX_STACK_LINE(376)
					_this->_invalidate();
				}
			}
		}
		HX_STACK_LINE(376)
		::zpp_nape::geom::ZPP_Mat23 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(376)
		tmp2->c;
	}
	HX_STACK_LINE(377)
	{
		HX_STACK_LINE(377)
		{
			HX_STACK_LINE(377)
			::zpp_nape::geom::ZPP_Mat23 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(377)
			tmp2->d = d;
			HX_STACK_LINE(377)
			{
				HX_STACK_LINE(377)
				::zpp_nape::geom::ZPP_Mat23 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(377)
				::zpp_nape::geom::ZPP_Mat23 _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(377)
				bool tmp4 = (_this->_invalidate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(377)
				if ((tmp4)){
					HX_STACK_LINE(377)
					_this->_invalidate();
				}
			}
		}
		HX_STACK_LINE(377)
		::zpp_nape::geom::ZPP_Mat23 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(377)
		tmp2->d;
	}
	HX_STACK_LINE(378)
	{
		HX_STACK_LINE(378)
		{
			HX_STACK_LINE(378)
			::zpp_nape::geom::ZPP_Mat23 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(378)
			tmp2->ty = ty;
			HX_STACK_LINE(378)
			{
				HX_STACK_LINE(378)
				::zpp_nape::geom::ZPP_Mat23 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(378)
				::zpp_nape::geom::ZPP_Mat23 _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(378)
				bool tmp4 = (_this->_invalidate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(378)
				if ((tmp4)){
					HX_STACK_LINE(378)
					_this->_invalidate();
				}
			}
		}
		HX_STACK_LINE(378)
		::zpp_nape::geom::ZPP_Mat23 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(378)
		tmp2->ty;
	}
}
;
	return null();
}

//Mat23_obj::~Mat23_obj() { }

Dynamic Mat23_obj::__CreateEmpty() { return  new Mat23_obj; }
hx::ObjectPtr< Mat23_obj > Mat23_obj::__new(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty)
{  hx::ObjectPtr< Mat23_obj > _result_ = new Mat23_obj();
	_result_->__construct(__o_a,__o_b,__o_c,__o_d,__o_tx,__o_ty);
	return _result_;}

Dynamic Mat23_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mat23_obj > _result_ = new Mat23_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

Float Mat23_obj::get_a( ){
	HX_STACK_FRAME("nape.geom.Mat23","get_a",0x99d490df,"nape.geom.Mat23.get_a","nape/geom/Mat23.hx",204,0xee046d69)
	HX_STACK_THIS(this)
	HX_STACK_LINE(205)
	::zpp_nape::geom::ZPP_Mat23 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(205)
	Float tmp1 = tmp->a;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(205)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Mat23_obj,get_a,return )

Float Mat23_obj::set_a( Float a){
	HX_STACK_FRAME("nape.geom.Mat23","set_a",0x82a386eb,"nape.geom.Mat23.set_a","nape/geom/Mat23.hx",207,0xee046d69)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(208)
	{
		HX_STACK_LINE(214)
		::zpp_nape::geom::ZPP_Mat23 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(214)
		tmp->a = a;
		HX_STACK_LINE(215)
		{
			HX_STACK_LINE(215)
			::zpp_nape::geom::ZPP_Mat23 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(215)
			::zpp_nape::geom::ZPP_Mat23 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(215)
			bool tmp2 = (_this->_invalidate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(215)
			if ((tmp2)){
				HX_STACK_LINE(215)
				_this->_invalidate();
			}
		}
	}
	HX_STACK_LINE(217)
	::zpp_nape::geom::ZPP_Mat23 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(217)
	Float tmp1 = tmp->a;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(217)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Mat23_obj,set_a,return )

Float Mat23_obj::get_b( ){
	HX_STACK_FRAME("nape.geom.Mat23","get_b",0x99d490e0,"nape.geom.Mat23.get_b","nape/geom/Mat23.hx",231,0xee046d69)
	HX_STACK_THIS(this)
	HX_STACK_LINE(232)
	::zpp_nape::geom::ZPP_Mat23 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(232)
	Float tmp1 = tmp->b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(232)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Mat23_obj,get_b,return )

Float Mat23_obj::set_b( Float b){
	HX_STACK_FRAME("nape.geom.Mat23","set_b",0x82a386ec,"nape.geom.Mat23.set_b","nape/geom/Mat23.hx",234,0xee046d69)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(235)
	{
		HX_STACK_LINE(241)
		::zpp_nape::geom::ZPP_Mat23 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(241)
		tmp->b = b;
		HX_STACK_LINE(242)
		{
			HX_STACK_LINE(242)
			::zpp_nape::geom::ZPP_Mat23 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(242)
			::zpp_nape::geom::ZPP_Mat23 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(242)
			bool tmp2 = (_this->_invalidate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(242)
			if ((tmp2)){
				HX_STACK_LINE(242)
				_this->_invalidate();
			}
		}
	}
	HX_STACK_LINE(244)
	::zpp_nape::geom::ZPP_Mat23 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(244)
	Float tmp1 = tmp->b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(244)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Mat23_obj,set_b,return )

Float Mat23_obj::get_c( ){
	HX_STACK_FRAME("nape.geom.Mat23","get_c",0x99d490e1,"nape.geom.Mat23.get_c","nape/geom/Mat23.hx",258,0xee046d69)
	HX_STACK_THIS(this)
	HX_STACK_LINE(259)
	::zpp_nape::geom::ZPP_Mat23 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(259)
	Float tmp1 = tmp->c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(259)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Mat23_obj,get_c,return )

Float Mat23_obj::set_c( Float c){
	HX_STACK_FRAME("nape.geom.Mat23","set_c",0x82a386ed,"nape.geom.Mat23.set_c","nape/geom/Mat23.hx",261,0xee046d69)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(262)
	{
		HX_STACK_LINE(268)
		::zpp_nape::geom::ZPP_Mat23 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(268)
		tmp->c = c;
		HX_STACK_LINE(269)
		{
			HX_STACK_LINE(269)
			::zpp_nape::geom::ZPP_Mat23 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(269)
			::zpp_nape::geom::ZPP_Mat23 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(269)
			bool tmp2 = (_this->_invalidate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(269)
			if ((tmp2)){
				HX_STACK_LINE(269)
				_this->_invalidate();
			}
		}
	}
	HX_STACK_LINE(271)
	::zpp_nape::geom::ZPP_Mat23 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(271)
	Float tmp1 = tmp->c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(271)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Mat23_obj,set_c,return )

Float Mat23_obj::get_d( ){
	HX_STACK_FRAME("nape.geom.Mat23","get_d",0x99d490e2,"nape.geom.Mat23.get_d","nape/geom/Mat23.hx",285,0xee046d69)
	HX_STACK_THIS(this)
	HX_STACK_LINE(286)
	::zpp_nape::geom::ZPP_Mat23 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(286)
	Float tmp1 = tmp->d;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(286)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Mat23_obj,get_d,return )

Float Mat23_obj::set_d( Float d){
	HX_STACK_FRAME("nape.geom.Mat23","set_d",0x82a386ee,"nape.geom.Mat23.set_d","nape/geom/Mat23.hx",288,0xee046d69)
	HX_STACK_THIS(this)
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(289)
	{
		HX_STACK_LINE(295)
		::zpp_nape::geom::ZPP_Mat23 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(295)
		tmp->d = d;
		HX_STACK_LINE(296)
		{
			HX_STACK_LINE(296)
			::zpp_nape::geom::ZPP_Mat23 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(296)
			::zpp_nape::geom::ZPP_Mat23 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(296)
			bool tmp2 = (_this->_invalidate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(296)
			if ((tmp2)){
				HX_STACK_LINE(296)
				_this->_invalidate();
			}
		}
	}
	HX_STACK_LINE(298)
	::zpp_nape::geom::ZPP_Mat23 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(298)
	Float tmp1 = tmp->d;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(298)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Mat23_obj,set_d,return )

Float Mat23_obj::get_tx( ){
	HX_STACK_FRAME("nape.geom.Mat23","get_tx",0x002a4346,"nape.geom.Mat23.get_tx","nape/geom/Mat23.hx",312,0xee046d69)
	HX_STACK_THIS(this)
	HX_STACK_LINE(313)
	::zpp_nape::geom::ZPP_Mat23 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(313)
	Float tmp1 = tmp->tx;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(313)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Mat23_obj,get_tx,return )

Float Mat23_obj::set_tx( Float tx){
	HX_STACK_FRAME("nape.geom.Mat23","set_tx",0xcc7297ba,"nape.geom.Mat23.set_tx","nape/geom/Mat23.hx",315,0xee046d69)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tx,"tx")
	HX_STACK_LINE(316)
	{
		HX_STACK_LINE(322)
		::zpp_nape::geom::ZPP_Mat23 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(322)
		tmp->tx = tx;
		HX_STACK_LINE(323)
		{
			HX_STACK_LINE(323)
			::zpp_nape::geom::ZPP_Mat23 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(323)
			::zpp_nape::geom::ZPP_Mat23 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(323)
			bool tmp2 = (_this->_invalidate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(323)
			if ((tmp2)){
				HX_STACK_LINE(323)
				_this->_invalidate();
			}
		}
	}
	HX_STACK_LINE(325)
	::zpp_nape::geom::ZPP_Mat23 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(325)
	Float tmp1 = tmp->tx;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(325)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Mat23_obj,set_tx,return )

Float Mat23_obj::get_ty( ){
	HX_STACK_FRAME("nape.geom.Mat23","get_ty",0x002a4347,"nape.geom.Mat23.get_ty","nape/geom/Mat23.hx",339,0xee046d69)
	HX_STACK_THIS(this)
	HX_STACK_LINE(340)
	::zpp_nape::geom::ZPP_Mat23 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(340)
	Float tmp1 = tmp->ty;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(340)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Mat23_obj,get_ty,return )

Float Mat23_obj::set_ty( Float ty){
	HX_STACK_FRAME("nape.geom.Mat23","set_ty",0xcc7297bb,"nape.geom.Mat23.set_ty","nape/geom/Mat23.hx",342,0xee046d69)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ty,"ty")
	HX_STACK_LINE(343)
	{
		HX_STACK_LINE(349)
		::zpp_nape::geom::ZPP_Mat23 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(349)
		tmp->ty = ty;
		HX_STACK_LINE(350)
		{
			HX_STACK_LINE(350)
			::zpp_nape::geom::ZPP_Mat23 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(350)
			::zpp_nape::geom::ZPP_Mat23 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(350)
			bool tmp2 = (_this->_invalidate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(350)
			if ((tmp2)){
				HX_STACK_LINE(350)
				_this->_invalidate();
			}
		}
	}
	HX_STACK_LINE(352)
	::zpp_nape::geom::ZPP_Mat23 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(352)
	Float tmp1 = tmp->ty;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(352)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Mat23_obj,set_ty,return )

::nape::geom::Mat23 Mat23_obj::copy( ){
	HX_STACK_FRAME("nape.geom.Mat23","copy",0x7ea641ee,"nape.geom.Mat23.copy","nape/geom/Mat23.hx",386,0xee046d69)
	HX_STACK_THIS(this)
	HX_STACK_LINE(387)
	::zpp_nape::geom::ZPP_Mat23 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(387)
	Float tmp1 = tmp->a;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(387)
	::zpp_nape::geom::ZPP_Mat23 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(387)
	Float tmp3 = tmp2->b;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(387)
	::zpp_nape::geom::ZPP_Mat23 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(387)
	Float tmp5 = tmp4->c;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(387)
	::zpp_nape::geom::ZPP_Mat23 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(387)
	Float tmp7 = tmp6->d;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(387)
	::zpp_nape::geom::ZPP_Mat23 tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(387)
	Float tmp9 = tmp8->tx;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(387)
	::zpp_nape::geom::ZPP_Mat23 tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(387)
	Float tmp11 = tmp10->ty;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(387)
	::nape::geom::Mat23 tmp12 = ::nape::geom::Mat23_obj::__new(tmp1,tmp3,tmp5,tmp7,tmp9,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(387)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC0(Mat23_obj,copy,return )

::nape::geom::Mat23 Mat23_obj::set( ::nape::geom::Mat23 matrix){
	HX_STACK_FRAME("nape.geom.Mat23","set",0x009d7f89,"nape.geom.Mat23.set","nape/geom/Mat23.hx",396,0xee046d69)
	HX_STACK_THIS(this)
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_LINE(402)
	{
		HX_STACK_LINE(402)
		::zpp_nape::geom::ZPP_Mat23 m = matrix->zpp_inner;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(402)
		::zpp_nape::geom::ZPP_Mat23 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(402)
		Float tmp1 = m->a;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(402)
		Float tmp2 = m->b;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(402)
		Float tmp3 = m->c;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(402)
		Float tmp4 = m->d;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(402)
		Float tmp5 = m->tx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(402)
		Float tmp6 = m->ty;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(402)
		tmp->setas(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);
	}
	HX_STACK_LINE(403)
	{
		HX_STACK_LINE(403)
		::zpp_nape::geom::ZPP_Mat23 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(403)
		::zpp_nape::geom::ZPP_Mat23 _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(403)
		bool tmp1 = (_this->_invalidate != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(403)
		if ((tmp1)){
			HX_STACK_LINE(403)
			_this->_invalidate();
		}
	}
	HX_STACK_LINE(404)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Mat23_obj,set,return )

::nape::geom::Mat23 Mat23_obj::setAs( hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty){
Float a = __o_a.Default(((Float)1.0));
Float b = __o_b.Default(((Float)0.0));
Float c = __o_c.Default(((Float)0.0));
Float d = __o_d.Default(((Float)1.0));
Float tx = __o_tx.Default(((Float)0.0));
Float ty = __o_ty.Default(((Float)0.0));
	HX_STACK_FRAME("nape.geom.Mat23","setAs",0x82a36cdb,"nape.geom.Mat23.setAs","nape/geom/Mat23.hx",420,0xee046d69)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_ARG(tx,"tx")
	HX_STACK_ARG(ty,"ty")
{
		HX_STACK_LINE(421)
		::zpp_nape::geom::ZPP_Mat23 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(421)
		Float tmp1 = a;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(421)
		Float tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(421)
		Float tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(421)
		Float tmp4 = d;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(421)
		Float tmp5 = tx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(421)
		Float tmp6 = ty;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(421)
		tmp->setas(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);
		HX_STACK_LINE(422)
		{
			HX_STACK_LINE(422)
			::zpp_nape::geom::ZPP_Mat23 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(422)
			::zpp_nape::geom::ZPP_Mat23 _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(422)
			bool tmp8 = (_this->_invalidate != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(422)
			if ((tmp8)){
				HX_STACK_LINE(422)
				_this->_invalidate();
			}
		}
		HX_STACK_LINE(423)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC6(Mat23_obj,setAs,return )

::nape::geom::Mat23 Mat23_obj::reset( ){
	HX_STACK_FRAME("nape.geom.Mat23","reset",0xef3c3576,"nape.geom.Mat23.reset","nape/geom/Mat23.hx",433,0xee046d69)
	HX_STACK_THIS(this)
	HX_STACK_LINE(434)
	::nape::geom::Mat23 tmp = this->setAs(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(434)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Mat23_obj,reset,return )

::openfl::_legacy::geom::Matrix Mat23_obj::toMatrix( ::openfl::_legacy::geom::Matrix output){
	HX_STACK_FRAME("nape.geom.Mat23","toMatrix",0x27fa74d5,"nape.geom.Mat23.toMatrix","nape/geom/Mat23.hx",467,0xee046d69)
	HX_STACK_THIS(this)
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(468)
	bool tmp = (output == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(468)
	if ((tmp)){
		HX_STACK_LINE(468)
		::openfl::_legacy::geom::Matrix tmp1 = ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(468)
		output = tmp1;
	}
	HX_STACK_LINE(469)
	::zpp_nape::geom::ZPP_Mat23 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(469)
	output->a = tmp1->a;
	HX_STACK_LINE(470)
	::zpp_nape::geom::ZPP_Mat23 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(470)
	output->b = tmp2->c;
	HX_STACK_LINE(471)
	::zpp_nape::geom::ZPP_Mat23 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(471)
	output->c = tmp3->b;
	HX_STACK_LINE(472)
	::zpp_nape::geom::ZPP_Mat23 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(472)
	output->d = tmp4->d;
	HX_STACK_LINE(473)
	::zpp_nape::geom::ZPP_Mat23 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(473)
	output->tx = tmp5->tx;
	HX_STACK_LINE(474)
	::zpp_nape::geom::ZPP_Mat23 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(474)
	output->ty = tmp6->ty;
	HX_STACK_LINE(475)
	::openfl::_legacy::geom::Matrix tmp7 = output;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(475)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Mat23_obj,toMatrix,return )

Float Mat23_obj::get_determinant( ){
	HX_STACK_FRAME("nape.geom.Mat23","get_determinant",0x66b6b793,"nape.geom.Mat23.get_determinant","nape/geom/Mat23.hx",547,0xee046d69)
	HX_STACK_THIS(this)
	HX_STACK_LINE(548)
	::zpp_nape::geom::ZPP_Mat23 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(548)
	Float tmp1 = tmp->a;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(548)
	::zpp_nape::geom::ZPP_Mat23 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(548)
	Float tmp3 = tmp2->d;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(548)
	Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(548)
	::zpp_nape::geom::ZPP_Mat23 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(548)
	Float tmp6 = tmp5->b;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(548)
	::zpp_nape::geom::ZPP_Mat23 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(548)
	Float tmp8 = tmp7->c;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(548)
	Float tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(548)
	Float tmp10 = (tmp4 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(548)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC0(Mat23_obj,get_determinant,return )

bool Mat23_obj::singular( ){
	HX_STACK_FRAME("nape.geom.Mat23","singular",0x9c1a3f90,"nape.geom.Mat23.singular","nape/geom/Mat23.hx",560,0xee046d69)
	HX_STACK_THIS(this)
	HX_STACK_LINE(561)
	::zpp_nape::geom::ZPP_Mat23 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(561)
	Float tmp1 = tmp->a;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(561)
	::zpp_nape::geom::ZPP_Mat23 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(561)
	Float tmp3 = tmp2->a;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(561)
	Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(561)
	::zpp_nape::geom::ZPP_Mat23 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(561)
	Float tmp6 = tmp5->b;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(561)
	::zpp_nape::geom::ZPP_Mat23 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(561)
	Float tmp8 = tmp7->b;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(561)
	Float tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(561)
	Float tmp10 = (tmp4 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(561)
	::zpp_nape::geom::ZPP_Mat23 tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(561)
	Float tmp12 = tmp11->c;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(561)
	::zpp_nape::geom::ZPP_Mat23 tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(561)
	Float tmp14 = tmp13->c;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(561)
	Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(561)
	Float tmp16 = (tmp10 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(561)
	::zpp_nape::geom::ZPP_Mat23 tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(561)
	Float tmp18 = tmp17->d;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(561)
	::zpp_nape::geom::ZPP_Mat23 tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(561)
	Float tmp20 = tmp19->d;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(561)
	Float tmp21 = (tmp18 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(561)
	Float tmp22 = (tmp16 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(561)
	Float norm = tmp22;		HX_STACK_VAR(norm,"norm");
	HX_STACK_LINE(562)
	::zpp_nape::geom::ZPP_Mat23 tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(562)
	Float tmp24 = tmp23->a;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(562)
	::zpp_nape::geom::ZPP_Mat23 tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(562)
	Float tmp26 = tmp25->d;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(562)
	Float tmp27 = (tmp24 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(562)
	::zpp_nape::geom::ZPP_Mat23 tmp28 = this->zpp_inner;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(562)
	Float tmp29 = tmp28->b;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(562)
	::zpp_nape::geom::ZPP_Mat23 tmp30 = this->zpp_inner;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(562)
	Float tmp31 = tmp30->c;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(562)
	Float tmp32 = (tmp29 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(562)
	Float tmp33 = (tmp27 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(562)
	Float limit = tmp33;		HX_STACK_VAR(limit,"limit");
	HX_STACK_LINE(563)
	bool tmp34 = (limit < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(563)
	if ((tmp34)){
		HX_STACK_LINE(563)
		Float tmp35 = limit;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(563)
		Float tmp36 = -(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(563)
		limit = tmp36;
	}
	HX_STACK_LINE(564)
	Float tmp35 = norm;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(564)
	Float tmp36 = ::nape::Config_obj::illConditionedThreshold;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(564)
	Float tmp37 = limit;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(564)
	Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(564)
	bool tmp39 = (tmp35 > tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(564)
	return tmp39;
}


HX_DEFINE_DYNAMIC_FUNC0(Mat23_obj,singular,return )

::nape::geom::Mat23 Mat23_obj::inverse( ){
	HX_STACK_FRAME("nape.geom.Mat23","inverse",0x3bf4af17,"nape.geom.Mat23.inverse","nape/geom/Mat23.hx",577,0xee046d69)
	HX_STACK_THIS(this)
	HX_STACK_LINE(583)
	::zpp_nape::geom::ZPP_Mat23 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(583)
	Float tmp1 = tmp->a;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(583)
	::zpp_nape::geom::ZPP_Mat23 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(583)
	Float tmp3 = tmp2->d;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(583)
	Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(583)
	::zpp_nape::geom::ZPP_Mat23 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(583)
	Float tmp6 = tmp5->b;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(583)
	::zpp_nape::geom::ZPP_Mat23 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(583)
	Float tmp8 = tmp7->c;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(583)
	Float tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(583)
	Float tmp10 = (tmp4 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(583)
	Float tmp11 = (Float(((Float)1.0)) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(583)
	Float idet = tmp11;		HX_STACK_VAR(idet,"idet");
	HX_STACK_LINE(584)
	::zpp_nape::geom::ZPP_Mat23 tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(584)
	Float tmp13 = tmp12->d;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(584)
	Float tmp14 = idet;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(584)
	Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(584)
	::zpp_nape::geom::ZPP_Mat23 tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(584)
	Float tmp17 = tmp16->b;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(584)
	Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(584)
	Float tmp19 = idet;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(584)
	Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(584)
	::zpp_nape::geom::ZPP_Mat23 tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(584)
	Float tmp22 = tmp21->c;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(584)
	Float tmp23 = -(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(584)
	Float tmp24 = idet;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(584)
	Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(584)
	::zpp_nape::geom::ZPP_Mat23 tmp26 = this->zpp_inner;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(584)
	Float tmp27 = tmp26->a;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(584)
	Float tmp28 = idet;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(584)
	Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(584)
	::zpp_nape::geom::ZPP_Mat23 tmp30 = this->zpp_inner;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(584)
	Float tmp31 = tmp30->b;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(584)
	::zpp_nape::geom::ZPP_Mat23 tmp32 = this->zpp_inner;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(584)
	Float tmp33 = tmp32->ty;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(584)
	Float tmp34 = (tmp31 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(584)
	::zpp_nape::geom::ZPP_Mat23 tmp35 = this->zpp_inner;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(584)
	Float tmp36 = tmp35->d;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(584)
	::zpp_nape::geom::ZPP_Mat23 tmp37 = this->zpp_inner;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(584)
	Float tmp38 = tmp37->tx;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(584)
	Float tmp39 = (tmp36 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(584)
	Float tmp40 = (tmp34 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(584)
	Float tmp41 = idet;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(584)
	Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(584)
	::zpp_nape::geom::ZPP_Mat23 tmp43 = this->zpp_inner;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(584)
	Float tmp44 = tmp43->c;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(584)
	::zpp_nape::geom::ZPP_Mat23 tmp45 = this->zpp_inner;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(584)
	Float tmp46 = tmp45->tx;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(584)
	Float tmp47 = (tmp44 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(584)
	::zpp_nape::geom::ZPP_Mat23 tmp48 = this->zpp_inner;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(584)
	Float tmp49 = tmp48->a;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(584)
	::zpp_nape::geom::ZPP_Mat23 tmp50 = this->zpp_inner;		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(584)
	Float tmp51 = tmp50->ty;		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(584)
	Float tmp52 = (tmp49 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(584)
	Float tmp53 = (tmp47 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(584)
	Float tmp54 = idet;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(584)
	Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(584)
	::nape::geom::Mat23 tmp56 = ::nape::geom::Mat23_obj::__new(tmp15,tmp20,tmp25,tmp29,tmp42,tmp55);		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(584)
	return tmp56;
}


HX_DEFINE_DYNAMIC_FUNC0(Mat23_obj,inverse,return )

::nape::geom::Mat23 Mat23_obj::transpose( ){
	HX_STACK_FRAME("nape.geom.Mat23","transpose",0x5c5f9ba0,"nape.geom.Mat23.transpose","nape/geom/Mat23.hx",606,0xee046d69)
	HX_STACK_THIS(this)
	HX_STACK_LINE(607)
	::zpp_nape::geom::ZPP_Mat23 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(607)
	Float tmp1 = tmp->a;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(607)
	::zpp_nape::geom::ZPP_Mat23 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(607)
	Float tmp3 = tmp2->c;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(607)
	::zpp_nape::geom::ZPP_Mat23 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(607)
	Float tmp5 = tmp4->b;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(607)
	::zpp_nape::geom::ZPP_Mat23 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(607)
	Float tmp7 = tmp6->d;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(607)
	::zpp_nape::geom::ZPP_Mat23 tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(607)
	Float tmp9 = tmp8->a;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(607)
	Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(607)
	::zpp_nape::geom::ZPP_Mat23 tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(607)
	Float tmp12 = tmp11->tx;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(607)
	Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(607)
	::zpp_nape::geom::ZPP_Mat23 tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(607)
	Float tmp15 = tmp14->c;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(607)
	::zpp_nape::geom::ZPP_Mat23 tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(607)
	Float tmp17 = tmp16->ty;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(607)
	Float tmp18 = (tmp15 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(607)
	Float tmp19 = (tmp13 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(607)
	::zpp_nape::geom::ZPP_Mat23 tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(607)
	Float tmp21 = tmp20->b;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(607)
	Float tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(607)
	::zpp_nape::geom::ZPP_Mat23 tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(607)
	Float tmp24 = tmp23->tx;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(607)
	Float tmp25 = (tmp22 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(607)
	::zpp_nape::geom::ZPP_Mat23 tmp26 = this->zpp_inner;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(607)
	Float tmp27 = tmp26->d;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(607)
	::zpp_nape::geom::ZPP_Mat23 tmp28 = this->zpp_inner;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(607)
	Float tmp29 = tmp28->ty;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(607)
	Float tmp30 = (tmp27 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(607)
	Float tmp31 = (tmp25 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(607)
	::nape::geom::Mat23 tmp32 = ::nape::geom::Mat23_obj::__new(tmp1,tmp3,tmp5,tmp7,tmp19,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(607)
	return tmp32;
}


HX_DEFINE_DYNAMIC_FUNC0(Mat23_obj,transpose,return )

::nape::geom::Mat23 Mat23_obj::concat( ::nape::geom::Mat23 matrix){
	HX_STACK_FRAME("nape.geom.Mat23","concat",0x24ca4f8d,"nape.geom.Mat23.concat","nape/geom/Mat23.hx",622,0xee046d69)
	HX_STACK_THIS(this)
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_LINE(623)
	::nape::geom::Mat23 m = matrix;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(629)
	Float tmp = m->zpp_inner->a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(629)
	::zpp_nape::geom::ZPP_Mat23 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(629)
	Float tmp2 = tmp1->a;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(629)
	Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(629)
	Float tmp4 = m->zpp_inner->b;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(629)
	::zpp_nape::geom::ZPP_Mat23 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(629)
	Float tmp6 = tmp5->c;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(629)
	Float tmp7 = (tmp4 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(629)
	Float tmp8 = (tmp3 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(629)
	Float tmp9 = m->zpp_inner->a;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(629)
	::zpp_nape::geom::ZPP_Mat23 tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(629)
	Float tmp11 = tmp10->b;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(629)
	Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(629)
	Float tmp13 = m->zpp_inner->b;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(629)
	::zpp_nape::geom::ZPP_Mat23 tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(629)
	Float tmp15 = tmp14->d;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(629)
	Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(629)
	Float tmp17 = (tmp12 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(629)
	Float tmp18 = m->zpp_inner->c;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(629)
	::zpp_nape::geom::ZPP_Mat23 tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(629)
	Float tmp20 = tmp19->a;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(629)
	Float tmp21 = (tmp18 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(629)
	Float tmp22 = m->zpp_inner->d;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(629)
	::zpp_nape::geom::ZPP_Mat23 tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(629)
	Float tmp24 = tmp23->c;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(629)
	Float tmp25 = (tmp22 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(629)
	Float tmp26 = (tmp21 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(629)
	Float tmp27 = m->zpp_inner->c;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(629)
	::zpp_nape::geom::ZPP_Mat23 tmp28 = this->zpp_inner;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(629)
	Float tmp29 = tmp28->b;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(629)
	Float tmp30 = (tmp27 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(629)
	Float tmp31 = m->zpp_inner->d;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(629)
	::zpp_nape::geom::ZPP_Mat23 tmp32 = this->zpp_inner;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(629)
	Float tmp33 = tmp32->d;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(629)
	Float tmp34 = (tmp31 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(629)
	Float tmp35 = (tmp30 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(629)
	Float tmp36 = m->zpp_inner->a;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(629)
	::zpp_nape::geom::ZPP_Mat23 tmp37 = this->zpp_inner;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(629)
	Float tmp38 = tmp37->tx;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(629)
	Float tmp39 = (tmp36 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(629)
	Float tmp40 = m->zpp_inner->b;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(629)
	::zpp_nape::geom::ZPP_Mat23 tmp41 = this->zpp_inner;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(629)
	Float tmp42 = tmp41->ty;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(629)
	Float tmp43 = (tmp40 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(629)
	Float tmp44 = (tmp39 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(629)
	Float tmp45 = m->zpp_inner->tx;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(629)
	Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(629)
	Float tmp47 = m->zpp_inner->c;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(629)
	::zpp_nape::geom::ZPP_Mat23 tmp48 = this->zpp_inner;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(629)
	Float tmp49 = tmp48->tx;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(629)
	Float tmp50 = (tmp47 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(629)
	Float tmp51 = m->zpp_inner->d;		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(629)
	::zpp_nape::geom::ZPP_Mat23 tmp52 = this->zpp_inner;		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(629)
	Float tmp53 = tmp52->ty;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(629)
	Float tmp54 = (tmp51 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(629)
	Float tmp55 = (tmp50 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(629)
	Float tmp56 = m->zpp_inner->ty;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(629)
	Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(629)
	::nape::geom::Mat23 tmp58 = ::nape::geom::Mat23_obj::__new(tmp8,tmp17,tmp26,tmp35,tmp46,tmp57);		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(629)
	return tmp58;
}


HX_DEFINE_DYNAMIC_FUNC1(Mat23_obj,concat,return )

::nape::geom::Vec2 Mat23_obj::transform( ::nape::geom::Vec2 point,hx::Null< bool >  __o_noTranslation,hx::Null< bool >  __o_weak){
bool noTranslation = __o_noTranslation.Default(false);
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Mat23","transform",0x55c37893,"nape.geom.Mat23.transform","nape/geom/Mat23.hx",648,0xee046d69)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(noTranslation,"noTranslation")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(659)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(660)
		bool tmp = noTranslation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(660)
		if ((tmp)){
			HX_STACK_LINE(661)
			::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(661)
			{
				HX_STACK_LINE(661)
				Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(661)
				{
					HX_STACK_LINE(661)
					{
						HX_STACK_LINE(661)
						::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(661)
						bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(661)
						if ((tmp3)){
							HX_STACK_LINE(661)
							_this->_validate();
						}
					}
					HX_STACK_LINE(661)
					tmp2 = point->zpp_inner->x;
				}
				HX_STACK_LINE(661)
				::zpp_nape::geom::ZPP_Mat23 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(661)
				Float tmp4 = tmp3->a;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(661)
				Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(661)
				Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(661)
				{
					HX_STACK_LINE(661)
					{
						HX_STACK_LINE(661)
						::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(661)
						bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(661)
						if ((tmp7)){
							HX_STACK_LINE(661)
							_this->_validate();
						}
					}
					HX_STACK_LINE(661)
					tmp6 = point->zpp_inner->y;
				}
				HX_STACK_LINE(661)
				::zpp_nape::geom::ZPP_Mat23 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(661)
				Float tmp8 = tmp7->b;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(661)
				Float tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(661)
				Float tmp10 = (tmp5 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(661)
				Float x = tmp10;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(661)
				Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(661)
				{
					HX_STACK_LINE(661)
					{
						HX_STACK_LINE(661)
						::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(661)
						bool tmp12 = (_this->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(661)
						if ((tmp12)){
							HX_STACK_LINE(661)
							_this->_validate();
						}
					}
					HX_STACK_LINE(661)
					tmp11 = point->zpp_inner->x;
				}
				HX_STACK_LINE(661)
				::zpp_nape::geom::ZPP_Mat23 tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(661)
				Float tmp13 = tmp12->c;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(661)
				Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(661)
				Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(661)
				{
					HX_STACK_LINE(661)
					{
						HX_STACK_LINE(661)
						::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(661)
						bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(661)
						if ((tmp16)){
							HX_STACK_LINE(661)
							_this->_validate();
						}
					}
					HX_STACK_LINE(661)
					tmp15 = point->zpp_inner->y;
				}
				HX_STACK_LINE(661)
				::zpp_nape::geom::ZPP_Mat23 tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(661)
				Float tmp17 = tmp16->d;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(661)
				Float tmp18 = (tmp15 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(661)
				Float tmp19 = (tmp14 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(661)
				Float y = tmp19;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(661)
				::nape::geom::Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(661)
				{
					HX_STACK_LINE(661)
					::nape::geom::Vec2 tmp20 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(661)
					bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(661)
					if ((tmp21)){
						HX_STACK_LINE(661)
						::nape::geom::Vec2 tmp22 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(661)
						ret1 = tmp22;
					}
					else{
						HX_STACK_LINE(661)
						::nape::geom::Vec2 tmp22 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(661)
						ret1 = tmp22;
						HX_STACK_LINE(661)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret1->zpp_pool;
						HX_STACK_LINE(661)
						ret1->zpp_pool = null();
					}
				}
				HX_STACK_LINE(661)
				bool tmp20 = (ret1->zpp_inner == null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(661)
				if ((tmp20)){
					HX_STACK_LINE(661)
					::zpp_nape::geom::ZPP_Vec2 tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(661)
					{
						HX_STACK_LINE(661)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(661)
						::zpp_nape::geom::ZPP_Vec2 ret2;		HX_STACK_VAR(ret2,"ret2");
						HX_STACK_LINE(661)
						{
							HX_STACK_LINE(661)
							::zpp_nape::geom::ZPP_Vec2 tmp22 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(661)
							bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(661)
							if ((tmp23)){
								HX_STACK_LINE(661)
								::zpp_nape::geom::ZPP_Vec2 tmp24 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(661)
								ret2 = tmp24;
							}
							else{
								HX_STACK_LINE(661)
								::zpp_nape::geom::ZPP_Vec2 tmp24 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(661)
								ret2 = tmp24;
								HX_STACK_LINE(661)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret2->next;
								HX_STACK_LINE(661)
								ret2->next = null();
							}
							HX_STACK_LINE(661)
							ret2->weak = false;
						}
						HX_STACK_LINE(661)
						ret2->_immutable = immutable;
						HX_STACK_LINE(661)
						{
							HX_STACK_LINE(661)
							ret2->x = x;
							HX_STACK_LINE(661)
							ret2->y = y;
							HX_STACK_LINE(661)
							{
							}
						}
						HX_STACK_LINE(661)
						tmp21 = ret2;
					}
					HX_STACK_LINE(661)
					ret1->zpp_inner = tmp21;
					HX_STACK_LINE(661)
					ret1->zpp_inner->outer = ret1;
				}
				else{
					HX_STACK_LINE(661)
					Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(661)
					{
						HX_STACK_LINE(661)
						{
							HX_STACK_LINE(661)
							::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(661)
							bool tmp22 = (_this->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(661)
							if ((tmp22)){
								HX_STACK_LINE(661)
								_this->_validate();
							}
						}
						HX_STACK_LINE(661)
						tmp21 = ret1->zpp_inner->x;
					}
					HX_STACK_LINE(661)
					Float tmp22 = x;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(661)
					bool tmp23 = (tmp21 == tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(661)
					bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(661)
					if ((tmp23)){
						HX_STACK_LINE(661)
						Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(661)
						{
							HX_STACK_LINE(661)
							{
								HX_STACK_LINE(661)
								::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(661)
								bool tmp26 = (_this->_validate != null());		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(661)
								bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(661)
								bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(661)
								if ((tmp28)){
									HX_STACK_LINE(661)
									_this->_validate();
								}
							}
							HX_STACK_LINE(661)
							Float tmp26 = ret1->zpp_inner->y;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(661)
							tmp25 = tmp26;
						}
						HX_STACK_LINE(661)
						Float tmp26 = y;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(661)
						tmp24 = (tmp25 == tmp26);
					}
					else{
						HX_STACK_LINE(661)
						tmp24 = false;
					}
					HX_STACK_LINE(661)
					bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(661)
					if ((tmp25)){
						HX_STACK_LINE(661)
						{
							HX_STACK_LINE(661)
							ret1->zpp_inner->x = x;
							HX_STACK_LINE(661)
							ret1->zpp_inner->y = y;
							HX_STACK_LINE(661)
							{
							}
						}
						HX_STACK_LINE(661)
						{
							HX_STACK_LINE(661)
							::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(661)
							bool tmp26 = (_this->_invalidate != null());		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(661)
							if ((tmp26)){
								HX_STACK_LINE(661)
								::zpp_nape::geom::ZPP_Vec2 tmp27 = _this;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(661)
								_this->_invalidate(tmp27);
							}
						}
					}
					HX_STACK_LINE(661)
					ret1;
				}
				HX_STACK_LINE(661)
				ret1->zpp_inner->weak = weak;
				HX_STACK_LINE(661)
				tmp1 = ret1;
			}
			HX_STACK_LINE(661)
			ret = tmp1;
		}
		else{
			HX_STACK_LINE(664)
			::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(664)
			{
				HX_STACK_LINE(664)
				Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(664)
				{
					HX_STACK_LINE(664)
					{
						HX_STACK_LINE(664)
						::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(664)
						bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(664)
						if ((tmp3)){
							HX_STACK_LINE(664)
							_this->_validate();
						}
					}
					HX_STACK_LINE(664)
					tmp2 = point->zpp_inner->x;
				}
				HX_STACK_LINE(664)
				::zpp_nape::geom::ZPP_Mat23 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(664)
				Float tmp4 = tmp3->a;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(664)
				Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(664)
				Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(664)
				{
					HX_STACK_LINE(664)
					{
						HX_STACK_LINE(664)
						::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(664)
						bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(664)
						if ((tmp7)){
							HX_STACK_LINE(664)
							_this->_validate();
						}
					}
					HX_STACK_LINE(664)
					tmp6 = point->zpp_inner->y;
				}
				HX_STACK_LINE(664)
				::zpp_nape::geom::ZPP_Mat23 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(664)
				Float tmp8 = tmp7->b;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(664)
				Float tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(664)
				Float tmp10 = (tmp5 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(664)
				::zpp_nape::geom::ZPP_Mat23 tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(664)
				Float tmp12 = tmp11->tx;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(664)
				Float tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(664)
				Float x = tmp13;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(664)
				Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(664)
				{
					HX_STACK_LINE(664)
					{
						HX_STACK_LINE(664)
						::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(664)
						bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(664)
						if ((tmp15)){
							HX_STACK_LINE(664)
							_this->_validate();
						}
					}
					HX_STACK_LINE(664)
					tmp14 = point->zpp_inner->x;
				}
				HX_STACK_LINE(664)
				::zpp_nape::geom::ZPP_Mat23 tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(664)
				Float tmp16 = tmp15->c;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(664)
				Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(664)
				Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(664)
				{
					HX_STACK_LINE(664)
					{
						HX_STACK_LINE(664)
						::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(664)
						bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(664)
						if ((tmp19)){
							HX_STACK_LINE(664)
							_this->_validate();
						}
					}
					HX_STACK_LINE(664)
					tmp18 = point->zpp_inner->y;
				}
				HX_STACK_LINE(664)
				::zpp_nape::geom::ZPP_Mat23 tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(664)
				Float tmp20 = tmp19->d;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(664)
				Float tmp21 = (tmp18 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(664)
				Float tmp22 = (tmp17 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(664)
				::zpp_nape::geom::ZPP_Mat23 tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(664)
				Float tmp24 = tmp23->ty;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(664)
				Float tmp25 = (tmp22 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(664)
				Float y = tmp25;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(664)
				::nape::geom::Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(664)
				{
					HX_STACK_LINE(664)
					::nape::geom::Vec2 tmp26 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(664)
					bool tmp27 = (tmp26 == null());		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(664)
					if ((tmp27)){
						HX_STACK_LINE(664)
						::nape::geom::Vec2 tmp28 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(664)
						ret1 = tmp28;
					}
					else{
						HX_STACK_LINE(664)
						::nape::geom::Vec2 tmp28 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(664)
						ret1 = tmp28;
						HX_STACK_LINE(664)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret1->zpp_pool;
						HX_STACK_LINE(664)
						ret1->zpp_pool = null();
					}
				}
				HX_STACK_LINE(664)
				bool tmp26 = (ret1->zpp_inner == null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(664)
				if ((tmp26)){
					HX_STACK_LINE(664)
					::zpp_nape::geom::ZPP_Vec2 tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(664)
					{
						HX_STACK_LINE(664)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(664)
						::zpp_nape::geom::ZPP_Vec2 ret2;		HX_STACK_VAR(ret2,"ret2");
						HX_STACK_LINE(664)
						{
							HX_STACK_LINE(664)
							::zpp_nape::geom::ZPP_Vec2 tmp28 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(664)
							bool tmp29 = (tmp28 == null());		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(664)
							if ((tmp29)){
								HX_STACK_LINE(664)
								::zpp_nape::geom::ZPP_Vec2 tmp30 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(664)
								ret2 = tmp30;
							}
							else{
								HX_STACK_LINE(664)
								::zpp_nape::geom::ZPP_Vec2 tmp30 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(664)
								ret2 = tmp30;
								HX_STACK_LINE(664)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret2->next;
								HX_STACK_LINE(664)
								ret2->next = null();
							}
							HX_STACK_LINE(664)
							ret2->weak = false;
						}
						HX_STACK_LINE(664)
						ret2->_immutable = immutable;
						HX_STACK_LINE(664)
						{
							HX_STACK_LINE(664)
							ret2->x = x;
							HX_STACK_LINE(664)
							ret2->y = y;
							HX_STACK_LINE(664)
							{
							}
						}
						HX_STACK_LINE(664)
						tmp27 = ret2;
					}
					HX_STACK_LINE(664)
					ret1->zpp_inner = tmp27;
					HX_STACK_LINE(664)
					ret1->zpp_inner->outer = ret1;
				}
				else{
					HX_STACK_LINE(664)
					Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(664)
					{
						HX_STACK_LINE(664)
						{
							HX_STACK_LINE(664)
							::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(664)
							bool tmp28 = (_this->_validate != null());		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(664)
							if ((tmp28)){
								HX_STACK_LINE(664)
								_this->_validate();
							}
						}
						HX_STACK_LINE(664)
						tmp27 = ret1->zpp_inner->x;
					}
					HX_STACK_LINE(664)
					Float tmp28 = x;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(664)
					bool tmp29 = (tmp27 == tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(664)
					bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(664)
					if ((tmp29)){
						HX_STACK_LINE(664)
						Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(664)
						{
							HX_STACK_LINE(664)
							{
								HX_STACK_LINE(664)
								::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(664)
								bool tmp32 = (_this->_validate != null());		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(664)
								bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(664)
								bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(664)
								if ((tmp34)){
									HX_STACK_LINE(664)
									_this->_validate();
								}
							}
							HX_STACK_LINE(664)
							Float tmp32 = ret1->zpp_inner->y;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(664)
							tmp31 = tmp32;
						}
						HX_STACK_LINE(664)
						Float tmp32 = y;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(664)
						tmp30 = (tmp31 == tmp32);
					}
					else{
						HX_STACK_LINE(664)
						tmp30 = false;
					}
					HX_STACK_LINE(664)
					bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(664)
					if ((tmp31)){
						HX_STACK_LINE(664)
						{
							HX_STACK_LINE(664)
							ret1->zpp_inner->x = x;
							HX_STACK_LINE(664)
							ret1->zpp_inner->y = y;
							HX_STACK_LINE(664)
							{
							}
						}
						HX_STACK_LINE(664)
						{
							HX_STACK_LINE(664)
							::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(664)
							bool tmp32 = (_this->_invalidate != null());		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(664)
							if ((tmp32)){
								HX_STACK_LINE(664)
								::zpp_nape::geom::ZPP_Vec2 tmp33 = _this;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(664)
								_this->_invalidate(tmp33);
							}
						}
					}
					HX_STACK_LINE(664)
					ret1;
				}
				HX_STACK_LINE(664)
				ret1->zpp_inner->weak = weak;
				HX_STACK_LINE(664)
				tmp1 = ret1;
			}
			HX_STACK_LINE(664)
			ret = tmp1;
		}
		HX_STACK_LINE(666)
		{
			HX_STACK_LINE(667)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(668)
			tmp1 = point->zpp_inner->weak;
			HX_STACK_LINE(667)
			if ((tmp1)){
				HX_STACK_LINE(670)
				{
					HX_STACK_LINE(670)
					::zpp_nape::geom::ZPP_Vec2 inner = point->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(670)
					point->zpp_inner->outer = null();
					HX_STACK_LINE(670)
					point->zpp_inner = null();
					HX_STACK_LINE(670)
					{
						HX_STACK_LINE(670)
						::nape::geom::Vec2 o = point;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(670)
						::nape::geom::Vec2 tmp2 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(670)
						o->zpp_pool = tmp2;
						HX_STACK_LINE(670)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(670)
					{
						HX_STACK_LINE(670)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(670)
						{
							HX_STACK_LINE(670)
							bool tmp2 = (o->outer != null());		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(670)
							if ((tmp2)){
								HX_STACK_LINE(670)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(670)
								o->outer = null();
							}
							HX_STACK_LINE(670)
							o->_isimmutable = null();
							HX_STACK_LINE(670)
							o->_validate = null();
							HX_STACK_LINE(670)
							o->_invalidate = null();
						}
						HX_STACK_LINE(670)
						::zpp_nape::geom::ZPP_Vec2 tmp2 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(670)
						o->next = tmp2;
						HX_STACK_LINE(670)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(671)
				true;
			}
			else{
				HX_STACK_LINE(674)
				false;
			}
		}
		HX_STACK_LINE(677)
		::nape::geom::Vec2 tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(677)
		return tmp1;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Mat23_obj,transform,return )

::nape::geom::Vec2 Mat23_obj::inverseTransform( ::nape::geom::Vec2 point,hx::Null< bool >  __o_noTranslation,hx::Null< bool >  __o_weak){
bool noTranslation = __o_noTranslation.Default(false);
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Mat23","inverseTransform",0xbb944355,"nape.geom.Mat23.inverseTransform","nape/geom/Mat23.hx",702,0xee046d69)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(noTranslation,"noTranslation")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(716)
		::zpp_nape::geom::ZPP_Mat23 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(716)
		Float tmp1 = tmp->a;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(716)
		::zpp_nape::geom::ZPP_Mat23 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(716)
		Float tmp3 = tmp2->d;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(716)
		Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(716)
		::zpp_nape::geom::ZPP_Mat23 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(716)
		Float tmp6 = tmp5->b;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(716)
		::zpp_nape::geom::ZPP_Mat23 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(716)
		Float tmp8 = tmp7->c;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(716)
		Float tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(716)
		Float tmp10 = (tmp4 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(716)
		Float tmp11 = (Float(((Float)1.0)) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(716)
		Float idet = tmp11;		HX_STACK_VAR(idet,"idet");
		HX_STACK_LINE(717)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(718)
		bool tmp12 = noTranslation;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(718)
		if ((tmp12)){
			HX_STACK_LINE(719)
			::nape::geom::Vec2 tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(719)
			{
				HX_STACK_LINE(719)
				Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(719)
				{
					HX_STACK_LINE(719)
					{
						HX_STACK_LINE(719)
						::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(719)
						bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(719)
						if ((tmp15)){
							HX_STACK_LINE(719)
							_this->_validate();
						}
					}
					HX_STACK_LINE(719)
					tmp14 = point->zpp_inner->x;
				}
				HX_STACK_LINE(719)
				::zpp_nape::geom::ZPP_Mat23 tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(719)
				Float tmp16 = tmp15->d;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(719)
				Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(719)
				Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(719)
				{
					HX_STACK_LINE(719)
					{
						HX_STACK_LINE(719)
						::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(719)
						bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(719)
						if ((tmp19)){
							HX_STACK_LINE(719)
							_this->_validate();
						}
					}
					HX_STACK_LINE(719)
					tmp18 = point->zpp_inner->y;
				}
				HX_STACK_LINE(719)
				::zpp_nape::geom::ZPP_Mat23 tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(719)
				Float tmp20 = tmp19->b;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(719)
				Float tmp21 = (tmp18 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(719)
				Float tmp22 = (tmp17 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(719)
				Float tmp23 = idet;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(719)
				Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(719)
				Float x = tmp24;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(719)
				Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(719)
				{
					HX_STACK_LINE(719)
					{
						HX_STACK_LINE(719)
						::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(719)
						bool tmp26 = (_this->_validate != null());		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(719)
						if ((tmp26)){
							HX_STACK_LINE(719)
							_this->_validate();
						}
					}
					HX_STACK_LINE(719)
					tmp25 = point->zpp_inner->y;
				}
				HX_STACK_LINE(719)
				::zpp_nape::geom::ZPP_Mat23 tmp26 = this->zpp_inner;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(719)
				Float tmp27 = tmp26->a;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(719)
				Float tmp28 = (tmp25 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(719)
				Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(719)
				{
					HX_STACK_LINE(719)
					{
						HX_STACK_LINE(719)
						::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(719)
						bool tmp30 = (_this->_validate != null());		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(719)
						if ((tmp30)){
							HX_STACK_LINE(719)
							_this->_validate();
						}
					}
					HX_STACK_LINE(719)
					tmp29 = point->zpp_inner->x;
				}
				HX_STACK_LINE(719)
				::zpp_nape::geom::ZPP_Mat23 tmp30 = this->zpp_inner;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(719)
				Float tmp31 = tmp30->c;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(719)
				Float tmp32 = (tmp29 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(719)
				Float tmp33 = (tmp28 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(719)
				Float tmp34 = idet;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(719)
				Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(719)
				Float y = tmp35;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(719)
				::nape::geom::Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(719)
				{
					HX_STACK_LINE(719)
					::nape::geom::Vec2 tmp36 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(719)
					bool tmp37 = (tmp36 == null());		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(719)
					if ((tmp37)){
						HX_STACK_LINE(719)
						::nape::geom::Vec2 tmp38 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(719)
						ret1 = tmp38;
					}
					else{
						HX_STACK_LINE(719)
						::nape::geom::Vec2 tmp38 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(719)
						ret1 = tmp38;
						HX_STACK_LINE(719)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret1->zpp_pool;
						HX_STACK_LINE(719)
						ret1->zpp_pool = null();
					}
				}
				HX_STACK_LINE(719)
				bool tmp36 = (ret1->zpp_inner == null());		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(719)
				if ((tmp36)){
					HX_STACK_LINE(719)
					::zpp_nape::geom::ZPP_Vec2 tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(719)
					{
						HX_STACK_LINE(719)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(719)
						::zpp_nape::geom::ZPP_Vec2 ret2;		HX_STACK_VAR(ret2,"ret2");
						HX_STACK_LINE(719)
						{
							HX_STACK_LINE(719)
							::zpp_nape::geom::ZPP_Vec2 tmp38 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(719)
							bool tmp39 = (tmp38 == null());		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(719)
							if ((tmp39)){
								HX_STACK_LINE(719)
								::zpp_nape::geom::ZPP_Vec2 tmp40 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(719)
								ret2 = tmp40;
							}
							else{
								HX_STACK_LINE(719)
								::zpp_nape::geom::ZPP_Vec2 tmp40 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(719)
								ret2 = tmp40;
								HX_STACK_LINE(719)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret2->next;
								HX_STACK_LINE(719)
								ret2->next = null();
							}
							HX_STACK_LINE(719)
							ret2->weak = false;
						}
						HX_STACK_LINE(719)
						ret2->_immutable = immutable;
						HX_STACK_LINE(719)
						{
							HX_STACK_LINE(719)
							ret2->x = x;
							HX_STACK_LINE(719)
							ret2->y = y;
							HX_STACK_LINE(719)
							{
							}
						}
						HX_STACK_LINE(719)
						tmp37 = ret2;
					}
					HX_STACK_LINE(719)
					ret1->zpp_inner = tmp37;
					HX_STACK_LINE(719)
					ret1->zpp_inner->outer = ret1;
				}
				else{
					HX_STACK_LINE(719)
					Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(719)
					{
						HX_STACK_LINE(719)
						{
							HX_STACK_LINE(719)
							::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(719)
							bool tmp38 = (_this->_validate != null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(719)
							if ((tmp38)){
								HX_STACK_LINE(719)
								_this->_validate();
							}
						}
						HX_STACK_LINE(719)
						tmp37 = ret1->zpp_inner->x;
					}
					HX_STACK_LINE(719)
					Float tmp38 = x;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(719)
					bool tmp39 = (tmp37 == tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(719)
					bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(719)
					if ((tmp39)){
						HX_STACK_LINE(719)
						Float tmp41;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(719)
						{
							HX_STACK_LINE(719)
							{
								HX_STACK_LINE(719)
								::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(719)
								bool tmp42 = (_this->_validate != null());		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(719)
								bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(719)
								bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(719)
								if ((tmp44)){
									HX_STACK_LINE(719)
									_this->_validate();
								}
							}
							HX_STACK_LINE(719)
							Float tmp42 = ret1->zpp_inner->y;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(719)
							tmp41 = tmp42;
						}
						HX_STACK_LINE(719)
						Float tmp42 = y;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(719)
						tmp40 = (tmp41 == tmp42);
					}
					else{
						HX_STACK_LINE(719)
						tmp40 = false;
					}
					HX_STACK_LINE(719)
					bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(719)
					if ((tmp41)){
						HX_STACK_LINE(719)
						{
							HX_STACK_LINE(719)
							ret1->zpp_inner->x = x;
							HX_STACK_LINE(719)
							ret1->zpp_inner->y = y;
							HX_STACK_LINE(719)
							{
							}
						}
						HX_STACK_LINE(719)
						{
							HX_STACK_LINE(719)
							::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(719)
							bool tmp42 = (_this->_invalidate != null());		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(719)
							if ((tmp42)){
								HX_STACK_LINE(719)
								::zpp_nape::geom::ZPP_Vec2 tmp43 = _this;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(719)
								_this->_invalidate(tmp43);
							}
						}
					}
					HX_STACK_LINE(719)
					ret1;
				}
				HX_STACK_LINE(719)
				ret1->zpp_inner->weak = weak;
				HX_STACK_LINE(719)
				tmp13 = ret1;
			}
			HX_STACK_LINE(719)
			ret = tmp13;
		}
		else{
			HX_STACK_LINE(722)
			Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(722)
			{
				HX_STACK_LINE(722)
				{
					HX_STACK_LINE(722)
					::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(722)
					bool tmp14 = (_this->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(722)
					if ((tmp14)){
						HX_STACK_LINE(722)
						_this->_validate();
					}
				}
				HX_STACK_LINE(722)
				tmp13 = point->zpp_inner->x;
			}
			HX_STACK_LINE(722)
			::zpp_nape::geom::ZPP_Mat23 tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(722)
			Float tmp15 = tmp14->tx;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(722)
			Float tmp16 = (tmp13 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(722)
			Float dx = tmp16;		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(723)
			Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(723)
			{
				HX_STACK_LINE(723)
				{
					HX_STACK_LINE(723)
					::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(723)
					bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(723)
					if ((tmp18)){
						HX_STACK_LINE(723)
						_this->_validate();
					}
				}
				HX_STACK_LINE(723)
				tmp17 = point->zpp_inner->y;
			}
			HX_STACK_LINE(723)
			::zpp_nape::geom::ZPP_Mat23 tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(723)
			Float tmp19 = tmp18->ty;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(723)
			Float tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(723)
			Float dy = tmp20;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(724)
			::nape::geom::Vec2 tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(724)
			{
				HX_STACK_LINE(724)
				Float tmp22 = dx;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(724)
				::zpp_nape::geom::ZPP_Mat23 tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(724)
				Float tmp24 = tmp23->d;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(724)
				Float tmp25 = (tmp22 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(724)
				Float tmp26 = dy;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(724)
				::zpp_nape::geom::ZPP_Mat23 tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(724)
				Float tmp28 = tmp27->b;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(724)
				Float tmp29 = (tmp26 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(724)
				Float tmp30 = (tmp25 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(724)
				Float tmp31 = idet;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(724)
				Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(724)
				Float x = tmp32;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(724)
				Float tmp33 = dy;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(724)
				::zpp_nape::geom::ZPP_Mat23 tmp34 = this->zpp_inner;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(724)
				Float tmp35 = tmp34->a;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(724)
				Float tmp36 = (tmp33 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(724)
				Float tmp37 = dx;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(724)
				::zpp_nape::geom::ZPP_Mat23 tmp38 = this->zpp_inner;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(724)
				Float tmp39 = tmp38->c;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(724)
				Float tmp40 = (tmp37 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(724)
				Float tmp41 = (tmp36 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(724)
				Float tmp42 = idet;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(724)
				Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(724)
				Float y = tmp43;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(724)
				::nape::geom::Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(724)
				{
					HX_STACK_LINE(724)
					::nape::geom::Vec2 tmp44 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(724)
					bool tmp45 = (tmp44 == null());		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(724)
					if ((tmp45)){
						HX_STACK_LINE(724)
						::nape::geom::Vec2 tmp46 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(724)
						ret1 = tmp46;
					}
					else{
						HX_STACK_LINE(724)
						::nape::geom::Vec2 tmp46 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(724)
						ret1 = tmp46;
						HX_STACK_LINE(724)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret1->zpp_pool;
						HX_STACK_LINE(724)
						ret1->zpp_pool = null();
					}
				}
				HX_STACK_LINE(724)
				bool tmp44 = (ret1->zpp_inner == null());		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(724)
				if ((tmp44)){
					HX_STACK_LINE(724)
					::zpp_nape::geom::ZPP_Vec2 tmp45;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(724)
					{
						HX_STACK_LINE(724)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(724)
						::zpp_nape::geom::ZPP_Vec2 ret2;		HX_STACK_VAR(ret2,"ret2");
						HX_STACK_LINE(724)
						{
							HX_STACK_LINE(724)
							::zpp_nape::geom::ZPP_Vec2 tmp46 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(724)
							bool tmp47 = (tmp46 == null());		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(724)
							if ((tmp47)){
								HX_STACK_LINE(724)
								::zpp_nape::geom::ZPP_Vec2 tmp48 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(724)
								ret2 = tmp48;
							}
							else{
								HX_STACK_LINE(724)
								::zpp_nape::geom::ZPP_Vec2 tmp48 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(724)
								ret2 = tmp48;
								HX_STACK_LINE(724)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret2->next;
								HX_STACK_LINE(724)
								ret2->next = null();
							}
							HX_STACK_LINE(724)
							ret2->weak = false;
						}
						HX_STACK_LINE(724)
						ret2->_immutable = immutable;
						HX_STACK_LINE(724)
						{
							HX_STACK_LINE(724)
							ret2->x = x;
							HX_STACK_LINE(724)
							ret2->y = y;
							HX_STACK_LINE(724)
							{
							}
						}
						HX_STACK_LINE(724)
						tmp45 = ret2;
					}
					HX_STACK_LINE(724)
					ret1->zpp_inner = tmp45;
					HX_STACK_LINE(724)
					ret1->zpp_inner->outer = ret1;
				}
				else{
					HX_STACK_LINE(724)
					Float tmp45;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(724)
					{
						HX_STACK_LINE(724)
						{
							HX_STACK_LINE(724)
							::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(724)
							bool tmp46 = (_this->_validate != null());		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(724)
							if ((tmp46)){
								HX_STACK_LINE(724)
								_this->_validate();
							}
						}
						HX_STACK_LINE(724)
						tmp45 = ret1->zpp_inner->x;
					}
					HX_STACK_LINE(724)
					Float tmp46 = x;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(724)
					bool tmp47 = (tmp45 == tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(724)
					bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(724)
					if ((tmp47)){
						HX_STACK_LINE(724)
						Float tmp49;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(724)
						{
							HX_STACK_LINE(724)
							{
								HX_STACK_LINE(724)
								::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(724)
								bool tmp50 = (_this->_validate != null());		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(724)
								bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(724)
								bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(724)
								if ((tmp52)){
									HX_STACK_LINE(724)
									_this->_validate();
								}
							}
							HX_STACK_LINE(724)
							Float tmp50 = ret1->zpp_inner->y;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(724)
							tmp49 = tmp50;
						}
						HX_STACK_LINE(724)
						Float tmp50 = y;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(724)
						tmp48 = (tmp49 == tmp50);
					}
					else{
						HX_STACK_LINE(724)
						tmp48 = false;
					}
					HX_STACK_LINE(724)
					bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(724)
					if ((tmp49)){
						HX_STACK_LINE(724)
						{
							HX_STACK_LINE(724)
							ret1->zpp_inner->x = x;
							HX_STACK_LINE(724)
							ret1->zpp_inner->y = y;
							HX_STACK_LINE(724)
							{
							}
						}
						HX_STACK_LINE(724)
						{
							HX_STACK_LINE(724)
							::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(724)
							bool tmp50 = (_this->_invalidate != null());		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(724)
							if ((tmp50)){
								HX_STACK_LINE(724)
								::zpp_nape::geom::ZPP_Vec2 tmp51 = _this;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(724)
								_this->_invalidate(tmp51);
							}
						}
					}
					HX_STACK_LINE(724)
					ret1;
				}
				HX_STACK_LINE(724)
				ret1->zpp_inner->weak = weak;
				HX_STACK_LINE(724)
				tmp21 = ret1;
			}
			HX_STACK_LINE(724)
			ret = tmp21;
		}
		HX_STACK_LINE(726)
		{
			HX_STACK_LINE(727)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(728)
			tmp13 = point->zpp_inner->weak;
			HX_STACK_LINE(727)
			if ((tmp13)){
				HX_STACK_LINE(730)
				{
					HX_STACK_LINE(730)
					::zpp_nape::geom::ZPP_Vec2 inner = point->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(730)
					point->zpp_inner->outer = null();
					HX_STACK_LINE(730)
					point->zpp_inner = null();
					HX_STACK_LINE(730)
					{
						HX_STACK_LINE(730)
						::nape::geom::Vec2 o = point;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(730)
						::nape::geom::Vec2 tmp14 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(730)
						o->zpp_pool = tmp14;
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
							bool tmp14 = (o->outer != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(730)
							if ((tmp14)){
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
						::zpp_nape::geom::ZPP_Vec2 tmp14 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(730)
						o->next = tmp14;
						HX_STACK_LINE(730)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(731)
				true;
			}
			else{
				HX_STACK_LINE(734)
				false;
			}
		}
		HX_STACK_LINE(737)
		::nape::geom::Vec2 tmp13 = ret;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(737)
		return tmp13;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Mat23_obj,inverseTransform,return )

::String Mat23_obj::toString( ){
	HX_STACK_FRAME("nape.geom.Mat23","toString",0x7d626765,"nape.geom.Mat23.toString","nape/geom/Mat23.hx",742,0xee046d69)
	HX_STACK_THIS(this)
	HX_STACK_LINE(743)
	::zpp_nape::geom::ZPP_Mat23 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(743)
	Float tmp1 = tmp->a;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(743)
	::String tmp2 = (HX_HCSTRING("{ a: ","\x22","\xfb","\xb9","\xe7") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(743)
	::String tmp3 = (tmp2 + HX_HCSTRING(" b: ","\x68","\x63","\x71","\x15"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(743)
	::zpp_nape::geom::ZPP_Mat23 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(743)
	Float tmp5 = tmp4->b;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(743)
	::String tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(743)
	::String tmp7 = (tmp6 + HX_HCSTRING(" c: ","\xa9","\x25","\x72","\x15"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(743)
	::zpp_nape::geom::ZPP_Mat23 tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(743)
	Float tmp9 = tmp8->c;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(743)
	::String tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(743)
	::String tmp11 = (tmp10 + HX_HCSTRING(" d: ","\xea","\xe7","\x72","\x15"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(743)
	::zpp_nape::geom::ZPP_Mat23 tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(743)
	Float tmp13 = tmp12->d;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(743)
	::String tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(743)
	::String tmp15 = (tmp14 + HX_HCSTRING(" tx: ","\x4a","\x91","\xda","\xb9"));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(743)
	::zpp_nape::geom::ZPP_Mat23 tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(743)
	Float tmp17 = tmp16->tx;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(743)
	::String tmp18 = (tmp15 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(743)
	::String tmp19 = (tmp18 + HX_HCSTRING(" ty: ","\x8b","\x53","\xdb","\xb9"));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(743)
	::zpp_nape::geom::ZPP_Mat23 tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(743)
	Float tmp21 = tmp20->ty;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(743)
	::String tmp22 = (tmp19 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(743)
	::String tmp23 = (tmp22 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(743)
	return tmp23;
}


HX_DEFINE_DYNAMIC_FUNC0(Mat23_obj,toString,return )

bool Mat23_obj::equiorthogonal( ){
	HX_STACK_FRAME("nape.geom.Mat23","equiorthogonal",0x36cf42b2,"nape.geom.Mat23.equiorthogonal","nape/geom/Mat23.hx",766,0xee046d69)
	HX_STACK_THIS(this)
	HX_STACK_LINE(767)
	bool tmp = this->singular();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(767)
	if ((tmp)){
		HX_STACK_LINE(768)
		return false;
	}
	else{
		HX_STACK_LINE(771)
		::zpp_nape::geom::ZPP_Mat23 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(771)
		Float tmp2 = tmp1->a;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(771)
		::zpp_nape::geom::ZPP_Mat23 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(771)
		Float tmp4 = tmp3->b;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(771)
		Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(771)
		::zpp_nape::geom::ZPP_Mat23 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(771)
		Float tmp7 = tmp6->c;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(771)
		::zpp_nape::geom::ZPP_Mat23 tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(771)
		Float tmp9 = tmp8->d;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(771)
		Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(771)
		Float tmp11 = (tmp5 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(771)
		Float x = tmp11;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(772)
		Float tmp12 = (x * x);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(772)
		Float tmp13 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(772)
		bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(772)
		if ((tmp14)){
			HX_STACK_LINE(773)
			::zpp_nape::geom::ZPP_Mat23 tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(773)
			Float tmp16 = tmp15->a;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(773)
			::zpp_nape::geom::ZPP_Mat23 tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(773)
			Float tmp18 = tmp17->a;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(773)
			Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(773)
			::zpp_nape::geom::ZPP_Mat23 tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(773)
			Float tmp21 = tmp20->b;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(773)
			::zpp_nape::geom::ZPP_Mat23 tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(773)
			Float tmp23 = tmp22->b;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(773)
			Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(773)
			Float tmp25 = (tmp19 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(773)
			::zpp_nape::geom::ZPP_Mat23 tmp26 = this->zpp_inner;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(773)
			Float tmp27 = tmp26->c;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(773)
			::zpp_nape::geom::ZPP_Mat23 tmp28 = this->zpp_inner;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(773)
			Float tmp29 = tmp28->c;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(773)
			Float tmp30 = (tmp27 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(773)
			Float tmp31 = (tmp25 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(773)
			::zpp_nape::geom::ZPP_Mat23 tmp32 = this->zpp_inner;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(773)
			Float tmp33 = tmp32->d;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(773)
			::zpp_nape::geom::ZPP_Mat23 tmp34 = this->zpp_inner;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(773)
			Float tmp35 = tmp34->d;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(773)
			Float tmp36 = (tmp33 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(773)
			Float tmp37 = (tmp31 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(773)
			Float y = tmp37;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(774)
			Float tmp38 = (y * y);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(774)
			Float tmp39 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(774)
			bool tmp40 = (tmp38 < tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(774)
			return tmp40;
		}
		else{
			HX_STACK_LINE(777)
			return false;
		}
	}
	HX_STACK_LINE(767)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Mat23_obj,equiorthogonal,return )

bool Mat23_obj::orthogonal( ){
	HX_STACK_FRAME("nape.geom.Mat23","orthogonal",0x33057072,"nape.geom.Mat23.orthogonal","nape/geom/Mat23.hx",794,0xee046d69)
	HX_STACK_THIS(this)
	HX_STACK_LINE(795)
	::zpp_nape::geom::ZPP_Mat23 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(795)
	Float tmp1 = tmp->a;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(795)
	::zpp_nape::geom::ZPP_Mat23 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(795)
	Float tmp3 = tmp2->b;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(795)
	Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(795)
	::zpp_nape::geom::ZPP_Mat23 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(795)
	Float tmp6 = tmp5->c;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(795)
	::zpp_nape::geom::ZPP_Mat23 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(795)
	Float tmp8 = tmp7->d;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(795)
	Float tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(795)
	Float tmp10 = (tmp4 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(795)
	Float x = tmp10;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(796)
	Float tmp11 = (x * x);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(796)
	Float tmp12 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(796)
	bool tmp13 = (tmp11 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(796)
	if ((tmp13)){
		HX_STACK_LINE(797)
		::zpp_nape::geom::ZPP_Mat23 tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(797)
		Float tmp15 = tmp14->a;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(797)
		::zpp_nape::geom::ZPP_Mat23 tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(797)
		Float tmp17 = tmp16->a;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(797)
		Float tmp18 = (tmp15 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(797)
		::zpp_nape::geom::ZPP_Mat23 tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(797)
		Float tmp20 = tmp19->b;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(797)
		::zpp_nape::geom::ZPP_Mat23 tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(797)
		Float tmp22 = tmp21->b;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(797)
		Float tmp23 = (tmp20 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(797)
		Float tmp24 = (tmp18 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(797)
		Float tmp25 = (tmp24 - (int)1);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(797)
		Float y = tmp25;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(798)
		::zpp_nape::geom::ZPP_Mat23 tmp26 = this->zpp_inner;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(798)
		Float tmp27 = tmp26->c;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(798)
		::zpp_nape::geom::ZPP_Mat23 tmp28 = this->zpp_inner;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(798)
		Float tmp29 = tmp28->c;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(798)
		Float tmp30 = (tmp27 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(798)
		::zpp_nape::geom::ZPP_Mat23 tmp31 = this->zpp_inner;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(798)
		Float tmp32 = tmp31->d;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(798)
		::zpp_nape::geom::ZPP_Mat23 tmp33 = this->zpp_inner;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(798)
		Float tmp34 = tmp33->d;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(798)
		Float tmp35 = (tmp32 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(798)
		Float tmp36 = (tmp30 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(798)
		Float tmp37 = (tmp36 - (int)1);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(798)
		Float z = tmp37;		HX_STACK_VAR(z,"z");
		HX_STACK_LINE(799)
		Float tmp38 = (y * y);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(799)
		Float tmp39 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(799)
		bool tmp40 = (tmp38 < tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(799)
		bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(799)
		if ((tmp40)){
			HX_STACK_LINE(799)
			Float tmp42 = (z * z);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(799)
			Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(799)
			Float tmp44 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(799)
			Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(799)
			tmp41 = (tmp43 < tmp45);
		}
		else{
			HX_STACK_LINE(799)
			tmp41 = false;
		}
		HX_STACK_LINE(799)
		return tmp41;
	}
	else{
		HX_STACK_LINE(802)
		return false;
	}
	HX_STACK_LINE(796)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Mat23_obj,orthogonal,return )

::nape::geom::Mat23 Mat23_obj::equiorthogonalise( ){
	HX_STACK_FRAME("nape.geom.Mat23","equiorthogonalise",0xca9e09c9,"nape.geom.Mat23.equiorthogonalise","nape/geom/Mat23.hx",817,0xee046d69)
	HX_STACK_THIS(this)
	HX_STACK_LINE(818)
	bool tmp = this->equiorthogonal();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(818)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(818)
	if ((tmp1)){
		HX_STACK_LINE(819)
		::zpp_nape::geom::ZPP_Mat23 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(819)
		Float tmp3 = tmp2->a;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(819)
		::zpp_nape::geom::ZPP_Mat23 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(819)
		Float tmp5 = tmp4->a;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(819)
		Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(819)
		::zpp_nape::geom::ZPP_Mat23 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(819)
		Float tmp8 = tmp7->c;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(819)
		::zpp_nape::geom::ZPP_Mat23 tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(819)
		Float tmp10 = tmp9->c;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(819)
		Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(819)
		Float tmp12 = (tmp6 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(819)
		Float tmp13 = ::Math_obj::sqrt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(819)
		Float k1 = tmp13;		HX_STACK_VAR(k1,"k1");
		HX_STACK_LINE(820)
		::zpp_nape::geom::ZPP_Mat23 tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(820)
		Float tmp15 = tmp14->b;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(820)
		::zpp_nape::geom::ZPP_Mat23 tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(820)
		Float tmp17 = tmp16->b;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(820)
		Float tmp18 = (tmp15 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(820)
		::zpp_nape::geom::ZPP_Mat23 tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(820)
		Float tmp20 = tmp19->d;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(820)
		::zpp_nape::geom::ZPP_Mat23 tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(820)
		Float tmp22 = tmp21->d;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(820)
		Float tmp23 = (tmp20 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(820)
		Float tmp24 = (tmp18 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(820)
		Float tmp25 = ::Math_obj::sqrt(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(820)
		Float k2 = tmp25;		HX_STACK_VAR(k2,"k2");
		HX_STACK_LINE(826)
		Float tmp26 = (k1 + k2);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(826)
		Float tmp27 = (Float(tmp26) / Float((int)2));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(826)
		Float k = tmp27;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(827)
		Float tmp28 = (Float(k) / Float(k1));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(827)
		k1 = tmp28;
		HX_STACK_LINE(828)
		Float tmp29 = (Float(k) / Float(k2));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(828)
		k2 = tmp29;
		HX_STACK_LINE(829)
		{
			HX_STACK_LINE(829)
			::nape::geom::Mat23 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(829)
			{
				HX_STACK_LINE(829)
				{
					HX_STACK_LINE(829)
					Float tmp30 = _g->zpp_inner->a;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(829)
					Float tmp31 = k1;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(829)
					Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(829)
					_g->zpp_inner->a = tmp32;
					HX_STACK_LINE(829)
					{
						HX_STACK_LINE(829)
						::zpp_nape::geom::ZPP_Mat23 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(829)
						bool tmp33 = (_this->_invalidate != null());		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(829)
						if ((tmp33)){
							HX_STACK_LINE(829)
							_this->_invalidate();
						}
					}
				}
				HX_STACK_LINE(829)
				_g->zpp_inner->a;
			}
		}
		HX_STACK_LINE(830)
		{
			HX_STACK_LINE(830)
			::nape::geom::Mat23 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(830)
			{
				HX_STACK_LINE(830)
				{
					HX_STACK_LINE(830)
					Float tmp30 = _g->zpp_inner->c;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(830)
					Float tmp31 = k1;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(830)
					Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(830)
					_g->zpp_inner->c = tmp32;
					HX_STACK_LINE(830)
					{
						HX_STACK_LINE(830)
						::zpp_nape::geom::ZPP_Mat23 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(830)
						bool tmp33 = (_this->_invalidate != null());		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(830)
						if ((tmp33)){
							HX_STACK_LINE(830)
							_this->_invalidate();
						}
					}
				}
				HX_STACK_LINE(830)
				_g->zpp_inner->c;
			}
		}
		HX_STACK_LINE(831)
		{
			HX_STACK_LINE(831)
			::nape::geom::Mat23 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(831)
			{
				HX_STACK_LINE(831)
				{
					HX_STACK_LINE(831)
					Float tmp30 = _g->zpp_inner->b;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(831)
					Float tmp31 = k2;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(831)
					Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(831)
					_g->zpp_inner->b = tmp32;
					HX_STACK_LINE(831)
					{
						HX_STACK_LINE(831)
						::zpp_nape::geom::ZPP_Mat23 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(831)
						bool tmp33 = (_this->_invalidate != null());		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(831)
						if ((tmp33)){
							HX_STACK_LINE(831)
							_this->_invalidate();
						}
					}
				}
				HX_STACK_LINE(831)
				_g->zpp_inner->b;
			}
		}
		HX_STACK_LINE(832)
		{
			HX_STACK_LINE(832)
			::nape::geom::Mat23 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(832)
			{
				HX_STACK_LINE(832)
				{
					HX_STACK_LINE(832)
					Float tmp30 = _g->zpp_inner->d;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(832)
					Float tmp31 = k2;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(832)
					Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(832)
					_g->zpp_inner->d = tmp32;
					HX_STACK_LINE(832)
					{
						HX_STACK_LINE(832)
						::zpp_nape::geom::ZPP_Mat23 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(832)
						bool tmp33 = (_this->_invalidate != null());		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(832)
						if ((tmp33)){
							HX_STACK_LINE(832)
							_this->_invalidate();
						}
					}
				}
				HX_STACK_LINE(832)
				_g->zpp_inner->d;
			}
		}
		HX_STACK_LINE(833)
		::zpp_nape::geom::ZPP_Mat23 tmp30 = this->zpp_inner;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(833)
		Float tmp31 = tmp30->a;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(833)
		::zpp_nape::geom::ZPP_Mat23 tmp32 = this->zpp_inner;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(833)
		Float tmp33 = tmp32->b;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(833)
		Float tmp34 = (tmp31 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(833)
		::zpp_nape::geom::ZPP_Mat23 tmp35 = this->zpp_inner;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(833)
		Float tmp36 = tmp35->c;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(833)
		::zpp_nape::geom::ZPP_Mat23 tmp37 = this->zpp_inner;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(833)
		Float tmp38 = tmp37->d;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(833)
		Float tmp39 = (tmp36 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(833)
		Float tmp40 = (tmp34 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(833)
		Float dot = tmp40;		HX_STACK_VAR(dot,"dot");
		HX_STACK_LINE(834)
		Float tmp41 = ::Math_obj::PI;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(834)
		Float tmp42 = (((Float)0.25) * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(834)
		Float tmp43 = dot;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(834)
		Float tmp44 = (k * k);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(834)
		Float tmp45 = (Float(tmp43) / Float(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(834)
		Float tmp46 = ::Math_obj::acos(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(834)
		Float tmp47 = (((Float)0.5) * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(834)
		Float tmp48 = (tmp42 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(834)
		Float ang = tmp48;		HX_STACK_VAR(ang,"ang");
		HX_STACK_LINE(835)
		::zpp_nape::geom::ZPP_Mat23 tmp49 = this->zpp_inner;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(835)
		Float tmp50 = tmp49->a;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(835)
		::zpp_nape::geom::ZPP_Mat23 tmp51 = this->zpp_inner;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(835)
		Float tmp52 = tmp51->d;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(835)
		Float tmp53 = (tmp50 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(835)
		::zpp_nape::geom::ZPP_Mat23 tmp54 = this->zpp_inner;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(835)
		Float tmp55 = tmp54->b;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(835)
		::zpp_nape::geom::ZPP_Mat23 tmp56 = this->zpp_inner;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(835)
		Float tmp57 = tmp56->c;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(835)
		Float tmp58 = (tmp55 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(835)
		Float tmp59 = (tmp53 - tmp58);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(835)
		bool tmp60 = (tmp59 > (int)0);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(835)
		if ((tmp60)){
			HX_STACK_LINE(836)
			Float tmp61 = ang;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(836)
			Float tmp62 = -(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(836)
			ang = tmp62;
		}
		HX_STACK_LINE(838)
		Float tmp61 = ang;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(838)
		Float tmp62 = ::Math_obj::sin(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(838)
		Float sin = tmp62;		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(839)
		Float tmp63 = ang;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(839)
		Float tmp64 = ::Math_obj::cos(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(839)
		Float cos = tmp64;		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(840)
		::zpp_nape::geom::ZPP_Mat23 tmp65 = this->zpp_inner;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(840)
		Float tmp66 = tmp65->a;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(840)
		Float tmp67 = cos;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(840)
		Float tmp68 = (tmp66 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(840)
		::zpp_nape::geom::ZPP_Mat23 tmp69 = this->zpp_inner;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(840)
		Float tmp70 = tmp69->c;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(840)
		Float tmp71 = sin;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(840)
		Float tmp72 = (tmp70 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(840)
		Float tmp73 = (tmp68 - tmp72);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(840)
		Float a2 = tmp73;		HX_STACK_VAR(a2,"a2");
		HX_STACK_LINE(841)
		::zpp_nape::geom::ZPP_Mat23 tmp74 = this->zpp_inner;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(841)
		Float tmp75 = tmp74->b;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(841)
		Float tmp76 = cos;		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(841)
		Float tmp77 = (tmp75 * tmp76);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(841)
		::zpp_nape::geom::ZPP_Mat23 tmp78 = this->zpp_inner;		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(841)
		Float tmp79 = tmp78->d;		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(841)
		Float tmp80 = sin;		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(841)
		Float tmp81 = (tmp79 * tmp80);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(841)
		Float tmp82 = (tmp77 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(841)
		Float b2 = tmp82;		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(842)
		{
			HX_STACK_LINE(842)
			{
				HX_STACK_LINE(842)
				::zpp_nape::geom::ZPP_Mat23 tmp83 = this->zpp_inner;		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(842)
				Float tmp84 = tmp83->c;		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(842)
				Float tmp85 = cos;		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(842)
				Float tmp86 = (tmp84 * tmp85);		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(842)
				::zpp_nape::geom::ZPP_Mat23 tmp87 = this->zpp_inner;		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(842)
				Float tmp88 = tmp87->a;		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(842)
				Float tmp89 = sin;		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(842)
				Float tmp90 = (tmp88 * tmp89);		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(842)
				Float tmp91 = (tmp86 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(842)
				::zpp_nape::geom::ZPP_Mat23 tmp92 = this->zpp_inner;		HX_STACK_VAR(tmp92,"tmp92");
				HX_STACK_LINE(842)
				tmp92->c = tmp91;
				HX_STACK_LINE(842)
				{
					HX_STACK_LINE(842)
					::zpp_nape::geom::ZPP_Mat23 tmp93 = this->zpp_inner;		HX_STACK_VAR(tmp93,"tmp93");
					HX_STACK_LINE(842)
					::zpp_nape::geom::ZPP_Mat23 _this = tmp93;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(842)
					bool tmp94 = (_this->_invalidate != null());		HX_STACK_VAR(tmp94,"tmp94");
					HX_STACK_LINE(842)
					if ((tmp94)){
						HX_STACK_LINE(842)
						_this->_invalidate();
					}
				}
			}
			HX_STACK_LINE(842)
			::zpp_nape::geom::ZPP_Mat23 tmp83 = this->zpp_inner;		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(842)
			tmp83->c;
		}
		HX_STACK_LINE(843)
		{
			HX_STACK_LINE(843)
			{
				HX_STACK_LINE(843)
				::zpp_nape::geom::ZPP_Mat23 tmp83 = this->zpp_inner;		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(843)
				tmp83->a = a2;
				HX_STACK_LINE(843)
				{
					HX_STACK_LINE(843)
					::zpp_nape::geom::ZPP_Mat23 tmp84 = this->zpp_inner;		HX_STACK_VAR(tmp84,"tmp84");
					HX_STACK_LINE(843)
					::zpp_nape::geom::ZPP_Mat23 _this = tmp84;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(843)
					bool tmp85 = (_this->_invalidate != null());		HX_STACK_VAR(tmp85,"tmp85");
					HX_STACK_LINE(843)
					if ((tmp85)){
						HX_STACK_LINE(843)
						_this->_invalidate();
					}
				}
			}
			HX_STACK_LINE(843)
			::zpp_nape::geom::ZPP_Mat23 tmp83 = this->zpp_inner;		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(843)
			tmp83->a;
		}
		HX_STACK_LINE(844)
		{
			HX_STACK_LINE(844)
			{
				HX_STACK_LINE(844)
				::zpp_nape::geom::ZPP_Mat23 tmp83 = this->zpp_inner;		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(844)
				Float tmp84 = tmp83->d;		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(844)
				Float tmp85 = cos;		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(844)
				Float tmp86 = (tmp84 * tmp85);		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(844)
				::zpp_nape::geom::ZPP_Mat23 tmp87 = this->zpp_inner;		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(844)
				Float tmp88 = tmp87->b;		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(844)
				Float tmp89 = sin;		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(844)
				Float tmp90 = (tmp88 * tmp89);		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(844)
				Float tmp91 = (tmp86 - tmp90);		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(844)
				::zpp_nape::geom::ZPP_Mat23 tmp92 = this->zpp_inner;		HX_STACK_VAR(tmp92,"tmp92");
				HX_STACK_LINE(844)
				tmp92->d = tmp91;
				HX_STACK_LINE(844)
				{
					HX_STACK_LINE(844)
					::zpp_nape::geom::ZPP_Mat23 tmp93 = this->zpp_inner;		HX_STACK_VAR(tmp93,"tmp93");
					HX_STACK_LINE(844)
					::zpp_nape::geom::ZPP_Mat23 _this = tmp93;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(844)
					bool tmp94 = (_this->_invalidate != null());		HX_STACK_VAR(tmp94,"tmp94");
					HX_STACK_LINE(844)
					if ((tmp94)){
						HX_STACK_LINE(844)
						_this->_invalidate();
					}
				}
			}
			HX_STACK_LINE(844)
			::zpp_nape::geom::ZPP_Mat23 tmp83 = this->zpp_inner;		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(844)
			tmp83->d;
		}
		HX_STACK_LINE(845)
		{
			HX_STACK_LINE(845)
			{
				HX_STACK_LINE(845)
				::zpp_nape::geom::ZPP_Mat23 tmp83 = this->zpp_inner;		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(845)
				tmp83->b = b2;
				HX_STACK_LINE(845)
				{
					HX_STACK_LINE(845)
					::zpp_nape::geom::ZPP_Mat23 tmp84 = this->zpp_inner;		HX_STACK_VAR(tmp84,"tmp84");
					HX_STACK_LINE(845)
					::zpp_nape::geom::ZPP_Mat23 _this = tmp84;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(845)
					bool tmp85 = (_this->_invalidate != null());		HX_STACK_VAR(tmp85,"tmp85");
					HX_STACK_LINE(845)
					if ((tmp85)){
						HX_STACK_LINE(845)
						_this->_invalidate();
					}
				}
			}
			HX_STACK_LINE(845)
			::zpp_nape::geom::ZPP_Mat23 tmp83 = this->zpp_inner;		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(845)
			tmp83->b;
		}
		HX_STACK_LINE(846)
		{
			HX_STACK_LINE(846)
			::zpp_nape::geom::ZPP_Mat23 tmp83 = this->zpp_inner;		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(846)
			::zpp_nape::geom::ZPP_Mat23 _this = tmp83;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(846)
			bool tmp84 = (_this->_invalidate != null());		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(846)
			if ((tmp84)){
				HX_STACK_LINE(846)
				_this->_invalidate();
			}
		}
	}
	HX_STACK_LINE(848)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Mat23_obj,equiorthogonalise,return )

::nape::geom::Mat23 Mat23_obj::orthogonalise( ){
	HX_STACK_FRAME("nape.geom.Mat23","orthogonalise",0x11aaf409,"nape.geom.Mat23.orthogonalise","nape/geom/Mat23.hx",862,0xee046d69)
	HX_STACK_THIS(this)
	HX_STACK_LINE(863)
	bool tmp = this->orthogonal();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(863)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(863)
	if ((tmp1)){
		HX_STACK_LINE(864)
		::zpp_nape::geom::ZPP_Mat23 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(864)
		Float tmp3 = tmp2->a;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(864)
		::zpp_nape::geom::ZPP_Mat23 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(864)
		Float tmp5 = tmp4->a;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(864)
		Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(864)
		::zpp_nape::geom::ZPP_Mat23 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(864)
		Float tmp8 = tmp7->c;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(864)
		::zpp_nape::geom::ZPP_Mat23 tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(864)
		Float tmp10 = tmp9->c;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(864)
		Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(864)
		Float tmp12 = (tmp6 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(864)
		Float tmp13 = ::Math_obj::sqrt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(864)
		Float k1 = tmp13;		HX_STACK_VAR(k1,"k1");
		HX_STACK_LINE(865)
		::zpp_nape::geom::ZPP_Mat23 tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(865)
		Float tmp15 = tmp14->b;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(865)
		::zpp_nape::geom::ZPP_Mat23 tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(865)
		Float tmp17 = tmp16->b;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(865)
		Float tmp18 = (tmp15 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(865)
		::zpp_nape::geom::ZPP_Mat23 tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(865)
		Float tmp20 = tmp19->d;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(865)
		::zpp_nape::geom::ZPP_Mat23 tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(865)
		Float tmp22 = tmp21->d;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(865)
		Float tmp23 = (tmp20 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(865)
		Float tmp24 = (tmp18 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(865)
		Float tmp25 = ::Math_obj::sqrt(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(865)
		Float k2 = tmp25;		HX_STACK_VAR(k2,"k2");
		HX_STACK_LINE(871)
		int k = (int)1;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(872)
		Float tmp26 = (Float(k) / Float(k1));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(872)
		k1 = tmp26;
		HX_STACK_LINE(873)
		Float tmp27 = (Float(k) / Float(k2));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(873)
		k2 = tmp27;
		HX_STACK_LINE(874)
		{
			HX_STACK_LINE(874)
			::nape::geom::Mat23 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(874)
			{
				HX_STACK_LINE(874)
				{
					HX_STACK_LINE(874)
					Float tmp28 = _g->zpp_inner->a;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(874)
					Float tmp29 = k1;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(874)
					Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(874)
					_g->zpp_inner->a = tmp30;
					HX_STACK_LINE(874)
					{
						HX_STACK_LINE(874)
						::zpp_nape::geom::ZPP_Mat23 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(874)
						bool tmp31 = (_this->_invalidate != null());		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(874)
						if ((tmp31)){
							HX_STACK_LINE(874)
							_this->_invalidate();
						}
					}
				}
				HX_STACK_LINE(874)
				_g->zpp_inner->a;
			}
		}
		HX_STACK_LINE(875)
		{
			HX_STACK_LINE(875)
			::nape::geom::Mat23 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(875)
			{
				HX_STACK_LINE(875)
				{
					HX_STACK_LINE(875)
					Float tmp28 = _g->zpp_inner->c;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(875)
					Float tmp29 = k1;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(875)
					Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(875)
					_g->zpp_inner->c = tmp30;
					HX_STACK_LINE(875)
					{
						HX_STACK_LINE(875)
						::zpp_nape::geom::ZPP_Mat23 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(875)
						bool tmp31 = (_this->_invalidate != null());		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(875)
						if ((tmp31)){
							HX_STACK_LINE(875)
							_this->_invalidate();
						}
					}
				}
				HX_STACK_LINE(875)
				_g->zpp_inner->c;
			}
		}
		HX_STACK_LINE(876)
		{
			HX_STACK_LINE(876)
			::nape::geom::Mat23 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(876)
			{
				HX_STACK_LINE(876)
				{
					HX_STACK_LINE(876)
					Float tmp28 = _g->zpp_inner->b;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(876)
					Float tmp29 = k2;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(876)
					Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(876)
					_g->zpp_inner->b = tmp30;
					HX_STACK_LINE(876)
					{
						HX_STACK_LINE(876)
						::zpp_nape::geom::ZPP_Mat23 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(876)
						bool tmp31 = (_this->_invalidate != null());		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(876)
						if ((tmp31)){
							HX_STACK_LINE(876)
							_this->_invalidate();
						}
					}
				}
				HX_STACK_LINE(876)
				_g->zpp_inner->b;
			}
		}
		HX_STACK_LINE(877)
		{
			HX_STACK_LINE(877)
			::nape::geom::Mat23 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(877)
			{
				HX_STACK_LINE(877)
				{
					HX_STACK_LINE(877)
					Float tmp28 = _g->zpp_inner->d;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(877)
					Float tmp29 = k2;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(877)
					Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(877)
					_g->zpp_inner->d = tmp30;
					HX_STACK_LINE(877)
					{
						HX_STACK_LINE(877)
						::zpp_nape::geom::ZPP_Mat23 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(877)
						bool tmp31 = (_this->_invalidate != null());		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(877)
						if ((tmp31)){
							HX_STACK_LINE(877)
							_this->_invalidate();
						}
					}
				}
				HX_STACK_LINE(877)
				_g->zpp_inner->d;
			}
		}
		HX_STACK_LINE(878)
		::zpp_nape::geom::ZPP_Mat23 tmp28 = this->zpp_inner;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(878)
		Float tmp29 = tmp28->a;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(878)
		::zpp_nape::geom::ZPP_Mat23 tmp30 = this->zpp_inner;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(878)
		Float tmp31 = tmp30->b;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(878)
		Float tmp32 = (tmp29 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(878)
		::zpp_nape::geom::ZPP_Mat23 tmp33 = this->zpp_inner;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(878)
		Float tmp34 = tmp33->c;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(878)
		::zpp_nape::geom::ZPP_Mat23 tmp35 = this->zpp_inner;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(878)
		Float tmp36 = tmp35->d;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(878)
		Float tmp37 = (tmp34 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(878)
		Float tmp38 = (tmp32 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(878)
		Float dot = tmp38;		HX_STACK_VAR(dot,"dot");
		HX_STACK_LINE(879)
		Float tmp39 = ::Math_obj::PI;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(879)
		Float tmp40 = (((Float)0.25) * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(879)
		Float tmp41 = dot;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(879)
		int tmp42 = (k * k);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(879)
		Float tmp43 = (Float(tmp41) / Float(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(879)
		Float tmp44 = ::Math_obj::acos(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(879)
		Float tmp45 = (((Float)0.5) * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(879)
		Float tmp46 = (tmp40 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(879)
		Float ang = tmp46;		HX_STACK_VAR(ang,"ang");
		HX_STACK_LINE(880)
		::zpp_nape::geom::ZPP_Mat23 tmp47 = this->zpp_inner;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(880)
		Float tmp48 = tmp47->a;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(880)
		::zpp_nape::geom::ZPP_Mat23 tmp49 = this->zpp_inner;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(880)
		Float tmp50 = tmp49->d;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(880)
		Float tmp51 = (tmp48 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(880)
		::zpp_nape::geom::ZPP_Mat23 tmp52 = this->zpp_inner;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(880)
		Float tmp53 = tmp52->b;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(880)
		::zpp_nape::geom::ZPP_Mat23 tmp54 = this->zpp_inner;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(880)
		Float tmp55 = tmp54->c;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(880)
		Float tmp56 = (tmp53 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(880)
		Float tmp57 = (tmp51 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(880)
		bool tmp58 = (tmp57 > (int)0);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(880)
		if ((tmp58)){
			HX_STACK_LINE(881)
			Float tmp59 = ang;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(881)
			Float tmp60 = -(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(881)
			ang = tmp60;
		}
		HX_STACK_LINE(883)
		Float tmp59 = ang;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(883)
		Float tmp60 = ::Math_obj::sin(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(883)
		Float sin = tmp60;		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(884)
		Float tmp61 = ang;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(884)
		Float tmp62 = ::Math_obj::cos(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(884)
		Float cos = tmp62;		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(885)
		::zpp_nape::geom::ZPP_Mat23 tmp63 = this->zpp_inner;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(885)
		Float tmp64 = tmp63->a;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(885)
		Float tmp65 = cos;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(885)
		Float tmp66 = (tmp64 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(885)
		::zpp_nape::geom::ZPP_Mat23 tmp67 = this->zpp_inner;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(885)
		Float tmp68 = tmp67->c;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(885)
		Float tmp69 = sin;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(885)
		Float tmp70 = (tmp68 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(885)
		Float tmp71 = (tmp66 - tmp70);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(885)
		Float a2 = tmp71;		HX_STACK_VAR(a2,"a2");
		HX_STACK_LINE(886)
		::zpp_nape::geom::ZPP_Mat23 tmp72 = this->zpp_inner;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(886)
		Float tmp73 = tmp72->b;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(886)
		Float tmp74 = cos;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(886)
		Float tmp75 = (tmp73 * tmp74);		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(886)
		::zpp_nape::geom::ZPP_Mat23 tmp76 = this->zpp_inner;		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(886)
		Float tmp77 = tmp76->d;		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(886)
		Float tmp78 = sin;		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(886)
		Float tmp79 = (tmp77 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(886)
		Float tmp80 = (tmp75 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(886)
		Float b2 = tmp80;		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(887)
		{
			HX_STACK_LINE(887)
			{
				HX_STACK_LINE(887)
				::zpp_nape::geom::ZPP_Mat23 tmp81 = this->zpp_inner;		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(887)
				Float tmp82 = tmp81->c;		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(887)
				Float tmp83 = cos;		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(887)
				Float tmp84 = (tmp82 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(887)
				::zpp_nape::geom::ZPP_Mat23 tmp85 = this->zpp_inner;		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(887)
				Float tmp86 = tmp85->a;		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(887)
				Float tmp87 = sin;		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(887)
				Float tmp88 = (tmp86 * tmp87);		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(887)
				Float tmp89 = (tmp84 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(887)
				::zpp_nape::geom::ZPP_Mat23 tmp90 = this->zpp_inner;		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(887)
				tmp90->c = tmp89;
				HX_STACK_LINE(887)
				{
					HX_STACK_LINE(887)
					::zpp_nape::geom::ZPP_Mat23 tmp91 = this->zpp_inner;		HX_STACK_VAR(tmp91,"tmp91");
					HX_STACK_LINE(887)
					::zpp_nape::geom::ZPP_Mat23 _this = tmp91;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(887)
					bool tmp92 = (_this->_invalidate != null());		HX_STACK_VAR(tmp92,"tmp92");
					HX_STACK_LINE(887)
					if ((tmp92)){
						HX_STACK_LINE(887)
						_this->_invalidate();
					}
				}
			}
			HX_STACK_LINE(887)
			::zpp_nape::geom::ZPP_Mat23 tmp81 = this->zpp_inner;		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(887)
			tmp81->c;
		}
		HX_STACK_LINE(888)
		{
			HX_STACK_LINE(888)
			{
				HX_STACK_LINE(888)
				::zpp_nape::geom::ZPP_Mat23 tmp81 = this->zpp_inner;		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(888)
				tmp81->a = a2;
				HX_STACK_LINE(888)
				{
					HX_STACK_LINE(888)
					::zpp_nape::geom::ZPP_Mat23 tmp82 = this->zpp_inner;		HX_STACK_VAR(tmp82,"tmp82");
					HX_STACK_LINE(888)
					::zpp_nape::geom::ZPP_Mat23 _this = tmp82;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(888)
					bool tmp83 = (_this->_invalidate != null());		HX_STACK_VAR(tmp83,"tmp83");
					HX_STACK_LINE(888)
					if ((tmp83)){
						HX_STACK_LINE(888)
						_this->_invalidate();
					}
				}
			}
			HX_STACK_LINE(888)
			::zpp_nape::geom::ZPP_Mat23 tmp81 = this->zpp_inner;		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(888)
			tmp81->a;
		}
		HX_STACK_LINE(889)
		{
			HX_STACK_LINE(889)
			{
				HX_STACK_LINE(889)
				::zpp_nape::geom::ZPP_Mat23 tmp81 = this->zpp_inner;		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(889)
				Float tmp82 = tmp81->d;		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(889)
				Float tmp83 = cos;		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(889)
				Float tmp84 = (tmp82 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(889)
				::zpp_nape::geom::ZPP_Mat23 tmp85 = this->zpp_inner;		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(889)
				Float tmp86 = tmp85->b;		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(889)
				Float tmp87 = sin;		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(889)
				Float tmp88 = (tmp86 * tmp87);		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(889)
				Float tmp89 = (tmp84 - tmp88);		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(889)
				::zpp_nape::geom::ZPP_Mat23 tmp90 = this->zpp_inner;		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(889)
				tmp90->d = tmp89;
				HX_STACK_LINE(889)
				{
					HX_STACK_LINE(889)
					::zpp_nape::geom::ZPP_Mat23 tmp91 = this->zpp_inner;		HX_STACK_VAR(tmp91,"tmp91");
					HX_STACK_LINE(889)
					::zpp_nape::geom::ZPP_Mat23 _this = tmp91;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(889)
					bool tmp92 = (_this->_invalidate != null());		HX_STACK_VAR(tmp92,"tmp92");
					HX_STACK_LINE(889)
					if ((tmp92)){
						HX_STACK_LINE(889)
						_this->_invalidate();
					}
				}
			}
			HX_STACK_LINE(889)
			::zpp_nape::geom::ZPP_Mat23 tmp81 = this->zpp_inner;		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(889)
			tmp81->d;
		}
		HX_STACK_LINE(890)
		{
			HX_STACK_LINE(890)
			{
				HX_STACK_LINE(890)
				::zpp_nape::geom::ZPP_Mat23 tmp81 = this->zpp_inner;		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(890)
				tmp81->b = b2;
				HX_STACK_LINE(890)
				{
					HX_STACK_LINE(890)
					::zpp_nape::geom::ZPP_Mat23 tmp82 = this->zpp_inner;		HX_STACK_VAR(tmp82,"tmp82");
					HX_STACK_LINE(890)
					::zpp_nape::geom::ZPP_Mat23 _this = tmp82;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(890)
					bool tmp83 = (_this->_invalidate != null());		HX_STACK_VAR(tmp83,"tmp83");
					HX_STACK_LINE(890)
					if ((tmp83)){
						HX_STACK_LINE(890)
						_this->_invalidate();
					}
				}
			}
			HX_STACK_LINE(890)
			::zpp_nape::geom::ZPP_Mat23 tmp81 = this->zpp_inner;		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(890)
			tmp81->b;
		}
		HX_STACK_LINE(891)
		{
			HX_STACK_LINE(891)
			::zpp_nape::geom::ZPP_Mat23 tmp81 = this->zpp_inner;		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(891)
			::zpp_nape::geom::ZPP_Mat23 _this = tmp81;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(891)
			bool tmp82 = (_this->_invalidate != null());		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(891)
			if ((tmp82)){
				HX_STACK_LINE(891)
				_this->_invalidate();
			}
		}
	}
	HX_STACK_LINE(893)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Mat23_obj,orthogonalise,return )

::nape::geom::Mat23 Mat23_obj::fromMatrix( ::openfl::_legacy::geom::Matrix matrix){
	HX_STACK_FRAME("nape.geom.Mat23","fromMatrix",0x191db244,"nape.geom.Mat23.fromMatrix","nape/geom/Mat23.hx",451,0xee046d69)
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_LINE(452)
	::openfl::_legacy::geom::Matrix m = matrix;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(453)
	::nape::geom::Mat23 tmp = ::nape::geom::Mat23_obj::__new(m->a,m->c,m->b,m->d,m->tx,m->ty);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(453)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mat23_obj,fromMatrix,return )

::nape::geom::Mat23 Mat23_obj::rotation( Float angle){
	HX_STACK_FRAME("nape.geom.Mat23","rotation",0x4d79d3f7,"nape.geom.Mat23.rotation","nape/geom/Mat23.hx",490,0xee046d69)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(496)
	Float tmp = angle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(496)
	Float tmp1 = ::Math_obj::cos(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(496)
	Float cos = tmp1;		HX_STACK_VAR(cos,"cos");
	HX_STACK_LINE(497)
	Float tmp2 = angle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(497)
	Float tmp3 = ::Math_obj::sin(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(497)
	Float sin = tmp3;		HX_STACK_VAR(sin,"sin");
	HX_STACK_LINE(498)
	Float tmp4 = cos;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(498)
	Float tmp5 = sin;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(498)
	Float tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(498)
	Float tmp7 = sin;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(498)
	Float tmp8 = cos;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(498)
	::nape::geom::Mat23 tmp9 = ::nape::geom::Mat23_obj::__new(tmp4,tmp6,tmp7,tmp8,(int)0,(int)0);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(498)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mat23_obj,rotation,return )

::nape::geom::Mat23 Mat23_obj::translation( Float tx,Float ty){
	HX_STACK_FRAME("nape.geom.Mat23","translation",0x3fd8d3d8,"nape.geom.Mat23.translation","nape/geom/Mat23.hx",513,0xee046d69)
	HX_STACK_ARG(tx,"tx")
	HX_STACK_ARG(ty,"ty")
	HX_STACK_LINE(514)
	::nape::geom::Mat23 tmp = ::nape::geom::Mat23_obj::__new((int)1,(int)0,(int)0,(int)1,tx,ty);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(514)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Mat23_obj,translation,return )

::nape::geom::Mat23 Mat23_obj::scale( Float sx,Float sy){
	HX_STACK_FRAME("nape.geom.Mat23","scale",0x8142ba31,"nape.geom.Mat23.scale","nape/geom/Mat23.hx",529,0xee046d69)
	HX_STACK_ARG(sx,"sx")
	HX_STACK_ARG(sy,"sy")
	HX_STACK_LINE(530)
	::nape::geom::Mat23 tmp = ::nape::geom::Mat23_obj::__new(sx,(int)0,(int)0,sy,(int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(530)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Mat23_obj,scale,return )


Mat23_obj::Mat23_obj()
{
}

void Mat23_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mat23);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void Mat23_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic Mat23_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { if (inCallProp == hx::paccAlways) return get_a(); }
		if (HX_FIELD_EQ(inName,"b") ) { if (inCallProp == hx::paccAlways) return get_b(); }
		if (HX_FIELD_EQ(inName,"c") ) { if (inCallProp == hx::paccAlways) return get_c(); }
		if (HX_FIELD_EQ(inName,"d") ) { if (inCallProp == hx::paccAlways) return get_d(); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { if (inCallProp == hx::paccAlways) return get_tx(); }
		if (HX_FIELD_EQ(inName,"ty") ) { if (inCallProp == hx::paccAlways) return get_ty(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_a") ) { return get_a_dyn(); }
		if (HX_FIELD_EQ(inName,"set_a") ) { return set_a_dyn(); }
		if (HX_FIELD_EQ(inName,"get_b") ) { return get_b_dyn(); }
		if (HX_FIELD_EQ(inName,"set_b") ) { return set_b_dyn(); }
		if (HX_FIELD_EQ(inName,"get_c") ) { return get_c_dyn(); }
		if (HX_FIELD_EQ(inName,"set_c") ) { return set_c_dyn(); }
		if (HX_FIELD_EQ(inName,"get_d") ) { return get_d_dyn(); }
		if (HX_FIELD_EQ(inName,"set_d") ) { return set_d_dyn(); }
		if (HX_FIELD_EQ(inName,"setAs") ) { return setAs_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_tx") ) { return get_tx_dyn(); }
		if (HX_FIELD_EQ(inName,"set_tx") ) { return set_tx_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ty") ) { return get_ty_dyn(); }
		if (HX_FIELD_EQ(inName,"set_ty") ) { return set_ty_dyn(); }
		if (HX_FIELD_EQ(inName,"concat") ) { return concat_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inverse") ) { return inverse_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toMatrix") ) { return toMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"singular") ) { return singular_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"transpose") ) { return transpose_dyn(); }
		if (HX_FIELD_EQ(inName,"transform") ) { return transform_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"orthogonal") ) { return orthogonal_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"determinant") ) { if (inCallProp == hx::paccAlways) return get_determinant(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"orthogonalise") ) { return orthogonalise_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"equiorthogonal") ) { return equiorthogonal_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_determinant") ) { return get_determinant_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"inverseTransform") ) { return inverseTransform_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"equiorthogonalise") ) { return equiorthogonalise_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Mat23_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { outValue = scale_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { outValue = rotation_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromMatrix") ) { outValue = fromMatrix_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"translation") ) { outValue = translation_dyn(); return true;  }
	}
	return false;
}

Dynamic Mat23_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { if (inCallProp == hx::paccAlways) return set_a(inValue); }
		if (HX_FIELD_EQ(inName,"b") ) { if (inCallProp == hx::paccAlways) return set_b(inValue); }
		if (HX_FIELD_EQ(inName,"c") ) { if (inCallProp == hx::paccAlways) return set_c(inValue); }
		if (HX_FIELD_EQ(inName,"d") ) { if (inCallProp == hx::paccAlways) return set_d(inValue); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { if (inCallProp == hx::paccAlways) return set_tx(inValue); }
		if (HX_FIELD_EQ(inName,"ty") ) { if (inCallProp == hx::paccAlways) return set_ty(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::geom::ZPP_Mat23 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Mat23_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("a","\x61","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("c","\x63","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("d","\x64","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("tx","\x84","\x65","\x00","\x00"));
	outFields->push(HX_HCSTRING("ty","\x85","\x65","\x00","\x00"));
	outFields->push(HX_HCSTRING("determinant","\x95","\x5d","\x15","\x32"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_Mat23*/ ,(int)offsetof(Mat23_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("get_a","\x38","\xa5","\x60","\x91"),
	HX_HCSTRING("set_a","\x44","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_b","\x39","\xa5","\x60","\x91"),
	HX_HCSTRING("set_b","\x45","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_c","\x3a","\xa5","\x60","\x91"),
	HX_HCSTRING("set_c","\x46","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_d","\x3b","\xa5","\x60","\x91"),
	HX_HCSTRING("set_d","\x47","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_tx","\xcd","\xfc","\x2f","\xa3"),
	HX_HCSTRING("set_tx","\x41","\x51","\x78","\x6f"),
	HX_HCSTRING("get_ty","\xce","\xfc","\x2f","\xa3"),
	HX_HCSTRING("set_ty","\x42","\x51","\x78","\x6f"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("setAs","\x34","\x81","\x2f","\x7a"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("toMatrix","\x1c","\xde","\x06","\xe3"),
	HX_HCSTRING("get_determinant","\x2c","\x15","\xf7","\xf2"),
	HX_HCSTRING("singular","\xd7","\xa8","\x26","\x57"),
	HX_HCSTRING("inverse","\xb0","\x4b","\xf1","\x3d"),
	HX_HCSTRING("transpose","\x79","\x50","\x2f","\x4c"),
	HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"),
	HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),
	HX_HCSTRING("inverseTransform","\x9c","\xcb","\xa5","\xe7"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("equiorthogonal","\x39","\x5b","\x04","\x99"),
	HX_HCSTRING("orthogonal","\x79","\xf9","\xf3","\x18"),
	HX_HCSTRING("equiorthogonalise","\xa2","\xbf","\xe3","\x2d"),
	HX_HCSTRING("orthogonalise","\x62","\x89","\x58","\xa7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mat23_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mat23_obj::__mClass,"__mClass");
};

#endif

hx::Class Mat23_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromMatrix","\x4b","\x3b","\x0c","\xff"),
	HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"),
	HX_HCSTRING("translation","\xf1","\x30","\xa2","\x8a"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	::String(null()) };

void Mat23_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.geom.Mat23","\xd5","\x84","\xf2","\x77");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Mat23_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Mat23_obj >;
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
} // end namespace geom
