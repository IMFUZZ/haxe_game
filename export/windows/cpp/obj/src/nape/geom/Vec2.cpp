#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace nape{
namespace geom{

Void Vec2_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y)
{
HX_STACK_FRAME("nape.geom.Vec2","new",0x3252e95c,"nape.geom.Vec2.new","nape/geom/Vec2.hx",204,0x020b6534)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
{
	HX_STACK_LINE(212)
	this->zpp_pool = null();
	HX_STACK_LINE(208)
	this->zpp_inner = null();
	HX_STACK_LINE(406)
	::zpp_nape::geom::ZPP_Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(406)
	{
		HX_STACK_LINE(406)
		bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
		HX_STACK_LINE(406)
		::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(406)
		{
			HX_STACK_LINE(406)
			::zpp_nape::geom::ZPP_Vec2 tmp1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(406)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(406)
			if ((tmp2)){
				HX_STACK_LINE(406)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(406)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(406)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(406)
				ret = tmp3;
				HX_STACK_LINE(406)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
				HX_STACK_LINE(406)
				ret->next = null();
			}
			HX_STACK_LINE(406)
			ret->weak = false;
		}
		HX_STACK_LINE(406)
		ret->_immutable = immutable;
		HX_STACK_LINE(406)
		{
			HX_STACK_LINE(406)
			ret->x = x;
			HX_STACK_LINE(406)
			ret->y = y;
			HX_STACK_LINE(406)
			{
			}
		}
		HX_STACK_LINE(406)
		tmp = ret;
	}
	HX_STACK_LINE(406)
	this->zpp_inner = tmp;
	HX_STACK_LINE(407)
	::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(407)
	tmp1->outer = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//Vec2_obj::~Vec2_obj() { }

Dynamic Vec2_obj::__CreateEmpty() { return  new Vec2_obj; }
hx::ObjectPtr< Vec2_obj > Vec2_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y)
{  hx::ObjectPtr< Vec2_obj > _result_ = new Vec2_obj();
	_result_->__construct(__o_x,__o_y);
	return _result_;}

Dynamic Vec2_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vec2_obj > _result_ = new Vec2_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Vec2_obj::dispose( ){
{
		HX_STACK_FRAME("nape.geom.Vec2","dispose",0x0fb1c79b,"nape.geom.Vec2.dispose","nape/geom/Vec2.hx",328,0x020b6534)
		HX_STACK_THIS(this)
		HX_STACK_LINE(340)
		::zpp_nape::geom::ZPP_Vec2 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(340)
		::zpp_nape::geom::ZPP_Vec2 inner = tmp;		HX_STACK_VAR(inner,"inner");
		HX_STACK_LINE(341)
		::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(341)
		tmp1->outer = null();
		HX_STACK_LINE(342)
		this->zpp_inner = null();
		HX_STACK_LINE(343)
		{
			HX_STACK_LINE(344)
			::nape::geom::Vec2 o = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(360)
			::nape::geom::Vec2 tmp2 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(360)
			o->zpp_pool = tmp2;
			HX_STACK_LINE(361)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
		}
		HX_STACK_LINE(370)
		{
			HX_STACK_LINE(371)
			::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(380)
			{
				HX_STACK_LINE(380)
				bool tmp2 = (o->outer != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(380)
				if ((tmp2)){
					HX_STACK_LINE(380)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(380)
					o->outer = null();
				}
				HX_STACK_LINE(380)
				o->_isimmutable = null();
				HX_STACK_LINE(380)
				o->_validate = null();
				HX_STACK_LINE(380)
				o->_invalidate = null();
			}
			HX_STACK_LINE(381)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(381)
			o->next = tmp2;
			HX_STACK_LINE(382)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2_obj,dispose,(void))

::nape::geom::Vec2 Vec2_obj::copy( hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec2","copy",0xcefb7f39,"nape.geom.Vec2.copy","nape/geom/Vec2.hx",425,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(431)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(431)
		{
			HX_STACK_LINE(431)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(431)
			{
				HX_STACK_LINE(431)
				{
					HX_STACK_LINE(431)
					::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(431)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(431)
					bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(431)
					if ((tmp3)){
						HX_STACK_LINE(431)
						_this->_validate();
					}
				}
				HX_STACK_LINE(431)
				::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(431)
				tmp1 = tmp2->x;
			}
			HX_STACK_LINE(431)
			Float x = tmp1;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(431)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(431)
			{
				HX_STACK_LINE(431)
				{
					HX_STACK_LINE(431)
					::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(431)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(431)
					bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(431)
					if ((tmp4)){
						HX_STACK_LINE(431)
						_this->_validate();
					}
				}
				HX_STACK_LINE(431)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(431)
				tmp2 = tmp3->y;
			}
			HX_STACK_LINE(431)
			Float y = tmp2;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(431)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(431)
			{
				HX_STACK_LINE(431)
				::nape::geom::Vec2 tmp3 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(431)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(431)
				if ((tmp4)){
					HX_STACK_LINE(431)
					::nape::geom::Vec2 tmp5 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(431)
					ret = tmp5;
				}
				else{
					HX_STACK_LINE(431)
					::nape::geom::Vec2 tmp5 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(431)
					ret = tmp5;
					HX_STACK_LINE(431)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(431)
					ret->zpp_pool = null();
				}
			}
			HX_STACK_LINE(431)
			bool tmp3 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(431)
			if ((tmp3)){
				HX_STACK_LINE(431)
				::zpp_nape::geom::ZPP_Vec2 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(431)
				{
					HX_STACK_LINE(431)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(431)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(431)
					{
						HX_STACK_LINE(431)
						::zpp_nape::geom::ZPP_Vec2 tmp5 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(431)
						bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(431)
						if ((tmp6)){
							HX_STACK_LINE(431)
							::zpp_nape::geom::ZPP_Vec2 tmp7 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(431)
							ret1 = tmp7;
						}
						else{
							HX_STACK_LINE(431)
							::zpp_nape::geom::ZPP_Vec2 tmp7 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(431)
							ret1 = tmp7;
							HX_STACK_LINE(431)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(431)
							ret1->next = null();
						}
						HX_STACK_LINE(431)
						ret1->weak = false;
					}
					HX_STACK_LINE(431)
					ret1->_immutable = immutable;
					HX_STACK_LINE(431)
					{
						HX_STACK_LINE(431)
						ret1->x = x;
						HX_STACK_LINE(431)
						ret1->y = y;
						HX_STACK_LINE(431)
						{
						}
					}
					HX_STACK_LINE(431)
					tmp4 = ret1;
				}
				HX_STACK_LINE(431)
				ret->zpp_inner = tmp4;
				HX_STACK_LINE(431)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(431)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(431)
				{
					HX_STACK_LINE(431)
					{
						HX_STACK_LINE(431)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(431)
						bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(431)
						if ((tmp5)){
							HX_STACK_LINE(431)
							_this->_validate();
						}
					}
					HX_STACK_LINE(431)
					tmp4 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(431)
				Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(431)
				bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(431)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(431)
				if ((tmp6)){
					HX_STACK_LINE(431)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(431)
					{
						HX_STACK_LINE(431)
						{
							HX_STACK_LINE(431)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(431)
							bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(431)
							bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(431)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(431)
							if ((tmp11)){
								HX_STACK_LINE(431)
								_this->_validate();
							}
						}
						HX_STACK_LINE(431)
						Float tmp9 = ret->zpp_inner->y;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(431)
						tmp8 = tmp9;
					}
					HX_STACK_LINE(431)
					Float tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(431)
					tmp7 = (tmp8 == tmp9);
				}
				else{
					HX_STACK_LINE(431)
					tmp7 = false;
				}
				HX_STACK_LINE(431)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(431)
				if ((tmp8)){
					HX_STACK_LINE(431)
					{
						HX_STACK_LINE(431)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(431)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(431)
						{
						}
					}
					HX_STACK_LINE(431)
					{
						HX_STACK_LINE(431)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(431)
						bool tmp9 = (_this->_invalidate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(431)
						if ((tmp9)){
							HX_STACK_LINE(431)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = _this;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(431)
							_this->_invalidate(tmp10);
						}
					}
				}
				HX_STACK_LINE(431)
				ret;
			}
			HX_STACK_LINE(431)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(431)
			tmp = ret;
		}
		HX_STACK_LINE(431)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,copy,return )

::openfl::_legacy::geom::Point Vec2_obj::toPoint( ::openfl::_legacy::geom::Point output){
	HX_STACK_FRAME("nape.geom.Vec2","toPoint",0xe77947d1,"nape.geom.Vec2.toPoint","nape/geom/Vec2.hx",475,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(481)
	bool tmp = (output == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(481)
	if ((tmp)){
		HX_STACK_LINE(481)
		::openfl::_legacy::geom::Point tmp1 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(481)
		output = tmp1;
	}
	HX_STACK_LINE(482)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(482)
	{
		HX_STACK_LINE(482)
		{
			HX_STACK_LINE(482)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(482)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(482)
			bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(482)
			if ((tmp3)){
				HX_STACK_LINE(482)
				_this->_validate();
			}
		}
		HX_STACK_LINE(482)
		::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(482)
		tmp1 = tmp2->x;
	}
	HX_STACK_LINE(482)
	output->x = tmp1;
	HX_STACK_LINE(483)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(483)
	{
		HX_STACK_LINE(483)
		{
			HX_STACK_LINE(483)
			::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(483)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(483)
			bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(483)
			if ((tmp4)){
				HX_STACK_LINE(483)
				_this->_validate();
			}
		}
		HX_STACK_LINE(483)
		::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(483)
		tmp2 = tmp3->y;
	}
	HX_STACK_LINE(483)
	output->y = tmp2;
	HX_STACK_LINE(484)
	::openfl::_legacy::geom::Point tmp3 = output;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(484)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,toPoint,return )

Float Vec2_obj::get_x( ){
	HX_STACK_FRAME("nape.geom.Vec2","get_x",0x9414f54b,"nape.geom.Vec2.get_x","nape/geom/Vec2.hx",523,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_LINE(529)
	{
		HX_STACK_LINE(529)
		::zpp_nape::geom::ZPP_Vec2 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(529)
		::zpp_nape::geom::ZPP_Vec2 _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(529)
		bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(529)
		if ((tmp1)){
			HX_STACK_LINE(529)
			_this->_validate();
		}
	}
	HX_STACK_LINE(530)
	::zpp_nape::geom::ZPP_Vec2 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(530)
	Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(530)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2_obj,get_x,return )

Float Vec2_obj::set_x( Float x){
	HX_STACK_FRAME("nape.geom.Vec2","set_x",0x7ce3eb57,"nape.geom.Vec2.set_x","nape/geom/Vec2.hx",532,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(533)
	{
		HX_STACK_LINE(540)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(540)
		{
			HX_STACK_LINE(540)
			{
				HX_STACK_LINE(540)
				::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(540)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(540)
				bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(540)
				if ((tmp2)){
					HX_STACK_LINE(540)
					_this->_validate();
				}
			}
			HX_STACK_LINE(540)
			::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(540)
			tmp = tmp1->x;
		}
		HX_STACK_LINE(540)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(540)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(540)
		if ((tmp2)){
			HX_STACK_LINE(546)
			::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(546)
			tmp3->x = x;
			HX_STACK_LINE(547)
			{
				HX_STACK_LINE(547)
				::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(547)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(547)
				bool tmp5 = (_this->_invalidate != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(547)
				if ((tmp5)){
					HX_STACK_LINE(547)
					::zpp_nape::geom::ZPP_Vec2 tmp6 = _this;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(547)
					_this->_invalidate(tmp6);
				}
			}
		}
	}
	HX_STACK_LINE(550)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(550)
	{
		HX_STACK_LINE(550)
		{
			HX_STACK_LINE(550)
			::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(550)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(550)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(550)
			if ((tmp2)){
				HX_STACK_LINE(550)
				_this->_validate();
			}
		}
		HX_STACK_LINE(550)
		::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(550)
		tmp = tmp1->x;
	}
	HX_STACK_LINE(550)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,set_x,return )

Float Vec2_obj::get_y( ){
	HX_STACK_FRAME("nape.geom.Vec2","get_y",0x9414f54c,"nape.geom.Vec2.get_y","nape/geom/Vec2.hx",559,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_LINE(565)
	{
		HX_STACK_LINE(565)
		::zpp_nape::geom::ZPP_Vec2 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(565)
		::zpp_nape::geom::ZPP_Vec2 _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(565)
		bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(565)
		if ((tmp1)){
			HX_STACK_LINE(565)
			_this->_validate();
		}
	}
	HX_STACK_LINE(566)
	::zpp_nape::geom::ZPP_Vec2 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(566)
	Float tmp1 = tmp->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(566)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2_obj,get_y,return )

Float Vec2_obj::set_y( Float y){
	HX_STACK_FRAME("nape.geom.Vec2","set_y",0x7ce3eb58,"nape.geom.Vec2.set_y","nape/geom/Vec2.hx",568,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(569)
	{
		HX_STACK_LINE(576)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(576)
		{
			HX_STACK_LINE(576)
			{
				HX_STACK_LINE(576)
				::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(576)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(576)
				bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(576)
				if ((tmp2)){
					HX_STACK_LINE(576)
					_this->_validate();
				}
			}
			HX_STACK_LINE(576)
			::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(576)
			tmp = tmp1->y;
		}
		HX_STACK_LINE(576)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(576)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(576)
		if ((tmp2)){
			HX_STACK_LINE(582)
			::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(582)
			tmp3->y = y;
			HX_STACK_LINE(583)
			{
				HX_STACK_LINE(583)
				::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(583)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(583)
				bool tmp5 = (_this->_invalidate != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(583)
				if ((tmp5)){
					HX_STACK_LINE(583)
					::zpp_nape::geom::ZPP_Vec2 tmp6 = _this;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(583)
					_this->_invalidate(tmp6);
				}
			}
		}
	}
	HX_STACK_LINE(586)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(586)
	{
		HX_STACK_LINE(586)
		{
			HX_STACK_LINE(586)
			::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(586)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(586)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(586)
			if ((tmp2)){
				HX_STACK_LINE(586)
				_this->_validate();
			}
		}
		HX_STACK_LINE(586)
		::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(586)
		tmp = tmp1->y;
	}
	HX_STACK_LINE(586)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,set_y,return )

Float Vec2_obj::get_length( ){
	HX_STACK_FRAME("nape.geom.Vec2","get_length",0x33cb4333,"nape.geom.Vec2.get_length","nape/geom/Vec2.hx",599,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_LINE(605)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(605)
	{
		HX_STACK_LINE(605)
		{
			HX_STACK_LINE(605)
			::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(605)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(605)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(605)
			if ((tmp2)){
				HX_STACK_LINE(605)
				_this->_validate();
			}
		}
		HX_STACK_LINE(605)
		::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(605)
		tmp = tmp1->x;
	}
	HX_STACK_LINE(605)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(605)
	{
		HX_STACK_LINE(605)
		{
			HX_STACK_LINE(605)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(605)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(605)
			bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(605)
			if ((tmp3)){
				HX_STACK_LINE(605)
				_this->_validate();
			}
		}
		HX_STACK_LINE(605)
		::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(605)
		tmp1 = tmp2->x;
	}
	HX_STACK_LINE(605)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(605)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(605)
	{
		HX_STACK_LINE(605)
		{
			HX_STACK_LINE(605)
			::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(605)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(605)
			bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(605)
			if ((tmp5)){
				HX_STACK_LINE(605)
				_this->_validate();
			}
		}
		HX_STACK_LINE(605)
		::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(605)
		tmp3 = tmp4->y;
	}
	HX_STACK_LINE(605)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(605)
	{
		HX_STACK_LINE(605)
		{
			HX_STACK_LINE(605)
			::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(605)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(605)
			bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(605)
			if ((tmp6)){
				HX_STACK_LINE(605)
				_this->_validate();
			}
		}
		HX_STACK_LINE(605)
		::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(605)
		tmp4 = tmp5->y;
	}
	HX_STACK_LINE(605)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(605)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(605)
	Float tmp7 = ::Math_obj::sqrt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(605)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2_obj,get_length,return )

Float Vec2_obj::set_length( Float length){
	HX_STACK_FRAME("nape.geom.Vec2","set_length",0x3748e1a7,"nape.geom.Vec2.set_length","nape/geom/Vec2.hx",607,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(608)
	{
		HX_STACK_LINE(623)
		{
			HX_STACK_LINE(624)
			Float tmp = length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(624)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(624)
			{
				HX_STACK_LINE(624)
				{
					HX_STACK_LINE(624)
					::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(624)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(624)
					bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(624)
					if ((tmp3)){
						HX_STACK_LINE(624)
						_this->_validate();
					}
				}
				HX_STACK_LINE(624)
				::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(624)
				tmp1 = tmp2->x;
			}
			HX_STACK_LINE(624)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(624)
			{
				HX_STACK_LINE(624)
				{
					HX_STACK_LINE(624)
					::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(624)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(624)
					bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(624)
					if ((tmp4)){
						HX_STACK_LINE(624)
						_this->_validate();
					}
				}
				HX_STACK_LINE(624)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(624)
				tmp2 = tmp3->x;
			}
			HX_STACK_LINE(624)
			Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(624)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(624)
			{
				HX_STACK_LINE(624)
				{
					HX_STACK_LINE(624)
					::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(624)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(624)
					bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(624)
					if ((tmp6)){
						HX_STACK_LINE(624)
						_this->_validate();
					}
				}
				HX_STACK_LINE(624)
				::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(624)
				tmp4 = tmp5->y;
			}
			HX_STACK_LINE(624)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(624)
			{
				HX_STACK_LINE(624)
				{
					HX_STACK_LINE(624)
					::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(624)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(624)
					bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(624)
					if ((tmp7)){
						HX_STACK_LINE(624)
						_this->_validate();
					}
				}
				HX_STACK_LINE(624)
				::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(624)
				tmp5 = tmp6->y;
			}
			HX_STACK_LINE(624)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(624)
			Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(624)
			Float tmp8 = ::Math_obj::sqrt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(624)
			Float tmp9 = (Float(tmp) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(624)
			Float t = tmp9;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(633)
			{
				HX_STACK_LINE(633)
				::nape::geom::Vec2 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(633)
				{
					HX_STACK_LINE(633)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(633)
					{
						HX_STACK_LINE(633)
						{
							HX_STACK_LINE(633)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(633)
							bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(633)
							if ((tmp11)){
								HX_STACK_LINE(633)
								_this->_validate();
							}
						}
						HX_STACK_LINE(633)
						tmp10 = _g->zpp_inner->x;
					}
					HX_STACK_LINE(633)
					Float tmp11 = t;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(633)
					Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(633)
					Float x = tmp12;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(633)
					{
						HX_STACK_LINE(633)
						Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(633)
						{
							HX_STACK_LINE(633)
							{
								HX_STACK_LINE(633)
								::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(633)
								bool tmp14 = (_this->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(633)
								if ((tmp14)){
									HX_STACK_LINE(633)
									_this->_validate();
								}
							}
							HX_STACK_LINE(633)
							tmp13 = _g->zpp_inner->x;
						}
						HX_STACK_LINE(633)
						Float tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(633)
						bool tmp15 = (tmp13 != tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(633)
						if ((tmp15)){
							HX_STACK_LINE(633)
							_g->zpp_inner->x = x;
							HX_STACK_LINE(633)
							{
								HX_STACK_LINE(633)
								::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(633)
								bool tmp16 = (_this->_invalidate != null());		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(633)
								if ((tmp16)){
									HX_STACK_LINE(633)
									::zpp_nape::geom::ZPP_Vec2 tmp17 = _this;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(633)
									_this->_invalidate(tmp17);
								}
							}
						}
					}
					HX_STACK_LINE(633)
					{
						HX_STACK_LINE(633)
						{
							HX_STACK_LINE(633)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(633)
							bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(633)
							if ((tmp13)){
								HX_STACK_LINE(633)
								_this->_validate();
							}
						}
						HX_STACK_LINE(633)
						_g->zpp_inner->x;
					}
				}
			}
			HX_STACK_LINE(634)
			{
				HX_STACK_LINE(634)
				::nape::geom::Vec2 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(634)
				{
					HX_STACK_LINE(634)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(634)
					{
						HX_STACK_LINE(634)
						{
							HX_STACK_LINE(634)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(634)
							bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(634)
							if ((tmp11)){
								HX_STACK_LINE(634)
								_this->_validate();
							}
						}
						HX_STACK_LINE(634)
						tmp10 = _g->zpp_inner->y;
					}
					HX_STACK_LINE(634)
					Float tmp11 = t;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(634)
					Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(634)
					Float y = tmp12;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(634)
					{
						HX_STACK_LINE(634)
						Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(634)
						{
							HX_STACK_LINE(634)
							{
								HX_STACK_LINE(634)
								::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(634)
								bool tmp14 = (_this->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(634)
								if ((tmp14)){
									HX_STACK_LINE(634)
									_this->_validate();
								}
							}
							HX_STACK_LINE(634)
							tmp13 = _g->zpp_inner->y;
						}
						HX_STACK_LINE(634)
						Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(634)
						bool tmp15 = (tmp13 != tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(634)
						if ((tmp15)){
							HX_STACK_LINE(634)
							_g->zpp_inner->y = y;
							HX_STACK_LINE(634)
							{
								HX_STACK_LINE(634)
								::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(634)
								bool tmp16 = (_this->_invalidate != null());		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(634)
								if ((tmp16)){
									HX_STACK_LINE(634)
									::zpp_nape::geom::ZPP_Vec2 tmp17 = _this;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(634)
									_this->_invalidate(tmp17);
								}
							}
						}
					}
					HX_STACK_LINE(634)
					{
						HX_STACK_LINE(634)
						{
							HX_STACK_LINE(634)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(634)
							bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(634)
							if ((tmp13)){
								HX_STACK_LINE(634)
								_this->_validate();
							}
						}
						HX_STACK_LINE(634)
						_g->zpp_inner->y;
					}
				}
			}
		}
		HX_STACK_LINE(636)
		{
			HX_STACK_LINE(636)
			::zpp_nape::geom::ZPP_Vec2 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(636)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(636)
			bool tmp1 = (_this->_invalidate != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(636)
			if ((tmp1)){
				HX_STACK_LINE(636)
				::zpp_nape::geom::ZPP_Vec2 tmp2 = _this;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(636)
				_this->_invalidate(tmp2);
			}
		}
	}
	HX_STACK_LINE(638)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(638)
	{
		HX_STACK_LINE(638)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(638)
		{
			HX_STACK_LINE(638)
			{
				HX_STACK_LINE(638)
				::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(638)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(638)
				bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(638)
				if ((tmp3)){
					HX_STACK_LINE(638)
					_this->_validate();
				}
			}
			HX_STACK_LINE(638)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(638)
			tmp1 = tmp2->x;
		}
		HX_STACK_LINE(638)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(638)
		{
			HX_STACK_LINE(638)
			{
				HX_STACK_LINE(638)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(638)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(638)
				bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(638)
				if ((tmp4)){
					HX_STACK_LINE(638)
					_this->_validate();
				}
			}
			HX_STACK_LINE(638)
			::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(638)
			tmp2 = tmp3->x;
		}
		HX_STACK_LINE(638)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(638)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(638)
		{
			HX_STACK_LINE(638)
			{
				HX_STACK_LINE(638)
				::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(638)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(638)
				bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(638)
				if ((tmp6)){
					HX_STACK_LINE(638)
					_this->_validate();
				}
			}
			HX_STACK_LINE(638)
			::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(638)
			tmp4 = tmp5->y;
		}
		HX_STACK_LINE(638)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(638)
		{
			HX_STACK_LINE(638)
			{
				HX_STACK_LINE(638)
				::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(638)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(638)
				bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(638)
				if ((tmp7)){
					HX_STACK_LINE(638)
					_this->_validate();
				}
			}
			HX_STACK_LINE(638)
			::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(638)
			tmp5 = tmp6->y;
		}
		HX_STACK_LINE(638)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(638)
		Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(638)
		tmp = ::Math_obj::sqrt(tmp7);
	}
	HX_STACK_LINE(638)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,set_length,return )

Float Vec2_obj::lsq( ){
	HX_STACK_FRAME("nape.geom.Vec2","lsq",0x32517106,"nape.geom.Vec2.lsq","nape/geom/Vec2.hx",650,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_LINE(656)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(656)
	{
		HX_STACK_LINE(656)
		{
			HX_STACK_LINE(656)
			::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(656)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(656)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(656)
			if ((tmp2)){
				HX_STACK_LINE(656)
				_this->_validate();
			}
		}
		HX_STACK_LINE(656)
		::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(656)
		tmp = tmp1->x;
	}
	HX_STACK_LINE(656)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(656)
	{
		HX_STACK_LINE(656)
		{
			HX_STACK_LINE(656)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(656)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(656)
			bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(656)
			if ((tmp3)){
				HX_STACK_LINE(656)
				_this->_validate();
			}
		}
		HX_STACK_LINE(656)
		::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(656)
		tmp1 = tmp2->x;
	}
	HX_STACK_LINE(656)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(656)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(656)
	{
		HX_STACK_LINE(656)
		{
			HX_STACK_LINE(656)
			::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(656)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(656)
			bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(656)
			if ((tmp5)){
				HX_STACK_LINE(656)
				_this->_validate();
			}
		}
		HX_STACK_LINE(656)
		::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(656)
		tmp3 = tmp4->y;
	}
	HX_STACK_LINE(656)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(656)
	{
		HX_STACK_LINE(656)
		{
			HX_STACK_LINE(656)
			::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(656)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(656)
			bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(656)
			if ((tmp6)){
				HX_STACK_LINE(656)
				_this->_validate();
			}
		}
		HX_STACK_LINE(656)
		::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(656)
		tmp4 = tmp5->y;
	}
	HX_STACK_LINE(656)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(656)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(656)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2_obj,lsq,return )

::nape::geom::Vec2 Vec2_obj::set( ::nape::geom::Vec2 vector){
	HX_STACK_FRAME("nape.geom.Vec2","set",0x3256b49e,"nape.geom.Vec2.set","nape/geom/Vec2.hx",671,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_LINE(688)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(688)
	{
		HX_STACK_LINE(688)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(688)
		{
			HX_STACK_LINE(688)
			{
				HX_STACK_LINE(688)
				::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(688)
				bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(688)
				if ((tmp2)){
					HX_STACK_LINE(688)
					_this->_validate();
				}
			}
			HX_STACK_LINE(688)
			tmp1 = vector->zpp_inner->x;
		}
		HX_STACK_LINE(688)
		Float x = tmp1;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(688)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(688)
		{
			HX_STACK_LINE(688)
			{
				HX_STACK_LINE(688)
				::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(688)
				bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(688)
				if ((tmp3)){
					HX_STACK_LINE(688)
					_this->_validate();
				}
			}
			HX_STACK_LINE(688)
			tmp2 = vector->zpp_inner->y;
		}
		HX_STACK_LINE(688)
		Float y = tmp2;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(688)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(688)
		{
			HX_STACK_LINE(688)
			{
				HX_STACK_LINE(688)
				::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(688)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(688)
				bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(688)
				if ((tmp5)){
					HX_STACK_LINE(688)
					_this->_validate();
				}
			}
			HX_STACK_LINE(688)
			::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(688)
			tmp3 = tmp4->x;
		}
		HX_STACK_LINE(688)
		Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(688)
		bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(688)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(688)
		if ((tmp5)){
			HX_STACK_LINE(688)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(688)
			{
				HX_STACK_LINE(688)
				{
					HX_STACK_LINE(688)
					::zpp_nape::geom::ZPP_Vec2 tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(688)
					::zpp_nape::geom::ZPP_Vec2 tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(688)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp9;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(688)
					bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(688)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(688)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(688)
					if ((tmp12)){
						HX_STACK_LINE(688)
						_this->_validate();
					}
				}
				HX_STACK_LINE(688)
				::zpp_nape::geom::ZPP_Vec2 tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(688)
				::zpp_nape::geom::ZPP_Vec2 tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(688)
				tmp7 = tmp9->y;
			}
			HX_STACK_LINE(688)
			Float tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(688)
			tmp6 = (tmp7 == tmp8);
		}
		else{
			HX_STACK_LINE(688)
			tmp6 = false;
		}
		HX_STACK_LINE(688)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(688)
		if ((tmp7)){
			HX_STACK_LINE(688)
			{
				HX_STACK_LINE(688)
				::zpp_nape::geom::ZPP_Vec2 tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(688)
				tmp8->x = x;
				HX_STACK_LINE(688)
				::zpp_nape::geom::ZPP_Vec2 tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(688)
				tmp9->y = y;
				HX_STACK_LINE(688)
				{
				}
			}
			HX_STACK_LINE(688)
			{
				HX_STACK_LINE(688)
				::zpp_nape::geom::ZPP_Vec2 tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(688)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp8;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(688)
				bool tmp9 = (_this->_invalidate != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(688)
				if ((tmp9)){
					HX_STACK_LINE(688)
					::zpp_nape::geom::ZPP_Vec2 tmp10 = _this;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(688)
					_this->_invalidate(tmp10);
				}
			}
		}
		HX_STACK_LINE(688)
		tmp = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(688)
	::nape::geom::Vec2 ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(689)
	{
		HX_STACK_LINE(690)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(691)
		tmp1 = vector->zpp_inner->weak;
		HX_STACK_LINE(690)
		if ((tmp1)){
			HX_STACK_LINE(693)
			{
				HX_STACK_LINE(693)
				::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(693)
				vector->zpp_inner->outer = null();
				HX_STACK_LINE(693)
				vector->zpp_inner = null();
				HX_STACK_LINE(693)
				{
					HX_STACK_LINE(693)
					::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(693)
					::nape::geom::Vec2 tmp2 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(693)
					o->zpp_pool = tmp2;
					HX_STACK_LINE(693)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(693)
				{
					HX_STACK_LINE(693)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(693)
					{
						HX_STACK_LINE(693)
						bool tmp2 = (o->outer != null());		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(693)
						if ((tmp2)){
							HX_STACK_LINE(693)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(693)
							o->outer = null();
						}
						HX_STACK_LINE(693)
						o->_isimmutable = null();
						HX_STACK_LINE(693)
						o->_validate = null();
						HX_STACK_LINE(693)
						o->_invalidate = null();
					}
					HX_STACK_LINE(693)
					::zpp_nape::geom::ZPP_Vec2 tmp2 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(693)
					o->next = tmp2;
					HX_STACK_LINE(693)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(694)
			true;
		}
		else{
			HX_STACK_LINE(697)
			false;
		}
	}
	HX_STACK_LINE(700)
	::nape::geom::Vec2 tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(700)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,set,return )

::nape::geom::Vec2 Vec2_obj::setxy( Float x,Float y){
	HX_STACK_FRAME("nape.geom.Vec2","setxy",0x7ce4011f,"nape.geom.Vec2.setxy","nape/geom/Vec2.hx",808,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(820)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(820)
	{
		HX_STACK_LINE(820)
		{
			HX_STACK_LINE(820)
			::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(820)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(820)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(820)
			if ((tmp2)){
				HX_STACK_LINE(820)
				_this->_validate();
			}
		}
		HX_STACK_LINE(820)
		::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(820)
		tmp = tmp1->x;
	}
	HX_STACK_LINE(820)
	Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(820)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(820)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(820)
	if ((tmp2)){
		HX_STACK_LINE(820)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(820)
		{
			HX_STACK_LINE(820)
			{
				HX_STACK_LINE(820)
				::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(820)
				::zpp_nape::geom::ZPP_Vec2 tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(820)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(820)
				bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(820)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(820)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(820)
				if ((tmp9)){
					HX_STACK_LINE(820)
					_this->_validate();
				}
			}
			HX_STACK_LINE(820)
			::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(820)
			::zpp_nape::geom::ZPP_Vec2 tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(820)
			tmp4 = tmp6->y;
		}
		HX_STACK_LINE(820)
		Float tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(820)
		tmp3 = (tmp4 == tmp5);
	}
	else{
		HX_STACK_LINE(820)
		tmp3 = false;
	}
	HX_STACK_LINE(820)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(820)
	if ((tmp4)){
		HX_STACK_LINE(821)
		{
			HX_STACK_LINE(822)
			::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(822)
			tmp5->x = x;
			HX_STACK_LINE(823)
			::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(823)
			tmp6->y = y;
			HX_STACK_LINE(832)
			{
			}
		}
		HX_STACK_LINE(841)
		{
			HX_STACK_LINE(841)
			::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(841)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(841)
			bool tmp6 = (_this->_invalidate != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(841)
			if ((tmp6)){
				HX_STACK_LINE(841)
				::zpp_nape::geom::ZPP_Vec2 tmp7 = _this;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(841)
				_this->_invalidate(tmp7);
			}
		}
	}
	HX_STACK_LINE(843)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Vec2_obj,setxy,return )

Float Vec2_obj::get_angle( ){
	HX_STACK_FRAME("nape.geom.Vec2","get_angle",0x940d9e26,"nape.geom.Vec2.get_angle","nape/geom/Vec2.hx",861,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_LINE(867)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(867)
	{
		HX_STACK_LINE(867)
		{
			HX_STACK_LINE(867)
			::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(867)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(867)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(867)
			if ((tmp2)){
				HX_STACK_LINE(867)
				_this->_validate();
			}
		}
		HX_STACK_LINE(867)
		::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(867)
		tmp = tmp1->x;
	}
	HX_STACK_LINE(867)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(867)
	{
		HX_STACK_LINE(867)
		{
			HX_STACK_LINE(867)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(867)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(867)
			bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(867)
			if ((tmp3)){
				HX_STACK_LINE(867)
				_this->_validate();
			}
		}
		HX_STACK_LINE(867)
		::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(867)
		tmp1 = tmp2->y;
	}
	HX_STACK_LINE(867)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(867)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(867)
	if ((tmp2)){
		HX_STACK_LINE(867)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(867)
		{
			HX_STACK_LINE(867)
			{
				HX_STACK_LINE(867)
				::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(867)
				::zpp_nape::geom::ZPP_Vec2 tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(867)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(867)
				bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(867)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(867)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(867)
				if ((tmp9)){
					HX_STACK_LINE(867)
					_this->_validate();
				}
			}
			HX_STACK_LINE(867)
			::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(867)
			::zpp_nape::geom::ZPP_Vec2 tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(867)
			tmp4 = tmp6->x;
		}
		HX_STACK_LINE(867)
		tmp3 = (tmp4 == (int)0);
	}
	else{
		HX_STACK_LINE(867)
		tmp3 = false;
	}
	HX_STACK_LINE(867)
	if ((tmp3)){
		HX_STACK_LINE(868)
		return ((Float)0.0);
	}
	else{
		HX_STACK_LINE(871)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(871)
		{
			HX_STACK_LINE(871)
			{
				HX_STACK_LINE(871)
				::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(871)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(871)
				bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(871)
				if ((tmp6)){
					HX_STACK_LINE(871)
					_this->_validate();
				}
			}
			HX_STACK_LINE(871)
			::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(871)
			tmp4 = tmp5->y;
		}
		HX_STACK_LINE(871)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(871)
		{
			HX_STACK_LINE(871)
			{
				HX_STACK_LINE(871)
				::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(871)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(871)
				bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(871)
				if ((tmp7)){
					HX_STACK_LINE(871)
					_this->_validate();
				}
			}
			HX_STACK_LINE(871)
			::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(871)
			tmp5 = tmp6->x;
		}
		HX_STACK_LINE(871)
		Float tmp6 = ::Math_obj::atan2(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(871)
		return tmp6;
	}
	HX_STACK_LINE(867)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2_obj,get_angle,return )

Float Vec2_obj::set_angle( Float angle){
	HX_STACK_FRAME("nape.geom.Vec2","set_angle",0x775e8a32,"nape.geom.Vec2.set_angle","nape/geom/Vec2.hx",874,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(875)
	{
		HX_STACK_LINE(887)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(887)
		{
			HX_STACK_LINE(887)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(887)
			{
				HX_STACK_LINE(887)
				{
					HX_STACK_LINE(887)
					::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(887)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(887)
					bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(887)
					if ((tmp3)){
						HX_STACK_LINE(887)
						_this->_validate();
					}
				}
				HX_STACK_LINE(887)
				::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(887)
				tmp1 = tmp2->x;
			}
			HX_STACK_LINE(887)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(887)
			{
				HX_STACK_LINE(887)
				{
					HX_STACK_LINE(887)
					::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(887)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(887)
					bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(887)
					if ((tmp4)){
						HX_STACK_LINE(887)
						_this->_validate();
					}
				}
				HX_STACK_LINE(887)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(887)
				tmp2 = tmp3->x;
			}
			HX_STACK_LINE(887)
			Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(887)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(887)
			{
				HX_STACK_LINE(887)
				{
					HX_STACK_LINE(887)
					::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(887)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(887)
					bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(887)
					if ((tmp6)){
						HX_STACK_LINE(887)
						_this->_validate();
					}
				}
				HX_STACK_LINE(887)
				::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(887)
				tmp4 = tmp5->y;
			}
			HX_STACK_LINE(887)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(887)
			{
				HX_STACK_LINE(887)
				{
					HX_STACK_LINE(887)
					::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(887)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(887)
					bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(887)
					if ((tmp7)){
						HX_STACK_LINE(887)
						_this->_validate();
					}
				}
				HX_STACK_LINE(887)
				::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(887)
				tmp5 = tmp6->y;
			}
			HX_STACK_LINE(887)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(887)
			Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(887)
			tmp = ::Math_obj::sqrt(tmp7);
		}
		HX_STACK_LINE(887)
		Float l = tmp;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(888)
		{
			HX_STACK_LINE(888)
			Float tmp1 = l;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(888)
			Float tmp2 = angle;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(888)
			Float tmp3 = ::Math_obj::cos(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(888)
			Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(888)
			Float x = tmp4;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(888)
			Float tmp5 = l;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(888)
			Float tmp6 = angle;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(888)
			Float tmp7 = ::Math_obj::sin(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(888)
			Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(888)
			Float y = tmp8;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(888)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(888)
			{
				HX_STACK_LINE(888)
				{
					HX_STACK_LINE(888)
					::zpp_nape::geom::ZPP_Vec2 tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(888)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp10;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(888)
					bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(888)
					if ((tmp11)){
						HX_STACK_LINE(888)
						_this->_validate();
					}
				}
				HX_STACK_LINE(888)
				::zpp_nape::geom::ZPP_Vec2 tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(888)
				tmp9 = tmp10->x;
			}
			HX_STACK_LINE(888)
			Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(888)
			bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(888)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(888)
			if ((tmp11)){
				HX_STACK_LINE(888)
				Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(888)
				{
					HX_STACK_LINE(888)
					{
						HX_STACK_LINE(888)
						::zpp_nape::geom::ZPP_Vec2 tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(888)
						::zpp_nape::geom::ZPP_Vec2 tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(888)
						::zpp_nape::geom::ZPP_Vec2 _this = tmp15;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(888)
						bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(888)
						bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(888)
						bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(888)
						if ((tmp18)){
							HX_STACK_LINE(888)
							_this->_validate();
						}
					}
					HX_STACK_LINE(888)
					::zpp_nape::geom::ZPP_Vec2 tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(888)
					::zpp_nape::geom::ZPP_Vec2 tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(888)
					tmp13 = tmp15->y;
				}
				HX_STACK_LINE(888)
				Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(888)
				tmp12 = (tmp13 == tmp14);
			}
			else{
				HX_STACK_LINE(888)
				tmp12 = false;
			}
			HX_STACK_LINE(888)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(888)
			if ((tmp13)){
				HX_STACK_LINE(888)
				{
					HX_STACK_LINE(888)
					::zpp_nape::geom::ZPP_Vec2 tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(888)
					tmp14->x = x;
					HX_STACK_LINE(888)
					::zpp_nape::geom::ZPP_Vec2 tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(888)
					tmp15->y = y;
					HX_STACK_LINE(888)
					{
					}
				}
				HX_STACK_LINE(888)
				{
					HX_STACK_LINE(888)
					::zpp_nape::geom::ZPP_Vec2 tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(888)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp14;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(888)
					bool tmp15 = (_this->_invalidate != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(888)
					if ((tmp15)){
						HX_STACK_LINE(888)
						::zpp_nape::geom::ZPP_Vec2 tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(888)
						_this->_invalidate(tmp16);
					}
				}
			}
			HX_STACK_LINE(888)
			hx::ObjectPtr<OBJ_>(this);
		}
	}
	HX_STACK_LINE(890)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(890)
	{
		HX_STACK_LINE(890)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(890)
		{
			HX_STACK_LINE(890)
			{
				HX_STACK_LINE(890)
				::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(890)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(890)
				bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(890)
				if ((tmp3)){
					HX_STACK_LINE(890)
					_this->_validate();
				}
			}
			HX_STACK_LINE(890)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(890)
			tmp1 = tmp2->x;
		}
		HX_STACK_LINE(890)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(890)
		{
			HX_STACK_LINE(890)
			{
				HX_STACK_LINE(890)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(890)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(890)
				bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(890)
				if ((tmp4)){
					HX_STACK_LINE(890)
					_this->_validate();
				}
			}
			HX_STACK_LINE(890)
			::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(890)
			tmp2 = tmp3->y;
		}
		HX_STACK_LINE(890)
		bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(890)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(890)
		if ((tmp3)){
			HX_STACK_LINE(890)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(890)
			{
				HX_STACK_LINE(890)
				{
					HX_STACK_LINE(890)
					::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(890)
					::zpp_nape::geom::ZPP_Vec2 tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(890)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp7;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(890)
					bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(890)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(890)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(890)
					if ((tmp10)){
						HX_STACK_LINE(890)
						_this->_validate();
					}
				}
				HX_STACK_LINE(890)
				::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(890)
				::zpp_nape::geom::ZPP_Vec2 tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(890)
				tmp5 = tmp7->x;
			}
			HX_STACK_LINE(890)
			tmp4 = (tmp5 == (int)0);
		}
		else{
			HX_STACK_LINE(890)
			tmp4 = false;
		}
		HX_STACK_LINE(890)
		if ((tmp4)){
			HX_STACK_LINE(890)
			tmp = ((Float)0.0);
		}
		else{
			HX_STACK_LINE(890)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(890)
			{
				HX_STACK_LINE(890)
				{
					HX_STACK_LINE(890)
					::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(890)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(890)
					bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(890)
					if ((tmp7)){
						HX_STACK_LINE(890)
						_this->_validate();
					}
				}
				HX_STACK_LINE(890)
				::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(890)
				tmp5 = tmp6->y;
			}
			HX_STACK_LINE(890)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(890)
			{
				HX_STACK_LINE(890)
				{
					HX_STACK_LINE(890)
					::zpp_nape::geom::ZPP_Vec2 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(890)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp7;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(890)
					bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(890)
					if ((tmp8)){
						HX_STACK_LINE(890)
						_this->_validate();
					}
				}
				HX_STACK_LINE(890)
				::zpp_nape::geom::ZPP_Vec2 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(890)
				tmp6 = tmp7->x;
			}
			HX_STACK_LINE(890)
			tmp = ::Math_obj::atan2(tmp5,tmp6);
		}
	}
	HX_STACK_LINE(890)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,set_angle,return )

::nape::geom::Vec2 Vec2_obj::rotate( Float angle){
	HX_STACK_FRAME("nape.geom.Vec2","rotate",0x2631f2df,"nape.geom.Vec2.rotate","nape/geom/Vec2.hx",907,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(919)
	Float tmp = angle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(919)
	Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(919)
	Float tmp2 = (tmp1 * (int)2);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(919)
	Float tmp3 = hx::Mod(tmp,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(919)
	bool tmp4 = (tmp3 != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(919)
	if ((tmp4)){
		HX_STACK_LINE(920)
		Float tmp5 = angle;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(920)
		Float tmp6 = ::Math_obj::sin(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(920)
		Float ax = tmp6;		HX_STACK_VAR(ax,"ax");
		HX_STACK_LINE(921)
		Float tmp7 = angle;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(921)
		Float tmp8 = ::Math_obj::cos(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(921)
		Float ay = tmp8;		HX_STACK_VAR(ay,"ay");
		HX_STACK_LINE(922)
		{
			HX_STACK_LINE(923)
			Float tmp9 = ay;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(923)
			::zpp_nape::geom::ZPP_Vec2 tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(923)
			Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(923)
			Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(923)
			Float tmp13 = ax;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(923)
			::zpp_nape::geom::ZPP_Vec2 tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(923)
			Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(923)
			Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(923)
			Float tmp17 = (tmp12 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(923)
			Float t = tmp17;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(924)
			::zpp_nape::geom::ZPP_Vec2 tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(924)
			Float tmp19 = tmp18->x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(924)
			Float tmp20 = ax;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(924)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(924)
			::zpp_nape::geom::ZPP_Vec2 tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(924)
			Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(924)
			Float tmp24 = ay;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(924)
			Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(924)
			Float tmp26 = (tmp21 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(924)
			::zpp_nape::geom::ZPP_Vec2 tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(924)
			tmp27->y = tmp26;
			HX_STACK_LINE(925)
			::zpp_nape::geom::ZPP_Vec2 tmp28 = this->zpp_inner;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(925)
			tmp28->x = t;
		}
		HX_STACK_LINE(927)
		{
			HX_STACK_LINE(927)
			::zpp_nape::geom::ZPP_Vec2 tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(927)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(927)
			bool tmp10 = (_this->_invalidate != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(927)
			if ((tmp10)){
				HX_STACK_LINE(927)
				::zpp_nape::geom::ZPP_Vec2 tmp11 = _this;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(927)
				_this->_invalidate(tmp11);
			}
		}
	}
	HX_STACK_LINE(929)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,rotate,return )

::nape::geom::Vec2 Vec2_obj::reflect( ::nape::geom::Vec2 vec,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec2","reflect",0x3d8ecb39,"nape.geom.Vec2.reflect","nape/geom/Vec2.hx",942,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vec,"vec")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(958)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(958)
		{
			HX_STACK_LINE(958)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(958)
			{
				HX_STACK_LINE(958)
				{
					HX_STACK_LINE(958)
					::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(958)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(958)
					bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(958)
					if ((tmp3)){
						HX_STACK_LINE(958)
						_this->_validate();
					}
				}
				HX_STACK_LINE(958)
				::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(958)
				tmp1 = tmp2->x;
			}
			HX_STACK_LINE(958)
			Float x = tmp1;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(958)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(958)
			{
				HX_STACK_LINE(958)
				{
					HX_STACK_LINE(958)
					::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(958)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(958)
					bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(958)
					if ((tmp4)){
						HX_STACK_LINE(958)
						_this->_validate();
					}
				}
				HX_STACK_LINE(958)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(958)
				tmp2 = tmp3->y;
			}
			HX_STACK_LINE(958)
			Float y = tmp2;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(958)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(958)
			{
				HX_STACK_LINE(958)
				::nape::geom::Vec2 tmp3 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(958)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(958)
				if ((tmp4)){
					HX_STACK_LINE(958)
					::nape::geom::Vec2 tmp5 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(958)
					ret = tmp5;
				}
				else{
					HX_STACK_LINE(958)
					::nape::geom::Vec2 tmp5 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(958)
					ret = tmp5;
					HX_STACK_LINE(958)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(958)
					ret->zpp_pool = null();
				}
			}
			HX_STACK_LINE(958)
			bool tmp3 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(958)
			if ((tmp3)){
				HX_STACK_LINE(958)
				::zpp_nape::geom::ZPP_Vec2 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(958)
				{
					HX_STACK_LINE(958)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(958)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(958)
					{
						HX_STACK_LINE(958)
						::zpp_nape::geom::ZPP_Vec2 tmp5 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(958)
						bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(958)
						if ((tmp6)){
							HX_STACK_LINE(958)
							::zpp_nape::geom::ZPP_Vec2 tmp7 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(958)
							ret1 = tmp7;
						}
						else{
							HX_STACK_LINE(958)
							::zpp_nape::geom::ZPP_Vec2 tmp7 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(958)
							ret1 = tmp7;
							HX_STACK_LINE(958)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(958)
							ret1->next = null();
						}
						HX_STACK_LINE(958)
						ret1->weak = false;
					}
					HX_STACK_LINE(958)
					ret1->_immutable = immutable;
					HX_STACK_LINE(958)
					{
						HX_STACK_LINE(958)
						ret1->x = x;
						HX_STACK_LINE(958)
						ret1->y = y;
						HX_STACK_LINE(958)
						{
						}
					}
					HX_STACK_LINE(958)
					tmp4 = ret1;
				}
				HX_STACK_LINE(958)
				ret->zpp_inner = tmp4;
				HX_STACK_LINE(958)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(958)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(958)
				{
					HX_STACK_LINE(958)
					{
						HX_STACK_LINE(958)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(958)
						bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(958)
						if ((tmp5)){
							HX_STACK_LINE(958)
							_this->_validate();
						}
					}
					HX_STACK_LINE(958)
					tmp4 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(958)
				Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(958)
				bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(958)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(958)
				if ((tmp6)){
					HX_STACK_LINE(958)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(958)
					{
						HX_STACK_LINE(958)
						{
							HX_STACK_LINE(958)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(958)
							bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(958)
							bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(958)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(958)
							if ((tmp11)){
								HX_STACK_LINE(958)
								_this->_validate();
							}
						}
						HX_STACK_LINE(958)
						Float tmp9 = ret->zpp_inner->y;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(958)
						tmp8 = tmp9;
					}
					HX_STACK_LINE(958)
					Float tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(958)
					tmp7 = (tmp8 == tmp9);
				}
				else{
					HX_STACK_LINE(958)
					tmp7 = false;
				}
				HX_STACK_LINE(958)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(958)
				if ((tmp8)){
					HX_STACK_LINE(958)
					{
						HX_STACK_LINE(958)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(958)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(958)
						{
						}
					}
					HX_STACK_LINE(958)
					{
						HX_STACK_LINE(958)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(958)
						bool tmp9 = (_this->_invalidate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(958)
						if ((tmp9)){
							HX_STACK_LINE(958)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = _this;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(958)
							_this->_invalidate(tmp10);
						}
					}
				}
				HX_STACK_LINE(958)
				ret;
			}
			HX_STACK_LINE(958)
			ret->zpp_inner->weak = true;
			HX_STACK_LINE(958)
			tmp = ret;
		}
		HX_STACK_LINE(958)
		::nape::geom::Vec2 tmp1 = tmp->normalise();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(958)
		::nape::geom::Vec2 normal = tmp1;		HX_STACK_VAR(normal,"normal");
		HX_STACK_LINE(959)
		::nape::geom::Vec2 tmp2 = vec;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(959)
		Float tmp3 = normal->dot(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(959)
		Float tmp4 = ((int)2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(959)
		::nape::geom::Vec2 tmp5 = normal->muleq(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(959)
		bool tmp6 = weak;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(959)
		::nape::geom::Vec2 tmp7 = vec->sub(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(959)
		::nape::geom::Vec2 ret = tmp7;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(960)
		{
			HX_STACK_LINE(961)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(962)
			tmp8 = vec->zpp_inner->weak;
			HX_STACK_LINE(961)
			if ((tmp8)){
				HX_STACK_LINE(964)
				{
					HX_STACK_LINE(964)
					::zpp_nape::geom::ZPP_Vec2 inner = vec->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(964)
					vec->zpp_inner->outer = null();
					HX_STACK_LINE(964)
					vec->zpp_inner = null();
					HX_STACK_LINE(964)
					{
						HX_STACK_LINE(964)
						::nape::geom::Vec2 o = vec;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(964)
						::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(964)
						o->zpp_pool = tmp9;
						HX_STACK_LINE(964)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(964)
					{
						HX_STACK_LINE(964)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(964)
						{
							HX_STACK_LINE(964)
							bool tmp9 = (o->outer != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(964)
							if ((tmp9)){
								HX_STACK_LINE(964)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(964)
								o->outer = null();
							}
							HX_STACK_LINE(964)
							o->_isimmutable = null();
							HX_STACK_LINE(964)
							o->_validate = null();
							HX_STACK_LINE(964)
							o->_invalidate = null();
						}
						HX_STACK_LINE(964)
						::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(964)
						o->next = tmp9;
						HX_STACK_LINE(964)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(965)
				true;
			}
			else{
				HX_STACK_LINE(968)
				false;
			}
		}
		HX_STACK_LINE(971)
		::nape::geom::Vec2 tmp8 = ret;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(971)
		return tmp8;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Vec2_obj,reflect,return )

::nape::geom::Vec2 Vec2_obj::normalise( ){
	HX_STACK_FRAME("nape.geom.Vec2","normalise",0xd9232f70,"nape.geom.Vec2.normalise","nape/geom/Vec2.hx",984,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_LINE(996)
	{
		HX_STACK_LINE(997)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(997)
		{
			HX_STACK_LINE(997)
			{
				HX_STACK_LINE(997)
				::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(997)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(997)
				bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(997)
				if ((tmp2)){
					HX_STACK_LINE(997)
					_this->_validate();
				}
			}
			HX_STACK_LINE(997)
			::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(997)
			tmp = tmp1->x;
		}
		HX_STACK_LINE(997)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(997)
		{
			HX_STACK_LINE(997)
			{
				HX_STACK_LINE(997)
				::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(997)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(997)
				bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(997)
				if ((tmp3)){
					HX_STACK_LINE(997)
					_this->_validate();
				}
			}
			HX_STACK_LINE(997)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(997)
			tmp1 = tmp2->x;
		}
		HX_STACK_LINE(997)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(997)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(997)
		{
			HX_STACK_LINE(997)
			{
				HX_STACK_LINE(997)
				::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(997)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(997)
				bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(997)
				if ((tmp5)){
					HX_STACK_LINE(997)
					_this->_validate();
				}
			}
			HX_STACK_LINE(997)
			::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(997)
			tmp3 = tmp4->y;
		}
		HX_STACK_LINE(997)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(997)
		{
			HX_STACK_LINE(997)
			{
				HX_STACK_LINE(997)
				::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(997)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(997)
				bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(997)
				if ((tmp6)){
					HX_STACK_LINE(997)
					_this->_validate();
				}
			}
			HX_STACK_LINE(997)
			::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(997)
			tmp4 = tmp5->y;
		}
		HX_STACK_LINE(997)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(997)
		Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(997)
		Float d = tmp6;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(1006)
		Float tmp7 = d;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1006)
		Float tmp8 = ::Math_obj::sqrt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1006)
		Float tmp9 = (Float(((Float)1.0)) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1006)
		Float imag = tmp9;		HX_STACK_VAR(imag,"imag");
		HX_STACK_LINE(1007)
		{
			HX_STACK_LINE(1008)
			Float t = imag;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1017)
			{
				HX_STACK_LINE(1017)
				::nape::geom::Vec2 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1017)
				{
					HX_STACK_LINE(1017)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1017)
					{
						HX_STACK_LINE(1017)
						{
							HX_STACK_LINE(1017)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1017)
							bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1017)
							if ((tmp11)){
								HX_STACK_LINE(1017)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1017)
						tmp10 = _g->zpp_inner->x;
					}
					HX_STACK_LINE(1017)
					Float tmp11 = t;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1017)
					Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1017)
					Float x = tmp12;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(1017)
					{
						HX_STACK_LINE(1017)
						Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1017)
						{
							HX_STACK_LINE(1017)
							{
								HX_STACK_LINE(1017)
								::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1017)
								bool tmp14 = (_this->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1017)
								if ((tmp14)){
									HX_STACK_LINE(1017)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1017)
							tmp13 = _g->zpp_inner->x;
						}
						HX_STACK_LINE(1017)
						Float tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1017)
						bool tmp15 = (tmp13 != tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1017)
						if ((tmp15)){
							HX_STACK_LINE(1017)
							_g->zpp_inner->x = x;
							HX_STACK_LINE(1017)
							{
								HX_STACK_LINE(1017)
								::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1017)
								bool tmp16 = (_this->_invalidate != null());		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1017)
								if ((tmp16)){
									HX_STACK_LINE(1017)
									::zpp_nape::geom::ZPP_Vec2 tmp17 = _this;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1017)
									_this->_invalidate(tmp17);
								}
							}
						}
					}
					HX_STACK_LINE(1017)
					{
						HX_STACK_LINE(1017)
						{
							HX_STACK_LINE(1017)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1017)
							bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1017)
							if ((tmp13)){
								HX_STACK_LINE(1017)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1017)
						_g->zpp_inner->x;
					}
				}
			}
			HX_STACK_LINE(1018)
			{
				HX_STACK_LINE(1018)
				::nape::geom::Vec2 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1018)
				{
					HX_STACK_LINE(1018)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1018)
					{
						HX_STACK_LINE(1018)
						{
							HX_STACK_LINE(1018)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1018)
							bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1018)
							if ((tmp11)){
								HX_STACK_LINE(1018)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1018)
						tmp10 = _g->zpp_inner->y;
					}
					HX_STACK_LINE(1018)
					Float tmp11 = t;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1018)
					Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1018)
					Float y = tmp12;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(1018)
					{
						HX_STACK_LINE(1018)
						Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1018)
						{
							HX_STACK_LINE(1018)
							{
								HX_STACK_LINE(1018)
								::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1018)
								bool tmp14 = (_this->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1018)
								if ((tmp14)){
									HX_STACK_LINE(1018)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1018)
							tmp13 = _g->zpp_inner->y;
						}
						HX_STACK_LINE(1018)
						Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1018)
						bool tmp15 = (tmp13 != tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1018)
						if ((tmp15)){
							HX_STACK_LINE(1018)
							_g->zpp_inner->y = y;
							HX_STACK_LINE(1018)
							{
								HX_STACK_LINE(1018)
								::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1018)
								bool tmp16 = (_this->_invalidate != null());		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1018)
								if ((tmp16)){
									HX_STACK_LINE(1018)
									::zpp_nape::geom::ZPP_Vec2 tmp17 = _this;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1018)
									_this->_invalidate(tmp17);
								}
							}
						}
					}
					HX_STACK_LINE(1018)
					{
						HX_STACK_LINE(1018)
						{
							HX_STACK_LINE(1018)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1018)
							bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1018)
							if ((tmp13)){
								HX_STACK_LINE(1018)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1018)
						_g->zpp_inner->y;
					}
				}
			}
		}
	}
	HX_STACK_LINE(1021)
	{
		HX_STACK_LINE(1021)
		::zpp_nape::geom::ZPP_Vec2 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1021)
		::zpp_nape::geom::ZPP_Vec2 _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1021)
		bool tmp1 = (_this->_invalidate != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1021)
		if ((tmp1)){
			HX_STACK_LINE(1021)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = _this;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1021)
			_this->_invalidate(tmp2);
		}
	}
	HX_STACK_LINE(1022)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2_obj,normalise,return )

::nape::geom::Vec2 Vec2_obj::unit( hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec2","unit",0xdae08e08,"nape.geom.Vec2.unit","nape/geom/Vec2.hx",1035,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(1046)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1046)
		{
			HX_STACK_LINE(1046)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1046)
			{
				HX_STACK_LINE(1046)
				{
					HX_STACK_LINE(1046)
					::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1046)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1046)
					bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1046)
					if ((tmp3)){
						HX_STACK_LINE(1046)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1046)
				::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1046)
				tmp1 = tmp2->x;
			}
			HX_STACK_LINE(1046)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1046)
			{
				HX_STACK_LINE(1046)
				{
					HX_STACK_LINE(1046)
					::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1046)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1046)
					bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1046)
					if ((tmp4)){
						HX_STACK_LINE(1046)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1046)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1046)
				tmp2 = tmp3->x;
			}
			HX_STACK_LINE(1046)
			Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1046)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1046)
			{
				HX_STACK_LINE(1046)
				{
					HX_STACK_LINE(1046)
					::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1046)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1046)
					bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1046)
					if ((tmp6)){
						HX_STACK_LINE(1046)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1046)
				::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1046)
				tmp4 = tmp5->y;
			}
			HX_STACK_LINE(1046)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1046)
			{
				HX_STACK_LINE(1046)
				{
					HX_STACK_LINE(1046)
					::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1046)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1046)
					bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1046)
					if ((tmp7)){
						HX_STACK_LINE(1046)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1046)
				::zpp_nape::geom::ZPP_Vec2 tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1046)
				tmp5 = tmp6->y;
			}
			HX_STACK_LINE(1046)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1046)
			Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1046)
			Float x = tmp7;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(1046)
			Float tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1046)
			tmp = ::Math_obj::sqrt(tmp8);
		}
		HX_STACK_LINE(1046)
		Float tmp1 = (Float((int)1) / Float(tmp));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1046)
		Float scale = tmp1;		HX_STACK_VAR(scale,"scale");
		HX_STACK_LINE(1047)
		::nape::geom::Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1047)
		{
			HX_STACK_LINE(1047)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1047)
			{
				HX_STACK_LINE(1047)
				{
					HX_STACK_LINE(1047)
					::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1047)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp4;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1047)
					bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1047)
					if ((tmp5)){
						HX_STACK_LINE(1047)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1047)
				::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1047)
				tmp3 = tmp4->x;
			}
			HX_STACK_LINE(1047)
			Float tmp4 = scale;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1047)
			Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1047)
			Float x = tmp5;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(1047)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1047)
			{
				HX_STACK_LINE(1047)
				{
					HX_STACK_LINE(1047)
					::zpp_nape::geom::ZPP_Vec2 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1047)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp7;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1047)
					bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1047)
					if ((tmp8)){
						HX_STACK_LINE(1047)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1047)
				::zpp_nape::geom::ZPP_Vec2 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1047)
				tmp6 = tmp7->y;
			}
			HX_STACK_LINE(1047)
			Float tmp7 = scale;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1047)
			Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1047)
			Float y = tmp8;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(1047)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1047)
			{
				HX_STACK_LINE(1047)
				::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1047)
				bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1047)
				if ((tmp10)){
					HX_STACK_LINE(1047)
					::nape::geom::Vec2 tmp11 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1047)
					ret = tmp11;
				}
				else{
					HX_STACK_LINE(1047)
					::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1047)
					ret = tmp11;
					HX_STACK_LINE(1047)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(1047)
					ret->zpp_pool = null();
				}
			}
			HX_STACK_LINE(1047)
			bool tmp9 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1047)
			if ((tmp9)){
				HX_STACK_LINE(1047)
				::zpp_nape::geom::ZPP_Vec2 tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1047)
				{
					HX_STACK_LINE(1047)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(1047)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1047)
					{
						HX_STACK_LINE(1047)
						::zpp_nape::geom::ZPP_Vec2 tmp11 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1047)
						bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1047)
						if ((tmp12)){
							HX_STACK_LINE(1047)
							::zpp_nape::geom::ZPP_Vec2 tmp13 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1047)
							ret1 = tmp13;
						}
						else{
							HX_STACK_LINE(1047)
							::zpp_nape::geom::ZPP_Vec2 tmp13 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1047)
							ret1 = tmp13;
							HX_STACK_LINE(1047)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(1047)
							ret1->next = null();
						}
						HX_STACK_LINE(1047)
						ret1->weak = false;
					}
					HX_STACK_LINE(1047)
					ret1->_immutable = immutable;
					HX_STACK_LINE(1047)
					{
						HX_STACK_LINE(1047)
						ret1->x = x;
						HX_STACK_LINE(1047)
						ret1->y = y;
						HX_STACK_LINE(1047)
						{
						}
					}
					HX_STACK_LINE(1047)
					tmp10 = ret1;
				}
				HX_STACK_LINE(1047)
				ret->zpp_inner = tmp10;
				HX_STACK_LINE(1047)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(1047)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1047)
				{
					HX_STACK_LINE(1047)
					{
						HX_STACK_LINE(1047)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1047)
						bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1047)
						if ((tmp11)){
							HX_STACK_LINE(1047)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1047)
					tmp10 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(1047)
				Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1047)
				bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1047)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1047)
				if ((tmp12)){
					HX_STACK_LINE(1047)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1047)
					{
						HX_STACK_LINE(1047)
						{
							HX_STACK_LINE(1047)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1047)
							bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1047)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1047)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1047)
							if ((tmp17)){
								HX_STACK_LINE(1047)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1047)
						Float tmp15 = ret->zpp_inner->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1047)
						tmp14 = tmp15;
					}
					HX_STACK_LINE(1047)
					Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1047)
					tmp13 = (tmp14 == tmp15);
				}
				else{
					HX_STACK_LINE(1047)
					tmp13 = false;
				}
				HX_STACK_LINE(1047)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1047)
				if ((tmp14)){
					HX_STACK_LINE(1047)
					{
						HX_STACK_LINE(1047)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(1047)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(1047)
						{
						}
					}
					HX_STACK_LINE(1047)
					{
						HX_STACK_LINE(1047)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1047)
						bool tmp15 = (_this->_invalidate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1047)
						if ((tmp15)){
							HX_STACK_LINE(1047)
							::zpp_nape::geom::ZPP_Vec2 tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1047)
							_this->_invalidate(tmp16);
						}
					}
				}
				HX_STACK_LINE(1047)
				ret;
			}
			HX_STACK_LINE(1047)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(1047)
			tmp2 = ret;
		}
		HX_STACK_LINE(1047)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,unit,return )

