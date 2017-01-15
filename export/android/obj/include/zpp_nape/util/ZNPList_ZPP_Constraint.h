#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#define INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_Constraint)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Constraint)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPNode_ZPP_Constraint)
namespace zpp_nape{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  ZNPList_ZPP_Constraint_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZNPList_ZPP_Constraint_obj OBJ_;
		ZNPList_ZPP_Constraint_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="zpp_nape.util.ZNPList_ZPP_Constraint")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZNPList_ZPP_Constraint_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZNPList_ZPP_Constraint_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ZNPList_ZPP_Constraint","\x47","\xab","\xbb","\x7b"); }

		::zpp_nape::util::ZNPNode_ZPP_Constraint head;
		virtual ::zpp_nape::util::ZNPNode_ZPP_Constraint begin( );
		Dynamic begin_dyn();

		bool modified;
		bool pushmod;
		int length;
		virtual Void setbegin( ::zpp_nape::util::ZNPNode_ZPP_Constraint i);
		Dynamic setbegin_dyn();

		virtual ::zpp_nape::constraint::ZPP_Constraint add( ::zpp_nape::constraint::ZPP_Constraint o);
		Dynamic add_dyn();

		virtual ::zpp_nape::constraint::ZPP_Constraint inlined_add( ::zpp_nape::constraint::ZPP_Constraint o);
		Dynamic inlined_add_dyn();

		virtual Void addAll( ::zpp_nape::util::ZNPList_ZPP_Constraint x);
		Dynamic addAll_dyn();

		virtual ::zpp_nape::util::ZNPNode_ZPP_Constraint insert( ::zpp_nape::util::ZNPNode_ZPP_Constraint cur,::zpp_nape::constraint::ZPP_Constraint o);
		Dynamic insert_dyn();

		virtual ::zpp_nape::util::ZNPNode_ZPP_Constraint inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_Constraint cur,::zpp_nape::constraint::ZPP_Constraint o);
		Dynamic inlined_insert_dyn();

		virtual Void pop( );
		Dynamic pop_dyn();

		virtual Void inlined_pop( );
		Dynamic inlined_pop_dyn();

		virtual ::zpp_nape::constraint::ZPP_Constraint pop_unsafe( );
		Dynamic pop_unsafe_dyn();

		virtual ::zpp_nape::constraint::ZPP_Constraint inlined_pop_unsafe( );
		Dynamic inlined_pop_unsafe_dyn();

		virtual Void remove( ::zpp_nape::constraint::ZPP_Constraint obj);
		Dynamic remove_dyn();

		virtual bool try_remove( ::zpp_nape::constraint::ZPP_Constraint obj);
		Dynamic try_remove_dyn();

		virtual Void inlined_remove( ::zpp_nape::constraint::ZPP_Constraint obj);
		Dynamic inlined_remove_dyn();

		virtual bool inlined_try_remove( ::zpp_nape::constraint::ZPP_Constraint obj);
		Dynamic inlined_try_remove_dyn();

		virtual ::zpp_nape::util::ZNPNode_ZPP_Constraint erase( ::zpp_nape::util::ZNPNode_ZPP_Constraint pre);
		Dynamic erase_dyn();

		virtual ::zpp_nape::util::ZNPNode_ZPP_Constraint inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_Constraint pre);
		Dynamic inlined_erase_dyn();

		virtual ::zpp_nape::util::ZNPNode_ZPP_Constraint splice( ::zpp_nape::util::ZNPNode_ZPP_Constraint pre,int n);
		Dynamic splice_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void inlined_clear( );
		Dynamic inlined_clear_dyn();

		virtual Void reverse( );
		Dynamic reverse_dyn();

		virtual bool empty( );
		Dynamic empty_dyn();

		virtual int size( );
		Dynamic size_dyn();

		virtual bool has( ::zpp_nape::constraint::ZPP_Constraint obj);
		Dynamic has_dyn();

		virtual bool inlined_has( ::zpp_nape::constraint::ZPP_Constraint obj);
		Dynamic inlined_has_dyn();

		virtual ::zpp_nape::constraint::ZPP_Constraint front( );
		Dynamic front_dyn();

		virtual ::zpp_nape::constraint::ZPP_Constraint back( );
		Dynamic back_dyn();

		virtual ::zpp_nape::util::ZNPNode_ZPP_Constraint iterator_at( int ind);
		Dynamic iterator_at_dyn();

		virtual ::zpp_nape::constraint::ZPP_Constraint at( int ind);
		Dynamic at_dyn();

};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint */ 