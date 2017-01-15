#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace nape{
namespace geom{

Void AABB_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height)
{
HX_STACK_FRAME("nape.geom.AABB","new",0xaccd397e,"nape.geom.AABB.new","nape/geom/AABB.hx",182,0x3e49ef52)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float width = __o_width.Default(0);
Float height = __o_height.Default(0);
{
	HX_STACK_LINE(186)
	this->zpp_inner = null();
	HX_STACK_LINE(214)
	::zpp_nape::geom::ZPP_AABB tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(214)
	{
		HX_STACK_LINE(214)
		::zpp_nape::geom::ZPP_AABB ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(214)
			::zpp_nape::geom::ZPP_AABB tmp1 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(214)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(214)
			if ((tmp2)){
				HX_STACK_LINE(214)
				::zpp_nape::geom::ZPP_AABB tmp3 = ::zpp_nape::geom::ZPP_AABB_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(214)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(214)
				::zpp_nape::geom::ZPP_AABB tmp3 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(214)
				ret = tmp3;
				HX_STACK_LINE(214)
				::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = ret->next;
				HX_STACK_LINE(214)
				ret->next = null();
			}
			HX_STACK_LINE(214)
			Dynamic();
		}
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(214)
			ret->minx = x;
			HX_STACK_LINE(214)
			ret->miny = y;
			HX_STACK_LINE(214)
			{
			}
		}
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(214)
			Float tmp1 = (x + width);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(214)
			ret->maxx = tmp1;
			HX_STACK_LINE(214)
			Float tmp2 = (y + height);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(214)
			ret->maxy = tmp2;
			HX_STACK_LINE(214)
			{
			}
		}
		HX_STACK_LINE(214)
		tmp = ret;
	}
	HX_STACK_LINE(214)
	this->zpp_inner = tmp;
	HX_STACK_LINE(215)
	::zpp_nape::geom::ZPP_AABB tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(215)
	tmp1->outer = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//AABB_obj::~AABB_obj() { }

Dynamic AABB_obj::__CreateEmpty() { return  new AABB_obj; }
hx::ObjectPtr< AABB_obj > AABB_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height)
{  hx::ObjectPtr< AABB_obj > _result_ = new AABB_obj();
	_result_->__construct(__o_x,__o_y,__o_width,__o_height);
	return _result_;}

