#ifndef INCLUDED_zpp_nape_dynamics_ZPP_SensorArbiter
#define INCLUDED_zpp_nape_dynamics_ZPP_SensorArbiter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_Arbiter)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_SensorArbiter)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Shape)
namespace zpp_nape{
namespace dynamics{


class HXCPP_CLASS_ATTRIBUTES  ZPP_SensorArbiter_obj : public ::zpp_nape::dynamics::ZPP_Arbiter_obj{
	public:
		typedef ::zpp_nape::dynamics::ZPP_Arbiter_obj super;
		typedef ZPP_SensorArbiter_obj OBJ_;
		ZPP_SensorArbiter_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="zpp_nape.dynamics.ZPP_SensorArbiter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZPP_SensorArbiter_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_SensorArbiter_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ZPP_SensorArbiter","\x4a","\xab","\x77","\x2a"); }

		static void __boot();
		static ::zpp_nape::dynamics::ZPP_SensorArbiter zpp_pool;
		::zpp_nape::dynamics::ZPP_SensorArbiter next;
		virtual Void alloc( );
		Dynamic alloc_dyn();

		virtual Void free( );
		Dynamic free_dyn();

		virtual Void assign( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2,int id,int di);
		Dynamic assign_dyn();

		virtual Void retire( );
		Dynamic retire_dyn();

		virtual Void makemutable( );
		Dynamic makemutable_dyn();

		virtual Void makeimmutable( );
		Dynamic makeimmutable_dyn();

};

} // end namespace zpp_nape
} // end namespace dynamics

#endif /* INCLUDED_zpp_nape_dynamics_ZPP_SensorArbiter */ 