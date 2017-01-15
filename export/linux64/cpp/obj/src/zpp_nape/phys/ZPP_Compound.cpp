// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintList
#include <nape/constraint/ConstraintList.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
#endif
#ifndef INCLUDED_nape_phys_Compound
#include <nape/phys/Compound.h>
#endif
#ifndef INCLUDED_nape_phys_CompoundList
#include <nape/phys/CompoundList.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_CopyHelper
#include <zpp_nape/constraint/ZPP_CopyHelper.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#include <zpp_nape/phys/ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Body
#include <zpp_nape/util/ZNPList_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Compound
#include <zpp_nape/util/ZNPList_ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Body
#include <zpp_nape/util/ZNPNode_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Compound
#include <zpp_nape/util/ZNPNode_ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Constraint
#include <zpp_nape/util/ZNPNode_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_CompoundList
#include <zpp_nape/util/ZPP_CompoundList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ConstraintList
#include <zpp_nape/util/ZPP_ConstraintList.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0189a2997f533bdc_174_new,"zpp_nape.phys.ZPP_Compound","new",0x474c9a3d,"zpp_nape.phys.ZPP_Compound.new","zpp_nape/phys/Compound.hx",174,0x2d1c4718)
HX_DEFINE_STACK_FRAME(_hx_pos_0189a2997f533bdc_185___imutable_midstep,"zpp_nape.phys.ZPP_Compound","__imutable_midstep",0x98629395,"zpp_nape.phys.ZPP_Compound.__imutable_midstep","zpp_nape/phys/Compound.hx",185,0x2d1c4718)
HX_DEFINE_STACK_FRAME(_hx_pos_0189a2997f533bdc_191_addedToSpace,"zpp_nape.phys.ZPP_Compound","addedToSpace",0x9c1fd6ee,"zpp_nape.phys.ZPP_Compound.addedToSpace","zpp_nape/phys/Compound.hx",191,0x2d1c4718)
HX_DEFINE_STACK_FRAME(_hx_pos_0189a2997f533bdc_194_removedFromSpace,"zpp_nape.phys.ZPP_Compound","removedFromSpace",0x9befd33f,"zpp_nape.phys.ZPP_Compound.removedFromSpace","zpp_nape/phys/Compound.hx",194,0x2d1c4718)
HX_DEFINE_STACK_FRAME(_hx_pos_0189a2997f533bdc_196_breakApart,"zpp_nape.phys.ZPP_Compound","breakApart",0x6247bb58,"zpp_nape.phys.ZPP_Compound.breakApart","zpp_nape/phys/Compound.hx",196,0x2d1c4718)
HX_DEFINE_STACK_FRAME(_hx_pos_0189a2997f533bdc_238_bodies_adder,"zpp_nape.phys.ZPP_Compound","bodies_adder",0x97796a12,"zpp_nape.phys.ZPP_Compound.bodies_adder","zpp_nape/phys/Compound.hx",238,0x2d1c4718)
HX_DEFINE_STACK_FRAME(_hx_pos_0189a2997f533bdc_248_bodies_subber,"zpp_nape.phys.ZPP_Compound","bodies_subber",0xedab020b,"zpp_nape.phys.ZPP_Compound.bodies_subber","zpp_nape/phys/Compound.hx",248,0x2d1c4718)
HX_DEFINE_STACK_FRAME(_hx_pos_0189a2997f533bdc_260_constraints_adder,"zpp_nape.phys.ZPP_Compound","constraints_adder",0x1af65ca2,"zpp_nape.phys.ZPP_Compound.constraints_adder","zpp_nape/phys/Compound.hx",260,0x2d1c4718)
HX_DEFINE_STACK_FRAME(_hx_pos_0189a2997f533bdc_270_constraints_subber,"zpp_nape.phys.ZPP_Compound","constraints_subber",0x77824d7b,"zpp_nape.phys.ZPP_Compound.constraints_subber","zpp_nape/phys/Compound.hx",270,0x2d1c4718)
HX_DEFINE_STACK_FRAME(_hx_pos_0189a2997f533bdc_289_compounds_adder,"zpp_nape.phys.ZPP_Compound","compounds_adder",0x36126614,"zpp_nape.phys.ZPP_Compound.compounds_adder","zpp_nape/phys/Compound.hx",289,0x2d1c4718)
HX_DEFINE_STACK_FRAME(_hx_pos_0189a2997f533bdc_299_compounds_subber,"zpp_nape.phys.ZPP_Compound","compounds_subber",0x14ee87c9,"zpp_nape.phys.ZPP_Compound.compounds_subber","zpp_nape/phys/Compound.hx",299,0x2d1c4718)
HX_DEFINE_STACK_FRAME(_hx_pos_0189a2997f533bdc_336_copy,"zpp_nape.phys.ZPP_Compound","copy",0x147c9338,"zpp_nape.phys.ZPP_Compound.copy","zpp_nape/phys/Compound.hx",336,0x2d1c4718)
namespace zpp_nape{
namespace phys{

void ZPP_Compound_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_0189a2997f533bdc_174_new)
            	HX_STACK_THIS(this)
HXLINE( 184)		this->space = null();
HXLINE( 183)		this->compound = null();
HXLINE( 182)		this->depth = (int)0;
HXLINE( 181)		this->wrap_compounds = null();
HXLINE( 180)		this->wrap_constraints = null();
HXLINE( 179)		this->wrap_bodies = null();
HXLINE( 178)		this->compounds = null();
HXLINE( 177)		this->constraints = null();
HXLINE( 176)		this->bodies = null();
HXLINE( 175)		this->outer = null();
HXLINE( 310)		super::__construct();
HXLINE( 311)		this->icompound = hx::ObjectPtr<OBJ_>(this);
HXLINE( 312)		this->depth = (int)1;
HXLINE( 314)		this->bodies =  ::zpp_nape::util::ZNPList_ZPP_Body_obj::__alloc( HX_CTX );
HXLINE( 315)		this->wrap_bodies = ::zpp_nape::util::ZPP_BodyList_obj::get(this->bodies,null());
HXLINE( 316)		this->wrap_bodies->zpp_inner->adder = this->bodies_adder_dyn();
HXLINE( 317)		this->wrap_bodies->zpp_inner->subber = this->bodies_subber_dyn();
HXLINE( 321)		this->constraints =  ::zpp_nape::util::ZNPList_ZPP_Constraint_obj::__alloc( HX_CTX );
HXLINE( 322)		this->wrap_constraints = ::zpp_nape::util::ZPP_ConstraintList_obj::get(this->constraints,null());
HXLINE( 323)		this->wrap_constraints->zpp_inner->adder = this->constraints_adder_dyn();
HXLINE( 324)		this->wrap_constraints->zpp_inner->subber = this->constraints_subber_dyn();
HXLINE( 328)		this->compounds =  ::zpp_nape::util::ZNPList_ZPP_Compound_obj::__alloc( HX_CTX );
HXLINE( 329)		this->wrap_compounds = ::zpp_nape::util::ZPP_CompoundList_obj::get(this->compounds,null());
HXLINE( 330)		this->wrap_compounds->zpp_inner->adder = this->compounds_adder_dyn();
HXLINE( 331)		this->wrap_compounds->zpp_inner->subber = this->compounds_subber_dyn();
            	}

