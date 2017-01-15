#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec3
#include <nape/geom/Vec3.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec3
#include <zpp_nape/geom/ZPP_Vec3.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace nape{
namespace geom{

Void Vec3_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z)
{
HX_STACK_FRAME("nape.geom.Vec3","new",0xc5b97ddd,"nape.geom.Vec3.new","nape/geom/Vec3.hx",181,0x02b49bd3)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_z,"z")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float z = __o_z.Default(0);
{
	HX_STACK_LINE(189)
	this->zpp_pool = null();
	HX_STACK_LINE(185)
	this->zpp_inner = null();
	HX_STACK_LINE(361)
	::zpp_nape::geom::ZPP_Vec3 tmp = ::zpp_nape::geom::ZPP_Vec3_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(361)
	this->zpp_inner = tmp;
	HX_STACK_LINE(362)
	::zpp_nape::geom::ZPP_Vec3 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(362)
	tmp1->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(363)
	{
		HX_STACK_LINE(364)
		{
			HX_STACK_LINE(365)
			{
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(365)
					tmp2->x = x;
				}
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					{
						HX_STACK_LINE(365)
						::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(365)
						::zpp_nape::geom::ZPP_Vec3 _this = tmp2;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(365)
						bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(365)
						if ((tmp3)){
							HX_STACK_LINE(365)
							_this->_validate();
						}
					}
					HX_STACK_LINE(365)
					::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(365)
					tmp2->x;
				}
			}
			HX_STACK_LINE(366)
			{
				HX_STACK_LINE(366)
				{
					HX_STACK_LINE(366)
					::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(366)
					tmp2->y = y;
				}
				HX_STACK_LINE(366)
				{
					HX_STACK_LINE(366)
					{
						HX_STACK_LINE(366)
						::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(366)
						::zpp_nape::geom::ZPP_Vec3 _this = tmp2;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(366)
						bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(366)
						if ((tmp3)){
							HX_STACK_LINE(366)
							_this->_validate();
						}
					}
					HX_STACK_LINE(366)
					::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(366)
					tmp2->y;
				}
			}
			HX_STACK_LINE(375)
			{
			}
		}
		HX_STACK_LINE(384)
		{
			HX_STACK_LINE(384)
			{
				HX_STACK_LINE(384)
				::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(384)
				tmp2->z = z;
			}
			HX_STACK_LINE(384)
			{
				HX_STACK_LINE(384)
				{
					HX_STACK_LINE(384)
					::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(384)
					::zpp_nape::geom::ZPP_Vec3 _this = tmp2;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(384)
					bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(384)
					if ((tmp3)){
						HX_STACK_LINE(384)
						_this->_validate();
					}
				}
				HX_STACK_LINE(384)
				::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(384)
				tmp2->z;
			}
		}
	}
}
;
	return null();
}

//Vec3_obj::~Vec3_obj() { }

Dynamic Vec3_obj::__CreateEmpty() { return  new Vec3_obj; }
hx::ObjectPtr< Vec3_obj > Vec3_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z)
{  hx::ObjectPtr< Vec3_obj > _result_ = new Vec3_obj();
	_result_->__construct(__o_x,__o_y,__o_z);
	return _result_;}

