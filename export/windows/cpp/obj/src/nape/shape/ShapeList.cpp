#include <hxcpp.h>

#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeIterator
#include <nape/shape/ShapeIterator.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace nape{
namespace shape{

Void ShapeList_obj::__construct()
{
HX_STACK_FRAME("nape.shape.ShapeList","new",0x28845fde,"nape.shape.ShapeList.new","nape/shape/ShapeList.hx",234,0xf97a5714)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(238)
	this->zpp_inner = null();
	HX_STACK_LINE(696)
	::zpp_nape::util::ZPP_ShapeList tmp = ::zpp_nape::util::ZPP_ShapeList_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(696)
	this->zpp_inner = tmp;
	HX_STACK_LINE(697)
	::zpp_nape::util::ZPP_ShapeList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(697)
	tmp1->outer = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//ShapeList_obj::~ShapeList_obj() { }

Dynamic ShapeList_obj::__CreateEmpty() { return  new ShapeList_obj; }
hx::ObjectPtr< ShapeList_obj > ShapeList_obj::__new()
{  hx::ObjectPtr< ShapeList_obj > _result_ = new ShapeList_obj();
	_result_->__construct();
	return _result_;}

Dynamic ShapeList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShapeList_obj > _result_ = new ShapeList_obj();
	_result_->__construct();
	return _result_;}

int ShapeList_obj::get_length( ){
	HX_STACK_FRAME("nape.shape.ShapeList","get_length",0x21f280f1,"nape.shape.ShapeList.get_length","nape/shape/ShapeList.hx",244,0xf97a5714)
	HX_STACK_THIS(this)
	HX_STACK_LINE(245)
	::zpp_nape::util::ZPP_ShapeList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(245)
	tmp->valmod();
	HX_STACK_LINE(246)
	::zpp_nape::util::ZPP_ShapeList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(246)
	bool tmp2 = tmp1->zip_length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(246)
	if ((tmp2)){
		HX_STACK_LINE(247)
		::zpp_nape::util::ZPP_ShapeList tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(247)
		tmp3->zip_length = false;
		HX_STACK_LINE(259)
		{
			HX_STACK_LINE(259)
			::zpp_nape::util::ZPP_ShapeList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(259)
			int tmp5 = tmp4->inner->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(259)
			::zpp_nape::util::ZPP_ShapeList tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(259)
			tmp6->user_length = tmp5;
		}
	}
	HX_STACK_LINE(261)
	::zpp_nape::util::ZPP_ShapeList tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(261)
	int tmp4 = tmp3->user_length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(261)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(ShapeList_obj,get_length,return )

bool ShapeList_obj::has( ::nape::shape::Shape obj){
	HX_STACK_FRAME("nape.shape.ShapeList","has",0x287fced8,"nape.shape.ShapeList.has","nape/shape/ShapeList.hx",346,0xf97a5714)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(347)
	::zpp_nape::util::ZPP_ShapeList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(347)
	tmp->valmod();
	HX_STACK_LINE(350)
	::zpp_nape::util::ZPP_ShapeList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(350)
	::zpp_nape::shape::ZPP_Shape tmp2 = obj->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(350)
	bool tmp3 = tmp1->inner->has(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(350)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ShapeList_obj,has,return )

::nape::shape::Shape ShapeList_obj::at( int index){
	HX_STACK_FRAME("nape.shape.ShapeList","at",0xaeacbf35,"nape.shape.ShapeList.at","nape/shape/ShapeList.hx",363,0xf97a5714)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(364)
	::zpp_nape::util::ZPP_ShapeList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(364)
	tmp->valmod();
	HX_STACK_LINE(370)
	::zpp_nape::util::ZPP_ShapeList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(370)
	bool tmp2 = tmp1->reverse_flag;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(370)
	if ((tmp2)){
		HX_STACK_LINE(370)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(370)
		{
			HX_STACK_LINE(370)
			::zpp_nape::util::ZPP_ShapeList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(370)
			tmp4->valmod();
			HX_STACK_LINE(370)
			::zpp_nape::util::ZPP_ShapeList tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(370)
			bool tmp6 = tmp5->zip_length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(370)
			if ((tmp6)){
				HX_STACK_LINE(370)
				::zpp_nape::util::ZPP_ShapeList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(370)
				tmp7->zip_length = false;
				HX_STACK_LINE(370)
				{
					HX_STACK_LINE(370)
					::zpp_nape::util::ZPP_ShapeList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(370)
					int tmp9 = tmp8->inner->length;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(370)
					::zpp_nape::util::ZPP_ShapeList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(370)
					tmp10->user_length = tmp9;
				}
			}
			HX_STACK_LINE(370)
			::zpp_nape::util::ZPP_ShapeList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(370)
			tmp3 = tmp7->user_length;
		}
		HX_STACK_LINE(370)
		int tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(370)
		int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(370)
		int tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(370)
		index = tmp6;
	}
	HX_STACK_LINE(371)
	bool tmp3 = true;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(371)
	if ((tmp3)){
		HX_STACK_LINE(372)
		int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(372)
		::zpp_nape::util::ZPP_ShapeList tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(372)
		int tmp6 = tmp5->at_index;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(372)
		bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(372)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(372)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(372)
		if ((tmp8)){
			HX_STACK_LINE(372)
			::zpp_nape::util::ZPP_ShapeList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(372)
			::zpp_nape::util::ZPP_ShapeList tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(372)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp12 = tmp11->at_ite;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(372)
			tmp9 = (tmp12 == null());
		}
		else{
			HX_STACK_LINE(372)
			tmp9 = true;
		}
		HX_STACK_LINE(372)
		if ((tmp9)){
			HX_STACK_LINE(373)
			::zpp_nape::util::ZPP_ShapeList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(373)
			tmp10->at_index = index;
			HX_STACK_LINE(374)
			::zpp_nape::util::ZPP_ShapeList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(374)
			int tmp12 = index;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(374)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp13 = tmp11->inner->iterator_at(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(374)
			::zpp_nape::util::ZPP_ShapeList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(374)
			tmp14->at_ite = tmp13;
		}
		else{
			HX_STACK_LINE(377)
			while((true)){
				HX_STACK_LINE(377)
				::zpp_nape::util::ZPP_ShapeList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(377)
				int tmp11 = tmp10->at_index;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(377)
				int tmp12 = index;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(377)
				bool tmp13 = (tmp11 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(377)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(377)
				if ((tmp14)){
					HX_STACK_LINE(377)
					break;
				}
				HX_STACK_LINE(378)
				::zpp_nape::util::ZPP_ShapeList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(378)
				(tmp15->at_index)++;
				HX_STACK_LINE(379)
				::zpp_nape::util::ZPP_ShapeList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(379)
				::zpp_nape::util::ZNPNode_ZPP_Shape tmp17 = tmp16->at_ite->next;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(379)
				::zpp_nape::util::ZPP_ShapeList tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(379)
				tmp18->at_ite = tmp17;
			}
		}
	}
	else{
		HX_STACK_LINE(384)
		int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(384)
		::zpp_nape::util::ZPP_ShapeList tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(384)
		int tmp6 = tmp5->at_index;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(384)
		bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(384)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(384)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(384)
		if ((tmp8)){
			HX_STACK_LINE(384)
			::zpp_nape::util::ZPP_ShapeList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(384)
			::zpp_nape::util::ZPP_ShapeList tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(384)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp12 = tmp11->at_ite;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(384)
			tmp9 = (tmp12 == null());
		}
		else{
			HX_STACK_LINE(384)
			tmp9 = true;
		}
		HX_STACK_LINE(384)
		if ((tmp9)){
			HX_STACK_LINE(385)
			::zpp_nape::util::ZPP_ShapeList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(385)
			tmp10->at_index = (int)0;
			HX_STACK_LINE(386)
			::zpp_nape::util::ZPP_ShapeList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(386)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp12 = tmp11->inner->head;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(386)
			::zpp_nape::util::ZPP_ShapeList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(386)
			tmp13->at_ite = tmp12;
			HX_STACK_LINE(387)
			while((true)){
				HX_STACK_LINE(388)
				::zpp_nape::util::ZPP_ShapeList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(388)
				::zpp_nape::shape::ZPP_Shape tmp15 = tmp14->at_ite->elt;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(388)
				::zpp_nape::shape::ZPP_Shape x = tmp15;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(389)
				break;
				HX_STACK_LINE(390)
				::zpp_nape::util::ZPP_ShapeList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(390)
				::zpp_nape::util::ZNPNode_ZPP_Shape tmp17 = tmp16->at_ite->next;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(390)
				::zpp_nape::util::ZPP_ShapeList tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(390)
				tmp18->at_ite = tmp17;
			}
		}
		HX_STACK_LINE(393)
		while((true)){
			HX_STACK_LINE(393)
			::zpp_nape::util::ZPP_ShapeList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(393)
			int tmp11 = tmp10->at_index;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(393)
			int tmp12 = index;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(393)
			bool tmp13 = (tmp11 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(393)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(393)
			if ((tmp14)){
				HX_STACK_LINE(393)
				break;
			}
			HX_STACK_LINE(394)
			::zpp_nape::util::ZPP_ShapeList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(394)
			(tmp15->at_index)++;
			HX_STACK_LINE(395)
			::zpp_nape::util::ZPP_ShapeList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(395)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp17 = tmp16->at_ite->next;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(395)
			::zpp_nape::util::ZPP_ShapeList tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(395)
			tmp18->at_ite = tmp17;
			HX_STACK_LINE(396)
			while((true)){
				HX_STACK_LINE(397)
				::zpp_nape::util::ZPP_ShapeList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(397)
				::zpp_nape::shape::ZPP_Shape tmp20 = tmp19->at_ite->elt;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(397)
				::zpp_nape::shape::ZPP_Shape x = tmp20;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(398)
				break;
				HX_STACK_LINE(399)
				::zpp_nape::util::ZPP_ShapeList tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(399)
				::zpp_nape::util::ZNPNode_ZPP_Shape tmp22 = tmp21->at_ite->next;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(399)
				::zpp_nape::util::ZPP_ShapeList tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(399)
				tmp23->at_ite = tmp22;
			}
		}
	}
	HX_STACK_LINE(403)
	::zpp_nape::util::ZPP_ShapeList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(403)
	::zpp_nape::shape::ZPP_Shape tmp5 = tmp4->at_ite->elt;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(403)
	::nape::shape::Shape tmp6 = tmp5->outer;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(403)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(ShapeList_obj,at,return )

bool ShapeList_obj::push( ::nape::shape::Shape obj){
	HX_STACK_FRAME("nape.shape.ShapeList","push",0x4cae109c,"nape.shape.ShapeList.push","nape/shape/ShapeList.hx",416,0xf97a5714)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(420)
	::zpp_nape::util::ZPP_ShapeList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(420)
	tmp->modify_test();
	HX_STACK_LINE(421)
	::zpp_nape::util::ZPP_ShapeList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(421)
	tmp1->valmod();
	HX_STACK_LINE(424)
	::zpp_nape::util::ZPP_ShapeList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(424)
	Dynamic tmp3 = tmp2->adder;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(424)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(424)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(424)
	if ((tmp4)){
		HX_STACK_LINE(424)
		::zpp_nape::util::ZPP_ShapeList tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(424)
		::nape::shape::Shape tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(424)
		tmp5 = tmp6->adder(tmp7);
	}
	else{
		HX_STACK_LINE(424)
		tmp5 = true;
	}
	HX_STACK_LINE(424)
	bool cont = tmp5;		HX_STACK_VAR(cont,"cont");
	HX_STACK_LINE(425)
	bool tmp6 = cont;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(425)
	if ((tmp6)){
		HX_STACK_LINE(426)
		::zpp_nape::util::ZPP_ShapeList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(426)
		bool tmp8 = tmp7->reverse_flag;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(426)
		if ((tmp8)){
			HX_STACK_LINE(426)
			::zpp_nape::util::ZPP_ShapeList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(426)
			::zpp_nape::shape::ZPP_Shape tmp10 = obj->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(426)
			tmp9->inner->add(tmp10);
		}
		else{
			HX_STACK_LINE(428)
			::zpp_nape::util::ZPP_ShapeList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(428)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp10 = tmp9->push_ite;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(428)
			bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(428)
			if ((tmp11)){
				HX_STACK_LINE(428)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(428)
				{
					HX_STACK_LINE(428)
					::zpp_nape::util::ZPP_ShapeList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(428)
					::zpp_nape::util::ZNPNode_ZPP_Shape tmp14 = tmp13->inner->head;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(428)
					tmp12 = (tmp14 == null());
				}
				HX_STACK_LINE(428)
				::zpp_nape::util::ZNPNode_ZPP_Shape tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(428)
				if ((tmp12)){
					HX_STACK_LINE(428)
					tmp13 = null();
				}
				else{
					HX_STACK_LINE(428)
					::zpp_nape::util::ZPP_ShapeList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(428)
					int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(428)
					{
						HX_STACK_LINE(428)
						::zpp_nape::util::ZPP_ShapeList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(428)
						tmp16->valmod();
						HX_STACK_LINE(428)
						::zpp_nape::util::ZPP_ShapeList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(428)
						bool tmp18 = tmp17->zip_length;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(428)
						if ((tmp18)){
							HX_STACK_LINE(428)
							::zpp_nape::util::ZPP_ShapeList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(428)
							tmp19->zip_length = false;
							HX_STACK_LINE(428)
							{
								HX_STACK_LINE(428)
								::zpp_nape::util::ZPP_ShapeList tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(428)
								int tmp21 = tmp20->inner->length;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(428)
								::zpp_nape::util::ZPP_ShapeList tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(428)
								tmp22->user_length = tmp21;
							}
						}
						HX_STACK_LINE(428)
						::zpp_nape::util::ZPP_ShapeList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(428)
						tmp15 = tmp19->user_length;
					}
					HX_STACK_LINE(428)
					int tmp16 = (tmp15 - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(428)
					tmp13 = tmp14->inner->iterator_at(tmp16);
				}
				HX_STACK_LINE(428)
				::zpp_nape::util::ZPP_ShapeList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(428)
				tmp14->push_ite = tmp13;
			}
			HX_STACK_LINE(429)
			::zpp_nape::util::ZPP_ShapeList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(429)
			::zpp_nape::util::ZPP_ShapeList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(429)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp14 = tmp13->push_ite;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(429)
			::zpp_nape::shape::ZPP_Shape tmp15 = obj->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(429)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp16 = tmp12->inner->insert(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(429)
			::zpp_nape::util::ZPP_ShapeList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(429)
			tmp17->push_ite = tmp16;
		}
		HX_STACK_LINE(431)
		::zpp_nape::util::ZPP_ShapeList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(431)
		tmp9->invalidate();
		HX_STACK_LINE(432)
		::zpp_nape::util::ZPP_ShapeList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(432)
		Dynamic tmp11 = tmp10->post_adder;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(432)
		bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(432)
		if ((tmp12)){
			HX_STACK_LINE(432)
			::zpp_nape::util::ZPP_ShapeList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(432)
			::nape::shape::Shape tmp14 = obj;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(432)
			tmp13->post_adder(tmp14);
		}
	}
	HX_STACK_LINE(434)
	bool tmp7 = cont;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(434)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(ShapeList_obj,push,return )

bool ShapeList_obj::unshift( ::nape::shape::Shape obj){
	HX_STACK_FRAME("nape.shape.ShapeList","unshift",0x52550a07,"nape.shape.ShapeList.unshift","nape/shape/ShapeList.hx",447,0xf97a5714)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(451)
	::zpp_nape::util::ZPP_ShapeList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(451)
	tmp->modify_test();
	HX_STACK_LINE(452)
	::zpp_nape::util::ZPP_ShapeList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(452)
	tmp1->valmod();
	HX_STACK_LINE(455)
	::zpp_nape::util::ZPP_ShapeList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(455)
	Dynamic tmp3 = tmp2->adder;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(455)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(455)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(455)
	if ((tmp4)){
		HX_STACK_LINE(455)
		::zpp_nape::util::ZPP_ShapeList tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(455)
		::nape::shape::Shape tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(455)
		tmp5 = tmp6->adder(tmp7);
	}
	else{
		HX_STACK_LINE(455)
		tmp5 = true;
	}
	HX_STACK_LINE(455)
	bool cont = tmp5;		HX_STACK_VAR(cont,"cont");
	HX_STACK_LINE(456)
	bool tmp6 = cont;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(456)
	if ((tmp6)){
		HX_STACK_LINE(457)
		::zpp_nape::util::ZPP_ShapeList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(457)
		bool tmp8 = tmp7->reverse_flag;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(457)
		if ((tmp8)){
			HX_STACK_LINE(458)
			::zpp_nape::util::ZPP_ShapeList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(458)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp10 = tmp9->push_ite;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(458)
			bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(458)
			if ((tmp11)){
				HX_STACK_LINE(458)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(458)
				{
					HX_STACK_LINE(458)
					::zpp_nape::util::ZPP_ShapeList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(458)
					::zpp_nape::util::ZNPNode_ZPP_Shape tmp14 = tmp13->inner->head;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(458)
					tmp12 = (tmp14 == null());
				}
				HX_STACK_LINE(458)
				::zpp_nape::util::ZNPNode_ZPP_Shape tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(458)
				if ((tmp12)){
					HX_STACK_LINE(458)
					tmp13 = null();
				}
				else{
					HX_STACK_LINE(458)
					::zpp_nape::util::ZPP_ShapeList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(458)
					int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(458)
					{
						HX_STACK_LINE(458)
						::zpp_nape::util::ZPP_ShapeList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(458)
						tmp16->valmod();
						HX_STACK_LINE(458)
						::zpp_nape::util::ZPP_ShapeList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(458)
						bool tmp18 = tmp17->zip_length;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(458)
						if ((tmp18)){
							HX_STACK_LINE(458)
							::zpp_nape::util::ZPP_ShapeList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(458)
							tmp19->zip_length = false;
							HX_STACK_LINE(458)
							{
								HX_STACK_LINE(458)
								::zpp_nape::util::ZPP_ShapeList tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(458)
								int tmp21 = tmp20->inner->length;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(458)
								::zpp_nape::util::ZPP_ShapeList tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(458)
								tmp22->user_length = tmp21;
							}
						}
						HX_STACK_LINE(458)
						::zpp_nape::util::ZPP_ShapeList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(458)
						tmp15 = tmp19->user_length;
					}
					HX_STACK_LINE(458)
					int tmp16 = (tmp15 - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(458)
					tmp13 = tmp14->inner->iterator_at(tmp16);
				}
				HX_STACK_LINE(458)
				::zpp_nape::util::ZPP_ShapeList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(458)
				tmp14->push_ite = tmp13;
			}
			HX_STACK_LINE(459)
			::zpp_nape::util::ZPP_ShapeList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(459)
			::zpp_nape::util::ZPP_ShapeList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(459)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp14 = tmp13->push_ite;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(459)
			::zpp_nape::shape::ZPP_Shape tmp15 = obj->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(459)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp16 = tmp12->inner->insert(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(459)
			::zpp_nape::util::ZPP_ShapeList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(459)
			tmp17->push_ite = tmp16;
		}
		else{
			HX_STACK_LINE(461)
			::zpp_nape::util::ZPP_ShapeList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(461)
			::zpp_nape::shape::ZPP_Shape tmp10 = obj->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(461)
			tmp9->inner->add(tmp10);
		}
		HX_STACK_LINE(462)
		::zpp_nape::util::ZPP_ShapeList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(462)
		tmp9->invalidate();
		HX_STACK_LINE(463)
		::zpp_nape::util::ZPP_ShapeList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(463)
		Dynamic tmp11 = tmp10->post_adder;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(463)
		bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(463)
		if ((tmp12)){
			HX_STACK_LINE(463)
			::zpp_nape::util::ZPP_ShapeList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(463)
			::nape::shape::Shape tmp14 = obj;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(463)
			tmp13->post_adder(tmp14);
		}
	}
	HX_STACK_LINE(465)
	bool tmp7 = cont;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(465)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(ShapeList_obj,unshift,return )

::nape::shape::Shape ShapeList_obj::pop( ){
	HX_STACK_FRAME("nape.shape.ShapeList","pop",0x2885ed0f,"nape.shape.ShapeList.pop","nape/shape/ShapeList.hx",478,0xf97a5714)
	HX_STACK_THIS(this)
	HX_STACK_LINE(482)
	::zpp_nape::util::ZPP_ShapeList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(482)
	tmp->modify_test();
	HX_STACK_LINE(486)
	::zpp_nape::util::ZPP_ShapeList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(486)
	tmp1->valmod();
	HX_STACK_LINE(489)
	::zpp_nape::shape::ZPP_Shape ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(490)
	::zpp_nape::util::ZPP_ShapeList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(490)
	bool tmp3 = tmp2->reverse_flag;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(490)
	if ((tmp3)){
		HX_STACK_LINE(491)
		::zpp_nape::util::ZPP_ShapeList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(491)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp5 = tmp4->inner->head;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(491)
		ret = tmp5->elt;
		HX_STACK_LINE(492)
		::nape::shape::Shape retx = ret->outer;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(493)
		::zpp_nape::util::ZPP_ShapeList tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(493)
		Dynamic tmp7 = tmp6->subber;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(493)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(493)
		if ((tmp8)){
			HX_STACK_LINE(493)
			::zpp_nape::util::ZPP_ShapeList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(493)
			::nape::shape::Shape tmp10 = retx;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(493)
			tmp9->subber(tmp10);
		}
		HX_STACK_LINE(494)
		::zpp_nape::util::ZPP_ShapeList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(494)
		bool tmp10 = tmp9->dontremove;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(494)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(494)
		if ((tmp11)){
			HX_STACK_LINE(494)
			::zpp_nape::util::ZPP_ShapeList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(494)
			tmp12->inner->pop();
		}
	}
	else{
		HX_STACK_LINE(497)
		::zpp_nape::util::ZPP_ShapeList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(497)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp5 = tmp4->at_ite;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(497)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(497)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(497)
		if ((tmp6)){
			HX_STACK_LINE(497)
			::zpp_nape::util::ZPP_ShapeList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(497)
			::zpp_nape::util::ZPP_ShapeList tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(497)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp10 = tmp9->at_ite->next;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(497)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(497)
			tmp7 = (tmp11 == null());
		}
		else{
			HX_STACK_LINE(497)
			tmp7 = false;
		}
		HX_STACK_LINE(497)
		if ((tmp7)){
			HX_STACK_LINE(497)
			::zpp_nape::util::ZPP_ShapeList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(497)
			tmp8->at_ite = null();
		}
		HX_STACK_LINE(498)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			::zpp_nape::util::ZPP_ShapeList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(498)
			tmp9->valmod();
			HX_STACK_LINE(498)
			::zpp_nape::util::ZPP_ShapeList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(498)
			bool tmp11 = tmp10->zip_length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(498)
			if ((tmp11)){
				HX_STACK_LINE(498)
				::zpp_nape::util::ZPP_ShapeList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(498)
				tmp12->zip_length = false;
				HX_STACK_LINE(498)
				{
					HX_STACK_LINE(498)
					::zpp_nape::util::ZPP_ShapeList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(498)
					int tmp14 = tmp13->inner->length;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(498)
					::zpp_nape::util::ZPP_ShapeList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(498)
					tmp15->user_length = tmp14;
				}
			}
			HX_STACK_LINE(498)
			::zpp_nape::util::ZPP_ShapeList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(498)
			tmp8 = tmp12->user_length;
		}
		HX_STACK_LINE(498)
		bool tmp9 = (tmp8 == (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(498)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(498)
		if ((tmp9)){
			HX_STACK_LINE(498)
			tmp10 = null();
		}
		else{
			HX_STACK_LINE(498)
			::zpp_nape::util::ZPP_ShapeList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(498)
			int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(498)
			{
				HX_STACK_LINE(498)
				::zpp_nape::util::ZPP_ShapeList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(498)
				tmp13->valmod();
				HX_STACK_LINE(498)
				::zpp_nape::util::ZPP_ShapeList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(498)
				bool tmp15 = tmp14->zip_length;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(498)
				if ((tmp15)){
					HX_STACK_LINE(498)
					::zpp_nape::util::ZPP_ShapeList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(498)
					tmp16->zip_length = false;
					HX_STACK_LINE(498)
					{
						HX_STACK_LINE(498)
						::zpp_nape::util::ZPP_ShapeList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(498)
						int tmp18 = tmp17->inner->length;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(498)
						::zpp_nape::util::ZPP_ShapeList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(498)
						tmp19->user_length = tmp18;
					}
				}
				HX_STACK_LINE(498)
				::zpp_nape::util::ZPP_ShapeList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(498)
				tmp12 = tmp16->user_length;
			}
			HX_STACK_LINE(498)
			int tmp13 = (tmp12 - (int)2);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(498)
			tmp10 = tmp11->inner->iterator_at(tmp13);
		}
		HX_STACK_LINE(498)
		::zpp_nape::util::ZNPNode_ZPP_Shape ite = tmp10;		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(499)
		bool tmp11 = (ite == null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(499)
		::zpp_nape::shape::ZPP_Shape tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(499)
		if ((tmp11)){
			HX_STACK_LINE(499)
			::zpp_nape::util::ZPP_ShapeList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(499)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp14 = tmp13->inner->head;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(499)
			tmp12 = tmp14->elt;
		}
		else{
			HX_STACK_LINE(499)
			tmp12 = ite->next->elt;
		}
		HX_STACK_LINE(499)
		ret = tmp12;
		HX_STACK_LINE(500)
		::nape::shape::Shape retx = ret->outer;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(501)
		::zpp_nape::util::ZPP_ShapeList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(501)
		Dynamic tmp14 = tmp13->subber;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(501)
		bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(501)
		if ((tmp15)){
			HX_STACK_LINE(501)
			::zpp_nape::util::ZPP_ShapeList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(501)
			::nape::shape::Shape tmp17 = retx;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(501)
			tmp16->subber(tmp17);
		}
		HX_STACK_LINE(502)
		::zpp_nape::util::ZPP_ShapeList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(502)
		bool tmp17 = tmp16->dontremove;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(502)
		bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(502)
		if ((tmp18)){
			HX_STACK_LINE(502)
			::zpp_nape::util::ZPP_ShapeList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(502)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp20 = ite;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(502)
			tmp19->inner->erase(tmp20);
		}
	}
	HX_STACK_LINE(504)
	::zpp_nape::util::ZPP_ShapeList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(504)
	tmp4->invalidate();
	HX_STACK_LINE(505)
	::nape::shape::Shape retx = ret->outer;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(506)
	::nape::shape::Shape tmp5 = retx;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(506)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(ShapeList_obj,pop,return )

::nape::shape::Shape ShapeList_obj::shift( ){
	HX_STACK_FRAME("nape.shape.ShapeList","shift",0x7d34d780,"nape.shape.ShapeList.shift","nape/shape/ShapeList.hx",519,0xf97a5714)
	HX_STACK_THIS(this)
	HX_STACK_LINE(523)
	::zpp_nape::util::ZPP_ShapeList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(523)
	tmp->modify_test();
	HX_STACK_LINE(527)
	::zpp_nape::util::ZPP_ShapeList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(527)
	tmp1->valmod();
	HX_STACK_LINE(530)
	::zpp_nape::shape::ZPP_Shape ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(531)
	::zpp_nape::util::ZPP_ShapeList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(531)
	bool tmp3 = tmp2->reverse_flag;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(531)
	if ((tmp3)){
		HX_STACK_LINE(532)
		::zpp_nape::util::ZPP_ShapeList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(532)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp5 = tmp4->at_ite;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(532)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(532)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(532)
		if ((tmp6)){
			HX_STACK_LINE(532)
			::zpp_nape::util::ZPP_ShapeList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(532)
			::zpp_nape::util::ZPP_ShapeList tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(532)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp10 = tmp9->at_ite->next;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(532)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(532)
			tmp7 = (tmp11 == null());
		}
		else{
			HX_STACK_LINE(532)
			tmp7 = false;
		}
		HX_STACK_LINE(532)
		if ((tmp7)){
			HX_STACK_LINE(532)
			::zpp_nape::util::ZPP_ShapeList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(532)
			tmp8->at_ite = null();
		}
		HX_STACK_LINE(533)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(533)
		{
			HX_STACK_LINE(533)
			::zpp_nape::util::ZPP_ShapeList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(533)
			tmp9->valmod();
			HX_STACK_LINE(533)
			::zpp_nape::util::ZPP_ShapeList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(533)
			bool tmp11 = tmp10->zip_length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(533)
			if ((tmp11)){
				HX_STACK_LINE(533)
				::zpp_nape::util::ZPP_ShapeList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(533)
				tmp12->zip_length = false;
				HX_STACK_LINE(533)
				{
					HX_STACK_LINE(533)
					::zpp_nape::util::ZPP_ShapeList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(533)
					int tmp14 = tmp13->inner->length;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(533)
					::zpp_nape::util::ZPP_ShapeList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(533)
					tmp15->user_length = tmp14;
				}
			}
			HX_STACK_LINE(533)
			::zpp_nape::util::ZPP_ShapeList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(533)
			tmp8 = tmp12->user_length;
		}
		HX_STACK_LINE(533)
		bool tmp9 = (tmp8 == (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(533)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(533)
		if ((tmp9)){
			HX_STACK_LINE(533)
			tmp10 = null();
		}
		else{
			HX_STACK_LINE(533)
			::zpp_nape::util::ZPP_ShapeList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(533)
			int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(533)
			{
				HX_STACK_LINE(533)
				::zpp_nape::util::ZPP_ShapeList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(533)
				tmp13->valmod();
				HX_STACK_LINE(533)
				::zpp_nape::util::ZPP_ShapeList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(533)
				bool tmp15 = tmp14->zip_length;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(533)
				if ((tmp15)){
					HX_STACK_LINE(533)
					::zpp_nape::util::ZPP_ShapeList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(533)
					tmp16->zip_length = false;
					HX_STACK_LINE(533)
					{
						HX_STACK_LINE(533)
						::zpp_nape::util::ZPP_ShapeList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(533)
						int tmp18 = tmp17->inner->length;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(533)
						::zpp_nape::util::ZPP_ShapeList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(533)
						tmp19->user_length = tmp18;
					}
				}
				HX_STACK_LINE(533)
				::zpp_nape::util::ZPP_ShapeList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(533)
				tmp12 = tmp16->user_length;
			}
			HX_STACK_LINE(533)
			int tmp13 = (tmp12 - (int)2);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(533)
			tmp10 = tmp11->inner->iterator_at(tmp13);
		}
		HX_STACK_LINE(533)
		::zpp_nape::util::ZNPNode_ZPP_Shape ite = tmp10;		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(534)
		bool tmp11 = (ite == null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(534)
		::zpp_nape::shape::ZPP_Shape tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(534)
		if ((tmp11)){
			HX_STACK_LINE(534)
			::zpp_nape::util::ZPP_ShapeList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(534)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp14 = tmp13->inner->head;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(534)
			tmp12 = tmp14->elt;
		}
		else{
			HX_STACK_LINE(534)
			tmp12 = ite->next->elt;
		}
		HX_STACK_LINE(534)
		ret = tmp12;
		HX_STACK_LINE(535)
		::nape::shape::Shape retx = ret->outer;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(536)
		::zpp_nape::util::ZPP_ShapeList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(536)
		Dynamic tmp14 = tmp13->subber;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(536)
		bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(536)
		if ((tmp15)){
			HX_STACK_LINE(536)
			::zpp_nape::util::ZPP_ShapeList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(536)
			::nape::shape::Shape tmp17 = retx;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(536)
			tmp16->subber(tmp17);
		}
		HX_STACK_LINE(537)
		::zpp_nape::util::ZPP_ShapeList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(537)
		bool tmp17 = tmp16->dontremove;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(537)
		bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(537)
		if ((tmp18)){
			HX_STACK_LINE(537)
			::zpp_nape::util::ZPP_ShapeList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(537)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp20 = ite;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(537)
			tmp19->inner->erase(tmp20);
		}
	}
	else{
		HX_STACK_LINE(540)
		::zpp_nape::util::ZPP_ShapeList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(540)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp5 = tmp4->inner->head;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(540)
		ret = tmp5->elt;
		HX_STACK_LINE(541)
		::nape::shape::Shape retx = ret->outer;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(542)
		::zpp_nape::util::ZPP_ShapeList tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(542)
		Dynamic tmp7 = tmp6->subber;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(542)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(542)
		if ((tmp8)){
			HX_STACK_LINE(542)
			::zpp_nape::util::ZPP_ShapeList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(542)
			::nape::shape::Shape tmp10 = retx;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(542)
			tmp9->subber(tmp10);
		}
		HX_STACK_LINE(543)
		::zpp_nape::util::ZPP_ShapeList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(543)
		bool tmp10 = tmp9->dontremove;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(543)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(543)
		if ((tmp11)){
			HX_STACK_LINE(543)
			::zpp_nape::util::ZPP_ShapeList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(543)
			tmp12->inner->pop();
		}
	}
	HX_STACK_LINE(545)
	::zpp_nape::util::ZPP_ShapeList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(545)
	tmp4->invalidate();
	HX_STACK_LINE(546)
	::nape::shape::Shape retx = ret->outer;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(547)
	::nape::shape::Shape tmp5 = retx;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(547)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(ShapeList_obj,shift,return )

bool ShapeList_obj::add( ::nape::shape::Shape obj){
	HX_STACK_FRAME("nape.shape.ShapeList","add",0x287a819f,"nape.shape.ShapeList.add","nape/shape/ShapeList.hx",563,0xf97a5714)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(564)
	::zpp_nape::util::ZPP_ShapeList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(564)
	bool tmp1 = tmp->reverse_flag;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(564)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(564)
	if ((tmp1)){
		HX_STACK_LINE(564)
		::nape::shape::Shape tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(564)
		tmp2 = this->push(tmp3);
	}
	else{
		HX_STACK_LINE(564)
		::nape::shape::Shape tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(564)
		tmp2 = this->unshift(tmp3);
	}
	HX_STACK_LINE(564)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ShapeList_obj,add,return )

bool ShapeList_obj::remove( ::nape::shape::Shape obj){
	HX_STACK_FRAME("nape.shape.ShapeList","remove",0xf3244f86,"nape.shape.ShapeList.remove","nape/shape/ShapeList.hx",576,0xf97a5714)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(580)
	::zpp_nape::util::ZPP_ShapeList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(580)
	tmp->modify_test();
	HX_STACK_LINE(581)
	::zpp_nape::util::ZPP_ShapeList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(581)
	tmp1->valmod();
	HX_STACK_LINE(584)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(585)
	{
		HX_STACK_LINE(586)
		ret = false;
		HX_STACK_LINE(587)
		{
			HX_STACK_LINE(588)
			::zpp_nape::util::ZPP_ShapeList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(588)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp3 = tmp2->inner->head;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(588)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp3;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(589)
			while((true)){
				HX_STACK_LINE(589)
				bool tmp4 = (cx_ite != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(589)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(589)
				if ((tmp5)){
					HX_STACK_LINE(589)
					break;
				}
				HX_STACK_LINE(590)
				::zpp_nape::shape::ZPP_Shape x = cx_ite->elt;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(591)
				{
					HX_STACK_LINE(592)
					bool tmp6 = (x == obj->zpp_inner);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(592)
					if ((tmp6)){
						HX_STACK_LINE(593)
						ret = true;
						HX_STACK_LINE(594)
						break;
					}
				}
				HX_STACK_LINE(597)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(601)
	bool tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(601)
	if ((tmp2)){
		HX_STACK_LINE(602)
		::zpp_nape::util::ZPP_ShapeList tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(602)
		Dynamic tmp4 = tmp3->subber;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(602)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(602)
		if ((tmp5)){
			HX_STACK_LINE(602)
			::zpp_nape::util::ZPP_ShapeList tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(602)
			::nape::shape::Shape tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(602)
			tmp6->subber(tmp7);
		}
		HX_STACK_LINE(603)
		::zpp_nape::util::ZPP_ShapeList tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(603)
		bool tmp7 = tmp6->dontremove;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(603)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(603)
		if ((tmp8)){
			HX_STACK_LINE(603)
			::zpp_nape::util::ZPP_ShapeList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(603)
			::zpp_nape::shape::ZPP_Shape tmp10 = obj->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(603)
			tmp9->inner->remove(tmp10);
		}
		HX_STACK_LINE(604)
		::zpp_nape::util::ZPP_ShapeList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(604)
		tmp9->invalidate();
	}
	HX_STACK_LINE(606)
	bool tmp3 = ret;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(606)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ShapeList_obj,remove,return )

Void ShapeList_obj::clear( ){
{
		HX_STACK_FRAME("nape.shape.ShapeList","clear",0x496d5c8b,"nape.shape.ShapeList.clear","nape/shape/ShapeList.hx",614,0xf97a5714)
		HX_STACK_THIS(this)
		HX_STACK_LINE(618)
		::zpp_nape::util::ZPP_ShapeList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(618)
		bool tmp1 = tmp->reverse_flag;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(618)
		if ((tmp1)){
			HX_STACK_LINE(619)
			while((true)){
				HX_STACK_LINE(619)
				bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(619)
				{
					HX_STACK_LINE(619)
					::zpp_nape::util::ZPP_ShapeList tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(619)
					::zpp_nape::util::ZNPNode_ZPP_Shape tmp4 = tmp3->inner->head;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(619)
					tmp2 = (tmp4 == null());
				}
				HX_STACK_LINE(619)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(619)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(619)
				if ((tmp4)){
					HX_STACK_LINE(619)
					break;
				}
				HX_STACK_LINE(619)
				this->pop();
			}
		}
		else{
			HX_STACK_LINE(622)
			while((true)){
				HX_STACK_LINE(622)
				bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(622)
				{
					HX_STACK_LINE(622)
					::zpp_nape::util::ZPP_ShapeList tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(622)
					::zpp_nape::util::ZNPNode_ZPP_Shape tmp4 = tmp3->inner->head;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(622)
					tmp2 = (tmp4 == null());
				}
				HX_STACK_LINE(622)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(622)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(622)
				if ((tmp4)){
					HX_STACK_LINE(622)
					break;
				}
				HX_STACK_LINE(622)
				this->shift();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShapeList_obj,clear,(void))

bool ShapeList_obj::empty( ){
	HX_STACK_FRAME("nape.shape.ShapeList","empty",0x70ec258b,"nape.shape.ShapeList.empty","nape/shape/ShapeList.hx",633,0xf97a5714)
	HX_STACK_THIS(this)
	HX_STACK_LINE(633)
	::zpp_nape::util::ZPP_ShapeList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(633)
	::zpp_nape::util::ZNPNode_ZPP_Shape tmp1 = tmp->inner->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(633)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(633)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ShapeList_obj,empty,return )

::nape::shape::ShapeIterator ShapeList_obj::iterator( ){
	HX_STACK_FRAME("nape.shape.ShapeList","iterator",0x26fad1b0,"nape.shape.ShapeList.iterator","nape/shape/ShapeList.hx",647,0xf97a5714)
	HX_STACK_THIS(this)
	HX_STACK_LINE(648)
	::zpp_nape::util::ZPP_ShapeList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(648)
	tmp->valmod();
	HX_STACK_LINE(651)
	::nape::shape::ShapeIterator tmp1 = ::nape::shape::ShapeIterator_obj::get(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(651)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ShapeList_obj,iterator,return )

::nape::shape::ShapeList ShapeList_obj::copy( hx::Null< bool >  __o_deep){
bool deep = __o_deep.Default(false);
	HX_STACK_FRAME("nape.shape.ShapeList","copy",0x4411ba77,"nape.shape.ShapeList.copy","nape/shape/ShapeList.hx",662,0xf97a5714)
	HX_STACK_THIS(this)
	HX_STACK_ARG(deep,"deep")
{
		HX_STACK_LINE(663)
		::nape::shape::ShapeList tmp = ::nape::shape::ShapeList_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(663)
		::nape::shape::ShapeList ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(664)
		{
			HX_STACK_LINE(664)
			::nape::shape::ShapeIterator tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(664)
			{
				HX_STACK_LINE(664)
				::zpp_nape::util::ZPP_ShapeList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(664)
				tmp2->valmod();
				HX_STACK_LINE(664)
				tmp1 = ::nape::shape::ShapeIterator_obj::get(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(664)
			::nape::shape::ShapeIterator _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(664)
			while((true)){
				HX_STACK_LINE(664)
				bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(664)
				{
					HX_STACK_LINE(664)
					::zpp_nape::util::ZPP_ShapeList tmp3 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(664)
					tmp3->valmod();
					HX_STACK_LINE(664)
					int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(664)
					{
						HX_STACK_LINE(664)
						::nape::shape::ShapeList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(664)
						_this->zpp_inner->valmod();
						HX_STACK_LINE(664)
						bool tmp5 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(664)
						if ((tmp5)){
							HX_STACK_LINE(664)
							_this->zpp_inner->zip_length = false;
							HX_STACK_LINE(664)
							{
								HX_STACK_LINE(664)
								::zpp_nape::util::ZNPList_ZPP_Shape tmp6 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(664)
								_this->zpp_inner->user_length = tmp6->length;
							}
						}
						HX_STACK_LINE(664)
						tmp4 = _this->zpp_inner->user_length;
					}
					HX_STACK_LINE(664)
					int length = tmp4;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(664)
					_g->zpp_critical = true;
					HX_STACK_LINE(664)
					bool tmp5 = (_g->zpp_i < length);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(664)
					if ((tmp5)){
						HX_STACK_LINE(664)
						tmp2 = true;
					}
					else{
						HX_STACK_LINE(664)
						{
							HX_STACK_LINE(664)
							::nape::shape::ShapeIterator tmp6 = ::nape::shape::ShapeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(664)
							_g->zpp_next = tmp6;
							HX_STACK_LINE(664)
							::nape::shape::ShapeIterator_obj::zpp_pool = _g;
							HX_STACK_LINE(664)
							_g->zpp_inner = null();
						}
						HX_STACK_LINE(664)
						tmp2 = false;
					}
				}
				HX_STACK_LINE(664)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(664)
				if ((tmp3)){
					HX_STACK_LINE(664)
					break;
				}
				HX_STACK_LINE(664)
				::nape::shape::Shape tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(664)
				{
					HX_STACK_LINE(664)
					_g->zpp_critical = false;
					HX_STACK_LINE(664)
					int tmp5 = (_g->zpp_i)++;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(664)
					tmp4 = _g->zpp_inner->at(tmp5);
				}
				HX_STACK_LINE(664)
				::nape::shape::Shape i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(664)
				bool tmp5 = deep;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(664)
				::nape::shape::Shape tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(664)
				if ((tmp5)){
					HX_STACK_LINE(668)
					tmp6 = null();
				}
				else{
					HX_STACK_LINE(670)
					tmp6 = i;
				}
				HX_STACK_LINE(664)
				ret->push(tmp6);
			}
		}
		HX_STACK_LINE(671)
		::nape::shape::ShapeList tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(671)
		return tmp1;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(ShapeList_obj,copy,return )

Void ShapeList_obj::merge( ::nape::shape::ShapeList xs){
{
		HX_STACK_FRAME("nape.shape.ShapeList","merge",0x06d88db6,"nape.shape.ShapeList.merge","nape/shape/ShapeList.hx",688,0xf97a5714)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xs,"xs")
		HX_STACK_LINE(688)
		::nape::shape::ShapeIterator tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(688)
		{
			HX_STACK_LINE(688)
			xs->zpp_inner->valmod();
			HX_STACK_LINE(688)
			::nape::shape::ShapeList tmp1 = xs;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(688)
			tmp = ::nape::shape::ShapeIterator_obj::get(tmp1);
		}
		HX_STACK_LINE(688)
		::nape::shape::ShapeIterator _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(688)
		while((true)){
			HX_STACK_LINE(688)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(688)
			{
				HX_STACK_LINE(688)
				::zpp_nape::util::ZPP_ShapeList tmp2 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(688)
				tmp2->valmod();
				HX_STACK_LINE(688)
				int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(688)
				{
					HX_STACK_LINE(688)
					::nape::shape::ShapeList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(688)
					_this->zpp_inner->valmod();
					HX_STACK_LINE(688)
					bool tmp4 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(688)
					if ((tmp4)){
						HX_STACK_LINE(688)
						_this->zpp_inner->zip_length = false;
						HX_STACK_LINE(688)
						{
							HX_STACK_LINE(688)
							::zpp_nape::util::ZNPList_ZPP_Shape tmp5 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(688)
							_this->zpp_inner->user_length = tmp5->length;
						}
					}
					HX_STACK_LINE(688)
					tmp3 = _this->zpp_inner->user_length;
				}
				HX_STACK_LINE(688)
				int length = tmp3;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(688)
				_g->zpp_critical = true;
				HX_STACK_LINE(688)
				bool tmp4 = (_g->zpp_i < length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(688)
				if ((tmp4)){
					HX_STACK_LINE(688)
					tmp1 = true;
				}
				else{
					HX_STACK_LINE(688)
					{
						HX_STACK_LINE(688)
						::nape::shape::ShapeIterator tmp5 = ::nape::shape::ShapeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(688)
						_g->zpp_next = tmp5;
						HX_STACK_LINE(688)
						::nape::shape::ShapeIterator_obj::zpp_pool = _g;
						HX_STACK_LINE(688)
						_g->zpp_inner = null();
					}
					HX_STACK_LINE(688)
					tmp1 = false;
				}
			}
			HX_STACK_LINE(688)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(688)
			if ((tmp2)){
				HX_STACK_LINE(688)
				break;
			}
			HX_STACK_LINE(688)
			::nape::shape::Shape tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(688)
			{
				HX_STACK_LINE(688)
				_g->zpp_critical = false;
				HX_STACK_LINE(688)
				int tmp4 = (_g->zpp_i)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(688)
				tmp3 = _g->zpp_inner->at(tmp4);
			}
			HX_STACK_LINE(688)
			::nape::shape::Shape x = tmp3;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(689)
			::nape::shape::Shape tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(689)
			bool tmp5 = this->has(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(689)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(689)
			if ((tmp6)){
				HX_STACK_LINE(689)
				::zpp_nape::util::ZPP_ShapeList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(689)
				bool tmp8 = tmp7->reverse_flag;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(689)
				if ((tmp8)){
					HX_STACK_LINE(689)
					::nape::shape::Shape tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(689)
					this->push(tmp9);
				}
				else{
					HX_STACK_LINE(689)
					::nape::shape::Shape tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(689)
					this->unshift(tmp9);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ShapeList_obj,merge,(void))

::String ShapeList_obj::toString( ){
	HX_STACK_FRAME("nape.shape.ShapeList","toString",0xcbcf586e,"nape.shape.ShapeList.toString","nape/shape/ShapeList.hx",702,0xf97a5714)
	HX_STACK_THIS(this)
	HX_STACK_LINE(703)
	::String ret = HX_HCSTRING("[","\x5b","\x00","\x00","\x00");		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(704)
	bool fst = true;		HX_STACK_VAR(fst,"fst");
	HX_STACK_LINE(705)
	{
		HX_STACK_LINE(705)
		::nape::shape::ShapeIterator tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(705)
		{
			HX_STACK_LINE(705)
			::zpp_nape::util::ZPP_ShapeList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(705)
			tmp1->valmod();
			HX_STACK_LINE(705)
			tmp = ::nape::shape::ShapeIterator_obj::get(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(705)
		::nape::shape::ShapeIterator _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(705)
		while((true)){
			HX_STACK_LINE(705)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(705)
			{
				HX_STACK_LINE(705)
				::zpp_nape::util::ZPP_ShapeList tmp2 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(705)
				tmp2->valmod();
				HX_STACK_LINE(705)
				int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(705)
				{
					HX_STACK_LINE(705)
					::nape::shape::ShapeList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(705)
					_this->zpp_inner->valmod();
					HX_STACK_LINE(705)
					bool tmp4 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(705)
					if ((tmp4)){
						HX_STACK_LINE(705)
						_this->zpp_inner->zip_length = false;
						HX_STACK_LINE(705)
						{
							HX_STACK_LINE(705)
							::zpp_nape::util::ZNPList_ZPP_Shape tmp5 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(705)
							_this->zpp_inner->user_length = tmp5->length;
						}
					}
					HX_STACK_LINE(705)
					tmp3 = _this->zpp_inner->user_length;
				}
				HX_STACK_LINE(705)
				int length = tmp3;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(705)
				_g->zpp_critical = true;
				HX_STACK_LINE(705)
				bool tmp4 = (_g->zpp_i < length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(705)
				if ((tmp4)){
					HX_STACK_LINE(705)
					tmp1 = true;
				}
				else{
					HX_STACK_LINE(705)
					{
						HX_STACK_LINE(705)
						::nape::shape::ShapeIterator tmp5 = ::nape::shape::ShapeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(705)
						_g->zpp_next = tmp5;
						HX_STACK_LINE(705)
						::nape::shape::ShapeIterator_obj::zpp_pool = _g;
						HX_STACK_LINE(705)
						_g->zpp_inner = null();
					}
					HX_STACK_LINE(705)
					tmp1 = false;
				}
			}
			HX_STACK_LINE(705)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(705)
			if ((tmp2)){
				HX_STACK_LINE(705)
				break;
			}
			HX_STACK_LINE(705)
			::nape::shape::Shape tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(705)
			{
				HX_STACK_LINE(705)
				_g->zpp_critical = false;
				HX_STACK_LINE(705)
				int tmp4 = (_g->zpp_i)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(705)
				tmp3 = _g->zpp_inner->at(tmp4);
			}
			HX_STACK_LINE(705)
			::nape::shape::Shape i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(706)
			bool tmp4 = fst;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(706)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(706)
			if ((tmp5)){
				HX_STACK_LINE(706)
				hx::AddEq(ret,HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
			}
			HX_STACK_LINE(707)
			bool tmp6 = (i == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(707)
			::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(707)
			if ((tmp6)){
				HX_STACK_LINE(707)
				tmp7 = HX_HCSTRING("NULL","\x87","\x66","\xcf","\x33");
			}
			else{
				HX_STACK_LINE(707)
				tmp7 = i->toString();
			}
			HX_STACK_LINE(707)
			hx::AddEq(ret,tmp7);
			HX_STACK_LINE(708)
			fst = false;
		}
	}
	HX_STACK_LINE(710)
	::String tmp = (ret + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(710)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ShapeList_obj,toString,return )

::nape::shape::ShapeList ShapeList_obj::foreach( Dynamic lambda){
	HX_STACK_FRAME("nape.shape.ShapeList","foreach",0xb3862408,"nape.shape.ShapeList.foreach","nape/shape/ShapeList.hx",732,0xf97a5714)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lambda,"lambda")
	HX_STACK_LINE(736)
	::nape::shape::ShapeIterator tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(736)
	{
		HX_STACK_LINE(736)
		::zpp_nape::util::ZPP_ShapeList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(736)
		tmp1->valmod();
		HX_STACK_LINE(736)
		tmp = ::nape::shape::ShapeIterator_obj::get(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(736)
	::nape::shape::ShapeIterator it = tmp;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(737)
	while((true)){
		HX_STACK_LINE(737)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(737)
		{
			HX_STACK_LINE(737)
			::zpp_nape::util::ZPP_ShapeList tmp2 = it->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(737)
			tmp2->valmod();
			HX_STACK_LINE(737)
			int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(737)
			{
				HX_STACK_LINE(737)
				::nape::shape::ShapeList _this = it->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(737)
				_this->zpp_inner->valmod();
				HX_STACK_LINE(737)
				bool tmp4 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(737)
				if ((tmp4)){
					HX_STACK_LINE(737)
					_this->zpp_inner->zip_length = false;
					HX_STACK_LINE(737)
					{
						HX_STACK_LINE(737)
						::zpp_nape::util::ZNPList_ZPP_Shape tmp5 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(737)
						_this->zpp_inner->user_length = tmp5->length;
					}
				}
				HX_STACK_LINE(737)
				tmp3 = _this->zpp_inner->user_length;
			}
			HX_STACK_LINE(737)
			int length = tmp3;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(737)
			it->zpp_critical = true;
			HX_STACK_LINE(737)
			bool tmp4 = (it->zpp_i < length);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(737)
			if ((tmp4)){
				HX_STACK_LINE(737)
				tmp1 = true;
			}
			else{
				HX_STACK_LINE(737)
				{
					HX_STACK_LINE(737)
					::nape::shape::ShapeIterator tmp5 = ::nape::shape::ShapeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(737)
					it->zpp_next = tmp5;
					HX_STACK_LINE(737)
					::nape::shape::ShapeIterator_obj::zpp_pool = it;
					HX_STACK_LINE(737)
					it->zpp_inner = null();
				}
				HX_STACK_LINE(737)
				tmp1 = false;
			}
		}
		HX_STACK_LINE(737)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(737)
		if ((tmp2)){
			HX_STACK_LINE(737)
			break;
		}
		HX_STACK_LINE(738)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(739)
			::nape::shape::Shape tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(739)
			{
				HX_STACK_LINE(739)
				it->zpp_critical = false;
				HX_STACK_LINE(739)
				int tmp4 = (it->zpp_i)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(739)
				tmp3 = it->zpp_inner->at(tmp4);
			}
			HX_STACK_LINE(739)
			lambda(tmp3).Cast< Void >();
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(742)
					{
						HX_STACK_LINE(743)
						::nape::shape::ShapeIterator tmp3 = ::nape::shape::ShapeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(743)
						it->zpp_next = tmp3;
						HX_STACK_LINE(744)
						::nape::shape::ShapeIterator_obj::zpp_pool = it;
						HX_STACK_LINE(745)
						it->zpp_inner = null();
					}
					HX_STACK_LINE(747)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(750)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ShapeList_obj,foreach,return )

::nape::shape::ShapeList ShapeList_obj::filter( Dynamic lambda){
	HX_STACK_FRAME("nape.shape.ShapeList","filter",0x73d0d2fa,"nape.shape.ShapeList.filter","nape/shape/ShapeList.hx",779,0xf97a5714)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lambda,"lambda")
	HX_STACK_LINE(783)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(784)
	while((true)){
		HX_STACK_LINE(784)
		int tmp = i;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(784)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(784)
		{
			HX_STACK_LINE(784)
			::zpp_nape::util::ZPP_ShapeList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(784)
			tmp2->valmod();
			HX_STACK_LINE(784)
			::zpp_nape::util::ZPP_ShapeList tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(784)
			bool tmp4 = tmp3->zip_length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(784)
			if ((tmp4)){
				HX_STACK_LINE(784)
				::zpp_nape::util::ZPP_ShapeList tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(784)
				tmp5->zip_length = false;
				HX_STACK_LINE(784)
				{
					HX_STACK_LINE(784)
					::zpp_nape::util::ZPP_ShapeList tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(784)
					int tmp7 = tmp6->inner->length;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(784)
					::zpp_nape::util::ZPP_ShapeList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(784)
					tmp8->user_length = tmp7;
				}
			}
			HX_STACK_LINE(784)
			::zpp_nape::util::ZPP_ShapeList tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(784)
			tmp1 = tmp5->user_length;
		}
		HX_STACK_LINE(784)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(784)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(784)
		if ((tmp3)){
			HX_STACK_LINE(784)
			break;
		}
		HX_STACK_LINE(785)
		int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(785)
		::nape::shape::Shape tmp5 = this->at(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(785)
		::nape::shape::Shape x = tmp5;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(786)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(787)
			::nape::shape::Shape tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(787)
			bool tmp7 = lambda(tmp6).Cast< bool >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(787)
			if ((tmp7)){
				HX_STACK_LINE(787)
				(i)++;
			}
			else{
				HX_STACK_LINE(788)
				::nape::shape::Shape tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(788)
				this->remove(tmp8);
			}
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(791)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(794)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ShapeList_obj,filter,return )

::nape::shape::ShapeList ShapeList_obj::fromArray( Array< ::Dynamic > array){
	HX_STACK_FRAME("nape.shape.ShapeList","fromArray",0x3b2e99cd,"nape.shape.ShapeList.fromArray","nape/shape/ShapeList.hx",304,0xf97a5714)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(310)
	::nape::shape::ShapeList tmp = ::nape::shape::ShapeList_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(310)
	::nape::shape::ShapeList ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(311)
	{
		HX_STACK_LINE(311)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(311)
		while((true)){
			HX_STACK_LINE(311)
			bool tmp1 = (_g < array->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(311)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(311)
			if ((tmp2)){
				HX_STACK_LINE(311)
				break;
			}
			HX_STACK_LINE(311)
			::nape::shape::Shape tmp3 = array->__get(_g).StaticCast< ::nape::shape::Shape >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(311)
			::nape::shape::Shape i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(311)
			++(_g);
			HX_STACK_LINE(316)
			::nape::shape::Shape tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(316)
			ret->push(tmp4);
		}
	}
	HX_STACK_LINE(318)
	::nape::shape::ShapeList tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(318)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ShapeList_obj,fromArray,return )


ShapeList_obj::ShapeList_obj()
{
}

void ShapeList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShapeList);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void ShapeList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic ShapeList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shift") ) { return shift_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"filter") ) { return filter_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"unshift") ) { return unshift_dyn(); }
		if (HX_FIELD_EQ(inName,"foreach") ) { return foreach_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ShapeList_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromArray") ) { outValue = fromArray_dyn(); return true;  }
	}
	return false;
}

Dynamic ShapeList_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::util::ZPP_ShapeList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShapeList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZPP_ShapeList*/ ,(int)offsetof(ShapeList_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("at","\xf3","\x54","\x00","\x00"),
	HX_HCSTRING("push","\xda","\x11","\x61","\x4a"),
	HX_HCSTRING("unshift","\x89","\xe3","\xb3","\x78"),
	HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"),
	HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("foreach","\x8a","\xfd","\xe4","\xd9"),
	HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShapeList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShapeList_obj::__mClass,"__mClass");
};

#endif

hx::Class ShapeList_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromArray","\xcf","\x57","\x18","\xda"),
	::String(null()) };

void ShapeList_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.shape.ShapeList","\xec","\xd8","\x6b","\x88");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ShapeList_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ShapeList_obj >;
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

} // end namespace nape
} // end namespace shape
