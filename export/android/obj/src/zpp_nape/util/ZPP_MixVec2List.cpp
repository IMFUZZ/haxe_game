#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2List
#include <nape/geom/Vec2List.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_MixVec2List
#include <zpp_nape/util/ZPP_MixVec2List.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Vec2List
#include <zpp_nape/util/ZPP_Vec2List.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_MixVec2List_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZPP_MixVec2List","new",0x430cbb5a,"zpp_nape.util.ZPP_MixVec2List.new","zpp_nape/util/Lists.hx",16277,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16282)
	this->at_index = (int)0;
	HX_STACK_LINE(16281)
	this->at_ite = null();
	HX_STACK_LINE(16280)
	this->zip_length = false;
	HX_STACK_LINE(16279)
	this->_length = (int)0;
	HX_STACK_LINE(16278)
	this->inner = null();
	HX_STACK_LINE(16290)
	super::__construct();
	HX_STACK_LINE(16291)
	this->at_ite = null();
	HX_STACK_LINE(16292)
	this->at_index = (int)0;
	HX_STACK_LINE(16293)
	this->zip_length = true;
	HX_STACK_LINE(16294)
	this->_length = (int)0;
}
;
	return null();
}

//ZPP_MixVec2List_obj::~ZPP_MixVec2List_obj() { }

Dynamic ZPP_MixVec2List_obj::__CreateEmpty() { return  new ZPP_MixVec2List_obj; }
hx::ObjectPtr< ZPP_MixVec2List_obj > ZPP_MixVec2List_obj::__new()
{  hx::ObjectPtr< ZPP_MixVec2List_obj > _result_ = new ZPP_MixVec2List_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_MixVec2List_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_MixVec2List_obj > _result_ = new ZPP_MixVec2List_obj();
	_result_->__construct();
	return _result_;}

int ZPP_MixVec2List_obj::zpp_gl( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_MixVec2List","zpp_gl",0x203000d0,"zpp_nape.util.ZPP_MixVec2List.zpp_gl","zpp_nape/util/Lists.hx",16296,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(16297)
	this->zpp_vm();
	HX_STACK_LINE(16298)
	bool tmp = this->zip_length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16298)
	if ((tmp)){
		HX_STACK_LINE(16299)
		this->_length = (int)0;
		HX_STACK_LINE(16300)
		{
			HX_STACK_LINE(16301)
			::zpp_nape::geom::ZPP_Vec2 tmp1 = this->inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(16301)
			::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp1->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(16302)
			while((true)){
				HX_STACK_LINE(16302)
				bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(16302)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(16302)
				if ((tmp3)){
					HX_STACK_LINE(16302)
					break;
				}
				HX_STACK_LINE(16303)
				::zpp_nape::geom::ZPP_Vec2 i = cx_ite;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(16304)
				(this->_length)++;
				HX_STACK_LINE(16305)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(16308)
		this->zip_length = false;
	}
	HX_STACK_LINE(16310)
	int tmp1 = this->_length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16310)
	return tmp1;
}


Void ZPP_MixVec2List_obj::zpp_vm( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_MixVec2List","zpp_vm",0x20300de2,"zpp_nape.util.ZPP_MixVec2List.zpp_vm","zpp_nape/util/Lists.hx",16312,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16313)
		::zpp_nape::util::ZPP_Vec2List tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(16313)
		tmp->validate();
		HX_STACK_LINE(16314)
		::zpp_nape::geom::ZPP_Vec2 tmp1 = this->inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(16314)
		bool tmp2 = tmp1->modified;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(16314)
		if ((tmp2)){
			HX_STACK_LINE(16315)
			this->zip_length = true;
			HX_STACK_LINE(16316)
			this->_length = (int)0;
			HX_STACK_LINE(16317)
			this->at_ite = null();
		}
	}
return null();
}


