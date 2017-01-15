#include <hxcpp.h>

#ifndef INCLUDED_Character
#include <Character.h>
#endif
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
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyType
#include <nape/phys/BodyType.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif

Void Character_obj::__construct(Dynamic a_x,Dynamic a_y)
{
HX_STACK_FRAME("Character","new",0x74bf54fb,"Character.new","Character.hx",13,0xf073a2d5)
HX_STACK_THIS(this)
HX_STACK_ARG(a_x,"a_x")
HX_STACK_ARG(a_y,"a_y")
{
	HX_STACK_LINE(18)
	this->_runSpeed = ((Float)1);
	HX_STACK_LINE(17)
	this->isRunning = false;
	HX_STACK_LINE(22)
	Dynamic tmp = a_x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	Dynamic tmp1 = a_y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	super::__construct(tmp,tmp1,null(),null(),null());
	HX_STACK_LINE(24)
	this->loadGraphic(HX_HCSTRING("assets/images/character.png","\xd9","\x9a","\x0b","\x66"),true,(int)16,(int)32,null(),null());
	HX_STACK_LINE(26)
	::nape::geom::Vec2 tmp2 = ::nape::geom::Vec2_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(26)
	this->_currentSpeed = tmp2;
	HX_STACK_LINE(27)
	::nape::phys::BodyType tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		::nape::phys::BodyType tmp4 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(27)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(27)
		if ((tmp5)){
			HX_STACK_LINE(27)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(27)
			::nape::phys::BodyType tmp6 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(27)
			::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = tmp6;
			HX_STACK_LINE(27)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(27)
		tmp3 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
	}
	HX_STACK_LINE(27)
	this->createCircularBody((int)8,tmp3);
	HX_STACK_LINE(28)
	this->setBodyMaterial((int)0,(int)0,(int)0,null(),null());
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		::nape::phys::Body tmp4 = this->body;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(29)
		::nape::phys::Body _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::String tmp5 = HX_HCSTRING("false","\xa3","\x35","\x4f","\xfb");		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(29)
			::String tmp6 = (HX_HCSTRING("Body::","\x02","\x8e","\x7d","\x8f") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(29)
			_this->zpp_inner->immutable_midstep(tmp6);
			HX_STACK_LINE(29)
			bool tmp7 = _this->zpp_inner->norotate;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(29)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(29)
			bool tmp9 = (tmp8 != false);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(29)
			if ((tmp9)){
				HX_STACK_LINE(29)
				bool tmp10 = true;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(29)
				_this->zpp_inner->norotate = tmp10;
				HX_STACK_LINE(29)
				_this->zpp_inner->invalidate_inertia();
			}
		}
		HX_STACK_LINE(29)
		bool tmp5 = _this->zpp_inner->norotate;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(29)
		!(tmp5);
	}
	HX_STACK_LINE(30)
	Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		::nape::phys::Body tmp5 = this->body;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(30)
		::nape::phys::Body _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(30)
		Dynamic tmp6 = _this->zpp_inner_i->userData;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(30)
		bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(30)
		if ((tmp7)){
			struct _Function_3_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Character.hx",30,0xf073a2d5)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(30)
			Dynamic tmp8 = _Function_3_1::Block();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(30)
			_this->zpp_inner_i->userData = tmp8;
		}
		HX_STACK_LINE(30)
		tmp4 = _this->zpp_inner_i->userData;
	}
	HX_STACK_LINE(30)
	tmp4->__FieldRef(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")) = HX_HCSTRING("player","\x61","\xeb","\xb8","\x37");
	HX_STACK_LINE(32)
	this->health = (int)100;
	HX_STACK_LINE(33)
	this->gold = (int)0;
	HX_STACK_LINE(35)
	this->inventory = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//Character_obj::~Character_obj() { }

Dynamic Character_obj::__CreateEmpty() { return  new Character_obj; }
hx::ObjectPtr< Character_obj > Character_obj::__new(Dynamic a_x,Dynamic a_y)
{  hx::ObjectPtr< Character_obj > _result_ = new Character_obj();
	_result_->__construct(a_x,a_y);
	return _result_;}

Dynamic Character_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Character_obj > _result_ = new Character_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Character_obj::update( Float elapsed){
{
		HX_STACK_FRAME("Character","update",0x0e18944e,"Character.update","Character.hx",38,0xf073a2d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(39)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		this->super::update(tmp);
	}
return null();
}


Void Character_obj::afterUpdate( Float elapsed){
{
		HX_STACK_FRAME("Character","afterUpdate",0x621ff4e0,"Character.afterUpdate","Character.hx",42,0xf073a2d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(43)
		this->updateRun();
		HX_STACK_LINE(44)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			::nape::geom::Vec2 tmp1 = this->_currentSpeed;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(44)
			::nape::geom::Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(44)
			{
				HX_STACK_LINE(44)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(44)
				bool tmp2 = (_this1->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(44)
				if ((tmp2)){
					HX_STACK_LINE(44)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(44)
			tmp = _this->zpp_inner->y;
		}
		HX_STACK_LINE(44)
		bool tmp1 = (tmp != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(44)
		if ((tmp1)){
			HX_STACK_LINE(44)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(44)
			{
				HX_STACK_LINE(44)
				::nape::geom::Vec2 tmp4 = this->_currentSpeed;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(44)
				::nape::geom::Vec2 tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(44)
				::nape::geom::Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(44)
				{
					HX_STACK_LINE(44)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(44)
					bool tmp6 = (_this1->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(44)
					bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(44)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(44)
					if ((tmp8)){
						HX_STACK_LINE(44)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(44)
				Float tmp6 = _this->zpp_inner->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(44)
				tmp3 = tmp6;
			}
			HX_STACK_LINE(44)
			tmp2 = (tmp3 != (int)0);
		}
		else{
			HX_STACK_LINE(44)
			tmp2 = false;
		}
		HX_STACK_LINE(44)
		if ((tmp2)){
			HX_STACK_LINE(44)
			::nape::geom::Vec2 tmp3 = this->_currentSpeed;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(44)
			tmp3->normalise();
		}
		HX_STACK_LINE(45)
		{
			HX_STACK_LINE(45)
			::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(45)
			{
				HX_STACK_LINE(45)
				::nape::phys::Body tmp4 = this->body;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(45)
				::nape::phys::Body _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(45)
				::nape::geom::Vec2 tmp5 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(45)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(45)
				if ((tmp6)){
					HX_STACK_LINE(45)
					_this->zpp_inner->setupVelocity();
				}
				HX_STACK_LINE(45)
				tmp3 = _this->zpp_inner->wrap_vel;
			}
			HX_STACK_LINE(45)
			::nape::geom::Vec2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(45)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(45)
			{
				HX_STACK_LINE(45)
				::nape::geom::Vec2 tmp5 = this->_currentSpeed;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(45)
				::nape::geom::Vec2 _this1 = tmp5;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(45)
				{
					HX_STACK_LINE(45)
					::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
					HX_STACK_LINE(45)
					bool tmp6 = (_this2->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(45)
					if ((tmp6)){
						HX_STACK_LINE(45)
						_this2->_validate();
					}
				}
				HX_STACK_LINE(45)
				tmp4 = _this1->zpp_inner->x;
			}
			HX_STACK_LINE(45)
			Float tmp5 = elapsed;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(45)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(45)
			Float tmp7 = ((int)5000 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(45)
			Float tmp8 = this->_runSpeed;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(45)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(45)
			Float x = tmp9;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(45)
			{
				HX_STACK_LINE(45)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(45)
				{
					HX_STACK_LINE(45)
					{
						HX_STACK_LINE(45)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(45)
						bool tmp11 = (_this1->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(45)
						if ((tmp11)){
							HX_STACK_LINE(45)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(45)
					tmp10 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(45)
				Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(45)
				bool tmp12 = (tmp10 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(45)
				if ((tmp12)){
					HX_STACK_LINE(45)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(45)
					{
						HX_STACK_LINE(45)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(45)
						bool tmp13 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(45)
						if ((tmp13)){
							HX_STACK_LINE(45)
							::zpp_nape::geom::ZPP_Vec2 tmp14 = _this1;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(45)
							_this1->_invalidate(tmp14);
						}
					}
				}
			}
			HX_STACK_LINE(45)
			{
				HX_STACK_LINE(45)
				{
					HX_STACK_LINE(45)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(45)
					bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(45)
					if ((tmp10)){
						HX_STACK_LINE(45)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(45)
				_this->zpp_inner->x;
			}
		}
		HX_STACK_LINE(46)
		{
			HX_STACK_LINE(46)
			::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(46)
			{
				HX_STACK_LINE(46)
				::nape::phys::Body tmp4 = this->body;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(46)
				::nape::phys::Body _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(46)
				::nape::geom::Vec2 tmp5 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(46)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(46)
				if ((tmp6)){
					HX_STACK_LINE(46)
					_this->zpp_inner->setupVelocity();
				}
				HX_STACK_LINE(46)
				tmp3 = _this->zpp_inner->wrap_vel;
			}
			HX_STACK_LINE(46)
			::nape::geom::Vec2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(46)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(46)
			{
				HX_STACK_LINE(46)
				::nape::geom::Vec2 tmp5 = this->_currentSpeed;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(46)
				::nape::geom::Vec2 _this1 = tmp5;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(46)
				{
					HX_STACK_LINE(46)
					::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
					HX_STACK_LINE(46)
					bool tmp6 = (_this2->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(46)
					if ((tmp6)){
						HX_STACK_LINE(46)
						_this2->_validate();
					}
				}
				HX_STACK_LINE(46)
				tmp4 = _this1->zpp_inner->y;
			}
			HX_STACK_LINE(46)
			Float tmp5 = elapsed;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(46)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(46)
			Float tmp7 = ((int)5000 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(46)
			Float tmp8 = this->_runSpeed;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(46)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(46)
			Float y = tmp9;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(46)
			{
				HX_STACK_LINE(46)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(46)
				{
					HX_STACK_LINE(46)
					{
						HX_STACK_LINE(46)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(46)
						bool tmp11 = (_this1->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(46)
						if ((tmp11)){
							HX_STACK_LINE(46)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(46)
					tmp10 = _this->zpp_inner->y;
				}
				HX_STACK_LINE(46)
				Float tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(46)
				bool tmp12 = (tmp10 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(46)
				if ((tmp12)){
					HX_STACK_LINE(46)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(46)
					{
						HX_STACK_LINE(46)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(46)
						bool tmp13 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(46)
						if ((tmp13)){
							HX_STACK_LINE(46)
							::zpp_nape::geom::ZPP_Vec2 tmp14 = _this1;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(46)
							_this1->_invalidate(tmp14);
						}
					}
				}
			}
			HX_STACK_LINE(46)
			{
				HX_STACK_LINE(46)
				{
					HX_STACK_LINE(46)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(46)
					bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(46)
					if ((tmp10)){
						HX_STACK_LINE(46)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(46)
				_this->zpp_inner->y;
			}
		}
		HX_STACK_LINE(47)
		{
			HX_STACK_LINE(47)
			::nape::geom::Vec2 tmp3 = this->_currentSpeed;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(47)
			::nape::geom::Vec2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(47)
			{
				HX_STACK_LINE(47)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(47)
				{
					HX_STACK_LINE(47)
					{
						HX_STACK_LINE(47)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(47)
						bool tmp5 = (_this1->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(47)
						if ((tmp5)){
							HX_STACK_LINE(47)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(47)
					tmp4 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(47)
				bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(47)
				if ((tmp5)){
					HX_STACK_LINE(47)
					_this->zpp_inner->x = (int)0;
					HX_STACK_LINE(47)
					{
						HX_STACK_LINE(47)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(47)
						bool tmp6 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(47)
						if ((tmp6)){
							HX_STACK_LINE(47)
							::zpp_nape::geom::ZPP_Vec2 tmp7 = _this1;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(47)
							_this1->_invalidate(tmp7);
						}
					}
				}
			}
			HX_STACK_LINE(47)
			{
				HX_STACK_LINE(47)
				{
					HX_STACK_LINE(47)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(47)
					bool tmp4 = (_this1->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(47)
					if ((tmp4)){
						HX_STACK_LINE(47)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(47)
				_this->zpp_inner->x;
			}
		}
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			::nape::geom::Vec2 tmp3 = this->_currentSpeed;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(48)
			::nape::geom::Vec2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(48)
			{
				HX_STACK_LINE(48)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(48)
				{
					HX_STACK_LINE(48)
					{
						HX_STACK_LINE(48)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(48)
						bool tmp5 = (_this1->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(48)
						if ((tmp5)){
							HX_STACK_LINE(48)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(48)
					tmp4 = _this->zpp_inner->y;
				}
				HX_STACK_LINE(48)
				bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(48)
				if ((tmp5)){
					HX_STACK_LINE(48)
					_this->zpp_inner->y = (int)0;
					HX_STACK_LINE(48)
					{
						HX_STACK_LINE(48)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(48)
						bool tmp6 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(48)
						if ((tmp6)){
							HX_STACK_LINE(48)
							::zpp_nape::geom::ZPP_Vec2 tmp7 = _this1;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(48)
							_this1->_invalidate(tmp7);
						}
					}
				}
			}
			HX_STACK_LINE(48)
			{
				HX_STACK_LINE(48)
				{
					HX_STACK_LINE(48)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(48)
					bool tmp4 = (_this1->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(48)
					if ((tmp4)){
						HX_STACK_LINE(48)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(48)
				_this->zpp_inner->y;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Character_obj,afterUpdate,(void))

Void Character_obj::updateRun( ){
{
		HX_STACK_FRAME("Character","updateRun",0xd8492f9d,"Character.updateRun","Character.hx",51,0xf073a2d5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		bool tmp = this->isRunning;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		if ((tmp)){
			HX_STACK_LINE(52)
			this->_runSpeed = ((Float)1.5);
		}
		else{
			HX_STACK_LINE(53)
			this->_runSpeed = (int)1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Character_obj,updateRun,(void))

int Character_obj::move( Dynamic __o_a_x,Dynamic __o_a_y){
Dynamic a_x = __o_a_x.Default(0);
Dynamic a_y = __o_a_y.Default(0);
	HX_STACK_FRAME("Character","move",0xb2096616,"Character.move","Character.hx",56,0xf073a2d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a_x,"a_x")
	HX_STACK_ARG(a_y,"a_y")
{
		HX_STACK_LINE(57)
		bool tmp = (a_x != (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(57)
		if ((tmp)){
			HX_STACK_LINE(57)
			::nape::geom::Vec2 tmp1 = this->_currentSpeed;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(57)
			::nape::geom::Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(57)
			Float x = a_x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(57)
			{
				HX_STACK_LINE(57)
				Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(57)
				{
					HX_STACK_LINE(57)
					{
						HX_STACK_LINE(57)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(57)
						bool tmp3 = (_this1->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(57)
						if ((tmp3)){
							HX_STACK_LINE(57)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(57)
					tmp2 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(57)
				Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(57)
				bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(57)
				if ((tmp4)){
					HX_STACK_LINE(57)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(57)
					{
						HX_STACK_LINE(57)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(57)
						bool tmp5 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(57)
						if ((tmp5)){
							HX_STACK_LINE(57)
							::zpp_nape::geom::ZPP_Vec2 tmp6 = _this1;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(57)
							_this1->_invalidate(tmp6);
						}
					}
				}
			}
			HX_STACK_LINE(57)
			{
				HX_STACK_LINE(57)
				{
					HX_STACK_LINE(57)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(57)
					bool tmp2 = (_this1->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(57)
					if ((tmp2)){
						HX_STACK_LINE(57)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(57)
				_this->zpp_inner->x;
			}
		}
		HX_STACK_LINE(58)
		bool tmp1 = (a_y != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		if ((tmp1)){
			HX_STACK_LINE(58)
			::nape::geom::Vec2 tmp2 = this->_currentSpeed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(58)
			::nape::geom::Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(58)
			Float y = a_y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(58)
			{
				HX_STACK_LINE(58)
				Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(58)
				{
					HX_STACK_LINE(58)
					{
						HX_STACK_LINE(58)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(58)
						bool tmp4 = (_this1->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(58)
						if ((tmp4)){
							HX_STACK_LINE(58)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(58)
					tmp3 = _this->zpp_inner->y;
				}
				HX_STACK_LINE(58)
				Float tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(58)
				bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(58)
				if ((tmp5)){
					HX_STACK_LINE(58)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(58)
					{
						HX_STACK_LINE(58)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(58)
						bool tmp6 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(58)
						if ((tmp6)){
							HX_STACK_LINE(58)
							::zpp_nape::geom::ZPP_Vec2 tmp7 = _this1;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(58)
							_this1->_invalidate(tmp7);
						}
					}
				}
			}
			HX_STACK_LINE(58)
			{
				HX_STACK_LINE(58)
				{
					HX_STACK_LINE(58)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(58)
					bool tmp3 = (_this1->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(58)
					if ((tmp3)){
						HX_STACK_LINE(58)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(58)
				_this->zpp_inner->y;
			}
		}
		HX_STACK_LINE(59)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Character_obj,move,return )


Character_obj::Character_obj()
{
}

void Character_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Character);
	HX_MARK_MEMBER_NAME(gold,"gold");
	HX_MARK_MEMBER_NAME(inventory,"inventory");
	HX_MARK_MEMBER_NAME(isRunning,"isRunning");
	HX_MARK_MEMBER_NAME(_runSpeed,"_runSpeed");
	HX_MARK_MEMBER_NAME(_currentSpeed,"_currentSpeed");
	::flixel::addons::nape::FlxNapeSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Character_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gold,"gold");
	HX_VISIT_MEMBER_NAME(inventory,"inventory");
	HX_VISIT_MEMBER_NAME(isRunning,"isRunning");
	HX_VISIT_MEMBER_NAME(_runSpeed,"_runSpeed");
	HX_VISIT_MEMBER_NAME(_currentSpeed,"_currentSpeed");
	::flixel::addons::nape::FlxNapeSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Character_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"gold") ) { return gold; }
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inventory") ) { return inventory; }
		if (HX_FIELD_EQ(inName,"isRunning") ) { return isRunning; }
		if (HX_FIELD_EQ(inName,"_runSpeed") ) { return _runSpeed; }
		if (HX_FIELD_EQ(inName,"updateRun") ) { return updateRun_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"afterUpdate") ) { return afterUpdate_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_currentSpeed") ) { return _currentSpeed; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Character_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"gold") ) { gold=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inventory") ) { inventory=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isRunning") ) { isRunning=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_runSpeed") ) { _runSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_currentSpeed") ) { _currentSpeed=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Character_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gold","\xa0","\x92","\x69","\x44"));
	outFields->push(HX_HCSTRING("inventory","\x9c","\x76","\xb6","\x48"));
	outFields->push(HX_HCSTRING("isRunning","\x35","\xeb","\x67","\xef"));
	outFields->push(HX_HCSTRING("_runSpeed","\x9b","\xc7","\x34","\xd1"));
	outFields->push(HX_HCSTRING("_currentSpeed","\x6d","\x0f","\xe4","\xaa"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Character_obj,gold),HX_HCSTRING("gold","\xa0","\x92","\x69","\x44")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Character_obj,inventory),HX_HCSTRING("inventory","\x9c","\x76","\xb6","\x48")},
	{hx::fsBool,(int)offsetof(Character_obj,isRunning),HX_HCSTRING("isRunning","\x35","\xeb","\x67","\xef")},
	{hx::fsFloat,(int)offsetof(Character_obj,_runSpeed),HX_HCSTRING("_runSpeed","\x9b","\xc7","\x34","\xd1")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(Character_obj,_currentSpeed),HX_HCSTRING("_currentSpeed","\x6d","\x0f","\xe4","\xaa")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("gold","\xa0","\x92","\x69","\x44"),
	HX_HCSTRING("inventory","\x9c","\x76","\xb6","\x48"),
	HX_HCSTRING("isRunning","\x35","\xeb","\x67","\xef"),
	HX_HCSTRING("_runSpeed","\x9b","\xc7","\x34","\xd1"),
	HX_HCSTRING("_currentSpeed","\x6d","\x0f","\xe4","\xaa"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("afterUpdate","\x45","\xdd","\x65","\xd8"),
	HX_HCSTRING("updateRun","\xc2","\xc4","\xe3","\x82"),
	HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Character_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Character_obj::__mClass,"__mClass");
};

#endif

hx::Class Character_obj::__mClass;

void Character_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Character","\x89","\xbb","\xa4","\xe3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Character_obj >;
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

