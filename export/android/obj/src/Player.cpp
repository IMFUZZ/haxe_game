#include <hxcpp.h>

#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
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
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

Void Player_obj::__construct(Float a_x,Float a_y)
{
HX_STACK_FRAME("Player","new",0x8d5554f3,"Player.new","Player.hx",12,0xa27fc9dd)
HX_STACK_THIS(this)
HX_STACK_ARG(a_x,"a_x")
HX_STACK_ARG(a_y,"a_y")
{
	HX_STACK_LINE(14)
	::Character tmp = ::Character_obj::__new(a_x,a_y);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	this->character = tmp;
	HX_STACK_LINE(16)
	::flixel::FlxSprite tmp1 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	this->tileSelected = tmp1;
	HX_STACK_LINE(17)
	::flixel::FlxSprite tmp2 = this->tileSelected;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(17)
	tmp2->makeGraphic((int)16,(int)16,(int)0,null(),null());
	HX_STACK_LINE(18)
	::flixel::FlxSprite tmp3 = this->tileSelected;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(18)
	int tmp4 = (int)15;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(18)
	int tmp5 = (int)15;		HX_STACK_VAR(tmp5,"tmp5");
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",18,0xa27fc9dd)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a") , ((Dynamic)((int)1)),false);
				__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , (int)-65536,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(18)
	Dynamic tmp6 = _Function_1_1::Block();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(18)
	::flixel::util::FlxSpriteUtil_obj::drawRect(tmp3,(int)0,(int)0,tmp4,tmp5,(int)0,tmp6,null());
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new(Float a_x,Float a_y)
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct(a_x,a_y);
	return _result_;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Player_obj::update( Float elapsed){
{
		HX_STACK_FRAME("Player","update",0xf1f8df56,"Player.update","Player.hx",21,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(22)
		::Character tmp = this->character;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(22)
		Float tmp1 = elapsed;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(22)
		tmp->update(tmp1);
		HX_STACK_LINE(25)
		::flixel::FlxSprite tmp2 = this->tileSelected;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		Float tmp3 = elapsed;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(25)
		tmp2->update(tmp3);
		HX_STACK_LINE(26)
		::Character tmp4 = this->character;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(26)
		Float tmp5 = elapsed;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(26)
		tmp4->afterUpdate(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,update,(void))


Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(character,"character");
	HX_MARK_MEMBER_NAME(tileSelected,"tileSelected");
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(character,"character");
	HX_VISIT_MEMBER_NAME(tileSelected,"tileSelected");
}

Dynamic Player_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"character") ) { return character; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tileSelected") ) { return tileSelected; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"character") ) { character=inValue.Cast< ::Character >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tileSelected") ) { tileSelected=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("character","\xa9","\xdb","\xd1","\x41"));
	outFields->push(HX_HCSTRING("tileSelected","\xa9","\x8f","\xbf","\x89"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Character*/ ,(int)offsetof(Player_obj,character),HX_HCSTRING("character","\xa9","\xdb","\xd1","\x41")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Player_obj,tileSelected),HX_HCSTRING("tileSelected","\xa9","\x8f","\xbf","\x89")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("character","\xa9","\xdb","\xd1","\x41"),
	HX_HCSTRING("tileSelected","\xa9","\x8f","\xbf","\x89"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#endif

hx::Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Player_obj >;
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