Dynamic AABB_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AABB_obj > _result_ = new AABB_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::nape::geom::AABB AABB_obj::copy( ){
	HX_STACK_FRAME("nape.geom.AABB","copy",0x7f874cd7,"nape.geom.AABB.copy","nape/geom/AABB.hx",226,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(227)
	{
		HX_STACK_LINE(227)
		::zpp_nape::geom::ZPP_AABB tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(227)
		::zpp_nape::geom::ZPP_AABB _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(227)
		bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(227)
		if ((tmp1)){
			HX_STACK_LINE(227)
			_this->_validate();
		}
	}
	HX_STACK_LINE(228)
	::zpp_nape::geom::ZPP_AABB tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(228)
	{
		HX_STACK_LINE(228)
		::zpp_nape::geom::ZPP_AABB tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(228)
		::zpp_nape::geom::ZPP_AABB _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(228)
		{
			HX_STACK_LINE(228)
			::zpp_nape::geom::ZPP_AABB ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(228)
			{
				HX_STACK_LINE(228)
				::zpp_nape::geom::ZPP_AABB tmp2 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(228)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(228)
				if ((tmp3)){
					HX_STACK_LINE(228)
					::zpp_nape::geom::ZPP_AABB tmp4 = ::zpp_nape::geom::ZPP_AABB_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(228)
					ret = tmp4;
				}
				else{
					HX_STACK_LINE(228)
					::zpp_nape::geom::ZPP_AABB tmp4 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(228)
					ret = tmp4;
					HX_STACK_LINE(228)
					::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = ret->next;
					HX_STACK_LINE(228)
					ret->next = null();
				}
				HX_STACK_LINE(228)
				Dynamic();
			}
			HX_STACK_LINE(228)
			{
				HX_STACK_LINE(228)
				ret->minx = _this->minx;
				HX_STACK_LINE(228)
				ret->miny = _this->miny;
				HX_STACK_LINE(228)
				{
				}
			}
			HX_STACK_LINE(228)
			{
				HX_STACK_LINE(228)
				ret->maxx = _this->maxx;
				HX_STACK_LINE(228)
				ret->maxy = _this->maxy;
				HX_STACK_LINE(228)
				{
				}
			}
			HX_STACK_LINE(228)
			tmp = ret;
		}
	}
	HX_STACK_LINE(228)
	::nape::geom::AABB tmp1 = tmp->wrapper();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(228)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,copy,return )

::openfl::_legacy::geom::Rectangle AABB_obj::toRect( ){
	HX_STACK_FRAME("nape.geom.AABB","toRect",0xa1c355e1,"nape.geom.AABB.toRect","nape/geom/AABB.hx",260,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(261)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(261)
	{
		HX_STACK_LINE(261)
		{
			HX_STACK_LINE(261)
			::zpp_nape::geom::ZPP_AABB tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(261)
			::zpp_nape::geom::ZPP_AABB _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(261)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(261)
			if ((tmp2)){
				HX_STACK_LINE(261)
				_this->_validate();
			}
		}
		HX_STACK_LINE(261)
		::zpp_nape::geom::ZPP_AABB tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(261)
		tmp = tmp1->minx;
	}
	HX_STACK_LINE(261)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(261)
	{
		HX_STACK_LINE(261)
		{
			HX_STACK_LINE(261)
			::zpp_nape::geom::ZPP_AABB tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(261)
			::zpp_nape::geom::ZPP_AABB _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(261)
			bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(261)
			if ((tmp3)){
				HX_STACK_LINE(261)
				_this->_validate();
			}
		}
		HX_STACK_LINE(261)
		::zpp_nape::geom::ZPP_AABB tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(261)
		tmp1 = tmp2->miny;
	}
	HX_STACK_LINE(261)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(261)
	{
		HX_STACK_LINE(261)
		{
			HX_STACK_LINE(261)
			::zpp_nape::geom::ZPP_AABB tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(261)
			::zpp_nape::geom::ZPP_AABB _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(261)
			bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(261)
			if ((tmp4)){
				HX_STACK_LINE(261)
				_this->_validate();
			}
		}
		HX_STACK_LINE(261)
		{
			HX_STACK_LINE(261)
			::zpp_nape::geom::ZPP_AABB tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(261)
			::zpp_nape::geom::ZPP_AABB _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(261)
			tmp2 = (_this->maxx - _this->minx);
		}
	}
	HX_STACK_LINE(261)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(261)
	{
		HX_STACK_LINE(261)
		{
			HX_STACK_LINE(261)
			::zpp_nape::geom::ZPP_AABB tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(261)
			::zpp_nape::geom::ZPP_AABB _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(261)
			bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(261)
			if ((tmp5)){
				HX_STACK_LINE(261)
				_this->_validate();
			}
		}
		HX_STACK_LINE(261)
		{
			HX_STACK_LINE(261)
			::zpp_nape::geom::ZPP_AABB tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(261)
			::zpp_nape::geom::ZPP_AABB _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(261)
			tmp3 = (_this->maxy - _this->miny);
		}
	}
	HX_STACK_LINE(261)
	::openfl::_legacy::geom::Rectangle tmp4 = ::openfl::_legacy::geom::Rectangle_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(261)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,toRect,return )

::nape::geom::Vec2 AABB_obj::get_min( ){
	HX_STACK_FRAME("nape.geom.AABB","get_min",0x5caf2a47,"nape.geom.AABB.get_min","nape/geom/AABB.hx",280,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(281)
	::zpp_nape::geom::ZPP_AABB tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(281)
	::nape::geom::Vec2 tmp1 = tmp->getmin();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(281)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,get_min,return )

::nape::geom::Vec2 AABB_obj::set_min( ::nape::geom::Vec2 min){
	HX_STACK_FRAME("nape.geom.AABB","set_min",0x4fb0bb53,"nape.geom.AABB.set_min","nape/geom/AABB.hx",283,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_ARG(min,"min")
	HX_STACK_LINE(309)
	{
		HX_STACK_LINE(309)
		::zpp_nape::geom::ZPP_AABB tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(309)
		::nape::geom::Vec2 tmp1 = tmp->getmin();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(309)
		::nape::geom::Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(309)
		::nape::geom::Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(309)
		{
			HX_STACK_LINE(309)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(309)
			{
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					::zpp_nape::geom::ZPP_Vec2 _this1 = min->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(309)
					bool tmp4 = (_this1->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(309)
					if ((tmp4)){
						HX_STACK_LINE(309)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(309)
				tmp3 = min->zpp_inner->x;
			}
			HX_STACK_LINE(309)
			Float x = tmp3;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(309)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(309)
			{
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					::zpp_nape::geom::ZPP_Vec2 _this1 = min->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(309)
					bool tmp5 = (_this1->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(309)
					if ((tmp5)){
						HX_STACK_LINE(309)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(309)
				tmp4 = min->zpp_inner->y;
			}
			HX_STACK_LINE(309)
			Float y = tmp4;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(309)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(309)
			{
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(309)
					bool tmp6 = (_this1->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(309)
					if ((tmp6)){
						HX_STACK_LINE(309)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(309)
				tmp5 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(309)
			Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(309)
			bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(309)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(309)
			if ((tmp7)){
				HX_STACK_LINE(309)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(309)
						bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(309)
						bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(309)
						bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(309)
						if ((tmp12)){
							HX_STACK_LINE(309)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(309)
					Float tmp10 = _this->zpp_inner->y;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(309)
					tmp9 = tmp10;
				}
				HX_STACK_LINE(309)
				Float tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(309)
				tmp8 = (tmp9 == tmp10);
			}
			else{
				HX_STACK_LINE(309)
				tmp8 = false;
			}
			HX_STACK_LINE(309)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(309)
			if ((tmp9)){
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(309)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(309)
					{
					}
				}
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(309)
					bool tmp10 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(309)
					if ((tmp10)){
						HX_STACK_LINE(309)
						::zpp_nape::geom::ZPP_Vec2 tmp11 = _this1;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(309)
						_this1->_invalidate(tmp11);
					}
				}
			}
			HX_STACK_LINE(309)
			tmp2 = _this;
		}
		HX_STACK_LINE(309)
		::nape::geom::Vec2 ret = tmp2;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(309)
		{
			HX_STACK_LINE(309)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(309)
			tmp3 = min->zpp_inner->weak;
			HX_STACK_LINE(309)
			if ((tmp3)){
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					::zpp_nape::geom::ZPP_Vec2 inner = min->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(309)
					min->zpp_inner->outer = null();
					HX_STACK_LINE(309)
					min->zpp_inner = null();
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						::nape::geom::Vec2 o = min;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(309)
						::nape::geom::Vec2 tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(309)
						o->zpp_pool = tmp4;
						HX_STACK_LINE(309)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(309)
						{
							HX_STACK_LINE(309)
							bool tmp4 = (o->outer != null());		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(309)
							if ((tmp4)){
								HX_STACK_LINE(309)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(309)
								o->outer = null();
							}
							HX_STACK_LINE(309)
							o->_isimmutable = null();
							HX_STACK_LINE(309)
							o->_validate = null();
							HX_STACK_LINE(309)
							o->_invalidate = null();
						}
						HX_STACK_LINE(309)
						::zpp_nape::geom::ZPP_Vec2 tmp4 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(309)
						o->next = tmp4;
						HX_STACK_LINE(309)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(309)
				true;
			}
			else{
				HX_STACK_LINE(309)
				false;
			}
		}
		HX_STACK_LINE(309)
		ret;
	}
	HX_STACK_LINE(311)
	::zpp_nape::geom::ZPP_AABB tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(311)
	::nape::geom::Vec2 tmp1 = tmp->getmin();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(311)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB_obj,set_min,return )

::nape::geom::Vec2 AABB_obj::get_max( ){
	HX_STACK_FRAME("nape.geom.AABB","get_max",0x5caf2359,"nape.geom.AABB.get_max","nape/geom/AABB.hx",329,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(330)
	::zpp_nape::geom::ZPP_AABB tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(330)
	::nape::geom::Vec2 tmp1 = tmp->getmax();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(330)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,get_max,return )

::nape::geom::Vec2 AABB_obj::set_max( ::nape::geom::Vec2 max){
	HX_STACK_FRAME("nape.geom.AABB","set_max",0x4fb0b465,"nape.geom.AABB.set_max","nape/geom/AABB.hx",332,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(358)
	{
		HX_STACK_LINE(358)
		::zpp_nape::geom::ZPP_AABB tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(358)
		::nape::geom::Vec2 tmp1 = tmp->getmax();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(358)
		::nape::geom::Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(358)
		::nape::geom::Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(358)
		{
			HX_STACK_LINE(358)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(358)
			{
				HX_STACK_LINE(358)
				{
					HX_STACK_LINE(358)
					::zpp_nape::geom::ZPP_Vec2 _this1 = max->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(358)
					bool tmp4 = (_this1->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(358)
					if ((tmp4)){
						HX_STACK_LINE(358)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(358)
				tmp3 = max->zpp_inner->x;
			}
			HX_STACK_LINE(358)
			Float x = tmp3;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(358)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(358)
			{
				HX_STACK_LINE(358)
				{
					HX_STACK_LINE(358)
					::zpp_nape::geom::ZPP_Vec2 _this1 = max->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(358)
					bool tmp5 = (_this1->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(358)
					if ((tmp5)){
						HX_STACK_LINE(358)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(358)
				tmp4 = max->zpp_inner->y;
			}
			HX_STACK_LINE(358)
			Float y = tmp4;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(358)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(358)
			{
				HX_STACK_LINE(358)
				{
					HX_STACK_LINE(358)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(358)
					bool tmp6 = (_this1->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(358)
					if ((tmp6)){
						HX_STACK_LINE(358)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(358)
				tmp5 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(358)
			Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(358)
			bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(358)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(358)
			if ((tmp7)){
				HX_STACK_LINE(358)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(358)
				{
					HX_STACK_LINE(358)
					{
						HX_STACK_LINE(358)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(358)
						bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(358)
						bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(358)
						bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(358)
						if ((tmp12)){
							HX_STACK_LINE(358)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(358)
					Float tmp10 = _this->zpp_inner->y;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(358)
					tmp9 = tmp10;
				}
				HX_STACK_LINE(358)
				Float tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(358)
				tmp8 = (tmp9 == tmp10);
			}
			else{
				HX_STACK_LINE(358)
				tmp8 = false;
			}
			HX_STACK_LINE(358)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(358)
			if ((tmp9)){
				HX_STACK_LINE(358)
				{
					HX_STACK_LINE(358)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(358)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(358)
					{
					}
				}
				HX_STACK_LINE(358)
				{
					HX_STACK_LINE(358)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(358)
					bool tmp10 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(358)
					if ((tmp10)){
						HX_STACK_LINE(358)
						::zpp_nape::geom::ZPP_Vec2 tmp11 = _this1;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(358)
						_this1->_invalidate(tmp11);
					}
				}
			}
			HX_STACK_LINE(358)
			tmp2 = _this;
		}
		HX_STACK_LINE(358)
		::nape::geom::Vec2 ret = tmp2;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(358)
		{
			HX_STACK_LINE(358)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(358)
			tmp3 = max->zpp_inner->weak;
			HX_STACK_LINE(358)
			if ((tmp3)){
				HX_STACK_LINE(358)
				{
					HX_STACK_LINE(358)
					::zpp_nape::geom::ZPP_Vec2 inner = max->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(358)
					max->zpp_inner->outer = null();
					HX_STACK_LINE(358)
					max->zpp_inner = null();
					HX_STACK_LINE(358)
					{
						HX_STACK_LINE(358)
						::nape::geom::Vec2 o = max;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(358)
						::nape::geom::Vec2 tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(358)
						o->zpp_pool = tmp4;
						HX_STACK_LINE(358)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(358)
					{
						HX_STACK_LINE(358)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(358)
						{
							HX_STACK_LINE(358)
							bool tmp4 = (o->outer != null());		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(358)
							if ((tmp4)){
								HX_STACK_LINE(358)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(358)
								o->outer = null();
							}
							HX_STACK_LINE(358)
							o->_isimmutable = null();
							HX_STACK_LINE(358)
							o->_validate = null();
							HX_STACK_LINE(358)
							o->_invalidate = null();
						}
						HX_STACK_LINE(358)
						::zpp_nape::geom::ZPP_Vec2 tmp4 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(358)
						o->next = tmp4;
						HX_STACK_LINE(358)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(358)
				true;
			}
			else{
				HX_STACK_LINE(358)
				false;
			}
		}
		HX_STACK_LINE(358)
		ret;
	}
	HX_STACK_LINE(360)
	::zpp_nape::geom::ZPP_AABB tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(360)
	::nape::geom::Vec2 tmp1 = tmp->getmax();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(360)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB_obj,set_max,return )

Float AABB_obj::get_x( ){
	HX_STACK_FRAME("nape.geom.AABB","get_x",0x5ddd11ed,"nape.geom.AABB.get_x","nape/geom/AABB.hx",370,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(371)
	{
		HX_STACK_LINE(371)
		::zpp_nape::geom::ZPP_AABB tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(371)
		::zpp_nape::geom::ZPP_AABB _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(371)
		bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(371)
		if ((tmp1)){
			HX_STACK_LINE(371)
			_this->_validate();
		}
	}
	HX_STACK_LINE(372)
	::zpp_nape::geom::ZPP_AABB tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(372)
	Float tmp1 = tmp->minx;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(372)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,get_x,return )

Float AABB_obj::set_x( Float x){
	HX_STACK_FRAME("nape.geom.AABB","set_x",0x46ac07f9,"nape.geom.AABB.set_x","nape/geom/AABB.hx",374,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(375)
	{
		HX_STACK_LINE(381)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(381)
		{
			HX_STACK_LINE(381)
			{
				HX_STACK_LINE(381)
				::zpp_nape::geom::ZPP_AABB tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(381)
				::zpp_nape::geom::ZPP_AABB _this = tmp1;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(381)
				bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(381)
				if ((tmp2)){
					HX_STACK_LINE(381)
					_this->_validate();
				}
			}
			HX_STACK_LINE(381)
			::zpp_nape::geom::ZPP_AABB tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(381)
			tmp = tmp1->minx;
		}
		HX_STACK_LINE(381)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(381)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(381)
		if ((tmp2)){
			HX_STACK_LINE(385)
			Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(385)
			::zpp_nape::geom::ZPP_AABB tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(385)
			Float tmp5 = tmp4->minx;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(385)
			Float tmp6 = (tmp3 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(385)
			::zpp_nape::geom::ZPP_AABB tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(385)
			hx::AddEq(tmp7->maxx,tmp6);
			HX_STACK_LINE(386)
			::zpp_nape::geom::ZPP_AABB tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(386)
			tmp8->minx = x;
			HX_STACK_LINE(387)
			{
				HX_STACK_LINE(387)
				::zpp_nape::geom::ZPP_AABB tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(387)
				::zpp_nape::geom::ZPP_AABB _this = tmp9;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(387)
				bool tmp10 = (_this->_invalidate != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(387)
				if ((tmp10)){
					HX_STACK_LINE(387)
					::zpp_nape::geom::ZPP_AABB tmp11 = _this;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(387)
					_this->_invalidate(tmp11);
				}
			}
		}
	}
	HX_STACK_LINE(390)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(390)
	{
		HX_STACK_LINE(390)
		{
			HX_STACK_LINE(390)
			::zpp_nape::geom::ZPP_AABB tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(390)
			::zpp_nape::geom::ZPP_AABB _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(390)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(390)
			if ((tmp2)){
				HX_STACK_LINE(390)
				_this->_validate();
			}
		}
		HX_STACK_LINE(390)
		::zpp_nape::geom::ZPP_AABB tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(390)
		tmp = tmp1->minx;
	}
	HX_STACK_LINE(390)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB_obj,set_x,return )

Float AABB_obj::get_y( ){
	HX_STACK_FRAME("nape.geom.AABB","get_y",0x5ddd11ee,"nape.geom.AABB.get_y","nape/geom/AABB.hx",400,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(401)
	{
		HX_STACK_LINE(401)
		::zpp_nape::geom::ZPP_AABB tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(401)
		::zpp_nape::geom::ZPP_AABB _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(401)
		bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(401)
		if ((tmp1)){
			HX_STACK_LINE(401)
			_this->_validate();
		}
	}
	HX_STACK_LINE(402)
	::zpp_nape::geom::ZPP_AABB tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(402)
	Float tmp1 = tmp->miny;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(402)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,get_y,return )

Float AABB_obj::set_y( Float y){
	HX_STACK_FRAME("nape.geom.AABB","set_y",0x46ac07fa,"nape.geom.AABB.set_y","nape/geom/AABB.hx",404,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(405)
	{
		HX_STACK_LINE(411)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(411)
		{
			HX_STACK_LINE(411)
			{
				HX_STACK_LINE(411)
				::zpp_nape::geom::ZPP_AABB tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(411)
				::zpp_nape::geom::ZPP_AABB _this = tmp1;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(411)
				bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(411)
				if ((tmp2)){
					HX_STACK_LINE(411)
					_this->_validate();
				}
			}
			HX_STACK_LINE(411)
			::zpp_nape::geom::ZPP_AABB tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(411)
			tmp = tmp1->miny;
		}
		HX_STACK_LINE(411)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(411)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(411)
		if ((tmp2)){
			HX_STACK_LINE(415)
			Float tmp3 = y;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(415)
			::zpp_nape::geom::ZPP_AABB tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(415)
			Float tmp5 = tmp4->miny;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(415)
			Float tmp6 = (tmp3 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(415)
			::zpp_nape::geom::ZPP_AABB tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(415)
			hx::AddEq(tmp7->maxy,tmp6);
			HX_STACK_LINE(416)
			::zpp_nape::geom::ZPP_AABB tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(416)
			tmp8->miny = y;
			HX_STACK_LINE(417)
			{
				HX_STACK_LINE(417)
				::zpp_nape::geom::ZPP_AABB tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(417)
				::zpp_nape::geom::ZPP_AABB _this = tmp9;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(417)
				bool tmp10 = (_this->_invalidate != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(417)
				if ((tmp10)){
					HX_STACK_LINE(417)
					::zpp_nape::geom::ZPP_AABB tmp11 = _this;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(417)
					_this->_invalidate(tmp11);
				}
			}
		}
	}
	HX_STACK_LINE(420)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(420)
	{
		HX_STACK_LINE(420)
		{
			HX_STACK_LINE(420)
			::zpp_nape::geom::ZPP_AABB tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(420)
			::zpp_nape::geom::ZPP_AABB _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(420)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(420)
			if ((tmp2)){
				HX_STACK_LINE(420)
				_this->_validate();
			}
		}
		HX_STACK_LINE(420)
		::zpp_nape::geom::ZPP_AABB tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(420)
		tmp = tmp1->miny;
	}
	HX_STACK_LINE(420)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB_obj,set_y,return )

Float AABB_obj::get_width( ){
	HX_STACK_FRAME("nape.geom.AABB","get_width",0x087e25fb,"nape.geom.AABB.get_width","nape/geom/AABB.hx",430,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(431)
	{
		HX_STACK_LINE(431)
		::zpp_nape::geom::ZPP_AABB tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(431)
		::zpp_nape::geom::ZPP_AABB _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(431)
		bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(431)
		if ((tmp1)){
			HX_STACK_LINE(431)
			_this->_validate();
		}
	}
	HX_STACK_LINE(432)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(432)
	{
		HX_STACK_LINE(432)
		::zpp_nape::geom::ZPP_AABB tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(432)
		::zpp_nape::geom::ZPP_AABB _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(432)
		tmp = (_this->maxx - _this->minx);
	}
	HX_STACK_LINE(432)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,get_width,return )

Float AABB_obj::set_width( Float width){
	HX_STACK_FRAME("nape.geom.AABB","set_width",0xebcf1207,"nape.geom.AABB.set_width","nape/geom/AABB.hx",434,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_LINE(435)
	{
		HX_STACK_LINE(441)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(441)
		{
			HX_STACK_LINE(441)
			{
				HX_STACK_LINE(441)
				::zpp_nape::geom::ZPP_AABB tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(441)
				::zpp_nape::geom::ZPP_AABB _this = tmp1;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(441)
				bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(441)
				if ((tmp2)){
					HX_STACK_LINE(441)
					_this->_validate();
				}
			}
			HX_STACK_LINE(441)
			{
				HX_STACK_LINE(441)
				::zpp_nape::geom::ZPP_AABB tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(441)
				::zpp_nape::geom::ZPP_AABB _this = tmp1;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(441)
				tmp = (_this->maxx - _this->minx);
			}
		}
		HX_STACK_LINE(441)
		Float tmp1 = width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(441)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(441)
		if ((tmp2)){
			HX_STACK_LINE(450)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(450)
			{
				HX_STACK_LINE(450)
				{
					HX_STACK_LINE(450)
					::zpp_nape::geom::ZPP_AABB tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(450)
					::zpp_nape::geom::ZPP_AABB _this = tmp4;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(450)
					bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(450)
					if ((tmp5)){
						HX_STACK_LINE(450)
						_this->_validate();
					}
				}
				HX_STACK_LINE(450)
				::zpp_nape::geom::ZPP_AABB tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(450)
				tmp3 = tmp4->minx;
			}
			HX_STACK_LINE(450)
			Float tmp4 = width;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(450)
			Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(450)
			::zpp_nape::geom::ZPP_AABB tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(450)
			tmp6->maxx = tmp5;
			HX_STACK_LINE(451)
			{
				HX_STACK_LINE(451)
				::zpp_nape::geom::ZPP_AABB tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(451)
				::zpp_nape::geom::ZPP_AABB _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(451)
				bool tmp8 = (_this->_invalidate != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(451)
				if ((tmp8)){
					HX_STACK_LINE(451)
					::zpp_nape::geom::ZPP_AABB tmp9 = _this;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(451)
					_this->_invalidate(tmp9);
				}
			}
		}
	}
	HX_STACK_LINE(454)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(454)
	{
		HX_STACK_LINE(454)
		{
			HX_STACK_LINE(454)
			::zpp_nape::geom::ZPP_AABB tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(454)
			::zpp_nape::geom::ZPP_AABB _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(454)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(454)
			if ((tmp2)){
				HX_STACK_LINE(454)
				_this->_validate();
			}
		}
		HX_STACK_LINE(454)
		{
			HX_STACK_LINE(454)
			::zpp_nape::geom::ZPP_AABB tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(454)
			::zpp_nape::geom::ZPP_AABB _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(454)
			tmp = (_this->maxx - _this->minx);
		}
	}
	HX_STACK_LINE(454)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB_obj,set_width,return )

Float AABB_obj::get_height( ){
	HX_STACK_FRAME("nape.geom.AABB","get_height",0x1c328e52,"nape.geom.AABB.get_height","nape/geom/AABB.hx",464,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(465)
	{
		HX_STACK_LINE(465)
		::zpp_nape::geom::ZPP_AABB tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(465)
		::zpp_nape::geom::ZPP_AABB _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(465)
		bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(465)
		if ((tmp1)){
			HX_STACK_LINE(465)
			_this->_validate();
		}
	}
	HX_STACK_LINE(466)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(466)
	{
		HX_STACK_LINE(466)
		::zpp_nape::geom::ZPP_AABB tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(466)
		::zpp_nape::geom::ZPP_AABB _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(466)
		tmp = (_this->maxy - _this->miny);
	}
	HX_STACK_LINE(466)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,get_height,return )

Float AABB_obj::set_height( Float height){
	HX_STACK_FRAME("nape.geom.AABB","set_height",0x1fb02cc6,"nape.geom.AABB.set_height","nape/geom/AABB.hx",468,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(469)
	{
		HX_STACK_LINE(475)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(475)
		{
			HX_STACK_LINE(475)
			{
				HX_STACK_LINE(475)
				::zpp_nape::geom::ZPP_AABB tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(475)
				::zpp_nape::geom::ZPP_AABB _this = tmp1;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(475)
				bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(475)
				if ((tmp2)){
					HX_STACK_LINE(475)
					_this->_validate();
				}
			}
			HX_STACK_LINE(475)
			{
				HX_STACK_LINE(475)
				::zpp_nape::geom::ZPP_AABB tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(475)
				::zpp_nape::geom::ZPP_AABB _this = tmp1;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(475)
				tmp = (_this->maxy - _this->miny);
			}
		}
		HX_STACK_LINE(475)
		Float tmp1 = height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(475)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(475)
		if ((tmp2)){
			HX_STACK_LINE(484)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(484)
			{
				HX_STACK_LINE(484)
				{
					HX_STACK_LINE(484)
					::zpp_nape::geom::ZPP_AABB tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(484)
					::zpp_nape::geom::ZPP_AABB _this = tmp4;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(484)
					bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(484)
					if ((tmp5)){
						HX_STACK_LINE(484)
						_this->_validate();
					}
				}
				HX_STACK_LINE(484)
				::zpp_nape::geom::ZPP_AABB tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(484)
				tmp3 = tmp4->miny;
			}
			HX_STACK_LINE(484)
			Float tmp4 = height;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(484)
			Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(484)
			::zpp_nape::geom::ZPP_AABB tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(484)
			tmp6->maxy = tmp5;
			HX_STACK_LINE(485)
			{
				HX_STACK_LINE(485)
				::zpp_nape::geom::ZPP_AABB tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(485)
				::zpp_nape::geom::ZPP_AABB _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(485)
				bool tmp8 = (_this->_invalidate != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(485)
				if ((tmp8)){
					HX_STACK_LINE(485)
					::zpp_nape::geom::ZPP_AABB tmp9 = _this;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(485)
					_this->_invalidate(tmp9);
				}
			}
		}
	}
	HX_STACK_LINE(488)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(488)
	{
		HX_STACK_LINE(488)
		{
			HX_STACK_LINE(488)
			::zpp_nape::geom::ZPP_AABB tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(488)
			::zpp_nape::geom::ZPP_AABB _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(488)
			bool tmp2 = (_this->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(488)
			if ((tmp2)){
				HX_STACK_LINE(488)
				_this->_validate();
			}
		}
		HX_STACK_LINE(488)
		{
			HX_STACK_LINE(488)
			::zpp_nape::geom::ZPP_AABB tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(488)
			::zpp_nape::geom::ZPP_AABB _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(488)
			tmp = (_this->maxy - _this->miny);
		}
	}
	HX_STACK_LINE(488)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AABB_obj,set_height,return )

::String AABB_obj::toString( ){
	HX_STACK_FRAME("nape.geom.AABB","toString",0x2ced9ace,"nape.geom.AABB.toString","nape/geom/AABB.hx",493,0x3e49ef52)
	HX_STACK_THIS(this)
	HX_STACK_LINE(494)
	{
		HX_STACK_LINE(494)
		::zpp_nape::geom::ZPP_AABB tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(494)
		::zpp_nape::geom::ZPP_AABB _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(494)
		bool tmp1 = (_this->_validate != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(494)
		if ((tmp1)){
			HX_STACK_LINE(494)
			_this->_validate();
		}
	}
	HX_STACK_LINE(495)
	::zpp_nape::geom::ZPP_AABB tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(495)
	::String tmp1 = tmp->toString();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(495)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(AABB_obj,toString,return )

::nape::geom::AABB AABB_obj::fromRect( ::openfl::_legacy::geom::Rectangle rect){
	HX_STACK_FRAME("nape.geom.AABB","fromRect",0x9df1e5d0,"nape.geom.AABB.fromRect","nape/geom/AABB.hx",243,0x3e49ef52)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(249)
	::nape::geom::AABB tmp = ::nape::geom::AABB_obj::__new(rect->x,rect->y,rect->width,rect->height);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(249)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AABB_obj,fromRect,return )


AABB_obj::AABB_obj()
{
}

void AABB_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AABB);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void AABB_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic AABB_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return get_y(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { if (inCallProp == hx::paccAlways) return get_min(); }
		if (HX_FIELD_EQ(inName,"max") ) { if (inCallProp == hx::paccAlways) return get_max(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return get_width(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toRect") ) { return toRect_dyn(); }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return get_height(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_min") ) { return get_min_dyn(); }
		if (HX_FIELD_EQ(inName,"set_min") ) { return set_min_dyn(); }
		if (HX_FIELD_EQ(inName,"get_max") ) { return get_max_dyn(); }
		if (HX_FIELD_EQ(inName,"set_max") ) { return set_max_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool AABB_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromRect") ) { outValue = fromRect_dyn(); return true;  }
	}
	return false;
}

Dynamic AABB_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { if (inCallProp == hx::paccAlways) return set_min(inValue); }
		if (HX_FIELD_EQ(inName,"max") ) { if (inCallProp == hx::paccAlways) return set_max(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return set_width(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return set_height(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::geom::ZPP_AABB >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AABB_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("min","\x92","\x11","\x53","\x00"));
	outFields->push(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_AABB*/ ,(int)offsetof(AABB_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("toRect","\x3f","\xb8","\x60","\x81"),
	HX_HCSTRING("get_min","\x29","\xda","\xc7","\x26"),
	HX_HCSTRING("set_min","\x35","\x6b","\xc9","\x19"),
	HX_HCSTRING("get_max","\x3b","\xd3","\xc7","\x26"),
	HX_HCSTRING("set_max","\x47","\x64","\xc9","\x19"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AABB_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AABB_obj::__mClass,"__mClass");
};

#endif

hx::Class AABB_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromRect","\xae","\x1b","\x73","\xa9"),
	::String(null()) };

void AABB_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.geom.AABB","\x8c","\x62","\x9f","\xf1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AABB_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AABB_obj >;
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
