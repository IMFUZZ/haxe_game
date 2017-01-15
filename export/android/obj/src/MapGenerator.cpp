#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_MapGenerator
#include <MapGenerator.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif

Void MapGenerator_obj::__construct(int a_size,Float a_displacement)
{
HX_STACK_FRAME("MapGenerator","new",0xa5e36ea9,"MapGenerator.new","MapGenerator.hx",16,0xd51ed8e7)
HX_STACK_THIS(this)
HX_STACK_ARG(a_size,"a_size")
HX_STACK_ARG(a_displacement,"a_displacement")
{
	HX_STACK_LINE(18)
	::nape::geom::Vec2 tmp = ::nape::geom::Vec2_obj::__new((int)-1,(int)-1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	this->spawnPoint = tmp;
	HX_STACK_LINE(19)
	int tmp1 = a_size;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	Float tmp2 = ::Math_obj::pow((int)2,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	Float tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(19)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(19)
	this->_size = tmp4;
	HX_STACK_LINE(20)
	this->_displacement = a_displacement;
	HX_STACK_LINE(21)
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
	HX_STACK_FRAME("MapGenerator","generate",0x40c3584c,"MapGenerator.generate","MapGenerator.hx",24,0xd51ed8e7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(25)
	this->clear();
	HX_STACK_LINE(26)
	{
		HX_STACK_LINE(26)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(26)
		int tmp = this->_size;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(26)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		while((true)){
			HX_STACK_LINE(26)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(26)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(26)
			if ((tmp2)){
				HX_STACK_LINE(26)
				break;
			}
			HX_STACK_LINE(26)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(26)
			int x = tmp3;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(27)
			this->table->push(Array_obj< int >::__new());
			HX_STACK_LINE(28)
			{
				HX_STACK_LINE(28)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(28)
				int tmp4 = this->_size;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(28)
				int _g2 = tmp4;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(28)
				while((true)){
					HX_STACK_LINE(28)
					bool tmp5 = (_g3 < _g2);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(28)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(28)
					if ((tmp6)){
						HX_STACK_LINE(28)
						break;
					}
					HX_STACK_LINE(28)
					int tmp7 = (_g3)++;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(28)
					int y = tmp7;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(29)
					this->table->__get(x).StaticCast< Array< int > >()->push((int)-1);
				}
			}
		}
	}
	HX_STACK_LINE(32)
	Float tmp = ::Math_obj::random();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	this->table->__get((int)0).StaticCast< Array< int > >()[(int)0] = tmp1;
	HX_STACK_LINE(33)
	int tmp2 = this->_size;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(33)
	Float tmp4 = ::Math_obj::random();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(33)
	int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(33)
	this->table->__get((int)0).StaticCast< Array< int > >()[tmp3] = tmp5;
	HX_STACK_LINE(34)
	int tmp6 = this->_size;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(34)
	int tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(34)
	Float tmp8 = ::Math_obj::random();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(34)
	int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(34)
	this->table->__get(tmp7).StaticCast< Array< int > >()[(int)0] = tmp9;
	HX_STACK_LINE(35)
	int tmp10 = this->_size;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(35)
	int tmp11 = (tmp10 - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(35)
	int tmp12 = this->_size;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(35)
	int tmp13 = (tmp12 - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(35)
	Float tmp14 = ::Math_obj::random();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(35)
	int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(35)
	this->table->__get(tmp11).StaticCast< Array< int > >()[tmp13] = tmp15;
	HX_STACK_LINE(36)
	int tmp16 = this->_size;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(36)
	int tmp17 = (tmp16 - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(36)
	int tmp18 = this->_size;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(36)
	int tmp19 = (tmp18 - (int)1);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(36)
	Float tmp20 = this->_displacement;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(36)
	this->table = this->divide(this->table,(int)0,(int)0,tmp17,tmp19,tmp20);
	HX_STACK_LINE(37)
	Array< ::Dynamic > worldMap = this->transformToValueRange((int)9);		HX_STACK_VAR(worldMap,"worldMap");
	HX_STACK_LINE(38)
	::sys::FileSystem_obj::createDirectory(HX_HCSTRING("save","\x3d","\x8b","\x4d","\x4c"));
	HX_STACK_LINE(39)
	::sys::io::FileOutput tmp21 = ::sys::io::File_obj::write(HX_HCSTRING("save/world.txt","\xc2","\x41","\x78","\x96"),false);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(39)
	::sys::io::FileOutput file = tmp21;		HX_STACK_VAR(file,"file");
	HX_STACK_LINE(40)
	::String tmp22 = worldMap->toString();		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(40)
	::String tmp23 = ::StringTools_obj::replace(tmp22,HX_HCSTRING("],","\x2f","\x51","\x00","\x00"),HX_HCSTRING("],\n","\xfb","\xb7","\x46","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(40)
	file->writeString(tmp23);
	HX_STACK_LINE(41)
	file->close();
	HX_STACK_LINE(42)
	return worldMap;
}


HX_DEFINE_DYNAMIC_FUNC0(MapGenerator_obj,generate,return )

Void MapGenerator_obj::clear( ){
{
		HX_STACK_FRAME("MapGenerator","clear",0x27c5f416,"MapGenerator.clear","MapGenerator.hx",45,0xd51ed8e7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		int tmp = this->table->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		this->table->splice((int)0,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MapGenerator_obj,clear,(void))

Array< ::Dynamic > MapGenerator_obj::divide( Array< ::Dynamic > a_table,int x1,int y1,int x2,int y2,Float a_displacement){
	HX_STACK_FRAME("MapGenerator","divide",0x5cd9e4d0,"MapGenerator.divide","MapGenerator.hx",53,0xd51ed8e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a_table,"a_table")
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(a_displacement,"a_displacement")
	HX_STACK_LINE(54)
	int tmp = (x2 - x1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	int diffX = tmp;		HX_STACK_VAR(diffX,"diffX");
	HX_STACK_LINE(55)
	int tmp1 = (y2 - y1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	int diffY = tmp1;		HX_STACK_VAR(diffY,"diffY");
	HX_STACK_LINE(56)
	int tmp2 = x1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	Float tmp3 = (Float(diffX) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(56)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(56)
	int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(56)
	int cx = tmp5;		HX_STACK_VAR(cx,"cx");
	HX_STACK_LINE(57)
	int tmp6 = y1;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(57)
	Float tmp7 = (Float(diffY) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(57)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(57)
	int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(57)
	int cy = tmp9;		HX_STACK_VAR(cy,"cy");
	HX_STACK_LINE(58)
	Float tmp10 = (Float(a_displacement) / Float((int)2));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(58)
	Float d2 = tmp10;		HX_STACK_VAR(d2,"d2");
	HX_STACK_LINE(59)
	bool tmp11 = (diffX > (int)1);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(59)
	if ((tmp11)){
		HX_STACK_LINE(60)
		int tmp12 = a_table->__get(y1).StaticCast< Array< int > >()->__get(x1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(60)
		int tmp13 = a_table->__get(y2).StaticCast< Array< int > >()->__get(x2);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(60)
		int tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(60)
		int tmp15 = a_table->__get(y1).StaticCast< Array< int > >()->__get(x2);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(60)
		int tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(60)
		int tmp17 = a_table->__get(y2).StaticCast< Array< int > >()->__get(x1);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(60)
		int tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(60)
		Float tmp19 = (Float(tmp18) / Float((int)4));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(60)
		Float tmp20 = ::Math_obj::random();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(60)
		Float tmp21 = (tmp20 * (int)10);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(60)
		Float tmp22 = a_displacement;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(60)
		Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(60)
		Float tmp24 = (tmp19 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(60)
		Float tmp25 = d2;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(60)
		Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(60)
		int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(60)
		a_table->__get(cy).StaticCast< Array< int > >()[cx] = tmp27;
		HX_STACK_LINE(61)
		int tmp28 = a_table->__get(y1).StaticCast< Array< int > >()->__get(cx);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(61)
		bool tmp29 = (tmp28 == (int)-1);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(61)
		if ((tmp29)){
			HX_STACK_LINE(62)
			int tmp30 = a_table->__get(y1).StaticCast< Array< int > >()->__get(x1);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(62)
			int tmp31 = a_table->__get(y1).StaticCast< Array< int > >()->__get(x2);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(62)
			int tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(62)
			Float tmp33 = (Float(tmp32) / Float((int)2));		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(62)
			Float tmp34 = ::Math_obj::random();		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(62)
			Float tmp35 = (tmp34 * (int)10);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(62)
			Float tmp36 = a_displacement;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(62)
			Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(62)
			Float tmp38 = (tmp33 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(62)
			Float tmp39 = d2;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(62)
			Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(62)
			int tmp41 = ::Std_obj::_int(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(62)
			a_table->__get(y1).StaticCast< Array< int > >()[cx] = tmp41;
		}
		HX_STACK_LINE(64)
		int tmp30 = a_table->__get(y2).StaticCast< Array< int > >()->__get(cx);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(64)
		bool tmp31 = (tmp30 == (int)-1);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(64)
		if ((tmp31)){
			HX_STACK_LINE(65)
			int tmp32 = a_table->__get(y2).StaticCast< Array< int > >()->__get(x1);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(65)
			int tmp33 = a_table->__get(y2).StaticCast< Array< int > >()->__get(x2);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(65)
			int tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(65)
			Float tmp35 = (Float(tmp34) / Float((int)2));		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(65)
			Float tmp36 = ::Math_obj::random();		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(65)
			Float tmp37 = (tmp36 * (int)10);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(65)
			Float tmp38 = a_displacement;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(65)
			Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(65)
			Float tmp40 = (tmp35 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(65)
			Float tmp41 = d2;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(65)
			Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(65)
			int tmp43 = ::Std_obj::_int(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(65)
			a_table->__get(y2).StaticCast< Array< int > >()[cx] = tmp43;
		}
		HX_STACK_LINE(67)
		int tmp32 = a_table->__get(cy).StaticCast< Array< int > >()->__get(x1);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(67)
		bool tmp33 = (tmp32 == (int)-1);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(67)
		if ((tmp33)){
			HX_STACK_LINE(68)
			int tmp34 = a_table->__get(y1).StaticCast< Array< int > >()->__get(x1);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(68)
			int tmp35 = a_table->__get(y2).StaticCast< Array< int > >()->__get(x1);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(68)
			int tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(68)
			Float tmp37 = (Float(tmp36) / Float((int)2));		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(68)
			Float tmp38 = ::Math_obj::random();		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(68)
			Float tmp39 = (tmp38 * (int)10);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(68)
			Float tmp40 = a_displacement;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(68)
			Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(68)
			Float tmp42 = (tmp37 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(68)
			Float tmp43 = d2;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(68)
			Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(68)
			int tmp45 = ::Std_obj::_int(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(68)
			a_table->__get(cy).StaticCast< Array< int > >()[x1] = tmp45;
		}
		HX_STACK_LINE(70)
		int tmp34 = a_table->__get(cy).StaticCast< Array< int > >()->__get(x2);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(70)
		bool tmp35 = (tmp34 == (int)-1);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(70)
		if ((tmp35)){
			HX_STACK_LINE(71)
			int tmp36 = a_table->__get(y1).StaticCast< Array< int > >()->__get(x2);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(71)
			int tmp37 = a_table->__get(y2).StaticCast< Array< int > >()->__get(x2);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(71)
			int tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(71)
			Float tmp39 = (Float(tmp38) / Float((int)2));		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(71)
			Float tmp40 = ::Math_obj::random();		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(71)
			Float tmp41 = (tmp40 * (int)10);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(71)
			Float tmp42 = a_displacement;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(71)
			Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(71)
			Float tmp44 = (tmp39 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(71)
			Float tmp45 = d2;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(71)
			Float tmp46 = (tmp44 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(71)
			int tmp47 = ::Std_obj::_int(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(71)
			a_table->__get(cy).StaticCast< Array< int > >()[x2] = tmp47;
		}
		HX_STACK_LINE(73)
		Float tmp36 = a_displacement;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(73)
		Float tmp37 = this->_displacement;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(73)
		Float tmp38 = (Float(tmp36) / Float(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(73)
		Float new_displacement = tmp38;		HX_STACK_VAR(new_displacement,"new_displacement");
		HX_STACK_LINE(74)
		int tmp39 = x1;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(74)
		int tmp40 = y1;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(74)
		int tmp41 = cx;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(74)
		int tmp42 = cy;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(74)
		Float tmp43 = new_displacement;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(74)
		a_table = this->divide(a_table,tmp39,tmp40,tmp41,tmp42,tmp43);
		HX_STACK_LINE(75)
		int tmp44 = cx;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(75)
		int tmp45 = y1;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(75)
		int tmp46 = x2;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(75)
		int tmp47 = cy;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(75)
		Float tmp48 = new_displacement;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(75)
		a_table = this->divide(a_table,tmp44,tmp45,tmp46,tmp47,tmp48);
		HX_STACK_LINE(76)
		int tmp49 = x1;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(76)
		int tmp50 = cy;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(76)
		int tmp51 = cx;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(76)
		int tmp52 = y2;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(76)
		Float tmp53 = new_displacement;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(76)
		a_table = this->divide(a_table,tmp49,tmp50,tmp51,tmp52,tmp53);
		HX_STACK_LINE(77)
		int tmp54 = cx;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(77)
		int tmp55 = cy;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(77)
		int tmp56 = x2;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(77)
		int tmp57 = y2;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(77)
		Float tmp58 = new_displacement;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(77)
		a_table = this->divide(a_table,tmp54,tmp55,tmp56,tmp57,tmp58);
	}
	HX_STACK_LINE(79)
	return a_table;
}


HX_DEFINE_DYNAMIC_FUNC6(MapGenerator_obj,divide,return )

Array< ::Dynamic > MapGenerator_obj::transformToValueRange( int a_valueRange){
	HX_STACK_FRAME("MapGenerator","transformToValueRange",0xc78efdfc,"MapGenerator.transformToValueRange","MapGenerator.hx",82,0xd51ed8e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a_valueRange,"a_valueRange")
	HX_STACK_LINE(83)
	int s = (int)-1;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(84)
	int b = (int)-1;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(85)
	{
		HX_STACK_LINE(85)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(85)
		int tmp = this->table->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(85)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(85)
		while((true)){
			HX_STACK_LINE(85)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(85)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(85)
			if ((tmp2)){
				HX_STACK_LINE(85)
				break;
			}
			HX_STACK_LINE(85)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(85)
			int y = tmp3;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(86)
			{
				HX_STACK_LINE(86)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(86)
				int tmp4 = this->table->__get(y).StaticCast< Array< int > >()->length;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(86)
				int _g2 = tmp4;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(86)
				while((true)){
					HX_STACK_LINE(86)
					bool tmp5 = (_g3 < _g2);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(86)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(86)
					if ((tmp6)){
						HX_STACK_LINE(86)
						break;
					}
					HX_STACK_LINE(86)
					int tmp7 = (_g3)++;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(86)
					int x = tmp7;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(87)
					int tmp8 = s;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(87)
					int tmp9 = (int)-1;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(87)
					bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(87)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(87)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(87)
					if ((tmp11)){
						HX_STACK_LINE(87)
						int tmp13 = this->table->__get(y).StaticCast< Array< int > >()->__get(x);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(87)
						int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(87)
						int tmp15 = s;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(87)
						tmp12 = (tmp14 < tmp15);
					}
					else{
						HX_STACK_LINE(87)
						tmp12 = true;
					}
					HX_STACK_LINE(87)
					if ((tmp12)){
						HX_STACK_LINE(88)
						int tmp13 = this->table->__get(y).StaticCast< Array< int > >()->__get(x);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(88)
						s = tmp13;
					}
					HX_STACK_LINE(90)
					int tmp13 = b;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(90)
					int tmp14 = (int)-1;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(90)
					bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(90)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(90)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(90)
					if ((tmp16)){
						HX_STACK_LINE(90)
						int tmp18 = this->table->__get(y).StaticCast< Array< int > >()->__get(x);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(90)
						int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(90)
						int tmp20 = b;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(90)
						tmp17 = (tmp19 > tmp20);
					}
					else{
						HX_STACK_LINE(90)
						tmp17 = true;
					}
					HX_STACK_LINE(90)
					if ((tmp17)){
						HX_STACK_LINE(91)
						int tmp18 = this->table->__get(y).StaticCast< Array< int > >()->__get(x);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(91)
						b = tmp18;
					}
				}
			}
		}
	}
	HX_STACK_LINE(95)
	int tmp = (b - s);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	int diff = tmp;		HX_STACK_VAR(diff,"diff");
	HX_STACK_LINE(96)
	{
		HX_STACK_LINE(96)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(96)
		int tmp1 = this->table->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(96)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(96)
		while((true)){
			HX_STACK_LINE(96)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(96)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(96)
			if ((tmp3)){
				HX_STACK_LINE(96)
				break;
			}
			HX_STACK_LINE(96)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(96)
			int y = tmp4;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(97)
			{
				HX_STACK_LINE(97)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(97)
				int tmp5 = this->table->__get(y).StaticCast< Array< int > >()->length;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(97)
				int _g2 = tmp5;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(97)
				while((true)){
					HX_STACK_LINE(97)
					bool tmp6 = (_g3 < _g2);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(97)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(97)
					if ((tmp7)){
						HX_STACK_LINE(97)
						break;
					}
					HX_STACK_LINE(97)
					int tmp8 = (_g3)++;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(97)
					int x = tmp8;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(98)
					int tmp9 = this->table->__get(y).StaticCast< Array< int > >()->__get(x);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(98)
					int tmp10 = s;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(98)
					int tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(98)
					int tmp12 = diff;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(98)
					Float tmp13 = (Float(tmp11) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(98)
					int tmp14 = a_valueRange;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(98)
					Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(98)
					int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(98)
					this->table->__get(y).StaticCast< Array< int > >()[x] = tmp16;
					HX_STACK_LINE(99)
					int tmp17 = this->table->__get(y).StaticCast< Array< int > >()->__get(x);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(99)
					bool tmp18 = (tmp17 == (int)0);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(99)
					if ((tmp18)){
						HX_STACK_LINE(99)
						this->table->__get(y).StaticCast< Array< int > >()[x] = (int)1;
					}
					HX_STACK_LINE(100)
					Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(100)
					{
						HX_STACK_LINE(100)
						::nape::geom::Vec2 tmp20 = this->spawnPoint;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(100)
						::nape::geom::Vec2 _this = tmp20;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(100)
						{
							HX_STACK_LINE(100)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(100)
							bool tmp21 = (_this1->_validate != null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(100)
							if ((tmp21)){
								HX_STACK_LINE(100)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(100)
						tmp19 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(100)
					bool tmp20 = (tmp19 == (int)-1);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(100)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(100)
					bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(100)
					if ((tmp21)){
						HX_STACK_LINE(100)
						Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(100)
						{
							HX_STACK_LINE(100)
							::nape::geom::Vec2 tmp24 = this->spawnPoint;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(100)
							::nape::geom::Vec2 tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(100)
							::nape::geom::Vec2 tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(100)
							::nape::geom::Vec2 _this = tmp26;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(100)
							{
								HX_STACK_LINE(100)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(100)
								bool tmp27 = (_this1->_validate != null());		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(100)
								bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(100)
								bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(100)
								bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(100)
								bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(100)
								if ((tmp31)){
									HX_STACK_LINE(100)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(100)
							Float tmp27 = _this->zpp_inner->y;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(100)
							Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(100)
							tmp23 = tmp28;
						}
						HX_STACK_LINE(100)
						tmp22 = (tmp23 == (int)-1);
					}
					else{
						HX_STACK_LINE(100)
						tmp22 = false;
					}
					HX_STACK_LINE(100)
					bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(100)
					bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(100)
					if ((tmp23)){
						HX_STACK_LINE(100)
						int tmp25 = x;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(100)
						int tmp26 = this->_size;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(100)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(100)
						int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(100)
						Float tmp29 = (Float(tmp28) / Float((int)3));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(100)
						Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(100)
						Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(100)
						tmp24 = (tmp25 > tmp31);
					}
					else{
						HX_STACK_LINE(100)
						tmp24 = false;
					}
					HX_STACK_LINE(100)
					bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(100)
					bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(100)
					if ((tmp25)){
						HX_STACK_LINE(100)
						int tmp27 = y;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(100)
						int tmp28 = this->_size;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(100)
						int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(100)
						int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(100)
						Float tmp31 = (Float(tmp30) / Float((int)3));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(100)
						Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(100)
						Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(100)
						tmp26 = (tmp27 > tmp33);
					}
					else{
						HX_STACK_LINE(100)
						tmp26 = false;
					}
					HX_STACK_LINE(100)
					bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(100)
					if ((tmp26)){
						HX_STACK_LINE(100)
						int tmp28 = this->table->__get(y).StaticCast< Array< int > >()->__get(x);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(100)
						int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(100)
						tmp27 = (tmp29 == (int)4);
					}
					else{
						HX_STACK_LINE(100)
						tmp27 = false;
					}
					HX_STACK_LINE(100)
					if ((tmp27)){
						HX_STACK_LINE(101)
						{
							HX_STACK_LINE(101)
							::nape::geom::Vec2 tmp28 = this->spawnPoint;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(101)
							::nape::geom::Vec2 _this = tmp28;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(101)
							int tmp29 = (x * (int)16);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(101)
							Float x1 = tmp29;		HX_STACK_VAR(x1,"x1");
							HX_STACK_LINE(101)
							{
								HX_STACK_LINE(101)
								Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(101)
								{
									HX_STACK_LINE(101)
									{
										HX_STACK_LINE(101)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(101)
										bool tmp31 = (_this1->_validate != null());		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(101)
										if ((tmp31)){
											HX_STACK_LINE(101)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(101)
									tmp30 = _this->zpp_inner->x;
								}
								HX_STACK_LINE(101)
								Float tmp31 = x1;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(101)
								bool tmp32 = (tmp30 != tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(101)
								if ((tmp32)){
									HX_STACK_LINE(101)
									_this->zpp_inner->x = x1;
									HX_STACK_LINE(101)
									{
										HX_STACK_LINE(101)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(101)
										bool tmp33 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(101)
										if ((tmp33)){
											HX_STACK_LINE(101)
											::zpp_nape::geom::ZPP_Vec2 tmp34 = _this1;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(101)
											_this1->_invalidate(tmp34);
										}
									}
								}
							}
							HX_STACK_LINE(101)
							{
								HX_STACK_LINE(101)
								{
									HX_STACK_LINE(101)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(101)
									bool tmp30 = (_this1->_validate != null());		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(101)
									if ((tmp30)){
										HX_STACK_LINE(101)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(101)
								_this->zpp_inner->x;
							}
						}
						HX_STACK_LINE(102)
						{
							HX_STACK_LINE(102)
							::nape::geom::Vec2 tmp28 = this->spawnPoint;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(102)
							::nape::geom::Vec2 _this = tmp28;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(102)
							int tmp29 = (y * (int)16);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(102)
							Float y1 = tmp29;		HX_STACK_VAR(y1,"y1");
							HX_STACK_LINE(102)
							{
								HX_STACK_LINE(102)
								Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(102)
								{
									HX_STACK_LINE(102)
									{
										HX_STACK_LINE(102)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(102)
										bool tmp31 = (_this1->_validate != null());		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(102)
										if ((tmp31)){
											HX_STACK_LINE(102)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(102)
									tmp30 = _this->zpp_inner->y;
								}
								HX_STACK_LINE(102)
								Float tmp31 = y1;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(102)
								bool tmp32 = (tmp30 != tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(102)
								if ((tmp32)){
									HX_STACK_LINE(102)
									_this->zpp_inner->y = y1;
									HX_STACK_LINE(102)
									{
										HX_STACK_LINE(102)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(102)
										bool tmp33 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(102)
										if ((tmp33)){
											HX_STACK_LINE(102)
											::zpp_nape::geom::ZPP_Vec2 tmp34 = _this1;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(102)
											_this1->_invalidate(tmp34);
										}
									}
								}
							}
							HX_STACK_LINE(102)
							{
								HX_STACK_LINE(102)
								{
									HX_STACK_LINE(102)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(102)
									bool tmp30 = (_this1->_validate != null());		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(102)
									if ((tmp30)){
										HX_STACK_LINE(102)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(102)
								_this->zpp_inner->y;
							}
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(106)
	return this->table;
}


HX_DEFINE_DYNAMIC_FUNC1(MapGenerator_obj,transformToValueRange,return )

Array< ::Dynamic > MapGenerator_obj::getViewable( int tileSize){
	HX_STACK_FRAME("MapGenerator","getViewable",0x2ad9887e,"MapGenerator.getViewable","MapGenerator.hx",109,0xd51ed8e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileSize,"tileSize")
	HX_STACK_LINE(110)
	::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(110)
	Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(110)
	Float tmp2 = (Float(tmp1) / Float((int)16));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(110)
	::flixel::FlxCamera tmp3 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(110)
	Float tmp4 = tmp3->zoom;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(110)
	Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(110)
	int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(110)
	int indexAStart = tmp6;		HX_STACK_VAR(indexAStart,"indexAStart");
	HX_STACK_LINE(111)
	::flixel::FlxCamera tmp7 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(111)
	Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(111)
	::flixel::FlxCamera tmp9 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(111)
	int tmp10 = tmp9->width;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(111)
	Float tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(111)
	Float tmp12 = (Float(tmp11) / Float((int)16));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(111)
	::flixel::FlxCamera tmp13 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(111)
	Float tmp14 = tmp13->zoom;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(111)
	Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(111)
	int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(111)
	int indexAEnd = tmp16;		HX_STACK_VAR(indexAEnd,"indexAEnd");
	HX_STACK_LINE(112)
	::flixel::FlxCamera tmp17 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(112)
	Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(112)
	Float tmp19 = (Float(tmp18) / Float((int)16));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(112)
	::flixel::FlxCamera tmp20 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(112)
	Float tmp21 = tmp20->zoom;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(112)
	Float tmp22 = (tmp19 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(112)
	int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(112)
	int indexBStart = tmp23;		HX_STACK_VAR(indexBStart,"indexBStart");
	HX_STACK_LINE(113)
	::flixel::FlxCamera tmp24 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(113)
	Float tmp25 = tmp24->y;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(113)
	::flixel::FlxCamera tmp26 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(113)
	int tmp27 = tmp26->height;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(113)
	Float tmp28 = (tmp25 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(113)
	Float tmp29 = (Float(tmp28) / Float((int)16));		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(113)
	::flixel::FlxCamera tmp30 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(113)
	Float tmp31 = tmp30->zoom;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(113)
	Float tmp32 = (tmp29 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(113)
	int tmp33 = ::Std_obj::_int(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(113)
	int indexBEnd = tmp33;		HX_STACK_VAR(indexBEnd,"indexBEnd");
	HX_STACK_LINE(114)
	Array< ::Dynamic > tempTable = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tempTable,"tempTable");
	HX_STACK_LINE(115)
	{
		HX_STACK_LINE(115)
		int _g = indexBStart;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(115)
		while((true)){
			HX_STACK_LINE(115)
			bool tmp34 = (_g < indexBEnd);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(115)
			bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(115)
			if ((tmp35)){
				HX_STACK_LINE(115)
				break;
			}
			HX_STACK_LINE(115)
			int tmp36 = (_g)++;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(115)
			int y = tmp36;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(116)
			tempTable->push(Array_obj< int >::__new());
			HX_STACK_LINE(117)
			{
				HX_STACK_LINE(117)
				int _g1 = indexAStart;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(117)
				while((true)){
					HX_STACK_LINE(117)
					bool tmp37 = (_g1 < indexAEnd);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(117)
					bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(117)
					if ((tmp38)){
						HX_STACK_LINE(117)
						break;
					}
					HX_STACK_LINE(117)
					int tmp39 = (_g1)++;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(117)
					int x = tmp39;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(118)
					int tmp40 = this->table->__get(y).StaticCast< Array< int > >()->__get(x);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(118)
					tempTable->__get(y).StaticCast< Array< int > >()->push(tmp40);
				}
			}
		}
	}
	HX_STACK_LINE(121)
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
	HX_MARK_MEMBER_NAME(spawnPoint,"spawnPoint");
	HX_MARK_END_CLASS();
}

void MapGenerator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_size,"_size");
	HX_VISIT_MEMBER_NAME(_displacement,"_displacement");
	HX_VISIT_MEMBER_NAME(_valueRange,"_valueRange");
	HX_VISIT_MEMBER_NAME(table,"table");
	HX_VISIT_MEMBER_NAME(spawnPoint,"spawnPoint");
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
	case 10:
		if (HX_FIELD_EQ(inName,"spawnPoint") ) { return spawnPoint; }
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
	case 10:
		if (HX_FIELD_EQ(inName,"spawnPoint") ) { spawnPoint=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
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
	outFields->push(HX_HCSTRING("spawnPoint","\x15","\x10","\xa8","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(MapGenerator_obj,_size),HX_HCSTRING("_size","\xa0","\xbc","\x64","\xff")},
	{hx::fsFloat,(int)offsetof(MapGenerator_obj,_displacement),HX_HCSTRING("_displacement","\xb6","\xe5","\x91","\xff")},
	{hx::fsInt,(int)offsetof(MapGenerator_obj,_valueRange),HX_HCSTRING("_valueRange","\xab","\xc9","\x45","\x5e")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MapGenerator_obj,table),HX_HCSTRING("table","\x0e","\xb8","\xe3","\x0a")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(MapGenerator_obj,spawnPoint),HX_HCSTRING("spawnPoint","\x15","\x10","\xa8","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_size","\xa0","\xbc","\x64","\xff"),
	HX_HCSTRING("_displacement","\xb6","\xe5","\x91","\xff"),
	HX_HCSTRING("_valueRange","\xab","\xc9","\x45","\x5e"),
	HX_HCSTRING("table","\x0e","\xb8","\xe3","\x0a"),
	HX_HCSTRING("spawnPoint","\x15","\x10","\xa8","\x00"),
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

