#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_MapGenerator
#include <MapGenerator.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

Void MapGenerator_obj::__construct(int a_size,Float a_displacement)
{
HX_STACK_FRAME("MapGenerator","new",0xa5e36ea9,"MapGenerator.new","MapGenerator.hx",12,0xd51ed8e7)
HX_STACK_THIS(this)
HX_STACK_ARG(a_size,"a_size")
HX_STACK_ARG(a_displacement,"a_displacement")
{
	HX_STACK_LINE(14)
	this->_size = a_size;
	HX_STACK_LINE(15)
	this->_displacement = a_displacement;
	HX_STACK_LINE(16)
	this->table = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//MapGenerator_obj::~MapGenerator_obj() { }

Dynamic MapGenerator_obj::__CreateEmpty() { return  new MapGenerator_obj; }
hx::ObjectPtr< MapGenerator_obj > MapGenerator_obj::__new(int a_size,Float a_displacement)
{  hx::ObjectPtr< MapGenerator_obj > _result_ = new MapGenerator_obj();
	_result_->__construct(a_size,a_displacement);
	return _result_;}

Dynamic MapGenerator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MapGenerator_obj > _result_ = new MapGenerator_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Array< ::Dynamic > MapGenerator_obj::generate( ){
	HX_STACK_FRAME("MapGenerator","generate",0x40c3584c,"MapGenerator.generate","MapGenerator.hx",19,0xd51ed8e7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(20)
	this->clear();
	HX_STACK_LINE(21)
	{
		HX_STACK_LINE(21)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(21)
		int tmp = this->_size;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(21)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(21)
		while((true)){
			HX_STACK_LINE(21)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(21)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(21)
			if ((tmp2)){
				HX_STACK_LINE(21)
				break;
			}
			HX_STACK_LINE(21)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(21)
			int x = tmp3;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(22)
			this->table->push(Array_obj< int >::__new());
			HX_STACK_LINE(23)
			{
				HX_STACK_LINE(23)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(23)
				int tmp4 = this->_size;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(23)
				int _g2 = tmp4;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(23)
				while((true)){
					HX_STACK_LINE(23)
					bool tmp5 = (_g3 < _g2);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(23)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(23)
					if ((tmp6)){
						HX_STACK_LINE(23)
						break;
					}
					HX_STACK_LINE(23)
					int tmp7 = (_g3)++;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(23)
					int y = tmp7;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(24)
					this->table->__get(x).StaticCast< Array< int > >()->push((int)-1);
				}
			}
		}
	}
	HX_STACK_LINE(27)
	Float tmp = ::Math_obj::random();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	this->table->__get((int)0).StaticCast< Array< int > >()[(int)0] = tmp1;
	HX_STACK_LINE(28)
	int tmp2 = this->_size;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	Float tmp4 = ::Math_obj::random();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(28)
	int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(28)
	this->table->__get((int)0).StaticCast< Array< int > >()[tmp3] = tmp5;
	HX_STACK_LINE(29)
	int tmp6 = this->_size;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(29)
	int tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(29)
	Float tmp8 = ::Math_obj::random();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(29)
	int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(29)
	this->table->__get(tmp7).StaticCast< Array< int > >()[(int)0] = tmp9;
	HX_STACK_LINE(30)
	int tmp10 = this->_size;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(30)
	int tmp11 = (tmp10 - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(30)
	int tmp12 = this->_size;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(30)
	int tmp13 = (tmp12 - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(30)
	Float tmp14 = ::Math_obj::random();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(30)
	int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(30)
	this->table->__get(tmp11).StaticCast< Array< int > >()[tmp13] = tmp15;
	HX_STACK_LINE(31)
	int tmp16 = this->_size;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(31)
	int tmp17 = (tmp16 - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(31)
	int tmp18 = this->_size;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(31)
	int tmp19 = (tmp18 - (int)1);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(31)
	Float tmp20 = this->_displacement;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(31)
	this->table = this->divide(this->table,(int)0,(int)0,tmp17,tmp19,tmp20);
	HX_STACK_LINE(32)
	Array< ::Dynamic > worldMap = this->transformToValueRange((int)4);		HX_STACK_VAR(worldMap,"worldMap");
	HX_STACK_LINE(33)
	return worldMap;
}


HX_DEFINE_DYNAMIC_FUNC0(MapGenerator_obj,generate,return )

Void MapGenerator_obj::clear( ){
{
		HX_STACK_FRAME("MapGenerator","clear",0x27c5f416,"MapGenerator.clear","MapGenerator.hx",36,0xd51ed8e7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		int tmp = this->table->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		this->table->splice((int)0,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MapGenerator_obj,clear,(void))

Array< ::Dynamic > MapGenerator_obj::divide( Array< ::Dynamic > a_table,int x1,int y1,int x2,int y2,Float a_displacement){
	HX_STACK_FRAME("MapGenerator","divide",0x5cd9e4d0,"MapGenerator.divide","MapGenerator.hx",44,0xd51ed8e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a_table,"a_table")
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(a_displacement,"a_displacement")
	HX_STACK_LINE(45)
	int tmp = (x2 - x1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	int diffX = tmp;		HX_STACK_VAR(diffX,"diffX");
	HX_STACK_LINE(46)
	int tmp1 = (y2 - y1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	int diffY = tmp1;		HX_STACK_VAR(diffY,"diffY");
	HX_STACK_LINE(47)
	int tmp2 = x1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(47)
	Float tmp3 = (Float(diffX) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(47)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(47)
	int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(47)
	int cx = tmp5;		HX_STACK_VAR(cx,"cx");
	HX_STACK_LINE(48)
	int tmp6 = y1;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(48)
	Float tmp7 = (Float(diffY) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(48)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(48)
	int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(48)
	int cy = tmp9;		HX_STACK_VAR(cy,"cy");
	HX_STACK_LINE(49)
	Float tmp10 = (Float(a_displacement) / Float((int)2));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(49)
	Float d2 = tmp10;		HX_STACK_VAR(d2,"d2");
	HX_STACK_LINE(50)
	bool tmp11 = (diffX > (int)1);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(50)
	if ((tmp11)){
		HX_STACK_LINE(51)
		int tmp12 = a_table->__get(y1).StaticCast< Array< int > >()->__get(x1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(51)
		int tmp13 = a_table->__get(y2).StaticCast< Array< int > >()->__get(x2);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(51)
		int tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(51)
		int tmp15 = a_table->__get(y1).StaticCast< Array< int > >()->__get(x2);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(51)
		int tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(51)
		int tmp17 = a_table->__get(y2).StaticCast< Array< int > >()->__get(x1);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(51)
		int tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(51)
		Float tmp19 = (Float(tmp18) / Float((int)4));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(51)
		Float tmp20 = ::Math_obj::random();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(51)
		Float tmp21 = (tmp20 * (int)10);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(51)
		Float tmp22 = a_displacement;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(51)
		Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(51)
		Float tmp24 = (tmp19 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(51)
		Float tmp25 = d2;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(51)
		Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(51)
		int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(51)
		a_table->__get(cy).StaticCast< Array< int > >()[cx] = tmp27;
		HX_STACK_LINE(52)
		int tmp28 = a_table->__get(y1).StaticCast< Array< int > >()->__get(cx);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(52)
		bool tmp29 = (tmp28 == (int)-1);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(52)
		if ((tmp29)){
			HX_STACK_LINE(53)
			int tmp30 = a_table->__get(y1).StaticCast< Array< int > >()->__get(x1);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(53)
			int tmp31 = a_table->__get(y1).StaticCast< Array< int > >()->__get(x2);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(53)
			int tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(53)
			Float tmp33 = (Float(tmp32) / Float((int)2));		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(53)
			Float tmp34 = ::Math_obj::random();		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(53)
			Float tmp35 = (tmp34 * (int)10);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(53)
			Float tmp36 = a_displacement;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(53)
			Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(53)
			Float tmp38 = (tmp33 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(53)
			Float tmp39 = d2;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(53)
			Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(53)
			int tmp41 = ::Std_obj::_int(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(53)
			a_table->__get(y1).StaticCast< Array< int > >()[cx] = tmp41;
		}
		HX_STACK_LINE(55)
		int tmp30 = a_table->__get(y2).StaticCast< Array< int > >()->__get(cx);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(55)
		bool tmp31 = (tmp30 == (int)-1);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(55)
		if ((tmp31)){
			HX_STACK_LINE(56)
			int tmp32 = a_table->__get(y2).StaticCast< Array< int > >()->__get(x1);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(56)
			int tmp33 = a_table->__get(y2).StaticCast< Array< int > >()->__get(x2);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(56)
			int tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(56)
			Float tmp35 = (Float(tmp34) / Float((int)2));		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(56)
			Float tmp36 = ::Math_obj::random();		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(56)
			Float tmp37 = (tmp36 * (int)10);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(56)
			Float tmp38 = a_displacement;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(56)
			Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(56)
			Float tmp40 = (tmp35 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(56)
			Float tmp41 = d2;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(56)
			Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(56)
			int tmp43 = ::Std_obj::_int(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(56)
			a_table->__get(y2).StaticCast< Array< int > >()[cx] = tmp43;
		}
		HX_STACK_LINE(58)
		int tmp32 = a_table->__get(cy).StaticCast< Array< int > >()->__get(x1);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(58)
		bool tmp33 = (tmp32 == (int)-1);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(58)
		if ((tmp33)){
			HX_STACK_LINE(59)
			int tmp34 = a_table->__get(y1).StaticCast< Array< int > >()->__get(x1);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(59)
			int tmp35 = a_table->__get(y2).StaticCast< Array< int > >()->__get(x1);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(59)
			int tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(59)
			Float tmp37 = (Float(tmp36) / Float((int)2));		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(59)
			Float tmp38 = ::Math_obj::random();		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(59)
			Float tmp39 = (tmp38 * (int)10);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(59)
			Float tmp40 = a_displacement;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(59)
			Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(59)
			Float tmp42 = (tmp37 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(59)
			Float tmp43 = d2;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(59)
			Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(59)
			int tmp45 = ::Std_obj::_int(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(59)
			a_table->__get(cy).StaticCast< Array< int > >()[x1] = tmp45;
		}
		HX_STACK_LINE(61)
		int tmp34 = a_table->__get(cy).StaticCast< Array< int > >()->__get(x2);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(61)
		bool tmp35 = (tmp34 == (int)-1);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(61)
		if ((tmp35)){
			HX_STACK_LINE(62)
			int tmp36 = a_table->__get(y1).StaticCast< Array< int > >()->__get(x2);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(62)
			int tmp37 = a_table->__get(y2).StaticCast< Array< int > >()->__get(x2);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(62)
			int tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(62)
			Float tmp39 = (Float(tmp38) / Float((int)2));		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(62)
			Float tmp40 = ::Math_obj::random();		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(62)
			Float tmp41 = (tmp40 * (int)10);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(62)
			Float tmp42 = a_displacement;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(62)
			Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(62)
			Float tmp44 = (tmp39 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(62)
			Float tmp45 = d2;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(62)
			Float tmp46 = (tmp44 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(62)
			int tmp47 = ::Std_obj::_int(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(62)
			a_table->__get(cy).StaticCast< Array< int > >()[x2] = tmp47;
		}
		HX_STACK_LINE(64)
		Float tmp36 = a_displacement;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(64)
		Float tmp37 = this->_displacement;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(64)
		Float tmp38 = (Float(tmp36) / Float(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(64)
		Float new_displacement = tmp38;		HX_STACK_VAR(new_displacement,"new_displacement");
		HX_STACK_LINE(65)
		int tmp39 = x1;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(65)
		int tmp40 = y1;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(65)
		int tmp41 = cx;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(65)
		int tmp42 = cy;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(65)
		Float tmp43 = new_displacement;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(65)
		a_table = this->divide(a_table,tmp39,tmp40,tmp41,tmp42,tmp43);
		HX_STACK_LINE(66)
		int tmp44 = cx;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(66)
		int tmp45 = y1;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(66)
		int tmp46 = x2;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(66)
		int tmp47 = cy;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(66)
		Float tmp48 = new_displacement;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(66)
		a_table = this->divide(a_table,tmp44,tmp45,tmp46,tmp47,tmp48);
		HX_STACK_LINE(67)
		int tmp49 = x1;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(67)
		int tmp50 = cy;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(67)
		int tmp51 = cx;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(67)
		int tmp52 = y2;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(67)
		Float tmp53 = new_displacement;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(67)
		a_table = this->divide(a_table,tmp49,tmp50,tmp51,tmp52,tmp53);
		HX_STACK_LINE(68)
		int tmp54 = cx;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(68)
		int tmp55 = cy;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(68)
		int tmp56 = x2;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(68)
		int tmp57 = y2;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(68)
		Float tmp58 = new_displacement;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(68)
		a_table = this->divide(a_table,tmp54,tmp55,tmp56,tmp57,tmp58);
	}
	HX_STACK_LINE(70)
	return a_table;
}


HX_DEFINE_DYNAMIC_FUNC6(MapGenerator_obj,divide,return )

Array< ::Dynamic > MapGenerator_obj::transformToValueRange( int a_valueRange){
	HX_STACK_FRAME("MapGenerator","transformToValueRange",0xc78efdfc,"MapGenerator.transformToValueRange","MapGenerator.hx",73,0xd51ed8e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a_valueRange,"a_valueRange")
	HX_STACK_LINE(74)
	int s = (int)-1;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(75)
	int b = (int)-1;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(76)
	{
		HX_STACK_LINE(76)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(76)
		int tmp = this->table->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(76)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(76)
		while((true)){
			HX_STACK_LINE(76)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(76)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(76)
			if ((tmp2)){
				HX_STACK_LINE(76)
				break;
			}
			HX_STACK_LINE(76)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(76)
			int y = tmp3;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(77)
			{
				HX_STACK_LINE(77)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(77)
				int tmp4 = this->table->__get(y).StaticCast< Array< int > >()->length;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(77)
				int _g2 = tmp4;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(77)
				while((true)){
					HX_STACK_LINE(77)
					bool tmp5 = (_g3 < _g2);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(77)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(77)
					if ((tmp6)){
						HX_STACK_LINE(77)
						break;
					}
					HX_STACK_LINE(77)
					int tmp7 = (_g3)++;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(77)
					int x = tmp7;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(78)
					int tmp8 = s;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(78)
					int tmp9 = (int)-1;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(78)
					bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(78)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(78)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(78)
					if ((tmp11)){
						HX_STACK_LINE(78)
						int tmp13 = this->table->__get(y).StaticCast< Array< int > >()->__get(x);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(78)
						int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(78)
						int tmp15 = s;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(78)
						tmp12 = (tmp14 < tmp15);
					}
					else{
						HX_STACK_LINE(78)
						tmp12 = true;
					}
					HX_STACK_LINE(78)
					if ((tmp12)){
						HX_STACK_LINE(79)
						int tmp13 = this->table->__get(y).StaticCast< Array< int > >()->__get(x);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(79)
						s = tmp13;
					}
					HX_STACK_LINE(81)
					int tmp13 = b;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(81)
					int tmp14 = (int)-1;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(81)
					bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(81)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(81)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(81)
					if ((tmp16)){
						HX_STACK_LINE(81)
						int tmp18 = this->table->__get(y).StaticCast< Array< int > >()->__get(x);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(81)
						int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(81)
						int tmp20 = b;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(81)
						tmp17 = (tmp19 > tmp20);
					}
					else{
						HX_STACK_LINE(81)
						tmp17 = true;
					}
					HX_STACK_LINE(81)
					if ((tmp17)){
						HX_STACK_LINE(82)
						int tmp18 = this->table->__get(y).StaticCast< Array< int > >()->__get(x);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(82)
						b = tmp18;
					}
				}
			}
		}
	}
	HX_STACK_LINE(86)
	int tmp = (b - s);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	int diff = tmp;		HX_STACK_VAR(diff,"diff");
	HX_STACK_LINE(87)
	{
		HX_STACK_LINE(87)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(87)
		int tmp1 = this->table->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(87)
		while((true)){
			HX_STACK_LINE(87)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(87)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(87)
			if ((tmp3)){
				HX_STACK_LINE(87)
				break;
			}
			HX_STACK_LINE(87)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(87)
			int y = tmp4;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(88)
			{
				HX_STACK_LINE(88)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(88)
				int tmp5 = this->table->__get(y).StaticCast< Array< int > >()->length;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(88)
				int _g2 = tmp5;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(88)
				while((true)){
					HX_STACK_LINE(88)
					bool tmp6 = (_g3 < _g2);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(88)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(88)
					if ((tmp7)){
						HX_STACK_LINE(88)
						break;
					}
					HX_STACK_LINE(88)
					int tmp8 = (_g3)++;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(88)
					int x = tmp8;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(89)
					int tmp9 = this->table->__get(y).StaticCast< Array< int > >()->__get(x);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(89)
					bool tmp10 = (tmp9 <= (int)0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(89)
					if ((tmp10)){
						HX_STACK_LINE(89)
						this->table->__get(y).StaticCast< Array< int > >()[x] = (int)1;
					}
					else{
						HX_STACK_LINE(90)
						int tmp11 = this->table->__get(y).StaticCast< Array< int > >()->__get(x);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(90)
						int tmp12 = s;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(90)
						int tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(90)
						int tmp14 = diff;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(90)
						Float tmp15 = (Float(tmp13) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(90)
						int tmp16 = a_valueRange;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(90)
						Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(90)
						int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(90)
						this->table->__get(y).StaticCast< Array< int > >()[x] = tmp18;
					}
				}
			}
		}
	}
	HX_STACK_LINE(93)
	return this->table;
}


HX_DEFINE_DYNAMIC_FUNC1(MapGenerator_obj,transformToValueRange,return )

Array< ::Dynamic > MapGenerator_obj::getViewable( int tileSize){
	HX_STACK_FRAME("MapGenerator","getViewable",0x2ad9887e,"MapGenerator.getViewable","MapGenerator.hx",96,0xd51ed8e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileSize,"tileSize")
	HX_STACK_LINE(97)
	::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(97)
	Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(97)
	Float tmp2 = (Float(tmp1) / Float((int)16));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(97)
	::flixel::FlxCamera tmp3 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(97)
	Float tmp4 = tmp3->zoom;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(97)
	Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(97)
	int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(97)
	int indexAStart = tmp6;		HX_STACK_VAR(indexAStart,"indexAStart");
	HX_STACK_LINE(98)
	::flixel::FlxCamera tmp7 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(98)
	Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(98)
	::flixel::FlxCamera tmp9 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(98)
	int tmp10 = tmp9->width;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(98)
	Float tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(98)
	Float tmp12 = (Float(tmp11) / Float((int)16));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(98)
	::flixel::FlxCamera tmp13 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(98)
	Float tmp14 = tmp13->zoom;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(98)
	Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(98)
	int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(98)
	int indexAEnd = tmp16;		HX_STACK_VAR(indexAEnd,"indexAEnd");
	HX_STACK_LINE(99)
	::flixel::FlxCamera tmp17 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(99)
	Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(99)
	Float tmp19 = (Float(tmp18) / Float((int)16));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(99)
	::flixel::FlxCamera tmp20 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(99)
	Float tmp21 = tmp20->zoom;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(99)
	Float tmp22 = (tmp19 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(99)
	int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(99)
	int indexBStart = tmp23;		HX_STACK_VAR(indexBStart,"indexBStart");
	HX_STACK_LINE(100)
	::flixel::FlxCamera tmp24 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(100)
	Float tmp25 = tmp24->y;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(100)
	::flixel::FlxCamera tmp26 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(100)
	int tmp27 = tmp26->height;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(100)
	Float tmp28 = (tmp25 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(100)
	Float tmp29 = (Float(tmp28) / Float((int)16));		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(100)
	::flixel::FlxCamera tmp30 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(100)
	Float tmp31 = tmp30->zoom;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(100)
	Float tmp32 = (tmp29 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(100)
	int tmp33 = ::Std_obj::_int(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(100)
	int indexBEnd = tmp33;		HX_STACK_VAR(indexBEnd,"indexBEnd");
	HX_STACK_LINE(101)
	Array< ::Dynamic > tempTable = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tempTable,"tempTable");
	HX_STACK_LINE(102)
	{
		HX_STACK_LINE(102)
		int _g = indexBStart;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(102)
		while((true)){
			HX_STACK_LINE(102)
			bool tmp34 = (_g < indexBEnd);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(102)
			bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(102)
			if ((tmp35)){
				HX_STACK_LINE(102)
				break;
			}
			HX_STACK_LINE(102)
			int tmp36 = (_g)++;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(102)
			int y = tmp36;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(103)
			tempTable->push(Array_obj< int >::__new());
			HX_STACK_LINE(104)
			{
				HX_STACK_LINE(104)
				int _g1 = indexAStart;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(104)
				while((true)){
					HX_STACK_LINE(104)
					bool tmp37 = (_g1 < indexAEnd);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(104)
					bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(104)
					if ((tmp38)){
						HX_STACK_LINE(104)
						break;
					}
					HX_STACK_LINE(104)
					int tmp39 = (_g1)++;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(104)
					int x = tmp39;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(105)
					int tmp40 = this->table->__get(y).StaticCast< Array< int > >()->__get(x);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(105)
					tempTable->__get(y).StaticCast< Array< int > >()->push(tmp40);
				}
			}
		}
	}
	HX_STACK_LINE(108)
	return tempTable;
}


HX_DEFINE_DYNAMIC_FUNC1(MapGenerator_obj,getViewable,return )


MapGenerator_obj::MapGenerator_obj()
{
}

void MapGenerator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MapGenerator);
	HX_MARK_MEMBER_NAME(_size,"_size");
	HX_MARK_MEMBER_NAME(_displacement,"_displacement");
	HX_MARK_MEMBER_NAME(_valueRange,"_valueRange");
	HX_MARK_MEMBER_NAME(table,"table");
	HX_MARK_END_CLASS();
}

void MapGenerator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_size,"_size");
	HX_VISIT_MEMBER_NAME(_displacement,"_displacement");
	HX_VISIT_MEMBER_NAME(_valueRange,"_valueRange");
	HX_VISIT_MEMBER_NAME(table,"table");
}

Dynamic MapGenerator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_size") ) { return _size; }
		if (HX_FIELD_EQ(inName,"table") ) { return table; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"divide") ) { return divide_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"generate") ) { return generate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_valueRange") ) { return _valueRange; }
		if (HX_FIELD_EQ(inName,"getViewable") ) { return getViewable_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_displacement") ) { return _displacement; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"transformToValueRange") ) { return transformToValueRange_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MapGenerator_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_size") ) { _size=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"table") ) { table=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_valueRange") ) { _valueRange=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_displacement") ) { _displacement=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MapGenerator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_size","\xa0","\xbc","\x64","\xff"));
	outFields->push(HX_HCSTRING("_displacement","\xb6","\xe5","\x91","\xff"));
	outFields->push(HX_HCSTRING("_valueRange","\xab","\xc9","\x45","\x5e"));
	outFields->push(HX_HCSTRING("table","\x0e","\xb8","\xe3","\x0a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(MapGenerator_obj,_size),HX_HCSTRING("_size","\xa0","\xbc","\x64","\xff")},
	{hx::fsFloat,(int)offsetof(MapGenerator_obj,_displacement),HX_HCSTRING("_displacement","\xb6","\xe5","\x91","\xff")},
	{hx::fsInt,(int)offsetof(MapGenerator_obj,_valueRange),HX_HCSTRING("_valueRange","\xab","\xc9","\x45","\x5e")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MapGenerator_obj,table),HX_HCSTRING("table","\x0e","\xb8","\xe3","\x0a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_size","\xa0","\xbc","\x64","\xff"),
	HX_HCSTRING("_displacement","\xb6","\xe5","\x91","\xff"),
	HX_HCSTRING("_valueRange","\xab","\xc9","\x45","\x5e"),
	HX_HCSTRING("table","\x0e","\xb8","\xe3","\x0a"),
	HX_HCSTRING("generate","\x35","\x5f","\xa2","\xd9"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("divide","\x79","\x2f","\x12","\xbf"),
	HX_HCSTRING("transformToValueRange","\x73","\x19","\x05","\x0f"),
	HX_HCSTRING("getViewable","\x35","\xf9","\xa4","\xb8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MapGenerator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MapGenerator_obj::__mClass,"__mClass");
};

#endif

hx::Class MapGenerator_obj::__mClass;

void MapGenerator_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("MapGenerator","\x37","\xe6","\xb2","\xf1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MapGenerator_obj >;
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

