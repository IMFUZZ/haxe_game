#ifndef INCLUDED_MapGenerator
#define INCLUDED_MapGenerator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(MapGenerator)


class HXCPP_CLASS_ATTRIBUTES  MapGenerator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MapGenerator_obj OBJ_;
		MapGenerator_obj();
		Void __construct(int a_size,Float a_displacement);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="MapGenerator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MapGenerator_obj > __new(int a_size,Float a_displacement);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MapGenerator_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("MapGenerator","\x37","\xe6","\xb2","\xf1"); }

		int _size;
		Float _displacement;
		int _valueRange;
		Array< ::Dynamic > table;
		virtual Array< ::Dynamic > generate( );
		Dynamic generate_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Array< ::Dynamic > divide( Array< ::Dynamic > a_table,int x1,int y1,int x2,int y2,Float a_displacement);
		Dynamic divide_dyn();

		virtual Array< ::Dynamic > transformToValueRange( int a_valueRange);
		Dynamic transformToValueRange_dyn();

		virtual Array< ::Dynamic > getViewable( int tileSize);
		Dynamic getViewable_dyn();

};


#endif /* INCLUDED_MapGenerator */ 
