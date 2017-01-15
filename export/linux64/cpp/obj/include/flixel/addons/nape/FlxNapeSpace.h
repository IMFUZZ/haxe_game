// Generated by Haxe 3.4.0
#ifndef INCLUDED_flixel_addons_nape_FlxNapeSpace
#define INCLUDED_flixel_addons_nape_FlxNapeSpace

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS3(flixel,addons,nape,FlxNapeSpace)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,phys,Material)
HX_DECLARE_CLASS2(nape,space,Space)

namespace flixel{
namespace addons{
namespace nape{


class HXCPP_CLASS_ATTRIBUTES FlxNapeSpace_obj : public  ::flixel::FlxBasic_obj
{
	public:
		typedef  ::flixel::FlxBasic_obj super;
		typedef FlxNapeSpace_obj OBJ_;
		FlxNapeSpace_obj();

	public:
		enum { _hx_ClassId = 0x2cd610cb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.nape.FlxNapeSpace")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.addons.nape.FlxNapeSpace"); }
		static hx::ObjectPtr< FlxNapeSpace_obj > __new();
		static hx::ObjectPtr< FlxNapeSpace_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxNapeSpace_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("FlxNapeSpace","\x0c","\x08","\xc4","\x14"); }

		static void __boot();
		static  ::nape::space::Space space;
		static int velocityIterations;
		static int positionIterations;
		static bool drawDebug;
		static void init();
		static ::Dynamic init_dyn();

		static  ::nape::phys::Body createWalls(hx::Null< Float >  minX,hx::Null< Float >  minY,hx::Null< Float >  maxX,hx::Null< Float >  maxY,hx::Null< Float >  thickness, ::nape::phys::Material material);
		static ::Dynamic createWalls_dyn();

		static bool set_drawDebug(bool drawDebug);
		static ::Dynamic set_drawDebug_dyn();

		static void onStateSwitch();
		static ::Dynamic onStateSwitch_dyn();

		void update(Float elapsed);

		void draw();

};

} // end namespace flixel
} // end namespace addons
} // end namespace nape

#endif /* INCLUDED_flixel_addons_nape_FlxNapeSpace */ 