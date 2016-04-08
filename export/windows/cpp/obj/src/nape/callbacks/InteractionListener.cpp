#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbEvent
#include <nape/callbacks/CbEvent.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionCallback
#include <nape/callbacks/InteractionCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionListener
#include <nape/callbacks/InteractionListener.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionType
#include <nape/callbacks/InteractionType.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_callbacks_OptionType
#include <nape/callbacks/OptionType.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_InteractionListener
#include <zpp_nape/callbacks/ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_OptionType
#include <zpp_nape/callbacks/ZPP_OptionType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace callbacks{

Void InteractionListener_obj::__construct(::nape::callbacks::CbEvent event,::nape::callbacks::InteractionType interactionType,Dynamic options1,Dynamic options2,Dynamic handler,hx::Null< int >  __o_precedence)
{
HX_STACK_FRAME("nape.callbacks.InteractionListener","new",0x015a0bd2,"nape.callbacks.InteractionListener.new","nape/callbacks/InteractionListener.hx",207,0xa06240a0)
HX_STACK_THIS(this)
HX_STACK_ARG(event,"event")
HX_STACK_ARG(interactionType,"interactionType")
HX_STACK_ARG(options1,"options1")
HX_STACK_ARG(options2,"options2")
HX_STACK_ARG(handler,"handler")
HX_STACK_ARG(__o_precedence,"precedence")
int precedence = __o_precedence.Default(0);
{
	HX_STACK_LINE(211)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(342)
	super::__construct();
	HX_STACK_LINE(354)
	int xevent = (int)-1;		HX_STACK_VAR(xevent,"xevent");
	HX_STACK_LINE(355)
	::nape::callbacks::CbEvent tmp = event;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(355)
	::nape::callbacks::CbEvent tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(355)
	{
		HX_STACK_LINE(355)
		::nape::callbacks::CbEvent tmp2 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(355)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(355)
		if ((tmp3)){
			HX_STACK_LINE(355)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(355)
			::nape::callbacks::CbEvent tmp4 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(355)
			::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN = tmp4;
			HX_STACK_LINE(355)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(355)
		tmp1 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN;
	}
	HX_STACK_LINE(355)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(355)
	if ((tmp2)){
		HX_STACK_LINE(355)
		int tmp3 = ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_BEGIN;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(355)
		xevent = tmp3;
	}
	else{
		HX_STACK_LINE(356)
		::nape::callbacks::CbEvent tmp3 = event;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(356)
		::nape::callbacks::CbEvent tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(356)
		{
			HX_STACK_LINE(356)
			::nape::callbacks::CbEvent tmp5 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_END;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(356)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(356)
			if ((tmp6)){
				HX_STACK_LINE(356)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(356)
				::nape::callbacks::CbEvent tmp7 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(356)
				::zpp_nape::util::ZPP_Flags_obj::CbEvent_END = tmp7;
				HX_STACK_LINE(356)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(356)
			tmp4 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_END;
		}
		HX_STACK_LINE(356)
		bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(356)
		if ((tmp5)){
			HX_STACK_LINE(356)
			int tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_END;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(356)
			xevent = tmp6;
		}
		else{
			HX_STACK_LINE(357)
			::nape::callbacks::CbEvent tmp6 = event;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(357)
			::nape::callbacks::CbEvent tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(357)
			{
				HX_STACK_LINE(357)
				::nape::callbacks::CbEvent tmp8 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(357)
				bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(357)
				if ((tmp9)){
					HX_STACK_LINE(357)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(357)
					::nape::callbacks::CbEvent tmp10 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(357)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING = tmp10;
					HX_STACK_LINE(357)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(357)
				tmp7 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING;
			}
			HX_STACK_LINE(357)
			bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(357)
			if ((tmp8)){
				HX_STACK_LINE(357)
				int tmp9 = ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_ONGOING;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(357)
				xevent = tmp9;
			}
			else{
			}
		}
	}
	HX_STACK_LINE(363)
	Dynamic tmp3 = options1;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(363)
	::nape::callbacks::OptionType tmp4 = ::zpp_nape::callbacks::ZPP_OptionType_obj::argument(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(363)
	Dynamic tmp5 = options2;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(363)
	::nape::callbacks::OptionType tmp6 = ::zpp_nape::callbacks::ZPP_OptionType_obj::argument(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(363)
	int tmp7 = xevent;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(363)
	int tmp8 = ::zpp_nape::util::ZPP_Flags_obj::id_ListenerType_INTERACTION;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(363)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp9 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::__new(tmp4,tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(363)
	this->zpp_inner_zn = tmp9;
	HX_STACK_LINE(364)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp10 = this->zpp_inner_zn;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(364)
	this->zpp_inner = tmp10;
	HX_STACK_LINE(365)
	::zpp_nape::callbacks::ZPP_Listener tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(365)
	tmp11->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(366)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp12 = this->zpp_inner_zn;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(366)
	tmp12->outer_zni = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(367)
	::zpp_nape::callbacks::ZPP_Listener tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(367)
	tmp13->precedence = precedence;
	HX_STACK_LINE(368)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp14 = this->zpp_inner_zn;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(368)
	tmp14->handleri = handler;
	HX_STACK_LINE(369)
	{
		HX_STACK_LINE(369)
		{
			HX_STACK_LINE(369)
			::nape::callbacks::InteractionType tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(369)
			{
				HX_STACK_LINE(369)
				::zpp_nape::callbacks::ZPP_InteractionListener tmp16 = this->zpp_inner_zn;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(369)
				int ret = tmp16->itype;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(369)
				int tmp17 = ret;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(369)
				int tmp18 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(369)
				bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(369)
				if ((tmp19)){
					HX_STACK_LINE(369)
					::nape::callbacks::InteractionType tmp20 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(369)
					bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(369)
					if ((tmp21)){
						HX_STACK_LINE(369)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(369)
						::nape::callbacks::InteractionType tmp22 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(369)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = tmp22;
						HX_STACK_LINE(369)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(369)
					tmp15 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
				}
				else{
					HX_STACK_LINE(369)
					int tmp20 = ret;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(369)
					int tmp21 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(369)
					bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(369)
					if ((tmp22)){
						HX_STACK_LINE(369)
						::nape::callbacks::InteractionType tmp23 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(369)
						bool tmp24 = (tmp23 == null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(369)
						if ((tmp24)){
							HX_STACK_LINE(369)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(369)
							::nape::callbacks::InteractionType tmp25 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(369)
							::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = tmp25;
							HX_STACK_LINE(369)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(369)
						tmp15 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
					}
					else{
						HX_STACK_LINE(369)
						int tmp23 = ret;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(369)
						int tmp24 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(369)
						bool tmp25 = (tmp23 == tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(369)
						if ((tmp25)){
							HX_STACK_LINE(369)
							::nape::callbacks::InteractionType tmp26 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(369)
							bool tmp27 = (tmp26 == null());		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(369)
							if ((tmp27)){
								HX_STACK_LINE(369)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(369)
								::nape::callbacks::InteractionType tmp28 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(369)
								::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = tmp28;
								HX_STACK_LINE(369)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(369)
							tmp15 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
						}
						else{
							HX_STACK_LINE(369)
							int tmp26 = ret;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(369)
							int tmp27 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(369)
							bool tmp28 = (tmp26 == tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(369)
							if ((tmp28)){
								HX_STACK_LINE(369)
								::nape::callbacks::InteractionType tmp29 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(369)
								bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(369)
								if ((tmp30)){
									HX_STACK_LINE(369)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(369)
									::nape::callbacks::InteractionType tmp31 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(369)
									::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY = tmp31;
									HX_STACK_LINE(369)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(369)
								tmp15 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
							}
							else{
								HX_STACK_LINE(369)
								tmp15 = null();
							}
						}
					}
				}
			}
			HX_STACK_LINE(369)
			::nape::callbacks::InteractionType tmp16 = interactionType;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(369)
			bool tmp17 = (tmp15 != tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(369)
			if ((tmp17)){
				HX_STACK_LINE(369)
				::nape::callbacks::InteractionType tmp18 = interactionType;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(369)
				::nape::callbacks::InteractionType tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(369)
				{
					HX_STACK_LINE(369)
					::nape::callbacks::InteractionType tmp20 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(369)
					bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(369)
					if ((tmp21)){
						HX_STACK_LINE(369)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(369)
						::nape::callbacks::InteractionType tmp22 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(369)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = tmp22;
						HX_STACK_LINE(369)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(369)
					tmp19 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
				}
				HX_STACK_LINE(369)
				bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(369)
				int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(369)
				if ((tmp20)){
					HX_STACK_LINE(369)
					tmp21 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION;
				}
				else{
					HX_STACK_LINE(369)
					::nape::callbacks::InteractionType tmp22 = interactionType;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(369)
					::nape::callbacks::InteractionType tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(369)
					{
						HX_STACK_LINE(369)
						::nape::callbacks::InteractionType tmp24 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(369)
						bool tmp25 = (tmp24 == null());		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(369)
						if ((tmp25)){
							HX_STACK_LINE(369)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(369)
							::nape::callbacks::InteractionType tmp26 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(369)
							::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = tmp26;
							HX_STACK_LINE(369)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(369)
						tmp23 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
					}
					HX_STACK_LINE(369)
					bool tmp24 = (tmp22 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(369)
					if ((tmp24)){
						HX_STACK_LINE(369)
						tmp21 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR;
					}
					else{
						HX_STACK_LINE(369)
						::nape::callbacks::InteractionType tmp25 = interactionType;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(369)
						::nape::callbacks::InteractionType tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(369)
						{
							HX_STACK_LINE(369)
							::nape::callbacks::InteractionType tmp27 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(369)
							bool tmp28 = (tmp27 == null());		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(369)
							if ((tmp28)){
								HX_STACK_LINE(369)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(369)
								::nape::callbacks::InteractionType tmp29 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(369)
								::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = tmp29;
								HX_STACK_LINE(369)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(369)
							tmp26 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
						}
						HX_STACK_LINE(369)
						bool tmp27 = (tmp25 == tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(369)
						if ((tmp27)){
							HX_STACK_LINE(369)
							tmp21 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID;
						}
						else{
							HX_STACK_LINE(369)
							tmp21 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY;
						}
					}
				}
				HX_STACK_LINE(369)
				int xtype = tmp21;		HX_STACK_VAR(xtype,"xtype");
				HX_STACK_LINE(369)
				{
					HX_STACK_LINE(369)
					::zpp_nape::callbacks::ZPP_InteractionListener tmp22 = this->zpp_inner_zn;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(369)
					tmp22->itype = xtype;
				}
			}
		}
		HX_STACK_LINE(369)
		{
			HX_STACK_LINE(369)
			::zpp_nape::callbacks::ZPP_InteractionListener tmp15 = this->zpp_inner_zn;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(369)
			int ret = tmp15->itype;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(369)
			int tmp16 = ret;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(369)
			int tmp17 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(369)
			bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(369)
			if ((tmp18)){
				HX_STACK_LINE(369)
				::nape::callbacks::InteractionType tmp19 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(369)
				bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(369)
				if ((tmp20)){
					HX_STACK_LINE(369)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(369)
					::nape::callbacks::InteractionType tmp21 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(369)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = tmp21;
					HX_STACK_LINE(369)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(369)
				::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
			}
			else{
				HX_STACK_LINE(369)
				int tmp19 = ret;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(369)
				int tmp20 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(369)
				bool tmp21 = (tmp19 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(369)
				if ((tmp21)){
					HX_STACK_LINE(369)
					::nape::callbacks::InteractionType tmp22 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(369)
					bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(369)
					if ((tmp23)){
						HX_STACK_LINE(369)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(369)
						::nape::callbacks::InteractionType tmp24 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(369)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = tmp24;
						HX_STACK_LINE(369)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(369)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
				}
				else{
					HX_STACK_LINE(369)
					int tmp22 = ret;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(369)
					int tmp23 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(369)
					bool tmp24 = (tmp22 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(369)
					if ((tmp24)){
						HX_STACK_LINE(369)
						::nape::callbacks::InteractionType tmp25 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(369)
						bool tmp26 = (tmp25 == null());		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(369)
						if ((tmp26)){
							HX_STACK_LINE(369)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(369)
							::nape::callbacks::InteractionType tmp27 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(369)
							::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = tmp27;
							HX_STACK_LINE(369)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(369)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
					}
					else{
						HX_STACK_LINE(369)
						int tmp25 = ret;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(369)
						int tmp26 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(369)
						bool tmp27 = (tmp25 == tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(369)
						if ((tmp27)){
							HX_STACK_LINE(369)
							::nape::callbacks::InteractionType tmp28 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(369)
							bool tmp29 = (tmp28 == null());		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(369)
							if ((tmp29)){
								HX_STACK_LINE(369)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(369)
								::nape::callbacks::InteractionType tmp30 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(369)
								::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY = tmp30;
								HX_STACK_LINE(369)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(369)
							::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
						}
						else{
							HX_STACK_LINE(369)
							Dynamic();
						}
					}
				}
			}
		}
	}
}
;
	return null();
}

//InteractionListener_obj::~InteractionListener_obj() { }

Dynamic InteractionListener_obj::__CreateEmpty() { return  new InteractionListener_obj; }
hx::ObjectPtr< InteractionListener_obj > InteractionListener_obj::__new(::nape::callbacks::CbEvent event,::nape::callbacks::InteractionType interactionType,Dynamic options1,Dynamic options2,Dynamic handler,hx::Null< int >  __o_precedence)
{  hx::ObjectPtr< InteractionListener_obj > _result_ = new InteractionListener_obj();
	_result_->__construct(event,interactionType,options1,options2,handler,__o_precedence);
	return _result_;}

Dynamic InteractionListener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InteractionListener_obj > _result_ = new InteractionListener_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

::nape::callbacks::OptionType InteractionListener_obj::get_options1( ){
	HX_STACK_FRAME("nape.callbacks.InteractionListener","get_options1",0x4c8c396a,"nape.callbacks.InteractionListener.get_options1","nape/callbacks/InteractionListener.hx",217,0xa06240a0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(218)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(218)
	::nape::callbacks::OptionType tmp1 = tmp->options1->outer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(218)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionListener_obj,get_options1,return )

::nape::callbacks::OptionType InteractionListener_obj::set_options1( ::nape::callbacks::OptionType options1){
	HX_STACK_FRAME("nape.callbacks.InteractionListener","set_options1",0x61855cde,"nape.callbacks.InteractionListener.set_options1","nape/callbacks/InteractionListener.hx",220,0xa06240a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options1,"options1")
	HX_STACK_LINE(221)
	{
		HX_STACK_LINE(222)
		::zpp_nape::callbacks::ZPP_InteractionListener tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(222)
		::zpp_nape::callbacks::ZPP_OptionType tmp1 = options1->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(222)
		tmp->options1->set(tmp1);
	}
	HX_STACK_LINE(224)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(224)
	::nape::callbacks::OptionType tmp1 = tmp->options1->outer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(224)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionListener_obj,set_options1,return )

::nape::callbacks::OptionType InteractionListener_obj::get_options2( ){
	HX_STACK_FRAME("nape.callbacks.InteractionListener","get_options2",0x4c8c396b,"nape.callbacks.InteractionListener.get_options2","nape/callbacks/InteractionListener.hx",231,0xa06240a0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(232)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(232)
	::nape::callbacks::OptionType tmp1 = tmp->options2->outer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(232)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionListener_obj,get_options2,return )

::nape::callbacks::OptionType InteractionListener_obj::set_options2( ::nape::callbacks::OptionType options2){
	HX_STACK_FRAME("nape.callbacks.InteractionListener","set_options2",0x61855cdf,"nape.callbacks.InteractionListener.set_options2","nape/callbacks/InteractionListener.hx",234,0xa06240a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options2,"options2")
	HX_STACK_LINE(235)
	{
		HX_STACK_LINE(236)
		::zpp_nape::callbacks::ZPP_InteractionListener tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(236)
		::zpp_nape::callbacks::ZPP_OptionType tmp1 = options2->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(236)
		tmp->options2->set(tmp1);
	}
	HX_STACK_LINE(238)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(238)
	::nape::callbacks::OptionType tmp1 = tmp->options2->outer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(238)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionListener_obj,set_options2,return )

::nape::callbacks::InteractionType InteractionListener_obj::get_interactionType( ){
	HX_STACK_FRAME("nape.callbacks.InteractionListener","get_interactionType",0x02d33635,"nape.callbacks.InteractionListener.get_interactionType","nape/callbacks/InteractionListener.hx",249,0xa06240a0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(250)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(250)
	int ret = tmp->itype;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(251)
	int tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(251)
	int tmp2 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(251)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(251)
	::nape::callbacks::InteractionType tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(251)
	if ((tmp3)){
		HX_STACK_LINE(251)
		::nape::callbacks::InteractionType tmp5 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(251)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(251)
		if ((tmp6)){
			HX_STACK_LINE(251)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(251)
			::nape::callbacks::InteractionType tmp7 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(251)
			::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = tmp7;
			HX_STACK_LINE(251)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(251)
		tmp4 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
	}
	else{
		HX_STACK_LINE(252)
		int tmp5 = ret;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(252)
		int tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(252)
		bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(252)
		if ((tmp7)){
			HX_STACK_LINE(252)
			::nape::callbacks::InteractionType tmp8 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(252)
			bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(252)
			if ((tmp9)){
				HX_STACK_LINE(252)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(252)
				::nape::callbacks::InteractionType tmp10 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(252)
				::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = tmp10;
				HX_STACK_LINE(252)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(252)
			tmp4 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
		}
		else{
			HX_STACK_LINE(253)
			int tmp8 = ret;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(253)
			int tmp9 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(253)
			bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(253)
			if ((tmp10)){
				HX_STACK_LINE(253)
				::nape::callbacks::InteractionType tmp11 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(253)
				bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(253)
				if ((tmp12)){
					HX_STACK_LINE(253)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(253)
					::nape::callbacks::InteractionType tmp13 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(253)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = tmp13;
					HX_STACK_LINE(253)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(253)
				tmp4 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
			}
			else{
				HX_STACK_LINE(254)
				int tmp11 = ret;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(254)
				int tmp12 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(254)
				bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(254)
				if ((tmp13)){
					HX_STACK_LINE(254)
					::nape::callbacks::InteractionType tmp14 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(254)
					bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(254)
					if ((tmp15)){
						HX_STACK_LINE(254)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(254)
						::nape::callbacks::InteractionType tmp16 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(254)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY = tmp16;
						HX_STACK_LINE(254)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(254)
					tmp4 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
				}
				else{
					HX_STACK_LINE(255)
					tmp4 = null();
				}
			}
		}
	}
	HX_STACK_LINE(251)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionListener_obj,get_interactionType,return )

::nape::callbacks::InteractionType InteractionListener_obj::set_interactionType( ::nape::callbacks::InteractionType interactionType){
	HX_STACK_FRAME("nape.callbacks.InteractionListener","set_interactionType",0x3f702941,"nape.callbacks.InteractionListener.set_interactionType","nape/callbacks/InteractionListener.hx",257,0xa06240a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(interactionType,"interactionType")
	HX_STACK_LINE(258)
	{
		HX_STACK_LINE(264)
		::nape::callbacks::InteractionType tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(264)
		{
			HX_STACK_LINE(264)
			::zpp_nape::callbacks::ZPP_InteractionListener tmp1 = this->zpp_inner_zn;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(264)
			int ret = tmp1->itype;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(264)
			int tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(264)
			int tmp3 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(264)
			bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(264)
			if ((tmp4)){
				HX_STACK_LINE(264)
				::nape::callbacks::InteractionType tmp5 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(264)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(264)
				if ((tmp6)){
					HX_STACK_LINE(264)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(264)
					::nape::callbacks::InteractionType tmp7 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(264)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = tmp7;
					HX_STACK_LINE(264)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(264)
				tmp = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
			}
			else{
				HX_STACK_LINE(264)
				int tmp5 = ret;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(264)
				int tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(264)
				bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(264)
				if ((tmp7)){
					HX_STACK_LINE(264)
					::nape::callbacks::InteractionType tmp8 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(264)
					bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(264)
					if ((tmp9)){
						HX_STACK_LINE(264)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(264)
						::nape::callbacks::InteractionType tmp10 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(264)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = tmp10;
						HX_STACK_LINE(264)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(264)
					tmp = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
				}
				else{
					HX_STACK_LINE(264)
					int tmp8 = ret;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(264)
					int tmp9 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(264)
					bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(264)
					if ((tmp10)){
						HX_STACK_LINE(264)
						::nape::callbacks::InteractionType tmp11 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(264)
						bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(264)
						if ((tmp12)){
							HX_STACK_LINE(264)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(264)
							::nape::callbacks::InteractionType tmp13 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(264)
							::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = tmp13;
							HX_STACK_LINE(264)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(264)
						tmp = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
					}
					else{
						HX_STACK_LINE(264)
						int tmp11 = ret;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(264)
						int tmp12 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(264)
						bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(264)
						if ((tmp13)){
							HX_STACK_LINE(264)
							::nape::callbacks::InteractionType tmp14 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(264)
							bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(264)
							if ((tmp15)){
								HX_STACK_LINE(264)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(264)
								::nape::callbacks::InteractionType tmp16 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(264)
								::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY = tmp16;
								HX_STACK_LINE(264)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(264)
							tmp = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
						}
						else{
							HX_STACK_LINE(264)
							tmp = null();
						}
					}
				}
			}
		}
		HX_STACK_LINE(264)
		::nape::callbacks::InteractionType tmp1 = interactionType;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(264)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(264)
		if ((tmp2)){
			HX_STACK_LINE(265)
			::nape::callbacks::InteractionType tmp3 = interactionType;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(265)
			::nape::callbacks::InteractionType tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(265)
			{
				HX_STACK_LINE(265)
				::nape::callbacks::InteractionType tmp5 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(265)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(265)
				if ((tmp6)){
					HX_STACK_LINE(265)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(265)
					::nape::callbacks::InteractionType tmp7 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(265)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = tmp7;
					HX_STACK_LINE(265)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(265)
				tmp4 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
			}
			HX_STACK_LINE(265)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(265)
			int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(265)
			if ((tmp5)){
				HX_STACK_LINE(265)
				tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION;
			}
			else{
				HX_STACK_LINE(265)
				::nape::callbacks::InteractionType tmp7 = interactionType;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(265)
				::nape::callbacks::InteractionType tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(265)
				{
					HX_STACK_LINE(265)
					::nape::callbacks::InteractionType tmp9 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(265)
					bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(265)
					if ((tmp10)){
						HX_STACK_LINE(265)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(265)
						::nape::callbacks::InteractionType tmp11 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(265)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = tmp11;
						HX_STACK_LINE(265)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(265)
					tmp8 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
				}
				HX_STACK_LINE(265)
				bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(265)
				if ((tmp9)){
					HX_STACK_LINE(265)
					tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR;
				}
				else{
					HX_STACK_LINE(265)
					::nape::callbacks::InteractionType tmp10 = interactionType;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(265)
					::nape::callbacks::InteractionType tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(265)
					{
						HX_STACK_LINE(265)
						::nape::callbacks::InteractionType tmp12 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(265)
						bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(265)
						if ((tmp13)){
							HX_STACK_LINE(265)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(265)
							::nape::callbacks::InteractionType tmp14 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(265)
							::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = tmp14;
							HX_STACK_LINE(265)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(265)
						tmp11 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
					}
					HX_STACK_LINE(265)
					bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(265)
					if ((tmp12)){
						HX_STACK_LINE(265)
						tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID;
					}
					else{
						HX_STACK_LINE(265)
						tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY;
					}
				}
			}
			HX_STACK_LINE(265)
			int xtype = tmp6;		HX_STACK_VAR(xtype,"xtype");
			HX_STACK_LINE(266)
			{
				HX_STACK_LINE(266)
				::zpp_nape::callbacks::ZPP_InteractionListener tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(266)
				tmp7->itype = xtype;
			}
		}
	}
	HX_STACK_LINE(269)
	::nape::callbacks::InteractionType tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(269)
	{
		HX_STACK_LINE(269)
		::zpp_nape::callbacks::ZPP_InteractionListener tmp1 = this->zpp_inner_zn;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(269)
		int ret = tmp1->itype;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(269)
		int tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(269)
		int tmp3 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(269)
		bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(269)
		if ((tmp4)){
			HX_STACK_LINE(269)
			::nape::callbacks::InteractionType tmp5 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(269)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(269)
			if ((tmp6)){
				HX_STACK_LINE(269)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(269)
				::nape::callbacks::InteractionType tmp7 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(269)
				::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = tmp7;
				HX_STACK_LINE(269)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(269)
			tmp = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
		}
		else{
			HX_STACK_LINE(269)
			int tmp5 = ret;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(269)
			int tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(269)
			bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(269)
			if ((tmp7)){
				HX_STACK_LINE(269)
				::nape::callbacks::InteractionType tmp8 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(269)
				bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(269)
				if ((tmp9)){
					HX_STACK_LINE(269)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(269)
					::nape::callbacks::InteractionType tmp10 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(269)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = tmp10;
					HX_STACK_LINE(269)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(269)
				tmp = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
			}
			else{
				HX_STACK_LINE(269)
				int tmp8 = ret;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(269)
				int tmp9 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(269)
				bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(269)
				if ((tmp10)){
					HX_STACK_LINE(269)
					::nape::callbacks::InteractionType tmp11 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(269)
					bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(269)
					if ((tmp12)){
						HX_STACK_LINE(269)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(269)
						::nape::callbacks::InteractionType tmp13 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(269)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = tmp13;
						HX_STACK_LINE(269)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(269)
					tmp = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
				}
				else{
					HX_STACK_LINE(269)
					int tmp11 = ret;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(269)
					int tmp12 = ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(269)
					bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(269)
					if ((tmp13)){
						HX_STACK_LINE(269)
						::nape::callbacks::InteractionType tmp14 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(269)
						bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(269)
						if ((tmp15)){
							HX_STACK_LINE(269)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(269)
							::nape::callbacks::InteractionType tmp16 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(269)
							::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY = tmp16;
							HX_STACK_LINE(269)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(269)
						tmp = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
					}
					else{
						HX_STACK_LINE(269)
						tmp = null();
					}
				}
			}
		}
	}
	HX_STACK_LINE(269)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionListener_obj,set_interactionType,return )

Dynamic InteractionListener_obj::get_handler( ){
	HX_STACK_FRAME("nape.callbacks.InteractionListener","get_handler",0xd58a0d53,"nape.callbacks.InteractionListener.get_handler","nape/callbacks/InteractionListener.hx",276,0xa06240a0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(277)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(277)
	Dynamic tmp1 = tmp->handleri;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(277)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionListener_obj,get_handler,return )

Dynamic InteractionListener_obj::set_handler( Dynamic handler){
	HX_STACK_FRAME("nape.callbacks.InteractionListener","set_handler",0xdff7145f,"nape.callbacks.InteractionListener.set_handler","nape/callbacks/InteractionListener.hx",279,0xa06240a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(280)
	{
		HX_STACK_LINE(286)
		::zpp_nape::callbacks::ZPP_InteractionListener tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(286)
		tmp->handleri = handler;
	}
	HX_STACK_LINE(288)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(288)
	Dynamic tmp1 = tmp->handleri;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(288)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionListener_obj,set_handler,return )

bool InteractionListener_obj::get_allowSleepingCallbacks( ){
	HX_STACK_FRAME("nape.callbacks.InteractionListener","get_allowSleepingCallbacks",0xaced5331,"nape.callbacks.InteractionListener.get_allowSleepingCallbacks","nape/callbacks/InteractionListener.hx",300,0xa06240a0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(301)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(301)
	bool tmp1 = tmp->allowSleepingCallbacks;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(301)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionListener_obj,get_allowSleepingCallbacks,return )

bool InteractionListener_obj::set_allowSleepingCallbacks( bool allowSleepingCallbacks){
	HX_STACK_FRAME("nape.callbacks.InteractionListener","set_allowSleepingCallbacks",0x0c8219a5,"nape.callbacks.InteractionListener.set_allowSleepingCallbacks","nape/callbacks/InteractionListener.hx",303,0xa06240a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(allowSleepingCallbacks,"allowSleepingCallbacks")
	HX_STACK_LINE(304)
	{
		HX_STACK_LINE(305)
		::zpp_nape::callbacks::ZPP_InteractionListener tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(305)
		tmp->allowSleepingCallbacks = allowSleepingCallbacks;
	}
	HX_STACK_LINE(307)
	::zpp_nape::callbacks::ZPP_InteractionListener tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(307)
	bool tmp1 = tmp->allowSleepingCallbacks;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(307)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionListener_obj,set_allowSleepingCallbacks,return )


InteractionListener_obj::InteractionListener_obj()
{
}

void InteractionListener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InteractionListener);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::callbacks::Listener_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void InteractionListener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::callbacks::Listener_obj::__Visit(HX_VISIT_ARG);
}

Dynamic InteractionListener_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { if (inCallProp == hx::paccAlways) return get_handler(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"options1") ) { if (inCallProp == hx::paccAlways) return get_options1(); }
		if (HX_FIELD_EQ(inName,"options2") ) { if (inCallProp == hx::paccAlways) return get_options2(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_handler") ) { return get_handler_dyn(); }
		if (HX_FIELD_EQ(inName,"set_handler") ) { return set_handler_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { return zpp_inner_zn; }
		if (HX_FIELD_EQ(inName,"get_options1") ) { return get_options1_dyn(); }
		if (HX_FIELD_EQ(inName,"set_options1") ) { return set_options1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_options2") ) { return get_options2_dyn(); }
		if (HX_FIELD_EQ(inName,"set_options2") ) { return set_options2_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"interactionType") ) { if (inCallProp == hx::paccAlways) return get_interactionType(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_interactionType") ) { return get_interactionType_dyn(); }
		if (HX_FIELD_EQ(inName,"set_interactionType") ) { return set_interactionType_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"allowSleepingCallbacks") ) { if (inCallProp == hx::paccAlways) return get_allowSleepingCallbacks(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"get_allowSleepingCallbacks") ) { return get_allowSleepingCallbacks_dyn(); }
		if (HX_FIELD_EQ(inName,"set_allowSleepingCallbacks") ) { return set_allowSleepingCallbacks_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InteractionListener_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { if (inCallProp == hx::paccAlways) return set_handler(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"options1") ) { if (inCallProp == hx::paccAlways) return set_options1(inValue); }
		if (HX_FIELD_EQ(inName,"options2") ) { if (inCallProp == hx::paccAlways) return set_options2(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::callbacks::ZPP_InteractionListener >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"interactionType") ) { if (inCallProp == hx::paccAlways) return set_interactionType(inValue); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"allowSleepingCallbacks") ) { if (inCallProp == hx::paccAlways) return set_allowSleepingCallbacks(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InteractionListener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0"));
	outFields->push(HX_HCSTRING("options1","\x13","\xbf","\x6e","\x1e"));
	outFields->push(HX_HCSTRING("options2","\x14","\xbf","\x6e","\x1e"));
	outFields->push(HX_HCSTRING("interactionType","\xac","\xa7","\xc8","\x08"));
	outFields->push(HX_HCSTRING("allowSleepingCallbacks","\x9a","\x0e","\x6b","\x5a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_InteractionListener*/ ,(int)offsetof(InteractionListener_obj,zpp_inner_zn),HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0"),
	HX_HCSTRING("get_options1","\x1c","\x73","\x88","\xd3"),
	HX_HCSTRING("set_options1","\x90","\x96","\x81","\xe8"),
	HX_HCSTRING("get_options2","\x1d","\x73","\x88","\xd3"),
	HX_HCSTRING("set_options2","\x91","\x96","\x81","\xe8"),
	HX_HCSTRING("get_interactionType","\xc3","\x76","\xd3","\x93"),
	HX_HCSTRING("set_interactionType","\xcf","\x69","\x70","\xd0"),
	HX_HCSTRING("get_handler","\xe1","\x0f","\xd0","\xcb"),
	HX_HCSTRING("set_handler","\xed","\x16","\x3d","\xd6"),
	HX_HCSTRING("get_allowSleepingCallbacks","\x63","\x60","\x70","\x92"),
	HX_HCSTRING("set_allowSleepingCallbacks","\xd7","\x26","\x05","\xf2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InteractionListener_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InteractionListener_obj::__mClass,"__mClass");
};

#endif

hx::Class InteractionListener_obj::__mClass;

void InteractionListener_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.callbacks.InteractionListener","\xe0","\x7a","\x97","\x6e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< InteractionListener_obj >;
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
} // end namespace callbacks
