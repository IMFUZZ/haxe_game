// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_GeomVertexIterator
#include <nape/geom/GeomVertexIterator.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVertexIterator
#include <zpp_nape/geom/ZPP_GeomVertexIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7f3627dc9209b0ff_327_new,"zpp_nape.geom.ZPP_GeomVertexIterator","new",0x9d8000f6,"zpp_nape.geom.ZPP_GeomVertexIterator.new","zpp_nape/geom/GeomPoly.hx",327,0x22e30365)
HX_DEFINE_STACK_FRAME(_hx_pos_7f3627dc9209b0ff_360_free,"zpp_nape.geom.ZPP_GeomVertexIterator","free",0x2d40ef56,"zpp_nape.geom.ZPP_GeomVertexIterator.free","zpp_nape/geom/GeomPoly.hx",360,0x22e30365)
HX_DEFINE_STACK_FRAME(_hx_pos_7f3627dc9209b0ff_366_alloc,"zpp_nape.geom.ZPP_GeomVertexIterator","alloc",0x869da68b,"zpp_nape.geom.ZPP_GeomVertexIterator.alloc","zpp_nape/geom/GeomPoly.hx",366,0x22e30365)
HX_DEFINE_STACK_FRAME(_hx_pos_7f3627dc9209b0ff_379_get,"zpp_nape.geom.ZPP_GeomVertexIterator","get",0x9d7ab12c,"zpp_nape.geom.ZPP_GeomVertexIterator.get","zpp_nape/geom/GeomPoly.hx",379,0x22e30365)
HX_DEFINE_STACK_FRAME(_hx_pos_7f3627dc9209b0ff_334_boot,"zpp_nape.geom.ZPP_GeomVertexIterator","boot",0x2a99d6dc,"zpp_nape.geom.ZPP_GeomVertexIterator.boot","zpp_nape/geom/GeomPoly.hx",334,0x22e30365)
namespace zpp_nape{
namespace geom{

void ZPP_GeomVertexIterator_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_7f3627dc9209b0ff_327_new)
            	HX_STACK_THIS(this)
HXLINE( 333)		this->next = null();
HXLINE( 332)		this->outer = null();
HXLINE( 331)		this->forward = false;
HXLINE( 330)		this->first = false;
HXLINE( 329)		this->start = null();
HXLINE( 328)		this->ptr = null();
HXLINE( 374)		this->outer =  ::nape::geom::GeomVertexIterator_obj::__alloc( HX_CTX );
            	}

Dynamic ZPP_GeomVertexIterator_obj::__CreateEmpty() { return new ZPP_GeomVertexIterator_obj; }

void *ZPP_GeomVertexIterator_obj::_hx_vtable = 0;

Dynamic ZPP_GeomVertexIterator_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ZPP_GeomVertexIterator_obj > _hx_result = new ZPP_GeomVertexIterator_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ZPP_GeomVertexIterator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x58471844;
}

void ZPP_GeomVertexIterator_obj::free(){
            	HX_STACKFRAME(&_hx_pos_7f3627dc9209b0ff_360_free)
            	HX_STACK_THIS(this)
HXLINE( 361)		this->outer->zpp_inner = null();
HXLINE( 362)		this->ptr = (this->start = null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_GeomVertexIterator_obj,free,(void))

void ZPP_GeomVertexIterator_obj::alloc(){
            	HX_STACKFRAME(&_hx_pos_7f3627dc9209b0ff_366_alloc)
            	HX_STACK_THIS(this)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_GeomVertexIterator_obj,alloc,(void))

 ::zpp_nape::geom::ZPP_GeomVertexIterator ZPP_GeomVertexIterator_obj::zpp_pool;

 ::nape::geom::GeomVertexIterator ZPP_GeomVertexIterator_obj::get( ::zpp_nape::geom::ZPP_GeomVert poly,bool forward){
            	HX_GC_STACKFRAME(&_hx_pos_7f3627dc9209b0ff_379_get)
            	HX_STACK_ARG(poly,"poly")
            	HX_STACK_ARG(forward,"forward")
HXLINE( 380)		HX_VAR(  ::zpp_nape::geom::ZPP_GeomVertexIterator,ret);
HXLINE( 382)		if (hx::IsNull( ::zpp_nape::geom::ZPP_GeomVertexIterator_obj::zpp_pool )) {
HXLINE( 383)			ret =  ::zpp_nape::geom::ZPP_GeomVertexIterator_obj::__alloc( HX_CTX );
            		}
            		else {
HXLINE( 389)			ret = ::zpp_nape::geom::ZPP_GeomVertexIterator_obj::zpp_pool;
HXLINE( 390)			::zpp_nape::geom::ZPP_GeomVertexIterator_obj::zpp_pool = ret->next;
HXLINE( 391)			ret->next = null();
            		}
HXLINE( 398)		ret->outer->zpp_inner = ret;
HXLINE( 399)		ret->ptr = poly;
HXLINE( 400)		ret->forward = forward;
HXLINE( 401)		ret->start = poly;
HXLINE( 402)		ret->first = hx::IsNotNull( poly );
HXLINE( 403)		return ret->outer;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_GeomVertexIterator_obj,get,return )


hx::ObjectPtr< ZPP_GeomVertexIterator_obj > ZPP_GeomVertexIterator_obj::__new() {
	hx::ObjectPtr< ZPP_GeomVertexIterator_obj > __this = new ZPP_GeomVertexIterator_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ZPP_GeomVertexIterator_obj > ZPP_GeomVertexIterator_obj::__alloc(hx::Ctx *_hx_ctx) {
	ZPP_GeomVertexIterator_obj *__this = (ZPP_GeomVertexIterator_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ZPP_GeomVertexIterator_obj), true, "zpp_nape.geom.ZPP_GeomVertexIterator"));
	*(void **)__this = ZPP_GeomVertexIterator_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ZPP_GeomVertexIterator_obj::ZPP_GeomVertexIterator_obj()
{
}

void ZPP_GeomVertexIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_GeomVertexIterator);
	HX_MARK_MEMBER_NAME(ptr,"ptr");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(first,"first");
	HX_MARK_MEMBER_NAME(forward,"forward");
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void ZPP_GeomVertexIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ptr,"ptr");
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(first,"first");
	HX_VISIT_MEMBER_NAME(forward,"forward");
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(next,"next");
}

