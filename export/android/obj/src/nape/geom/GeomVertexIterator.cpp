#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_GeomVertexIterator
#include <nape/geom/GeomVertexIterator.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVertexIterator
#include <zpp_nape/geom/ZPP_GeomVertexIterator.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace nape{
namespace geom{

Void GeomVertexIterator_obj::__construct()
{
HX_STACK_FRAME("nape.geom.GeomVertexIterator","new",0x2010c04c,"nape.geom.GeomVertexIterator.new","nape/geom/GeomVertexIterator.hx",188,0x93c1d444)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//GeomVertexIterator_obj::~GeomVertexIterator_obj() { }

Dynamic GeomVertexIterator_obj::__CreateEmpty() { return  new GeomVertexIterator_obj; }
hx::ObjectPtr< GeomVertexIterator_obj > GeomVertexIterator_obj::__new()
{  hx::ObjectPtr< GeomVertexIterator_obj > _result_ = new GeomVertexIterator_obj();
	_result_->__construct();
	return _result_;}

Dynamic GeomVertexIterator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GeomVertexIterator_obj > _result_ = new GeomVertexIterator_obj();
	_result_->__construct();
	return _result_;}

bool GeomVertexIterator_obj::hasNext( ){
	HX_STACK_FRAME("nape.geom.GeomVertexIterator","hasNext",0x6d37fb59,"nape.geom.GeomVertexIterator.hasNext","nape/geom/GeomVertexIterator.hx",200,0x93c1d444)
	HX_STACK_THIS(this)
	HX_STACK_LINE(206)
	::zpp_nape::geom::ZPP_GeomVertexIterator tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(206)
	::zpp_nape::geom::ZPP_GeomVert tmp1 = tmp->ptr;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(206)
	::zpp_nape::geom::ZPP_GeomVertexIterator tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(206)
	::zpp_nape::geom::ZPP_GeomVert tmp3 = tmp2->start;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(206)
	bool tmp4 = (tmp1 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(206)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(206)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(206)
	if ((tmp5)){
		HX_STACK_LINE(206)
		::zpp_nape::geom::ZPP_GeomVertexIterator tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(206)
		::zpp_nape::geom::ZPP_GeomVertexIterator tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(206)
		tmp6 = tmp8->first;
	}
	else{
		HX_STACK_LINE(206)
		tmp6 = true;
	}
	HX_STACK_LINE(206)
	bool ret = tmp6;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(207)
	::zpp_nape::geom::ZPP_GeomVertexIterator tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(207)
	tmp7->first = false;
	HX_STACK_LINE(208)
	bool tmp8 = ret;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(208)
	bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(208)
	if ((tmp9)){
		HX_STACK_LINE(210)
		::zpp_nape::geom::ZPP_GeomVertexIterator tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(210)
		::zpp_nape::geom::ZPP_GeomVertexIterator o = tmp10;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(219)
		{
			HX_STACK_LINE(219)
			o->outer->zpp_inner = null();
			HX_STACK_LINE(219)
			::zpp_nape::geom::ZPP_GeomVert tmp11 = o->start = null();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(219)
			o->ptr = tmp11;
		}
		HX_STACK_LINE(220)
		::zpp_nape::geom::ZPP_GeomVertexIterator tmp11 = ::zpp_nape::geom::ZPP_GeomVertexIterator_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(220)
		o->next = tmp11;
		HX_STACK_LINE(221)
		::zpp_nape::geom::ZPP_GeomVertexIterator_obj::zpp_pool = o;
	}
	HX_STACK_LINE(227)
	bool tmp10 = ret;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(227)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomVertexIterator_obj,hasNext,return )

::nape::geom::Vec2 GeomVertexIterator_obj::next( ){
	HX_STACK_FRAME("nape.geom.GeomVertexIterator","next",0xee978387,"nape.geom.GeomVertexIterator.next","nape/geom/GeomVertexIterator.hx",237,0x93c1d444)
	HX_STACK_THIS(this)
	HX_STACK_LINE(243)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(243)
	{
		HX_STACK_LINE(243)
		::zpp_nape::geom::ZPP_GeomVertexIterator tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(243)
		::zpp_nape::geom::ZPP_GeomVert _this = tmp1->ptr;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(243)
		bool tmp2 = (_this->wrap == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(243)
		if ((tmp2)){
			HX_STACK_LINE(243)
			::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(243)
			{
				HX_STACK_LINE(243)
				Float x = _this->x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(243)
				Float y = _this->y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(243)
				bool weak = false;		HX_STACK_VAR(weak,"weak");
				HX_STACK_LINE(243)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(243)
				{
					HX_STACK_LINE(243)
					::nape::geom::Vec2 tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(243)
					bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(243)
					if ((tmp5)){
						HX_STACK_LINE(243)
						::nape::geom::Vec2 tmp6 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(243)
						ret = tmp6;
					}
					else{
						HX_STACK_LINE(243)
						::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(243)
						ret = tmp6;
						HX_STACK_LINE(243)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(243)
						ret->zpp_pool = null();
					}
				}
				HX_STACK_LINE(243)
				bool tmp4 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(243)
				if ((tmp4)){
					HX_STACK_LINE(243)
					::zpp_nape::geom::ZPP_Vec2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(243)
					{
						HX_STACK_LINE(243)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(243)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(243)
						{
							HX_STACK_LINE(243)
							::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(243)
							bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(243)
							if ((tmp7)){
								HX_STACK_LINE(243)
								::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(243)
								ret1 = tmp8;
							}
							else{
								HX_STACK_LINE(243)
								::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(243)
								ret1 = tmp8;
								HX_STACK_LINE(243)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(243)
								ret1->next = null();
							}
							HX_STACK_LINE(243)
							ret1->weak = false;
						}
						HX_STACK_LINE(243)
						ret1->_immutable = immutable;
						HX_STACK_LINE(243)
						{
							HX_STACK_LINE(243)
							ret1->x = x;
							HX_STACK_LINE(243)
							ret1->y = y;
							HX_STACK_LINE(243)
							{
							}
						}
						HX_STACK_LINE(243)
						tmp5 = ret1;
					}
					HX_STACK_LINE(243)
					ret->zpp_inner = tmp5;
					HX_STACK_LINE(243)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(243)
					Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(243)
					{
						HX_STACK_LINE(243)
						{
							HX_STACK_LINE(243)
							::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(243)
							bool tmp6 = (_this1->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(243)
							if ((tmp6)){
								HX_STACK_LINE(243)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(243)
						tmp5 = ret->zpp_inner->x;
					}
					HX_STACK_LINE(243)
					Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(243)
					bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(243)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(243)
					if ((tmp7)){
						HX_STACK_LINE(243)
						Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(243)
						{
							HX_STACK_LINE(243)
							{
								HX_STACK_LINE(243)
								::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(243)
								bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(243)
								bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(243)
								bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(243)
								if ((tmp12)){
									HX_STACK_LINE(243)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(243)
							Float tmp10 = ret->zpp_inner->y;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(243)
							tmp9 = tmp10;
						}
						HX_STACK_LINE(243)
						Float tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(243)
						tmp8 = (tmp9 == tmp10);
					}
					else{
						HX_STACK_LINE(243)
						tmp8 = false;
					}
					HX_STACK_LINE(243)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(243)
					if ((tmp9)){
						HX_STACK_LINE(243)
						{
							HX_STACK_LINE(243)
							ret->zpp_inner->x = x;
							HX_STACK_LINE(243)
							ret->zpp_inner->y = y;
							HX_STACK_LINE(243)
							{
							}
						}
						HX_STACK_LINE(243)
						{
							HX_STACK_LINE(243)
							::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(243)
							bool tmp10 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(243)
							if ((tmp10)){
								HX_STACK_LINE(243)
								::zpp_nape::geom::ZPP_Vec2 tmp11 = _this1;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(243)
								_this1->_invalidate(tmp11);
							}
						}
					}
					HX_STACK_LINE(243)
					ret;
				}
				HX_STACK_LINE(243)
				ret->zpp_inner->weak = weak;
				HX_STACK_LINE(243)
				tmp3 = ret;
			}
			HX_STACK_LINE(243)
			_this->wrap = tmp3;
			HX_STACK_LINE(243)
			::zpp_nape::geom::ZPP_Vec2 tmp4 = _this->wrap->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(243)
			tmp4->_inuse = true;
			HX_STACK_LINE(243)
			::zpp_nape::geom::ZPP_Vec2 tmp5 = _this->wrap->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(243)
			tmp5->_invalidate = _this->modwrap_dyn();
			HX_STACK_LINE(243)
			::zpp_nape::geom::ZPP_Vec2 tmp6 = _this->wrap->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(243)
			tmp6->_validate = _this->getwrap_dyn();
		}
		HX_STACK_LINE(243)
		tmp = _this->wrap;
	}
	HX_STACK_LINE(243)
	::nape::geom::Vec2 ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(244)
	::zpp_nape::geom::ZPP_GeomVertexIterator tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(244)
	bool tmp2 = tmp1->forward;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(244)
	::zpp_nape::geom::ZPP_GeomVert tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(244)
	if ((tmp2)){
		HX_STACK_LINE(244)
		::zpp_nape::geom::ZPP_GeomVertexIterator tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(244)
		tmp3 = tmp4->ptr->next;
	}
	else{
		HX_STACK_LINE(244)
		::zpp_nape::geom::ZPP_GeomVertexIterator tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(244)
		tmp3 = tmp4->ptr->prev;
	}
	HX_STACK_LINE(244)
	::zpp_nape::geom::ZPP_GeomVertexIterator tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(244)
	tmp4->ptr = tmp3;
	HX_STACK_LINE(245)
	::nape::geom::Vec2 tmp5 = ret;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(245)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomVertexIterator_obj,next,return )


GeomVertexIterator_obj::GeomVertexIterator_obj()
{
}

void GeomVertexIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GeomVertexIterator);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void GeomVertexIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic GeomVertexIterator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GeomVertexIterator_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::geom::ZPP_GeomVertexIterator >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GeomVertexIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_GeomVertexIterator*/ ,(int)offsetof(GeomVertexIterator_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GeomVertexIterator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GeomVertexIterator_obj::__mClass,"__mClass");
};

#endif

hx::Class GeomVertexIterator_obj::__mClass;

void GeomVertexIterator_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.geom.GeomVertexIterator","\x5a","\xea","\x07","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GeomVertexIterator_obj >;
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
