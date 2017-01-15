#ifndef INCLUDED_Item
#define INCLUDED_Item

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_nape_FlxNapeSprite
#include <flixel/addons/nape/FlxNapeSprite.h>
#endif
HX_DECLARE_CLASS0(Item)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,nape,FlxNapeSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)


class HXCPP_CLASS_ATTRIBUTES  Item_obj : public ::flixel::addons::nape::FlxNapeSprite_obj{
	public:
		typedef ::flixel::addons::nape::FlxNapeSprite_obj super;
		typedef Item_obj OBJ_;
		Item_obj();
		Void __construct(Dynamic __o_a_x,Dynamic __o_a_y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Item")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Item_obj > __new(Dynamic __o_a_x,Dynamic __o_a_y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Item_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Item","\x33","\xf1","\x98","\x30"); }

		::String name;
		::String description;
		::haxe::ds::StringMap creationTime;
		bool stackable;
		int quantity;
		int maxQuantity;
		virtual Void update( Float elapsed);

};


#endif /* INCLUDED_Item */ 