hx::Val ZPP_GeomVertexIterator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ptr") ) { return hx::Val( ptr); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return hx::Val( next); }
		if (HX_FIELD_EQ(inName,"free") ) { return hx::Val( free_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return hx::Val( start); }
		if (HX_FIELD_EQ(inName,"first") ) { return hx::Val( first); }
		if (HX_FIELD_EQ(inName,"outer") ) { return hx::Val( outer); }
		if (HX_FIELD_EQ(inName,"alloc") ) { return hx::Val( alloc_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"forward") ) { return hx::Val( forward); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_GeomVertexIterator_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true; }
	}
	return false;
}

hx::Val ZPP_GeomVertexIterator_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ptr") ) { ptr=inValue.Cast<  ::zpp_nape::geom::ZPP_GeomVert >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::zpp_nape::geom::ZPP_GeomVertexIterator >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast<  ::zpp_nape::geom::ZPP_GeomVert >(); return inValue; }
		if (HX_FIELD_EQ(inName,"first") ) { first=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast<  ::nape::geom::GeomVertexIterator >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"forward") ) { forward=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_GeomVertexIterator_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast<  ::zpp_nape::geom::ZPP_GeomVertexIterator >(); return true; }
	}
	return false;
}

void ZPP_GeomVertexIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ptr","\xee","\x61","\x55","\x00"));
	outFields->push(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"));
	outFields->push(HX_HCSTRING("first","\x30","\x78","\x9d","\x00"));
	outFields->push(HX_HCSTRING("forward","\xc5","\xe1","\xca","\xe5"));
	outFields->push(HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ZPP_GeomVertexIterator_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_GeomVert*/ ,(int)offsetof(ZPP_GeomVertexIterator_obj,ptr),HX_HCSTRING("ptr","\xee","\x61","\x55","\x00")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_GeomVert*/ ,(int)offsetof(ZPP_GeomVertexIterator_obj,start),HX_HCSTRING("start","\x62","\x74","\x0b","\x84")},
	{hx::fsBool,(int)offsetof(ZPP_GeomVertexIterator_obj,first),HX_HCSTRING("first","\x30","\x78","\x9d","\x00")},
	{hx::fsBool,(int)offsetof(ZPP_GeomVertexIterator_obj,forward),HX_HCSTRING("forward","\xc5","\xe1","\xca","\xe5")},
	{hx::fsObject /*::nape::geom::GeomVertexIterator*/ ,(int)offsetof(ZPP_GeomVertexIterator_obj,outer),HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_GeomVertexIterator*/ ,(int)offsetof(ZPP_GeomVertexIterator_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo ZPP_GeomVertexIterator_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_GeomVertexIterator*/ ,(void *) &ZPP_GeomVertexIterator_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ZPP_GeomVertexIterator_obj_sMemberFields[] = {
	HX_HCSTRING("ptr","\xee","\x61","\x55","\x00"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("first","\x30","\x78","\x9d","\x00"),
	HX_HCSTRING("forward","\xc5","\xe1","\xca","\xe5"),
	HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	::String(null()) };

static void ZPP_GeomVertexIterator_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_GeomVertexIterator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_GeomVertexIterator_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ZPP_GeomVertexIterator_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_GeomVertexIterator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_GeomVertexIterator_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_GeomVertexIterator_obj::__mClass;

static ::String ZPP_GeomVertexIterator_obj_sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null())
};

void ZPP_GeomVertexIterator_obj::__register()
{
	hx::Object *dummy = new ZPP_GeomVertexIterator_obj;
	ZPP_GeomVertexIterator_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_GeomVertexIterator","\x04","\x0e","\x8b","\x73");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_GeomVertexIterator_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_GeomVertexIterator_obj::__SetStatic;
	__mClass->mMarkFunc = ZPP_GeomVertexIterator_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ZPP_GeomVertexIterator_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ZPP_GeomVertexIterator_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_GeomVertexIterator_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ZPP_GeomVertexIterator_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ZPP_GeomVertexIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ZPP_GeomVertexIterator_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ZPP_GeomVertexIterator_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7f3627dc9209b0ff_334_boot)
HXLINE( 334)		zpp_pool = null();
            	}
}

} // end namespace zpp_nape
} // end namespace geom