::nape::geom::Vec2 Vec2_obj::add( ::nape::geom::Vec2 vector,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec2","add",0x32490b1d,"nape.geom.Vec2.add","nape/geom/Vec2.hx",1066,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(1082)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1082)
		{
			HX_STACK_LINE(1082)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1082)
			{
				HX_STACK_LINE(1082)
				{
					HX_STACK_LINE(1082)
					::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1082)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1082)
					bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1082)
					if ((tmp3)){
						HX_STACK_LINE(1082)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1082)
				::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1082)
				tmp1 = tmp2->x;
			}
			HX_STACK_LINE(1082)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1082)
			{
				HX_STACK_LINE(1082)
				{
					HX_STACK_LINE(1082)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1082)
					bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1082)
					if ((tmp3)){
						HX_STACK_LINE(1082)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1082)
				tmp2 = vector->zpp_inner->x;
			}
			HX_STACK_LINE(1082)
			Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1082)
			Float x = tmp3;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(1082)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1082)
			{
				HX_STACK_LINE(1082)
				{
					HX_STACK_LINE(1082)
					::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1082)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1082)
					bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1082)
					if ((tmp6)){
						HX_STACK_LINE(1082)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1082)
				::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1082)
				tmp4 = tmp5->y;
			}
			HX_STACK_LINE(1082)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1082)
			{
				HX_STACK_LINE(1082)
				{
					HX_STACK_LINE(1082)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1082)
					bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1082)
					if ((tmp6)){
						HX_STACK_LINE(1082)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1082)
				tmp5 = vector->zpp_inner->y;
			}
			HX_STACK_LINE(1082)
			Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1082)
			Float y = tmp6;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(1082)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1082)
			{
				HX_STACK_LINE(1082)
				::nape::geom::Vec2 tmp7 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1082)
				bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1082)
				if ((tmp8)){
					HX_STACK_LINE(1082)
					::nape::geom::Vec2 tmp9 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1082)
					ret = tmp9;
				}
				else{
					HX_STACK_LINE(1082)
					::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1082)
					ret = tmp9;
					HX_STACK_LINE(1082)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(1082)
					ret->zpp_pool = null();
				}
			}
			HX_STACK_LINE(1082)
			bool tmp7 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1082)
			if ((tmp7)){
				HX_STACK_LINE(1082)
				::zpp_nape::geom::ZPP_Vec2 tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1082)
				{
					HX_STACK_LINE(1082)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(1082)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1082)
					{
						HX_STACK_LINE(1082)
						::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1082)
						bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1082)
						if ((tmp10)){
							HX_STACK_LINE(1082)
							::zpp_nape::geom::ZPP_Vec2 tmp11 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1082)
							ret1 = tmp11;
						}
						else{
							HX_STACK_LINE(1082)
							::zpp_nape::geom::ZPP_Vec2 tmp11 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1082)
							ret1 = tmp11;
							HX_STACK_LINE(1082)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(1082)
							ret1->next = null();
						}
						HX_STACK_LINE(1082)
						ret1->weak = false;
					}
					HX_STACK_LINE(1082)
					ret1->_immutable = immutable;
					HX_STACK_LINE(1082)
					{
						HX_STACK_LINE(1082)
						ret1->x = x;
						HX_STACK_LINE(1082)
						ret1->y = y;
						HX_STACK_LINE(1082)
						{
						}
					}
					HX_STACK_LINE(1082)
					tmp8 = ret1;
				}
				HX_STACK_LINE(1082)
				ret->zpp_inner = tmp8;
				HX_STACK_LINE(1082)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(1082)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1082)
				{
					HX_STACK_LINE(1082)
					{
						HX_STACK_LINE(1082)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1082)
						bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1082)
						if ((tmp9)){
							HX_STACK_LINE(1082)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1082)
					tmp8 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(1082)
				Float tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1082)
				bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1082)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1082)
				if ((tmp10)){
					HX_STACK_LINE(1082)
					Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1082)
					{
						HX_STACK_LINE(1082)
						{
							HX_STACK_LINE(1082)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1082)
							bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1082)
							bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1082)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1082)
							if ((tmp15)){
								HX_STACK_LINE(1082)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1082)
						Float tmp13 = ret->zpp_inner->y;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1082)
						tmp12 = tmp13;
					}
					HX_STACK_LINE(1082)
					Float tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1082)
					tmp11 = (tmp12 == tmp13);
				}
				else{
					HX_STACK_LINE(1082)
					tmp11 = false;
				}
				HX_STACK_LINE(1082)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1082)
				if ((tmp12)){
					HX_STACK_LINE(1082)
					{
						HX_STACK_LINE(1082)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(1082)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(1082)
						{
						}
					}
					HX_STACK_LINE(1082)
					{
						HX_STACK_LINE(1082)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1082)
						bool tmp13 = (_this->_invalidate != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1082)
						if ((tmp13)){
							HX_STACK_LINE(1082)
							::zpp_nape::geom::ZPP_Vec2 tmp14 = _this;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1082)
							_this->_invalidate(tmp14);
						}
					}
				}
				HX_STACK_LINE(1082)
				ret;
			}
			HX_STACK_LINE(1082)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(1082)
			tmp = ret;
		}
		HX_STACK_LINE(1082)
		::nape::geom::Vec2 ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1083)
		{
			HX_STACK_LINE(1084)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1085)
			tmp1 = vector->zpp_inner->weak;
			HX_STACK_LINE(1084)
			if ((tmp1)){
				HX_STACK_LINE(1087)
				{
					HX_STACK_LINE(1087)
					::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(1087)
					vector->zpp_inner->outer = null();
					HX_STACK_LINE(1087)
					vector->zpp_inner = null();
					HX_STACK_LINE(1087)
					{
						HX_STACK_LINE(1087)
						::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1087)
						::nape::geom::Vec2 tmp2 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(1087)
						o->zpp_pool = tmp2;
						HX_STACK_LINE(1087)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1087)
					{
						HX_STACK_LINE(1087)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1087)
						{
							HX_STACK_LINE(1087)
							bool tmp2 = (o->outer != null());		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(1087)
							if ((tmp2)){
								HX_STACK_LINE(1087)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(1087)
								o->outer = null();
							}
							HX_STACK_LINE(1087)
							o->_isimmutable = null();
							HX_STACK_LINE(1087)
							o->_validate = null();
							HX_STACK_LINE(1087)
							o->_invalidate = null();
						}
						HX_STACK_LINE(1087)
						::zpp_nape::geom::ZPP_Vec2 tmp2 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(1087)
						o->next = tmp2;
						HX_STACK_LINE(1087)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(1088)
				true;
			}
			else{
				HX_STACK_LINE(1091)
				false;
			}
		}
		HX_STACK_LINE(1094)
		::nape::geom::Vec2 tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1094)
		return tmp1;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Vec2_obj,add,return )

::nape::geom::Vec2 Vec2_obj::addMul( ::nape::geom::Vec2 vector,Float scalar,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec2","addMul",0xfa15d8e7,"nape.geom.Vec2.addMul","nape/geom/Vec2.hx",1119,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_ARG(scalar,"scalar")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(1135)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1135)
		{
			HX_STACK_LINE(1135)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1135)
			{
				HX_STACK_LINE(1135)
				{
					HX_STACK_LINE(1135)
					::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1135)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1135)
					bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1135)
					if ((tmp3)){
						HX_STACK_LINE(1135)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1135)
				::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1135)
				tmp1 = tmp2->x;
			}
			HX_STACK_LINE(1135)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1135)
			{
				HX_STACK_LINE(1135)
				{
					HX_STACK_LINE(1135)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1135)
					bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1135)
					if ((tmp3)){
						HX_STACK_LINE(1135)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1135)
				tmp2 = vector->zpp_inner->x;
			}
			HX_STACK_LINE(1135)
			Float tmp3 = scalar;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1135)
			Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1135)
			Float tmp5 = (tmp1 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1135)
			Float x = tmp5;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(1135)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1135)
			{
				HX_STACK_LINE(1135)
				{
					HX_STACK_LINE(1135)
					::zpp_nape::geom::ZPP_Vec2 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1135)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp7;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1135)
					bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1135)
					if ((tmp8)){
						HX_STACK_LINE(1135)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1135)
				::zpp_nape::geom::ZPP_Vec2 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1135)
				tmp6 = tmp7->y;
			}
			HX_STACK_LINE(1135)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1135)
			{
				HX_STACK_LINE(1135)
				{
					HX_STACK_LINE(1135)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1135)
					bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1135)
					if ((tmp8)){
						HX_STACK_LINE(1135)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1135)
				tmp7 = vector->zpp_inner->y;
			}
			HX_STACK_LINE(1135)
			Float tmp8 = scalar;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1135)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1135)
			Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1135)
			Float y = tmp10;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(1135)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1135)
			{
				HX_STACK_LINE(1135)
				::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1135)
				bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1135)
				if ((tmp12)){
					HX_STACK_LINE(1135)
					::nape::geom::Vec2 tmp13 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1135)
					ret = tmp13;
				}
				else{
					HX_STACK_LINE(1135)
					::nape::geom::Vec2 tmp13 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1135)
					ret = tmp13;
					HX_STACK_LINE(1135)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(1135)
					ret->zpp_pool = null();
				}
			}
			HX_STACK_LINE(1135)
			bool tmp11 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1135)
			if ((tmp11)){
				HX_STACK_LINE(1135)
				::zpp_nape::geom::ZPP_Vec2 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1135)
				{
					HX_STACK_LINE(1135)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(1135)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1135)
					{
						HX_STACK_LINE(1135)
						::zpp_nape::geom::ZPP_Vec2 tmp13 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1135)
						bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1135)
						if ((tmp14)){
							HX_STACK_LINE(1135)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1135)
							ret1 = tmp15;
						}
						else{
							HX_STACK_LINE(1135)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1135)
							ret1 = tmp15;
							HX_STACK_LINE(1135)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(1135)
							ret1->next = null();
						}
						HX_STACK_LINE(1135)
						ret1->weak = false;
					}
					HX_STACK_LINE(1135)
					ret1->_immutable = immutable;
					HX_STACK_LINE(1135)
					{
						HX_STACK_LINE(1135)
						ret1->x = x;
						HX_STACK_LINE(1135)
						ret1->y = y;
						HX_STACK_LINE(1135)
						{
						}
					}
					HX_STACK_LINE(1135)
					tmp12 = ret1;
				}
				HX_STACK_LINE(1135)
				ret->zpp_inner = tmp12;
				HX_STACK_LINE(1135)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(1135)
				Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1135)
				{
					HX_STACK_LINE(1135)
					{
						HX_STACK_LINE(1135)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1135)
						bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1135)
						if ((tmp13)){
							HX_STACK_LINE(1135)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1135)
					tmp12 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(1135)
				Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1135)
				bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1135)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1135)
				if ((tmp14)){
					HX_STACK_LINE(1135)
					Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1135)
					{
						HX_STACK_LINE(1135)
						{
							HX_STACK_LINE(1135)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1135)
							bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1135)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1135)
							bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1135)
							if ((tmp19)){
								HX_STACK_LINE(1135)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1135)
						Float tmp17 = ret->zpp_inner->y;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1135)
						tmp16 = tmp17;
					}
					HX_STACK_LINE(1135)
					Float tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1135)
					tmp15 = (tmp16 == tmp17);
				}
				else{
					HX_STACK_LINE(1135)
					tmp15 = false;
				}
				HX_STACK_LINE(1135)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1135)
				if ((tmp16)){
					HX_STACK_LINE(1135)
					{
						HX_STACK_LINE(1135)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(1135)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(1135)
						{
						}
					}
					HX_STACK_LINE(1135)
					{
						HX_STACK_LINE(1135)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1135)
						bool tmp17 = (_this->_invalidate != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1135)
						if ((tmp17)){
							HX_STACK_LINE(1135)
							::zpp_nape::geom::ZPP_Vec2 tmp18 = _this;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1135)
							_this->_invalidate(tmp18);
						}
					}
				}
				HX_STACK_LINE(1135)
				ret;
			}
			HX_STACK_LINE(1135)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(1135)
			tmp = ret;
		}
		HX_STACK_LINE(1135)
		::nape::geom::Vec2 ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1136)
		{
			HX_STACK_LINE(1137)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1138)
			tmp1 = vector->zpp_inner->weak;
			HX_STACK_LINE(1137)
			if ((tmp1)){
				HX_STACK_LINE(1140)
				{
					HX_STACK_LINE(1140)
					::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(1140)
					vector->zpp_inner->outer = null();
					HX_STACK_LINE(1140)
					vector->zpp_inner = null();
					HX_STACK_LINE(1140)
					{
						HX_STACK_LINE(1140)
						::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1140)
						::nape::geom::Vec2 tmp2 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(1140)
						o->zpp_pool = tmp2;
						HX_STACK_LINE(1140)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1140)
					{
						HX_STACK_LINE(1140)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1140)
						{
							HX_STACK_LINE(1140)
							bool tmp2 = (o->outer != null());		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(1140)
							if ((tmp2)){
								HX_STACK_LINE(1140)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(1140)
								o->outer = null();
							}
							HX_STACK_LINE(1140)
							o->_isimmutable = null();
							HX_STACK_LINE(1140)
							o->_validate = null();
							HX_STACK_LINE(1140)
							o->_invalidate = null();
						}
						HX_STACK_LINE(1140)
						::zpp_nape::geom::ZPP_Vec2 tmp2 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(1140)
						o->next = tmp2;
						HX_STACK_LINE(1140)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(1141)
				true;
			}
			else{
				HX_STACK_LINE(1144)
				false;
			}
		}
		HX_STACK_LINE(1147)
		::nape::geom::Vec2 tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1147)
		return tmp1;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Vec2_obj,addMul,return )

::nape::geom::Vec2 Vec2_obj::sub( ::nape::geom::Vec2 vector,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec2","sub",0x3256c27c,"nape.geom.Vec2.sub","nape/geom/Vec2.hx",1165,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(1181)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1181)
		{
			HX_STACK_LINE(1181)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1181)
			{
				HX_STACK_LINE(1181)
				{
					HX_STACK_LINE(1181)
					::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1181)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1181)
					bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1181)
					if ((tmp3)){
						HX_STACK_LINE(1181)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1181)
				::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1181)
				tmp1 = tmp2->x;
			}
			HX_STACK_LINE(1181)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1181)
			{
				HX_STACK_LINE(1181)
				{
					HX_STACK_LINE(1181)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1181)
					bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1181)
					if ((tmp3)){
						HX_STACK_LINE(1181)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1181)
				tmp2 = vector->zpp_inner->x;
			}
			HX_STACK_LINE(1181)
			Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1181)
			Float x = tmp3;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(1181)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1181)
			{
				HX_STACK_LINE(1181)
				{
					HX_STACK_LINE(1181)
					::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1181)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1181)
					bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1181)
					if ((tmp6)){
						HX_STACK_LINE(1181)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1181)
				::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1181)
				tmp4 = tmp5->y;
			}
			HX_STACK_LINE(1181)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1181)
			{
				HX_STACK_LINE(1181)
				{
					HX_STACK_LINE(1181)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1181)
					bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1181)
					if ((tmp6)){
						HX_STACK_LINE(1181)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1181)
				tmp5 = vector->zpp_inner->y;
			}
			HX_STACK_LINE(1181)
			Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1181)
			Float y = tmp6;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(1181)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1181)
			{
				HX_STACK_LINE(1181)
				::nape::geom::Vec2 tmp7 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1181)
				bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1181)
				if ((tmp8)){
					HX_STACK_LINE(1181)
					::nape::geom::Vec2 tmp9 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1181)
					ret = tmp9;
				}
				else{
					HX_STACK_LINE(1181)
					::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1181)
					ret = tmp9;
					HX_STACK_LINE(1181)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(1181)
					ret->zpp_pool = null();
				}
			}
			HX_STACK_LINE(1181)
			bool tmp7 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1181)
			if ((tmp7)){
				HX_STACK_LINE(1181)
				::zpp_nape::geom::ZPP_Vec2 tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1181)
				{
					HX_STACK_LINE(1181)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(1181)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1181)
					{
						HX_STACK_LINE(1181)
						::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1181)
						bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1181)
						if ((tmp10)){
							HX_STACK_LINE(1181)
							::zpp_nape::geom::ZPP_Vec2 tmp11 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1181)
							ret1 = tmp11;
						}
						else{
							HX_STACK_LINE(1181)
							::zpp_nape::geom::ZPP_Vec2 tmp11 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1181)
							ret1 = tmp11;
							HX_STACK_LINE(1181)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(1181)
							ret1->next = null();
						}
						HX_STACK_LINE(1181)
						ret1->weak = false;
					}
					HX_STACK_LINE(1181)
					ret1->_immutable = immutable;
					HX_STACK_LINE(1181)
					{
						HX_STACK_LINE(1181)
						ret1->x = x;
						HX_STACK_LINE(1181)
						ret1->y = y;
						HX_STACK_LINE(1181)
						{
						}
					}
					HX_STACK_LINE(1181)
					tmp8 = ret1;
				}
				HX_STACK_LINE(1181)
				ret->zpp_inner = tmp8;
				HX_STACK_LINE(1181)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(1181)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1181)
				{
					HX_STACK_LINE(1181)
					{
						HX_STACK_LINE(1181)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1181)
						bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1181)
						if ((tmp9)){
							HX_STACK_LINE(1181)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1181)
					tmp8 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(1181)
				Float tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1181)
				bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1181)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1181)
				if ((tmp10)){
					HX_STACK_LINE(1181)
					Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1181)
					{
						HX_STACK_LINE(1181)
						{
							HX_STACK_LINE(1181)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1181)
							bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1181)
							bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1181)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1181)
							if ((tmp15)){
								HX_STACK_LINE(1181)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1181)
						Float tmp13 = ret->zpp_inner->y;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1181)
						tmp12 = tmp13;
					}
					HX_STACK_LINE(1181)
					Float tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1181)
					tmp11 = (tmp12 == tmp13);
				}
				else{
					HX_STACK_LINE(1181)
					tmp11 = false;
				}
				HX_STACK_LINE(1181)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1181)
				if ((tmp12)){
					HX_STACK_LINE(1181)
					{
						HX_STACK_LINE(1181)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(1181)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(1181)
						{
						}
					}
					HX_STACK_LINE(1181)
					{
						HX_STACK_LINE(1181)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1181)
						bool tmp13 = (_this->_invalidate != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1181)
						if ((tmp13)){
							HX_STACK_LINE(1181)
							::zpp_nape::geom::ZPP_Vec2 tmp14 = _this;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1181)
							_this->_invalidate(tmp14);
						}
					}
				}
				HX_STACK_LINE(1181)
				ret;
			}
			HX_STACK_LINE(1181)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(1181)
			tmp = ret;
		}
		HX_STACK_LINE(1181)
		::nape::geom::Vec2 ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1182)
		{
			HX_STACK_LINE(1183)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1184)
			tmp1 = vector->zpp_inner->weak;
			HX_STACK_LINE(1183)
			if ((tmp1)){
				HX_STACK_LINE(1186)
				{
					HX_STACK_LINE(1186)
					::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(1186)
					vector->zpp_inner->outer = null();
					HX_STACK_LINE(1186)
					vector->zpp_inner = null();
					HX_STACK_LINE(1186)
					{
						HX_STACK_LINE(1186)
						::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1186)
						::nape::geom::Vec2 tmp2 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(1186)
						o->zpp_pool = tmp2;
						HX_STACK_LINE(1186)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1186)
					{
						HX_STACK_LINE(1186)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1186)
						{
							HX_STACK_LINE(1186)
							bool tmp2 = (o->outer != null());		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(1186)
							if ((tmp2)){
								HX_STACK_LINE(1186)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(1186)
								o->outer = null();
							}
							HX_STACK_LINE(1186)
							o->_isimmutable = null();
							HX_STACK_LINE(1186)
							o->_validate = null();
							HX_STACK_LINE(1186)
							o->_invalidate = null();
						}
						HX_STACK_LINE(1186)
						::zpp_nape::geom::ZPP_Vec2 tmp2 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(1186)
						o->next = tmp2;
						HX_STACK_LINE(1186)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(1187)
				true;
			}
			else{
				HX_STACK_LINE(1190)
				false;
			}
		}
		HX_STACK_LINE(1193)
		::nape::geom::Vec2 tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1193)
		return tmp1;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Vec2_obj,sub,return )

