#include <hxcpp.h>

#ifndef INCLUDED_Clock
#include <Clock.h>
#endif
#ifndef INCLUDED_Item
#include <Item.h>
#endif
#ifndef INCLUDED_Shared
#include <Shared.h>
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
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

Void Item_obj::__construct(Dynamic __o_a_x,Dynamic __o_a_y)
{
HX_STACK_FRAME("Item","new",0x6a90a7a5,"Item.new","Item.hx",5,0xacacd36b)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_a_x,"a_x")
HX_STACK_ARG(__o_a_y,"a_y")
Dynamic a_x = __o_a_x.Default(0);
Dynamic a_y = __o_a_y.Default(0);
{
	HX_STACK_LINE(12)
	this->maxQuantity = (int)100;
	HX_STACK_LINE(11)
	this->quantity = (int)1;
	HX_STACK_LINE(10)
	this->stackable = false;
	HX_STACK_LINE(15)
	Dynamic tmp = a_x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	Dynamic tmp1 = a_y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(15)
	super::__construct(tmp,tmp1,null(),null(),null());
	HX_STACK_LINE(16)
	::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16)
	{
		HX_STACK_LINE(16)
		::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(16)
		::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(16)
		tmp2 = tmp4;
	}
	HX_STACK_LINE(16)
	this->creationTime = tmp2;
	HX_STACK_LINE(17)
	{
		HX_STACK_LINE(17)
		::Clock tmp3 = ::Shared_obj::clock;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(17)
		int tmp4 = tmp3->getCurrentYear();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(17)
		int value = tmp4;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(17)
		::haxe::ds::StringMap tmp5 = this->creationTime;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(17)
		int tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(17)
		tmp5->set(HX_HCSTRING("year","\xbd","\xc9","\x47","\x50"),tmp6);
	}
	HX_STACK_LINE(18)
	{
		HX_STACK_LINE(18)
		::Clock tmp3 = ::Shared_obj::clock;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(18)
		int tmp4 = tmp3->getCurrentDay();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(18)
		int value = tmp4;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(18)
		::haxe::ds::StringMap tmp5 = this->creationTime;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(18)
		int tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(18)
		tmp5->set(HX_HCSTRING("day","\x5c","\x36","\x4c","\x00"),tmp6);
	}
	HX_STACK_LINE(19)
	{
		HX_STACK_LINE(19)
		::Clock tmp3 = ::Shared_obj::clock;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(19)
		int tmp4 = tmp3->getCurrentHour();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(19)
		int value = tmp4;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(19)
		::haxe::ds::StringMap tmp5 = this->creationTime;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(19)
		int tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(19)
		tmp5->set(HX_HCSTRING("hour","\x24","\xd1","\x12","\x45"),tmp6);
	}
	HX_STACK_LINE(20)
	{
		HX_STACK_LINE(20)
		::Clock tmp3 = ::Shared_obj::clock;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(20)
		int tmp4 = tmp3->getCurrentMinute();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(20)
		int value = tmp4;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(20)
		::haxe::ds::StringMap tmp5 = this->creationTime;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(20)
		int tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(20)
		tmp5->set(HX_HCSTRING("minute","\xd4","\xe2","\x07","\x53"),tmp6);
	}
}
;
	return null();
}

//Item_obj::~Item_obj() { }

Dynamic Item_obj::__CreateEmpty() { return  new Item_obj; }
hx::ObjectPtr< Item_obj > Item_obj::__new(Dynamic __o_a_x,Dynamic __o_a_y)
{  hx::ObjectPtr< Item_obj > _result_ = new Item_obj();
	_result_->__construct(__o_a_x,__o_a_y);
	return _result_;}

Dynamic Item_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Item_obj > _result_ = new Item_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Item_obj::update( Float elapsed){
{
		HX_STACK_FRAME("Item","update",0x74c4c7e4,"Item.update","Item.hx",23,0xacacd36b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(24)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		this->super::update(tmp);
	}
return null();
}



Item_obj::Item_obj()
{
}

void Item_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Item);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(description,"description");
	HX_MARK_MEMBER_NAME(creationTime,"creationTime");
	HX_MARK_MEMBER_NAME(stackable,"stackable");
	HX_MARK_MEMBER_NAME(quantity,"quantity");
	HX_MARK_MEMBER_NAME(maxQuantity,"maxQuantity");
	::flixel::addons::nape::FlxNapeSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Item_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(description,"description");
	HX_VISIT_MEMBER_NAME(creationTime,"creationTime");
	HX_VISIT_MEMBER_NAME(stackable,"stackable");
	HX_VISIT_MEMBER_NAME(quantity,"quantity");
	HX_VISIT_MEMBER_NAME(maxQuantity,"maxQuantity");
	::flixel::addons::nape::FlxNapeSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Item_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"quantity") ) { return quantity; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stackable") ) { return stackable; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { return description; }
		if (HX_FIELD_EQ(inName,"maxQuantity") ) { return maxQuantity; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"creationTime") ) { return creationTime; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Item_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"quantity") ) { quantity=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stackable") ) { stackable=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { description=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxQuantity") ) { maxQuantity=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"creationTime") ) { creationTime=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Item_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("description","\xfc","\x08","\x1d","\x5f"));
	outFields->push(HX_HCSTRING("creationTime","\xcc","\x7b","\x9d","\x83"));
	outFields->push(HX_HCSTRING("stackable","\xe2","\x18","\x8d","\xe0"));
	outFields->push(HX_HCSTRING("quantity","\x8b","\x47","\x42","\xac"));
	outFields->push(HX_HCSTRING("maxQuantity","\x4f","\x52","\x08","\x22"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Item_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsString,(int)offsetof(Item_obj,description),HX_HCSTRING("description","\xfc","\x08","\x1d","\x5f")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Item_obj,creationTime),HX_HCSTRING("creationTime","\xcc","\x7b","\x9d","\x83")},
	{hx::fsBool,(int)offsetof(Item_obj,stackable),HX_HCSTRING("stackable","\xe2","\x18","\x8d","\xe0")},
	{hx::fsInt,(int)offsetof(Item_obj,quantity),HX_HCSTRING("quantity","\x8b","\x47","\x42","\xac")},
	{hx::fsInt,(int)offsetof(Item_obj,maxQuantity),HX_HCSTRING("maxQuantity","\x4f","\x52","\x08","\x22")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("description","\xfc","\x08","\x1d","\x5f"),
	HX_HCSTRING("creationTime","\xcc","\x7b","\x9d","\x83"),
	HX_HCSTRING("stackable","\xe2","\x18","\x8d","\xe0"),
	HX_HCSTRING("quantity","\x8b","\x47","\x42","\xac"),
	HX_HCSTRING("maxQuantity","\x4f","\x52","\x08","\x22"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Item_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
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
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Item_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

