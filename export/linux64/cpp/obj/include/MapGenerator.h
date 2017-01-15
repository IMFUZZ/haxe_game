// Generated by Haxe 3.3.0
#ifndef INCLUDED_MapGenerator
#define INCLUDED_MapGenerator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(MapGenerator)



class HXCPP_CLASS_ATTRIBUTES MapGenerator_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef MapGenerator_obj OBJ_;
		MapGenerator_obj();
		void __construct(Int a_size,Float a_displacement);

	public:
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="MapGenerator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MapGenerator_obj > __new(Int a_size,Float a_displacement);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MapGenerator_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("MapGenerator","\x37","\xe6","\xb2","\xf1"); }

		Int _size;
		Float _displacement;
		Int _valueRange;
		::Array< ::Dynamic> table;
		::Array< ::Dynamic> generate();
		::Dynamic generate_dyn();

		void clear();
		::Dynamic clear_dyn();

		::Array< ::Dynamic> divide(::Array< ::Dynamic> a_table,Int x1,Int y1,Int x2,Int y2,Float a_displacement);
		::Dynamic divide_dyn();

		::Array< ::Dynamic> transformToValueRange(Int a_valueRange);
		::Dynamic transformToValueRange_dyn();

		::Array< ::Dynamic> getViewable(Int tileSize);
		::Dynamic getViewable_dyn();

};


#endif /* INCLUDED_MapGenerator */ 