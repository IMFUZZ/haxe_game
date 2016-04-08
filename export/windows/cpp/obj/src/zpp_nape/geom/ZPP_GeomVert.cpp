#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_GeomVert_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_GeomVert","new",0x5ade1135,"zpp_nape.geom.ZPP_GeomVert.new","zpp_nape/geom/GeomPoly.hx",174,0x22e30365)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(180)
	this->forced = false;
	HX_STACK_LINE(179)
	this->wrap = null();
	HX_STACK_LINE(178)
	this->next = null();
	HX_STACK_LINE(177)
	this->prev = null();
	HX_STACK_LINE(176)
	this->y = ((Float)0.0);
	HX_STACK_LINE(175)
	this->x = ((Float)0.0);
}
;
	return null();
}

//ZPP_GeomVert_obj::~ZPP_GeomVert_obj() { }

Dynamic ZPP_GeomVert_obj::__CreateEmpty() { return  new ZPP_GeomVert_obj; }
hx::ObjectPtr< ZPP_GeomVert_obj > ZPP_GeomVert_obj::__new()
{  hx::ObjectPtr< ZPP_GeomVert_obj > _result_ = new ZPP_GeomVert_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_GeomVert_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_GeomVert_obj > _result_ = new ZPP_GeomVert_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_GeomVert_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_GeomVert","free",0x22311637,"zpp_nape.geom.ZPP_GeomVert.free","zpp_nape/geom/GeomPoly.hx",206,0x22e30365)
		HX_STACK_THIS(this)
		HX_STACK_LINE(207)
		::nape::geom::Vec2 tmp = this->wrap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(207)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(207)
		if ((tmp1)){
			HX_STACK_LINE(208)
			::nape::geom::Vec2 tmp2 = this->wrap;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(208)
			tmp2->zpp_inner->_inuse = false;
			HX_STACK_LINE(209)
			{
				HX_STACK_LINE(209)
				::nape::geom::Vec2 tmp3 = this->wrap;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(209)
				::nape::geom::Vec2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(209)
				::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(209)
				_this->zpp_inner->outer = null();
				HX_STACK_LINE(209)
				_this->zpp_inner = null();
				HX_STACK_LINE(209)
				{
					HX_STACK_LINE(209)
					::nape::geom::Vec2 o = _this;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(209)
					::nape::geom::Vec2 tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(209)
					o->zpp_pool = tmp4;
					HX_STACK_LINE(209)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(209)
				{
					HX_STACK_LINE(209)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(209)
					{
						HX_STACK_LINE(209)
						bool tmp4 = (o->outer != null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(209)
						if ((tmp4)){
							HX_STACK_LINE(209)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(209)
							o->outer = null();
						}
						HX_STACK_LINE(209)
						o->_isimmutable = null();
						HX_STACK_LINE(209)
						o->_validate = null();
						HX_STACK_LINE(209)
						o->_invalidate = null();
					}
					HX_STACK_LINE(209)
					::zpp_nape::geom::ZPP_Vec2 tmp4 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(209)
					o->next = tmp4;
					HX_STACK_LINE(209)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(210)
			this->wrap = null();
		}
		HX_STACK_LINE(212)
		::zpp_nape::geom::ZPP_GeomVert tmp2 = this->next = null();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(212)
		this->prev = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_GeomVert_obj,free,(void))

Void ZPP_GeomVert_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_GeomVert","alloc",0xe3cf848a,"zpp_nape.geom.ZPP_GeomVert.alloc","zpp_nape/geom/GeomPoly.hx",216,0x22e30365)
		HX_STACK_THIS(this)
		HX_STACK_LINE(216)
		this->forced = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_GeomVert_obj,alloc,(void))

::nape::geom::Vec2 ZPP_GeomVert_obj::wrapper( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_GeomVert","wrapper",0xbe68a4a8,"zpp_nape.geom.ZPP_GeomVert.wrapper","zpp_nape/geom/GeomPoly.hx",219,0x22e30365)
	HX_STACK_THIS(this)
	HX_STACK_LINE(220)
	::nape::geom::Vec2 tmp = this->wrap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(220)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(220)
	if ((tmp1)){
		HX_STACK_LINE(221)
		::nape::geom::Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(221)
		{
			HX_STACK_LINE(221)
			Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(221)
			Float x = tmp3;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(221)
			Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(221)
			Float y = tmp4;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(221)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(221)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(221)
			{
				HX_STACK_LINE(221)
				::nape::geom::Vec2 tmp5 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(221)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(221)
				if ((tmp6)){
					HX_STACK_LINE(221)
					::nape::geom::Vec2 tmp7 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(221)
					ret = tmp7;
				}
				else{
					HX_STACK_LINE(221)
					::nape::geom::Vec2 tmp7 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(221)
					ret = tmp7;
					HX_STACK_LINE(221)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(221)
					ret->zpp_pool = null();
				}
			}
			HX_STACK_LINE(221)
			bool tmp5 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(221)
			if ((tmp5)){
				HX_STACK_LINE(221)
				::zpp_nape::geom::ZPP_Vec2 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(221)
				{
					HX_STACK_LINE(221)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(221)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(221)
					{
						HX_STACK_LINE(221)
						::zpp_nape::geom::ZPP_Vec2 tmp7 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(221)
						bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(221)
						if ((tmp8)){
							HX_STACK_LINE(221)
							::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(221)
							ret1 = tmp9;
						}
						else{
							HX_STACK_LINE(221)
							::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(221)
							ret1 = tmp9;
							HX_STACK_LINE(221)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(221)
							ret1->next = null();
						}
						HX_STACK_LINE(221)
						ret1->weak = false;
					}
					HX_STACK_LINE(221)
					ret1->_immutable = immutable;
					HX_STACK_LINE(221)
					{
						HX_STACK_LINE(221)
						ret1->x = x;
						HX_STACK_LINE(221)
						ret1->y = y;
						HX_STACK_LINE(221)
						{
						}
					}
					HX_STACK_LINE(221)
					tmp6 = ret1;
				}
				HX_STACK_LINE(221)
				ret->zpp_inner = tmp6;
				HX_STACK_LINE(221)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(221)
				Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(221)
				{
					HX_STACK_LINE(221)
					{
						HX_STACK_LINE(221)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(221)
						bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(221)
						if ((tmp7)){
							HX_STACK_LINE(221)
							_this->_validate();
						}
					}
					HX_STACK_LINE(221)
					tmp6 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(221)
				Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(221)
				bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(221)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(221)
				if ((tmp8)){
					HX_STACK_LINE(221)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(221)
					{
						HX_STACK_LINE(221)
						{
							HX_STACK_LINE(221)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(221)
							bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(221)
							bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(221)
							bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(221)
							if ((tmp13)){
								HX_STACK_LINE(221)
								_this->_validate();
							}
						}
						HX_STACK_LINE(221)
						Float tmp11 = ret->zpp_inner->y;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(221)
						tmp10 = tmp11;
					}
					HX_STACK_LINE(221)
					Float tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(221)
					tmp9 = (tmp10 == tmp11);
				}
				else{
					HX_STACK_LINE(221)
					tmp9 = false;
				}
				HX_STACK_LINE(221)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(221)
				if ((tmp10)){
					HX_STACK_LINE(221)
					{
						HX_STACK_LINE(221)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(221)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(221)
						{
						}
					}
					HX_STACK_LINE(221)
					{
						HX_STACK_LINE(221)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(221)
						bool tmp11 = (_this->_invalidate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(221)
						if ((tmp11)){
							HX_STACK_LINE(221)
							::zpp_nape::geom::ZPP_Vec2 tmp12 = _this;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(221)
							_this->_invalidate(tmp12);
						}
					}
				}
				HX_STACK_LINE(221)
				ret;
			}
			HX_STACK_LINE(221)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(221)
			tmp2 = ret;
		}
		HX_STACK_LINE(221)
		this->wrap = tmp2;
		HX_STACK_LINE(222)
		::nape::geom::Vec2 tmp3 = this->wrap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(222)
		tmp3->zpp_inner->_inuse = true;
		HX_STACK_LINE(223)
		Dynamic tmp4 = this->modwrap_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(223)
		::nape::geom::Vec2 tmp5 = this->wrap;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(223)
		tmp5->zpp_inner->_invalidate = tmp4;
		HX_STACK_LINE(224)
		Dynamic tmp6 = this->getwrap_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(224)
		::nape::geom::Vec2 tmp7 = this->wrap;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(224)
		tmp7->zpp_inner->_validate = tmp6;
	}
	HX_STACK_LINE(226)
	::nape::geom::Vec2 tmp2 = this->wrap;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(226)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_GeomVert_obj,wrapper,return )

Void ZPP_GeomVert_obj::modwrap( ::zpp_nape::geom::ZPP_Vec2 n){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_GeomVert","modwrap",0xaa55a8e1,"zpp_nape.geom.ZPP_GeomVert.modwrap","zpp_nape/geom/GeomPoly.hx",230,0x22e30365)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(231)
		this->x = n->x;
		HX_STACK_LINE(232)
		this->y = n->y;
		HX_STACK_LINE(241)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_GeomVert_obj,modwrap,(void))

Void ZPP_GeomVert_obj::getwrap( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_GeomVert","getwrap",0xe7ac8cb5,"zpp_nape.geom.ZPP_GeomVert.getwrap","zpp_nape/geom/GeomPoly.hx",253,0x22e30365)
		HX_STACK_THIS(this)
		HX_STACK_LINE(254)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(254)
		::nape::geom::Vec2 tmp1 = this->wrap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(254)
		tmp1->zpp_inner->x = tmp;
		HX_STACK_LINE(255)
		Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(255)
		::nape::geom::Vec2 tmp3 = this->wrap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(255)
		tmp3->zpp_inner->y = tmp2;
		HX_STACK_LINE(264)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_GeomVert_obj,getwrap,(void))

::zpp_nape::geom::ZPP_GeomVert ZPP_GeomVert_obj::zpp_pool;

::zpp_nape::geom::ZPP_GeomVert ZPP_GeomVert_obj::get( Float x,Float y){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_GeomVert","get",0x5ad8c16b,"zpp_nape.geom.ZPP_GeomVert.get","zpp_nape/geom/GeomPoly.hx",275,0x22e30365)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(276)
	::zpp_nape::geom::ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(277)
	{
		HX_STACK_LINE(278)
		::zpp_nape::geom::ZPP_GeomVert tmp = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(278)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(278)
		if ((tmp1)){
			HX_STACK_LINE(279)
			::zpp_nape::geom::ZPP_GeomVert tmp2 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(279)
			ret = tmp2;
		}
		else{
			HX_STACK_LINE(285)
			::zpp_nape::geom::ZPP_GeomVert tmp2 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(285)
			ret = tmp2;
			HX_STACK_LINE(286)
			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret->next;
			HX_STACK_LINE(287)
			ret->next = null();
		}
		HX_STACK_LINE(292)
		ret->forced = false;
	}
	HX_STACK_LINE(294)
	{
		HX_STACK_LINE(295)
		ret->x = x;
		HX_STACK_LINE(296)
		ret->y = y;
		HX_STACK_LINE(305)
		{
		}
	}
	HX_STACK_LINE(314)
	::zpp_nape::geom::ZPP_GeomVert tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(314)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_GeomVert_obj,get,return )


ZPP_GeomVert_obj::ZPP_GeomVert_obj()
{
}

void ZPP_GeomVert_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_GeomVert);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(wrap,"wrap");
	HX_MARK_MEMBER_NAME(forced,"forced");
	HX_MARK_END_CLASS();
}

void ZPP_GeomVert_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(wrap,"wrap");
	HX_VISIT_MEMBER_NAME(forced,"forced");
}

Dynamic ZPP_GeomVert_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"prev") ) { return prev; }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"wrap") ) { return wrap; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"forced") ) { return forced; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"wrapper") ) { return wrapper_dyn(); }
		if (HX_FIELD_EQ(inName,"modwrap") ) { return modwrap_dyn(); }
		if (HX_FIELD_EQ(inName,"getwrap") ) { return getwrap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_GeomVert_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
	}
	return false;
}