::nape::geom::Vec2 ZPP_MixVec2List_obj::at( int index){
	HX_STACK_FRAME("zpp_nape.util.ZPP_MixVec2List","at",0x85776739,"zpp_nape.util.ZPP_MixVec2List.at","zpp_nape/util/Lists.hx",16321,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(16322)
	this->zpp_vm();
	HX_STACK_LINE(16326)
	::zpp_nape::util::ZPP_Vec2List tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16326)
	bool tmp1 = tmp->reverse_flag;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16326)
	if ((tmp1)){
		HX_STACK_LINE(16326)
		int tmp2 = this->zpp_gl();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(16326)
		int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(16326)
		int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(16326)
		int tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(16326)
		index = tmp5;
	}
	HX_STACK_LINE(16327)
	int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16327)
	int tmp3 = this->at_index;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(16327)
	bool tmp4 = (tmp2 < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(16327)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(16327)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(16327)
	if ((tmp5)){
		HX_STACK_LINE(16327)
		::zpp_nape::geom::ZPP_Vec2 tmp7 = this->at_ite;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(16327)
		::zpp_nape::geom::ZPP_Vec2 tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(16327)
		tmp6 = (tmp8 == null());
	}
	else{
		HX_STACK_LINE(16327)
		tmp6 = true;
	}
	HX_STACK_LINE(16327)
	if ((tmp6)){
		HX_STACK_LINE(16328)
		this->at_index = (int)0;
		HX_STACK_LINE(16329)
		::zpp_nape::geom::ZPP_Vec2 tmp7 = this->inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(16329)
		this->at_ite = tmp7->next;
		HX_STACK_LINE(16330)
		while((true)){
			HX_STACK_LINE(16331)
			::zpp_nape::geom::ZPP_Vec2 tmp8 = this->at_ite;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(16331)
			::zpp_nape::geom::ZPP_Vec2 x = tmp8;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(16332)
			break;
			HX_STACK_LINE(16333)
			::zpp_nape::geom::ZPP_Vec2 tmp9 = this->at_ite;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(16333)
			this->at_ite = tmp9->next;
		}
	}
	HX_STACK_LINE(16336)
	while((true)){
		HX_STACK_LINE(16336)
		int tmp7 = this->at_index;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(16336)
		int tmp8 = index;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(16336)
		bool tmp9 = (tmp7 != tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(16336)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(16336)
		if ((tmp10)){
			HX_STACK_LINE(16336)
			break;
		}
		HX_STACK_LINE(16337)
		(this->at_index)++;
		HX_STACK_LINE(16338)
		::zpp_nape::geom::ZPP_Vec2 tmp11 = this->at_ite;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(16338)
		this->at_ite = tmp11->next;
		HX_STACK_LINE(16339)
		while((true)){
			HX_STACK_LINE(16340)
			::zpp_nape::geom::ZPP_Vec2 tmp12 = this->at_ite;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(16340)
			::zpp_nape::geom::ZPP_Vec2 x = tmp12;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(16341)
			break;
			HX_STACK_LINE(16342)
			::zpp_nape::geom::ZPP_Vec2 tmp13 = this->at_ite;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(16342)
			this->at_ite = tmp13->next;
		}
	}
	HX_STACK_LINE(16345)
	::nape::geom::Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(16345)
	{
		HX_STACK_LINE(16345)
		::zpp_nape::geom::ZPP_Vec2 tmp8 = this->at_ite;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(16345)
		::zpp_nape::geom::ZPP_Vec2 _this = tmp8;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(16345)
		bool tmp9 = (_this->outer == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(16345)
		if ((tmp9)){
			HX_STACK_LINE(16345)
			::nape::geom::Vec2 tmp10 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(16345)
			_this->outer = tmp10;
			HX_STACK_LINE(16345)
			{
				HX_STACK_LINE(16345)
				::zpp_nape::geom::ZPP_Vec2 tmp11 = _this->outer->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(16345)
				::zpp_nape::geom::ZPP_Vec2 o = tmp11;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(16345)
				{
					HX_STACK_LINE(16345)
					bool tmp12 = (o->outer != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(16345)
					if ((tmp12)){
						HX_STACK_LINE(16345)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(16345)
						o->outer = null();
					}
					HX_STACK_LINE(16345)
					o->_isimmutable = null();
					HX_STACK_LINE(16345)
					o->_validate = null();
					HX_STACK_LINE(16345)
					o->_invalidate = null();
				}
				HX_STACK_LINE(16345)
				::zpp_nape::geom::ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(16345)
				o->next = tmp12;
				HX_STACK_LINE(16345)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
			HX_STACK_LINE(16345)
			_this->outer->zpp_inner = _this;
		}
		HX_STACK_LINE(16345)
		tmp7 = _this->outer;
	}
	HX_STACK_LINE(16345)
	return tmp7;
}


bool ZPP_MixVec2List_obj::push( ::nape::geom::Vec2 obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_MixVec2List","push",0x6975c1a0,"zpp_nape.util.ZPP_MixVec2List.push","zpp_nape/util/Lists.hx",16348,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(16352)
	::zpp_nape::util::ZPP_Vec2List tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16352)
	tmp->modify_test();
	HX_STACK_LINE(16353)
	this->zpp_vm();
	HX_STACK_LINE(16357)
	::zpp_nape::util::ZPP_Vec2List tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16357)
	Dynamic tmp2 = tmp1->adder;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16357)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(16357)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(16357)
	if ((tmp3)){
		HX_STACK_LINE(16357)
		::zpp_nape::util::ZPP_Vec2List tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(16357)
		::nape::geom::Vec2 tmp6 = obj;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(16357)
		tmp4 = tmp5->adder(tmp6);
	}
	else{
		HX_STACK_LINE(16357)
		tmp4 = true;
	}
	HX_STACK_LINE(16357)
	bool cont = tmp4;		HX_STACK_VAR(cont,"cont");
	HX_STACK_LINE(16358)
	bool tmp5 = cont;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(16358)
	if ((tmp5)){
		HX_STACK_LINE(16359)
		::zpp_nape::util::ZPP_Vec2List tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(16359)
		bool tmp7 = tmp6->reverse_flag;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(16359)
		if ((tmp7)){
			HX_STACK_LINE(16359)
			::zpp_nape::geom::ZPP_Vec2 tmp8 = this->inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(16359)
			::zpp_nape::geom::ZPP_Vec2 tmp9 = obj->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(16359)
			tmp8->add(tmp9);
		}
		else{
			HX_STACK_LINE(16361)
			::zpp_nape::geom::ZPP_Vec2 tmp8 = this->inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(16361)
			int tmp9 = this->zpp_gl();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(16361)
			int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(16361)
			::zpp_nape::geom::ZPP_Vec2 tmp11 = tmp8->iterator_at(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(16361)
			::zpp_nape::geom::ZPP_Vec2 ite = tmp11;		HX_STACK_VAR(ite,"ite");
			HX_STACK_LINE(16362)
			::zpp_nape::geom::ZPP_Vec2 tmp12 = this->inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(16362)
			::zpp_nape::geom::ZPP_Vec2 tmp13 = ite;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(16362)
			::zpp_nape::geom::ZPP_Vec2 tmp14 = obj->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(16362)
			tmp12->insert(tmp13,tmp14);
		}
		HX_STACK_LINE(16364)
		::zpp_nape::util::ZPP_Vec2List tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(16364)
		tmp8->invalidate();
		HX_STACK_LINE(16365)
		::zpp_nape::util::ZPP_Vec2List tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(16365)
		Dynamic tmp10 = tmp9->post_adder;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(16365)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(16365)
		if ((tmp11)){
			HX_STACK_LINE(16365)
			::zpp_nape::util::ZPP_Vec2List tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(16365)
			::nape::geom::Vec2 tmp13 = obj;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(16365)
			tmp12->post_adder(tmp13);
		}
	}
	HX_STACK_LINE(16367)
	bool tmp6 = cont;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(16367)
	return tmp6;
}


bool ZPP_MixVec2List_obj::unshift( ::nape::geom::Vec2 obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_MixVec2List","unshift",0x2d56d383,"zpp_nape.util.ZPP_MixVec2List.unshift","zpp_nape/util/Lists.hx",16370,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(16374)
	::zpp_nape::util::ZPP_Vec2List tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16374)
	tmp->modify_test();
	HX_STACK_LINE(16375)
	this->zpp_vm();
	HX_STACK_LINE(16379)
	::zpp_nape::util::ZPP_Vec2List tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16379)
	Dynamic tmp2 = tmp1->adder;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16379)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(16379)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(16379)
	if ((tmp3)){
		HX_STACK_LINE(16379)
		::zpp_nape::util::ZPP_Vec2List tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(16379)
		::nape::geom::Vec2 tmp6 = obj;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(16379)
		tmp4 = tmp5->adder(tmp6);
	}
	else{
		HX_STACK_LINE(16379)
		tmp4 = true;
	}
	HX_STACK_LINE(16379)
	bool cont = tmp4;		HX_STACK_VAR(cont,"cont");
	HX_STACK_LINE(16380)
	bool tmp5 = cont;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(16380)
	if ((tmp5)){
		HX_STACK_LINE(16381)
		::zpp_nape::util::ZPP_Vec2List tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(16381)
		bool tmp7 = tmp6->reverse_flag;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(16381)
		if ((tmp7)){
			HX_STACK_LINE(16382)
			::zpp_nape::geom::ZPP_Vec2 tmp8 = this->inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(16382)
			int tmp9 = this->zpp_gl();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(16382)
			int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(16382)
			::zpp_nape::geom::ZPP_Vec2 tmp11 = tmp8->iterator_at(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(16382)
			::zpp_nape::geom::ZPP_Vec2 ite = tmp11;		HX_STACK_VAR(ite,"ite");
			HX_STACK_LINE(16383)
			::zpp_nape::geom::ZPP_Vec2 tmp12 = this->inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(16383)
			::zpp_nape::geom::ZPP_Vec2 tmp13 = ite;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(16383)
			::zpp_nape::geom::ZPP_Vec2 tmp14 = obj->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(16383)
			tmp12->insert(tmp13,tmp14);
		}
		else{
			HX_STACK_LINE(16385)
			::zpp_nape::geom::ZPP_Vec2 tmp8 = this->inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(16385)
			::zpp_nape::geom::ZPP_Vec2 tmp9 = obj->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(16385)
			tmp8->add(tmp9);
		}
		HX_STACK_LINE(16386)
		::zpp_nape::util::ZPP_Vec2List tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(16386)
		tmp8->invalidate();
		HX_STACK_LINE(16387)
		::zpp_nape::util::ZPP_Vec2List tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(16387)
		Dynamic tmp10 = tmp9->post_adder;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(16387)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(16387)
		if ((tmp11)){
			HX_STACK_LINE(16387)
			::zpp_nape::util::ZPP_Vec2List tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(16387)
			::nape::geom::Vec2 tmp13 = obj;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(16387)
			tmp12->post_adder(tmp13);
		}
	}
	HX_STACK_LINE(16389)
	bool tmp6 = cont;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(16389)
	return tmp6;
}