Dynamic ZPP_Compound_obj::__CreateEmpty() { return new ZPP_Compound_obj; }

void *ZPP_Compound_obj::_hx_vtable = 0;

Dynamic ZPP_Compound_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ZPP_Compound_obj > _hx_result = new ZPP_Compound_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ZPP_Compound_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x247ad52d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x247ad52d;
	} else {
		return inClassId==(int)0x41e59877;
	}
}

void ZPP_Compound_obj::_hx___imutable_midstep(::String name){
            	HX_STACKFRAME(&_hx_pos_0189a2997f533bdc_185___imutable_midstep)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(name,"name")
            	}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Compound_obj,_hx___imutable_midstep,(void))

void ZPP_Compound_obj::addedToSpace(){
            	HX_STACKFRAME(&_hx_pos_0189a2997f533bdc_191_addedToSpace)
            	HX_STACK_THIS(this)
HXLINE( 191)		this->_hx___iaddedToSpace();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Compound_obj,addedToSpace,(void))

void ZPP_Compound_obj::removedFromSpace(){
            	HX_STACKFRAME(&_hx_pos_0189a2997f533bdc_194_removedFromSpace)
            	HX_STACK_THIS(this)
HXLINE( 194)		this->_hx___iremovedFromSpace();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Compound_obj,removedFromSpace,(void))