::nape::geom::Vec2 Vec2_obj::mul( Float scalar,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec2","mul",0x32523500,"nape.geom.Vec2.mul","nape/geom/Vec2.hx",1209,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(scalar,"scalar")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(1220)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1220)
		{
			HX_STACK_LINE(1220)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1220)
			{
				HX_STACK_LINE(1220)
				{
					HX_STACK_LINE(1220)
					::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1220)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1220)
					bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1220)
					if ((tmp3)){
						HX_STACK_LINE(1220)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1220)
				::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1220)
				tmp1 = tmp2->x;
			}
			HX_STACK_LINE(1220)
			Float tmp2 = scalar;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1220)
			Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1220)
			Float x = tmp3;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(1220)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1220)
			{
				HX_STACK_LINE(1220)
				{
					HX_STACK_LINE(1220)
					::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1220)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1220)
					bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1220)
					if ((tmp6)){
						HX_STACK_LINE(1220)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1220)
				::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1220)
				tmp4 = tmp5->y;
			}
			HX_STACK_LINE(1220)
			Float tmp5 = scalar;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1220)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1220)
			Float y = tmp6;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(1220)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1220)
			{
				HX_STACK_LINE(1220)
				::nape::geom::Vec2 tmp7 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1220)
				bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1220)
				if ((tmp8)){
					HX_STACK_LINE(1220)
					::nape::geom::Vec2 tmp9 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1220)
					ret = tmp9;
				}
				else{
					HX_STACK_LINE(1220)
					::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1220)
					ret = tmp9;
					HX_STACK_LINE(1220)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(1220)
					ret->zpp_pool = null();
				}
			}
			HX_STACK_LINE(1220)
			bool tmp7 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1220)
			if ((tmp7)){
				HX_STACK_LINE(1220)
				::zpp_nape::geom::ZPP_Vec2 tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1220)
				{
					HX_STACK_LINE(1220)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(1220)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1220)
					{
						HX_STACK_LINE(1220)
						::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1220)
						bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1220)
						if ((tmp10)){
							HX_STACK_LINE(1220)
							::zpp_nape::geom::ZPP_Vec2 tmp11 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1220)
							ret1 = tmp11;
						}
						else{
							HX_STACK_LINE(1220)
							::zpp_nape::geom::ZPP_Vec2 tmp11 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1220)
							ret1 = tmp11;
							HX_STACK_LINE(1220)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(1220)
							ret1->next = null();
						}
						HX_STACK_LINE(1220)
						ret1->weak = false;
					}
					HX_STACK_LINE(1220)
					ret1->_immutable = immutable;
					HX_STACK_LINE(1220)
					{
						HX_STACK_LINE(1220)
						ret1->x = x;
						HX_STACK_LINE(1220)
						ret1->y = y;
						HX_STACK_LINE(1220)
						{
						}
					}
					HX_STACK_LINE(1220)
					tmp8 = ret1;
				}
				HX_STACK_LINE(1220)
				ret->zpp_inner = tmp8;
				HX_STACK_LINE(1220)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(1220)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1220)
				{
					HX_STACK_LINE(1220)
					{
						HX_STACK_LINE(1220)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1220)
						bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1220)
						if ((tmp9)){
							HX_STACK_LINE(1220)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1220)
					tmp8 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(1220)
				Float tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1220)
				bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1220)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1220)
				if ((tmp10)){
					HX_STACK_LINE(1220)
					Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1220)
					{
						HX_STACK_LINE(1220)
						{
							HX_STACK_LINE(1220)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1220)
							bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1220)
							bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1220)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1220)
							if ((tmp15)){
								HX_STACK_LINE(1220)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1220)
						Float tmp13 = ret->zpp_inner->y;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1220)
						tmp12 = tmp13;
					}
					HX_STACK_LINE(1220)
					Float tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1220)
					tmp11 = (tmp12 == tmp13);
				}
				else{
					HX_STACK_LINE(1220)
					tmp11 = false;
				}
				HX_STACK_LINE(1220)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1220)
				if ((tmp12)){
					HX_STACK_LINE(1220)
					{
						HX_STACK_LINE(1220)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(1220)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(1220)
						{
						}
					}
					HX_STACK_LINE(1220)
					{
						HX_STACK_LINE(1220)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1220)
						bool tmp13 = (_this->_invalidate != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1220)
						if ((tmp13)){
							HX_STACK_LINE(1220)
							::zpp_nape::geom::ZPP_Vec2 tmp14 = _this;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1220)
							_this->_invalidate(tmp14);
						}
					}
				}
				HX_STACK_LINE(1220)
				ret;
			}
			HX_STACK_LINE(1220)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(1220)
			tmp = ret;
		}
		HX_STACK_LINE(1220)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Vec2_obj,mul,return )

