#ifndef INCLUDED_zpp_nape_geom_ZPP_VecMath
#define INCLUDED_zpp_nape_geom_ZPP_VecMath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_VecMath)
namespace zpp_nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  ZPP_VecMath_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_VecMath_obj OBJ_;
		ZPP_VecMath_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="zpp_nape.geom.ZPP_VecMath")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZPP_VecMath_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_VecMath_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ZPP_VecMath","\x77","\x86","\xbc","\x18"); }

		static Float vec_dsq( Float ax,Float ay,Float bx,Float by);
		static Dynamic vec_dsq_dyn();

		static Float vec_distance( Float ax,Float ay,Float bx,Float by);
		static Dynamic vec_distance_dyn();

};

} // end namespace zpp_nape
} // end namespace geom

#endif /* INCLUDED_zpp_nape_geom_ZPP_VecMath */ 