Dynamic ZPP_GeomVert_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::geom::ZPP_GeomVert >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_GeomVert >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap") ) { wrap=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"forced") ) { forced=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_GeomVert_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::geom::ZPP_GeomVert >(); return true; }
	}
	return false;
}

void ZPP_GeomVert_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("wrap","\xca","\x39","\xff","\x4e"));
	outFields->push(HX_HCSTRING("forced","\x19","\xfc","\x86","\xfd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ZPP_GeomVert_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_GeomVert_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_GeomVert*/ ,(int)offsetof(ZPP_GeomVert_obj,prev),HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_GeomVert*/ ,(int)offsetof(ZPP_GeomVert_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_GeomVert_obj,wrap),HX_HCSTRING("wrap","\xca","\x39","\xff","\x4e")},
	{hx::fsBool,(int)offsetof(ZPP_GeomVert_obj,forced),HX_HCSTRING("forced","\x19","\xfc","\x86","\xfd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_GeomVert*/ ,(void *) &ZPP_GeomVert_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("wrap","\xca","\x39","\xff","\x4e"),
	HX_HCSTRING("forced","\x19","\xfc","\x86","\xfd"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("wrapper","\x53","\xd5","\x64","\x0d"),
	HX_HCSTRING("modwrap","\x8c","\xd9","\x51","\xf9"),
	HX_HCSTRING("getwrap","\x60","\xbd","\xa8","\x36"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_GeomVert_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_GeomVert_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_GeomVert_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_GeomVert_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_GeomVert_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

void ZPP_GeomVert_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_GeomVert","\xc3","\x52","\x6e","\x4a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_GeomVert_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_GeomVert_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_GeomVert_obj >;
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

void ZPP_GeomVert_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
