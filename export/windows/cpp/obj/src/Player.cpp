#include <hxcpp.h>

#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_PivotJoint
#include <nape/constraint/PivotJoint.h>
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

Void Player_obj::__construct(Dynamic __o_a_x,Dynamic __o_a_y)
{
HX_STACK_FRAME("Player","new",0x8d5554f3,"Player.new","Player.hx",15,0xa27fc9dd)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_a_x,"a_x")
HX_STACK_ARG(__o_a_y,"a_y")
Dynamic a_x = __o_a_x.Default(0);
Dynamic a_y = __o_a_y.Default(0);
{
	HX_STACK_LINE(22)
	this->isRunning = false;
	HX_STACK_LINE(19)
	this->_runSpeed = ((Float)1);
	HX_STACK_LINE(18)
	this->_walkSpeed = ((Float)6);
	HX_STACK_LINE(25)
	Dynamic tmp = a_x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	Dynamic tmp1 = a_y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	super::__construct(tmp,tmp1,null(),null(),null());
	HX_STACK_LINE(27)
	::nape::geom::Vec2 tmp2 = ::nape::geom::Vec2_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	this->_currentSpeed = tmp2;
	HX_STACK_LINE(29)
	this->loadGraphic(HX_HCSTRING("assets/images/character.png","\xd9","\x9a","\x0b","\x66"),true,(int)16,(int)32,null(),null());
	HX_STACK_LINE(31)
	::nape::phys::BodyType tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		::nape::phys::BodyType tmp4 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(31)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(31)
		if ((tmp5)){
			HX_STACK_LINE(31)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(31)
			::nape::phys::BodyType tmp6 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(31)
			::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = tmp6;
			HX_STACK_LINE(31)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(31)
		tmp3 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
	}
	HX_STACK_LINE(31)
	this->createCircularBody((int)8,tmp3);
	HX_STACK_LINE(32)
	this->setBodyMaterial((int)0,(int)0,(int)0,null(),null());
	HX_STACK_LINE(34)
	Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(34)
	{
		HX_STACK_LINE(34)
		::nape::phys::Body tmp5 = this->body;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(34)
		::nape::phys::Body _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(34)
		Dynamic tmp6 = _this->zpp_inner_i->userData;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(34)
		bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(34)
		if ((tmp7)){
			struct _Function_3_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",34,0xa27fc9dd)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(34)
			Dynamic tmp8 = _Function_3_1::Block();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(34)
			_this->zpp_inner_i->userData = tmp8;
		}
		HX_STACK_LINE(34)
		tmp4 = _this->zpp_inner_i->userData;
	}
	HX_STACK_LINE(34)
	tmp4->__FieldRef(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")) = HX_HCSTRING("player","\x61","\xeb","\xb8","\x37");
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		::nape::phys::Body tmp5 = this->body;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(35)
		::nape::phys::Body _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(35)
		{
			HX_STACK_LINE(35)
			::String tmp6 = HX_HCSTRING("false","\xa3","\x35","\x4f","\xfb");		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(35)
			::String tmp7 = (HX_HCSTRING("Body::","\x02","\x8e","\x7d","\x8f") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(35)
			_this->zpp_inner->immutable_midstep(tmp7);
			HX_STACK_LINE(35)
			bool tmp8 = _this->zpp_inner->norotate;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(35)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(35)
			bool tmp10 = (tmp9 != false);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(35)
			if ((tmp10)){
				HX_STACK_LINE(35)
				bool tmp11 = true;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(35)
				_this->zpp_inner->norotate = tmp11;
				HX_STACK_LINE(35)
				_this->zpp_inner->invalidate_inertia();
			}
		}
		HX_STACK_LINE(35)
		bool tmp6 = _this->zpp_inner->norotate;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(35)
		!(tmp6);
	}
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new(Dynamic __o_a_x,Dynamic __o_a_y)
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct(__o_a_x,__o_a_y);
	return _result_;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Player_obj::beforeUpdate( ){
{
		HX_STACK_FRAME("Player","beforeUpdate",0xceda08f5,"Player.beforeUpdate","Player.hx",44,0xa27fc9dd)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,beforeUpdate,(void))

Void Player_obj::update( Float elapsed){
{
		HX_STACK_FRAME("Player","update",0xf1f8df56,"Player.update","Player.hx",48,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(49)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		this->super::update(tmp);
	}
return null();
}


Void Player_obj::afterUpdate( ){
{
		HX_STACK_FRAME("Player","afterUpdate",0x692aacd8,"Player.afterUpdate","Player.hx",52,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(53)
		this->updateRun();
		HX_STACK_LINE(54)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			::nape::geom::Vec2 tmp1 = this->_currentSpeed;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(54)
			::nape::geom::Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(54)
			{
				HX_STACK_LINE(54)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(54)
				bool tmp2 = (_this1->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(54)
				if ((tmp2)){
					HX_STACK_LINE(54)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(54)
			tmp = _this->zpp_inner->y;
		}
		HX_STACK_LINE(54)
		bool tmp1 = (tmp != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(54)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(54)
		if ((tmp1)){
			HX_STACK_LINE(54)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(54)
			{
				HX_STACK_LINE(54)
				::nape::geom::Vec2 tmp4 = this->_currentSpeed;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(54)
				::nape::geom::Vec2 tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(54)
				::nape::geom::Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(54)
				{
					HX_STACK_LINE(54)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(54)
					bool tmp6 = (_this1->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(54)
					bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(54)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(54)
					if ((tmp8)){
						HX_STACK_LINE(54)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(54)
				Float tmp6 = _this->zpp_inner->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(54)
				tmp3 = tmp6;
			}
			HX_STACK_LINE(54)
			tmp2 = (tmp3 != (int)0);
		}
		else{
			HX_STACK_LINE(54)
			tmp2 = false;
		}
		HX_STACK_LINE(54)
		if ((tmp2)){
			HX_STACK_LINE(54)
			::nape::geom::Vec2 tmp3 = this->_currentSpeed;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(54)
			tmp3->normalise();
		}
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(55)
			{
				HX_STACK_LINE(55)
				::nape::phys::Body tmp4 = this->body;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(55)
				::nape::phys::Body _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(55)
				::nape::geom::Vec2 tmp5 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(55)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(55)
				if ((tmp6)){
					HX_STACK_LINE(55)
					_this->zpp_inner->setupVelocity();
				}
				HX_STACK_LINE(55)
				tmp3 = _this->zpp_inner->wrap_vel;
			}
			HX_STACK_LINE(55)
			::nape::geom::Vec2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(55)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(55)
			{
				HX_STACK_LINE(55)
				::nape::geom::Vec2 tmp5 = this->_currentSpeed;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(55)
				::nape::geom::Vec2 _this1 = tmp5;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(55)
				{
					HX_STACK_LINE(55)
					::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
					HX_STACK_LINE(55)
					bool tmp6 = (_this2->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(55)
					if ((tmp6)){
						HX_STACK_LINE(55)
						_this2->_validate();
					}
				}
				HX_STACK_LINE(55)
				tmp4 = _this1->zpp_inner->x;
			}
			HX_STACK_LINE(55)
			Float tmp5 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(55)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(55)
			Float tmp7 = ((int)5000 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(55)
			Float tmp8 = this->_runSpeed;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(55)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(55)
			Float x = tmp9;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(55)
			{
				HX_STACK_LINE(55)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(55)
				{
					HX_STACK_LINE(55)
					{
						HX_STACK_LINE(55)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(55)
						bool tmp11 = (_this1->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(55)
						if ((tmp11)){
							HX_STACK_LINE(55)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(55)
					tmp10 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(55)
				Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(55)
				bool tmp12 = (tmp10 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(55)
				if ((tmp12)){
					HX_STACK_LINE(55)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(55)
					{
						HX_STACK_LINE(55)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(55)
						bool tmp13 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(55)
						if ((tmp13)){
							HX_STACK_LINE(55)
							::zpp_nape::geom::ZPP_Vec2 tmp14 = _this1;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(55)
							_this1->_invalidate(tmp14);
						}
					}
				}
			}
			HX_STACK_LINE(55)
			{
				HX_STACK_LINE(55)
				{
					HX_STACK_LINE(55)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(55)
					bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(55)
					if ((tmp10)){
						HX_STACK_LINE(55)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(55)
				_this->zpp_inner->x;
			}
		}
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(56)
			{
				HX_STACK_LINE(56)
				::nape::phys::Body tmp4 = this->body;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(56)
				::nape::phys::Body _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(56)
				::nape::geom::Vec2 tmp5 = _this->zpp_inner->wrap_vel;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(56)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(56)
				if ((tmp6)){
					HX_STACK_LINE(56)
					_this->zpp_inner->setupVelocity();
				}
				HX_STACK_LINE(56)
				tmp3 = _this->zpp_inner->wrap_vel;
			}
			HX_STACK_LINE(56)
			::nape::geom::Vec2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(56)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(56)
			{
				HX_STACK_LINE(56)
				::nape::geom::Vec2 tmp5 = this->_currentSpeed;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(56)
				::nape::geom::Vec2 _this1 = tmp5;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(56)
				{
					HX_STACK_LINE(56)
					::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
					HX_STACK_LINE(56)
					bool tmp6 = (_this2->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(56)
					if ((tmp6)){
						HX_STACK_LINE(56)
						_this2->_validate();
					}
				}
				HX_STACK_LINE(56)
				tmp4 = _this1->zpp_inner->y;
			}
			HX_STACK_LINE(56)
			Float tmp5 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(56)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(56)
			Float tmp7 = ((int)5000 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(56)
			Float tmp8 = this->_runSpeed;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(56)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(56)
			Float y = tmp9;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(56)
			{
				HX_STACK_LINE(56)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(56)
				{
					HX_STACK_LINE(56)
					{
						HX_STACK_LINE(56)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(56)
						bool tmp11 = (_this1->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(56)
						if ((tmp11)){
							HX_STACK_LINE(56)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(56)
					tmp10 = _this->zpp_inner->y;
				}
				HX_STACK_LINE(56)
				Float tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(56)
				bool tmp12 = (tmp10 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(56)
				if ((tmp12)){
					HX_STACK_LINE(56)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(56)
					{
						HX_STACK_LINE(56)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(56)
						bool tmp13 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(56)
						if ((tmp13)){
							HX_STACK_LINE(56)
							::zpp_nape::geom::ZPP_Vec2 tmp14 = _this1;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(56)
							_this1->_invalidate(tmp14);
						}
					}
				}
			}
			HX_STACK_LINE(56)
			{
				HX_STACK_LINE(56)
				{
					HX_STACK_LINE(56)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(56)
					bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(56)
					if ((tmp10)){
						HX_STACK_LINE(56)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(56)
				_this->zpp_inner->y;
			}
		}
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			::nape::geom::Vec2 tmp3 = this->_currentSpeed;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(57)
			::nape::geom::Vec2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(57)
			{
				HX_STACK_LINE(57)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(57)
				{
					HX_STACK_LINE(57)
					{
						HX_STACK_LINE(57)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(57)
						bool tmp5 = (_this1->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(57)
						if ((tmp5)){
							HX_STACK_LINE(57)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(57)
					tmp4 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(57)
				bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(57)
				if ((tmp5)){
					HX_STACK_LINE(57)
					_this->zpp_inner->x = (int)0;
					HX_STACK_LINE(57)
					{
						HX_STACK_LINE(57)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(57)
						bool tmp6 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(57)
						if ((tmp6)){
							HX_STACK_LINE(57)
							::zpp_nape::geom::ZPP_Vec2 tmp7 = _this1;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(57)
							_this1->_invalidate(tmp7);
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
					bool tmp4 = (_this1->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(57)
					if ((tmp4)){
						HX_STACK_LINE(57)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(57)
				_this->zpp_inner->x;
			}
		}
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			::nape::geom::Vec2 tmp3 = this->_currentSpeed;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(58)
			::nape::geom::Vec2 _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(58)
			{
				HX_STACK_LINE(58)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(58)
				{
					HX_STACK_LINE(58)
					{
						HX_STACK_LINE(58)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(58)
						bool tmp5 = (_this1->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(58)
						if ((tmp5)){
							HX_STACK_LINE(58)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(58)
					tmp4 = _this->zpp_inner->y;
				}
				HX_STACK_LINE(58)
				bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(58)
				if ((tmp5)){
					HX_STACK_LINE(58)
					_this->zpp_inner->y = (int)0;
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
					bool tmp4 = (_this1->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(58)
					if ((tmp4)){
						HX_STACK_LINE(58)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(58)
				_this->zpp_inner->y;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,afterUpdate,(void))

int Player_obj::move( Dynamic __o_a_x,Dynamic __o_a_y){
Dynamic a_x = __o_a_x.Default(0);
Dynamic a_y = __o_a_y.Default(0);
	HX_STACK_FRAME("Player","move",0x1cb35f1e,"Player.move","Player.hx",61,0xa27fc9dd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a_x,"a_x")
	HX_STACK_ARG(a_y,"a_y")
{
		HX_STACK_LINE(63)
		bool tmp = (a_x != (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(63)
		if ((tmp)){
			HX_STACK_LINE(63)
			::nape::geom::Vec2 tmp1 = this->_currentSpeed;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(63)
			::nape::geom::Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(63)
			Float x = a_x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(63)
			{
				HX_STACK_LINE(63)
				Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(63)
				{
					HX_STACK_LINE(63)
					{
						HX_STACK_LINE(63)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(63)
						bool tmp3 = (_this1->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(63)
						if ((tmp3)){
							HX_STACK_LINE(63)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(63)
					tmp2 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(63)
				Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(63)
				bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(63)
				if ((tmp4)){
					HX_STACK_LINE(63)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(63)
					{
						HX_STACK_LINE(63)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(63)
						bool tmp5 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(63)
						if ((tmp5)){
							HX_STACK_LINE(63)
							::zpp_nape::geom::ZPP_Vec2 tmp6 = _this1;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(63)
							_this1->_invalidate(tmp6);
						}
					}
				}
			}
			HX_STACK_LINE(63)
			{
				HX_STACK_LINE(63)
				{
					HX_STACK_LINE(63)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(63)
					bool tmp2 = (_this1->_validate != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(63)
					if ((tmp2)){
						HX_STACK_LINE(63)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(63)
				_this->zpp_inner->x;
			}
		}
		HX_STACK_LINE(64)
		bool tmp1 = (a_y != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		if ((tmp1)){
			HX_STACK_LINE(64)
			::nape::geom::Vec2 tmp2 = this->_currentSpeed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(64)
			::nape::geom::Vec2 _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(64)
			Float y = a_y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(64)
			{
				HX_STACK_LINE(64)
				Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(64)
				{
					HX_STACK_LINE(64)
					{
						HX_STACK_LINE(64)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(64)
						bool tmp4 = (_this1->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(64)
						if ((tmp4)){
							HX_STACK_LINE(64)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(64)
					tmp3 = _this->zpp_inner->y;
				}
				HX_STACK_LINE(64)
				Float tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(64)
				bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(64)
				if ((tmp5)){
					HX_STACK_LINE(64)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(64)
					{
						HX_STACK_LINE(64)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(64)
						bool tmp6 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(64)
						if ((tmp6)){
							HX_STACK_LINE(64)
							::zpp_nape::geom::ZPP_Vec2 tmp7 = _this1;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(64)
							_this1->_invalidate(tmp7);
						}
					}
				}
			}
			HX_STACK_LINE(64)
			{
				HX_STACK_LINE(64)
				{
					HX_STACK_LINE(64)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(64)
					bool tmp3 = (_this1->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(64)
					if ((tmp3)){
						HX_STACK_LINE(64)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(64)
				_this->zpp_inner->y;
			}
		}
		HX_STACK_LINE(65)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Player_obj,move,return )

Void Player_obj::updateRun( ){
{
		HX_STACK_FRAME("Player","updateRun",0x38b37995,"Player.updateRun","Player.hx",68,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(69)
		bool tmp = this->isRunning;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		if ((tmp)){
			HX_STACK_LINE(69)
			this->_runSpeed = ((Float)1.5);
		}
		else{
			HX_STACK_LINE(70)
			this->_runSpeed = (int)1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,updateRun,(void))


Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(dragJoint,"dragJoint");
	HX_MARK_MEMBER_NAME(_walkSpeed,"_walkSpeed");
	HX_MARK_MEMBER_NAME(_runSpeed,"_runSpeed");
	HX_MARK_MEMBER_NAME(_currentSpeed,"_currentSpeed");
	HX_MARK_MEMBER_NAME(isRunning,"isRunning");
	::flixel::addons::nape::FlxNapeSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dragJoint,"dragJoint");
	HX_VISIT_MEMBER_NAME(_walkSpeed,"_walkSpeed");
	HX_VISIT_MEMBER_NAME(_runSpeed,"_runSpeed");
	HX_VISIT_MEMBER_NAME(_currentSpeed,"_currentSpeed");
	HX_VISIT_MEMBER_NAME(isRunning,"isRunning");
	::flixel::addons::nape::FlxNapeSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Player_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dragJoint") ) { return dragJoint; }
		if (HX_FIELD_EQ(inName,"_runSpeed") ) { return _runSpeed; }
		if (HX_FIELD_EQ(inName,"isRunning") ) { return isRunning; }
		if (HX_FIELD_EQ(inName,"updateRun") ) { return updateRun_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_walkSpeed") ) { return _walkSpeed; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"afterUpdate") ) { return afterUpdate_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"beforeUpdate") ) { return beforeUpdate_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_currentSpeed") ) { return _currentSpeed; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"dragJoint") ) { dragJoint=inValue.Cast< ::nape::constraint::PivotJoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_runSpeed") ) { _runSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isRunning") ) { isRunning=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_walkSpeed") ) { _walkSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_currentSpeed") ) { _currentSpeed=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("dragJoint","\xb6","\xa8","\x7d","\xb4"));
	outFields->push(HX_HCSTRING("_walkSpeed","\x7f","\x45","\xcc","\x7d"));
	outFields->push(HX_HCSTRING("_runSpeed","\x9b","\xc7","\x34","\xd1"));
	outFields->push(HX_HCSTRING("_currentSpeed","\x6d","\x0f","\xe4","\xaa"));
	outFields->push(HX_HCSTRING("isRunning","\x35","\xeb","\x67","\xef"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::constraint::PivotJoint*/ ,(int)offsetof(Player_obj,dragJoint),HX_HCSTRING("dragJoint","\xb6","\xa8","\x7d","\xb4")},
	{hx::fsFloat,(int)offsetof(Player_obj,_walkSpeed),HX_HCSTRING("_walkSpeed","\x7f","\x45","\xcc","\x7d")},
	{hx::fsFloat,(int)offsetof(Player_obj,_runSpeed),HX_HCSTRING("_runSpeed","\x9b","\xc7","\x34","\xd1")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(Player_obj,_currentSpeed),HX_HCSTRING("_currentSpeed","\x6d","\x0f","\xe4","\xaa")},
	{hx::fsBool,(int)offsetof(Player_obj,isRunning),HX_HCSTRING("isRunning","\x35","\xeb","\x67","\xef")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("dragJoint","\xb6","\xa8","\x7d","\xb4"),
	HX_HCSTRING("_walkSpeed","\x7f","\x45","\xcc","\x7d"),
	HX_HCSTRING("_runSpeed","\x9b","\xc7","\x34","\xd1"),
	HX_HCSTRING("_currentSpeed","\x6d","\x0f","\xe4","\xaa"),
	HX_HCSTRING("isRunning","\x35","\xeb","\x67","\xef"),
	HX_HCSTRING("beforeUpdate","\xe8","\x37","\x69","\xb3"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("afterUpdate","\x45","\xdd","\x65","\xd8"),
	HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),
	HX_HCSTRING("updateRun","\xc2","\xc4","\xe3","\x82"),
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