void ZPP_Compound_obj::breakApart(){
            	HX_STACKFRAME(&_hx_pos_0189a2997f533bdc_196_breakApart)
            	HX_STACK_THIS(this)
HXLINE( 197)		if (hx::IsNotNull( this->space )) {
HXLINE( 198)			this->_hx___iremovedFromSpace();
HXLINE( 199)			this->space->nullInteractorType(hx::ObjectPtr<OBJ_>(this),null());
            		}
HXLINE( 201)		if (hx::IsNotNull( this->compound )) {
HXLINE( 201)			this->compound->compounds->remove(hx::ObjectPtr<OBJ_>(this));
            		}
            		else {
HXLINE( 202)			if (hx::IsNotNull( this->space )) {
HXLINE( 202)				this->space->compounds->remove(hx::ObjectPtr<OBJ_>(this));
            			}
            		}
HXLINE( 204)		while(hx::IsNotNull( this->bodies->head )){
HXLINE( 205)			HX_VARI(  ::zpp_nape::phys::ZPP_Body,b) = this->bodies->pop_unsafe();
HXLINE( 206)			{
HXLINE( 207)				if (hx::IsNotNull( (b->compound = this->compound) )) {
HXLINE( 207)					this->compound->bodies->add(b);
            				}
            				else {
HXLINE( 208)					if (hx::IsNotNull( this->space )) {
HXLINE( 208)						this->space->bodies->add(b);
            					}
            				}
HXLINE( 209)				if (hx::IsNotNull( this->space )) {
HXLINE( 209)					this->space->freshInteractorType(b,null());
            				}
            			}
            		}
HXLINE( 214)		while(hx::IsNotNull( this->constraints->head )){
HXLINE( 215)			HX_VARI(  ::zpp_nape::constraint::ZPP_Constraint,c) = this->constraints->pop_unsafe();
HXLINE( 217)			if (hx::IsNotNull( (c->compound = this->compound) )) {
HXLINE( 217)				this->compound->constraints->add(c);
            			}
            			else {
HXLINE( 218)				if (hx::IsNotNull( this->space )) {
HXLINE( 218)					this->space->constraints->add(c);
            				}
            			}
            		}
HXLINE( 223)		while(hx::IsNotNull( this->compounds->head )){
HXLINE( 224)			HX_VARI_NAME(  ::zpp_nape::phys::ZPP_Compound,c1,"c") = this->compounds->pop_unsafe();
HXLINE( 225)			{
HXLINE( 226)				if (hx::IsNotNull( (c1->compound = this->compound) )) {
HXLINE( 226)					this->compound->compounds->add(c1);
            				}
            				else {
HXLINE( 227)					if (hx::IsNotNull( this->space )) {
HXLINE( 227)						this->space->compounds->add(c1);
            					}
            				}
HXLINE( 228)				if (hx::IsNotNull( this->space )) {
HXLINE( 228)					this->space->freshInteractorType(c1,null());
            				}
            			}
            		}
HXLINE( 232)		this->compound = null();
HXLINE( 233)		this->space = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Compound_obj,breakApart,(void))

bool ZPP_Compound_obj::bodies_adder( ::nape::phys::Body x){
            	HX_STACKFRAME(&_hx_pos_0189a2997f533bdc_238_bodies_adder)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
HXLINE( 238)		if (hx::IsNotEq( x->zpp_inner->compound,hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 239)			if (hx::IsNotNull( x->zpp_inner->compound )) {
HXLINE( 239)				x->zpp_inner->compound->wrap_bodies->remove(x);
            			}
            			else {
HXLINE( 240)				if (hx::IsNotNull( x->zpp_inner->space )) {
HXLINE( 240)					x->zpp_inner->space->wrap_bodies->remove(x);
            				}
            			}
HXLINE( 241)			x->zpp_inner->compound = hx::ObjectPtr<OBJ_>(this);
HXLINE( 243)			if (hx::IsNotNull( this->space )) {
HXLINE( 243)				this->space->addBody(x->zpp_inner,null());
            			}
HXLINE( 244)			return true;
            		}
            		else {
HXLINE( 246)			return false;
            		}
HXLINE( 238)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Compound_obj,bodies_adder,return )

