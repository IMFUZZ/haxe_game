#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_Ray
#include <nape/geom/Ray.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Ray
#include <zpp_nape/geom/ZPP_Ray.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace nape{
namespace geom{

Void Ray_obj::__construct(::nape::geom::Vec2 origin,::nape::geom::Vec2 direction)
{
HX_STACK_FRAME("nape.geom.Ray","new",0xebb19f50,"nape.geom.Ray.new","nape/geom/Ray.hx",177,0xeaaa9e80)
HX_STACK_THIS(this)
HX_STACK_ARG(origin,"origin")
HX_STACK_ARG(direction,"direction")
{
	HX_STACK_LINE(181)
	this->zpp_inner = null();
	HX_STACK_LINE(338)
	::zpp_nape::geom::ZPP_Ray tmp = ::zpp_nape::geom::ZPP_Ray_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(338)
	this->zpp_inner = tmp;
	HX_STACK_LINE(339)
	{
		HX_STACK_LINE(339)
		{
			HX_STACK_LINE(339)
			::zpp_nape::geom::ZPP_Ray tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(339)
			::nape::geom::Vec2 _this = tmp1->origin;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(339)
			::nape::geom::Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(339)
			{
				HX_STACK_LINE(339)
				Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(339)
				{
					HX_STACK_LINE(339)
					{
						HX_STACK_LINE(339)
						::zpp_nape::geom::ZPP_Vec2 _this1 = origin->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(339)
						bool tmp4 = (_this1->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(339)
						if ((tmp4)){
							HX_STACK_LINE(339)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(339)
					tmp3 = origin->zpp_inner->x;
				}
				HX_STACK_LINE(339)
				Float x = tmp3;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(339)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(339)
				{
					HX_STACK_LINE(339)
					{
						HX_STACK_LINE(339)
						::zpp_nape::geom::ZPP_Vec2 _this1 = origin->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(339)
						bool tmp5 = (_this1->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(339)
						if ((tmp5)){
							HX_STACK_LINE(339)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(339)
					tmp4 = origin->zpp_inner->y;
				}
				HX_STACK_LINE(339)
				Float y = tmp4;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(339)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(339)
				{
					HX_STACK_LINE(339)
					{
						HX_STACK_LINE(339)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(339)
						bool tmp6 = (_this1->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(339)
						if ((tmp6)){
							HX_STACK_LINE(339)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(339)
					tmp5 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(339)
				Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(339)
				bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(339)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(339)
				if ((tmp7)){
					HX_STACK_LINE(339)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(339)
					{
						HX_STACK_LINE(339)
						{
							HX_STACK_LINE(339)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(339)
							bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(339)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(339)
							bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(339)
							if ((tmp12)){
								HX_STACK_LINE(339)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(339)
						Float tmp10 = _this->zpp_inner->y;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(339)
						tmp9 = tmp10;
					}
					HX_STACK_LINE(339)
					Float tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(339)
					tmp8 = (tmp9 == tmp10);
				}
				else{
					HX_STACK_LINE(339)
					tmp8 = false;
				}
				HX_STACK_LINE(339)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(339)
				if ((tmp9)){
					HX_STACK_LINE(339)
					{
						HX_STACK_LINE(339)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(339)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(339)
						{
						}
					}
					HX_STACK_LINE(339)
					{
						HX_STACK_LINE(339)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(339)
						bool tmp10 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(339)
						if ((tmp10)){
							HX_STACK_LINE(339)
							::zpp_nape::geom::ZPP_Vec2 tmp11 = _this1;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(339)
							_this1->_invalidate(tmp11);
						}
					}
				}
				HX_STACK_LINE(339)
				tmp2 = _this;
			}
			HX_STACK_LINE(339)
			::nape::geom::Vec2 ret = tmp2;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(339)
			{
				HX_STACK_LINE(339)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(339)
				tmp3 = origin->zpp_inner->weak;
				HX_STACK_LINE(339)
				if ((tmp3)){
					HX_STACK_LINE(339)
					{
						HX_STACK_LINE(339)
						::zpp_nape::geom::ZPP_Vec2 inner = origin->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(339)
						origin->zpp_inner->outer = null();
						HX_STACK_LINE(339)
						origin->zpp_inner = null();
						HX_STACK_LINE(339)
						{
							HX_STACK_LINE(339)
							::nape::geom::Vec2 o = origin;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(339)
							::nape::geom::Vec2 tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(339)
							o->zpp_pool = tmp4;
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
								bool tmp4 = (o->outer != null());		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(339)
								if ((tmp4)){
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
							::zpp_nape::geom::ZPP_Vec2 tmp4 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(339)
							o->next = tmp4;
							HX_STACK_LINE(339)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(339)
					true;
				}
				else{
					HX_STACK_LINE(339)
					false;
				}
			}
			HX_STACK_LINE(339)
			ret;
		}
		HX_STACK_LINE(339)
		::zpp_nape::geom::ZPP_Ray tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(339)
		tmp1->origin;
	}
	HX_STACK_LINE(340)
	{
		HX_STACK_LINE(340)
		{
			HX_STACK_LINE(340)
			{
				HX_STACK_LINE(340)
				::zpp_nape::geom::ZPP_Ray tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(340)
				::nape::geom::Vec2 _this = tmp1->direction;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(340)
				::nape::geom::Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(340)
				{
					HX_STACK_LINE(340)
					Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(340)
					{
						HX_STACK_LINE(340)
						{
							HX_STACK_LINE(340)
							::zpp_nape::geom::ZPP_Vec2 _this1 = direction->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(340)
							bool tmp4 = (_this1->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(340)
							if ((tmp4)){
								HX_STACK_LINE(340)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(340)
						tmp3 = direction->zpp_inner->x;
					}
					HX_STACK_LINE(340)
					Float x = tmp3;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(340)
					Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(340)
					{
						HX_STACK_LINE(340)
						{
							HX_STACK_LINE(340)
							::zpp_nape::geom::ZPP_Vec2 _this1 = direction->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(340)
							bool tmp5 = (_this1->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(340)
							if ((tmp5)){
								HX_STACK_LINE(340)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(340)
						tmp4 = direction->zpp_inner->y;
					}
					HX_STACK_LINE(340)
					Float y = tmp4;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(340)
					Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(340)
					{
						HX_STACK_LINE(340)
						{
							HX_STACK_LINE(340)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(340)
							bool tmp6 = (_this1->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(340)
							if ((tmp6)){
								HX_STACK_LINE(340)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(340)
						tmp5 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(340)
					Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(340)
					bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(340)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(340)
					if ((tmp7)){
						HX_STACK_LINE(340)
						Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(340)
						{
							HX_STACK_LINE(340)
							{
								HX_STACK_LINE(340)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(340)
								bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(340)
								bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(340)
								bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(340)
								if ((tmp12)){
									HX_STACK_LINE(340)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(340)
							Float tmp10 = _this->zpp_inner->y;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(340)
							tmp9 = tmp10;
						}
						HX_STACK_LINE(340)
						Float tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(340)
						tmp8 = (tmp9 == tmp10);
					}
					else{
						HX_STACK_LINE(340)
						tmp8 = false;
					}
					HX_STACK_LINE(340)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(340)
					if ((tmp9)){
						HX_STACK_LINE(340)
						{
							HX_STACK_LINE(340)
							_this->zpp_inner->x = x;
							HX_STACK_LINE(340)
							_this->zpp_inner->y = y;
							HX_STACK_LINE(340)
							{
							}
						}
						HX_STACK_LINE(340)
						{
							HX_STACK_LINE(340)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(340)
							bool tmp10 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(340)
							if ((tmp10)){
								HX_STACK_LINE(340)
								::zpp_nape::geom::ZPP_Vec2 tmp11 = _this1;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(340)
								_this1->_invalidate(tmp11);
							}
						}
					}
					HX_STACK_LINE(340)
					tmp2 = _this;
				}
				HX_STACK_LINE(340)
				::nape::geom::Vec2 ret = tmp2;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(340)
				{
					HX_STACK_LINE(340)
					bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(340)
					tmp3 = direction->zpp_inner->weak;
					HX_STACK_LINE(340)
					if ((tmp3)){
						HX_STACK_LINE(340)
						{
							HX_STACK_LINE(340)
							::zpp_nape::geom::ZPP_Vec2 inner = direction->zpp_inner;		HX_STACK_VAR(inner,"inner");
							HX_STACK_LINE(340)
							direction->zpp_inner->outer = null();
							HX_STACK_LINE(340)
							direction->zpp_inner = null();
							HX_STACK_LINE(340)
							{
								HX_STACK_LINE(340)
								::nape::geom::Vec2 o = direction;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(340)
								::nape::geom::Vec2 tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(340)
								o->zpp_pool = tmp4;
								HX_STACK_LINE(340)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(340)
							{
								HX_STACK_LINE(340)
								::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(340)
								{
									HX_STACK_LINE(340)
									bool tmp4 = (o->outer != null());		HX_STACK_VAR(tmp4,"tmp4");
									HX_STACK_LINE(340)
									if ((tmp4)){
										HX_STACK_LINE(340)
										o->outer->zpp_inner = null();
										HX_STACK_LINE(340)
										o->outer = null();
									}
									HX_STACK_LINE(340)
									o->_isimmutable = null();
									HX_STACK_LINE(340)
									o->_validate = null();
									HX_STACK_LINE(340)
									o->_invalidate = null();
								}
								HX_STACK_LINE(340)
								::zpp_nape::geom::ZPP_Vec2 tmp4 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(340)
								o->next = tmp4;
								HX_STACK_LINE(340)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
							}
						}
						HX_STACK_LINE(340)
						true;
					}
					else{
						HX_STACK_LINE(340)
						false;
					}
				}
				HX_STACK_LINE(340)
				ret;
			}
			HX_STACK_LINE(340)
			{
				HX_STACK_LINE(340)
				::zpp_nape::geom::ZPP_Ray tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(340)
				tmp1->zip_dir = true;
			}
		}
		HX_STACK_LINE(340)
		::zpp_nape::geom::ZPP_Ray tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(340)
		tmp1->direction;
	}
	HX_STACK_LINE(341)
	Float tmp1 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(341)
	::zpp_nape::geom::ZPP_Ray tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(341)
	tmp2->maxdist = tmp1;
}
;
	return null();
}

//Ray_obj::~Ray_obj() { }

Dynamic Ray_obj::__CreateEmpty() { return  new Ray_obj; }
hx::ObjectPtr< Ray_obj > Ray_obj::__new(::nape::geom::Vec2 origin,::nape::geom::Vec2 direction)
{  hx::ObjectPtr< Ray_obj > _result_ = new Ray_obj();
	_result_->__construct(origin,direction);
	return _result_;}

Dynamic Ray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Ray_obj > _result_ = new Ray_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Dynamic Ray_obj::get_userData( ){
	HX_STACK_FRAME("nape.geom.Ray","get_userData",0x2d8b1d2e,"nape.geom.Ray.get_userData","nape/geom/Ray.hx",195,0xeaaa9e80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(196)
	::zpp_nape::geom::ZPP_Ray tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(196)
	Dynamic tmp1 = tmp->userData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(196)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(196)
	if ((tmp2)){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/geom/Ray.hx",197,0xeaaa9e80)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(197)
		Dynamic tmp3 = _Function_2_1::Block();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(197)
		::zpp_nape::geom::ZPP_Ray tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(197)
		tmp4->userData = tmp3;
	}
	HX_STACK_LINE(199)
	::zpp_nape::geom::ZPP_Ray tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(199)
	Dynamic tmp4 = tmp3->userData;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(199)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Ray_obj,get_userData,return )

::nape::geom::Vec2 Ray_obj::get_origin( ){
	HX_STACK_FRAME("nape.geom.Ray","get_origin",0x5ceb78bf,"nape.geom.Ray.get_origin","nape/geom/Ray.hx",209,0xeaaa9e80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(210)
	::zpp_nape::geom::ZPP_Ray tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(210)
	::nape::geom::Vec2 tmp1 = tmp->origin;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(210)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Ray_obj,get_origin,return )

::nape::geom::Vec2 Ray_obj::set_origin( ::nape::geom::Vec2 origin){
	HX_STACK_FRAME("nape.geom.Ray","set_origin",0x60691733,"nape.geom.Ray.set_origin","nape/geom/Ray.hx",212,0xeaaa9e80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(origin,"origin")
	HX_STACK_LINE(224)
	{
		HX_STACK_LINE(224)
		::zpp_nape::geom::ZPP_Ray tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(224)
		::nape::geom::Vec2 _this = tmp->origin;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(224)
		::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(224)
		{
			HX_STACK_LINE(224)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(224)
			{
				HX_STACK_LINE(224)
				{
					HX_STACK_LINE(224)
					::zpp_nape::geom::ZPP_Vec2 _this1 = origin->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(224)
					bool tmp3 = (_this1->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(224)
					if ((tmp3)){
						HX_STACK_LINE(224)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(224)
				tmp2 = origin->zpp_inner->x;
			}
			HX_STACK_LINE(224)
			Float x = tmp2;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(224)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(224)
			{
				HX_STACK_LINE(224)
				{
					HX_STACK_LINE(224)
					::zpp_nape::geom::ZPP_Vec2 _this1 = origin->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(224)
					bool tmp4 = (_this1->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(224)
					if ((tmp4)){
						HX_STACK_LINE(224)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(224)
				tmp3 = origin->zpp_inner->y;
			}
			HX_STACK_LINE(224)
			Float y = tmp3;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(224)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(224)
			{
				HX_STACK_LINE(224)
				{
					HX_STACK_LINE(224)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(224)
					bool tmp5 = (_this1->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(224)
					if ((tmp5)){
						HX_STACK_LINE(224)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(224)
				tmp4 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(224)
			Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(224)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(224)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(224)
			if ((tmp6)){
				HX_STACK_LINE(224)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(224)
				{
					HX_STACK_LINE(224)
					{
						HX_STACK_LINE(224)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(224)
						bool tmp9 = (_this1->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(224)
						bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(224)
						bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(224)
						if ((tmp11)){
							HX_STACK_LINE(224)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(224)
					Float tmp9 = _this->zpp_inner->y;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(224)
					tmp8 = tmp9;
				}
				HX_STACK_LINE(224)
				Float tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(224)
				tmp7 = (tmp8 == tmp9);
			}
			else{
				HX_STACK_LINE(224)
				tmp7 = false;
			}
			HX_STACK_LINE(224)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(224)
			if ((tmp8)){
				HX_STACK_LINE(224)
				{
					HX_STACK_LINE(224)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(224)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(224)
					{
					}
				}
				HX_STACK_LINE(224)
				{
					HX_STACK_LINE(224)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(224)
					bool tmp9 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(224)
					if ((tmp9)){
						HX_STACK_LINE(224)
						::zpp_nape::geom::ZPP_Vec2 tmp10 = _this1;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(224)
						_this1->_invalidate(tmp10);
					}
				}
			}
			HX_STACK_LINE(224)
			tmp1 = _this;
		}
		HX_STACK_LINE(224)
		::nape::geom::Vec2 ret = tmp1;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(224)
		{
			HX_STACK_LINE(224)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(224)
			tmp2 = origin->zpp_inner->weak;
			HX_STACK_LINE(224)
			if ((tmp2)){
				HX_STACK_LINE(224)
				{
					HX_STACK_LINE(224)
					::zpp_nape::geom::ZPP_Vec2 inner = origin->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(224)
					origin->zpp_inner->outer = null();
					HX_STACK_LINE(224)
					origin->zpp_inner = null();
					HX_STACK_LINE(224)
					{
						HX_STACK_LINE(224)
						::nape::geom::Vec2 o = origin;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(224)
						::nape::geom::Vec2 tmp3 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(224)
						o->zpp_pool = tmp3;
						HX_STACK_LINE(224)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(224)
					{
						HX_STACK_LINE(224)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(224)
						{
							HX_STACK_LINE(224)
							bool tmp3 = (o->outer != null());		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(224)
							if ((tmp3)){
								HX_STACK_LINE(224)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(224)
								o->outer = null();
							}
							HX_STACK_LINE(224)
							o->_isimmutable = null();
							HX_STACK_LINE(224)
							o->_validate = null();
							HX_STACK_LINE(224)
							o->_invalidate = null();
						}
						HX_STACK_LINE(224)
						::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(224)
						o->next = tmp3;
						HX_STACK_LINE(224)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(224)
				true;
			}
			else{
				HX_STACK_LINE(224)
				false;
			}
		}
		HX_STACK_LINE(224)
		ret;
	}
	HX_STACK_LINE(226)
	::zpp_nape::geom::ZPP_Ray tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(226)
	::nape::geom::Vec2 tmp1 = tmp->origin;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(226)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Ray_obj,set_origin,return )

::nape::geom::Vec2 Ray_obj::get_direction( ){
	HX_STACK_FRAME("nape.geom.Ray","get_direction",0x3e141106,"nape.geom.Ray.get_direction","nape/geom/Ray.hx",239,0xeaaa9e80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(240)
	::zpp_nape::geom::ZPP_Ray tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(240)
	::nape::geom::Vec2 tmp1 = tmp->direction;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(240)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Ray_obj,get_direction,return )

::nape::geom::Vec2 Ray_obj::set_direction( ::nape::geom::Vec2 direction){
	HX_STACK_FRAME("nape.geom.Ray","set_direction",0x8319f312,"nape.geom.Ray.set_direction","nape/geom/Ray.hx",242,0xeaaa9e80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(direction,"direction")
	HX_STACK_LINE(243)
	{
		HX_STACK_LINE(254)
		{
			HX_STACK_LINE(254)
			::zpp_nape::geom::ZPP_Ray tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(254)
			::nape::geom::Vec2 _this = tmp->direction;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(254)
			::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(254)
			{
				HX_STACK_LINE(254)
				Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(254)
				{
					HX_STACK_LINE(254)
					{
						HX_STACK_LINE(254)
						::zpp_nape::geom::ZPP_Vec2 _this1 = direction->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(254)
						bool tmp3 = (_this1->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(254)
						if ((tmp3)){
							HX_STACK_LINE(254)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(254)
					tmp2 = direction->zpp_inner->x;
				}
				HX_STACK_LINE(254)
				Float x = tmp2;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(254)
				Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(254)
				{
					HX_STACK_LINE(254)
					{
						HX_STACK_LINE(254)
						::zpp_nape::geom::ZPP_Vec2 _this1 = direction->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(254)
						bool tmp4 = (_this1->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(254)
						if ((tmp4)){
							HX_STACK_LINE(254)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(254)
					tmp3 = direction->zpp_inner->y;
				}
				HX_STACK_LINE(254)
				Float y = tmp3;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(254)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(254)
				{
					HX_STACK_LINE(254)
					{
						HX_STACK_LINE(254)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(254)
						bool tmp5 = (_this1->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(254)
						if ((tmp5)){
							HX_STACK_LINE(254)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(254)
					tmp4 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(254)
				Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(254)
				bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(254)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(254)
				if ((tmp6)){
					HX_STACK_LINE(254)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(254)
					{
						HX_STACK_LINE(254)
						{
							HX_STACK_LINE(254)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(254)
							bool tmp9 = (_this1->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(254)
							bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(254)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(254)
							if ((tmp11)){
								HX_STACK_LINE(254)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(254)
						Float tmp9 = _this->zpp_inner->y;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(254)
						tmp8 = tmp9;
					}
					HX_STACK_LINE(254)
					Float tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(254)
					tmp7 = (tmp8 == tmp9);
				}
				else{
					HX_STACK_LINE(254)
					tmp7 = false;
				}
				HX_STACK_LINE(254)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(254)
				if ((tmp8)){
					HX_STACK_LINE(254)
					{
						HX_STACK_LINE(254)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(254)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(254)
						{
						}
					}
					HX_STACK_LINE(254)
					{
						HX_STACK_LINE(254)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(254)
						bool tmp9 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(254)
						if ((tmp9)){
							HX_STACK_LINE(254)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = _this1;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(254)
							_this1->_invalidate(tmp10);
						}
					}
				}
				HX_STACK_LINE(254)
				tmp1 = _this;
			}
			HX_STACK_LINE(254)
			::nape::geom::Vec2 ret = tmp1;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(254)
			{
				HX_STACK_LINE(254)
				bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(254)
				tmp2 = direction->zpp_inner->weak;
				HX_STACK_LINE(254)
				if ((tmp2)){
					HX_STACK_LINE(254)
					{
						HX_STACK_LINE(254)
						::zpp_nape::geom::ZPP_Vec2 inner = direction->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(254)
						direction->zpp_inner->outer = null();
						HX_STACK_LINE(254)
						direction->zpp_inner = null();
						HX_STACK_LINE(254)
						{
							HX_STACK_LINE(254)
							::nape::geom::Vec2 o = direction;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(254)
							::nape::geom::Vec2 tmp3 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(254)
							o->zpp_pool = tmp3;
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
								bool tmp3 = (o->outer != null());		HX_STACK_VAR(tmp3,"tmp3");
								HX_STACK_LINE(254)
								if ((tmp3)){
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
							::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(254)
							o->next = tmp3;
							HX_STACK_LINE(254)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(254)
					true;
				}
				else{
					HX_STACK_LINE(254)
					false;
				}
			}
			HX_STACK_LINE(254)
			ret;
		}
		HX_STACK_LINE(255)
		{
			HX_STACK_LINE(255)
			::zpp_nape::geom::ZPP_Ray tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(255)
			tmp->zip_dir = true;
		}
	}
	HX_STACK_LINE(257)
	::zpp_nape::geom::ZPP_Ray tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(257)
	::nape::geom::Vec2 tmp1 = tmp->direction;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(257)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Ray_obj,set_direction,return )

Float Ray_obj::get_maxDistance( ){
	HX_STACK_FRAME("nape.geom.Ray","get_maxDistance",0xeef1cc80,"nape.geom.Ray.get_maxDistance","nape/geom/Ray.hx",272,0xeaaa9e80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(273)
	::zpp_nape::geom::ZPP_Ray tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(273)
	Float tmp1 = tmp->maxdist;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(273)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Ray_obj,get_maxDistance,return )

Float Ray_obj::set_maxDistance( Float maxDistance){
	HX_STACK_FRAME("nape.geom.Ray","set_maxDistance",0xeabd498c,"nape.geom.Ray.set_maxDistance","nape/geom/Ray.hx",275,0xeaaa9e80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(maxDistance,"maxDistance")
	HX_STACK_LINE(276)
	{
		HX_STACK_LINE(282)
		::zpp_nape::geom::ZPP_Ray tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(282)
		tmp->maxdist = maxDistance;
	}
	HX_STACK_LINE(284)
	::zpp_nape::geom::ZPP_Ray tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(284)
	Float tmp1 = tmp->maxdist;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(284)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Ray_obj,set_maxDistance,return )

::nape::geom::AABB Ray_obj::aabb( ){
	HX_STACK_FRAME("nape.geom.Ray","aabb",0x471ee5b0,"nape.geom.Ray.aabb","nape/geom/Ray.hx",295,0xeaaa9e80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(296)
	::zpp_nape::geom::ZPP_Ray tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(296)
	::zpp_nape::geom::ZPP_AABB tmp1 = tmp->rayAABB();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(296)
	::nape::geom::AABB tmp2 = tmp1->wrapper();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(296)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Ray_obj,aabb,return )

::nape::geom::Vec2 Ray_obj::at( Float distance,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.geom.Ray","at",0x7f55b403,"nape.geom.Ray.at","nape/geom/Ray.hx",313,0xeaaa9e80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(distance,"distance")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(314)
		::zpp_nape::geom::ZPP_Ray tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(314)
		tmp->validate_dir();
		HX_STACK_LINE(315)
		::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(315)
		{
			HX_STACK_LINE(315)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(315)
			{
				HX_STACK_LINE(315)
				::zpp_nape::geom::ZPP_Ray tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(315)
				::nape::geom::Vec2 _this = tmp3->origin;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(315)
				{
					HX_STACK_LINE(315)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(315)
					bool tmp4 = (_this1->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(315)
					if ((tmp4)){
						HX_STACK_LINE(315)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(315)
				tmp2 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(315)
			Float tmp3 = distance;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(315)
			::zpp_nape::geom::ZPP_Ray tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(315)
			Float tmp5 = tmp4->dirx;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(315)
			Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(315)
			Float tmp7 = (tmp2 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(315)
			Float x = tmp7;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(315)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(315)
			{
				HX_STACK_LINE(315)
				::zpp_nape::geom::ZPP_Ray tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(315)
				::nape::geom::Vec2 _this = tmp9->origin;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(315)
				{
					HX_STACK_LINE(315)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(315)
					bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(315)
					if ((tmp10)){
						HX_STACK_LINE(315)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(315)
				tmp8 = _this->zpp_inner->y;
			}
			HX_STACK_LINE(315)
			Float tmp9 = distance;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(315)
			::zpp_nape::geom::ZPP_Ray tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(315)
			Float tmp11 = tmp10->diry;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(315)
			Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(315)
			Float tmp13 = (tmp8 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(315)
			Float y = tmp13;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(315)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(315)
			{
				HX_STACK_LINE(315)
				::nape::geom::Vec2 tmp14 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(315)
				bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(315)
				if ((tmp15)){
					HX_STACK_LINE(315)
					::nape::geom::Vec2 tmp16 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(315)
					ret = tmp16;
				}
				else{
					HX_STACK_LINE(315)
					::nape::geom::Vec2 tmp16 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(315)
					ret = tmp16;
					HX_STACK_LINE(315)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(315)
					ret->zpp_pool = null();
				}
			}
			HX_STACK_LINE(315)
			bool tmp14 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(315)
			if ((tmp14)){
				HX_STACK_LINE(315)
				::zpp_nape::geom::ZPP_Vec2 tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(315)
				{
					HX_STACK_LINE(315)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(315)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(315)
					{
						HX_STACK_LINE(315)
						::zpp_nape::geom::ZPP_Vec2 tmp16 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(315)
						bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(315)
						if ((tmp17)){
							HX_STACK_LINE(315)
							::zpp_nape::geom::ZPP_Vec2 tmp18 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(315)
							ret1 = tmp18;
						}
						else{
							HX_STACK_LINE(315)
							::zpp_nape::geom::ZPP_Vec2 tmp18 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(315)
							ret1 = tmp18;
							HX_STACK_LINE(315)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(315)
							ret1->next = null();
						}
						HX_STACK_LINE(315)
						ret1->weak = false;
					}
					HX_STACK_LINE(315)
					ret1->_immutable = immutable;
					HX_STACK_LINE(315)
					{
						HX_STACK_LINE(315)
						ret1->x = x;
						HX_STACK_LINE(315)
						ret1->y = y;
						HX_STACK_LINE(315)
						{
						}
					}
					HX_STACK_LINE(315)
					tmp15 = ret1;
				}
				HX_STACK_LINE(315)
				ret->zpp_inner = tmp15;
				HX_STACK_LINE(315)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(315)
				Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(315)
				{
					HX_STACK_LINE(315)
					{
						HX_STACK_LINE(315)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(315)
						bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(315)
						if ((tmp16)){
							HX_STACK_LINE(315)
							_this->_validate();
						}
					}
					HX_STACK_LINE(315)
					tmp15 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(315)
				Float tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(315)
				bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(315)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(315)
				if ((tmp17)){
					HX_STACK_LINE(315)
					Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(315)
					{
						HX_STACK_LINE(315)
						{
							HX_STACK_LINE(315)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(315)
							bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(315)
							bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(315)
							bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(315)
							if ((tmp22)){
								HX_STACK_LINE(315)
								_this->_validate();
							}
						}
						HX_STACK_LINE(315)
						Float tmp20 = ret->zpp_inner->y;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(315)
						tmp19 = tmp20;
					}
					HX_STACK_LINE(315)
					Float tmp20 = y;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(315)
					tmp18 = (tmp19 == tmp20);
				}
				else{
					HX_STACK_LINE(315)
					tmp18 = false;
				}
				HX_STACK_LINE(315)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(315)
				if ((tmp19)){
					HX_STACK_LINE(315)
					{
						HX_STACK_LINE(315)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(315)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(315)
						{
						}
					}
					HX_STACK_LINE(315)
					{
						HX_STACK_LINE(315)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(315)
						bool tmp20 = (_this->_invalidate != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(315)
						if ((tmp20)){
							HX_STACK_LINE(315)
							::zpp_nape::geom::ZPP_Vec2 tmp21 = _this;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(315)
							_this->_invalidate(tmp21);
						}
					}
				}
				HX_STACK_LINE(315)
				ret;
			}
			HX_STACK_LINE(315)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(315)
			tmp1 = ret;
		}
		HX_STACK_LINE(315)
		return tmp1;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Ray_obj,at,return )

::nape::geom::Ray Ray_obj::copy( ){
	HX_STACK_FRAME("nape.geom.Ray","copy",0x487bfec5,"nape.geom.Ray.copy","nape/geom/Ray.hx",350,0xeaaa9e80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(351)
	::zpp_nape::geom::ZPP_Ray tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(351)
	::nape::geom::Vec2 tmp1 = tmp->origin;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(351)
	::zpp_nape::geom::ZPP_Ray tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(351)
	::nape::geom::Vec2 tmp3 = tmp2->direction;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(351)
	::nape::geom::Ray tmp4 = ::nape::geom::Ray_obj::__new(tmp1,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(351)
	::nape::geom::Ray ret = tmp4;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(352)
	{
		HX_STACK_LINE(352)
		{
			HX_STACK_LINE(352)
			::zpp_nape::geom::ZPP_Ray tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(352)
			ret->zpp_inner->maxdist = tmp5->maxdist;
		}
		HX_STACK_LINE(352)
		ret->zpp_inner->maxdist;
	}
	HX_STACK_LINE(353)
	::nape::geom::Ray tmp5 = ret;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(353)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Ray_obj,copy,return )

::nape::geom::Ray Ray_obj::fromSegment( ::nape::geom::Vec2 start,::nape::geom::Vec2 end){
	HX_STACK_FRAME("nape.geom.Ray","fromSegment",0x543d7259,"nape.geom.Ray.fromSegment","nape/geom/Ray.hx",370,0xeaaa9e80)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(389)
	::nape::geom::Vec2 tmp = start;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(389)
	::nape::geom::Vec2 tmp1 = end->sub(tmp,true);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(389)
	::nape::geom::Vec2 dir = tmp1;		HX_STACK_VAR(dir,"dir");
	HX_STACK_LINE(390)
	::nape::geom::Ray tmp2 = ::nape::geom::Ray_obj::__new(start,dir);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(390)
	::nape::geom::Ray ret = tmp2;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(391)
	{
		HX_STACK_LINE(391)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(391)
		{
			HX_STACK_LINE(391)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(391)
			{
				HX_STACK_LINE(391)
				{
					HX_STACK_LINE(391)
					::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(391)
					bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(391)
					if ((tmp5)){
						HX_STACK_LINE(391)
						_this->_validate();
					}
				}
				HX_STACK_LINE(391)
				tmp4 = start->zpp_inner->x;
			}
			HX_STACK_LINE(391)
			Float ax = tmp4;		HX_STACK_VAR(ax,"ax");
			HX_STACK_LINE(391)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(391)
			{
				HX_STACK_LINE(391)
				{
					HX_STACK_LINE(391)
					::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(391)
					bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(391)
					if ((tmp6)){
						HX_STACK_LINE(391)
						_this->_validate();
					}
				}
				HX_STACK_LINE(391)
				tmp5 = start->zpp_inner->y;
			}
			HX_STACK_LINE(391)
			Float ay = tmp5;		HX_STACK_VAR(ay,"ay");
			HX_STACK_LINE(391)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(391)
			{
				HX_STACK_LINE(391)
				{
					HX_STACK_LINE(391)
					::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(391)
					bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(391)
					if ((tmp7)){
						HX_STACK_LINE(391)
						_this->_validate();
					}
				}
				HX_STACK_LINE(391)
				tmp6 = end->zpp_inner->x;
			}
			HX_STACK_LINE(391)
			Float bx = tmp6;		HX_STACK_VAR(bx,"bx");
			HX_STACK_LINE(391)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(391)
			{
				HX_STACK_LINE(391)
				{
					HX_STACK_LINE(391)
					::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(391)
					bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(391)
					if ((tmp8)){
						HX_STACK_LINE(391)
						_this->_validate();
					}
				}
				HX_STACK_LINE(391)
				tmp7 = end->zpp_inner->y;
			}
			HX_STACK_LINE(391)
			Float by = tmp7;		HX_STACK_VAR(by,"by");
			HX_STACK_LINE(391)
			Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(391)
			Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(391)
			{
				HX_STACK_LINE(391)
				Float tmp8 = (ax - bx);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(391)
				dx = tmp8;
				HX_STACK_LINE(391)
				Float tmp9 = (ay - by);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(391)
				dy = tmp9;
			}
			HX_STACK_LINE(391)
			Float tmp8 = (dx * dx);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(391)
			Float tmp9 = (dy * dy);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(391)
			tmp3 = (tmp8 + tmp9);
		}
		HX_STACK_LINE(391)
		Float tmp4 = ::Math_obj::sqrt(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(391)
		Float maxDistance = tmp4;		HX_STACK_VAR(maxDistance,"maxDistance");
		HX_STACK_LINE(391)
		ret->zpp_inner->maxdist = maxDistance;
		HX_STACK_LINE(391)
		ret->zpp_inner->maxdist;
	}
	HX_STACK_LINE(392)
	{
		HX_STACK_LINE(393)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(394)
		tmp3 = start->zpp_inner->weak;
		HX_STACK_LINE(393)
		if ((tmp3)){
			HX_STACK_LINE(396)
			{
				HX_STACK_LINE(396)
				::zpp_nape::geom::ZPP_Vec2 inner = start->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(396)
				start->zpp_inner->outer = null();
				HX_STACK_LINE(396)
				start->zpp_inner = null();
				HX_STACK_LINE(396)
				{
					HX_STACK_LINE(396)
					::nape::geom::Vec2 o = start;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(396)
					::nape::geom::Vec2 tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(396)
					o->zpp_pool = tmp4;
					HX_STACK_LINE(396)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(396)
				{
					HX_STACK_LINE(396)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(396)
					{
						HX_STACK_LINE(396)
						bool tmp4 = (o->outer != null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(396)
						if ((tmp4)){
							HX_STACK_LINE(396)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(396)
							o->outer = null();
						}
						HX_STACK_LINE(396)
						o->_isimmutable = null();
						HX_STACK_LINE(396)
						o->_validate = null();
						HX_STACK_LINE(396)
						o->_invalidate = null();
					}
					HX_STACK_LINE(396)
					::zpp_nape::geom::ZPP_Vec2 tmp4 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(396)
					o->next = tmp4;
					HX_STACK_LINE(396)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(397)
			true;
		}
		else{
			HX_STACK_LINE(400)
			false;
		}
	}
	HX_STACK_LINE(403)
	{
		HX_STACK_LINE(404)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(405)
		tmp3 = end->zpp_inner->weak;
		HX_STACK_LINE(404)
		if ((tmp3)){
			HX_STACK_LINE(407)
			{
				HX_STACK_LINE(407)
				::zpp_nape::geom::ZPP_Vec2 inner = end->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(407)
				end->zpp_inner->outer = null();
				HX_STACK_LINE(407)
				end->zpp_inner = null();
				HX_STACK_LINE(407)
				{
					HX_STACK_LINE(407)
					::nape::geom::Vec2 o = end;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(407)
					::nape::geom::Vec2 tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(407)
					o->zpp_pool = tmp4;
					HX_STACK_LINE(407)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(407)
				{
					HX_STACK_LINE(407)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(407)
					{
						HX_STACK_LINE(407)
						bool tmp4 = (o->outer != null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(407)
						if ((tmp4)){
							HX_STACK_LINE(407)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(407)
							o->outer = null();
						}
						HX_STACK_LINE(407)
						o->_isimmutable = null();
						HX_STACK_LINE(407)
						o->_validate = null();
						HX_STACK_LINE(407)
						o->_invalidate = null();
					}
					HX_STACK_LINE(407)
					::zpp_nape::geom::ZPP_Vec2 tmp4 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(407)
					o->next = tmp4;
					HX_STACK_LINE(407)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(408)
			true;
		}
		else{
			HX_STACK_LINE(411)
			false;
		}
	}
	HX_STACK_LINE(414)
	::nape::geom::Ray tmp3 = ret;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(414)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Ray_obj,fromSegment,return )


Ray_obj::Ray_obj()
{
}

void Ray_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Ray);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void Ray_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic Ray_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"aabb") ) { return aabb_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { if (inCallProp == hx::paccAlways) return get_origin(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { if (inCallProp == hx::paccAlways) return get_userData(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"direction") ) { if (inCallProp == hx::paccAlways) return get_direction(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_origin") ) { return get_origin_dyn(); }
		if (HX_FIELD_EQ(inName,"set_origin") ) { return set_origin_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxDistance") ) { if (inCallProp == hx::paccAlways) return get_maxDistance(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_userData") ) { return get_userData_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_direction") ) { return get_direction_dyn(); }
		if (HX_FIELD_EQ(inName,"set_direction") ) { return set_direction_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_maxDistance") ) { return get_maxDistance_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxDistance") ) { return set_maxDistance_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Ray_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"fromSegment") ) { outValue = fromSegment_dyn(); return true;  }
	}
	return false;
}

Dynamic Ray_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { if (inCallProp == hx::paccAlways) return set_origin(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::geom::ZPP_Ray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"direction") ) { if (inCallProp == hx::paccAlways) return set_direction(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxDistance") ) { if (inCallProp == hx::paccAlways) return set_maxDistance(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Ray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("userData","\x15","\x96","\x28","\x05"));
	outFields->push(HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"));
	outFields->push(HX_HCSTRING("direction","\x3f","\x62","\x40","\x10"));
	outFields->push(HX_HCSTRING("maxDistance","\xf9","\x9d","\xbf","\xe1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_Ray*/ ,(int)offsetof(Ray_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("get_userData","\x1e","\x4a","\x42","\xba"),
	HX_HCSTRING("get_origin","\xaf","\x89","\x88","\x3b"),
	HX_HCSTRING("set_origin","\x23","\x28","\x06","\x3f"),
	HX_HCSTRING("get_direction","\x16","\x36","\xa4","\xd1"),
	HX_HCSTRING("set_direction","\x22","\x18","\xaa","\x16"),
	HX_HCSTRING("get_maxDistance","\x90","\x55","\xa1","\xa2"),
	HX_HCSTRING("set_maxDistance","\x9c","\xd2","\x6c","\x9e"),
	HX_HCSTRING("aabb","\xa0","\xa2","\x67","\x40"),
	HX_HCSTRING("at","\xf3","\x54","\x00","\x00"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ray_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ray_obj::__mClass,"__mClass");
};

#endif

hx::Class Ray_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromSegment","\x69","\x33","\x0f","\x3f"),
	::String(null()) };

void Ray_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.geom.Ray","\x5e","\xf7","\x83","\xb6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Ray_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Ray_obj >;
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