Dynamic Vec3_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vec3_obj > _result_ = new Vec3_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Float Vec3_obj::get_x( ){
	HX_STACK_FRAME("nape.geom.Vec3","get_x",0xbdaa6c0c,"nape.geom.Vec3.get_x","nape/geom/Vec3.hx",225,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(231)
	{
		HX_STACK_LINE(231)
		::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(231)
		::zpp_nape::geom::ZPP_Vec3 _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(231)
		bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(231)
		if ((tmp1)){
			HX_STACK_LINE(231)
			_this->_validate();
		}
	}
	HX_STACK_LINE(232)
	::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(232)
	Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(232)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec3_obj,get_x,return )

Float Vec3_obj::set_x( Float x){
	HX_STACK_FRAME("nape.geom.Vec3","set_x",0xa6796218,"nape.geom.Vec3.set_x","nape/geom/Vec3.hx",234,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(235)
	{
		HX_STACK_LINE(246)
		::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(246)
		tmp->x = x;
	}
	HX_STACK_LINE(248)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(248)
	{
		HX_STACK_LINE(248)
		{
			HX_STACK_LINE(248)
			::zpp_nape::geom::ZPP_Vec3 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(248)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(248)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(248)
			if ((tmp2)){
				HX_STACK_LINE(248)
				_this->_validate();
			}
		}
		HX_STACK_LINE(248)
		::zpp_nape::geom::ZPP_Vec3 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(248)
		tmp = tmp1->x;
	}
	HX_STACK_LINE(248)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec3_obj,set_x,return )

Float Vec3_obj::get_y( ){
	HX_STACK_FRAME("nape.geom.Vec3","get_y",0xbdaa6c0d,"nape.geom.Vec3.get_y","nape/geom/Vec3.hx",256,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(262)
	{
		HX_STACK_LINE(262)
		::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(262)
		::zpp_nape::geom::ZPP_Vec3 _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(262)
		bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(262)
		if ((tmp1)){
			HX_STACK_LINE(262)
			_this->_validate();
		}
	}
	HX_STACK_LINE(263)
	::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(263)
	Float tmp1 = tmp->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(263)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec3_obj,get_y,return )

Float Vec3_obj::set_y( Float y){
	HX_STACK_FRAME("nape.geom.Vec3","set_y",0xa6796219,"nape.geom.Vec3.set_y","nape/geom/Vec3.hx",265,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(266)
	{
		HX_STACK_LINE(277)
		::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(277)
		tmp->y = y;
	}
	HX_STACK_LINE(279)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(279)
	{
		HX_STACK_LINE(279)
		{
			HX_STACK_LINE(279)
			::zpp_nape::geom::ZPP_Vec3 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(279)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(279)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(279)
			if ((tmp2)){
				HX_STACK_LINE(279)
				_this->_validate();
			}
		}
		HX_STACK_LINE(279)
		::zpp_nape::geom::ZPP_Vec3 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(279)
		tmp = tmp1->y;
	}
	HX_STACK_LINE(279)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec3_obj,set_y,return )

Float Vec3_obj::get_z( ){
	HX_STACK_FRAME("nape.geom.Vec3","get_z",0xbdaa6c0e,"nape.geom.Vec3.get_z","nape/geom/Vec3.hx",287,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(293)
	{
		HX_STACK_LINE(293)
		::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(293)
		::zpp_nape::geom::ZPP_Vec3 _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(293)
		bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(293)
		if ((tmp1)){
			HX_STACK_LINE(293)
			_this->_validate();
		}
	}
	HX_STACK_LINE(294)
	::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(294)
	Float tmp1 = tmp->z;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(294)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec3_obj,get_z,return )

Float Vec3_obj::set_z( Float z){
	HX_STACK_FRAME("nape.geom.Vec3","set_z",0xa679621a,"nape.geom.Vec3.set_z","nape/geom/Vec3.hx",296,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(z,"z")
	HX_STACK_LINE(297)
	{
		HX_STACK_LINE(308)
		::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(308)
		tmp->z = z;
	}
	HX_STACK_LINE(310)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(310)
	{
		HX_STACK_LINE(310)
		{
			HX_STACK_LINE(310)
			::zpp_nape::geom::ZPP_Vec3 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(310)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(310)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(310)
			if ((tmp2)){
				HX_STACK_LINE(310)
				_this->_validate();
			}
		}
		HX_STACK_LINE(310)
		::zpp_nape::geom::ZPP_Vec3 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(310)
		tmp = tmp1->z;
	}
	HX_STACK_LINE(310)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec3_obj,set_z,return )

Void Vec3_obj::dispose( ){
{
		HX_STACK_FRAME("nape.geom.Vec3","dispose",0xe2a3309c,"nape.geom.Vec3.dispose","nape/geom/Vec3.hx",417,0x02b49bd3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(418)
		::nape::geom::Vec3 o = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(434)
		::nape::geom::Vec3 tmp = ::zpp_nape::util::ZPP_PubPool_obj::poolVec3;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(434)
		o->zpp_pool = tmp;
		HX_STACK_LINE(435)
		::zpp_nape::util::ZPP_PubPool_obj::poolVec3 = o;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vec3_obj,dispose,(void))

Float Vec3_obj::get_length( ){
	HX_STACK_FRAME("nape.geom.Vec3","get_length",0x758ab0d2,"nape.geom.Vec3.get_length","nape/geom/Vec3.hx",457,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(463)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(463)
	{
		HX_STACK_LINE(463)
		{
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_Vec3 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(463)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(463)
			if ((tmp2)){
				HX_STACK_LINE(463)
				_this->_validate();
			}
		}
		HX_STACK_LINE(463)
		::zpp_nape::geom::ZPP_Vec3 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(463)
		tmp = tmp1->x;
	}
	HX_STACK_LINE(463)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(463)
	{
		HX_STACK_LINE(463)
		{
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(463)
			bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(463)
			if ((tmp3)){
				HX_STACK_LINE(463)
				_this->_validate();
			}
		}
		HX_STACK_LINE(463)
		::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(463)
		tmp1 = tmp2->x;
	}
	HX_STACK_LINE(463)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(463)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(463)
	{
		HX_STACK_LINE(463)
		{
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_Vec3 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(463)
			bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(463)
			if ((tmp5)){
				HX_STACK_LINE(463)
				_this->_validate();
			}
		}
		HX_STACK_LINE(463)
		::zpp_nape::geom::ZPP_Vec3 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(463)
		tmp3 = tmp4->y;
	}
	HX_STACK_LINE(463)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(463)
	{
		HX_STACK_LINE(463)
		{
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_Vec3 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(463)
			bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(463)
			if ((tmp6)){
				HX_STACK_LINE(463)
				_this->_validate();
			}
		}
		HX_STACK_LINE(463)
		::zpp_nape::geom::ZPP_Vec3 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(463)
		tmp4 = tmp5->y;
	}
	HX_STACK_LINE(463)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(463)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(463)
	Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(463)
	{
		HX_STACK_LINE(463)
		{
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_Vec3 tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp8;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(463)
			bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(463)
			if ((tmp9)){
				HX_STACK_LINE(463)
				_this->_validate();
			}
		}
		HX_STACK_LINE(463)
		::zpp_nape::geom::ZPP_Vec3 tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(463)
		tmp7 = tmp8->z;
	}
	HX_STACK_LINE(463)
	Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(463)
	{
		HX_STACK_LINE(463)
		{
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_Vec3 tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(463)
			bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(463)
			if ((tmp10)){
				HX_STACK_LINE(463)
				_this->_validate();
			}
		}
		HX_STACK_LINE(463)
		::zpp_nape::geom::ZPP_Vec3 tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(463)
		tmp8 = tmp9->z;
	}
	HX_STACK_LINE(463)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(463)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(463)
	Float tmp11 = ::Math_obj::sqrt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(463)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec3_obj,get_length,return )

Float Vec3_obj::set_length( Float length){
	HX_STACK_FRAME("nape.geom.Vec3","set_length",0x79084f46,"nape.geom.Vec3.set_length","nape/geom/Vec3.hx",465,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(480)
	{
		HX_STACK_LINE(481)
		Float tmp = length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(481)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(481)
		{
			HX_STACK_LINE(481)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(481)
			{
				HX_STACK_LINE(481)
				{
					HX_STACK_LINE(481)
					::zpp_nape::geom::ZPP_Vec3 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(481)
					::zpp_nape::geom::ZPP_Vec3 _this = tmp3;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(481)
					bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(481)
					if ((tmp4)){
						HX_STACK_LINE(481)
						_this->_validate();
					}
				}
				HX_STACK_LINE(481)
				::zpp_nape::geom::ZPP_Vec3 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(481)
				tmp2 = tmp3->x;
			}
			HX_STACK_LINE(481)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(481)
			{
				HX_STACK_LINE(481)
				{
					HX_STACK_LINE(481)
					::zpp_nape::geom::ZPP_Vec3 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(481)
					::zpp_nape::geom::ZPP_Vec3 _this = tmp4;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(481)
					bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(481)
					if ((tmp5)){
						HX_STACK_LINE(481)
						_this->_validate();
					}
				}
				HX_STACK_LINE(481)
				::zpp_nape::geom::ZPP_Vec3 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(481)
				tmp3 = tmp4->x;
			}
			HX_STACK_LINE(481)
			Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(481)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(481)
			{
				HX_STACK_LINE(481)
				{
					HX_STACK_LINE(481)
					::zpp_nape::geom::ZPP_Vec3 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(481)
					::zpp_nape::geom::ZPP_Vec3 _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(481)
					bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(481)
					if ((tmp7)){
						HX_STACK_LINE(481)
						_this->_validate();
					}
				}
				HX_STACK_LINE(481)
				::zpp_nape::geom::ZPP_Vec3 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(481)
				tmp5 = tmp6->y;
			}
			HX_STACK_LINE(481)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(481)
			{
				HX_STACK_LINE(481)
				{
					HX_STACK_LINE(481)
					::zpp_nape::geom::ZPP_Vec3 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(481)
					::zpp_nape::geom::ZPP_Vec3 _this = tmp7;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(481)
					bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(481)
					if ((tmp8)){
						HX_STACK_LINE(481)
						_this->_validate();
					}
				}
				HX_STACK_LINE(481)
				::zpp_nape::geom::ZPP_Vec3 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(481)
				tmp6 = tmp7->y;
			}
			HX_STACK_LINE(481)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(481)
			Float tmp8 = (tmp4 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(481)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(481)
			{
				HX_STACK_LINE(481)
				{
					HX_STACK_LINE(481)
					::zpp_nape::geom::ZPP_Vec3 tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(481)
					::zpp_nape::geom::ZPP_Vec3 _this = tmp10;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(481)
					bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(481)
					if ((tmp11)){
						HX_STACK_LINE(481)
						_this->_validate();
					}
				}
				HX_STACK_LINE(481)
				::zpp_nape::geom::ZPP_Vec3 tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(481)
				tmp9 = tmp10->z;
			}
			HX_STACK_LINE(481)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(481)
			{
				HX_STACK_LINE(481)
				{
					HX_STACK_LINE(481)
					::zpp_nape::geom::ZPP_Vec3 tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(481)
					::zpp_nape::geom::ZPP_Vec3 _this = tmp11;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(481)
					bool tmp12 = (_this->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(481)
					if ((tmp12)){
						HX_STACK_LINE(481)
						_this->_validate();
					}
				}
				HX_STACK_LINE(481)
				::zpp_nape::geom::ZPP_Vec3 tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(481)
				tmp10 = tmp11->z;
			}
			HX_STACK_LINE(481)
			Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(481)
			Float tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(481)
			tmp1 = ::Math_obj::sqrt(tmp12);
		}
		HX_STACK_LINE(481)
		Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(481)
		Float t = tmp2;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(482)
		{
			HX_STACK_LINE(483)
			Float t1 = t;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(492)
			{
				HX_STACK_LINE(492)
				::nape::geom::Vec3 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(492)
				{
					HX_STACK_LINE(492)
					Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(492)
					{
						HX_STACK_LINE(492)
						{
							HX_STACK_LINE(492)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(492)
							bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(492)
							if ((tmp4)){
								HX_STACK_LINE(492)
								_this->_validate();
							}
						}
						HX_STACK_LINE(492)
						tmp3 = _g->zpp_inner->x;
					}
					HX_STACK_LINE(492)
					Float tmp4 = t1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(492)
					Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(492)
					Float x = tmp5;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(492)
					_g->zpp_inner->x = x;
					HX_STACK_LINE(492)
					{
						HX_STACK_LINE(492)
						{
							HX_STACK_LINE(492)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(492)
							bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(492)
							if ((tmp6)){
								HX_STACK_LINE(492)
								_this->_validate();
							}
						}
						HX_STACK_LINE(492)
						_g->zpp_inner->x;
					}
				}
			}
			HX_STACK_LINE(493)
			{
				HX_STACK_LINE(493)
				::nape::geom::Vec3 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(493)
				{
					HX_STACK_LINE(493)
					Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(493)
					{
						HX_STACK_LINE(493)
						{
							HX_STACK_LINE(493)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(493)
							bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(493)
							if ((tmp4)){
								HX_STACK_LINE(493)
								_this->_validate();
							}
						}
						HX_STACK_LINE(493)
						tmp3 = _g->zpp_inner->y;
					}
					HX_STACK_LINE(493)
					Float tmp4 = t1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(493)
					Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(493)
					Float y = tmp5;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(493)
					_g->zpp_inner->y = y;
					HX_STACK_LINE(493)
					{
						HX_STACK_LINE(493)
						{
							HX_STACK_LINE(493)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(493)
							bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(493)
							if ((tmp6)){
								HX_STACK_LINE(493)
								_this->_validate();
							}
						}
						HX_STACK_LINE(493)
						_g->zpp_inner->y;
					}
				}
			}
		}
		HX_STACK_LINE(495)
		{
			HX_STACK_LINE(495)
			::nape::geom::Vec3 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(495)
			{
				HX_STACK_LINE(495)
				Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(495)
				{
					HX_STACK_LINE(495)
					{
						HX_STACK_LINE(495)
						::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(495)
						bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(495)
						if ((tmp4)){
							HX_STACK_LINE(495)
							_this->_validate();
						}
					}
					HX_STACK_LINE(495)
					tmp3 = _g->zpp_inner->z;
				}
				HX_STACK_LINE(495)
				Float tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(495)
				Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(495)
				Float z = tmp5;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(495)
				_g->zpp_inner->z = z;
				HX_STACK_LINE(495)
				{
					HX_STACK_LINE(495)
					{
						HX_STACK_LINE(495)
						::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(495)
						bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(495)
						if ((tmp6)){
							HX_STACK_LINE(495)
							_this->_validate();
						}
					}
					HX_STACK_LINE(495)
					_g->zpp_inner->z;
				}
			}
		}
	}
	HX_STACK_LINE(498)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(498)
	{
		HX_STACK_LINE(498)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			{
				HX_STACK_LINE(498)
				::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(498)
				::zpp_nape::geom::ZPP_Vec3 _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(498)
				bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(498)
				if ((tmp3)){
					HX_STACK_LINE(498)
					_this->_validate();
				}
			}
			HX_STACK_LINE(498)
			::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(498)
			tmp1 = tmp2->x;
		}
		HX_STACK_LINE(498)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			{
				HX_STACK_LINE(498)
				::zpp_nape::geom::ZPP_Vec3 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(498)
				::zpp_nape::geom::ZPP_Vec3 _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(498)
				bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(498)
				if ((tmp4)){
					HX_STACK_LINE(498)
					_this->_validate();
				}
			}
			HX_STACK_LINE(498)
			::zpp_nape::geom::ZPP_Vec3 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(498)
			tmp2 = tmp3->x;
		}
		HX_STACK_LINE(498)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(498)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			{
				HX_STACK_LINE(498)
				::zpp_nape::geom::ZPP_Vec3 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(498)
				::zpp_nape::geom::ZPP_Vec3 _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(498)
				bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(498)
				if ((tmp6)){
					HX_STACK_LINE(498)
					_this->_validate();
				}
			}
			HX_STACK_LINE(498)
			::zpp_nape::geom::ZPP_Vec3 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(498)
			tmp4 = tmp5->y;
		}
		HX_STACK_LINE(498)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			{
				HX_STACK_LINE(498)
				::zpp_nape::geom::ZPP_Vec3 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(498)
				::zpp_nape::geom::ZPP_Vec3 _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(498)
				bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(498)
				if ((tmp7)){
					HX_STACK_LINE(498)
					_this->_validate();
				}
			}
			HX_STACK_LINE(498)
			::zpp_nape::geom::ZPP_Vec3 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(498)
			tmp5 = tmp6->y;
		}
		HX_STACK_LINE(498)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(498)
		Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(498)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			{
				HX_STACK_LINE(498)
				::zpp_nape::geom::ZPP_Vec3 tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(498)
				::zpp_nape::geom::ZPP_Vec3 _this = tmp9;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(498)
				bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(498)
				if ((tmp10)){
					HX_STACK_LINE(498)
					_this->_validate();
				}
			}
			HX_STACK_LINE(498)
			::zpp_nape::geom::ZPP_Vec3 tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(498)
			tmp8 = tmp9->z;
		}
		HX_STACK_LINE(498)
		Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			{
				HX_STACK_LINE(498)
				::zpp_nape::geom::ZPP_Vec3 tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(498)
				::zpp_nape::geom::ZPP_Vec3 _this = tmp10;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(498)
				bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(498)
				if ((tmp11)){
					HX_STACK_LINE(498)
					_this->_validate();
				}
			}
			HX_STACK_LINE(498)
			::zpp_nape::geom::ZPP_Vec3 tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(498)
			tmp9 = tmp10->z;
		}
		HX_STACK_LINE(498)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(498)
		Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(498)
		tmp = ::Math_obj::sqrt(tmp11);
	}
	HX_STACK_LINE(498)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec3_obj,set_length,return )

Float Vec3_obj::lsq( ){
	HX_STACK_FRAME("nape.geom.Vec3","lsq",0xc5b80587,"nape.geom.Vec3.lsq","nape/geom/Vec3.hx",507,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(513)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			::zpp_nape::geom::ZPP_Vec3 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(513)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(513)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(513)
			if ((tmp2)){
				HX_STACK_LINE(513)
				_this->_validate();
			}
		}
		HX_STACK_LINE(513)
		::zpp_nape::geom::ZPP_Vec3 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(513)
		tmp = tmp1->x;
	}
	HX_STACK_LINE(513)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(513)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(513)
			bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(513)
			if ((tmp3)){
				HX_STACK_LINE(513)
				_this->_validate();
			}
		}
		HX_STACK_LINE(513)
		::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(513)
		tmp1 = tmp2->x;
	}
	HX_STACK_LINE(513)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(513)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			::zpp_nape::geom::ZPP_Vec3 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(513)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(513)
			bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(513)
			if ((tmp5)){
				HX_STACK_LINE(513)
				_this->_validate();
			}
		}
		HX_STACK_LINE(513)
		::zpp_nape::geom::ZPP_Vec3 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(513)
		tmp3 = tmp4->y;
	}
	HX_STACK_LINE(513)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			::zpp_nape::geom::ZPP_Vec3 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(513)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(513)
			bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(513)
			if ((tmp6)){
				HX_STACK_LINE(513)
				_this->_validate();
			}
		}
		HX_STACK_LINE(513)
		::zpp_nape::geom::ZPP_Vec3 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(513)
		tmp4 = tmp5->y;
	}
	HX_STACK_LINE(513)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(513)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(513)
	Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			::zpp_nape::geom::ZPP_Vec3 tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(513)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp8;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(513)
			bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(513)
			if ((tmp9)){
				HX_STACK_LINE(513)
				_this->_validate();
			}
		}
		HX_STACK_LINE(513)
		::zpp_nape::geom::ZPP_Vec3 tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(513)
		tmp7 = tmp8->z;
	}
	HX_STACK_LINE(513)
	Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			::zpp_nape::geom::ZPP_Vec3 tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(513)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(513)
			bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(513)
			if ((tmp10)){
				HX_STACK_LINE(513)
				_this->_validate();
			}
		}
		HX_STACK_LINE(513)
		::zpp_nape::geom::ZPP_Vec3 tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(513)
		tmp8 = tmp9->z;
	}
	HX_STACK_LINE(513)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(513)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(513)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec3_obj,lsq,return )

::nape::geom::Vec3 Vec3_obj::set( ::nape::geom::Vec3 vector){
	HX_STACK_FRAME("nape.geom.Vec3","set",0xc5bd491f,"nape.geom.Vec3.set","nape/geom/Vec3.hx",524,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_LINE(540)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(540)
	{
		HX_STACK_LINE(540)
		{
			HX_STACK_LINE(540)
			::zpp_nape::geom::ZPP_Vec3 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(540)
			bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(540)
			if ((tmp1)){
				HX_STACK_LINE(540)
				_this->_validate();
			}
		}
		HX_STACK_LINE(540)
		tmp = vector->zpp_inner->x;
	}
	HX_STACK_LINE(540)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(540)
	{
		HX_STACK_LINE(540)
		{
			HX_STACK_LINE(540)
			::zpp_nape::geom::ZPP_Vec3 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(540)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(540)
			if ((tmp2)){
				HX_STACK_LINE(540)
				_this->_validate();
			}
		}
		HX_STACK_LINE(540)
		tmp1 = vector->zpp_inner->y;
	}
	HX_STACK_LINE(540)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(540)
	{
		HX_STACK_LINE(540)
		{
			HX_STACK_LINE(540)
			::zpp_nape::geom::ZPP_Vec3 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(540)
			bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(540)
			if ((tmp3)){
				HX_STACK_LINE(540)
				_this->_validate();
			}
		}
		HX_STACK_LINE(540)
		tmp2 = vector->zpp_inner->z;
	}
	HX_STACK_LINE(540)
	::nape::geom::Vec3 tmp3 = this->setxyz(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(540)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec3_obj,set,return )

::nape::geom::Vec3 Vec3_obj::setxyz( Float x,Float y,Float z){
	HX_STACK_FRAME("nape.geom.Vec3","setxyz",0x03cf6c9a,"nape.geom.Vec3.setxyz","nape/geom/Vec3.hx",552,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
	HX_STACK_LINE(558)
	{
		HX_STACK_LINE(559)
		{
			HX_STACK_LINE(560)
			{
				HX_STACK_LINE(560)
				{
					HX_STACK_LINE(560)
					::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(560)
					tmp->x = x;
				}
				HX_STACK_LINE(560)
				{
					HX_STACK_LINE(560)
					{
						HX_STACK_LINE(560)
						::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(560)
						::zpp_nape::geom::ZPP_Vec3 _this = tmp;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(560)
						bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(560)
						if ((tmp1)){
							HX_STACK_LINE(560)
							_this->_validate();
						}
					}
					HX_STACK_LINE(560)
					::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(560)
					tmp->x;
				}
			}
			HX_STACK_LINE(561)
			{
				HX_STACK_LINE(561)
				{
					HX_STACK_LINE(561)
					::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(561)
					tmp->y = y;
				}
				HX_STACK_LINE(561)
				{
					HX_STACK_LINE(561)
					{
						HX_STACK_LINE(561)
						::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(561)
						::zpp_nape::geom::ZPP_Vec3 _this = tmp;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(561)
						bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(561)
						if ((tmp1)){
							HX_STACK_LINE(561)
							_this->_validate();
						}
					}
					HX_STACK_LINE(561)
					::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(561)
					tmp->y;
				}
			}
			HX_STACK_LINE(570)
			{
			}
		}
		HX_STACK_LINE(579)
		{
			HX_STACK_LINE(579)
			{
				HX_STACK_LINE(579)
				::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(579)
				tmp->z = z;
			}
			HX_STACK_LINE(579)
			{
				HX_STACK_LINE(579)
				{
					HX_STACK_LINE(579)
					::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(579)
					::zpp_nape::geom::ZPP_Vec3 _this = tmp;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(579)
					bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(579)
					if ((tmp1)){
						HX_STACK_LINE(579)
						_this->_validate();
					}
				}
				HX_STACK_LINE(579)
				::zpp_nape::geom::ZPP_Vec3 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(579)
				tmp->z;
			}
		}
	}
	HX_STACK_LINE(581)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(Vec3_obj,setxyz,return )

::nape::geom::Vec2 Vec3_obj::xy( hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec3","xy",0x83c1ba24,"nape.geom.Vec3.xy","nape/geom/Vec3.hx",597,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(603)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(603)
		{
			HX_STACK_LINE(603)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(603)
			{
				HX_STACK_LINE(603)
				{
					HX_STACK_LINE(603)
					::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(603)
					::zpp_nape::geom::ZPP_Vec3 _this = tmp2;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(603)
					bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(603)
					if ((tmp3)){
						HX_STACK_LINE(603)
						_this->_validate();
					}
				}
				HX_STACK_LINE(603)
				::zpp_nape::geom::ZPP_Vec3 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(603)
				tmp1 = tmp2->x;
			}
			HX_STACK_LINE(603)
			Float x = tmp1;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(603)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(603)
			{
				HX_STACK_LINE(603)
				{
					HX_STACK_LINE(603)
					::zpp_nape::geom::ZPP_Vec3 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(603)
					::zpp_nape::geom::ZPP_Vec3 _this = tmp3;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(603)
					bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(603)
					if ((tmp4)){
						HX_STACK_LINE(603)
						_this->_validate();
					}
				}
				HX_STACK_LINE(603)
				::zpp_nape::geom::ZPP_Vec3 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(603)
				tmp2 = tmp3->y;
			}
			HX_STACK_LINE(603)
			Float y = tmp2;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(603)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(603)
			{
				HX_STACK_LINE(603)
				::nape::geom::Vec2 tmp3 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(603)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(603)
				if ((tmp4)){
					HX_STACK_LINE(603)
					::nape::geom::Vec2 tmp5 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(603)
					ret = tmp5;
				}
				else{
					HX_STACK_LINE(603)
					::nape::geom::Vec2 tmp5 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(603)
					ret = tmp5;
					HX_STACK_LINE(603)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(603)
					ret->zpp_pool = null();
				}
			}
			HX_STACK_LINE(603)
			bool tmp3 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(603)
			if ((tmp3)){
				HX_STACK_LINE(603)
				::zpp_nape::geom::ZPP_Vec2 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(603)
				{
					HX_STACK_LINE(603)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(603)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(603)
					{
						HX_STACK_LINE(603)
						::zpp_nape::geom::ZPP_Vec2 tmp5 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(603)
						bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(603)
						if ((tmp6)){
							HX_STACK_LINE(603)
							::zpp_nape::geom::ZPP_Vec2 tmp7 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(603)
							ret1 = tmp7;
						}
						else{
							HX_STACK_LINE(603)
							::zpp_nape::geom::ZPP_Vec2 tmp7 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(603)
							ret1 = tmp7;
							HX_STACK_LINE(603)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(603)
							ret1->next = null();
						}
						HX_STACK_LINE(603)
						ret1->weak = false;
					}
					HX_STACK_LINE(603)
					ret1->_immutable = immutable;
					HX_STACK_LINE(603)
					{
						HX_STACK_LINE(603)
						ret1->x = x;
						HX_STACK_LINE(603)
						ret1->y = y;
						HX_STACK_LINE(603)
						{
						}
					}
					HX_STACK_LINE(603)
					tmp4 = ret1;
				}
				HX_STACK_LINE(603)
				ret->zpp_inner = tmp4;
				HX_STACK_LINE(603)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(603)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(603)
				{
					HX_STACK_LINE(603)
					{
						HX_STACK_LINE(603)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(603)
						bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(603)
						if ((tmp5)){
							HX_STACK_LINE(603)
							_this->_validate();
						}
					}
					HX_STACK_LINE(603)
					tmp4 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(603)
				Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(603)
				bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(603)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(603)
				if ((tmp6)){
					HX_STACK_LINE(603)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(603)
					{
						HX_STACK_LINE(603)
						{
							HX_STACK_LINE(603)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(603)
							bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(603)
							bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(603)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(603)
							if ((tmp11)){
								HX_STACK_LINE(603)
								_this->_validate();
							}
						}
						HX_STACK_LINE(603)
						Float tmp9 = ret->zpp_inner->y;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(603)
						tmp8 = tmp9;
					}
					HX_STACK_LINE(603)
					Float tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(603)
					tmp7 = (tmp8 == tmp9);
				}
				else{
					HX_STACK_LINE(603)
					tmp7 = false;
				}
				HX_STACK_LINE(603)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(603)
				if ((tmp8)){
					HX_STACK_LINE(603)
					{
						HX_STACK_LINE(603)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(603)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(603)
						{
						}
					}
					HX_STACK_LINE(603)
					{
						HX_STACK_LINE(603)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(603)
						bool tmp9 = (_this->_invalidate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(603)
						if ((tmp9)){
							HX_STACK_LINE(603)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = _this;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(603)
							_this->_invalidate(tmp10);
						}
					}
				}
				HX_STACK_LINE(603)
				ret;
			}
			HX_STACK_LINE(603)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(603)
			tmp = ret;
		}
		HX_STACK_LINE(603)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Vec3_obj,xy,return )

::String Vec3_obj::toString( ){
	HX_STACK_FRAME("nape.geom.Vec3","toString",0x7cf21e0f,"nape.geom.Vec3.toString","nape/geom/Vec3.hx",608,0x02b49bd3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(614)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(614)
	{
		HX_STACK_LINE(614)
		{
			HX_STACK_LINE(614)
			::zpp_nape::geom::ZPP_Vec3 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(614)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(614)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(614)
			if ((tmp2)){
				HX_STACK_LINE(614)
				_this->_validate();
			}
		}
		HX_STACK_LINE(614)
		::zpp_nape::geom::ZPP_Vec3 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(614)
		tmp = tmp1->x;
	}
	HX_STACK_LINE(614)
	::String tmp1 = (HX_HCSTRING("{ x: ","\xf9","\x6e","\xcb","\xe7") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(614)
	::String tmp2 = (tmp1 + HX_HCSTRING(" y: ","\x3f","\xd7","\x82","\x15"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(614)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(614)
	{
		HX_STACK_LINE(614)
		{
			HX_STACK_LINE(614)
			::zpp_nape::geom::ZPP_Vec3 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(614)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(614)
			bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(614)
			if ((tmp5)){
				HX_STACK_LINE(614)
				_this->_validate();
			}
		}
		HX_STACK_LINE(614)
		::zpp_nape::geom::ZPP_Vec3 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(614)
		tmp3 = tmp4->y;
	}
	HX_STACK_LINE(614)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(614)
	::String tmp5 = (tmp4 + HX_HCSTRING(" z: ","\x80","\x99","\x83","\x15"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(614)
	Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(614)
	{
		HX_STACK_LINE(614)
		{
			HX_STACK_LINE(614)
			::zpp_nape::geom::ZPP_Vec3 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(614)
			::zpp_nape::geom::ZPP_Vec3 _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(614)
			bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(614)
			if ((tmp8)){
				HX_STACK_LINE(614)
				_this->_validate();
			}
		}
		HX_STACK_LINE(614)
		::zpp_nape::geom::ZPP_Vec3 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(614)
		tmp6 = tmp7->z;
	}
	HX_STACK_LINE(614)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(614)
	::String tmp8 = (tmp7 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(614)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec3_obj,toString,return )

::nape::geom::Vec3 Vec3_obj::get( hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float z = __o_z.Default(0);
	HX_STACK_FRAME("nape.geom.Vec3","get",0xc5b42e13,"nape.geom.Vec3.get","nape/geom/Vec3.hx",322,0x02b49bd3)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
{
		HX_STACK_LINE(323)
		::nape::geom::Vec3 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(324)
		{
			HX_STACK_LINE(325)
			::nape::geom::Vec3 tmp = ::zpp_nape::util::ZPP_PubPool_obj::poolVec3;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(325)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(325)
			if ((tmp1)){
				HX_STACK_LINE(326)
				::nape::geom::Vec3 tmp2 = ::nape::geom::Vec3_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(326)
				ret = tmp2;
			}
			else{
				HX_STACK_LINE(332)
				::nape::geom::Vec3 tmp2 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec3;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(332)
				ret = tmp2;
				HX_STACK_LINE(333)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec3 = ret->zpp_pool;
				HX_STACK_LINE(334)
				ret->zpp_pool = null();
			}
		}
		HX_STACK_LINE(344)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(344)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(344)
		Float tmp2 = z;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(344)
		ret->setxyz(tmp,tmp1,tmp2);
		HX_STACK_LINE(345)
		ret->zpp_inner->immutable = false;
		HX_STACK_LINE(346)
		ret->zpp_inner->_validate = null();
		HX_STACK_LINE(347)
		::nape::geom::Vec3 tmp3 = ret;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(347)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vec3_obj,get,return )


Vec3_obj::Vec3_obj()
{
}

void Vec3_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Vec3);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_MEMBER_NAME(zpp_pool,"zpp_pool");
	HX_MARK_END_CLASS();
}

void Vec3_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_VISIT_MEMBER_NAME(zpp_pool,"zpp_pool");
}

Dynamic Vec3_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return get_y(); }
		if (HX_FIELD_EQ(inName,"z") ) { if (inCallProp == hx::paccAlways) return get_z(); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"xy") ) { return xy_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"lsq") ) { return lsq_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"get_z") ) { return get_z_dyn(); }
		if (HX_FIELD_EQ(inName,"set_z") ) { return set_z_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		if (HX_FIELD_EQ(inName,"setxyz") ) { return setxyz_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return set_length_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Vec3_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
	}
	return false;
}

Dynamic Vec3_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue); }
		if (HX_FIELD_EQ(inName,"z") ) { if (inCallProp == hx::paccAlways) return set_z(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return set_length(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::nape::geom::Vec3 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::geom::ZPP_Vec3 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Vec3_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_Vec3*/ ,(int)offsetof(Vec3_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{hx::fsObject /*::nape::geom::Vec3*/ ,(int)offsetof(Vec3_obj,zpp_pool),HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_z","\x51","\xa5","\x60","\x91"),
	HX_HCSTRING("set_z","\x5d","\x9b","\x2f","\x7a"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	HX_HCSTRING("lsq","\x0a","\x58","\x52","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("setxyz","\xf7","\x4d","\x8b","\x6f"),
	HX_HCSTRING("xy","\x01","\x69","\x00","\x00"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vec3_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vec3_obj::__mClass,"__mClass");
};

#endif

hx::Class Vec3_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

void Vec3_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.geom.Vec3","\x6b","\x4b","\x9c","\xff");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Vec3_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Vec3_obj >;
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
