// Generated by Haxe 3.4.0
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleSweep
#define INCLUDED_zpp_nape_geom_ZPP_SimpleSweep

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_SimpleEvent)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_SimpleSeg)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_SimpleSweep)
HX_DECLARE_CLASS2(zpp_nape,util,ZPP_Set_ZPP_SimpleSeg)

namespace zpp_nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES ZPP_SimpleSweep_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ZPP_SimpleSweep_obj OBJ_;
		ZPP_SimpleSweep_obj();

	public:
		enum { _hx_ClassId = 0x7f8094b8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="zpp_nape.geom.ZPP_SimpleSweep")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"zpp_nape.geom.ZPP_SimpleSweep"); }
		static hx::ObjectPtr< ZPP_SimpleSweep_obj > __new();
		static hx::ObjectPtr< ZPP_SimpleSweep_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_SimpleSweep_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ZPP_SimpleSweep","\x15","\xc2","\xa5","\xec"); }

		Float sweepx;
		 ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tree;
		void swap_nodes( ::zpp_nape::geom::ZPP_SimpleSeg p, ::zpp_nape::geom::ZPP_SimpleSeg q);
		::Dynamic swap_nodes_dyn();

		bool edge_lt( ::zpp_nape::geom::ZPP_SimpleSeg p, ::zpp_nape::geom::ZPP_SimpleSeg q);
		::Dynamic edge_lt_dyn();

		void clear();
		::Dynamic clear_dyn();

		 ::zpp_nape::geom::ZPP_SimpleSeg add( ::zpp_nape::geom::ZPP_SimpleSeg e);
		::Dynamic add_dyn();

		void remove( ::zpp_nape::geom::ZPP_SimpleSeg e);
		::Dynamic remove_dyn();

		bool intersect( ::zpp_nape::geom::ZPP_SimpleSeg p, ::zpp_nape::geom::ZPP_SimpleSeg q);
		::Dynamic intersect_dyn();

		 ::zpp_nape::geom::ZPP_SimpleEvent intersection( ::zpp_nape::geom::ZPP_SimpleSeg p, ::zpp_nape::geom::ZPP_SimpleSeg q);
		::Dynamic intersection_dyn();

};

} // end namespace zpp_nape
} // end namespace geom

#endif /* INCLUDED_zpp_nape_geom_ZPP_SimpleSweep */ 