::nape::geom::Vec2 ZPP_MixVec2List_obj::pop( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_MixVec2List","pop",0x430e488b,"zpp_nape.util.ZPP_MixVec2List.pop","zpp_nape/util/Lists.hx",16392,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(16396)
	::zpp_nape::util::ZPP_Vec2List tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16396)
	tmp->modify_test();
	HX_STACK_LINE(16400)
	this->zpp_vm();
	HX_STACK_LINE(16401)
	::zpp_nape::geom::ZPP_Vec2 ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(16402)
	::zpp_nape::util::ZPP_Vec2List tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16402)
	bool tmp2 = tmp1->reverse_flag;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16402)
	if ((tmp2)){
		HX_STACK_LINE(16403)
		::zpp_nape::geom::ZPP_Vec2 tmp3 = this->inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(16403)
		ret = tmp3->next;
		HX_STACK_LINE(16404)
		::nape::geom::Vec2 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(16404)
		{
			HX_STACK_LINE(16404)
			bool tmp5 = (ret->outer == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(16404)
			if ((tmp5)){
				HX_STACK_LINE(16404)
				::nape::geom::Vec2 tmp6 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(16404)
				ret->outer = tmp6;
				HX_STACK_LINE(16404)
				{
					HX_STACK_LINE(16404)
					::zpp_nape::geom::ZPP_Vec2 tmp7 = ret->outer->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(16404)
					::zpp_nape::geom::ZPP_Vec2 o = tmp7;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(16404)
					{
						HX_STACK_LINE(16404)
						bool tmp8 = (o->outer != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(16404)
						if ((tmp8)){
							HX_STACK_LINE(16404)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(16404)
							o->outer = null();
						}
						HX_STACK_LINE(16404)
						o->_isimmutable = null();
						HX_STACK_LINE(16404)
						o->_validate = null();
						HX_STACK_LINE(16404)
						o->_invalidate = null();
					}
					HX_STACK_LINE(16404)
					::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(16404)
					o->next = tmp8;
					HX_STACK_LINE(16404)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
				HX_STACK_LINE(16404)
				ret->outer->zpp_inner = ret;
			}
			HX_STACK_LINE(16404)
			tmp4 = ret->outer;
		}
		HX_STACK_LINE(16404)
		::nape::geom::Vec2 retx = tmp4;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(16405)
		::zpp_nape::util::ZPP_Vec2List tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(16405)
		Dynamic tmp6 = tmp5->subber;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(16405)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(16405)
		if ((tmp7)){
			HX_STACK_LINE(16405)
			::zpp_nape::util::ZPP_Vec2List tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(16405)
			::nape::geom::Vec2 tmp9 = retx;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(16405)
			tmp8->subber(tmp9);
		}
		HX_STACK_LINE(16406)
		::zpp_nape::util::ZPP_Vec2List tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(16406)
		bool tmp9 = tmp8->dontremove;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(16406)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(16406)
		if ((tmp10)){
			HX_STACK_LINE(16406)
			::zpp_nape::geom::ZPP_Vec2 tmp11 = this->inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(16406)
			tmp11->pop();
		}
	}
	else{
		HX_STACK_LINE(16409)
		::zpp_nape::geom::ZPP_Vec2 tmp3 = this->at_ite;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(16409)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(16409)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(16409)
		if ((tmp4)){
			HX_STACK_LINE(16409)
			::zpp_nape::geom::ZPP_Vec2 tmp6 = this->at_ite;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(16409)
			::zpp_nape::geom::ZPP_Vec2 tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(16409)
			::zpp_nape::geom::ZPP_Vec2 tmp8 = tmp7->next;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(16409)
			tmp5 = (tmp8 == null());
		}
		else{
			HX_STACK_LINE(16409)
			tmp5 = false;
		}
		HX_STACK_LINE(16409)
		if ((tmp5)){
			HX_STACK_LINE(16409)
			this->at_ite = null();
		}
		HX_STACK_LINE(16410)
		int tmp6 = this->zpp_gl();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(16410)
		bool tmp7 = (tmp6 == (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(16410)
		::zpp_nape::geom::ZPP_Vec2 tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(16410)
		if ((tmp7)){
			HX_STACK_LINE(16410)
			tmp8 = null();
		}
		else{
			HX_STACK_LINE(16410)
			::zpp_nape::geom::ZPP_Vec2 tmp9 = this->inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(16410)
			int tmp10 = this->zpp_gl();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(16410)
			int tmp11 = (tmp10 - (int)2);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(16410)
			tmp8 = tmp9->iterator_at(tmp11);
		}
		HX_STACK_LINE(16410)
		::zpp_nape::geom::ZPP_Vec2 ite = tmp8;		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(16411)
		bool tmp9 = (ite == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(16411)
		::zpp_nape::geom::ZPP_Vec2 tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(16411)
		if ((tmp9)){
			HX_STACK_LINE(16411)
			::zpp_nape::geom::ZPP_Vec2 tmp11 = this->inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(16411)
			tmp10 = tmp11->next;
		}
		else{
			HX_STACK_LINE(16411)
			tmp10 = ite->next;
		}
		HX_STACK_LINE(16411)
		ret = tmp10;
		HX_STACK_LINE(16412)
		::nape::geom::Vec2 tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(16412)
		{
			HX_STACK_LINE(16412)
			bool tmp12 = (ret->outer == null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(16412)
			if ((tmp12)){
				HX_STACK_LINE(16412)
				::nape::geom::Vec2 tmp13 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(16412)
				ret->outer = tmp13;
				HX_STACK_LINE(16412)
				{
					HX_STACK_LINE(16412)
					::zpp_nape::geom::ZPP_Vec2 tmp14 = ret->outer->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(16412)
					::zpp_nape::geom::ZPP_Vec2 o = tmp14;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(16412)
					{
						HX_STACK_LINE(16412)
						bool tmp15 = (o->outer != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(16412)
						if ((tmp15)){
							HX_STACK_LINE(16412)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(16412)
							o->outer = null();
						}
						HX_STACK_LINE(16412)
						o->_isimmutable = null();
						HX_STACK_LINE(16412)
						o->_validate = null();
						HX_STACK_LINE(16412)
						o->_invalidate = null();
					}
					HX_STACK_LINE(16412)
					::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(16412)
					o->next = tmp15;
					HX_STACK_LINE(16412)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
				HX_STACK_LINE(16412)
				ret->outer->zpp_inner = ret;
			}
			HX_STACK_LINE(16412)
			tmp11 = ret->outer;
		}
		HX_STACK_LINE(16412)
		::nape::geom::Vec2 retx = tmp11;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(16413)
		::zpp_nape::util::ZPP_Vec2List tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(16413)
		Dynamic tmp13 = tmp12->subber;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(16413)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(16413)
		if ((tmp14)){
			HX_STACK_LINE(16413)
			::zpp_nape::util::ZPP_Vec2List tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(16413)
			::nape::geom::Vec2 tmp16 = retx;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(16413)
			tmp15->subber(tmp16);
		}
		HX_STACK_LINE(16414)
		::zpp_nape::util::ZPP_Vec2List tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(16414)
		bool tmp16 = tmp15->dontremove;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(16414)
		bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(16414)
		if ((tmp17)){
			HX_STACK_LINE(16414)
			::zpp_nape::geom::ZPP_Vec2 tmp18 = this->inner;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(16414)
			::zpp_nape::geom::ZPP_Vec2 tmp19 = ite;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(16414)
			tmp18->erase(tmp19);
		}
	}
	HX_STACK_LINE(16416)
	::zpp_nape::util::ZPP_Vec2List tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(16416)
	tmp3->invalidate();
	HX_STACK_LINE(16417)
	::nape::geom::Vec2 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(16417)
	{
		HX_STACK_LINE(16417)
		bool tmp5 = (ret->outer == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(16417)
		if ((tmp5)){
			HX_STACK_LINE(16417)
			::nape::geom::Vec2 tmp6 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(16417)
			ret->outer = tmp6;
			HX_STACK_LINE(16417)
			{
				HX_STACK_LINE(16417)
				::zpp_nape::geom::ZPP_Vec2 tmp7 = ret->outer->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(16417)
				::zpp_nape::geom::ZPP_Vec2 o = tmp7;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(16417)
				{
					HX_STACK_LINE(16417)
					bool tmp8 = (o->outer != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(16417)
					if ((tmp8)){
						HX_STACK_LINE(16417)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(16417)
						o->outer = null();
					}
					HX_STACK_LINE(16417)
					o->_isimmutable = null();
					HX_STACK_LINE(16417)
					o->_validate = null();
					HX_STACK_LINE(16417)
					o->_invalidate = null();
				}
				HX_STACK_LINE(16417)
				::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(16417)
				o->next = tmp8;
				HX_STACK_LINE(16417)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
			HX_STACK_LINE(16417)
			ret->outer->zpp_inner = ret;
		}
		HX_STACK_LINE(16417)
		tmp4 = ret->outer;
	}
	HX_STACK_LINE(16417)
	::nape::geom::Vec2 retx = tmp4;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(16418)
	::nape::geom::Vec2 tmp5 = retx;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(16418)
	return tmp5;
}


::nape::geom::Vec2 ZPP_MixVec2List_obj::shift( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_MixVec2List","shift",0x8f2809fc,"zpp_nape.util.ZPP_MixVec2List.shift","zpp_nape/util/Lists.hx",16421,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(16425)
	::zpp_nape::util::ZPP_Vec2List tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16425)
	tmp->modify_test();
	HX_STACK_LINE(16429)
	this->zpp_vm();
	HX_STACK_LINE(16430)
	::zpp_nape::geom::ZPP_Vec2 ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(16431)
	::zpp_nape::util::ZPP_Vec2List tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16431)
	bool tmp2 = tmp1->reverse_flag;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16431)
	if ((tmp2)){
		HX_STACK_LINE(16432)
		::zpp_nape::geom::ZPP_Vec2 tmp3 = this->at_ite;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(16432)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(16432)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(16432)
		if ((tmp4)){
			HX_STACK_LINE(16432)
			::zpp_nape::geom::ZPP_Vec2 tmp6 = this->at_ite;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(16432)
			::zpp_nape::geom::ZPP_Vec2 tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(16432)
			::zpp_nape::geom::ZPP_Vec2 tmp8 = tmp7->next;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(16432)
			tmp5 = (tmp8 == null());
		}
		else{
			HX_STACK_LINE(16432)
			tmp5 = false;
		}
		HX_STACK_LINE(16432)
		if ((tmp5)){
			HX_STACK_LINE(16432)
			this->at_ite = null();
		}
		HX_STACK_LINE(16433)
		int tmp6 = this->zpp_gl();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(16433)
		bool tmp7 = (tmp6 == (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(16433)
		::zpp_nape::geom::ZPP_Vec2 tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(16433)
		if ((tmp7)){
			HX_STACK_LINE(16433)
			tmp8 = null();
		}
		else{
			HX_STACK_LINE(16433)
			::zpp_nape::geom::ZPP_Vec2 tmp9 = this->inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(16433)
			int tmp10 = this->zpp_gl();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(16433)
			int tmp11 = (tmp10 - (int)2);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(16433)
			tmp8 = tmp9->iterator_at(tmp11);
		}
		HX_STACK_LINE(16433)
		::zpp_nape::geom::ZPP_Vec2 ite = tmp8;		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(16434)
		bool tmp9 = (ite == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(16434)
		::zpp_nape::geom::ZPP_Vec2 tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(16434)
		if ((tmp9)){
			HX_STACK_LINE(16434)
			::zpp_nape::geom::ZPP_Vec2 tmp11 = this->inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(16434)
			tmp10 = tmp11->next;
		}
		else{
			HX_STACK_LINE(16434)
			tmp10 = ite->next;
		}
		HX_STACK_LINE(16434)
		ret = tmp10;
		HX_STACK_LINE(16435)
		::nape::geom::Vec2 tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(16435)
		{
			HX_STACK_LINE(16435)
			bool tmp12 = (ret->outer == null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(16435)
			if ((tmp12)){
				HX_STACK_LINE(16435)
				::nape::geom::Vec2 tmp13 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(16435)
				ret->outer = tmp13;
				HX_STACK_LINE(16435)
				{
					HX_STACK_LINE(16435)
					::zpp_nape::geom::ZPP_Vec2 tmp14 = ret->outer->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(16435)
					::zpp_nape::geom::ZPP_Vec2 o = tmp14;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(16435)
					{
						HX_STACK_LINE(16435)
						bool tmp15 = (o->outer != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(16435)
						if ((tmp15)){
							HX_STACK_LINE(16435)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(16435)
							o->outer = null();
						}
						HX_STACK_LINE(16435)
						o->_isimmutable = null();
						HX_STACK_LINE(16435)
						o->_validate = null();
						HX_STACK_LINE(16435)
						o->_invalidate = null();
					}
					HX_STACK_LINE(16435)
					::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(16435)
					o->next = tmp15;
					HX_STACK_LINE(16435)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
				HX_STACK_LINE(16435)
				ret->outer->zpp_inner = ret;
			}
			HX_STACK_LINE(16435)
			tmp11 = ret->outer;
		}
		HX_STACK_LINE(16435)
		::nape::geom::Vec2 retx = tmp11;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(16436)
		::zpp_nape::util::ZPP_Vec2List tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(16436)
		Dynamic tmp13 = tmp12->subber;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(16436)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(16436)
		if ((tmp14)){
			HX_STACK_LINE(16436)
			::zpp_nape::util::ZPP_Vec2List tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(16436)
			::nape::geom::Vec2 tmp16 = retx;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(16436)
			tmp15->subber(tmp16);
		}
		HX_STACK_LINE(16437)
		::zpp_nape::util::ZPP_Vec2List tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(16437)
		bool tmp16 = tmp15->dontremove;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(16437)
		bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(16437)
		if ((tmp17)){
			HX_STACK_LINE(16437)
			::zpp_nape::geom::ZPP_Vec2 tmp18 = this->inner;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(16437)
			::zpp_nape::geom::ZPP_Vec2 tmp19 = ite;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(16437)
			tmp18->erase(tmp19);
		}
	}
	else{
		HX_STACK_LINE(16440)
		::zpp_nape::geom::ZPP_Vec2 tmp3 = this->inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(16440)
		ret = tmp3->next;
		HX_STACK_LINE(16441)
		::nape::geom::Vec2 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(16441)
		{
			HX_STACK_LINE(16441)
			bool tmp5 = (ret->outer == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(16441)
			if ((tmp5)){
				HX_STACK_LINE(16441)
				::nape::geom::Vec2 tmp6 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(16441)
				ret->outer = tmp6;
				HX_STACK_LINE(16441)
				{
					HX_STACK_LINE(16441)
					::zpp_nape::geom::ZPP_Vec2 tmp7 = ret->outer->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(16441)
					::zpp_nape::geom::ZPP_Vec2 o = tmp7;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(16441)
					{
						HX_STACK_LINE(16441)
						bool tmp8 = (o->outer != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(16441)
						if ((tmp8)){
							HX_STACK_LINE(16441)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(16441)
							o->outer = null();
						}
						HX_STACK_LINE(16441)
						o->_isimmutable = null();
						HX_STACK_LINE(16441)
						o->_validate = null();
						HX_STACK_LINE(16441)
						o->_invalidate = null();
					}
					HX_STACK_LINE(16441)
					::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(16441)
					o->next = tmp8;
					HX_STACK_LINE(16441)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
				HX_STACK_LINE(16441)
				ret->outer->zpp_inner = ret;
			}
			HX_STACK_LINE(16441)
			tmp4 = ret->outer;
		}
		HX_STACK_LINE(16441)
		::nape::geom::Vec2 retx = tmp4;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(16442)
		::zpp_nape::util::ZPP_Vec2List tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(16442)
		Dynamic tmp6 = tmp5->subber;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(16442)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(16442)
		if ((tmp7)){
			HX_STACK_LINE(16442)
			::zpp_nape::util::ZPP_Vec2List tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(16442)
			::nape::geom::Vec2 tmp9 = retx;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(16442)
			tmp8->subber(tmp9);
		}
		HX_STACK_LINE(16443)
		::zpp_nape::util::ZPP_Vec2List tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(16443)
		bool tmp9 = tmp8->dontremove;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(16443)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(16443)
		if ((tmp10)){
			HX_STACK_LINE(16443)
			::zpp_nape::geom::ZPP_Vec2 tmp11 = this->inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(16443)
			tmp11->pop();
		}
	}
	HX_STACK_LINE(16445)
	::zpp_nape::util::ZPP_Vec2List tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(16445)
	tmp3->invalidate();
	HX_STACK_LINE(16446)
	::nape::geom::Vec2 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(16446)
	{
		HX_STACK_LINE(16446)
		bool tmp5 = (ret->outer == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(16446)
		if ((tmp5)){
			HX_STACK_LINE(16446)
			::nape::geom::Vec2 tmp6 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(16446)
			ret->outer = tmp6;
			HX_STACK_LINE(16446)
			{
				HX_STACK_LINE(16446)
				::zpp_nape::geom::ZPP_Vec2 tmp7 = ret->outer->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(16446)
				::zpp_nape::geom::ZPP_Vec2 o = tmp7;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(16446)
				{
					HX_STACK_LINE(16446)
					bool tmp8 = (o->outer != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(16446)
					if ((tmp8)){
						HX_STACK_LINE(16446)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(16446)
						o->outer = null();
					}
					HX_STACK_LINE(16446)
					o->_isimmutable = null();
					HX_STACK_LINE(16446)
					o->_validate = null();
					HX_STACK_LINE(16446)
					o->_invalidate = null();
				}
				HX_STACK_LINE(16446)
				::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(16446)
				o->next = tmp8;
				HX_STACK_LINE(16446)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
			HX_STACK_LINE(16446)
			ret->outer->zpp_inner = ret;
		}
		HX_STACK_LINE(16446)
		tmp4 = ret->outer;
	}
	HX_STACK_LINE(16446)
	::nape::geom::Vec2 retx = tmp4;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(16447)
	::nape::geom::Vec2 tmp5 = retx;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(16447)
	return tmp5;
}


bool ZPP_MixVec2List_obj::remove( ::nape::geom::Vec2 obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_MixVec2List","remove",0x95fd498a,"zpp_nape.util.ZPP_MixVec2List.remove","zpp_nape/util/Lists.hx",16450,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(16454)
	::zpp_nape::util::ZPP_Vec2List tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16454)
	tmp->modify_test();
	HX_STACK_LINE(16455)
	this->zpp_vm();
	HX_STACK_LINE(16456)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(16457)
	{
		HX_STACK_LINE(16458)
		ret = false;
		HX_STACK_LINE(16459)
		{
			HX_STACK_LINE(16460)
			::zpp_nape::geom::ZPP_Vec2 tmp1 = this->inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(16460)
			::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp1->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(16461)
			while((true)){
				HX_STACK_LINE(16461)
				bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(16461)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(16461)
				if ((tmp3)){
					HX_STACK_LINE(16461)
					break;
				}
				HX_STACK_LINE(16462)
				::zpp_nape::geom::ZPP_Vec2 x = cx_ite;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(16463)
				{
					HX_STACK_LINE(16464)
					bool tmp4 = (obj->zpp_inner == x);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(16464)
					if ((tmp4)){
						HX_STACK_LINE(16465)
						ret = true;
						HX_STACK_LINE(16466)
						break;
					}
				}
				HX_STACK_LINE(16469)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(16473)
	bool tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16473)
	if ((tmp1)){
		HX_STACK_LINE(16474)
		::zpp_nape::util::ZPP_Vec2List tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(16474)
		Dynamic tmp3 = tmp2->subber;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(16474)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(16474)
		if ((tmp4)){
			HX_STACK_LINE(16474)
			::zpp_nape::util::ZPP_Vec2List tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(16474)
			::nape::geom::Vec2 tmp6 = obj;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(16474)
			tmp5->subber(tmp6);
		}
		HX_STACK_LINE(16475)
		::zpp_nape::util::ZPP_Vec2List tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(16475)
		bool tmp6 = tmp5->dontremove;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(16475)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(16475)
		if ((tmp7)){
			HX_STACK_LINE(16475)
			::zpp_nape::geom::ZPP_Vec2 tmp8 = this->inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(16475)
			::zpp_nape::geom::ZPP_Vec2 tmp9 = obj->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(16475)
			tmp8->remove(tmp9);
		}
		HX_STACK_LINE(16476)
		::zpp_nape::util::ZPP_Vec2List tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(16476)
		tmp8->invalidate();
	}
	HX_STACK_LINE(16478)
	bool tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16478)
	return tmp2;
}


Void ZPP_MixVec2List_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_MixVec2List","clear",0x5b608f07,"zpp_nape.util.ZPP_MixVec2List.clear","zpp_nape/util/Lists.hx",16481,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16485)
		::zpp_nape::util::ZPP_Vec2List tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(16485)
		bool tmp1 = tmp->reverse_flag;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(16485)
		if ((tmp1)){
			HX_STACK_LINE(16486)
			while((true)){
				HX_STACK_LINE(16486)
				bool tmp2 = this->empty();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(16486)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(16486)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(16486)
				if ((tmp4)){
					HX_STACK_LINE(16486)
					break;
				}
				HX_STACK_LINE(16486)
				this->pop();
			}
		}
		else{
			HX_STACK_LINE(16489)
			while((true)){
				HX_STACK_LINE(16489)
				bool tmp2 = this->empty();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(16489)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(16489)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(16489)
				if ((tmp4)){
					HX_STACK_LINE(16489)
					break;
				}
				HX_STACK_LINE(16489)
				this->shift();
			}
		}
	}
return null();
}


::zpp_nape::util::ZPP_MixVec2List ZPP_MixVec2List_obj::get( ::zpp_nape::geom::ZPP_Vec2 list,hx::Null< bool >  __o_immutable){
bool immutable = __o_immutable.Default(false);
	HX_STACK_FRAME("zpp_nape.util.ZPP_MixVec2List","get",0x43076b90,"zpp_nape.util.ZPP_MixVec2List.get","zpp_nape/util/Lists.hx",16283,0x9f4e6754)
	HX_STACK_ARG(list,"list")
	HX_STACK_ARG(immutable,"immutable")
{
		HX_STACK_LINE(16284)
		::zpp_nape::util::ZPP_MixVec2List tmp = ::zpp_nape::util::ZPP_MixVec2List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(16284)
		::zpp_nape::util::ZPP_MixVec2List ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(16285)
		ret->inner = list;
		HX_STACK_LINE(16286)
		ret->zpp_inner->immutable = immutable;
		HX_STACK_LINE(16287)
		::zpp_nape::util::ZPP_MixVec2List tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(16287)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_MixVec2List_obj,get,return )


ZPP_MixVec2List_obj::ZPP_MixVec2List_obj()
{
}

void ZPP_MixVec2List_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_MixVec2List);
	HX_MARK_MEMBER_NAME(inner,"inner");
	HX_MARK_MEMBER_NAME(_length,"_length");
	HX_MARK_MEMBER_NAME(zip_length,"zip_length");
	HX_MARK_MEMBER_NAME(at_ite,"at_ite");
	HX_MARK_MEMBER_NAME(at_index,"at_index");
	::nape::geom::Vec2List_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_MixVec2List_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(inner,"inner");
	HX_VISIT_MEMBER_NAME(_length,"_length");
	HX_VISIT_MEMBER_NAME(zip_length,"zip_length");
	HX_VISIT_MEMBER_NAME(at_ite,"at_ite");
	HX_VISIT_MEMBER_NAME(at_index,"at_index");
	::nape::geom::Vec2List_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_MixVec2List_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"inner") ) { return inner; }
		if (HX_FIELD_EQ(inName,"shift") ) { return shift_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"at_ite") ) { return at_ite; }
		if (HX_FIELD_EQ(inName,"zpp_gl") ) { return zpp_gl_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_vm") ) { return zpp_vm_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_length") ) { return _length; }
		if (HX_FIELD_EQ(inName,"unshift") ) { return unshift_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"at_index") ) { return at_index; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"zip_length") ) { return zip_length; }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_MixVec2List_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
	}
	return false;
}

Dynamic ZPP_MixVec2List_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"inner") ) { inner=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"at_ite") ) { at_ite=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_length") ) { _length=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"at_index") ) { at_index=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"zip_length") ) { zip_length=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_MixVec2List_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("inner","\x96","\x31","\x1c","\xbe"));
	outFields->push(HX_HCSTRING("_length","\x85","\xa6","\x7e","\x0d"));
	outFields->push(HX_HCSTRING("zip_length","\xc4","\xc5","\x11","\x3c"));
	outFields->push(HX_HCSTRING("at_ite","\x8e","\xa1","\x34","\xd2"));
	outFields->push(HX_HCSTRING("at_index","\x86","\xef","\xd2","\x3d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_Vec2*/ ,(int)offsetof(ZPP_MixVec2List_obj,inner),HX_HCSTRING("inner","\x96","\x31","\x1c","\xbe")},
	{hx::fsInt,(int)offsetof(ZPP_MixVec2List_obj,_length),HX_HCSTRING("_length","\x85","\xa6","\x7e","\x0d")},
	{hx::fsBool,(int)offsetof(ZPP_MixVec2List_obj,zip_length),HX_HCSTRING("zip_length","\xc4","\xc5","\x11","\x3c")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_Vec2*/ ,(int)offsetof(ZPP_MixVec2List_obj,at_ite),HX_HCSTRING("at_ite","\x8e","\xa1","\x34","\xd2")},
	{hx::fsInt,(int)offsetof(ZPP_MixVec2List_obj,at_index),HX_HCSTRING("at_index","\x86","\xef","\xd2","\x3d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("inner","\x96","\x31","\x1c","\xbe"),
	HX_HCSTRING("_length","\x85","\xa6","\x7e","\x0d"),
	HX_HCSTRING("zip_length","\xc4","\xc5","\x11","\x3c"),
	HX_HCSTRING("at_ite","\x8e","\xa1","\x34","\xd2"),
	HX_HCSTRING("at_index","\x86","\xef","\xd2","\x3d"),
	HX_HCSTRING("zpp_gl","\x8a","\x53","\xbb","\x8e"),
	HX_HCSTRING("zpp_vm","\x9c","\x60","\xbb","\x8e"),
	HX_HCSTRING("at","\xf3","\x54","\x00","\x00"),
	HX_HCSTRING("push","\xda","\x11","\x61","\x4a"),
	HX_HCSTRING("unshift","\x89","\xe3","\xb3","\x78"),
	HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"),
	HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_MixVec2List_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_MixVec2List_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_MixVec2List_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

void ZPP_MixVec2List_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.util.ZPP_MixVec2List","\x68","\xc6","\x49","\x13");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_MixVec2List_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_MixVec2List_obj >;
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

} // end namespace zpp_nape
} // end namespace util
