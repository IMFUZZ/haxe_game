// Generated by Haxe 3.4.0
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_AABBNode
#define INCLUDED_zpp_nape_util_ZNPList_ZPP_AABBNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,space,ZPP_AABBNode)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_AABBNode)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPNode_ZPP_AABBNode)

namespace zpp_nape{
namespace util{


class HXCPP_CLASS_ATTRIBUTES ZNPList_ZPP_AABBNode_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ZNPList_ZPP_AABBNode_obj OBJ_;
		ZNPList_ZPP_AABBNode_obj();

	public:
		enum { _hx_ClassId = 0x687e2b1b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="zpp_nape.util.ZNPList_ZPP_AABBNode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"zpp_nape.util.ZNPList_ZPP_AABBNode"); }
		static hx::ObjectPtr< ZNPList_ZPP_AABBNode_obj > __new();
		static hx::ObjectPtr< ZNPList_ZPP_AABBNode_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZNPList_ZPP_AABBNode_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ZNPList_ZPP_AABBNode","\x0c","\xf1","\x0b","\x50"); }

		 ::zpp_nape::util::ZNPNode_ZPP_AABBNode head;
		 ::zpp_nape::util::ZNPNode_ZPP_AABBNode begin();
		::Dynamic begin_dyn();

		bool modified;
		bool pushmod;
		int length;
		void setbegin( ::zpp_nape::util::ZNPNode_ZPP_AABBNode i);
		::Dynamic setbegin_dyn();

		 ::zpp_nape::space::ZPP_AABBNode add( ::zpp_nape::space::ZPP_AABBNode o);
		::Dynamic add_dyn();

		 ::zpp_nape::space::ZPP_AABBNode inlined_add( ::zpp_nape::space::ZPP_AABBNode o);
		::Dynamic inlined_add_dyn();

		void addAll( ::zpp_nape::util::ZNPList_ZPP_AABBNode x);
		::Dynamic addAll_dyn();

		 ::zpp_nape::util::ZNPNode_ZPP_AABBNode insert( ::zpp_nape::util::ZNPNode_ZPP_AABBNode cur, ::zpp_nape::space::ZPP_AABBNode o);
		::Dynamic insert_dyn();

		 ::zpp_nape::util::ZNPNode_ZPP_AABBNode inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_AABBNode cur, ::zpp_nape::space::ZPP_AABBNode o);
		::Dynamic inlined_insert_dyn();

		void pop();
		::Dynamic pop_dyn();

		void inlined_pop();
		::Dynamic inlined_pop_dyn();

		 ::zpp_nape::space::ZPP_AABBNode pop_unsafe();
		::Dynamic pop_unsafe_dyn();

		 ::zpp_nape::space::ZPP_AABBNode inlined_pop_unsafe();
		::Dynamic inlined_pop_unsafe_dyn();

		void remove( ::zpp_nape::space::ZPP_AABBNode obj);
		::Dynamic remove_dyn();

		bool try_remove( ::zpp_nape::space::ZPP_AABBNode obj);
		::Dynamic try_remove_dyn();

		void inlined_remove( ::zpp_nape::space::ZPP_AABBNode obj);
		::Dynamic inlined_remove_dyn();

		bool inlined_try_remove( ::zpp_nape::space::ZPP_AABBNode obj);
		::Dynamic inlined_try_remove_dyn();

		 ::zpp_nape::util::ZNPNode_ZPP_AABBNode erase( ::zpp_nape::util::ZNPNode_ZPP_AABBNode pre);
		::Dynamic erase_dyn();

		 ::zpp_nape::util::ZNPNode_ZPP_AABBNode inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_AABBNode pre);
		::Dynamic inlined_erase_dyn();

		 ::zpp_nape::util::ZNPNode_ZPP_AABBNode splice( ::zpp_nape::util::ZNPNode_ZPP_AABBNode pre,int n);
		::Dynamic splice_dyn();

		void clear();
		::Dynamic clear_dyn();

		void inlined_clear();
		::Dynamic inlined_clear_dyn();

		void reverse();
		::Dynamic reverse_dyn();

		bool empty();
		::Dynamic empty_dyn();

		int size();
		::Dynamic size_dyn();

		bool has( ::zpp_nape::space::ZPP_AABBNode obj);
		::Dynamic has_dyn();

		bool inlined_has( ::zpp_nape::space::ZPP_AABBNode obj);
		::Dynamic inlined_has_dyn();

		 ::zpp_nape::space::ZPP_AABBNode front();
		::Dynamic front_dyn();

		 ::zpp_nape::space::ZPP_AABBNode back();
		::Dynamic back_dyn();

		 ::zpp_nape::util::ZNPNode_ZPP_AABBNode iterator_at(int ind);
		::Dynamic iterator_at_dyn();

		 ::zpp_nape::space::ZPP_AABBNode at(int ind);
		::Dynamic at_dyn();

};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZNPList_ZPP_AABBNode */ 