void ZPP_Compound_obj::bodies_subber( ::nape::phys::Body x){
            	HX_STACKFRAME(&_hx_pos_0189a2997f533bdc_248_bodies_subber)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
HXLINE( 249)		x->zpp_inner->compound = null();
HXLINE( 251)		if (hx::IsNotNull( this->space )) {
HXLINE( 251)			this->space->remBody(x->zpp_inner,null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Compound_obj,bodies_subber,(void))

bool ZPP_Compound_obj::constraints_adder( ::nape::constraint::Constraint x){
            	HX_STACKFRAME(&_hx_pos_0189a2997f533bdc_260_constraints_adder)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
HXLINE( 260)		if (hx::IsNotEq( x->zpp_inner->compound,hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 261)			if (hx::IsNotNull( x->zpp_inner->compound )) {
HXLINE( 261)				x->zpp_inner->compound->wrap_constraints->remove(x);
            			}
            			else {
HXLINE( 262)				if (hx::IsNotNull( x->zpp_inner->space )) {
HXLINE( 262)					x->zpp_inner->space->wrap_constraints->remove(x);
            				}
            			}
HXLINE( 263)			x->zpp_inner->compound = hx::ObjectPtr<OBJ_>(this);
HXLINE( 265)			if (hx::IsNotNull( this->space )) {
HXLINE( 265)				this->space->addConstraint(x->zpp_inner);
            			}
HXLINE( 266)			return true;
            		}
            		else {
HXLINE( 268)			return false;
            		}
HXLINE( 260)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Compound_obj,constraints_adder,return )

void ZPP_Compound_obj::constraints_subber( ::nape::constraint::Constraint x){
            	HX_STACKFRAME(&_hx_pos_0189a2997f533bdc_270_constraints_subber)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
HXLINE( 271)		x->zpp_inner->compound = null();
HXLINE( 273)		if (hx::IsNotNull( this->space )) {
HXLINE( 273)			this->space->remConstraint(x->zpp_inner);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Compound_obj,constraints_subber,(void))

bool ZPP_Compound_obj::compounds_adder( ::nape::phys::Compound x){
            	HX_STACKFRAME(&_hx_pos_0189a2997f533bdc_289_compounds_adder)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
HXLINE( 289)		if (hx::IsNotEq( x->zpp_inner->compound,hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 290)			if (hx::IsNotNull( x->zpp_inner->compound )) {
HXLINE( 290)				x->zpp_inner->compound->wrap_compounds->remove(x);
            			}
            			else {
HXLINE( 291)				if (hx::IsNotNull( x->zpp_inner->space )) {
HXLINE( 291)					x->zpp_inner->space->wrap_compounds->remove(x);
            				}
            			}
HXLINE( 292)			x->zpp_inner->compound = hx::ObjectPtr<OBJ_>(this);
HXLINE( 293)			x->zpp_inner->depth = (this->depth + (int)1);
HXLINE( 294)			if (hx::IsNotNull( this->space )) {
HXLINE( 294)				this->space->addCompound(x->zpp_inner);
            			}
HXLINE( 295)			return true;
            		}
            		else {
HXLINE( 297)			return false;
            		}
HXLINE( 289)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Compound_obj,compounds_adder,return )

void ZPP_Compound_obj::compounds_subber( ::nape::phys::Compound x){
            	HX_STACKFRAME(&_hx_pos_0189a2997f533bdc_299_compounds_subber)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
HXLINE( 300)		x->zpp_inner->compound = null();
HXLINE( 301)		x->zpp_inner->depth = (int)1;
HXLINE( 302)		if (hx::IsNotNull( this->space )) {
HXLINE( 302)			this->space->remCompound(x->zpp_inner);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Compound_obj,compounds_subber,(void))

 ::nape::phys::Compound ZPP_Compound_obj::copy(::Array< ::Dynamic> dict,::Array< ::Dynamic> todo){
            	HX_GC_STACKFRAME(&_hx_pos_0189a2997f533bdc_336_copy)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(dict,"dict")
            	HX_STACK_ARG(todo,"todo")
HXLINE( 337)		HX_VARI( bool,root) = hx::IsNull( dict );
HXLINE( 338)		if (hx::IsNull( dict )) {
HXLINE( 338)			dict = ::Array_obj< ::Dynamic>::__new();
            		}
HXLINE( 339)		if (hx::IsNull( todo )) {
HXLINE( 339)			todo = ::Array_obj< ::Dynamic>::__new();
            		}
HXLINE( 340)		HX_VARI(  ::nape::phys::Compound,ret) =  ::nape::phys::Compound_obj::__alloc( HX_CTX );
HXLINE( 341)		{
HXLINE( 342)			HX_VARI(  ::zpp_nape::util::ZNPNode_ZPP_Compound,cx_ite) = this->compounds->head;
HXLINE( 343)			while(hx::IsNotNull( cx_ite )){
HXLINE( 345)				{
HXLINE( 346)					HX_VARI(  ::nape::phys::Compound,cc) = cx_ite->elt->copy(dict,todo);
HXLINE( 347)					{
HXLINE( 347)						cc->zpp_inner->immutable_midstep(HX_("Compound::compound",76,31,1b,54));
HXDLIN( 347)						 ::nape::phys::Compound _hx_tmp;
HXDLIN( 347)						if (hx::IsNull( cc->zpp_inner->compound )) {
HXLINE( 347)							_hx_tmp = null();
            						}
            						else {
HXLINE( 347)							_hx_tmp = cc->zpp_inner->compound->outer;
            						}
HXDLIN( 347)						if (hx::IsNotEq( _hx_tmp,ret )) {
HXLINE( 347)							 ::nape::phys::Compound _hx_tmp1;
HXDLIN( 347)							if (hx::IsNull( cc->zpp_inner->compound )) {
HXLINE( 347)								_hx_tmp1 = null();
            							}
            							else {
HXLINE( 347)								_hx_tmp1 = cc->zpp_inner->compound->outer;
            							}
HXDLIN( 347)							if (hx::IsNotNull( _hx_tmp1 )) {
HXLINE( 347)								 ::nape::phys::Compound _this;
HXDLIN( 347)								if (hx::IsNull( cc->zpp_inner->compound )) {
HXLINE( 347)									_this = null();
            								}
            								else {
HXLINE( 347)									_this = cc->zpp_inner->compound->outer;
            								}
HXDLIN( 347)								_this->zpp_inner->wrap_compounds->remove(cc);
            							}
HXDLIN( 347)							if (hx::IsNotNull( ret )) {
HXLINE( 347)								HX_VARI_NAME(  ::nape::phys::CompoundList,_this1,"_this") = ret->zpp_inner->wrap_compounds;
HXDLIN( 347)								if (_this1->zpp_inner->reverse_flag) {
HXLINE( 347)									_this1->push(cc);
            								}
            								else {
HXLINE( 347)									_this1->unshift(cc);
            								}
            							}
            						}
            					}
            				}
HXLINE( 349)				cx_ite = cx_ite->next;
            			}
            		}
HXLINE( 352)		{
HXLINE( 353)			HX_VARI_NAME(  ::zpp_nape::util::ZNPNode_ZPP_Body,cx_ite1,"cx_ite") = this->bodies->head;
HXLINE( 354)			while(hx::IsNotNull( cx_ite1 )){
HXLINE( 355)				HX_VARI(  ::zpp_nape::phys::ZPP_Body,b) = cx_ite1->elt;
HXLINE( 356)				{
HXLINE( 357)					HX_VARI(  ::nape::phys::Body,bc) = b->outer->copy();
HXLINE( 358)					dict->push(::zpp_nape::constraint::ZPP_CopyHelper_obj::dict(b->id,bc));
HXLINE( 359)					{
HXLINE( 359)						 ::nape::phys::Compound _hx_tmp2;
HXDLIN( 359)						if (hx::IsNull( bc->zpp_inner->compound )) {
HXLINE( 359)							_hx_tmp2 = null();
            						}
            						else {
HXLINE( 359)							_hx_tmp2 = bc->zpp_inner->compound->outer;
            						}
HXDLIN( 359)						if (hx::IsNotEq( _hx_tmp2,ret )) {
HXLINE( 359)							 ::nape::phys::Compound _hx_tmp3;
HXDLIN( 359)							if (hx::IsNull( bc->zpp_inner->compound )) {
HXLINE( 359)								_hx_tmp3 = null();
            							}
            							else {
HXLINE( 359)								_hx_tmp3 = bc->zpp_inner->compound->outer;
            							}
HXDLIN( 359)							if (hx::IsNotNull( _hx_tmp3 )) {
HXLINE( 359)								 ::nape::phys::Compound _this2;
HXDLIN( 359)								if (hx::IsNull( bc->zpp_inner->compound )) {
HXLINE( 359)									_this2 = null();
            								}
            								else {
HXLINE( 359)									_this2 = bc->zpp_inner->compound->outer;
            								}
HXDLIN( 359)								_this2->zpp_inner->wrap_bodies->remove(bc);
            							}
HXDLIN( 359)							if (hx::IsNotNull( ret )) {
HXLINE( 359)								HX_VARI_NAME(  ::nape::phys::BodyList,_this3,"_this") = ret->zpp_inner->wrap_bodies;
HXDLIN( 359)								if (_this3->zpp_inner->reverse_flag) {
HXLINE( 359)									_this3->push(bc);
            								}
            								else {
HXLINE( 359)									_this3->unshift(bc);
            								}
            							}
            						}
            					}
            				}
HXLINE( 361)				cx_ite1 = cx_ite1->next;
            			}
            		}
HXLINE( 364)		{
HXLINE( 365)			HX_VARI_NAME(  ::zpp_nape::util::ZNPNode_ZPP_Constraint,cx_ite2,"cx_ite") = this->constraints->head;
HXLINE( 366)			while(hx::IsNotNull( cx_ite2 )){
HXLINE( 368)				{
HXLINE( 369)					HX_VARI_NAME(  ::nape::constraint::Constraint,cc1,"cc") = cx_ite2->elt->copy(dict,todo);
HXLINE( 370)					{
HXLINE( 370)						 ::nape::phys::Compound _hx_tmp4;
HXDLIN( 370)						if (hx::IsNull( cc1->zpp_inner->compound )) {
HXLINE( 370)							_hx_tmp4 = null();
            						}
            						else {
HXLINE( 370)							_hx_tmp4 = cc1->zpp_inner->compound->outer;
            						}
HXDLIN( 370)						if (hx::IsNotEq( _hx_tmp4,ret )) {
HXLINE( 370)							 ::nape::phys::Compound _hx_tmp5;
HXDLIN( 370)							if (hx::IsNull( cc1->zpp_inner->compound )) {
HXLINE( 370)								_hx_tmp5 = null();
            							}
            							else {
HXLINE( 370)								_hx_tmp5 = cc1->zpp_inner->compound->outer;
            							}
HXDLIN( 370)							if (hx::IsNotNull( _hx_tmp5 )) {
HXLINE( 370)								 ::nape::phys::Compound _this4;
HXDLIN( 370)								if (hx::IsNull( cc1->zpp_inner->compound )) {
HXLINE( 370)									_this4 = null();
            								}
            								else {
HXLINE( 370)									_this4 = cc1->zpp_inner->compound->outer;
            								}
HXDLIN( 370)								_this4->zpp_inner->wrap_constraints->remove(cc1);
            							}
HXDLIN( 370)							if (hx::IsNotNull( ret )) {
HXLINE( 370)								HX_VARI_NAME(  ::nape::constraint::ConstraintList,_this5,"_this") = ret->zpp_inner->wrap_constraints;
HXDLIN( 370)								if (_this5->zpp_inner->reverse_flag) {
HXLINE( 370)									_this5->push(cc1);
            								}
            								else {
HXLINE( 370)									_this5->unshift(cc1);
            								}
            							}
            						}
            					}
            				}
HXLINE( 372)				cx_ite2 = cx_ite2->next;
            			}
            		}
HXLINE( 375)		if (root) {
HXLINE( 376)			while((todo->length > (int)0)){
HXLINE( 377)				HX_VARI(  ::zpp_nape::constraint::ZPP_CopyHelper,xcb) = todo->pop().StaticCast<  ::zpp_nape::constraint::ZPP_CopyHelper >();
HXLINE( 378)				{
HXLINE( 378)					HX_VARI( int,_g) = (int)0;
HXDLIN( 378)					while((_g < dict->length)){
HXLINE( 378)						HX_VARI(  ::zpp_nape::constraint::ZPP_CopyHelper,idc) = dict->__get(_g).StaticCast<  ::zpp_nape::constraint::ZPP_CopyHelper >();
HXDLIN( 378)						_g = (_g + (int)1);
HXLINE( 379)						if ((idc->id == xcb->id)) {
HXLINE( 380)							xcb->cb(idc->bc);
HXLINE( 381)							goto _hx_goto_18;
            						}
            					}
            					_hx_goto_18:;
            				}
            			}
            		}
HXLINE( 386)		this->copyto(ret);
HXLINE( 387)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Compound_obj,copy,return )


hx::ObjectPtr< ZPP_Compound_obj > ZPP_Compound_obj::__new() {
	hx::ObjectPtr< ZPP_Compound_obj > __this = new ZPP_Compound_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ZPP_Compound_obj > ZPP_Compound_obj::__alloc(hx::Ctx *_hx_ctx) {
	ZPP_Compound_obj *__this = (ZPP_Compound_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ZPP_Compound_obj), true, "zpp_nape.phys.ZPP_Compound"));
	*(void **)__this = ZPP_Compound_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ZPP_Compound_obj::ZPP_Compound_obj()
{
}

void ZPP_Compound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Compound);
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(bodies,"bodies");
	HX_MARK_MEMBER_NAME(constraints,"constraints");
	HX_MARK_MEMBER_NAME(compounds,"compounds");
	HX_MARK_MEMBER_NAME(wrap_bodies,"wrap_bodies");
	HX_MARK_MEMBER_NAME(wrap_constraints,"wrap_constraints");
	HX_MARK_MEMBER_NAME(wrap_compounds,"wrap_compounds");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(compound,"compound");
	HX_MARK_MEMBER_NAME(space,"space");
	 ::zpp_nape::phys::ZPP_Interactor_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_Compound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(bodies,"bodies");
	HX_VISIT_MEMBER_NAME(constraints,"constraints");
	HX_VISIT_MEMBER_NAME(compounds,"compounds");
	HX_VISIT_MEMBER_NAME(wrap_bodies,"wrap_bodies");
	HX_VISIT_MEMBER_NAME(wrap_constraints,"wrap_constraints");
	HX_VISIT_MEMBER_NAME(wrap_compounds,"wrap_compounds");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(compound,"compound");
	HX_VISIT_MEMBER_NAME(space,"space");
	 ::zpp_nape::phys::ZPP_Interactor_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ZPP_Compound_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return hx::Val( copy_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { return hx::Val( outer); }
		if (HX_FIELD_EQ(inName,"depth") ) { return hx::Val( depth); }
		if (HX_FIELD_EQ(inName,"space") ) { return hx::Val( space); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bodies") ) { return hx::Val( bodies); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"compound") ) { return hx::Val( compound); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"compounds") ) { return hx::Val( compounds); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"breakApart") ) { return hx::Val( breakApart_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"constraints") ) { return hx::Val( constraints); }
		if (HX_FIELD_EQ(inName,"wrap_bodies") ) { return hx::Val( wrap_bodies); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addedToSpace") ) { return hx::Val( addedToSpace_dyn()); }
		if (HX_FIELD_EQ(inName,"bodies_adder") ) { return hx::Val( bodies_adder_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bodies_subber") ) { return hx::Val( bodies_subber_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"wrap_compounds") ) { return hx::Val( wrap_compounds); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"compounds_adder") ) { return hx::Val( compounds_adder_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"wrap_constraints") ) { return hx::Val( wrap_constraints); }
		if (HX_FIELD_EQ(inName,"removedFromSpace") ) { return hx::Val( removedFromSpace_dyn()); }
		if (HX_FIELD_EQ(inName,"compounds_subber") ) { return hx::Val( compounds_subber_dyn()); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"constraints_adder") ) { return hx::Val( constraints_adder_dyn()); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__imutable_midstep") ) { return hx::Val( _hx___imutable_midstep_dyn()); }
		if (HX_FIELD_EQ(inName,"constraints_subber") ) { return hx::Val( constraints_subber_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ZPP_Compound_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast<  ::nape::phys::Compound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depth") ) { depth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast<  ::zpp_nape::space::ZPP_Space >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bodies") ) { bodies=inValue.Cast<  ::zpp_nape::util::ZNPList_ZPP_Body >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"compound") ) { compound=inValue.Cast<  ::zpp_nape::phys::ZPP_Compound >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"compounds") ) { compounds=inValue.Cast<  ::zpp_nape::util::ZNPList_ZPP_Compound >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"constraints") ) { constraints=inValue.Cast<  ::zpp_nape::util::ZNPList_ZPP_Constraint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_bodies") ) { wrap_bodies=inValue.Cast<  ::nape::phys::BodyList >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"wrap_compounds") ) { wrap_compounds=inValue.Cast<  ::nape::phys::CompoundList >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"wrap_constraints") ) { wrap_constraints=inValue.Cast<  ::nape::constraint::ConstraintList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Compound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"));
	outFields->push(HX_HCSTRING("bodies","\x80","\x1b","\xdd","\x5a"));
	outFields->push(HX_HCSTRING("constraints","\x76","\x51","\xb4","\x17"));
	outFields->push(HX_HCSTRING("compounds","\xa8","\x3a","\xfb","\x13"));
	outFields->push(HX_HCSTRING("wrap_bodies","\x95","\x20","\x6c","\x45"));
	outFields->push(HX_HCSTRING("wrap_constraints","\x41","\xc0","\x11","\xb5"));
	outFields->push(HX_HCSTRING("wrap_compounds","\xb3","\xd0","\xbe","\x48"));
	outFields->push(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"));
	outFields->push(HX_HCSTRING("compound","\x6b","\xc3","\xcf","\x81"));
	outFields->push(HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ZPP_Compound_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::phys::Compound*/ ,(int)offsetof(ZPP_Compound_obj,outer),HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Body*/ ,(int)offsetof(ZPP_Compound_obj,bodies),HX_HCSTRING("bodies","\x80","\x1b","\xdd","\x5a")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Constraint*/ ,(int)offsetof(ZPP_Compound_obj,constraints),HX_HCSTRING("constraints","\x76","\x51","\xb4","\x17")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Compound*/ ,(int)offsetof(ZPP_Compound_obj,compounds),HX_HCSTRING("compounds","\xa8","\x3a","\xfb","\x13")},
	{hx::fsObject /*::nape::phys::BodyList*/ ,(int)offsetof(ZPP_Compound_obj,wrap_bodies),HX_HCSTRING("wrap_bodies","\x95","\x20","\x6c","\x45")},
	{hx::fsObject /*::nape::constraint::ConstraintList*/ ,(int)offsetof(ZPP_Compound_obj,wrap_constraints),HX_HCSTRING("wrap_constraints","\x41","\xc0","\x11","\xb5")},
	{hx::fsObject /*::nape::phys::CompoundList*/ ,(int)offsetof(ZPP_Compound_obj,wrap_compounds),HX_HCSTRING("wrap_compounds","\xb3","\xd0","\xbe","\x48")},
	{hx::fsInt,(int)offsetof(ZPP_Compound_obj,depth),HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Compound*/ ,(int)offsetof(ZPP_Compound_obj,compound),HX_HCSTRING("compound","\x6b","\xc3","\xcf","\x81")},
	{hx::fsObject /*::zpp_nape::space::ZPP_Space*/ ,(int)offsetof(ZPP_Compound_obj,space),HX_HCSTRING("space","\xc6","\x8c","\x66","\x81")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ZPP_Compound_obj_sStaticStorageInfo = 0;
#endif

static ::String ZPP_Compound_obj_sMemberFields[] = {
	HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"),
	HX_HCSTRING("bodies","\x80","\x1b","\xdd","\x5a"),
	HX_HCSTRING("constraints","\x76","\x51","\xb4","\x17"),
	HX_HCSTRING("compounds","\xa8","\x3a","\xfb","\x13"),
	HX_HCSTRING("wrap_bodies","\x95","\x20","\x6c","\x45"),
	HX_HCSTRING("wrap_constraints","\x41","\xc0","\x11","\xb5"),
	HX_HCSTRING("wrap_compounds","\xb3","\xd0","\xbe","\x48"),
	HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"),
	HX_HCSTRING("compound","\x6b","\xc3","\xcf","\x81"),
	HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"),
	HX_HCSTRING("__imutable_midstep","\xd2","\xbc","\x7d","\x83"),
	HX_HCSTRING("addedToSpace","\x6b","\x44","\xb0","\x09"),
	HX_HCSTRING("removedFromSpace","\x3c","\x43","\xd1","\xb7"),
	HX_HCSTRING("breakApart","\x95","\xdf","\x18","\x5e"),
	HX_HCSTRING("bodies_adder","\x8f","\xd7","\x09","\x05"),
	HX_HCSTRING("bodies_subber","\xee","\x61","\x7a","\x5e"),
	HX_HCSTRING("constraints_adder","\x05","\xea","\x56","\x64"),
	HX_HCSTRING("constraints_subber","\xb8","\x76","\x9d","\x62"),
	HX_HCSTRING("compounds_adder","\xb7","\xc4","\x63","\x01"),
	HX_HCSTRING("compounds_subber","\xc6","\xf7","\xcf","\x30"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	::String(null()) };

static void ZPP_Compound_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Compound_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ZPP_Compound_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Compound_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_Compound_obj::__mClass;

void ZPP_Compound_obj::__register()
{
	hx::Object *dummy = new ZPP_Compound_obj;
	ZPP_Compound_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.phys.ZPP_Compound","\xcb","\xb7","\x91","\x55");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ZPP_Compound_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ZPP_Compound_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_Compound_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ZPP_Compound_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ZPP_Compound_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ZPP_Compound_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace zpp_nape
} // end namespace phys