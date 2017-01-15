// Generated by Haxe 3.4.0
#ifndef INCLUDED_nape_dynamics_FluidArbiter
#define INCLUDED_nape_dynamics_FluidArbiter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
HX_DECLARE_CLASS2(nape,dynamics,Arbiter)
HX_DECLARE_CLASS2(nape,dynamics,FluidArbiter)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,geom,Vec3)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Interactor)

namespace nape{
namespace dynamics{


class HXCPP_CLASS_ATTRIBUTES FluidArbiter_obj : public  ::nape::dynamics::Arbiter_obj
{
	public:
		typedef  ::nape::dynamics::Arbiter_obj super;
		typedef FluidArbiter_obj OBJ_;
		FluidArbiter_obj();

	public:
		enum { _hx_ClassId = 0x4b698aff };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="nape.dynamics.FluidArbiter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"nape.dynamics.FluidArbiter"); }
		static hx::ObjectPtr< FluidArbiter_obj > __new();
		static hx::ObjectPtr< FluidArbiter_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FluidArbiter_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("FluidArbiter","\x1f","\x8f","\x95","\xed"); }

		 ::nape::geom::Vec2 get_position();
		::Dynamic get_position_dyn();

		 ::nape::geom::Vec2 set_position( ::nape::geom::Vec2 position);
		::Dynamic set_position_dyn();

		Float get_overlap();
		::Dynamic get_overlap_dyn();

		Float set_overlap(Float overlap);
		::Dynamic set_overlap_dyn();

		 ::nape::geom::Vec3 buoyancyImpulse( ::nape::phys::Body body);
		::Dynamic buoyancyImpulse_dyn();

		 ::nape::geom::Vec3 dragImpulse( ::nape::phys::Body body);
		::Dynamic dragImpulse_dyn();

		 ::nape::geom::Vec3 totalImpulse( ::nape::phys::Body body,hx::Null< bool >  freshOnly);

};

} // end namespace nape
} // end namespace dynamics

#endif /* INCLUDED_nape_dynamics_FluidArbiter */ 