#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_MatMN
#include <nape/geom/MatMN.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MatMN
#include <zpp_nape/geom/ZPP_MatMN.h>
#endif
namespace nape{
namespace geom{

Void MatMN_obj::__construct(int rows,int cols)
{
HX_STACK_FRAME("nape.geom.MatMN","new",0x580e1be7,"nape.geom.MatMN.new","nape/geom/MatMN.hx",179,0x8baed9c9)
HX_STACK_THIS(this)
HX_STACK_ARG(rows,"rows")
HX_STACK_ARG(cols,"cols")
{
	HX_STACK_LINE(183)
	this->zpp_inner = null();
	HX_STACK_LINE(252)
	::zpp_nape::geom::ZPP_MatMN tmp = ::zpp_nape::geom::ZPP_MatMN_obj::__new(rows,cols);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(252)
	this->zpp_inner = tmp;
	HX_STACK_LINE(253)
	::zpp_nape::geom::ZPP_MatMN tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(253)
	tmp1->outer = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//MatMN_obj::~MatMN_obj() { }

Dynamic MatMN_obj::__CreateEmpty() { return  new MatMN_obj; }
hx::ObjectPtr< MatMN_obj > MatMN_obj::__new(int rows,int cols)
{  hx::ObjectPtr< MatMN_obj > _result_ = new MatMN_obj();
	_result_->__construct(rows,cols);
	return _result_;}

Dynamic MatMN_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MatMN_obj > _result_ = new MatMN_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

int MatMN_obj::get_rows( ){
	HX_STACK_FRAME("nape.geom.MatMN","get_rows",0xefad3bbb,"nape.geom.MatMN.get_rows","nape/geom/MatMN.hx",189,0x8baed9c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(190)
	::zpp_nape::geom::ZPP_MatMN tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(190)
	int tmp1 = tmp->m;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(190)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(MatMN_obj,get_rows,return )

int MatMN_obj::get_cols( ){
	HX_STACK_FRAME("nape.geom.MatMN","get_cols",0xe5c2fed5,"nape.geom.MatMN.get_cols","nape/geom/MatMN.hx",197,0x8baed9c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(198)
	::zpp_nape::geom::ZPP_MatMN tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(198)
	int tmp1 = tmp->n;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(198)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(MatMN_obj,get_cols,return )

Float MatMN_obj::x( int row,int col){
	HX_STACK_FRAME("nape.geom.MatMN","x",0x4f2a8c3f,"nape.geom.MatMN.x","nape/geom/MatMN.hx",209,0x8baed9c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(col,"col")
	HX_STACK_LINE(215)
	::zpp_nape::geom::ZPP_MatMN tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(215)
	int tmp1 = row;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(215)
	::zpp_nape::geom::ZPP_MatMN tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(215)
	int tmp3 = tmp2->n;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(215)
	int tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(215)
	int tmp5 = col;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(215)
	int tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(215)
	Float tmp7 = tmp->x->__get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(215)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC2(MatMN_obj,x,return )

Float MatMN_obj::setx( int row,int col,Float x){
	HX_STACK_FRAME("nape.geom.MatMN","setx",0xb7985d2f,"nape.geom.MatMN.setx","nape/geom/MatMN.hx",228,0x8baed9c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(col,"col")
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(234)
	::zpp_nape::geom::ZPP_MatMN tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(234)
	int tmp1 = row;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(234)
	::zpp_nape::geom::ZPP_MatMN tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(234)
	int tmp3 = tmp2->n;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(234)
	int tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(234)
	int tmp5 = col;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(234)
	int tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(234)
	Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(234)
	Float tmp8 = tmp->x[tmp6] = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(234)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC3(MatMN_obj,setx,return )

::String MatMN_obj::toString( ){
	HX_STACK_FRAME("nape.geom.MatMN","toString",0x5cb25bc5,"nape.geom.MatMN.toString","nape/geom/MatMN.hx",258,0x8baed9c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(259)
	::String ret = HX_HCSTRING("{ ","\x45","\x6b","\x00","\x00");		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(260)
	bool fst = true;		HX_STACK_VAR(fst,"fst");
	HX_STACK_LINE(261)
	{
		HX_STACK_LINE(261)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(261)
		::zpp_nape::geom::ZPP_MatMN tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(261)
		int _g = tmp->m;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(261)
		while((true)){
			HX_STACK_LINE(261)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(261)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(261)
			if ((tmp2)){
				HX_STACK_LINE(261)
				break;
			}
			HX_STACK_LINE(261)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(261)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(262)
			bool tmp4 = fst;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(262)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(262)
			if ((tmp5)){
				HX_STACK_LINE(262)
				hx::AddEq(ret,HX_HCSTRING("; ","\x85","\x33","\x00","\x00"));
			}
			HX_STACK_LINE(263)
			fst = false;
			HX_STACK_LINE(264)
			{
				HX_STACK_LINE(264)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(264)
				::zpp_nape::geom::ZPP_MatMN tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(264)
				int _g2 = tmp6->n;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(264)
				while((true)){
					HX_STACK_LINE(264)
					bool tmp7 = (_g3 < _g2);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(264)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(264)
					if ((tmp8)){
						HX_STACK_LINE(264)
						break;
					}
					HX_STACK_LINE(264)
					int tmp9 = (_g3)++;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(264)
					int j = tmp9;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(264)
					::zpp_nape::geom::ZPP_MatMN tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(264)
					int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(264)
					::zpp_nape::geom::ZPP_MatMN tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(264)
					int tmp13 = tmp12->n;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(264)
					int tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(264)
					int tmp15 = j;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(264)
					int tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(264)
					Float tmp17 = tmp10->x->__get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(264)
					::String tmp18 = (tmp17 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(264)
					hx::AddEq(ret,tmp18);
				}
			}
		}
	}
	HX_STACK_LINE(266)
	hx::AddEq(ret,HX_HCSTRING("}","\x7d","\x00","\x00","\x00"));
	HX_STACK_LINE(267)
	::String tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(267)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MatMN_obj,toString,return )

::nape::geom::MatMN MatMN_obj::transpose( ){
	HX_STACK_FRAME("nape.geom.MatMN","transpose",0xe3057b40,"nape.geom.MatMN.transpose","nape/geom/MatMN.hx",274,0x8baed9c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(275)
	::zpp_nape::geom::ZPP_MatMN tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(275)
	int tmp1 = tmp->n;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(275)
	::zpp_nape::geom::ZPP_MatMN tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(275)
	int tmp3 = tmp2->m;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(275)
	::nape::geom::MatMN tmp4 = ::nape::geom::MatMN_obj::__new(tmp1,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(275)
	::nape::geom::MatMN ret = tmp4;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(276)
	{
		HX_STACK_LINE(276)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(276)
		::zpp_nape::geom::ZPP_MatMN tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(276)
		int _g = tmp5->m;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(276)
		while((true)){
			HX_STACK_LINE(276)
			bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(276)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(276)
			if ((tmp7)){
				HX_STACK_LINE(276)
				break;
			}
			HX_STACK_LINE(276)
			int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(276)
			int i = tmp8;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(277)
			{
				HX_STACK_LINE(277)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(277)
				::zpp_nape::geom::ZPP_MatMN tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(277)
				int _g2 = tmp9->n;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(277)
				while((true)){
					HX_STACK_LINE(277)
					bool tmp10 = (_g3 < _g2);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(277)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(277)
					if ((tmp11)){
						HX_STACK_LINE(277)
						break;
					}
					HX_STACK_LINE(277)
					int tmp12 = (_g3)++;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(277)
					int j = tmp12;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(277)
					int tmp13 = j;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(277)
					int tmp14 = ret->zpp_inner->n;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(277)
					int tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(277)
					int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(277)
					int tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(277)
					::zpp_nape::geom::ZPP_MatMN tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(277)
					int tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(277)
					::zpp_nape::geom::ZPP_MatMN tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(277)
					int tmp21 = tmp20->n;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(277)
					int tmp22 = (tmp19 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(277)
					int tmp23 = j;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(277)
					int tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(277)
					Float tmp25 = tmp18->x->__get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(277)
					ret->zpp_inner->x[tmp17] = tmp25;
				}
			}
		}
	}
	HX_STACK_LINE(279)
	::nape::geom::MatMN tmp5 = ret;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(279)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(MatMN_obj,transpose,return )

::nape::geom::MatMN MatMN_obj::mul( ::nape::geom::MatMN matrix){
	HX_STACK_FRAME("nape.geom.MatMN","mul",0x580d678b,"nape.geom.MatMN.mul","nape/geom/MatMN.hx",294,0x8baed9c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_LINE(295)
	::nape::geom::MatMN y = matrix;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(301)
	::zpp_nape::geom::ZPP_MatMN tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(301)
	int tmp1 = tmp->m;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(301)
	int tmp2 = y->zpp_inner->n;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(301)
	::nape::geom::MatMN tmp3 = ::nape::geom::MatMN_obj::__new(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(301)
	::nape::geom::MatMN ret = tmp3;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(302)
	{
		HX_STACK_LINE(302)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(302)
		::zpp_nape::geom::ZPP_MatMN tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(302)
		int _g = tmp4->m;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(302)
		while((true)){
			HX_STACK_LINE(302)
			bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(302)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(302)
			if ((tmp6)){
				HX_STACK_LINE(302)
				break;
			}
			HX_STACK_LINE(302)
			int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(302)
			int i = tmp7;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(303)
			{
				HX_STACK_LINE(303)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(303)
				int tmp8 = y->zpp_inner->n;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(303)
				int _g2 = tmp8;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(303)
				while((true)){
					HX_STACK_LINE(303)
					bool tmp9 = (_g3 < _g2);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(303)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(303)
					if ((tmp10)){
						HX_STACK_LINE(303)
						break;
					}
					HX_STACK_LINE(303)
					int tmp11 = (_g3)++;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(303)
					int j = tmp11;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(304)
					Float v = ((Float)0.0);		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(305)
					{
						HX_STACK_LINE(305)
						int _g5 = (int)0;		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(305)
						::zpp_nape::geom::ZPP_MatMN tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(305)
						int _g4 = tmp12->n;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(305)
						while((true)){
							HX_STACK_LINE(305)
							bool tmp13 = (_g5 < _g4);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(305)
							bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(305)
							if ((tmp14)){
								HX_STACK_LINE(305)
								break;
							}
							HX_STACK_LINE(305)
							int tmp15 = (_g5)++;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(305)
							int k = tmp15;		HX_STACK_VAR(k,"k");
							HX_STACK_LINE(305)
							::zpp_nape::geom::ZPP_MatMN tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(305)
							int tmp17 = i;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(305)
							::zpp_nape::geom::ZPP_MatMN tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(305)
							int tmp19 = tmp18->n;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(305)
							int tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(305)
							int tmp21 = k;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(305)
							int tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(305)
							Float tmp23 = tmp16->x->__get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(305)
							int tmp24 = k;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(305)
							int tmp25 = y->zpp_inner->n;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(305)
							int tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(305)
							int tmp27 = j;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(305)
							int tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(305)
							Float tmp29 = y->zpp_inner->x->__get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(305)
							Float tmp30 = (tmp23 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(305)
							hx::AddEq(v,tmp30);
						}
					}
					HX_STACK_LINE(306)
					int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(306)
					int tmp13 = ret->zpp_inner->n;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(306)
					int tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(306)
					int tmp15 = j;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(306)
					int tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(306)
					Float tmp17 = v;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(306)
					ret->zpp_inner->x[tmp16] = tmp17;
				}
			}
		}
	}
	HX_STACK_LINE(309)
	::nape::geom::MatMN tmp4 = ret;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(309)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(MatMN_obj,mul,return )


MatMN_obj::MatMN_obj()
{
}

void MatMN_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MatMN);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void MatMN_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic MatMN_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"mul") ) { return mul_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { if (inCallProp == hx::paccAlways) return get_rows(); }
		if (HX_FIELD_EQ(inName,"cols") ) { if (inCallProp == hx::paccAlways) return get_cols(); }
		if (HX_FIELD_EQ(inName,"setx") ) { return setx_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_rows") ) { return get_rows_dyn(); }
		if (HX_FIELD_EQ(inName,"get_cols") ) { return get_cols_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"transpose") ) { return transpose_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MatMN_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::geom::ZPP_MatMN >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MatMN_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("rows","\x19","\xf5","\xae","\x4b"));
	outFields->push(HX_HCSTRING("cols","\x33","\xb8","\xc4","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_MatMN*/ ,(int)offsetof(MatMN_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("get_rows","\xa2","\xb0","\x69","\xcb"),
	HX_HCSTRING("get_cols","\xbc","\x73","\x7f","\xc1"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("setx","\x96","\x92","\x50","\x4c"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("transpose","\x79","\x50","\x2f","\x4c"),
	HX_HCSTRING("mul","\x04","\x1c","\x53","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MatMN_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MatMN_obj::__mClass,"__mClass");
};

#endif

hx::Class MatMN_obj::__mClass;

void MatMN_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.geom.MatMN","\x75","\x9c","\xf2","\x77");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MatMN_obj >;
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
} // end namespace geom