::nape::geom::Vec2 Vec2_obj::addeq( ::nape::geom::Vec2 vector){
	HX_STACK_FRAME("nape.geom.Vec2","addeq",0x1ef824c9,"nape.geom.Vec2.addeq","nape/geom/Vec2.hx",1237,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_LINE(1254)
	{
		HX_STACK_LINE(1254)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1254)
		{
			HX_STACK_LINE(1254)
			{
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1254)
				bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1254)
				if ((tmp2)){
					HX_STACK_LINE(1254)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1254)
			::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1254)
			tmp = tmp1->x;
		}
		HX_STACK_LINE(1254)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1254)
		{
			HX_STACK_LINE(1254)
			{
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1254)
				bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1254)
				if ((tmp2)){
					HX_STACK_LINE(1254)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1254)
			tmp1 = vector->zpp_inner->x;
		}
		HX_STACK_LINE(1254)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1254)
		Float x = tmp2;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(1254)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1254)
		{
			HX_STACK_LINE(1254)
			{
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1254)
				bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1254)
				if ((tmp5)){
					HX_STACK_LINE(1254)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1254)
			::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1254)
			tmp3 = tmp4->y;
		}
		HX_STACK_LINE(1254)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1254)
		{
			HX_STACK_LINE(1254)
			{
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1254)
				bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1254)
				if ((tmp5)){
					HX_STACK_LINE(1254)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1254)
			tmp4 = vector->zpp_inner->y;
		}
		HX_STACK_LINE(1254)
		Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1254)
		Float y = tmp5;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(1254)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1254)
		{
			HX_STACK_LINE(1254)
			{
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1254)
				bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1254)
				if ((tmp8)){
					HX_STACK_LINE(1254)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1254)
			::zpp_nape::geom::ZPP_Vec2 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1254)
			tmp6 = tmp7->x;
		}
		HX_STACK_LINE(1254)
		Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1254)
		bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1254)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1254)
		if ((tmp8)){
			HX_STACK_LINE(1254)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1254)
			{
				HX_STACK_LINE(1254)
				{
					HX_STACK_LINE(1254)
					::zpp_nape::geom::ZPP_Vec2 tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1254)
					::zpp_nape::geom::ZPP_Vec2 tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1254)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp12;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1254)
					bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1254)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1254)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1254)
					if ((tmp15)){
						HX_STACK_LINE(1254)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1254)
				tmp10 = tmp12->y;
			}
			HX_STACK_LINE(1254)
			Float tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1254)
			tmp9 = (tmp10 == tmp11);
		}
		else{
			HX_STACK_LINE(1254)
			tmp9 = false;
		}
		HX_STACK_LINE(1254)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1254)
		if ((tmp10)){
			HX_STACK_LINE(1254)
			{
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1254)
				tmp11->x = x;
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1254)
				tmp12->y = y;
				HX_STACK_LINE(1254)
				{
				}
			}
			HX_STACK_LINE(1254)
			{
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp11;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1254)
				bool tmp12 = (_this->_invalidate != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1254)
				if ((tmp12)){
					HX_STACK_LINE(1254)
					::zpp_nape::geom::ZPP_Vec2 tmp13 = _this;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1254)
					_this->_invalidate(tmp13);
				}
			}
		}
		HX_STACK_LINE(1254)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(1255)
	{
		HX_STACK_LINE(1256)
		bool tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1257)
		tmp = vector->zpp_inner->weak;
		HX_STACK_LINE(1256)
		if ((tmp)){
			HX_STACK_LINE(1259)
			{
				HX_STACK_LINE(1259)
				::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1259)
				vector->zpp_inner->outer = null();
				HX_STACK_LINE(1259)
				vector->zpp_inner = null();
				HX_STACK_LINE(1259)
				{
					HX_STACK_LINE(1259)
					::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1259)
					::nape::geom::Vec2 tmp1 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(1259)
					o->zpp_pool = tmp1;
					HX_STACK_LINE(1259)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1259)
				{
					HX_STACK_LINE(1259)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1259)
					{
						HX_STACK_LINE(1259)
						bool tmp1 = (o->outer != null());		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(1259)
						if ((tmp1)){
							HX_STACK_LINE(1259)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1259)
							o->outer = null();
						}
						HX_STACK_LINE(1259)
						o->_isimmutable = null();
						HX_STACK_LINE(1259)
						o->_validate = null();
						HX_STACK_LINE(1259)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1259)
					::zpp_nape::geom::ZPP_Vec2 tmp1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(1259)
					o->next = tmp1;
					HX_STACK_LINE(1259)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1260)
			true;
		}
		else{
			HX_STACK_LINE(1263)
			false;
		}
	}
	HX_STACK_LINE(1266)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,addeq,return )

::nape::geom::Vec2 Vec2_obj::subeq( ::nape::geom::Vec2 vector){
	HX_STACK_FRAME("nape.geom.Vec2","subeq",0x8769b1e8,"nape.geom.Vec2.subeq","nape/geom/Vec2.hx",1283,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_LINE(1300)
	{
		HX_STACK_LINE(1300)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1300)
		{
			HX_STACK_LINE(1300)
			{
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1300)
				bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1300)
				if ((tmp2)){
					HX_STACK_LINE(1300)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1300)
			::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1300)
			tmp = tmp1->x;
		}
		HX_STACK_LINE(1300)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1300)
		{
			HX_STACK_LINE(1300)
			{
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1300)
				bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1300)
				if ((tmp2)){
					HX_STACK_LINE(1300)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1300)
			tmp1 = vector->zpp_inner->x;
		}
		HX_STACK_LINE(1300)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1300)
		Float x = tmp2;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(1300)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1300)
		{
			HX_STACK_LINE(1300)
			{
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1300)
				bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1300)
				if ((tmp5)){
					HX_STACK_LINE(1300)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1300)
			::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1300)
			tmp3 = tmp4->y;
		}
		HX_STACK_LINE(1300)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1300)
		{
			HX_STACK_LINE(1300)
			{
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1300)
				bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1300)
				if ((tmp5)){
					HX_STACK_LINE(1300)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1300)
			tmp4 = vector->zpp_inner->y;
		}
		HX_STACK_LINE(1300)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1300)
		Float y = tmp5;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(1300)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1300)
		{
			HX_STACK_LINE(1300)
			{
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1300)
				bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1300)
				if ((tmp8)){
					HX_STACK_LINE(1300)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1300)
			::zpp_nape::geom::ZPP_Vec2 tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1300)
			tmp6 = tmp7->x;
		}
		HX_STACK_LINE(1300)
		Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1300)
		bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1300)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1300)
		if ((tmp8)){
			HX_STACK_LINE(1300)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1300)
			{
				HX_STACK_LINE(1300)
				{
					HX_STACK_LINE(1300)
					::zpp_nape::geom::ZPP_Vec2 tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1300)
					::zpp_nape::geom::ZPP_Vec2 tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1300)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp12;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1300)
					bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1300)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1300)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1300)
					if ((tmp15)){
						HX_STACK_LINE(1300)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1300)
				tmp10 = tmp12->y;
			}
			HX_STACK_LINE(1300)
			Float tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1300)
			tmp9 = (tmp10 == tmp11);
		}
		else{
			HX_STACK_LINE(1300)
			tmp9 = false;
		}
		HX_STACK_LINE(1300)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1300)
		if ((tmp10)){
			HX_STACK_LINE(1300)
			{
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1300)
				tmp11->x = x;
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1300)
				tmp12->y = y;
				HX_STACK_LINE(1300)
				{
				}
			}
			HX_STACK_LINE(1300)
			{
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp11;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1300)
				bool tmp12 = (_this->_invalidate != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1300)
				if ((tmp12)){
					HX_STACK_LINE(1300)
					::zpp_nape::geom::ZPP_Vec2 tmp13 = _this;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1300)
					_this->_invalidate(tmp13);
				}
			}
		}
		HX_STACK_LINE(1300)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(1301)
	{
		HX_STACK_LINE(1302)
		bool tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1303)
		tmp = vector->zpp_inner->weak;
		HX_STACK_LINE(1302)
		if ((tmp)){
			HX_STACK_LINE(1305)
			{
				HX_STACK_LINE(1305)
				::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1305)
				vector->zpp_inner->outer = null();
				HX_STACK_LINE(1305)
				vector->zpp_inner = null();
				HX_STACK_LINE(1305)
				{
					HX_STACK_LINE(1305)
					::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1305)
					::nape::geom::Vec2 tmp1 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(1305)
					o->zpp_pool = tmp1;
					HX_STACK_LINE(1305)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1305)
				{
					HX_STACK_LINE(1305)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1305)
					{
						HX_STACK_LINE(1305)
						bool tmp1 = (o->outer != null());		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(1305)
						if ((tmp1)){
							HX_STACK_LINE(1305)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1305)
							o->outer = null();
						}
						HX_STACK_LINE(1305)
						o->_isimmutable = null();
						HX_STACK_LINE(1305)
						o->_validate = null();
						HX_STACK_LINE(1305)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1305)
					::zpp_nape::geom::ZPP_Vec2 tmp1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(1305)
					o->next = tmp1;
					HX_STACK_LINE(1305)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1306)
			true;
		}
		else{
			HX_STACK_LINE(1309)
			false;
		}
	}
	HX_STACK_LINE(1312)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,subeq,return )

::nape::geom::Vec2 Vec2_obj::muleq( Float scalar){
	HX_STACK_FRAME("nape.geom.Vec2","muleq",0x1309cd6c,"nape.geom.Vec2.muleq","nape/geom/Vec2.hx",1328,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(scalar,"scalar")
	HX_STACK_LINE(1340)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1340)
	{
		HX_STACK_LINE(1340)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1340)
		{
			HX_STACK_LINE(1340)
			{
				HX_STACK_LINE(1340)
				::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1340)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1340)
				bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1340)
				if ((tmp3)){
					HX_STACK_LINE(1340)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1340)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1340)
			tmp1 = tmp2->x;
		}
		HX_STACK_LINE(1340)
		Float tmp2 = scalar;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1340)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1340)
		Float x = tmp3;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(1340)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1340)
		{
			HX_STACK_LINE(1340)
			{
				HX_STACK_LINE(1340)
				::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1340)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1340)
				bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1340)
				if ((tmp6)){
					HX_STACK_LINE(1340)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1340)
			::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1340)
			tmp4 = tmp5->y;
		}
		HX_STACK_LINE(1340)
		Float tmp5 = scalar;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1340)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1340)
		Float y = tmp6;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(1340)
		Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1340)
		{
			HX_STACK_LINE(1340)
			{
				HX_STACK_LINE(1340)
				::zpp_nape::geom::ZPP_Vec2 tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1340)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp8;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1340)
				bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1340)
				if ((tmp9)){
					HX_STACK_LINE(1340)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1340)
			::zpp_nape::geom::ZPP_Vec2 tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1340)
			tmp7 = tmp8->x;
		}
		HX_STACK_LINE(1340)
		Float tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1340)
		bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1340)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1340)
		if ((tmp9)){
			HX_STACK_LINE(1340)
			Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1340)
			{
				HX_STACK_LINE(1340)
				{
					HX_STACK_LINE(1340)
					::zpp_nape::geom::ZPP_Vec2 tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1340)
					::zpp_nape::geom::ZPP_Vec2 tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1340)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp13;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1340)
					bool tmp14 = (_this->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1340)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1340)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1340)
					if ((tmp16)){
						HX_STACK_LINE(1340)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1340)
				::zpp_nape::geom::ZPP_Vec2 tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1340)
				::zpp_nape::geom::ZPP_Vec2 tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1340)
				tmp11 = tmp13->y;
			}
			HX_STACK_LINE(1340)
			Float tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1340)
			tmp10 = (tmp11 == tmp12);
		}
		else{
			HX_STACK_LINE(1340)
			tmp10 = false;
		}
		HX_STACK_LINE(1340)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1340)
		if ((tmp11)){
			HX_STACK_LINE(1340)
			{
				HX_STACK_LINE(1340)
				::zpp_nape::geom::ZPP_Vec2 tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1340)
				tmp12->x = x;
				HX_STACK_LINE(1340)
				::zpp_nape::geom::ZPP_Vec2 tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1340)
				tmp13->y = y;
				HX_STACK_LINE(1340)
				{
				}
			}
			HX_STACK_LINE(1340)
			{
				HX_STACK_LINE(1340)
				::zpp_nape::geom::ZPP_Vec2 tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1340)
				::zpp_nape::geom::ZPP_Vec2 _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1340)
				bool tmp13 = (_this->_invalidate != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1340)
				if ((tmp13)){
					HX_STACK_LINE(1340)
					::zpp_nape::geom::ZPP_Vec2 tmp14 = _this;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1340)
					_this->_invalidate(tmp14);
				}
			}
		}
		HX_STACK_LINE(1340)
		tmp = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(1340)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,muleq,return )

Float Vec2_obj::dot( ::nape::geom::Vec2 vector){
	HX_STACK_FRAME("nape.geom.Vec2","dot",0x324b5b85,"nape.geom.Vec2.dot","nape/geom/Vec2.hx",1359,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_LINE(1375)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1375)
	{
		HX_STACK_LINE(1375)
		{
			HX_STACK_LINE(1375)
			::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1375)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1375)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1375)
			if ((tmp2)){
				HX_STACK_LINE(1375)
				_this->_validate();
			}
		}
		HX_STACK_LINE(1375)
		::zpp_nape::geom::ZPP_Vec2 tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1375)
		tmp = tmp1->x;
	}
	HX_STACK_LINE(1375)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1375)
	{
		HX_STACK_LINE(1375)
		{
			HX_STACK_LINE(1375)
			::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1375)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1375)
			if ((tmp2)){
				HX_STACK_LINE(1375)
				_this->_validate();
			}
		}
		HX_STACK_LINE(1375)
		tmp1 = vector->zpp_inner->x;
	}
	HX_STACK_LINE(1375)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1375)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1375)
	{
		HX_STACK_LINE(1375)
		{
			HX_STACK_LINE(1375)
			::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1375)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1375)
			bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1375)
			if ((tmp5)){
				HX_STACK_LINE(1375)
				_this->_validate();
			}
		}
		HX_STACK_LINE(1375)
		::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1375)
		tmp3 = tmp4->y;
	}
	HX_STACK_LINE(1375)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1375)
	{
		HX_STACK_LINE(1375)
		{
			HX_STACK_LINE(1375)
			::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1375)
			bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1375)
			if ((tmp5)){
				HX_STACK_LINE(1375)
				_this->_validate();
			}
		}
		HX_STACK_LINE(1375)
		tmp4 = vector->zpp_inner->y;
	}
	HX_STACK_LINE(1375)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1375)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1375)
	Float ret = tmp6;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1376)
	{
		HX_STACK_LINE(1377)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1378)
		tmp7 = vector->zpp_inner->weak;
		HX_STACK_LINE(1377)
		if ((tmp7)){
			HX_STACK_LINE(1380)
			{
				HX_STACK_LINE(1380)
				::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1380)
				vector->zpp_inner->outer = null();
				HX_STACK_LINE(1380)
				vector->zpp_inner = null();
				HX_STACK_LINE(1380)
				{
					HX_STACK_LINE(1380)
					::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1380)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1380)
					o->zpp_pool = tmp8;
					HX_STACK_LINE(1380)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1380)
				{
					HX_STACK_LINE(1380)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1380)
					{
						HX_STACK_LINE(1380)
						bool tmp8 = (o->outer != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1380)
						if ((tmp8)){
							HX_STACK_LINE(1380)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1380)
							o->outer = null();
						}
						HX_STACK_LINE(1380)
						o->_isimmutable = null();
						HX_STACK_LINE(1380)
						o->_validate = null();
						HX_STACK_LINE(1380)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1380)
					::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1380)
					o->next = tmp8;
					HX_STACK_LINE(1380)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1381)
			true;
		}
		else{
			HX_STACK_LINE(1384)
			false;
		}
	}
	HX_STACK_LINE(1387)
	Float tmp7 = ret;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1387)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,dot,return )

Float Vec2_obj::cross( ::nape::geom::Vec2 vector){
	HX_STACK_FRAME("nape.geom.Vec2","cross",0x4f0eaf7c,"nape.geom.Vec2.cross","nape/geom/Vec2.hx",1419,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_LINE(1435)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1435)
	{
		HX_STACK_LINE(1435)
		{
			HX_STACK_LINE(1435)
			::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1435)
			bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1435)
			if ((tmp1)){
				HX_STACK_LINE(1435)
				_this->_validate();
			}
		}
		HX_STACK_LINE(1435)
		tmp = vector->zpp_inner->y;
	}
	HX_STACK_LINE(1435)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1435)
	{
		HX_STACK_LINE(1435)
		{
			HX_STACK_LINE(1435)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1435)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1435)
			bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1435)
			if ((tmp3)){
				HX_STACK_LINE(1435)
				_this->_validate();
			}
		}
		HX_STACK_LINE(1435)
		::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1435)
		tmp1 = tmp2->x;
	}
	HX_STACK_LINE(1435)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1435)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1435)
	{
		HX_STACK_LINE(1435)
		{
			HX_STACK_LINE(1435)
			::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1435)
			bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1435)
			if ((tmp4)){
				HX_STACK_LINE(1435)
				_this->_validate();
			}
		}
		HX_STACK_LINE(1435)
		tmp3 = vector->zpp_inner->x;
	}
	HX_STACK_LINE(1435)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1435)
	{
		HX_STACK_LINE(1435)
		{
			HX_STACK_LINE(1435)
			::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1435)
			::zpp_nape::geom::ZPP_Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1435)
			bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1435)
			if ((tmp6)){
				HX_STACK_LINE(1435)
				_this->_validate();
			}
		}
		HX_STACK_LINE(1435)
		::zpp_nape::geom::ZPP_Vec2 tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1435)
		tmp4 = tmp5->y;
	}
	HX_STACK_LINE(1435)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1435)
	Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1435)
	Float ret = tmp6;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1436)
	{
		HX_STACK_LINE(1437)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1438)
		tmp7 = vector->zpp_inner->weak;
		HX_STACK_LINE(1437)
		if ((tmp7)){
			HX_STACK_LINE(1440)
			{
				HX_STACK_LINE(1440)
				::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1440)
				vector->zpp_inner->outer = null();
				HX_STACK_LINE(1440)
				vector->zpp_inner = null();
				HX_STACK_LINE(1440)
				{
					HX_STACK_LINE(1440)
					::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1440)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1440)
					o->zpp_pool = tmp8;
					HX_STACK_LINE(1440)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1440)
				{
					HX_STACK_LINE(1440)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1440)
					{
						HX_STACK_LINE(1440)
						bool tmp8 = (o->outer != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1440)
						if ((tmp8)){
							HX_STACK_LINE(1440)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1440)
							o->outer = null();
						}
						HX_STACK_LINE(1440)
						o->_isimmutable = null();
						HX_STACK_LINE(1440)
						o->_validate = null();
						HX_STACK_LINE(1440)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1440)
					::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1440)
					o->next = tmp8;
					HX_STACK_LINE(1440)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1441)
			true;
		}
		else{
			HX_STACK_LINE(1444)
			false;
		}
	}
	HX_STACK_LINE(1447)
	Float tmp7 = ret;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1447)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,cross,return )

::nape::geom::Vec2 Vec2_obj::perp( hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec2","perp",0xd78bb077,"nape.geom.Vec2.perp","nape/geom/Vec2.hx",1470,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(1476)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1476)
		{
			HX_STACK_LINE(1476)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1476)
			{
				HX_STACK_LINE(1476)
				{
					HX_STACK_LINE(1476)
					::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1476)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1476)
					bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1476)
					if ((tmp3)){
						HX_STACK_LINE(1476)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1476)
				::zpp_nape::geom::ZPP_Vec2 tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1476)
				tmp1 = tmp2->y;
			}
			HX_STACK_LINE(1476)
			Float tmp2 = -(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1476)
			Float x = tmp2;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(1476)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1476)
			{
				HX_STACK_LINE(1476)
				{
					HX_STACK_LINE(1476)
					::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1476)
					::zpp_nape::geom::ZPP_Vec2 _this = tmp4;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1476)
					bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1476)
					if ((tmp5)){
						HX_STACK_LINE(1476)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1476)
				::zpp_nape::geom::ZPP_Vec2 tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1476)
				tmp3 = tmp4->x;
			}
			HX_STACK_LINE(1476)
			Float y = tmp3;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(1476)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1476)
			{
				HX_STACK_LINE(1476)
				::nape::geom::Vec2 tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1476)
				bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1476)
				if ((tmp5)){
					HX_STACK_LINE(1476)
					::nape::geom::Vec2 tmp6 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1476)
					ret = tmp6;
				}
				else{
					HX_STACK_LINE(1476)
					::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1476)
					ret = tmp6;
					HX_STACK_LINE(1476)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(1476)
					ret->zpp_pool = null();
				}
			}
			HX_STACK_LINE(1476)
			bool tmp4 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1476)
			if ((tmp4)){
				HX_STACK_LINE(1476)
				::zpp_nape::geom::ZPP_Vec2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1476)
				{
					HX_STACK_LINE(1476)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(1476)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1476)
					{
						HX_STACK_LINE(1476)
						::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1476)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1476)
						if ((tmp7)){
							HX_STACK_LINE(1476)
							::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1476)
							ret1 = tmp8;
						}
						else{
							HX_STACK_LINE(1476)
							::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1476)
							ret1 = tmp8;
							HX_STACK_LINE(1476)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(1476)
							ret1->next = null();
						}
						HX_STACK_LINE(1476)
						ret1->weak = false;
					}
					HX_STACK_LINE(1476)
					ret1->_immutable = immutable;
					HX_STACK_LINE(1476)
					{
						HX_STACK_LINE(1476)
						ret1->x = x;
						HX_STACK_LINE(1476)
						ret1->y = y;
						HX_STACK_LINE(1476)
						{
						}
					}
					HX_STACK_LINE(1476)
					tmp5 = ret1;
				}
				HX_STACK_LINE(1476)
				ret->zpp_inner = tmp5;
				HX_STACK_LINE(1476)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(1476)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1476)
				{
					HX_STACK_LINE(1476)
					{
						HX_STACK_LINE(1476)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1476)
						bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1476)
						if ((tmp6)){
							HX_STACK_LINE(1476)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1476)
					tmp5 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(1476)
				Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1476)
				bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1476)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1476)
				if ((tmp7)){
					HX_STACK_LINE(1476)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1476)
					{
						HX_STACK_LINE(1476)
						{
							HX_STACK_LINE(1476)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1476)
							bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1476)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1476)
							bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1476)
							if ((tmp12)){
								HX_STACK_LINE(1476)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1476)
						Float tmp10 = ret->zpp_inner->y;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1476)
						tmp9 = tmp10;
					}
					HX_STACK_LINE(1476)
					Float tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1476)
					tmp8 = (tmp9 == tmp10);
				}
				else{
					HX_STACK_LINE(1476)
					tmp8 = false;
				}
				HX_STACK_LINE(1476)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1476)
				if ((tmp9)){
					HX_STACK_LINE(1476)
					{
						HX_STACK_LINE(1476)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(1476)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(1476)
						{
						}
					}
					HX_STACK_LINE(1476)
					{
						HX_STACK_LINE(1476)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1476)
						bool tmp10 = (_this->_invalidate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1476)
						if ((tmp10)){
							HX_STACK_LINE(1476)
							::zpp_nape::geom::ZPP_Vec2 tmp11 = _this;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1476)
							_this->_invalidate(tmp11);
						}
					}
				}
				HX_STACK_LINE(1476)
				ret;
			}
			HX_STACK_LINE(1476)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(1476)
			tmp = ret;
		}
		HX_STACK_LINE(1476)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,perp,return )

::String Vec2_obj::toString( ){
	HX_STACK_FRAME("nape.geom.Vec2","toString",0xbca7a630,"nape.geom.Vec2.toString","nape/geom/Vec2.hx",1481,0x020b6534)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1487)
	{
		HX_STACK_LINE(1487)
		::zpp_nape::geom::ZPP_Vec2 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1487)
		::zpp_nape::geom::ZPP_Vec2 _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1487)
		bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1487)
		if ((tmp1)){
			HX_STACK_LINE(1487)
			_this->_validate();
		}
	}
	HX_STACK_LINE(1488)
	::zpp_nape::geom::ZPP_Vec2 tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1488)
	::String tmp1 = tmp->toString();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1488)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2_obj,toString,return )

::nape::geom::Vec2 Vec2_obj::weak( hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_FRAME("nape.geom.Vec2","weak",0xdc2c1ffc,"nape.geom.Vec2.weak","nape/geom/Vec2.hx",256,0x020b6534)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(257)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(257)
		{
			HX_STACK_LINE(257)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(257)
			{
				HX_STACK_LINE(257)
				::nape::geom::Vec2 tmp1 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(257)
				bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(257)
				if ((tmp2)){
					HX_STACK_LINE(257)
					::nape::geom::Vec2 tmp3 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(257)
					ret = tmp3;
				}
				else{
					HX_STACK_LINE(257)
					::nape::geom::Vec2 tmp3 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(257)
					ret = tmp3;
					HX_STACK_LINE(257)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(257)
					ret->zpp_pool = null();
				}
			}
			HX_STACK_LINE(257)
			bool tmp1 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(257)
			if ((tmp1)){
				HX_STACK_LINE(257)
				::zpp_nape::geom::ZPP_Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(257)
				{
					HX_STACK_LINE(257)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(257)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(257)
						bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(257)
						if ((tmp4)){
							HX_STACK_LINE(257)
							::zpp_nape::geom::ZPP_Vec2 tmp5 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(257)
							ret1 = tmp5;
						}
						else{
							HX_STACK_LINE(257)
							::zpp_nape::geom::ZPP_Vec2 tmp5 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(257)
							ret1 = tmp5;
							HX_STACK_LINE(257)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(257)
							ret1->next = null();
						}
						HX_STACK_LINE(257)
						ret1->weak = false;
					}
					HX_STACK_LINE(257)
					ret1->_immutable = immutable;
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						ret1->x = x;
						HX_STACK_LINE(257)
						ret1->y = y;
						HX_STACK_LINE(257)
						{
						}
					}
					HX_STACK_LINE(257)
					tmp2 = ret1;
				}
				HX_STACK_LINE(257)
				ret->zpp_inner = tmp2;
				HX_STACK_LINE(257)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(257)
				Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(257)
				{
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(257)
						bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(257)
						if ((tmp3)){
							HX_STACK_LINE(257)
							_this->_validate();
						}
					}
					HX_STACK_LINE(257)
					tmp2 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(257)
				Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(257)
				bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(257)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(257)
				if ((tmp4)){
					HX_STACK_LINE(257)
					Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						{
							HX_STACK_LINE(257)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(257)
							bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(257)
							bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(257)
							bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(257)
							if ((tmp9)){
								HX_STACK_LINE(257)
								_this->_validate();
							}
						}
						HX_STACK_LINE(257)
						Float tmp7 = ret->zpp_inner->y;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(257)
						tmp6 = tmp7;
					}
					HX_STACK_LINE(257)
					Float tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(257)
					tmp5 = (tmp6 == tmp7);
				}
				else{
					HX_STACK_LINE(257)
					tmp5 = false;
				}
				HX_STACK_LINE(257)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(257)
				if ((tmp6)){
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(257)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(257)
						{
						}
					}
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(257)
						bool tmp7 = (_this->_invalidate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(257)
						if ((tmp7)){
							HX_STACK_LINE(257)
							::zpp_nape::geom::ZPP_Vec2 tmp8 = _this;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(257)
							_this->_invalidate(tmp8);
						}
					}
				}
				HX_STACK_LINE(257)
				ret;
			}
			HX_STACK_LINE(257)
			ret->zpp_inner->weak = true;
			HX_STACK_LINE(257)
			tmp = ret;
		}
		HX_STACK_LINE(257)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec2_obj,weak,return )

::nape::geom::Vec2 Vec2_obj::get( hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< bool >  __o_weak){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec2","get",0x324d9992,"nape.geom.Vec2.get","nape/geom/Vec2.hx",273,0x020b6534)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(279)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(280)
		{
			HX_STACK_LINE(281)
			::nape::geom::Vec2 tmp = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(281)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(281)
			if ((tmp1)){
				HX_STACK_LINE(282)
				::nape::geom::Vec2 tmp2 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(282)
				ret = tmp2;
			}
			else{
				HX_STACK_LINE(288)
				::nape::geom::Vec2 tmp2 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(288)
				ret = tmp2;
				HX_STACK_LINE(289)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(290)
				ret->zpp_pool = null();
			}
		}
		HX_STACK_LINE(300)
		bool tmp = (ret->zpp_inner == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(300)
		if ((tmp)){
			HX_STACK_LINE(301)
			::zpp_nape::geom::ZPP_Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(301)
			{
				HX_STACK_LINE(301)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(301)
				::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(301)
				{
					HX_STACK_LINE(301)
					::zpp_nape::geom::ZPP_Vec2 tmp2 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(301)
					bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(301)
					if ((tmp3)){
						HX_STACK_LINE(301)
						::zpp_nape::geom::ZPP_Vec2 tmp4 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(301)
						ret1 = tmp4;
					}
					else{
						HX_STACK_LINE(301)
						::zpp_nape::geom::ZPP_Vec2 tmp4 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(301)
						ret1 = tmp4;
						HX_STACK_LINE(301)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(301)
						ret1->next = null();
					}
					HX_STACK_LINE(301)
					ret1->weak = false;
				}
				HX_STACK_LINE(301)
				ret1->_immutable = immutable;
				HX_STACK_LINE(301)
				{
					HX_STACK_LINE(301)
					ret1->x = x;
					HX_STACK_LINE(301)
					ret1->y = y;
					HX_STACK_LINE(301)
					{
					}
				}
				HX_STACK_LINE(301)
				tmp1 = ret1;
			}
			HX_STACK_LINE(301)
			ret->zpp_inner = tmp1;
			HX_STACK_LINE(302)
			ret->zpp_inner->outer = ret;
		}
		else{
			HX_STACK_LINE(305)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(305)
			{
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(305)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(305)
					bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(305)
					if ((tmp2)){
						HX_STACK_LINE(305)
						_this->_validate();
					}
				}
				HX_STACK_LINE(305)
				tmp1 = ret->zpp_inner->x;
			}
			HX_STACK_LINE(305)
			Float tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(305)
			bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(305)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(305)
			if ((tmp3)){
				HX_STACK_LINE(305)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(305)
					{
						HX_STACK_LINE(305)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(305)
						bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(305)
						bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(305)
						bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(305)
						if ((tmp8)){
							HX_STACK_LINE(305)
							_this->_validate();
						}
					}
					HX_STACK_LINE(305)
					Float tmp6 = ret->zpp_inner->y;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(305)
					tmp5 = tmp6;
				}
				HX_STACK_LINE(305)
				Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(305)
				tmp4 = (tmp5 == tmp6);
			}
			else{
				HX_STACK_LINE(305)
				tmp4 = false;
			}
			HX_STACK_LINE(305)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(305)
			if ((tmp5)){
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(305)
					ret->zpp_inner->x = x;
					HX_STACK_LINE(305)
					ret->zpp_inner->y = y;
					HX_STACK_LINE(305)
					{
					}
				}
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(305)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(305)
					bool tmp6 = (_this->_invalidate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(305)
					if ((tmp6)){
						HX_STACK_LINE(305)
						::zpp_nape::geom::ZPP_Vec2 tmp7 = _this;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(305)
						_this->_invalidate(tmp7);
					}
				}
			}
			HX_STACK_LINE(305)
			ret;
		}
		HX_STACK_LINE(307)
		ret->zpp_inner->weak = weak;
		HX_STACK_LINE(308)
		::nape::geom::Vec2 tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(308)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vec2_obj,get,return )

