#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPolyList
#include <nape/geom/GeomPolyList.h>
#endif
#ifndef INCLUDED_nape_geom_MarchingSquares
#include <nape/geom/MarchingSquares.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchingSquares
#include <zpp_nape/geom/ZPP_MarchingSquares.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace nape{
namespace geom{

Void MarchingSquares_obj::__construct()
{
	return null();
}

//MarchingSquares_obj::~MarchingSquares_obj() { }

Dynamic MarchingSquares_obj::__CreateEmpty() { return  new MarchingSquares_obj; }
hx::ObjectPtr< MarchingSquares_obj > MarchingSquares_obj::__new()
{  hx::ObjectPtr< MarchingSquares_obj > _result_ = new MarchingSquares_obj();
	_result_->__construct();
	return _result_;}

Dynamic MarchingSquares_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MarchingSquares_obj > _result_ = new MarchingSquares_obj();
	_result_->__construct();
	return _result_;}

::nape::geom::GeomPolyList MarchingSquares_obj::run( Dynamic iso,::nape::geom::AABB bounds,::nape::geom::Vec2 cellsize,hx::Null< int >  __o_quality,::nape::geom::Vec2 subgrid,hx::Null< bool >  __o_combine,::nape::geom::GeomPolyList output){
int quality = __o_quality.Default(2);
bool combine = __o_combine.Default(true);
	HX_STACK_FRAME("nape.geom.MarchingSquares","run",0xa143a3c8,"nape.geom.MarchingSquares.run","nape/geom/MarchingSquares.hx",269,0x5f5b7193)
	HX_STACK_ARG(iso,"iso")
	HX_STACK_ARG(bounds,"bounds")
	HX_STACK_ARG(cellsize,"cellsize")
	HX_STACK_ARG(quality,"quality")
	HX_STACK_ARG(subgrid,"subgrid")
	HX_STACK_ARG(combine,"combine")
	HX_STACK_ARG(output,"output")
{
		HX_STACK_LINE(300)
		bool tmp = (output != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(300)
		::nape::geom::GeomPolyList tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(300)
		if ((tmp)){
			HX_STACK_LINE(300)
			tmp1 = output;
		}
		else{
			HX_STACK_LINE(300)
			tmp1 = ::nape::geom::GeomPolyList_obj::__new();
		}
		HX_STACK_LINE(300)
		::nape::geom::GeomPolyList ret = tmp1;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(301)
		bool tmp2 = (subgrid == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(301)
		if ((tmp2)){
			HX_STACK_LINE(302)
			Dynamic tmp3 = iso;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(302)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(302)
			{
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(302)
					::zpp_nape::geom::ZPP_AABB _this = bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(302)
					bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(302)
					if ((tmp5)){
						HX_STACK_LINE(302)
						_this->_validate();
					}
				}
				HX_STACK_LINE(302)
				tmp4 = bounds->zpp_inner->minx;
			}
			HX_STACK_LINE(302)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(302)
			{
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(302)
					::zpp_nape::geom::ZPP_AABB _this = bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(302)
					bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(302)
					if ((tmp6)){
						HX_STACK_LINE(302)
						_this->_validate();
					}
				}
				HX_STACK_LINE(302)
				tmp5 = bounds->zpp_inner->miny;
			}
			HX_STACK_LINE(302)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(302)
			{
				HX_STACK_LINE(302)
				::nape::geom::Vec2 tmp7 = bounds->zpp_inner->getmax();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(302)
				::nape::geom::Vec2 _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(302)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(302)
					bool tmp8 = (_this1->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(302)
					if ((tmp8)){
						HX_STACK_LINE(302)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(302)
				tmp6 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(302)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(302)
			{
				HX_STACK_LINE(302)
				::nape::geom::Vec2 tmp8 = bounds->zpp_inner->getmax();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(302)
				::nape::geom::Vec2 _this = tmp8;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(302)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(302)
					bool tmp9 = (_this1->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(302)
					if ((tmp9)){
						HX_STACK_LINE(302)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(302)
				tmp7 = _this->zpp_inner->y;
			}
			HX_STACK_LINE(302)
			::nape::geom::Vec2 tmp8 = cellsize;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(302)
			int tmp9 = quality;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(302)
			bool tmp10 = combine;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(302)
			::nape::geom::GeomPolyList tmp11 = ret;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(302)
			::zpp_nape::geom::ZPP_MarchingSquares_obj::run(tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11);
		}
		else{
			HX_STACK_LINE(305)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(305)
			{
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(305)
					::zpp_nape::geom::ZPP_AABB _this = bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(305)
					bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(305)
					if ((tmp4)){
						HX_STACK_LINE(305)
						_this->_validate();
					}
				}
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(305)
					::zpp_nape::geom::ZPP_AABB _this = bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(305)
					tmp3 = (_this->maxx - _this->minx);
				}
			}
			HX_STACK_LINE(305)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(305)
			{
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(305)
					::zpp_nape::geom::ZPP_Vec2 _this = subgrid->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(305)
					bool tmp5 = (_this->_validate != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(305)
					if ((tmp5)){
						HX_STACK_LINE(305)
						_this->_validate();
					}
				}
				HX_STACK_LINE(305)
				tmp4 = subgrid->zpp_inner->x;
			}
			HX_STACK_LINE(305)
			Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(305)
			Float xp = tmp5;		HX_STACK_VAR(xp,"xp");
			HX_STACK_LINE(306)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(306)
			{
				HX_STACK_LINE(306)
				{
					HX_STACK_LINE(306)
					::zpp_nape::geom::ZPP_AABB _this = bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(306)
					bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(306)
					if ((tmp7)){
						HX_STACK_LINE(306)
						_this->_validate();
					}
				}
				HX_STACK_LINE(306)
				{
					HX_STACK_LINE(306)
					::zpp_nape::geom::ZPP_AABB _this = bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(306)
					tmp6 = (_this->maxy - _this->miny);
				}
			}
			HX_STACK_LINE(306)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(306)
			{
				HX_STACK_LINE(306)
				{
					HX_STACK_LINE(306)
					::zpp_nape::geom::ZPP_Vec2 _this = subgrid->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(306)
					bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(306)
					if ((tmp8)){
						HX_STACK_LINE(306)
						_this->_validate();
					}
				}
				HX_STACK_LINE(306)
				tmp7 = subgrid->zpp_inner->y;
			}
			HX_STACK_LINE(306)
			Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(306)
			Float yp = tmp8;		HX_STACK_VAR(yp,"yp");
			HX_STACK_LINE(307)
			Float tmp9 = xp;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(307)
			int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(307)
			int xn = tmp10;		HX_STACK_VAR(xn,"xn");
			HX_STACK_LINE(308)
			Float tmp11 = yp;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(308)
			int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(308)
			int yn = tmp12;		HX_STACK_VAR(yn,"yn");
			HX_STACK_LINE(309)
			bool tmp13 = (xn != xp);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(309)
			if ((tmp13)){
				HX_STACK_LINE(309)
				(xn)++;
			}
			HX_STACK_LINE(310)
			bool tmp14 = (yn != yp);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(310)
			if ((tmp14)){
				HX_STACK_LINE(310)
				(yn)++;
			}
			HX_STACK_LINE(311)
			{
				HX_STACK_LINE(311)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(311)
				while((true)){
					HX_STACK_LINE(311)
					bool tmp15 = (_g < xn);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(311)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(311)
					if ((tmp16)){
						HX_STACK_LINE(311)
						break;
					}
					HX_STACK_LINE(311)
					int tmp17 = (_g)++;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(311)
					int x = tmp17;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(312)
					Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(312)
					{
						HX_STACK_LINE(312)
						{
							HX_STACK_LINE(312)
							::zpp_nape::geom::ZPP_AABB _this = bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(312)
							bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(312)
							if ((tmp19)){
								HX_STACK_LINE(312)
								_this->_validate();
							}
						}
						HX_STACK_LINE(312)
						tmp18 = bounds->zpp_inner->minx;
					}
					HX_STACK_LINE(312)
					Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(312)
					{
						HX_STACK_LINE(312)
						{
							HX_STACK_LINE(312)
							::zpp_nape::geom::ZPP_Vec2 _this = subgrid->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(312)
							bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(312)
							if ((tmp20)){
								HX_STACK_LINE(312)
								_this->_validate();
							}
						}
						HX_STACK_LINE(312)
						tmp19 = subgrid->zpp_inner->x;
					}
					HX_STACK_LINE(312)
					int tmp20 = x;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(312)
					Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(312)
					Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(312)
					Float x0 = tmp22;		HX_STACK_VAR(x0,"x0");
					HX_STACK_LINE(313)
					int tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(313)
					int tmp24 = (xn - (int)1);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(313)
					bool tmp25 = (tmp23 == tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(313)
					Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(313)
					if ((tmp25)){
						HX_STACK_LINE(313)
						::nape::geom::Vec2 tmp27 = bounds->zpp_inner->getmax();		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(313)
						::nape::geom::Vec2 _this = tmp27;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(313)
						{
							HX_STACK_LINE(313)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(313)
							bool tmp28 = (_this1->_validate != null());		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(313)
							if ((tmp28)){
								HX_STACK_LINE(313)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(313)
						tmp26 = _this->zpp_inner->x;
					}
					else{
						HX_STACK_LINE(313)
						Float tmp27 = x0;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(313)
						Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(313)
						{
							HX_STACK_LINE(313)
							{
								HX_STACK_LINE(313)
								::zpp_nape::geom::ZPP_Vec2 _this = subgrid->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(313)
								bool tmp29 = (_this->_validate != null());		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(313)
								if ((tmp29)){
									HX_STACK_LINE(313)
									_this->_validate();
								}
							}
							HX_STACK_LINE(313)
							tmp28 = subgrid->zpp_inner->x;
						}
						HX_STACK_LINE(313)
						tmp26 = (tmp27 + tmp28);
					}
					HX_STACK_LINE(313)
					Float x1 = tmp26;		HX_STACK_VAR(x1,"x1");
					HX_STACK_LINE(314)
					{
						HX_STACK_LINE(314)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(314)
						while((true)){
							HX_STACK_LINE(314)
							bool tmp27 = (_g1 < yn);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(314)
							bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(314)
							if ((tmp28)){
								HX_STACK_LINE(314)
								break;
							}
							HX_STACK_LINE(314)
							int tmp29 = (_g1)++;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(314)
							int y = tmp29;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(315)
							Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(315)
							{
								HX_STACK_LINE(315)
								{
									HX_STACK_LINE(315)
									::zpp_nape::geom::ZPP_AABB _this = bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(315)
									bool tmp31 = (_this->_validate != null());		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(315)
									if ((tmp31)){
										HX_STACK_LINE(315)
										_this->_validate();
									}
								}
								HX_STACK_LINE(315)
								tmp30 = bounds->zpp_inner->miny;
							}
							HX_STACK_LINE(315)
							Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(315)
							{
								HX_STACK_LINE(315)
								{
									HX_STACK_LINE(315)
									::zpp_nape::geom::ZPP_Vec2 _this = subgrid->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(315)
									bool tmp32 = (_this->_validate != null());		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(315)
									if ((tmp32)){
										HX_STACK_LINE(315)
										_this->_validate();
									}
								}
								HX_STACK_LINE(315)
								tmp31 = subgrid->zpp_inner->y;
							}
							HX_STACK_LINE(315)
							int tmp32 = y;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(315)
							Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(315)
							Float tmp34 = (tmp30 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(315)
							Float y0 = tmp34;		HX_STACK_VAR(y0,"y0");
							HX_STACK_LINE(316)
							int tmp35 = y;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(316)
							int tmp36 = (yn - (int)1);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(316)
							bool tmp37 = (tmp35 == tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(316)
							Float tmp38;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(316)
							if ((tmp37)){
								HX_STACK_LINE(316)
								::nape::geom::Vec2 tmp39 = bounds->zpp_inner->getmax();		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(316)
								::nape::geom::Vec2 _this = tmp39;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(316)
								{
									HX_STACK_LINE(316)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(316)
									bool tmp40 = (_this1->_validate != null());		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(316)
									if ((tmp40)){
										HX_STACK_LINE(316)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(316)
								tmp38 = _this->zpp_inner->y;
							}
							else{
								HX_STACK_LINE(316)
								Float tmp39 = y0;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(316)
								Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(316)
								{
									HX_STACK_LINE(316)
									{
										HX_STACK_LINE(316)
										::zpp_nape::geom::ZPP_Vec2 _this = subgrid->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(316)
										bool tmp41 = (_this->_validate != null());		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(316)
										if ((tmp41)){
											HX_STACK_LINE(316)
											_this->_validate();
										}
									}
									HX_STACK_LINE(316)
									tmp40 = subgrid->zpp_inner->y;
								}
								HX_STACK_LINE(316)
								tmp38 = (tmp39 + tmp40);
							}
							HX_STACK_LINE(316)
							Float y1 = tmp38;		HX_STACK_VAR(y1,"y1");
							HX_STACK_LINE(317)
							Dynamic tmp39 = iso;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(317)
							Float tmp40 = x0;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(317)
							Float tmp41 = y0;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(317)
							Float tmp42 = x1;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(317)
							Float tmp43 = y1;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(317)
							::nape::geom::Vec2 tmp44 = cellsize;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(317)
							int tmp45 = quality;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(317)
							bool tmp46 = combine;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(317)
							::nape::geom::GeomPolyList tmp47 = ret;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(317)
							::zpp_nape::geom::ZPP_MarchingSquares_obj::run(tmp39,tmp40,tmp41,tmp42,tmp43,tmp44,tmp45,tmp46,tmp47);
						}
					}
				}
			}
		}
		HX_STACK_LINE(321)
		{
			HX_STACK_LINE(322)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(323)
			tmp3 = cellsize->zpp_inner->weak;
			HX_STACK_LINE(322)
			if ((tmp3)){
				HX_STACK_LINE(325)
				{
					HX_STACK_LINE(325)
					::zpp_nape::geom::ZPP_Vec2 inner = cellsize->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(325)
					cellsize->zpp_inner->outer = null();
					HX_STACK_LINE(325)
					cellsize->zpp_inner = null();
					HX_STACK_LINE(325)
					{
						HX_STACK_LINE(325)
						::nape::geom::Vec2 o = cellsize;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(325)
						::nape::geom::Vec2 tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(325)
						o->zpp_pool = tmp4;
						HX_STACK_LINE(325)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(325)
					{
						HX_STACK_LINE(325)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(325)
						{
							HX_STACK_LINE(325)
							bool tmp4 = (o->outer != null());		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(325)
							if ((tmp4)){
								HX_STACK_LINE(325)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(325)
								o->outer = null();
							}
							HX_STACK_LINE(325)
							o->_isimmutable = null();
							HX_STACK_LINE(325)
							o->_validate = null();
							HX_STACK_LINE(325)
							o->_invalidate = null();
						}
						HX_STACK_LINE(325)
						::zpp_nape::geom::ZPP_Vec2 tmp4 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(325)
						o->next = tmp4;
						HX_STACK_LINE(325)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(326)
				true;
			}
			else{
				HX_STACK_LINE(329)
				false;
			}
		}
		HX_STACK_LINE(332)
		bool tmp3 = (subgrid != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(332)
		if ((tmp3)){
			HX_STACK_LINE(334)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(335)
			tmp4 = subgrid->zpp_inner->weak;
			HX_STACK_LINE(334)
			if ((tmp4)){
				HX_STACK_LINE(337)
				{
					HX_STACK_LINE(337)
					::zpp_nape::geom::ZPP_Vec2 inner = subgrid->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(337)
					subgrid->zpp_inner->outer = null();
					HX_STACK_LINE(337)
					subgrid->zpp_inner = null();
					HX_STACK_LINE(337)
					{
						HX_STACK_LINE(337)
						::nape::geom::Vec2 o = subgrid;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(337)
						::nape::geom::Vec2 tmp5 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(337)
						o->zpp_pool = tmp5;
						HX_STACK_LINE(337)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(337)
					{
						HX_STACK_LINE(337)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(337)
						{
							HX_STACK_LINE(337)
							bool tmp5 = (o->outer != null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(337)
							if ((tmp5)){
								HX_STACK_LINE(337)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(337)
								o->outer = null();
							}
							HX_STACK_LINE(337)
							o->_isimmutable = null();
							HX_STACK_LINE(337)
							o->_validate = null();
							HX_STACK_LINE(337)
							o->_invalidate = null();
						}
						HX_STACK_LINE(337)
						::zpp_nape::geom::ZPP_Vec2 tmp5 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(337)
						o->next = tmp5;
						HX_STACK_LINE(337)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(338)
				true;
			}
			else{
				HX_STACK_LINE(341)
				false;
			}
		}
		HX_STACK_LINE(345)
		::nape::geom::GeomPolyList tmp4 = ret;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(345)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(MarchingSquares_obj,run,return )


MarchingSquares_obj::MarchingSquares_obj()
{
}

bool MarchingSquares_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { outValue = run_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MarchingSquares_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MarchingSquares_obj::__mClass,"__mClass");
};

#endif

hx::Class MarchingSquares_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	::String(null()) };

void MarchingSquares_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.geom.MarchingSquares","\x6b","\xda","\xaf","\x08");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MarchingSquares_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< MarchingSquares_obj >;
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
