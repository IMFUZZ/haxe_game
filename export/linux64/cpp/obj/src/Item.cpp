// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Item
#include <Item.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_nape_FlxNapeSprite
#include <flixel/addons/nape/FlxNapeSprite.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

void Item_obj::__construct( ::Dynamic __o_a_x, ::Dynamic __o_a_y){
 ::Dynamic a_x = __o_a_x.Default(0);
 ::Dynamic a_y = __o_a_y.Default(0);
            	HX_STACK_FRAME("Item","new",0x6a90a7a5,"Item.new","Item.hx",8,0xacacd36b)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(a_x,"a_x")
            	HX_STACK_ARG(a_y,"a_y")
HXLINE(   8)		super::__construct(a_x,a_y,null(),null(),null());
            	}

Dynamic Item_obj::__CreateEmpty() { return new Item_obj; }

hx::ObjectPtr< Item_obj > Item_obj::__new( ::Dynamic __o_a_x, ::Dynamic __o_a_y)
{
	hx::ObjectPtr< Item_obj > _hx_result = new Item_obj();
	_hx_result->__construct(__o_a_x,__o_a_y);
	return _hx_result;
}

Dynamic Item_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Item_obj > _hx_result = new Item_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}


Item_obj::Item_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Item_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Item_obj_sStaticStorageInfo = 0;
#endif

static void Item_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Item_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Item_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Item_obj::__mClass,"__mClass");
};

#endif

hx::Class Item_obj::__mClass;

void Item_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Item","\x33","\xf1","\x98","\x30");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Item_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Item_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Item_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Item_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Item_obj_sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}