::nape::geom::Vec2 Vec2_obj::fromPoint( ::openfl::_legacy::geom::Point point,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec2","fromPoint",0xa89a9c82,"nape.geom.Vec2.fromPoint","nape/geom/Vec2.hx",452,0x020b6534)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(461)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(461)
		{
			HX_STACK_LINE(461)
			Float x = point->x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(461)
			Float y = point->y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(461)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(461)
			{
				HX_STACK_LINE(461)
				::nape::geom::Vec2 tmp1 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(461)
				bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(461)
				if ((tmp2)){
					HX_STACK_LINE(461)
					::nape::geom::Vec2 tmp3 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(461)
					ret = tmp3;
				}
				else{
					HX_STACK_LINE(461)
					::nape::geom::Vec2 tmp3 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(461)
					ret = tmp3;
					HX_STACK_LINE(461)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(461)
					ret->zpp_pool = null();
				}
			}
			HX_STACK_LINE(461)
			bool tmp1 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(461)
			if ((tmp1)){
				HX_STACK_LINE(461)
				::zpp_nape::geom::ZPP_Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(461)
				{
					HX_STACK_LINE(461)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(461)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(461)
					{
						HX_STACK_LINE(461)
						::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(461)
						bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(461)
						if ((tmp4)){
							HX_STACK_LINE(461)
							::zpp_nape::geom::ZPP_Vec2 tmp5 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(461)
							ret1 = tmp5;
						}
						else{
							HX_STACK_LINE(461)
							::zpp_nape::geom::ZPP_Vec2 tmp5 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(461)
							ret1 = tmp5;
							HX_STACK_LINE(461)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(461)
							ret1->next = null();
						}
						HX_STACK_LINE(461)
						ret1->weak = false;
					}
					HX_STACK_LINE(461)
					ret1->_immutable = immutable;
					HX_STACK_LINE(461)
					{
						HX_STACK_LINE(461)
						ret1->x = x;
						HX_STACK_LINE(461)
						ret1->y = y;
						HX_STACK_LINE(461)
						{
						}
					}
					HX_STACK_LINE(461)
					tmp2 = ret1;
				}
				HX_STACK_LINE(461)
				ret->zpp_inner = tmp2;
				HX_STACK_LINE(461)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(461)
				Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(461)
				{
					HX_STACK_LINE(461)
					{
						HX_STACK_LINE(461)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(461)
						bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(461)
						if ((tmp3)){
							HX_STACK_LINE(461)
							_this->_validate();
						}
					}
					HX_STACK_LINE(461)
					tmp2 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(461)
				Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(461)
				bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(461)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(461)
				if ((tmp4)){
					HX_STACK_LINE(461)
					Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(461)
					{
						HX_STACK_LINE(461)
						{
							HX_STACK_LINE(461)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(461)
							bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(461)
							bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(461)
							bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(461)
							if ((tmp9)){
								HX_STACK_LINE(461)
								_this->_validate();
							}
						}
						HX_STACK_LINE(461)
						Float tmp7 = ret->zpp_inner->y;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(461)
						tmp6 = tmp7;
					}
					HX_STACK_LINE(461)
					Float tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(461)
					tmp5 = (tmp6 == tmp7);
				}
				else{
					HX_STACK_LINE(461)
					tmp5 = false;
				}
				HX_STACK_LINE(461)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(461)
				if ((tmp6)){
					HX_STACK_LINE(461)
					{
						HX_STACK_LINE(461)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(461)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(461)
						{
						}
					}
					HX_STACK_LINE(461)
					{
						HX_STACK_LINE(461)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(461)
						bool tmp7 = (_this->_invalidate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(461)
						if ((tmp7)){
							HX_STACK_LINE(461)
							::zpp_nape::geom::ZPP_Vec2 tmp8 = _this;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(461)
							_this->_invalidate(tmp8);
						}
					}
				}
				HX_STACK_LINE(461)
				ret;
			}
			HX_STACK_LINE(461)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(461)
			tmp = ret;
		}
		HX_STACK_LINE(461)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec2_obj,fromPoint,return )

::nape::geom::Vec2 Vec2_obj::fromPolar( Float length,Float angle,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Vec2","fromPolar",0xa89cd7f0,"nape.geom.Vec2.fromPolar","nape/geom/Vec2.hx",505,0x020b6534)
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(angle,"angle")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(514)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(514)
		{
			HX_STACK_LINE(514)
			Float tmp1 = length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(514)
			Float tmp2 = angle;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(514)
			Float tmp3 = ::Math_obj::cos(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(514)
			Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(514)
			Float x = tmp4;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(514)
			Float tmp5 = length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(514)
			Float tmp6 = angle;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(514)
			Float tmp7 = ::Math_obj::sin(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(514)
			Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(514)
			Float y = tmp8;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(514)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(514)
			{
				HX_STACK_LINE(514)
				::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(514)
				bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(514)
				if ((tmp10)){
					HX_STACK_LINE(514)
					::nape::geom::Vec2 tmp11 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(514)
					ret = tmp11;
				}
				else{
					HX_STACK_LINE(514)
					::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(514)
					ret = tmp11;
					HX_STACK_LINE(514)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(514)
					ret->zpp_pool = null();
				}
			}
			HX_STACK_LINE(514)
			bool tmp9 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(514)
			if ((tmp9)){
				HX_STACK_LINE(514)
				::zpp_nape::geom::ZPP_Vec2 tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(514)
				{
					HX_STACK_LINE(514)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(514)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(514)
					{
						HX_STACK_LINE(514)
						::zpp_nape::geom::ZPP_Vec2 tmp11 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(514)
						bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(514)
						if ((tmp12)){
							HX_STACK_LINE(514)
							::zpp_nape::geom::ZPP_Vec2 tmp13 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(514)
							ret1 = tmp13;
						}
						else{
							HX_STACK_LINE(514)
							::zpp_nape::geom::ZPP_Vec2 tmp13 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(514)
							ret1 = tmp13;
							HX_STACK_LINE(514)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(514)
							ret1->next = null();
						}
						HX_STACK_LINE(514)
						ret1->weak = false;
					}
					HX_STACK_LINE(514)
					ret1->_immutable = immutable;
					HX_STACK_LINE(514)
					{
						HX_STACK_LINE(514)
						ret1->x = x;
						HX_STACK_LINE(514)
						ret1->y = y;
						HX_STACK_LINE(514)
						{
						}
					}
					HX_STACK_LINE(514)
					tmp10 = ret1;
				}
				HX_STACK_LINE(514)
				ret->zpp_inner = tmp10;
				HX_STACK_LINE(514)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(514)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(514)
				{
					HX_STACK_LINE(514)
					{
						HX_STACK_LINE(514)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(514)
						bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(514)
						if ((tmp11)){
							HX_STACK_LINE(514)
							_this->_validate();
						}
					}
					HX_STACK_LINE(514)
					tmp10 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(514)
				Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(514)
				bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(514)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(514)
				if ((tmp12)){
					HX_STACK_LINE(514)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(514)
					{
						HX_STACK_LINE(514)
						{
							HX_STACK_LINE(514)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(514)
							bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(514)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(514)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(514)
							if ((tmp17)){
								HX_STACK_LINE(514)
								_this->_validate();
							}
						}
						HX_STACK_LINE(514)
						Float tmp15 = ret->zpp_inner->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(514)
						tmp14 = tmp15;
					}
					HX_STACK_LINE(514)
					Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(514)
					tmp13 = (tmp14 == tmp15);
				}
				else{
					HX_STACK_LINE(514)
					tmp13 = false;
				}
				HX_STACK_LINE(514)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(514)
				if ((tmp14)){
					HX_STACK_LINE(514)
					{
						HX_STACK_LINE(514)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(514)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(514)
						{
						}
					}
					HX_STACK_LINE(514)
					{
						HX_STACK_LINE(514)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(514)
						bool tmp15 = (_this->_invalidate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(514)
						if ((tmp15)){
							HX_STACK_LINE(514)
							::zpp_nape::geom::ZPP_Vec2 tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(514)
							_this->_invalidate(tmp16);
						}
					}
				}
				HX_STACK_LINE(514)
				ret;
			}
			HX_STACK_LINE(514)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(514)
			tmp = ret;
		}
		HX_STACK_LINE(514)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vec2_obj,fromPolar,return )

Float Vec2_obj::dsq( ::nape::geom::Vec2 a,::nape::geom::Vec2 b){
	HX_STACK_FRAME("nape.geom.Vec2","dsq",0x324b5efe,"nape.geom.Vec2.dsq","nape/geom/Vec2.hx",711,0x020b6534)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(725)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(725)
	{
		HX_STACK_LINE(725)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(725)
		{
			HX_STACK_LINE(725)
			{
				HX_STACK_LINE(725)
				::zpp_nape::geom::ZPP_Vec2 _this = a->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(725)
				bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(725)
				if ((tmp2)){
					HX_STACK_LINE(725)
					_this->_validate();
				}
			}
			HX_STACK_LINE(725)
			tmp1 = a->zpp_inner->x;
		}
		HX_STACK_LINE(725)
		Float ax = tmp1;		HX_STACK_VAR(ax,"ax");
		HX_STACK_LINE(725)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(725)
		{
			HX_STACK_LINE(725)
			{
				HX_STACK_LINE(725)
				::zpp_nape::geom::ZPP_Vec2 _this = a->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(725)
				bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(725)
				if ((tmp3)){
					HX_STACK_LINE(725)
					_this->_validate();
				}
			}
			HX_STACK_LINE(725)
			tmp2 = a->zpp_inner->y;
		}
		HX_STACK_LINE(725)
		Float ay = tmp2;		HX_STACK_VAR(ay,"ay");
		HX_STACK_LINE(725)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(725)
		{
			HX_STACK_LINE(725)
			{
				HX_STACK_LINE(725)
				::zpp_nape::geom::ZPP_Vec2 _this = b->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(725)
				bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(725)
				if ((tmp4)){
					HX_STACK_LINE(725)
					_this->_validate();
				}
			}
			HX_STACK_LINE(725)
			tmp3 = b->zpp_inner->x;
		}
		HX_STACK_LINE(725)
		Float bx = tmp3;		HX_STACK_VAR(bx,"bx");
		HX_STACK_LINE(725)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(725)
		{
			HX_STACK_LINE(725)
			{
				HX_STACK_LINE(725)
				::zpp_nape::geom::ZPP_Vec2 _this = b->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(725)
				bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(725)
				if ((tmp5)){
					HX_STACK_LINE(725)
					_this->_validate();
				}
			}
			HX_STACK_LINE(725)
			tmp4 = b->zpp_inner->y;
		}
		HX_STACK_LINE(725)
		Float by = tmp4;		HX_STACK_VAR(by,"by");
		HX_STACK_LINE(725)
		Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(725)
		Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(725)
		{
			HX_STACK_LINE(725)
			Float tmp5 = (ax - bx);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(725)
			dx = tmp5;
			HX_STACK_LINE(725)
			Float tmp6 = (ay - by);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(725)
			dy = tmp6;
		}
		HX_STACK_LINE(725)
		Float tmp5 = (dx * dx);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(725)
		Float tmp6 = (dy * dy);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(725)
		tmp = (tmp5 + tmp6);
	}
	HX_STACK_LINE(725)
	Float ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(726)
	{
		HX_STACK_LINE(727)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(728)
		tmp1 = a->zpp_inner->weak;
		HX_STACK_LINE(727)
		if ((tmp1)){
			HX_STACK_LINE(730)
			{
				HX_STACK_LINE(730)
				::zpp_nape::geom::ZPP_Vec2 inner = a->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(730)
				a->zpp_inner->outer = null();
				HX_STACK_LINE(730)
				a->zpp_inner = null();
				HX_STACK_LINE(730)
				{
					HX_STACK_LINE(730)
					::nape::geom::Vec2 o = a;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(730)
					::nape::geom::Vec2 tmp2 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(730)
					o->zpp_pool = tmp2;
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
						bool tmp2 = (o->outer != null());		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(730)
						if ((tmp2)){
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
					::zpp_nape::geom::ZPP_Vec2 tmp2 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(730)
					o->next = tmp2;
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
	{
		HX_STACK_LINE(738)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(739)
		tmp1 = b->zpp_inner->weak;
		HX_STACK_LINE(738)
		if ((tmp1)){
			HX_STACK_LINE(741)
			{
				HX_STACK_LINE(741)
				::zpp_nape::geom::ZPP_Vec2 inner = b->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(741)
				b->zpp_inner->outer = null();
				HX_STACK_LINE(741)
				b->zpp_inner = null();
				HX_STACK_LINE(741)
				{
					HX_STACK_LINE(741)
					::nape::geom::Vec2 o = b;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(741)
					::nape::geom::Vec2 tmp2 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(741)
					o->zpp_pool = tmp2;
					HX_STACK_LINE(741)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(741)
				{
					HX_STACK_LINE(741)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(741)
					{
						HX_STACK_LINE(741)
						bool tmp2 = (o->outer != null());		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(741)
						if ((tmp2)){
							HX_STACK_LINE(741)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(741)
							o->outer = null();
						}
						HX_STACK_LINE(741)
						o->_isimmutable = null();
						HX_STACK_LINE(741)
						o->_validate = null();
						HX_STACK_LINE(741)
						o->_invalidate = null();
					}
					HX_STACK_LINE(741)
					::zpp_nape::geom::ZPP_Vec2 tmp2 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(741)
					o->next = tmp2;
					HX_STACK_LINE(741)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(742)
			true;
		}
		else{
			HX_STACK_LINE(745)
			false;
		}
	}
	HX_STACK_LINE(748)
	Float tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(748)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec2_obj,dsq,return )

Float Vec2_obj::distance( ::nape::geom::Vec2 a,::nape::geom::Vec2 b){
	HX_STACK_FRAME("nape.geom.Vec2","distance",0xf03268b9,"nape.geom.Vec2.distance","nape/geom/Vec2.hx",759,0x020b6534)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(773)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(773)
	{
		HX_STACK_LINE(773)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(773)
		{
			HX_STACK_LINE(773)
			{
				HX_STACK_LINE(773)
				::zpp_nape::geom::ZPP_Vec2 _this = a->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(773)
				bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(773)
				if ((tmp2)){
					HX_STACK_LINE(773)
					_this->_validate();
				}
			}
			HX_STACK_LINE(773)
			tmp1 = a->zpp_inner->x;
		}
		HX_STACK_LINE(773)
		Float ax = tmp1;		HX_STACK_VAR(ax,"ax");
		HX_STACK_LINE(773)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(773)
		{
			HX_STACK_LINE(773)
			{
				HX_STACK_LINE(773)
				::zpp_nape::geom::ZPP_Vec2 _this = a->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(773)
				bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(773)
				if ((tmp3)){
					HX_STACK_LINE(773)
					_this->_validate();
				}
			}
			HX_STACK_LINE(773)
			tmp2 = a->zpp_inner->y;
		}
		HX_STACK_LINE(773)
		Float ay = tmp2;		HX_STACK_VAR(ay,"ay");
		HX_STACK_LINE(773)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(773)
		{
			HX_STACK_LINE(773)
			{
				HX_STACK_LINE(773)
				::zpp_nape::geom::ZPP_Vec2 _this = b->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(773)
				bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(773)
				if ((tmp4)){
					HX_STACK_LINE(773)
					_this->_validate();
				}
			}
			HX_STACK_LINE(773)
			tmp3 = b->zpp_inner->x;
		}
		HX_STACK_LINE(773)
		Float bx = tmp3;		HX_STACK_VAR(bx,"bx");
		HX_STACK_LINE(773)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(773)
		{
			HX_STACK_LINE(773)
			{
				HX_STACK_LINE(773)
				::zpp_nape::geom::ZPP_Vec2 _this = b->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(773)
				bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(773)
				if ((tmp5)){
					HX_STACK_LINE(773)
					_this->_validate();
				}
			}
			HX_STACK_LINE(773)
			tmp4 = b->zpp_inner->y;
		}
		HX_STACK_LINE(773)
		Float by = tmp4;		HX_STACK_VAR(by,"by");
		HX_STACK_LINE(773)
		Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(773)
		Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(773)
		{
			HX_STACK_LINE(773)
			Float tmp5 = (ax - bx);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(773)
			dx = tmp5;
			HX_STACK_LINE(773)
			Float tmp6 = (ay - by);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(773)
			dy = tmp6;
		}
		HX_STACK_LINE(773)
		Float tmp5 = (dx * dx);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(773)
		Float tmp6 = (dy * dy);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(773)
		tmp = (tmp5 + tmp6);
	}
	HX_STACK_LINE(773)
	Float tmp1 = ::Math_obj::sqrt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(773)
	Float ret = tmp1;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(774)
	{
		HX_STACK_LINE(775)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(776)
		tmp2 = a->zpp_inner->weak;
		HX_STACK_LINE(775)
		if ((tmp2)){
			HX_STACK_LINE(778)
			{
				HX_STACK_LINE(778)
				::zpp_nape::geom::ZPP_Vec2 inner = a->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(778)
				a->zpp_inner->outer = null();
				HX_STACK_LINE(778)
				a->zpp_inner = null();
				HX_STACK_LINE(778)
				{
					HX_STACK_LINE(778)
					::nape::geom::Vec2 o = a;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(778)
					::nape::geom::Vec2 tmp3 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(778)
					o->zpp_pool = tmp3;
					HX_STACK_LINE(778)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(778)
				{
					HX_STACK_LINE(778)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(778)
					{
						HX_STACK_LINE(778)
						bool tmp3 = (o->outer != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(778)
						if ((tmp3)){
							HX_STACK_LINE(778)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(778)
							o->outer = null();
						}
						HX_STACK_LINE(778)
						o->_isimmutable = null();
						HX_STACK_LINE(778)
						o->_validate = null();
						HX_STACK_LINE(778)
						o->_invalidate = null();
					}
					HX_STACK_LINE(778)
					::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(778)
					o->next = tmp3;
					HX_STACK_LINE(778)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(779)
			true;
		}
		else{
			HX_STACK_LINE(782)
			false;
		}
	}
	HX_STACK_LINE(785)
	{
		HX_STACK_LINE(786)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(787)
		tmp2 = b->zpp_inner->weak;
		HX_STACK_LINE(786)
		if ((tmp2)){
			HX_STACK_LINE(789)
			{
				HX_STACK_LINE(789)
				::zpp_nape::geom::ZPP_Vec2 inner = b->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(789)
				b->zpp_inner->outer = null();
				HX_STACK_LINE(789)
				b->zpp_inner = null();
				HX_STACK_LINE(789)
				{
					HX_STACK_LINE(789)
					::nape::geom::Vec2 o = b;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(789)
					::nape::geom::Vec2 tmp3 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(789)
					o->zpp_pool = tmp3;
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
						bool tmp3 = (o->outer != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(789)
						if ((tmp3)){
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
					::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(789)
					o->next = tmp3;
					HX_STACK_LINE(789)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(790)
			true;
		}
		else{
			HX_STACK_LINE(793)
			false;
		}
	}
	HX_STACK_LINE(796)
	Float tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(796)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec2_obj,distance,return )


Vec2_obj::Vec2_obj()
{
}

void Vec2_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Vec2);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_MEMBER_NAME(zpp_pool,"zpp_pool");
	HX_MARK_END_CLASS();
}

void Vec2_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_VISIT_MEMBER_NAME(zpp_pool,"zpp_pool");
}

Dynamic Vec2_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return get_y(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"lsq") ) { return lsq_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"sub") ) { return sub_dyn(); }
		if (HX_FIELD_EQ(inName,"mul") ) { return mul_dyn(); }
		if (HX_FIELD_EQ(inName,"dot") ) { return dot_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"unit") ) { return unit_dyn(); }
		if (HX_FIELD_EQ(inName,"perp") ) { return perp_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"setxy") ) { return setxy_dyn(); }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == hx::paccAlways) return get_angle(); }
		if (HX_FIELD_EQ(inName,"addeq") ) { return addeq_dyn(); }
		if (HX_FIELD_EQ(inName,"subeq") ) { return subeq_dyn(); }
		if (HX_FIELD_EQ(inName,"muleq") ) { return muleq_dyn(); }
		if (HX_FIELD_EQ(inName,"cross") ) { return cross_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"addMul") ) { return addMul_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"toPoint") ) { return toPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"reflect") ) { return reflect_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"get_angle") ) { return get_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"normalise") ) { return normalise_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return set_length_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Vec2_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"dsq") ) { outValue = dsq_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"weak") ) { outValue = weak_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { outValue = distance_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromPoint") ) { outValue = fromPoint_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromPolar") ) { outValue = fromPolar_dyn(); return true;  }
	}
	return false;
}

Dynamic Vec2_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == hx::paccAlways) return set_angle(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return set_length(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Vec2_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_Vec2*/ ,(int)offsetof(Vec2_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(Vec2_obj,zpp_pool),HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("toPoint","\xd5","\x00","\x14","\x93"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	HX_HCSTRING("lsq","\x0a","\x58","\x52","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("setxy","\x23","\xb1","\x2f","\x7a"),
	HX_HCSTRING("get_angle","\x2a","\xa0","\x8b","\x66"),
	HX_HCSTRING("set_angle","\x36","\x8c","\xdc","\x49"),
	HX_HCSTRING("rotate","\x5b","\x46","\x20","\xcb"),
	HX_HCSTRING("reflect","\x3d","\x84","\x29","\xe9"),
	HX_HCSTRING("normalise","\x74","\x31","\xa1","\xab"),
	HX_HCSTRING("unit","\x84","\xca","\xa9","\x4d"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("addMul","\x63","\x2c","\x04","\x9f"),
	HX_HCSTRING("sub","\x80","\xa9","\x57","\x00"),
	HX_HCSTRING("mul","\x04","\x1c","\x53","\x00"),
	HX_HCSTRING("addeq","\xcd","\xd4","\x43","\x1c"),
	HX_HCSTRING("subeq","\xec","\x61","\xb5","\x84"),
	HX_HCSTRING("muleq","\x70","\x7d","\x55","\x10"),
	HX_HCSTRING("dot","\x89","\x42","\x4c","\x00"),
	HX_HCSTRING("cross","\x80","\x5f","\x5a","\x4c"),
	HX_HCSTRING("perp","\xf3","\xec","\x54","\x4a"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vec2_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vec2_obj::__mClass,"__mClass");
};

#endif

hx::Class Vec2_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("weak","\x78","\x5c","\xf5","\x4e"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("fromPoint","\x86","\x9e","\x18","\x7b"),
	HX_HCSTRING("fromPolar","\xf4","\xd9","\x1a","\x7b"),
	HX_HCSTRING("dsq","\x02","\x46","\x4c","\x00"),
	HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"),
	::String(null()) };

void Vec2_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.geom.Vec2","\x6a","\x4b","\x9c","\xff");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Vec2_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Vec2_obj >;
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
