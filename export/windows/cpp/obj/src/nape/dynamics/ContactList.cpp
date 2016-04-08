#include <hxcpp.h>

#ifndef INCLUDED_nape_dynamics_Contact
#include <nape/dynamics/Contact.h>
#endif
#ifndef INCLUDED_nape_dynamics_ContactIterator
#include <nape/dynamics/ContactIterator.h>
#endif
#ifndef INCLUDED_nape_dynamics_ContactList
#include <nape/dynamics/ContactList.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Contact
#include <zpp_nape/dynamics/ZPP_Contact.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ContactList
#include <zpp_nape/util/ZPP_ContactList.h>
#endif
namespace nape{
namespace dynamics{

Void ContactList_obj::__construct()
{
HX_STACK_FRAME("nape.dynamics.ContactList","new",0x4bb1d6dc,"nape.dynamics.ContactList.new","nape/dynamics/ContactList.hx",234,0xd6cc37f4)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(238)
	this->zpp_inner = null();
	HX_STACK_LINE(696)
	::zpp_nape::util::ZPP_ContactList tmp = ::zpp_nape::util::ZPP_ContactList_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(696)
	this->zpp_inner = tmp;
	HX_STACK_LINE(697)
	::zpp_nape::util::ZPP_ContactList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(697)
	tmp1->outer = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//ContactList_obj::~ContactList_obj() { }

Dynamic ContactList_obj::__CreateEmpty() { return  new ContactList_obj; }
hx::ObjectPtr< ContactList_obj > ContactList_obj::__new()
{  hx::ObjectPtr< ContactList_obj > _result_ = new ContactList_obj();
	_result_->__construct();
	return _result_;}

Dynamic ContactList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ContactList_obj > _result_ = new ContactList_obj();
	_result_->__construct();
	return _result_;}

int ContactList_obj::get_length( ){
	HX_STACK_FRAME("nape.dynamics.ContactList","get_length",0x6f0d05b3,"nape.dynamics.ContactList.get_length","nape/dynamics/ContactList.hx",244,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(245)
	::zpp_nape::util::ZPP_ContactList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(245)
	tmp->valmod();
	HX_STACK_LINE(246)
	::zpp_nape::util::ZPP_ContactList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(246)
	bool tmp2 = tmp1->zip_length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(246)
	if ((tmp2)){
		HX_STACK_LINE(247)
		::zpp_nape::util::ZPP_ContactList tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(247)
		tmp3->zip_length = false;
		HX_STACK_LINE(248)
		{
			HX_STACK_LINE(249)
			::zpp_nape::util::ZPP_ContactList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(249)
			tmp4->user_length = (int)0;
			HX_STACK_LINE(250)
			{
				HX_STACK_LINE(251)
				::zpp_nape::util::ZPP_ContactList tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(251)
				::zpp_nape::dynamics::ZPP_Contact tmp6 = tmp5->inner->next;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(251)
				::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp6;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(252)
				while((true)){
					HX_STACK_LINE(252)
					bool tmp7 = (cx_ite != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(252)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(252)
					if ((tmp8)){
						HX_STACK_LINE(252)
						break;
					}
					HX_STACK_LINE(253)
					::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(254)
					bool tmp9 = i->active;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(254)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(254)
					if ((tmp9)){
						HX_STACK_LINE(254)
						tmp10 = i->arbiter->active;
					}
					else{
						HX_STACK_LINE(254)
						tmp10 = false;
					}
					HX_STACK_LINE(254)
					if ((tmp10)){
						HX_STACK_LINE(254)
						::zpp_nape::util::ZPP_ContactList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(254)
						(tmp11->user_length)++;
					}
					HX_STACK_LINE(255)
					cx_ite = cx_ite->next;
				}
			}
		}
	}
	HX_STACK_LINE(261)
	::zpp_nape::util::ZPP_ContactList tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(261)
	int tmp4 = tmp3->user_length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(261)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(ContactList_obj,get_length,return )

bool ContactList_obj::has( ::nape::dynamics::Contact obj){
	HX_STACK_FRAME("nape.dynamics.ContactList","has",0x4bad45d6,"nape.dynamics.ContactList.has","nape/dynamics/ContactList.hx",346,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(347)
	::zpp_nape::util::ZPP_ContactList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(347)
	tmp->valmod();
	HX_STACK_LINE(350)
	::zpp_nape::util::ZPP_ContactList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(350)
	::zpp_nape::dynamics::ZPP_Contact tmp2 = obj->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(350)
	bool tmp3 = tmp1->inner->has(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(350)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,has,return )

::nape::dynamics::Contact ContactList_obj::at( int index){
	HX_STACK_FRAME("nape.dynamics.ContactList","at",0x9593b1f7,"nape.dynamics.ContactList.at","nape/dynamics/ContactList.hx",363,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(364)
	::zpp_nape::util::ZPP_ContactList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(364)
	tmp->valmod();
	HX_STACK_LINE(370)
	::zpp_nape::util::ZPP_ContactList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(370)
	bool tmp2 = tmp1->reverse_flag;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(370)
	if ((tmp2)){
		HX_STACK_LINE(370)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(370)
		{
			HX_STACK_LINE(370)
			::zpp_nape::util::ZPP_ContactList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(370)
			tmp4->valmod();
			HX_STACK_LINE(370)
			::zpp_nape::util::ZPP_ContactList tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(370)
			bool tmp6 = tmp5->zip_length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(370)
			if ((tmp6)){
				HX_STACK_LINE(370)
				::zpp_nape::util::ZPP_ContactList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(370)
				tmp7->zip_length = false;
				HX_STACK_LINE(370)
				{
					HX_STACK_LINE(370)
					::zpp_nape::util::ZPP_ContactList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(370)
					tmp8->user_length = (int)0;
					HX_STACK_LINE(370)
					{
						HX_STACK_LINE(370)
						::zpp_nape::util::ZPP_ContactList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(370)
						::zpp_nape::dynamics::ZPP_Contact tmp10 = tmp9->inner->next;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(370)
						::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp10;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(370)
						while((true)){
							HX_STACK_LINE(370)
							bool tmp11 = (cx_ite != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(370)
							bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(370)
							if ((tmp12)){
								HX_STACK_LINE(370)
								break;
							}
							HX_STACK_LINE(370)
							::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(370)
							bool tmp13 = i->active;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(370)
							bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(370)
							if ((tmp13)){
								HX_STACK_LINE(370)
								tmp14 = i->arbiter->active;
							}
							else{
								HX_STACK_LINE(370)
								tmp14 = false;
							}
							HX_STACK_LINE(370)
							if ((tmp14)){
								HX_STACK_LINE(370)
								::zpp_nape::util::ZPP_ContactList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(370)
								(tmp15->user_length)++;
							}
							HX_STACK_LINE(370)
							cx_ite = cx_ite->next;
						}
					}
				}
			}
			HX_STACK_LINE(370)
			::zpp_nape::util::ZPP_ContactList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
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
	bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(371)
	if ((tmp3)){
		HX_STACK_LINE(372)
		int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(372)
		::zpp_nape::util::ZPP_ContactList tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
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
			::zpp_nape::util::ZPP_ContactList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(372)
			::zpp_nape::util::ZPP_ContactList tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(372)
			::zpp_nape::dynamics::ZPP_Contact tmp12 = tmp11->at_ite;		HX_STACK_VAR(tmp12,"tmp12");
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
			::zpp_nape::util::ZPP_ContactList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(373)
			tmp10->at_index = index;
			HX_STACK_LINE(374)
			::zpp_nape::util::ZPP_ContactList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(374)
			int tmp12 = index;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(374)
			::zpp_nape::dynamics::ZPP_Contact tmp13 = tmp11->inner->iterator_at(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(374)
			::zpp_nape::util::ZPP_ContactList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(374)
			tmp14->at_ite = tmp13;
		}
		else{
			HX_STACK_LINE(377)
			while((true)){
				HX_STACK_LINE(377)
				::zpp_nape::util::ZPP_ContactList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
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
				::zpp_nape::util::ZPP_ContactList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(378)
				(tmp15->at_index)++;
				HX_STACK_LINE(379)
				::zpp_nape::util::ZPP_ContactList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(379)
				::zpp_nape::dynamics::ZPP_Contact tmp17 = tmp16->at_ite->next;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(379)
				::zpp_nape::util::ZPP_ContactList tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(379)
				tmp18->at_ite = tmp17;
			}
		}
	}
	else{
		HX_STACK_LINE(384)
		int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(384)
		::zpp_nape::util::ZPP_ContactList tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
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
			::zpp_nape::util::ZPP_ContactList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(384)
			::zpp_nape::util::ZPP_ContactList tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(384)
			::zpp_nape::dynamics::ZPP_Contact tmp12 = tmp11->at_ite;		HX_STACK_VAR(tmp12,"tmp12");
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
			::zpp_nape::util::ZPP_ContactList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(385)
			tmp10->at_index = (int)0;
			HX_STACK_LINE(386)
			::zpp_nape::util::ZPP_ContactList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(386)
			::zpp_nape::dynamics::ZPP_Contact tmp12 = tmp11->inner->next;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(386)
			::zpp_nape::util::ZPP_ContactList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(386)
			tmp13->at_ite = tmp12;
			HX_STACK_LINE(387)
			while((true)){
				HX_STACK_LINE(388)
				::zpp_nape::util::ZPP_ContactList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(388)
				::zpp_nape::dynamics::ZPP_Contact x = tmp14->at_ite;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(389)
				bool tmp15 = x->active;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(389)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(389)
				if ((tmp15)){
					HX_STACK_LINE(389)
					tmp16 = x->arbiter->active;
				}
				else{
					HX_STACK_LINE(389)
					tmp16 = false;
				}
				HX_STACK_LINE(389)
				if ((tmp16)){
					HX_STACK_LINE(389)
					break;
				}
				HX_STACK_LINE(390)
				::zpp_nape::util::ZPP_ContactList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(390)
				::zpp_nape::dynamics::ZPP_Contact tmp18 = tmp17->at_ite->next;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(390)
				::zpp_nape::util::ZPP_ContactList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(390)
				tmp19->at_ite = tmp18;
			}
		}
		HX_STACK_LINE(393)
		while((true)){
			HX_STACK_LINE(393)
			::zpp_nape::util::ZPP_ContactList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
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
			::zpp_nape::util::ZPP_ContactList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(394)
			(tmp15->at_index)++;
			HX_STACK_LINE(395)
			::zpp_nape::util::ZPP_ContactList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(395)
			::zpp_nape::dynamics::ZPP_Contact tmp17 = tmp16->at_ite->next;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(395)
			::zpp_nape::util::ZPP_ContactList tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(395)
			tmp18->at_ite = tmp17;
			HX_STACK_LINE(396)
			while((true)){
				HX_STACK_LINE(397)
				::zpp_nape::util::ZPP_ContactList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(397)
				::zpp_nape::dynamics::ZPP_Contact x = tmp19->at_ite;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(398)
				bool tmp20 = x->active;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(398)
				bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(398)
				if ((tmp20)){
					HX_STACK_LINE(398)
					tmp21 = x->arbiter->active;
				}
				else{
					HX_STACK_LINE(398)
					tmp21 = false;
				}
				HX_STACK_LINE(398)
				if ((tmp21)){
					HX_STACK_LINE(398)
					break;
				}
				HX_STACK_LINE(399)
				::zpp_nape::util::ZPP_ContactList tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(399)
				::zpp_nape::dynamics::ZPP_Contact tmp23 = tmp22->at_ite->next;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(399)
				::zpp_nape::util::ZPP_ContactList tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(399)
				tmp24->at_ite = tmp23;
			}
		}
	}
	HX_STACK_LINE(403)
	::zpp_nape::util::ZPP_ContactList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(403)
	::nape::dynamics::Contact tmp5 = tmp4->at_ite->wrapper();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(403)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,at,return )

bool ContactList_obj::push( ::nape::dynamics::Contact obj){
	HX_STACK_FRAME("nape.dynamics.ContactList","push",0xf148b7de,"nape.dynamics.ContactList.push","nape/dynamics/ContactList.hx",416,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(420)
	::zpp_nape::util::ZPP_ContactList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(420)
	tmp->modify_test();
	HX_STACK_LINE(421)
	::zpp_nape::util::ZPP_ContactList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(421)
	tmp1->valmod();
	HX_STACK_LINE(424)
	::zpp_nape::util::ZPP_ContactList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(424)
	Dynamic tmp3 = tmp2->adder;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(424)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(424)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(424)
	if ((tmp4)){
		HX_STACK_LINE(424)
		::zpp_nape::util::ZPP_ContactList tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(424)
		::nape::dynamics::Contact tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
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
		::zpp_nape::util::ZPP_ContactList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(426)
		bool tmp8 = tmp7->reverse_flag;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(426)
		if ((tmp8)){
			HX_STACK_LINE(426)
			::zpp_nape::util::ZPP_ContactList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(426)
			::zpp_nape::dynamics::ZPP_Contact tmp10 = obj->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(426)
			tmp9->inner->add(tmp10);
		}
		else{
			HX_STACK_LINE(428)
			::zpp_nape::util::ZPP_ContactList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(428)
			::zpp_nape::dynamics::ZPP_Contact tmp10 = tmp9->push_ite;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(428)
			bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(428)
			if ((tmp11)){
				HX_STACK_LINE(428)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(428)
				{
					HX_STACK_LINE(428)
					int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(428)
					{
						HX_STACK_LINE(428)
						::zpp_nape::util::ZPP_ContactList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(428)
						tmp14->valmod();
						HX_STACK_LINE(428)
						::zpp_nape::util::ZPP_ContactList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(428)
						bool tmp16 = tmp15->zip_length;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(428)
						if ((tmp16)){
							HX_STACK_LINE(428)
							::zpp_nape::util::ZPP_ContactList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(428)
							tmp17->zip_length = false;
							HX_STACK_LINE(428)
							{
								HX_STACK_LINE(428)
								::zpp_nape::util::ZPP_ContactList tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(428)
								tmp18->user_length = (int)0;
								HX_STACK_LINE(428)
								{
									HX_STACK_LINE(428)
									::zpp_nape::util::ZPP_ContactList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(428)
									::zpp_nape::dynamics::ZPP_Contact tmp20 = tmp19->inner->next;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(428)
									::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp20;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(428)
									while((true)){
										HX_STACK_LINE(428)
										bool tmp21 = (cx_ite != null());		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(428)
										bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(428)
										if ((tmp22)){
											HX_STACK_LINE(428)
											break;
										}
										HX_STACK_LINE(428)
										::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(428)
										bool tmp23 = i->active;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(428)
										bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(428)
										if ((tmp23)){
											HX_STACK_LINE(428)
											tmp24 = i->arbiter->active;
										}
										else{
											HX_STACK_LINE(428)
											tmp24 = false;
										}
										HX_STACK_LINE(428)
										if ((tmp24)){
											HX_STACK_LINE(428)
											::zpp_nape::util::ZPP_ContactList tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(428)
											(tmp25->user_length)++;
										}
										HX_STACK_LINE(428)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
						HX_STACK_LINE(428)
						::zpp_nape::util::ZPP_ContactList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(428)
						tmp13 = tmp17->user_length;
					}
					HX_STACK_LINE(428)
					tmp12 = (tmp13 == (int)0);
				}
				HX_STACK_LINE(428)
				::zpp_nape::dynamics::ZPP_Contact tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(428)
				if ((tmp12)){
					HX_STACK_LINE(428)
					tmp13 = null();
				}
				else{
					HX_STACK_LINE(428)
					::zpp_nape::util::ZPP_ContactList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(428)
					int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(428)
					{
						HX_STACK_LINE(428)
						::zpp_nape::util::ZPP_ContactList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(428)
						tmp16->valmod();
						HX_STACK_LINE(428)
						::zpp_nape::util::ZPP_ContactList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(428)
						bool tmp18 = tmp17->zip_length;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(428)
						if ((tmp18)){
							HX_STACK_LINE(428)
							::zpp_nape::util::ZPP_ContactList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(428)
							tmp19->zip_length = false;
							HX_STACK_LINE(428)
							{
								HX_STACK_LINE(428)
								::zpp_nape::util::ZPP_ContactList tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(428)
								tmp20->user_length = (int)0;
								HX_STACK_LINE(428)
								{
									HX_STACK_LINE(428)
									::zpp_nape::util::ZPP_ContactList tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(428)
									::zpp_nape::dynamics::ZPP_Contact tmp22 = tmp21->inner->next;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(428)
									::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp22;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(428)
									while((true)){
										HX_STACK_LINE(428)
										bool tmp23 = (cx_ite != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(428)
										bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(428)
										if ((tmp24)){
											HX_STACK_LINE(428)
											break;
										}
										HX_STACK_LINE(428)
										::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(428)
										bool tmp25 = i->active;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(428)
										bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(428)
										if ((tmp25)){
											HX_STACK_LINE(428)
											tmp26 = i->arbiter->active;
										}
										else{
											HX_STACK_LINE(428)
											tmp26 = false;
										}
										HX_STACK_LINE(428)
										if ((tmp26)){
											HX_STACK_LINE(428)
											::zpp_nape::util::ZPP_ContactList tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(428)
											(tmp27->user_length)++;
										}
										HX_STACK_LINE(428)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
						HX_STACK_LINE(428)
						::zpp_nape::util::ZPP_ContactList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(428)
						tmp15 = tmp19->user_length;
					}
					HX_STACK_LINE(428)
					int tmp16 = (tmp15 - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(428)
					tmp13 = tmp14->inner->iterator_at(tmp16);
				}
				HX_STACK_LINE(428)
				::zpp_nape::util::ZPP_ContactList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(428)
				tmp14->push_ite = tmp13;
			}
			HX_STACK_LINE(429)
			::zpp_nape::util::ZPP_ContactList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(429)
			::zpp_nape::util::ZPP_ContactList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(429)
			::zpp_nape::dynamics::ZPP_Contact tmp14 = tmp13->push_ite;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(429)
			::zpp_nape::dynamics::ZPP_Contact tmp15 = obj->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(429)
			::zpp_nape::dynamics::ZPP_Contact tmp16 = tmp12->inner->insert(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(429)
			::zpp_nape::util::ZPP_ContactList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(429)
			tmp17->push_ite = tmp16;
		}
		HX_STACK_LINE(431)
		::zpp_nape::util::ZPP_ContactList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(431)
		tmp9->invalidate();
		HX_STACK_LINE(432)
		::zpp_nape::util::ZPP_ContactList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(432)
		Dynamic tmp11 = tmp10->post_adder;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(432)
		bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(432)
		if ((tmp12)){
			HX_STACK_LINE(432)
			::zpp_nape::util::ZPP_ContactList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(432)
			::nape::dynamics::Contact tmp14 = obj;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(432)
			tmp13->post_adder(tmp14);
		}
	}
	HX_STACK_LINE(434)
	bool tmp7 = cont;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(434)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,push,return )

bool ContactList_obj::unshift( ::nape::dynamics::Contact obj){
	HX_STACK_FRAME("nape.dynamics.ContactList","unshift",0x983cd805,"nape.dynamics.ContactList.unshift","nape/dynamics/ContactList.hx",447,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(451)
	::zpp_nape::util::ZPP_ContactList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(451)
	tmp->modify_test();
	HX_STACK_LINE(452)
	::zpp_nape::util::ZPP_ContactList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(452)
	tmp1->valmod();
	HX_STACK_LINE(455)
	::zpp_nape::util::ZPP_ContactList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(455)
	Dynamic tmp3 = tmp2->adder;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(455)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(455)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(455)
	if ((tmp4)){
		HX_STACK_LINE(455)
		::zpp_nape::util::ZPP_ContactList tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(455)
		::nape::dynamics::Contact tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
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
		::zpp_nape::util::ZPP_ContactList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(457)
		bool tmp8 = tmp7->reverse_flag;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(457)
		if ((tmp8)){
			HX_STACK_LINE(458)
			::zpp_nape::util::ZPP_ContactList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(458)
			::zpp_nape::dynamics::ZPP_Contact tmp10 = tmp9->push_ite;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(458)
			bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(458)
			if ((tmp11)){
				HX_STACK_LINE(458)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(458)
				{
					HX_STACK_LINE(458)
					int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(458)
					{
						HX_STACK_LINE(458)
						::zpp_nape::util::ZPP_ContactList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(458)
						tmp14->valmod();
						HX_STACK_LINE(458)
						::zpp_nape::util::ZPP_ContactList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(458)
						bool tmp16 = tmp15->zip_length;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(458)
						if ((tmp16)){
							HX_STACK_LINE(458)
							::zpp_nape::util::ZPP_ContactList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(458)
							tmp17->zip_length = false;
							HX_STACK_LINE(458)
							{
								HX_STACK_LINE(458)
								::zpp_nape::util::ZPP_ContactList tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(458)
								tmp18->user_length = (int)0;
								HX_STACK_LINE(458)
								{
									HX_STACK_LINE(458)
									::zpp_nape::util::ZPP_ContactList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(458)
									::zpp_nape::dynamics::ZPP_Contact tmp20 = tmp19->inner->next;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(458)
									::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp20;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(458)
									while((true)){
										HX_STACK_LINE(458)
										bool tmp21 = (cx_ite != null());		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(458)
										bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(458)
										if ((tmp22)){
											HX_STACK_LINE(458)
											break;
										}
										HX_STACK_LINE(458)
										::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(458)
										bool tmp23 = i->active;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(458)
										bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(458)
										if ((tmp23)){
											HX_STACK_LINE(458)
											tmp24 = i->arbiter->active;
										}
										else{
											HX_STACK_LINE(458)
											tmp24 = false;
										}
										HX_STACK_LINE(458)
										if ((tmp24)){
											HX_STACK_LINE(458)
											::zpp_nape::util::ZPP_ContactList tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(458)
											(tmp25->user_length)++;
										}
										HX_STACK_LINE(458)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
						HX_STACK_LINE(458)
						::zpp_nape::util::ZPP_ContactList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(458)
						tmp13 = tmp17->user_length;
					}
					HX_STACK_LINE(458)
					tmp12 = (tmp13 == (int)0);
				}
				HX_STACK_LINE(458)
				::zpp_nape::dynamics::ZPP_Contact tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(458)
				if ((tmp12)){
					HX_STACK_LINE(458)
					tmp13 = null();
				}
				else{
					HX_STACK_LINE(458)
					::zpp_nape::util::ZPP_ContactList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(458)
					int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(458)
					{
						HX_STACK_LINE(458)
						::zpp_nape::util::ZPP_ContactList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(458)
						tmp16->valmod();
						HX_STACK_LINE(458)
						::zpp_nape::util::ZPP_ContactList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(458)
						bool tmp18 = tmp17->zip_length;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(458)
						if ((tmp18)){
							HX_STACK_LINE(458)
							::zpp_nape::util::ZPP_ContactList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(458)
							tmp19->zip_length = false;
							HX_STACK_LINE(458)
							{
								HX_STACK_LINE(458)
								::zpp_nape::util::ZPP_ContactList tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(458)
								tmp20->user_length = (int)0;
								HX_STACK_LINE(458)
								{
									HX_STACK_LINE(458)
									::zpp_nape::util::ZPP_ContactList tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(458)
									::zpp_nape::dynamics::ZPP_Contact tmp22 = tmp21->inner->next;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(458)
									::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp22;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(458)
									while((true)){
										HX_STACK_LINE(458)
										bool tmp23 = (cx_ite != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(458)
										bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(458)
										if ((tmp24)){
											HX_STACK_LINE(458)
											break;
										}
										HX_STACK_LINE(458)
										::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(458)
										bool tmp25 = i->active;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(458)
										bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(458)
										if ((tmp25)){
											HX_STACK_LINE(458)
											tmp26 = i->arbiter->active;
										}
										else{
											HX_STACK_LINE(458)
											tmp26 = false;
										}
										HX_STACK_LINE(458)
										if ((tmp26)){
											HX_STACK_LINE(458)
											::zpp_nape::util::ZPP_ContactList tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(458)
											(tmp27->user_length)++;
										}
										HX_STACK_LINE(458)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
						HX_STACK_LINE(458)
						::zpp_nape::util::ZPP_ContactList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(458)
						tmp15 = tmp19->user_length;
					}
					HX_STACK_LINE(458)
					int tmp16 = (tmp15 - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(458)
					tmp13 = tmp14->inner->iterator_at(tmp16);
				}
				HX_STACK_LINE(458)
				::zpp_nape::util::ZPP_ContactList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(458)
				tmp14->push_ite = tmp13;
			}
			HX_STACK_LINE(459)
			::zpp_nape::util::ZPP_ContactList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(459)
			::zpp_nape::util::ZPP_ContactList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(459)
			::zpp_nape::dynamics::ZPP_Contact tmp14 = tmp13->push_ite;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(459)
			::zpp_nape::dynamics::ZPP_Contact tmp15 = obj->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(459)
			::zpp_nape::dynamics::ZPP_Contact tmp16 = tmp12->inner->insert(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(459)
			::zpp_nape::util::ZPP_ContactList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(459)
			tmp17->push_ite = tmp16;
		}
		else{
			HX_STACK_LINE(461)
			::zpp_nape::util::ZPP_ContactList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(461)
			::zpp_nape::dynamics::ZPP_Contact tmp10 = obj->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(461)
			tmp9->inner->add(tmp10);
		}
		HX_STACK_LINE(462)
		::zpp_nape::util::ZPP_ContactList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(462)
		tmp9->invalidate();
		HX_STACK_LINE(463)
		::zpp_nape::util::ZPP_ContactList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(463)
		Dynamic tmp11 = tmp10->post_adder;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(463)
		bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(463)
		if ((tmp12)){
			HX_STACK_LINE(463)
			::zpp_nape::util::ZPP_ContactList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(463)
			::nape::dynamics::Contact tmp14 = obj;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(463)
			tmp13->post_adder(tmp14);
		}
	}
	HX_STACK_LINE(465)
	bool tmp7 = cont;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(465)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,unshift,return )

::nape::dynamics::Contact ContactList_obj::pop( ){
	HX_STACK_FRAME("nape.dynamics.ContactList","pop",0x4bb3640d,"nape.dynamics.ContactList.pop","nape/dynamics/ContactList.hx",478,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(482)
	::zpp_nape::util::ZPP_ContactList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(482)
	tmp->modify_test();
	HX_STACK_LINE(486)
	::zpp_nape::util::ZPP_ContactList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(486)
	tmp1->valmod();
	HX_STACK_LINE(489)
	::zpp_nape::dynamics::ZPP_Contact ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(490)
	::zpp_nape::util::ZPP_ContactList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(490)
	bool tmp3 = tmp2->reverse_flag;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(490)
	if ((tmp3)){
		HX_STACK_LINE(491)
		::zpp_nape::util::ZPP_ContactList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(491)
		::zpp_nape::dynamics::ZPP_Contact tmp5 = tmp4->inner->next;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(491)
		ret = tmp5;
		HX_STACK_LINE(492)
		::nape::dynamics::Contact tmp6 = ret->wrapper();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(492)
		::nape::dynamics::Contact retx = tmp6;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(493)
		::zpp_nape::util::ZPP_ContactList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(493)
		Dynamic tmp8 = tmp7->subber;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(493)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(493)
		if ((tmp9)){
			HX_STACK_LINE(493)
			::zpp_nape::util::ZPP_ContactList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(493)
			::nape::dynamics::Contact tmp11 = retx;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(493)
			tmp10->subber(tmp11);
		}
		HX_STACK_LINE(494)
		::zpp_nape::util::ZPP_ContactList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(494)
		bool tmp11 = tmp10->dontremove;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(494)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(494)
		if ((tmp12)){
			HX_STACK_LINE(494)
			::zpp_nape::util::ZPP_ContactList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(494)
			tmp13->inner->pop();
		}
	}
	else{
		HX_STACK_LINE(497)
		::zpp_nape::util::ZPP_ContactList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(497)
		::zpp_nape::dynamics::ZPP_Contact tmp5 = tmp4->at_ite;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(497)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(497)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(497)
		if ((tmp6)){
			HX_STACK_LINE(497)
			::zpp_nape::util::ZPP_ContactList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(497)
			::zpp_nape::util::ZPP_ContactList tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(497)
			::zpp_nape::dynamics::ZPP_Contact tmp10 = tmp9->at_ite->next;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(497)
			::zpp_nape::dynamics::ZPP_Contact tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
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
			::zpp_nape::util::ZPP_ContactList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(497)
			tmp8->at_ite = null();
		}
		HX_STACK_LINE(498)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			::zpp_nape::util::ZPP_ContactList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(498)
			tmp9->valmod();
			HX_STACK_LINE(498)
			::zpp_nape::util::ZPP_ContactList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(498)
			bool tmp11 = tmp10->zip_length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(498)
			if ((tmp11)){
				HX_STACK_LINE(498)
				::zpp_nape::util::ZPP_ContactList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(498)
				tmp12->zip_length = false;
				HX_STACK_LINE(498)
				{
					HX_STACK_LINE(498)
					::zpp_nape::util::ZPP_ContactList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(498)
					tmp13->user_length = (int)0;
					HX_STACK_LINE(498)
					{
						HX_STACK_LINE(498)
						::zpp_nape::util::ZPP_ContactList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(498)
						::zpp_nape::dynamics::ZPP_Contact tmp15 = tmp14->inner->next;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(498)
						::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp15;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(498)
						while((true)){
							HX_STACK_LINE(498)
							bool tmp16 = (cx_ite != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(498)
							bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(498)
							if ((tmp17)){
								HX_STACK_LINE(498)
								break;
							}
							HX_STACK_LINE(498)
							::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(498)
							bool tmp18 = i->active;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(498)
							bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(498)
							if ((tmp18)){
								HX_STACK_LINE(498)
								tmp19 = i->arbiter->active;
							}
							else{
								HX_STACK_LINE(498)
								tmp19 = false;
							}
							HX_STACK_LINE(498)
							if ((tmp19)){
								HX_STACK_LINE(498)
								::zpp_nape::util::ZPP_ContactList tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(498)
								(tmp20->user_length)++;
							}
							HX_STACK_LINE(498)
							cx_ite = cx_ite->next;
						}
					}
				}
			}
			HX_STACK_LINE(498)
			::zpp_nape::util::ZPP_ContactList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(498)
			tmp8 = tmp12->user_length;
		}
		HX_STACK_LINE(498)
		bool tmp9 = (tmp8 == (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(498)
		::zpp_nape::dynamics::ZPP_Contact tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(498)
		if ((tmp9)){
			HX_STACK_LINE(498)
			tmp10 = null();
		}
		else{
			HX_STACK_LINE(498)
			::zpp_nape::util::ZPP_ContactList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(498)
			int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(498)
			{
				HX_STACK_LINE(498)
				::zpp_nape::util::ZPP_ContactList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(498)
				tmp13->valmod();
				HX_STACK_LINE(498)
				::zpp_nape::util::ZPP_ContactList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(498)
				bool tmp15 = tmp14->zip_length;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(498)
				if ((tmp15)){
					HX_STACK_LINE(498)
					::zpp_nape::util::ZPP_ContactList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(498)
					tmp16->zip_length = false;
					HX_STACK_LINE(498)
					{
						HX_STACK_LINE(498)
						::zpp_nape::util::ZPP_ContactList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(498)
						tmp17->user_length = (int)0;
						HX_STACK_LINE(498)
						{
							HX_STACK_LINE(498)
							::zpp_nape::util::ZPP_ContactList tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(498)
							::zpp_nape::dynamics::ZPP_Contact tmp19 = tmp18->inner->next;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(498)
							::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp19;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(498)
							while((true)){
								HX_STACK_LINE(498)
								bool tmp20 = (cx_ite != null());		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(498)
								bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(498)
								if ((tmp21)){
									HX_STACK_LINE(498)
									break;
								}
								HX_STACK_LINE(498)
								::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(498)
								bool tmp22 = i->active;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(498)
								bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(498)
								if ((tmp22)){
									HX_STACK_LINE(498)
									tmp23 = i->arbiter->active;
								}
								else{
									HX_STACK_LINE(498)
									tmp23 = false;
								}
								HX_STACK_LINE(498)
								if ((tmp23)){
									HX_STACK_LINE(498)
									::zpp_nape::util::ZPP_ContactList tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(498)
									(tmp24->user_length)++;
								}
								HX_STACK_LINE(498)
								cx_ite = cx_ite->next;
							}
						}
					}
				}
				HX_STACK_LINE(498)
				::zpp_nape::util::ZPP_ContactList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(498)
				tmp12 = tmp16->user_length;
			}
			HX_STACK_LINE(498)
			int tmp13 = (tmp12 - (int)2);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(498)
			tmp10 = tmp11->inner->iterator_at(tmp13);
		}
		HX_STACK_LINE(498)
		::zpp_nape::dynamics::ZPP_Contact ite = tmp10;		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(499)
		bool tmp11 = (ite == null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(499)
		::zpp_nape::dynamics::ZPP_Contact tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(499)
		if ((tmp11)){
			HX_STACK_LINE(499)
			::zpp_nape::util::ZPP_ContactList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(499)
			tmp12 = tmp13->inner->next;
		}
		else{
			HX_STACK_LINE(499)
			tmp12 = ite->next;
		}
		HX_STACK_LINE(499)
		ret = tmp12;
		HX_STACK_LINE(500)
		::nape::dynamics::Contact tmp13 = ret->wrapper();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(500)
		::nape::dynamics::Contact retx = tmp13;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(501)
		::zpp_nape::util::ZPP_ContactList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(501)
		Dynamic tmp15 = tmp14->subber;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(501)
		bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(501)
		if ((tmp16)){
			HX_STACK_LINE(501)
			::zpp_nape::util::ZPP_ContactList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(501)
			::nape::dynamics::Contact tmp18 = retx;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(501)
			tmp17->subber(tmp18);
		}
		HX_STACK_LINE(502)
		::zpp_nape::util::ZPP_ContactList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(502)
		bool tmp18 = tmp17->dontremove;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(502)
		bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(502)
		if ((tmp19)){
			HX_STACK_LINE(502)
			::zpp_nape::util::ZPP_ContactList tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(502)
			::zpp_nape::dynamics::ZPP_Contact tmp21 = ite;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(502)
			tmp20->inner->erase(tmp21);
		}
	}
	HX_STACK_LINE(504)
	::zpp_nape::util::ZPP_ContactList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(504)
	tmp4->invalidate();
	HX_STACK_LINE(505)
	::nape::dynamics::Contact tmp5 = ret->wrapper();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(505)
	::nape::dynamics::Contact retx = tmp5;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(506)
	::nape::dynamics::Contact tmp6 = retx;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(506)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(ContactList_obj,pop,return )

::nape::dynamics::Contact ContactList_obj::shift( ){
	HX_STACK_FRAME("nape.dynamics.ContactList","shift",0xdfec89fe,"nape.dynamics.ContactList.shift","nape/dynamics/ContactList.hx",519,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(523)
	::zpp_nape::util::ZPP_ContactList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(523)
	tmp->modify_test();
	HX_STACK_LINE(527)
	::zpp_nape::util::ZPP_ContactList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(527)
	tmp1->valmod();
	HX_STACK_LINE(530)
	::zpp_nape::dynamics::ZPP_Contact ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(531)
	::zpp_nape::util::ZPP_ContactList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(531)
	bool tmp3 = tmp2->reverse_flag;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(531)
	if ((tmp3)){
		HX_STACK_LINE(532)
		::zpp_nape::util::ZPP_ContactList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(532)
		::zpp_nape::dynamics::ZPP_Contact tmp5 = tmp4->at_ite;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(532)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(532)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(532)
		if ((tmp6)){
			HX_STACK_LINE(532)
			::zpp_nape::util::ZPP_ContactList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(532)
			::zpp_nape::util::ZPP_ContactList tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(532)
			::zpp_nape::dynamics::ZPP_Contact tmp10 = tmp9->at_ite->next;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(532)
			::zpp_nape::dynamics::ZPP_Contact tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
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
			::zpp_nape::util::ZPP_ContactList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(532)
			tmp8->at_ite = null();
		}
		HX_STACK_LINE(533)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(533)
		{
			HX_STACK_LINE(533)
			::zpp_nape::util::ZPP_ContactList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(533)
			tmp9->valmod();
			HX_STACK_LINE(533)
			::zpp_nape::util::ZPP_ContactList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(533)
			bool tmp11 = tmp10->zip_length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(533)
			if ((tmp11)){
				HX_STACK_LINE(533)
				::zpp_nape::util::ZPP_ContactList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(533)
				tmp12->zip_length = false;
				HX_STACK_LINE(533)
				{
					HX_STACK_LINE(533)
					::zpp_nape::util::ZPP_ContactList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(533)
					tmp13->user_length = (int)0;
					HX_STACK_LINE(533)
					{
						HX_STACK_LINE(533)
						::zpp_nape::util::ZPP_ContactList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(533)
						::zpp_nape::dynamics::ZPP_Contact tmp15 = tmp14->inner->next;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(533)
						::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp15;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(533)
						while((true)){
							HX_STACK_LINE(533)
							bool tmp16 = (cx_ite != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(533)
							bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(533)
							if ((tmp17)){
								HX_STACK_LINE(533)
								break;
							}
							HX_STACK_LINE(533)
							::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(533)
							bool tmp18 = i->active;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(533)
							bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(533)
							if ((tmp18)){
								HX_STACK_LINE(533)
								tmp19 = i->arbiter->active;
							}
							else{
								HX_STACK_LINE(533)
								tmp19 = false;
							}
							HX_STACK_LINE(533)
							if ((tmp19)){
								HX_STACK_LINE(533)
								::zpp_nape::util::ZPP_ContactList tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(533)
								(tmp20->user_length)++;
							}
							HX_STACK_LINE(533)
							cx_ite = cx_ite->next;
						}
					}
				}
			}
			HX_STACK_LINE(533)
			::zpp_nape::util::ZPP_ContactList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(533)
			tmp8 = tmp12->user_length;
		}
		HX_STACK_LINE(533)
		bool tmp9 = (tmp8 == (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(533)
		::zpp_nape::dynamics::ZPP_Contact tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(533)
		if ((tmp9)){
			HX_STACK_LINE(533)
			tmp10 = null();
		}
		else{
			HX_STACK_LINE(533)
			::zpp_nape::util::ZPP_ContactList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(533)
			int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(533)
			{
				HX_STACK_LINE(533)
				::zpp_nape::util::ZPP_ContactList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(533)
				tmp13->valmod();
				HX_STACK_LINE(533)
				::zpp_nape::util::ZPP_ContactList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(533)
				bool tmp15 = tmp14->zip_length;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(533)
				if ((tmp15)){
					HX_STACK_LINE(533)
					::zpp_nape::util::ZPP_ContactList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(533)
					tmp16->zip_length = false;
					HX_STACK_LINE(533)
					{
						HX_STACK_LINE(533)
						::zpp_nape::util::ZPP_ContactList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(533)
						tmp17->user_length = (int)0;
						HX_STACK_LINE(533)
						{
							HX_STACK_LINE(533)
							::zpp_nape::util::ZPP_ContactList tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(533)
							::zpp_nape::dynamics::ZPP_Contact tmp19 = tmp18->inner->next;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(533)
							::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp19;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(533)
							while((true)){
								HX_STACK_LINE(533)
								bool tmp20 = (cx_ite != null());		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(533)
								bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(533)
								if ((tmp21)){
									HX_STACK_LINE(533)
									break;
								}
								HX_STACK_LINE(533)
								::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(533)
								bool tmp22 = i->active;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(533)
								bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(533)
								if ((tmp22)){
									HX_STACK_LINE(533)
									tmp23 = i->arbiter->active;
								}
								else{
									HX_STACK_LINE(533)
									tmp23 = false;
								}
								HX_STACK_LINE(533)
								if ((tmp23)){
									HX_STACK_LINE(533)
									::zpp_nape::util::ZPP_ContactList tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(533)
									(tmp24->user_length)++;
								}
								HX_STACK_LINE(533)
								cx_ite = cx_ite->next;
							}
						}
					}
				}
				HX_STACK_LINE(533)
				::zpp_nape::util::ZPP_ContactList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(533)
				tmp12 = tmp16->user_length;
			}
			HX_STACK_LINE(533)
			int tmp13 = (tmp12 - (int)2);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(533)
			tmp10 = tmp11->inner->iterator_at(tmp13);
		}
		HX_STACK_LINE(533)
		::zpp_nape::dynamics::ZPP_Contact ite = tmp10;		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(534)
		bool tmp11 = (ite == null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(534)
		::zpp_nape::dynamics::ZPP_Contact tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(534)
		if ((tmp11)){
			HX_STACK_LINE(534)
			::zpp_nape::util::ZPP_ContactList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(534)
			tmp12 = tmp13->inner->next;
		}
		else{
			HX_STACK_LINE(534)
			tmp12 = ite->next;
		}
		HX_STACK_LINE(534)
		ret = tmp12;
		HX_STACK_LINE(535)
		::nape::dynamics::Contact tmp13 = ret->wrapper();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(535)
		::nape::dynamics::Contact retx = tmp13;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(536)
		::zpp_nape::util::ZPP_ContactList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(536)
		Dynamic tmp15 = tmp14->subber;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(536)
		bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(536)
		if ((tmp16)){
			HX_STACK_LINE(536)
			::zpp_nape::util::ZPP_ContactList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(536)
			::nape::dynamics::Contact tmp18 = retx;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(536)
			tmp17->subber(tmp18);
		}
		HX_STACK_LINE(537)
		::zpp_nape::util::ZPP_ContactList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(537)
		bool tmp18 = tmp17->dontremove;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(537)
		bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(537)
		if ((tmp19)){
			HX_STACK_LINE(537)
			::zpp_nape::util::ZPP_ContactList tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(537)
			::zpp_nape::dynamics::ZPP_Contact tmp21 = ite;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(537)
			tmp20->inner->erase(tmp21);
		}
	}
	else{
		HX_STACK_LINE(540)
		::zpp_nape::util::ZPP_ContactList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(540)
		::zpp_nape::dynamics::ZPP_Contact tmp5 = tmp4->inner->next;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(540)
		ret = tmp5;
		HX_STACK_LINE(541)
		::nape::dynamics::Contact tmp6 = ret->wrapper();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(541)
		::nape::dynamics::Contact retx = tmp6;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(542)
		::zpp_nape::util::ZPP_ContactList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(542)
		Dynamic tmp8 = tmp7->subber;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(542)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(542)
		if ((tmp9)){
			HX_STACK_LINE(542)
			::zpp_nape::util::ZPP_ContactList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(542)
			::nape::dynamics::Contact tmp11 = retx;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(542)
			tmp10->subber(tmp11);
		}
		HX_STACK_LINE(543)
		::zpp_nape::util::ZPP_ContactList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(543)
		bool tmp11 = tmp10->dontremove;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(543)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(543)
		if ((tmp12)){
			HX_STACK_LINE(543)
			::zpp_nape::util::ZPP_ContactList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(543)
			tmp13->inner->pop();
		}
	}
	HX_STACK_LINE(545)
	::zpp_nape::util::ZPP_ContactList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(545)
	tmp4->invalidate();
	HX_STACK_LINE(546)
	::nape::dynamics::Contact tmp5 = ret->wrapper();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(546)
	::nape::dynamics::Contact retx = tmp5;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(547)
	::nape::dynamics::Contact tmp6 = retx;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(547)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(ContactList_obj,shift,return )

bool ContactList_obj::add( ::nape::dynamics::Contact obj){
	HX_STACK_FRAME("nape.dynamics.ContactList","add",0x4ba7f89d,"nape.dynamics.ContactList.add","nape/dynamics/ContactList.hx",563,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(564)
	::zpp_nape::util::ZPP_ContactList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(564)
	bool tmp1 = tmp->reverse_flag;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(564)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(564)
	if ((tmp1)){
		HX_STACK_LINE(564)
		::nape::dynamics::Contact tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(564)
		tmp2 = this->push(tmp3);
	}
	else{
		HX_STACK_LINE(564)
		::nape::dynamics::Contact tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(564)
		tmp2 = this->unshift(tmp3);
	}
	HX_STACK_LINE(564)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,add,return )

bool ContactList_obj::remove( ::nape::dynamics::Contact obj){
	HX_STACK_FRAME("nape.dynamics.ContactList","remove",0xf128cb48,"nape.dynamics.ContactList.remove","nape/dynamics/ContactList.hx",576,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(580)
	::zpp_nape::util::ZPP_ContactList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(580)
	tmp->modify_test();
	HX_STACK_LINE(581)
	::zpp_nape::util::ZPP_ContactList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
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
			::zpp_nape::util::ZPP_ContactList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(588)
			::zpp_nape::dynamics::ZPP_Contact tmp3 = tmp2->inner->next;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(588)
			::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp3;		HX_STACK_VAR(cx_ite,"cx_ite");
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
				::zpp_nape::dynamics::ZPP_Contact x = cx_ite;		HX_STACK_VAR(x,"x");
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
		::zpp_nape::util::ZPP_ContactList tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(602)
		Dynamic tmp4 = tmp3->subber;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(602)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(602)
		if ((tmp5)){
			HX_STACK_LINE(602)
			::zpp_nape::util::ZPP_ContactList tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(602)
			::nape::dynamics::Contact tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(602)
			tmp6->subber(tmp7);
		}
		HX_STACK_LINE(603)
		::zpp_nape::util::ZPP_ContactList tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(603)
		bool tmp7 = tmp6->dontremove;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(603)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(603)
		if ((tmp8)){
			HX_STACK_LINE(603)
			::zpp_nape::util::ZPP_ContactList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(603)
			::zpp_nape::dynamics::ZPP_Contact tmp10 = obj->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(603)
			tmp9->inner->remove(tmp10);
		}
		HX_STACK_LINE(604)
		::zpp_nape::util::ZPP_ContactList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(604)
		tmp9->invalidate();
	}
	HX_STACK_LINE(606)
	bool tmp3 = ret;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(606)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,remove,return )

Void ContactList_obj::clear( ){
{
		HX_STACK_FRAME("nape.dynamics.ContactList","clear",0xac250f09,"nape.dynamics.ContactList.clear","nape/dynamics/ContactList.hx",614,0xd6cc37f4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(618)
		::zpp_nape::util::ZPP_ContactList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
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
					int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(619)
					{
						HX_STACK_LINE(619)
						::zpp_nape::util::ZPP_ContactList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(619)
						tmp4->valmod();
						HX_STACK_LINE(619)
						::zpp_nape::util::ZPP_ContactList tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(619)
						bool tmp6 = tmp5->zip_length;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(619)
						if ((tmp6)){
							HX_STACK_LINE(619)
							::zpp_nape::util::ZPP_ContactList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(619)
							tmp7->zip_length = false;
							HX_STACK_LINE(619)
							{
								HX_STACK_LINE(619)
								::zpp_nape::util::ZPP_ContactList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(619)
								tmp8->user_length = (int)0;
								HX_STACK_LINE(619)
								{
									HX_STACK_LINE(619)
									::zpp_nape::util::ZPP_ContactList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(619)
									::zpp_nape::dynamics::ZPP_Contact tmp10 = tmp9->inner->next;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(619)
									::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp10;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(619)
									while((true)){
										HX_STACK_LINE(619)
										bool tmp11 = (cx_ite != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(619)
										bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(619)
										if ((tmp12)){
											HX_STACK_LINE(619)
											break;
										}
										HX_STACK_LINE(619)
										::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(619)
										bool tmp13 = i->active;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(619)
										bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(619)
										if ((tmp13)){
											HX_STACK_LINE(619)
											tmp14 = i->arbiter->active;
										}
										else{
											HX_STACK_LINE(619)
											tmp14 = false;
										}
										HX_STACK_LINE(619)
										if ((tmp14)){
											HX_STACK_LINE(619)
											::zpp_nape::util::ZPP_ContactList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(619)
											(tmp15->user_length)++;
										}
										HX_STACK_LINE(619)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
						HX_STACK_LINE(619)
						::zpp_nape::util::ZPP_ContactList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(619)
						tmp3 = tmp7->user_length;
					}
					HX_STACK_LINE(619)
					tmp2 = (tmp3 == (int)0);
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
					int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(622)
					{
						HX_STACK_LINE(622)
						::zpp_nape::util::ZPP_ContactList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(622)
						tmp4->valmod();
						HX_STACK_LINE(622)
						::zpp_nape::util::ZPP_ContactList tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(622)
						bool tmp6 = tmp5->zip_length;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(622)
						if ((tmp6)){
							HX_STACK_LINE(622)
							::zpp_nape::util::ZPP_ContactList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(622)
							tmp7->zip_length = false;
							HX_STACK_LINE(622)
							{
								HX_STACK_LINE(622)
								::zpp_nape::util::ZPP_ContactList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(622)
								tmp8->user_length = (int)0;
								HX_STACK_LINE(622)
								{
									HX_STACK_LINE(622)
									::zpp_nape::util::ZPP_ContactList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(622)
									::zpp_nape::dynamics::ZPP_Contact tmp10 = tmp9->inner->next;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(622)
									::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp10;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(622)
									while((true)){
										HX_STACK_LINE(622)
										bool tmp11 = (cx_ite != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(622)
										bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(622)
										if ((tmp12)){
											HX_STACK_LINE(622)
											break;
										}
										HX_STACK_LINE(622)
										::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(622)
										bool tmp13 = i->active;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(622)
										bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(622)
										if ((tmp13)){
											HX_STACK_LINE(622)
											tmp14 = i->arbiter->active;
										}
										else{
											HX_STACK_LINE(622)
											tmp14 = false;
										}
										HX_STACK_LINE(622)
										if ((tmp14)){
											HX_STACK_LINE(622)
											::zpp_nape::util::ZPP_ContactList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(622)
											(tmp15->user_length)++;
										}
										HX_STACK_LINE(622)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
						HX_STACK_LINE(622)
						::zpp_nape::util::ZPP_ContactList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(622)
						tmp3 = tmp7->user_length;
					}
					HX_STACK_LINE(622)
					tmp2 = (tmp3 == (int)0);
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


HX_DEFINE_DYNAMIC_FUNC0(ContactList_obj,clear,(void))

bool ContactList_obj::empty( ){
	HX_STACK_FRAME("nape.dynamics.ContactList","empty",0xd3a3d809,"nape.dynamics.ContactList.empty","nape/dynamics/ContactList.hx",632,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(632)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(632)
	{
		HX_STACK_LINE(632)
		::zpp_nape::util::ZPP_ContactList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(632)
		tmp1->valmod();
		HX_STACK_LINE(632)
		::zpp_nape::util::ZPP_ContactList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(632)
		bool tmp3 = tmp2->zip_length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(632)
		if ((tmp3)){
			HX_STACK_LINE(632)
			::zpp_nape::util::ZPP_ContactList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(632)
			tmp4->zip_length = false;
			HX_STACK_LINE(632)
			{
				HX_STACK_LINE(632)
				::zpp_nape::util::ZPP_ContactList tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(632)
				tmp5->user_length = (int)0;
				HX_STACK_LINE(632)
				{
					HX_STACK_LINE(632)
					::zpp_nape::util::ZPP_ContactList tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(632)
					::zpp_nape::dynamics::ZPP_Contact tmp7 = tmp6->inner->next;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(632)
					::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp7;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(632)
					while((true)){
						HX_STACK_LINE(632)
						bool tmp8 = (cx_ite != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(632)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(632)
						if ((tmp9)){
							HX_STACK_LINE(632)
							break;
						}
						HX_STACK_LINE(632)
						::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(632)
						bool tmp10 = i->active;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(632)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(632)
						if ((tmp10)){
							HX_STACK_LINE(632)
							tmp11 = i->arbiter->active;
						}
						else{
							HX_STACK_LINE(632)
							tmp11 = false;
						}
						HX_STACK_LINE(632)
						if ((tmp11)){
							HX_STACK_LINE(632)
							::zpp_nape::util::ZPP_ContactList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(632)
							(tmp12->user_length)++;
						}
						HX_STACK_LINE(632)
						cx_ite = cx_ite->next;
					}
				}
			}
		}
		HX_STACK_LINE(632)
		::zpp_nape::util::ZPP_ContactList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(632)
		tmp = tmp4->user_length;
	}
	HX_STACK_LINE(632)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(632)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ContactList_obj,empty,return )

::nape::dynamics::ContactIterator ContactList_obj::iterator( ){
	HX_STACK_FRAME("nape.dynamics.ContactList","iterator",0x0be741f2,"nape.dynamics.ContactList.iterator","nape/dynamics/ContactList.hx",647,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(648)
	::zpp_nape::util::ZPP_ContactList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(648)
	tmp->valmod();
	HX_STACK_LINE(651)
	::nape::dynamics::ContactIterator tmp1 = ::nape::dynamics::ContactIterator_obj::get(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(651)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ContactList_obj,iterator,return )

::nape::dynamics::ContactList ContactList_obj::copy( hx::Null< bool >  __o_deep){
bool deep = __o_deep.Default(false);
	HX_STACK_FRAME("nape.dynamics.ContactList","copy",0xe8ac61b9,"nape.dynamics.ContactList.copy","nape/dynamics/ContactList.hx",662,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(deep,"deep")
{
		HX_STACK_LINE(663)
		::nape::dynamics::ContactList tmp = ::nape::dynamics::ContactList_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(663)
		::nape::dynamics::ContactList ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(664)
		{
			HX_STACK_LINE(664)
			::nape::dynamics::ContactIterator tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(664)
			{
				HX_STACK_LINE(664)
				::zpp_nape::util::ZPP_ContactList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(664)
				tmp2->valmod();
				HX_STACK_LINE(664)
				tmp1 = ::nape::dynamics::ContactIterator_obj::get(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(664)
			::nape::dynamics::ContactIterator _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(664)
			while((true)){
				HX_STACK_LINE(664)
				bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(664)
				{
					HX_STACK_LINE(664)
					::zpp_nape::util::ZPP_ContactList tmp3 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(664)
					tmp3->valmod();
					HX_STACK_LINE(664)
					int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(664)
					{
						HX_STACK_LINE(664)
						::nape::dynamics::ContactList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
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
								_this->zpp_inner->user_length = (int)0;
								HX_STACK_LINE(664)
								{
									HX_STACK_LINE(664)
									::zpp_nape::dynamics::ZPP_Contact tmp6 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(664)
									::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp6->next;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(664)
									while((true)){
										HX_STACK_LINE(664)
										bool tmp7 = (cx_ite != null());		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(664)
										bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(664)
										if ((tmp8)){
											HX_STACK_LINE(664)
											break;
										}
										HX_STACK_LINE(664)
										::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(664)
										bool tmp9 = i->active;		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(664)
										bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(664)
										if ((tmp9)){
											HX_STACK_LINE(664)
											tmp10 = i->arbiter->active;
										}
										else{
											HX_STACK_LINE(664)
											tmp10 = false;
										}
										HX_STACK_LINE(664)
										if ((tmp10)){
											HX_STACK_LINE(664)
											(_this->zpp_inner->user_length)++;
										}
										HX_STACK_LINE(664)
										cx_ite = cx_ite->next;
									}
								}
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
							::nape::dynamics::ContactIterator tmp6 = ::nape::dynamics::ContactIterator_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(664)
							_g->zpp_next = tmp6;
							HX_STACK_LINE(664)
							::nape::dynamics::ContactIterator_obj::zpp_pool = _g;
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
				::nape::dynamics::Contact tmp4;		HX_STACK_VAR(tmp4,"tmp4");
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
				::nape::dynamics::Contact i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(664)
				bool tmp5 = deep;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(664)
				::nape::dynamics::Contact tmp6;		HX_STACK_VAR(tmp6,"tmp6");
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
		::nape::dynamics::ContactList tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(671)
		return tmp1;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,copy,return )

Void ContactList_obj::merge( ::nape::dynamics::ContactList xs){
{
		HX_STACK_FRAME("nape.dynamics.ContactList","merge",0x69904034,"nape.dynamics.ContactList.merge","nape/dynamics/ContactList.hx",688,0xd6cc37f4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xs,"xs")
		HX_STACK_LINE(688)
		::nape::dynamics::ContactIterator tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(688)
		{
			HX_STACK_LINE(688)
			xs->zpp_inner->valmod();
			HX_STACK_LINE(688)
			::nape::dynamics::ContactList tmp1 = xs;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(688)
			tmp = ::nape::dynamics::ContactIterator_obj::get(tmp1);
		}
		HX_STACK_LINE(688)
		::nape::dynamics::ContactIterator _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(688)
		while((true)){
			HX_STACK_LINE(688)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(688)
			{
				HX_STACK_LINE(688)
				::zpp_nape::util::ZPP_ContactList tmp2 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(688)
				tmp2->valmod();
				HX_STACK_LINE(688)
				int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(688)
				{
					HX_STACK_LINE(688)
					::nape::dynamics::ContactList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
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
							_this->zpp_inner->user_length = (int)0;
							HX_STACK_LINE(688)
							{
								HX_STACK_LINE(688)
								::zpp_nape::dynamics::ZPP_Contact tmp5 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(688)
								::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp5->next;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(688)
								while((true)){
									HX_STACK_LINE(688)
									bool tmp6 = (cx_ite != null());		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(688)
									bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(688)
									if ((tmp7)){
										HX_STACK_LINE(688)
										break;
									}
									HX_STACK_LINE(688)
									::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(688)
									bool tmp8 = i->active;		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(688)
									bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(688)
									if ((tmp8)){
										HX_STACK_LINE(688)
										tmp9 = i->arbiter->active;
									}
									else{
										HX_STACK_LINE(688)
										tmp9 = false;
									}
									HX_STACK_LINE(688)
									if ((tmp9)){
										HX_STACK_LINE(688)
										(_this->zpp_inner->user_length)++;
									}
									HX_STACK_LINE(688)
									cx_ite = cx_ite->next;
								}
							}
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
						::nape::dynamics::ContactIterator tmp5 = ::nape::dynamics::ContactIterator_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(688)
						_g->zpp_next = tmp5;
						HX_STACK_LINE(688)
						::nape::dynamics::ContactIterator_obj::zpp_pool = _g;
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
			::nape::dynamics::Contact tmp3;		HX_STACK_VAR(tmp3,"tmp3");
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
			::nape::dynamics::Contact x = tmp3;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(689)
			::nape::dynamics::Contact tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(689)
			bool tmp5 = this->has(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(689)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(689)
			if ((tmp6)){
				HX_STACK_LINE(689)
				::zpp_nape::util::ZPP_ContactList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(689)
				bool tmp8 = tmp7->reverse_flag;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(689)
				if ((tmp8)){
					HX_STACK_LINE(689)
					::nape::dynamics::Contact tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(689)
					this->push(tmp9);
				}
				else{
					HX_STACK_LINE(689)
					::nape::dynamics::Contact tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(689)
					this->unshift(tmp9);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,merge,(void))

::String ContactList_obj::toString( ){
	HX_STACK_FRAME("nape.dynamics.ContactList","toString",0xb0bbc8b0,"nape.dynamics.ContactList.toString","nape/dynamics/ContactList.hx",702,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(703)
	::String ret = HX_HCSTRING("[","\x5b","\x00","\x00","\x00");		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(704)
	bool fst = true;		HX_STACK_VAR(fst,"fst");
	HX_STACK_LINE(705)
	{
		HX_STACK_LINE(705)
		::nape::dynamics::ContactIterator tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(705)
		{
			HX_STACK_LINE(705)
			::zpp_nape::util::ZPP_ContactList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(705)
			tmp1->valmod();
			HX_STACK_LINE(705)
			tmp = ::nape::dynamics::ContactIterator_obj::get(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(705)
		::nape::dynamics::ContactIterator _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(705)
		while((true)){
			HX_STACK_LINE(705)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(705)
			{
				HX_STACK_LINE(705)
				::zpp_nape::util::ZPP_ContactList tmp2 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(705)
				tmp2->valmod();
				HX_STACK_LINE(705)
				int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(705)
				{
					HX_STACK_LINE(705)
					::nape::dynamics::ContactList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
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
							_this->zpp_inner->user_length = (int)0;
							HX_STACK_LINE(705)
							{
								HX_STACK_LINE(705)
								::zpp_nape::dynamics::ZPP_Contact tmp5 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(705)
								::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp5->next;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(705)
								while((true)){
									HX_STACK_LINE(705)
									bool tmp6 = (cx_ite != null());		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(705)
									bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(705)
									if ((tmp7)){
										HX_STACK_LINE(705)
										break;
									}
									HX_STACK_LINE(705)
									::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(705)
									bool tmp8 = i->active;		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(705)
									bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(705)
									if ((tmp8)){
										HX_STACK_LINE(705)
										tmp9 = i->arbiter->active;
									}
									else{
										HX_STACK_LINE(705)
										tmp9 = false;
									}
									HX_STACK_LINE(705)
									if ((tmp9)){
										HX_STACK_LINE(705)
										(_this->zpp_inner->user_length)++;
									}
									HX_STACK_LINE(705)
									cx_ite = cx_ite->next;
								}
							}
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
						::nape::dynamics::ContactIterator tmp5 = ::nape::dynamics::ContactIterator_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(705)
						_g->zpp_next = tmp5;
						HX_STACK_LINE(705)
						::nape::dynamics::ContactIterator_obj::zpp_pool = _g;
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
			::nape::dynamics::Contact tmp3;		HX_STACK_VAR(tmp3,"tmp3");
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
			::nape::dynamics::Contact i = tmp3;		HX_STACK_VAR(i,"i");
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


HX_DEFINE_DYNAMIC_FUNC0(ContactList_obj,toString,return )

::nape::dynamics::ContactList ContactList_obj::foreach( Dynamic lambda){
	HX_STACK_FRAME("nape.dynamics.ContactList","foreach",0xf96df206,"nape.dynamics.ContactList.foreach","nape/dynamics/ContactList.hx",732,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lambda,"lambda")
	HX_STACK_LINE(736)
	::nape::dynamics::ContactIterator tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(736)
	{
		HX_STACK_LINE(736)
		::zpp_nape::util::ZPP_ContactList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(736)
		tmp1->valmod();
		HX_STACK_LINE(736)
		tmp = ::nape::dynamics::ContactIterator_obj::get(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(736)
	::nape::dynamics::ContactIterator it = tmp;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(737)
	while((true)){
		HX_STACK_LINE(737)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(737)
		{
			HX_STACK_LINE(737)
			::zpp_nape::util::ZPP_ContactList tmp2 = it->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(737)
			tmp2->valmod();
			HX_STACK_LINE(737)
			int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(737)
			{
				HX_STACK_LINE(737)
				::nape::dynamics::ContactList _this = it->zpp_inner;		HX_STACK_VAR(_this,"_this");
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
						_this->zpp_inner->user_length = (int)0;
						HX_STACK_LINE(737)
						{
							HX_STACK_LINE(737)
							::zpp_nape::dynamics::ZPP_Contact tmp5 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(737)
							::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp5->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(737)
							while((true)){
								HX_STACK_LINE(737)
								bool tmp6 = (cx_ite != null());		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(737)
								bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(737)
								if ((tmp7)){
									HX_STACK_LINE(737)
									break;
								}
								HX_STACK_LINE(737)
								::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(737)
								bool tmp8 = i->active;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(737)
								bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(737)
								if ((tmp8)){
									HX_STACK_LINE(737)
									tmp9 = i->arbiter->active;
								}
								else{
									HX_STACK_LINE(737)
									tmp9 = false;
								}
								HX_STACK_LINE(737)
								if ((tmp9)){
									HX_STACK_LINE(737)
									(_this->zpp_inner->user_length)++;
								}
								HX_STACK_LINE(737)
								cx_ite = cx_ite->next;
							}
						}
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
					::nape::dynamics::ContactIterator tmp5 = ::nape::dynamics::ContactIterator_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(737)
					it->zpp_next = tmp5;
					HX_STACK_LINE(737)
					::nape::dynamics::ContactIterator_obj::zpp_pool = it;
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
			::nape::dynamics::Contact tmp3;		HX_STACK_VAR(tmp3,"tmp3");
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
						::nape::dynamics::ContactIterator tmp3 = ::nape::dynamics::ContactIterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(743)
						it->zpp_next = tmp3;
						HX_STACK_LINE(744)
						::nape::dynamics::ContactIterator_obj::zpp_pool = it;
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


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,foreach,return )

::nape::dynamics::ContactList ContactList_obj::filter( Dynamic lambda){
	HX_STACK_FRAME("nape.dynamics.ContactList","filter",0x71d54ebc,"nape.dynamics.ContactList.filter","nape/dynamics/ContactList.hx",779,0xd6cc37f4)
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
			::zpp_nape::util::ZPP_ContactList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(784)
			tmp2->valmod();
			HX_STACK_LINE(784)
			::zpp_nape::util::ZPP_ContactList tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(784)
			bool tmp4 = tmp3->zip_length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(784)
			if ((tmp4)){
				HX_STACK_LINE(784)
				::zpp_nape::util::ZPP_ContactList tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(784)
				tmp5->zip_length = false;
				HX_STACK_LINE(784)
				{
					HX_STACK_LINE(784)
					::zpp_nape::util::ZPP_ContactList tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(784)
					tmp6->user_length = (int)0;
					HX_STACK_LINE(784)
					{
						HX_STACK_LINE(784)
						::zpp_nape::util::ZPP_ContactList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(784)
						::zpp_nape::dynamics::ZPP_Contact tmp8 = tmp7->inner->next;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(784)
						::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp8;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(784)
						while((true)){
							HX_STACK_LINE(784)
							bool tmp9 = (cx_ite != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(784)
							bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(784)
							if ((tmp10)){
								HX_STACK_LINE(784)
								break;
							}
							HX_STACK_LINE(784)
							::zpp_nape::dynamics::ZPP_Contact i1 = cx_ite;		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(784)
							bool tmp11 = i1->active;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(784)
							bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(784)
							if ((tmp11)){
								HX_STACK_LINE(784)
								tmp12 = i1->arbiter->active;
							}
							else{
								HX_STACK_LINE(784)
								tmp12 = false;
							}
							HX_STACK_LINE(784)
							if ((tmp12)){
								HX_STACK_LINE(784)
								::zpp_nape::util::ZPP_ContactList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(784)
								(tmp13->user_length)++;
							}
							HX_STACK_LINE(784)
							cx_ite = cx_ite->next;
						}
					}
				}
			}
			HX_STACK_LINE(784)
			::zpp_nape::util::ZPP_ContactList tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
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
		::nape::dynamics::Contact tmp5 = this->at(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(785)
		::nape::dynamics::Contact x = tmp5;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(786)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(787)
			::nape::dynamics::Contact tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(787)
			bool tmp7 = lambda(tmp6).Cast< bool >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(787)
			if ((tmp7)){
				HX_STACK_LINE(787)
				(i)++;
			}
			else{
				HX_STACK_LINE(788)
				::nape::dynamics::Contact tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
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


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,filter,return )

::nape::dynamics::ContactList ContactList_obj::fromArray( Array< ::Dynamic > array){
	HX_STACK_FRAME("nape.dynamics.ContactList","fromArray",0xa524634b,"nape.dynamics.ContactList.fromArray","nape/dynamics/ContactList.hx",304,0xd6cc37f4)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(310)
	::nape::dynamics::ContactList tmp = ::nape::dynamics::ContactList_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(310)
	::nape::dynamics::ContactList ret = tmp;		HX_STACK_VAR(ret,"ret");
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
			::nape::dynamics::Contact tmp3 = array->__get(_g).StaticCast< ::nape::dynamics::Contact >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(311)
			::nape::dynamics::Contact i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(311)
			++(_g);
			HX_STACK_LINE(316)
			::nape::dynamics::Contact tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(316)
			ret->push(tmp4);
		}
	}
	HX_STACK_LINE(318)
	::nape::dynamics::ContactList tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(318)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,fromArray,return )


ContactList_obj::ContactList_obj()
{
}

void ContactList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ContactList);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void ContactList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic ContactList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

bool ContactList_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromArray") ) { outValue = fromArray_dyn(); return true;  }
	}
	return false;
}

Dynamic ContactList_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::util::ZPP_ContactList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ContactList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZPP_ContactList*/ ,(int)offsetof(ContactList_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
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
	HX_MARK_MEMBER_NAME(ContactList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ContactList_obj::__mClass,"__mClass");
};

#endif

hx::Class ContactList_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromArray","\xcf","\x57","\x18","\xda"),
	::String(null()) };

void ContactList_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.dynamics.ContactList","\xea","\x78","\x96","\x58");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ContactList_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ContactList_obj >;
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
} // end namespace dynamics
