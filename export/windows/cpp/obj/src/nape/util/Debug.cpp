#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbTypeIterator
#include <nape/callbacks/CbTypeIterator.h>
#endif
#ifndef INCLUDED_nape_callbacks_ListenerIterator
#include <nape/callbacks/ListenerIterator.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintIterator
#include <nape/constraint/ConstraintIterator.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterIterator
#include <nape/dynamics/ArbiterIterator.h>
#endif
#ifndef INCLUDED_nape_dynamics_ContactIterator
#include <nape/dynamics/ContactIterator.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionGroupIterator
#include <nape/dynamics/InteractionGroupIterator.h>
#endif
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_ConvexResultIterator
#include <nape/geom/ConvexResultIterator.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPoly
#include <nape/geom/GeomPoly.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPolyIterator
#include <nape/geom/GeomPolyIterator.h>
#endif
#ifndef INCLUDED_nape_geom_Mat23
#include <nape/geom/Mat23.h>
#endif
#ifndef INCLUDED_nape_geom_RayResultIterator
#include <nape/geom/RayResultIterator.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2Iterator
#include <nape/geom/Vec2Iterator.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2List
#include <nape/geom/Vec2List.h>
#endif
#ifndef INCLUDED_nape_geom_Vec3
#include <nape/geom/Vec3.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyIterator
#include <nape/phys/BodyIterator.h>
#endif
#ifndef INCLUDED_nape_phys_CompoundIterator
#include <nape/phys/CompoundIterator.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_phys_InteractorIterator
#include <nape/phys/InteractorIterator.h>
#endif
#ifndef INCLUDED_nape_shape_Circle
#include <nape/shape/Circle.h>
#endif
#ifndef INCLUDED_nape_shape_EdgeIterator
#include <nape/shape/EdgeIterator.h>
#endif
#ifndef INCLUDED_nape_shape_Polygon
#include <nape/shape/Polygon.h>
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
#ifndef INCLUDED_nape_util_Debug
#include <nape/util/Debug.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_CapsStyle
#include <openfl/_legacy/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_JointStyle
#include <openfl/_legacy/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_LineScaleMode
#include <openfl/_legacy/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Shape
#include <openfl/_legacy/display/Shape.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Callback
#include <zpp_nape/callbacks/ZPP_Callback.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSet
#include <zpp_nape/callbacks/ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSetPair
#include <zpp_nape/callbacks/ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#include <zpp_nape/dynamics/ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Contact
#include <zpp_nape/dynamics/ZPP_Contact.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter
#include <zpp_nape/dynamics/ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_SensorArbiter
#include <zpp_nape/dynamics/ZPP_SensorArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_CutInt
#include <zpp_nape/geom/ZPP_CutInt.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_CutVert
#include <zpp_nape/geom/ZPP_CutVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVertexIterator
#include <zpp_nape/geom/ZPP_GeomVertexIterator.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchPair
#include <zpp_nape/geom/ZPP_MarchPair.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchSpan
#include <zpp_nape/geom/ZPP_MarchSpan.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Mat23
#include <zpp_nape/geom/ZPP_Mat23.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionPair
#include <zpp_nape/geom/ZPP_PartitionPair.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionVertex
#include <zpp_nape/geom/ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionedPoly
#include <zpp_nape/geom/ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleEvent
#include <zpp_nape/geom/ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleSeg
#include <zpp_nape/geom/ZPP_SimpleSeg.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleVert
#include <zpp_nape/geom/ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimplifyP
#include <zpp_nape/geom/ZPP_SimplifyP.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimplifyV
#include <zpp_nape/geom/ZPP_SimplifyV.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_ToiEvent
#include <zpp_nape/geom/ZPP_ToiEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_FluidProperties
#include <zpp_nape/phys/ZPP_FluidProperties.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Material
#include <zpp_nape/phys/ZPP_Material.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Circle
#include <zpp_nape/shape/ZPP_Circle.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Edge
#include <zpp_nape/shape/ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBNode
#include <zpp_nape/space/ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBPair
#include <zpp_nape/space/ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_CallbackSet
#include <zpp_nape/space/ZPP_CallbackSet.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Island
#include <zpp_nape/space/ZPP_Island.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_SweepData
#include <zpp_nape/space/ZPP_SweepData.h>
#endif
#ifndef INCLUDED_zpp_nape_util_Hashable2_Boolfalse
#include <zpp_nape/util/Hashable2_Boolfalse.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ConvexResult
#include <zpp_nape/util/ZNPNode_ConvexResult.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_RayResult
#include <zpp_nape/util/ZNPNode_RayResult.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_AABBNode
#include <zpp_nape/util/ZNPNode_ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_AABBPair
#include <zpp_nape/util/ZNPNode_ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Arbiter
#include <zpp_nape/util/ZNPNode_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Body
#include <zpp_nape/util/ZNPNode_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_BodyListener
#include <zpp_nape/util/ZNPNode_ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CallbackSet
#include <zpp_nape/util/ZNPNode_ZPP_CallbackSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSet
#include <zpp_nape/util/ZNPNode_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSetPair
#include <zpp_nape/util/ZNPNode_ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType
#include <zpp_nape/util/ZNPNode_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_ColArbiter
#include <zpp_nape/util/ZNPNode_ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Component
#include <zpp_nape/util/ZNPNode_ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Compound
#include <zpp_nape/util/ZNPNode_ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Constraint
#include <zpp_nape/util/ZNPNode_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_ConstraintListener
#include <zpp_nape/util/ZNPNode_ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CutInt
#include <zpp_nape/util/ZNPNode_ZPP_CutInt.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CutVert
#include <zpp_nape/util/ZNPNode_ZPP_CutVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Edge
#include <zpp_nape/util/ZNPNode_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_FluidArbiter
#include <zpp_nape/util/ZNPNode_ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_GeomPoly
#include <zpp_nape/util/ZNPNode_ZPP_GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_GeomVert
#include <zpp_nape/util/ZNPNode_ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_InteractionGroup
#include <zpp_nape/util/ZNPNode_ZPP_InteractionGroup.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_InteractionListener
#include <zpp_nape/util/ZNPNode_ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Interactor
#include <zpp_nape/util/ZNPNode_ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Listener
#include <zpp_nape/util/ZNPNode_ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_PartitionVertex
#include <zpp_nape/util/ZNPNode_ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_PartitionedPoly
#include <zpp_nape/util/ZNPNode_ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SensorArbiter
#include <zpp_nape/util/ZNPNode_ZPP_SensorArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimpleEvent
#include <zpp_nape/util/ZNPNode_ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimpleVert
#include <zpp_nape/util/ZNPNode_ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimplifyP
#include <zpp_nape/util/ZNPNode_ZPP_SimplifyP.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_ToiEvent
#include <zpp_nape/util/ZNPNode_ZPP_ToiEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Vec2
#include <zpp_nape/util/ZNPNode_ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Debug
#include <zpp_nape/util/ZPP_Debug.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_Body
#include <zpp_nape/util/ZPP_Set_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_CbSet
#include <zpp_nape/util/ZPP_Set_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_CbSetPair
#include <zpp_nape/util/ZPP_Set_ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_PartitionPair
#include <zpp_nape/util/ZPP_Set_ZPP_PartitionPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_PartitionVertex
#include <zpp_nape/util/ZPP_Set_ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleEvent
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleSeg
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleSeg.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleVert
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeDebug
#include <zpp_nape/util/ZPP_ShapeDebug.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace nape{
namespace util{

Void Debug_obj::__construct()
{
HX_STACK_FRAME("nape.util.Debug","new",0xf98ab5ff,"nape.util.Debug.new","nape/util/Debug.hx",179,0xfa9d0ab1)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1259)
	this->cullingEnabled = false;
	HX_STACK_LINE(1213)
	this->colour = null();
	HX_STACK_LINE(1181)
	this->drawConstraints = false;
	HX_STACK_LINE(1176)
	this->drawShapeAngleIndicators = false;
	HX_STACK_LINE(1169)
	this->drawShapeDetail = false;
	HX_STACK_LINE(1162)
	this->drawBodyDetail = false;
	HX_STACK_LINE(1155)
	this->drawBodies = false;
	HX_STACK_LINE(1150)
	this->drawSensorArbiters = false;
	HX_STACK_LINE(1143)
	this->drawFluidArbiters = false;
	HX_STACK_LINE(1136)
	this->drawCollisionArbiters = false;
	HX_STACK_LINE(1129)
	this->zpp_inner = null();
	HX_STACK_LINE(1221)
	this->drawCollisionArbiters = false;
	HX_STACK_LINE(1222)
	this->drawFluidArbiters = false;
	HX_STACK_LINE(1223)
	this->drawSensorArbiters = false;
	HX_STACK_LINE(1224)
	this->drawBodies = true;
	HX_STACK_LINE(1225)
	this->drawShapeAngleIndicators = true;
	HX_STACK_LINE(1226)
	this->drawBodyDetail = false;
	HX_STACK_LINE(1227)
	this->drawShapeDetail = false;
	HX_STACK_LINE(1228)
	this->drawConstraints = false;
	HX_STACK_LINE(1229)
	this->cullingEnabled = false;
	HX_STACK_LINE(1230)
	this->colour = null();
}
;
	return null();
}

//Debug_obj::~Debug_obj() { }

Dynamic Debug_obj::__CreateEmpty() { return  new Debug_obj; }
hx::ObjectPtr< Debug_obj > Debug_obj::__new()
{  hx::ObjectPtr< Debug_obj > _result_ = new Debug_obj();
	_result_->__construct();
	return _result_;}

Dynamic Debug_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Debug_obj > _result_ = new Debug_obj();
	_result_->__construct();
	return _result_;}

int Debug_obj::get_bgColour( ){
	HX_STACK_FRAME("nape.util.Debug","get_bgColour",0x8c2c567b,"nape.util.Debug.get_bgColour","nape/util/Debug.hx",1191,0xfa9d0ab1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1192)
	::zpp_nape::util::ZPP_Debug tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1192)
	int tmp1 = tmp->bg_col;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1192)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,get_bgColour,return )

int Debug_obj::set_bgColour( int bgColour){
	HX_STACK_FRAME("nape.util.Debug","set_bgColour",0xa12579ef,"nape.util.Debug.set_bgColour","nape/util/Debug.hx",1194,0xfa9d0ab1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bgColour,"bgColour")
	HX_STACK_LINE(1195)
	{
		HX_STACK_LINE(1198)
		::zpp_nape::util::ZPP_Debug tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1198)
		int tmp1 = bgColour;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1198)
		tmp->d_shape->setbg(tmp1);
	}
	HX_STACK_LINE(1201)
	::zpp_nape::util::ZPP_Debug tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1201)
	int tmp1 = tmp->bg_col;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1201)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,set_bgColour,return )

::openfl::_legacy::display::DisplayObject Debug_obj::get_display( ){
	HX_STACK_FRAME("nape.util.Debug","get_display",0x5758a6f8,"nape.util.Debug.get_display","nape/util/Debug.hx",1239,0xfa9d0ab1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1244)
	::zpp_nape::util::ZPP_Debug tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1244)
	::openfl::_legacy::display::Shape tmp1 = tmp->d_shape->shape;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1244)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,get_display,return )

::nape::geom::Mat23 Debug_obj::get_transform( ){
	HX_STACK_FRAME("nape.util.Debug","get_transform",0xdfc2c3a2,"nape.util.Debug.get_transform","nape/util/Debug.hx",1273,0xfa9d0ab1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1274)
	::zpp_nape::util::ZPP_Debug tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1274)
	::zpp_nape::geom::ZPP_Mat23 tmp1 = tmp->xform;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1274)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1274)
	if ((tmp2)){
		HX_STACK_LINE(1274)
		::zpp_nape::util::ZPP_Debug tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1274)
		tmp3->setform();
	}
	HX_STACK_LINE(1275)
	::zpp_nape::util::ZPP_Debug tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1275)
	::nape::geom::Mat23 tmp4 = tmp3->xform->outer;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1275)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,get_transform,return )

::nape::geom::Mat23 Debug_obj::set_transform( ::nape::geom::Mat23 transform){
	HX_STACK_FRAME("nape.util.Debug","set_transform",0x24c8a5ae,"nape.util.Debug.set_transform","nape/util/Debug.hx",1277,0xfa9d0ab1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(transform,"transform")
	HX_STACK_LINE(1278)
	{
		HX_STACK_LINE(1282)
		::nape::geom::Mat23 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1282)
		{
			HX_STACK_LINE(1282)
			::zpp_nape::util::ZPP_Debug tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1282)
			::zpp_nape::geom::ZPP_Mat23 tmp2 = tmp1->xform;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1282)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1282)
			if ((tmp3)){
				HX_STACK_LINE(1282)
				::zpp_nape::util::ZPP_Debug tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1282)
				tmp4->setform();
			}
			HX_STACK_LINE(1282)
			::zpp_nape::util::ZPP_Debug tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1282)
			tmp = tmp4->xform->outer;
		}
		HX_STACK_LINE(1282)
		::nape::geom::Mat23 tmp1 = transform;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1282)
		tmp->set(tmp1);
	}
	HX_STACK_LINE(1284)
	::nape::geom::Mat23 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1284)
	{
		HX_STACK_LINE(1284)
		::zpp_nape::util::ZPP_Debug tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1284)
		::zpp_nape::geom::ZPP_Mat23 tmp2 = tmp1->xform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1284)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1284)
		if ((tmp3)){
			HX_STACK_LINE(1284)
			::zpp_nape::util::ZPP_Debug tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1284)
			tmp4->setform();
		}
		HX_STACK_LINE(1284)
		::zpp_nape::util::ZPP_Debug tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1284)
		tmp = tmp4->xform->outer;
	}
	HX_STACK_LINE(1284)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,set_transform,return )

Void Debug_obj::clear( ){
{
		HX_STACK_FRAME("nape.util.Debug","clear",0x294e3cec,"nape.util.Debug.clear","nape/util/Debug.hx",1289,0xfa9d0ab1)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,clear,(void))

Void Debug_obj::flush( ){
{
		HX_STACK_FRAME("nape.util.Debug","flush",0xe38e2e23,"nape.util.Debug.flush","nape/util/Debug.hx",1295,0xfa9d0ab1)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,flush,(void))

Void Debug_obj::draw( Dynamic object){
{
		HX_STACK_FRAME("nape.util.Debug","draw",0x59423185,"nape.util.Debug.draw","nape/util/Debug.hx",1310,0xfa9d0ab1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,draw,(void))

Void Debug_obj::drawLine( ::nape::geom::Vec2 start,::nape::geom::Vec2 end,int colour){
{
		HX_STACK_FRAME("nape.util.Debug","drawLine",0x8b861c19,"nape.util.Debug.drawLine","nape/util/Debug.hx",1321,0xfa9d0ab1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(end,"end")
		HX_STACK_ARG(colour,"colour")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Debug_obj,drawLine,(void))

Void Debug_obj::drawCurve( ::nape::geom::Vec2 start,::nape::geom::Vec2 control,::nape::geom::Vec2 end,int colour){
{
		HX_STACK_FRAME("nape.util.Debug","drawCurve",0x6328e8ea,"nape.util.Debug.drawCurve","nape/util/Debug.hx",1333,0xfa9d0ab1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(control,"control")
		HX_STACK_ARG(end,"end")
		HX_STACK_ARG(colour,"colour")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Debug_obj,drawCurve,(void))

Void Debug_obj::drawCircle( ::nape::geom::Vec2 position,Float radius,int colour){
{
		HX_STACK_FRAME("nape.util.Debug","drawCircle",0x77c58975,"nape.util.Debug.drawCircle","nape/util/Debug.hx",1346,0xfa9d0ab1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_ARG(colour,"colour")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Debug_obj,drawCircle,(void))

Void Debug_obj::drawAABB( ::nape::geom::AABB aabb,int colour){
{
		HX_STACK_FRAME("nape.util.Debug","drawAABB",0x842242a5,"nape.util.Debug.drawAABB","nape/util/Debug.hx",1356,0xfa9d0ab1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(aabb,"aabb")
		HX_STACK_ARG(colour,"colour")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Debug_obj,drawAABB,(void))

Void Debug_obj::drawFilledTriangle( ::nape::geom::Vec2 p0,::nape::geom::Vec2 p1,::nape::geom::Vec2 p2,int colour){
{
		HX_STACK_FRAME("nape.util.Debug","drawFilledTriangle",0x76257eef,"nape.util.Debug.drawFilledTriangle","nape/util/Debug.hx",1368,0xfa9d0ab1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p0,"p0")
		HX_STACK_ARG(p1,"p1")
		HX_STACK_ARG(p2,"p2")
		HX_STACK_ARG(colour,"colour")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Debug_obj,drawFilledTriangle,(void))

Void Debug_obj::drawFilledCircle( ::nape::geom::Vec2 position,Float radius,int colour){
{
		HX_STACK_FRAME("nape.util.Debug","drawFilledCircle",0x96090a77,"nape.util.Debug.drawFilledCircle","nape/util/Debug.hx",1381,0xfa9d0ab1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_ARG(colour,"colour")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Debug_obj,drawFilledCircle,(void))

Void Debug_obj::drawPolygon( Dynamic polygon,int colour){
{
		HX_STACK_FRAME("nape.util.Debug","drawPolygon",0x71ed6375,"nape.util.Debug.drawPolygon","nape/util/Debug.hx",1395,0xfa9d0ab1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(polygon,"polygon")
		HX_STACK_ARG(colour,"colour")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Debug_obj,drawPolygon,(void))

Void Debug_obj::drawFilledPolygon( Dynamic polygon,int colour){
{
		HX_STACK_FRAME("nape.util.Debug","drawFilledPolygon",0xcebac433,"nape.util.Debug.drawFilledPolygon","nape/util/Debug.hx",1409,0xfa9d0ab1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(polygon,"polygon")
		HX_STACK_ARG(colour,"colour")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Debug_obj,drawFilledPolygon,(void))

Void Debug_obj::drawSpring( ::nape::geom::Vec2 start,::nape::geom::Vec2 end,int colour,hx::Null< int >  __o_coils,hx::Null< Float >  __o_radius){
int coils = __o_coils.Default(3);
Float radius = __o_radius.Default(((Float)3.0));
	HX_STACK_FRAME("nape.util.Debug","drawSpring",0xe54dee32,"nape.util.Debug.drawSpring","nape/util/Debug.hx",1423,0xfa9d0ab1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(end,"end")
	HX_STACK_ARG(colour,"colour")
	HX_STACK_ARG(coils,"coils")
	HX_STACK_ARG(radius,"radius")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Debug_obj,drawSpring,(void))

::String Debug_obj::version( ){
	HX_STACK_FRAME("nape.util.Debug","version",0x98b58837,"nape.util.Debug.version","nape/util/Debug.hx",184,0xfa9d0ab1)
	HX_STACK_LINE(184)
	return HX_HCSTRING("Nape 2.0.19","\x3a","\xf2","\x53","\xc7");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,version,return )

Void Debug_obj::clearObjectPools( ){
{
		HX_STACK_FRAME("nape.util.Debug","clearObjectPools",0x7192474c,"nape.util.Debug.clearObjectPools","nape/util/Debug.hx",189,0xfa9d0ab1)
		HX_STACK_LINE(192)
		while((true)){
			HX_STACK_LINE(192)
			::nape::constraint::ConstraintIterator tmp = ::nape::constraint::ConstraintIterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(192)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(192)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(192)
			if ((tmp2)){
				HX_STACK_LINE(192)
				break;
			}
			HX_STACK_LINE(193)
			::nape::constraint::ConstraintIterator tmp3 = ::nape::constraint::ConstraintIterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(193)
			::nape::constraint::ConstraintIterator nxt = tmp3->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(194)
			::nape::constraint::ConstraintIterator tmp4 = ::nape::constraint::ConstraintIterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(194)
			tmp4->zpp_next = null();
			HX_STACK_LINE(195)
			::nape::constraint::ConstraintIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(199)
		while((true)){
			HX_STACK_LINE(199)
			::nape::phys::InteractorIterator tmp = ::nape::phys::InteractorIterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(199)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(199)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(199)
			if ((tmp2)){
				HX_STACK_LINE(199)
				break;
			}
			HX_STACK_LINE(200)
			::nape::phys::InteractorIterator tmp3 = ::nape::phys::InteractorIterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(200)
			::nape::phys::InteractorIterator nxt = tmp3->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(201)
			::nape::phys::InteractorIterator tmp4 = ::nape::phys::InteractorIterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(201)
			tmp4->zpp_next = null();
			HX_STACK_LINE(202)
			::nape::phys::InteractorIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(206)
		while((true)){
			HX_STACK_LINE(206)
			::nape::phys::BodyIterator tmp = ::nape::phys::BodyIterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(206)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(206)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(206)
			if ((tmp2)){
				HX_STACK_LINE(206)
				break;
			}
			HX_STACK_LINE(207)
			::nape::phys::BodyIterator tmp3 = ::nape::phys::BodyIterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(207)
			::nape::phys::BodyIterator nxt = tmp3->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(208)
			::nape::phys::BodyIterator tmp4 = ::nape::phys::BodyIterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(208)
			tmp4->zpp_next = null();
			HX_STACK_LINE(209)
			::nape::phys::BodyIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(213)
		while((true)){
			HX_STACK_LINE(213)
			::nape::phys::CompoundIterator tmp = ::nape::phys::CompoundIterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(213)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(213)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(213)
			if ((tmp2)){
				HX_STACK_LINE(213)
				break;
			}
			HX_STACK_LINE(214)
			::nape::phys::CompoundIterator tmp3 = ::nape::phys::CompoundIterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(214)
			::nape::phys::CompoundIterator nxt = tmp3->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(215)
			::nape::phys::CompoundIterator tmp4 = ::nape::phys::CompoundIterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(215)
			tmp4->zpp_next = null();
			HX_STACK_LINE(216)
			::nape::phys::CompoundIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(220)
		while((true)){
			HX_STACK_LINE(220)
			::nape::callbacks::ListenerIterator tmp = ::nape::callbacks::ListenerIterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(220)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(220)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(220)
			if ((tmp2)){
				HX_STACK_LINE(220)
				break;
			}
			HX_STACK_LINE(221)
			::nape::callbacks::ListenerIterator tmp3 = ::nape::callbacks::ListenerIterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(221)
			::nape::callbacks::ListenerIterator nxt = tmp3->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(222)
			::nape::callbacks::ListenerIterator tmp4 = ::nape::callbacks::ListenerIterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(222)
			tmp4->zpp_next = null();
			HX_STACK_LINE(223)
			::nape::callbacks::ListenerIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(227)
		while((true)){
			HX_STACK_LINE(227)
			::nape::callbacks::CbTypeIterator tmp = ::nape::callbacks::CbTypeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(227)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(227)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(227)
			if ((tmp2)){
				HX_STACK_LINE(227)
				break;
			}
			HX_STACK_LINE(228)
			::nape::callbacks::CbTypeIterator tmp3 = ::nape::callbacks::CbTypeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(228)
			::nape::callbacks::CbTypeIterator nxt = tmp3->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(229)
			::nape::callbacks::CbTypeIterator tmp4 = ::nape::callbacks::CbTypeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(229)
			tmp4->zpp_next = null();
			HX_STACK_LINE(230)
			::nape::callbacks::CbTypeIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(234)
		while((true)){
			HX_STACK_LINE(234)
			::nape::geom::ConvexResultIterator tmp = ::nape::geom::ConvexResultIterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(234)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(234)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(234)
			if ((tmp2)){
				HX_STACK_LINE(234)
				break;
			}
			HX_STACK_LINE(235)
			::nape::geom::ConvexResultIterator tmp3 = ::nape::geom::ConvexResultIterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(235)
			::nape::geom::ConvexResultIterator nxt = tmp3->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(236)
			::nape::geom::ConvexResultIterator tmp4 = ::nape::geom::ConvexResultIterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(236)
			tmp4->zpp_next = null();
			HX_STACK_LINE(237)
			::nape::geom::ConvexResultIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(241)
		while((true)){
			HX_STACK_LINE(241)
			::nape::geom::GeomPolyIterator tmp = ::nape::geom::GeomPolyIterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(241)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(241)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(241)
			if ((tmp2)){
				HX_STACK_LINE(241)
				break;
			}
			HX_STACK_LINE(242)
			::nape::geom::GeomPolyIterator tmp3 = ::nape::geom::GeomPolyIterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(242)
			::nape::geom::GeomPolyIterator nxt = tmp3->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(243)
			::nape::geom::GeomPolyIterator tmp4 = ::nape::geom::GeomPolyIterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(243)
			tmp4->zpp_next = null();
			HX_STACK_LINE(244)
			::nape::geom::GeomPolyIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(248)
		while((true)){
			HX_STACK_LINE(248)
			::nape::geom::Vec2Iterator tmp = ::nape::geom::Vec2Iterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(248)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(248)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(248)
			if ((tmp2)){
				HX_STACK_LINE(248)
				break;
			}
			HX_STACK_LINE(249)
			::nape::geom::Vec2Iterator tmp3 = ::nape::geom::Vec2Iterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(249)
			::nape::geom::Vec2Iterator nxt = tmp3->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(250)
			::nape::geom::Vec2Iterator tmp4 = ::nape::geom::Vec2Iterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(250)
			tmp4->zpp_next = null();
			HX_STACK_LINE(251)
			::nape::geom::Vec2Iterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(255)
		while((true)){
			HX_STACK_LINE(255)
			::nape::geom::RayResultIterator tmp = ::nape::geom::RayResultIterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(255)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(255)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(255)
			if ((tmp2)){
				HX_STACK_LINE(255)
				break;
			}
			HX_STACK_LINE(256)
			::nape::geom::RayResultIterator tmp3 = ::nape::geom::RayResultIterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(256)
			::nape::geom::RayResultIterator nxt = tmp3->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(257)
			::nape::geom::RayResultIterator tmp4 = ::nape::geom::RayResultIterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(257)
			tmp4->zpp_next = null();
			HX_STACK_LINE(258)
			::nape::geom::RayResultIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(262)
		while((true)){
			HX_STACK_LINE(262)
			::nape::shape::ShapeIterator tmp = ::nape::shape::ShapeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(262)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(262)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(262)
			if ((tmp2)){
				HX_STACK_LINE(262)
				break;
			}
			HX_STACK_LINE(263)
			::nape::shape::ShapeIterator tmp3 = ::nape::shape::ShapeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(263)
			::nape::shape::ShapeIterator nxt = tmp3->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(264)
			::nape::shape::ShapeIterator tmp4 = ::nape::shape::ShapeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(264)
			tmp4->zpp_next = null();
			HX_STACK_LINE(265)
			::nape::shape::ShapeIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(269)
		while((true)){
			HX_STACK_LINE(269)
			::nape::shape::EdgeIterator tmp = ::nape::shape::EdgeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(269)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(269)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(269)
			if ((tmp2)){
				HX_STACK_LINE(269)
				break;
			}
			HX_STACK_LINE(270)
			::nape::shape::EdgeIterator tmp3 = ::nape::shape::EdgeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(270)
			::nape::shape::EdgeIterator nxt = tmp3->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(271)
			::nape::shape::EdgeIterator tmp4 = ::nape::shape::EdgeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(271)
			tmp4->zpp_next = null();
			HX_STACK_LINE(272)
			::nape::shape::EdgeIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(276)
		while((true)){
			HX_STACK_LINE(276)
			::nape::dynamics::ContactIterator tmp = ::nape::dynamics::ContactIterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(276)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(276)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(276)
			if ((tmp2)){
				HX_STACK_LINE(276)
				break;
			}
			HX_STACK_LINE(277)
			::nape::dynamics::ContactIterator tmp3 = ::nape::dynamics::ContactIterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(277)
			::nape::dynamics::ContactIterator nxt = tmp3->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(278)
			::nape::dynamics::ContactIterator tmp4 = ::nape::dynamics::ContactIterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(278)
			tmp4->zpp_next = null();
			HX_STACK_LINE(279)
			::nape::dynamics::ContactIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(283)
		while((true)){
			HX_STACK_LINE(283)
			::nape::dynamics::ArbiterIterator tmp = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(283)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(283)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(283)
			if ((tmp2)){
				HX_STACK_LINE(283)
				break;
			}
			HX_STACK_LINE(284)
			::nape::dynamics::ArbiterIterator tmp3 = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(284)
			::nape::dynamics::ArbiterIterator nxt = tmp3->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(285)
			::nape::dynamics::ArbiterIterator tmp4 = ::nape::dynamics::ArbiterIterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(285)
			tmp4->zpp_next = null();
			HX_STACK_LINE(286)
			::nape::dynamics::ArbiterIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(290)
		while((true)){
			HX_STACK_LINE(290)
			::nape::dynamics::InteractionGroupIterator tmp = ::nape::dynamics::InteractionGroupIterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(290)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(290)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(290)
			if ((tmp2)){
				HX_STACK_LINE(290)
				break;
			}
			HX_STACK_LINE(291)
			::nape::dynamics::InteractionGroupIterator tmp3 = ::nape::dynamics::InteractionGroupIterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(291)
			::nape::dynamics::InteractionGroupIterator nxt = tmp3->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(292)
			::nape::dynamics::InteractionGroupIterator tmp4 = ::nape::dynamics::InteractionGroupIterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(292)
			tmp4->zpp_next = null();
			HX_STACK_LINE(293)
			::nape::dynamics::InteractionGroupIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(298)
		while((true)){
			HX_STACK_LINE(298)
			::zpp_nape::util::ZNPNode_ZPP_CbType tmp = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(298)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(298)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(298)
			if ((tmp2)){
				HX_STACK_LINE(298)
				break;
			}
			HX_STACK_LINE(299)
			::zpp_nape::util::ZNPNode_ZPP_CbType tmp3 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(299)
			::zpp_nape::util::ZNPNode_ZPP_CbType nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(300)
			::zpp_nape::util::ZNPNode_ZPP_CbType tmp4 = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(300)
			tmp4->next = null();
			HX_STACK_LINE(301)
			::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(307)
		while((true)){
			HX_STACK_LINE(307)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(307)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(307)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(307)
			if ((tmp2)){
				HX_STACK_LINE(307)
				break;
			}
			HX_STACK_LINE(308)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp3 = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(308)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(309)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet tmp4 = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(309)
			tmp4->next = null();
			HX_STACK_LINE(310)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(316)
		while((true)){
			HX_STACK_LINE(316)
			::zpp_nape::phys::ZPP_Material tmp = ::zpp_nape::phys::ZPP_Material_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(316)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(316)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(316)
			if ((tmp2)){
				HX_STACK_LINE(316)
				break;
			}
			HX_STACK_LINE(317)
			::zpp_nape::phys::ZPP_Material tmp3 = ::zpp_nape::phys::ZPP_Material_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(317)
			::zpp_nape::phys::ZPP_Material nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(318)
			::zpp_nape::phys::ZPP_Material tmp4 = ::zpp_nape::phys::ZPP_Material_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(318)
			tmp4->next = null();
			HX_STACK_LINE(319)
			::zpp_nape::phys::ZPP_Material_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(325)
		while((true)){
			HX_STACK_LINE(325)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(325)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(325)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(325)
			if ((tmp2)){
				HX_STACK_LINE(325)
				break;
			}
			HX_STACK_LINE(326)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(326)
			::zpp_nape::util::ZNPNode_ZPP_Shape nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(327)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(327)
			tmp4->next = null();
			HX_STACK_LINE(328)
			::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(334)
		while((true)){
			HX_STACK_LINE(334)
			::zpp_nape::phys::ZPP_FluidProperties tmp = ::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(334)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(334)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(334)
			if ((tmp2)){
				HX_STACK_LINE(334)
				break;
			}
			HX_STACK_LINE(335)
			::zpp_nape::phys::ZPP_FluidProperties tmp3 = ::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(335)
			::zpp_nape::phys::ZPP_FluidProperties nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(336)
			::zpp_nape::phys::ZPP_FluidProperties tmp4 = ::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(336)
			tmp4->next = null();
			HX_STACK_LINE(337)
			::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(343)
		while((true)){
			HX_STACK_LINE(343)
			::zpp_nape::util::ZNPNode_ZPP_Body tmp = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(343)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(343)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(343)
			if ((tmp2)){
				HX_STACK_LINE(343)
				break;
			}
			HX_STACK_LINE(344)
			::zpp_nape::util::ZNPNode_ZPP_Body tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(344)
			::zpp_nape::util::ZNPNode_ZPP_Body nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(345)
			::zpp_nape::util::ZNPNode_ZPP_Body tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(345)
			tmp4->next = null();
			HX_STACK_LINE(346)
			::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(352)
		while((true)){
			HX_STACK_LINE(352)
			::zpp_nape::util::ZNPNode_ZPP_Constraint tmp = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(352)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(352)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(352)
			if ((tmp2)){
				HX_STACK_LINE(352)
				break;
			}
			HX_STACK_LINE(353)
			::zpp_nape::util::ZNPNode_ZPP_Constraint tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(353)
			::zpp_nape::util::ZNPNode_ZPP_Constraint nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(354)
			::zpp_nape::util::ZNPNode_ZPP_Constraint tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(354)
			tmp4->next = null();
			HX_STACK_LINE(355)
			::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(361)
		while((true)){
			HX_STACK_LINE(361)
			::zpp_nape::util::ZNPNode_ZPP_Compound tmp = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(361)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(361)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(361)
			if ((tmp2)){
				HX_STACK_LINE(361)
				break;
			}
			HX_STACK_LINE(362)
			::zpp_nape::util::ZNPNode_ZPP_Compound tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(362)
			::zpp_nape::util::ZNPNode_ZPP_Compound nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(363)
			::zpp_nape::util::ZNPNode_ZPP_Compound tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(363)
			tmp4->next = null();
			HX_STACK_LINE(364)
			::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(370)
		while((true)){
			HX_STACK_LINE(370)
			::zpp_nape::callbacks::ZPP_CbSetPair tmp = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(370)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(370)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(370)
			if ((tmp2)){
				HX_STACK_LINE(370)
				break;
			}
			HX_STACK_LINE(371)
			::zpp_nape::callbacks::ZPP_CbSetPair tmp3 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(371)
			::zpp_nape::callbacks::ZPP_CbSetPair nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(372)
			::zpp_nape::callbacks::ZPP_CbSetPair tmp4 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(372)
			tmp4->next = null();
			HX_STACK_LINE(373)
			::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(379)
		while((true)){
			HX_STACK_LINE(379)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(379)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(379)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(379)
			if ((tmp2)){
				HX_STACK_LINE(379)
				break;
			}
			HX_STACK_LINE(380)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp3 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(380)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(381)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener tmp4 = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(381)
			tmp4->next = null();
			HX_STACK_LINE(382)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(388)
		while((true)){
			HX_STACK_LINE(388)
			::zpp_nape::util::ZNPNode_ZPP_CbSet tmp = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(388)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(388)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(388)
			if ((tmp2)){
				HX_STACK_LINE(388)
				break;
			}
			HX_STACK_LINE(389)
			::zpp_nape::util::ZNPNode_ZPP_CbSet tmp3 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(389)
			::zpp_nape::util::ZNPNode_ZPP_CbSet nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(390)
			::zpp_nape::util::ZNPNode_ZPP_CbSet tmp4 = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(390)
			tmp4->next = null();
			HX_STACK_LINE(391)
			::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(397)
		while((true)){
			HX_STACK_LINE(397)
			::zpp_nape::util::ZNPNode_ZPP_Interactor tmp = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(397)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(397)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(397)
			if ((tmp2)){
				HX_STACK_LINE(397)
				break;
			}
			HX_STACK_LINE(398)
			::zpp_nape::util::ZNPNode_ZPP_Interactor tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(398)
			::zpp_nape::util::ZNPNode_ZPP_Interactor nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(399)
			::zpp_nape::util::ZNPNode_ZPP_Interactor tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(399)
			tmp4->next = null();
			HX_STACK_LINE(400)
			::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(406)
		while((true)){
			HX_STACK_LINE(406)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(406)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(406)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(406)
			if ((tmp2)){
				HX_STACK_LINE(406)
				break;
			}
			HX_STACK_LINE(407)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp3 = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(407)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(408)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener tmp4 = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(408)
			tmp4->next = null();
			HX_STACK_LINE(409)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(415)
		while((true)){
			HX_STACK_LINE(415)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(415)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(415)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(415)
			if ((tmp2)){
				HX_STACK_LINE(415)
				break;
			}
			HX_STACK_LINE(416)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(416)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(417)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(417)
			tmp4->next = null();
			HX_STACK_LINE(418)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(424)
		while((true)){
			HX_STACK_LINE(424)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(424)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(424)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(424)
			if ((tmp2)){
				HX_STACK_LINE(424)
				break;
			}
			HX_STACK_LINE(425)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp3 = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(425)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(426)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener tmp4 = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(426)
			tmp4->next = null();
			HX_STACK_LINE(427)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(433)
		while((true)){
			HX_STACK_LINE(433)
			::zpp_nape::util::ZPP_Set_ZPP_Body tmp = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(433)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(433)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(433)
			if ((tmp2)){
				HX_STACK_LINE(433)
				break;
			}
			HX_STACK_LINE(434)
			::zpp_nape::util::ZPP_Set_ZPP_Body tmp3 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(434)
			::zpp_nape::util::ZPP_Set_ZPP_Body nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(435)
			::zpp_nape::util::ZPP_Set_ZPP_Body tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(435)
			tmp4->next = null();
			HX_STACK_LINE(436)
			::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(442)
		while((true)){
			HX_STACK_LINE(442)
			::zpp_nape::callbacks::ZPP_CbSet tmp = ::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(442)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(442)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(442)
			if ((tmp2)){
				HX_STACK_LINE(442)
				break;
			}
			HX_STACK_LINE(443)
			::zpp_nape::callbacks::ZPP_CbSet tmp3 = ::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(443)
			::zpp_nape::callbacks::ZPP_CbSet nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(444)
			::zpp_nape::callbacks::ZPP_CbSet tmp4 = ::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(444)
			tmp4->next = null();
			HX_STACK_LINE(445)
			::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(451)
		while((true)){
			HX_STACK_LINE(451)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair tmp = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(451)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(451)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(451)
			if ((tmp2)){
				HX_STACK_LINE(451)
				break;
			}
			HX_STACK_LINE(452)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair tmp3 = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(452)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(453)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair tmp4 = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(453)
			tmp4->next = null();
			HX_STACK_LINE(454)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(460)
		while((true)){
			HX_STACK_LINE(460)
			::zpp_nape::callbacks::ZPP_Callback tmp = ::zpp_nape::callbacks::ZPP_Callback_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(460)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(460)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(460)
			if ((tmp2)){
				HX_STACK_LINE(460)
				break;
			}
			HX_STACK_LINE(461)
			::zpp_nape::callbacks::ZPP_Callback tmp3 = ::zpp_nape::callbacks::ZPP_Callback_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(461)
			::zpp_nape::callbacks::ZPP_Callback nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(462)
			::zpp_nape::callbacks::ZPP_Callback tmp4 = ::zpp_nape::callbacks::ZPP_Callback_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(462)
			tmp4->next = null();
			HX_STACK_LINE(463)
			::zpp_nape::callbacks::ZPP_Callback_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(469)
		while((true)){
			HX_STACK_LINE(469)
			::zpp_nape::geom::ZPP_GeomVert tmp = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(469)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(469)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(469)
			if ((tmp2)){
				HX_STACK_LINE(469)
				break;
			}
			HX_STACK_LINE(470)
			::zpp_nape::geom::ZPP_GeomVert tmp3 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(470)
			::zpp_nape::geom::ZPP_GeomVert nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(471)
			::zpp_nape::geom::ZPP_GeomVert tmp4 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(471)
			tmp4->next = null();
			HX_STACK_LINE(472)
			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(478)
		while((true)){
			HX_STACK_LINE(478)
			::zpp_nape::geom::ZPP_GeomVertexIterator tmp = ::zpp_nape::geom::ZPP_GeomVertexIterator_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(478)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(478)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(478)
			if ((tmp2)){
				HX_STACK_LINE(478)
				break;
			}
			HX_STACK_LINE(479)
			::zpp_nape::geom::ZPP_GeomVertexIterator tmp3 = ::zpp_nape::geom::ZPP_GeomVertexIterator_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(479)
			::zpp_nape::geom::ZPP_GeomVertexIterator nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(480)
			::zpp_nape::geom::ZPP_GeomVertexIterator tmp4 = ::zpp_nape::geom::ZPP_GeomVertexIterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(480)
			tmp4->next = null();
			HX_STACK_LINE(481)
			::zpp_nape::geom::ZPP_GeomVertexIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(487)
		while((true)){
			HX_STACK_LINE(487)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(487)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(487)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(487)
			if ((tmp2)){
				HX_STACK_LINE(487)
				break;
			}
			HX_STACK_LINE(488)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp3 = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(488)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(489)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(489)
			tmp4->next = null();
			HX_STACK_LINE(490)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(496)
		while((true)){
			HX_STACK_LINE(496)
			::zpp_nape::geom::ZPP_Mat23 tmp = ::zpp_nape::geom::ZPP_Mat23_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(496)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(496)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(496)
			if ((tmp2)){
				HX_STACK_LINE(496)
				break;
			}
			HX_STACK_LINE(497)
			::zpp_nape::geom::ZPP_Mat23 tmp3 = ::zpp_nape::geom::ZPP_Mat23_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(497)
			::zpp_nape::geom::ZPP_Mat23 nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(498)
			::zpp_nape::geom::ZPP_Mat23 tmp4 = ::zpp_nape::geom::ZPP_Mat23_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(498)
			tmp4->next = null();
			HX_STACK_LINE(499)
			::zpp_nape::geom::ZPP_Mat23_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(505)
		while((true)){
			HX_STACK_LINE(505)
			::zpp_nape::geom::ZPP_CutVert tmp = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(505)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(505)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(505)
			if ((tmp2)){
				HX_STACK_LINE(505)
				break;
			}
			HX_STACK_LINE(506)
			::zpp_nape::geom::ZPP_CutVert tmp3 = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(506)
			::zpp_nape::geom::ZPP_CutVert nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(507)
			::zpp_nape::geom::ZPP_CutVert tmp4 = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(507)
			tmp4->next = null();
			HX_STACK_LINE(508)
			::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(514)
		while((true)){
			HX_STACK_LINE(514)
			::zpp_nape::geom::ZPP_CutInt tmp = ::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(514)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(514)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(514)
			if ((tmp2)){
				HX_STACK_LINE(514)
				break;
			}
			HX_STACK_LINE(515)
			::zpp_nape::geom::ZPP_CutInt tmp3 = ::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(515)
			::zpp_nape::geom::ZPP_CutInt nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(516)
			::zpp_nape::geom::ZPP_CutInt tmp4 = ::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(516)
			tmp4->next = null();
			HX_STACK_LINE(517)
			::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(523)
		while((true)){
			HX_STACK_LINE(523)
			::zpp_nape::util::ZNPNode_ZPP_CutInt tmp = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(523)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(523)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(523)
			if ((tmp2)){
				HX_STACK_LINE(523)
				break;
			}
			HX_STACK_LINE(524)
			::zpp_nape::util::ZNPNode_ZPP_CutInt tmp3 = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(524)
			::zpp_nape::util::ZNPNode_ZPP_CutInt nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(525)
			::zpp_nape::util::ZNPNode_ZPP_CutInt tmp4 = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(525)
			tmp4->next = null();
			HX_STACK_LINE(526)
			::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(532)
		while((true)){
			HX_STACK_LINE(532)
			::zpp_nape::util::ZNPNode_ZPP_CutVert tmp = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(532)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(532)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(532)
			if ((tmp2)){
				HX_STACK_LINE(532)
				break;
			}
			HX_STACK_LINE(533)
			::zpp_nape::util::ZNPNode_ZPP_CutVert tmp3 = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(533)
			::zpp_nape::util::ZNPNode_ZPP_CutVert nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(534)
			::zpp_nape::util::ZNPNode_ZPP_CutVert tmp4 = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(534)
			tmp4->next = null();
			HX_STACK_LINE(535)
			::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(541)
		while((true)){
			HX_STACK_LINE(541)
			::zpp_nape::geom::ZPP_Vec2 tmp = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(541)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(541)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(541)
			if ((tmp2)){
				HX_STACK_LINE(541)
				break;
			}
			HX_STACK_LINE(542)
			::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(542)
			::zpp_nape::geom::ZPP_Vec2 nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(543)
			::zpp_nape::geom::ZPP_Vec2 tmp4 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(543)
			tmp4->next = null();
			HX_STACK_LINE(544)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(550)
		while((true)){
			HX_STACK_LINE(550)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tmp = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(550)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(550)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(550)
			if ((tmp2)){
				HX_STACK_LINE(550)
				break;
			}
			HX_STACK_LINE(551)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tmp3 = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(551)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(552)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tmp4 = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(552)
			tmp4->next = null();
			HX_STACK_LINE(553)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(559)
		while((true)){
			HX_STACK_LINE(559)
			::zpp_nape::geom::ZPP_PartitionVertex tmp = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(559)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(559)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(559)
			if ((tmp2)){
				HX_STACK_LINE(559)
				break;
			}
			HX_STACK_LINE(560)
			::zpp_nape::geom::ZPP_PartitionVertex tmp3 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(560)
			::zpp_nape::geom::ZPP_PartitionVertex nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(561)
			::zpp_nape::geom::ZPP_PartitionVertex tmp4 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(561)
			tmp4->next = null();
			HX_STACK_LINE(562)
			::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(568)
		while((true)){
			HX_STACK_LINE(568)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(568)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(568)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(568)
			if ((tmp2)){
				HX_STACK_LINE(568)
				break;
			}
			HX_STACK_LINE(569)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp3 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(569)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(570)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(570)
			tmp4->next = null();
			HX_STACK_LINE(571)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(577)
		while((true)){
			HX_STACK_LINE(577)
			::zpp_nape::geom::ZPP_PartitionedPoly tmp = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(577)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(577)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(577)
			if ((tmp2)){
				HX_STACK_LINE(577)
				break;
			}
			HX_STACK_LINE(578)
			::zpp_nape::geom::ZPP_PartitionedPoly tmp3 = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(578)
			::zpp_nape::geom::ZPP_PartitionedPoly nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(579)
			::zpp_nape::geom::ZPP_PartitionedPoly tmp4 = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(579)
			tmp4->next = null();
			HX_STACK_LINE(580)
			::zpp_nape::geom::ZPP_PartitionedPoly_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(586)
		while((true)){
			HX_STACK_LINE(586)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(586)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(586)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(586)
			if ((tmp2)){
				HX_STACK_LINE(586)
				break;
			}
			HX_STACK_LINE(587)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp3 = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(587)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(588)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly tmp4 = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(588)
			tmp4->next = null();
			HX_STACK_LINE(589)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(595)
		while((true)){
			HX_STACK_LINE(595)
			::zpp_nape::geom::ZPP_PartitionPair tmp = ::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(595)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(595)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(595)
			if ((tmp2)){
				HX_STACK_LINE(595)
				break;
			}
			HX_STACK_LINE(596)
			::zpp_nape::geom::ZPP_PartitionPair tmp3 = ::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(596)
			::zpp_nape::geom::ZPP_PartitionPair nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(597)
			::zpp_nape::geom::ZPP_PartitionPair tmp4 = ::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(597)
			tmp4->next = null();
			HX_STACK_LINE(598)
			::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(604)
		while((true)){
			HX_STACK_LINE(604)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(604)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(604)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(604)
			if ((tmp2)){
				HX_STACK_LINE(604)
				break;
			}
			HX_STACK_LINE(605)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp3 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(605)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(606)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(606)
			tmp4->next = null();
			HX_STACK_LINE(607)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(613)
		while((true)){
			HX_STACK_LINE(613)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(613)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(613)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(613)
			if ((tmp2)){
				HX_STACK_LINE(613)
				break;
			}
			HX_STACK_LINE(614)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp3 = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(614)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(615)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert tmp4 = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(615)
			tmp4->next = null();
			HX_STACK_LINE(616)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(622)
		while((true)){
			HX_STACK_LINE(622)
			::zpp_nape::geom::ZPP_SimplifyV tmp = ::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(622)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(622)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(622)
			if ((tmp2)){
				HX_STACK_LINE(622)
				break;
			}
			HX_STACK_LINE(623)
			::zpp_nape::geom::ZPP_SimplifyV tmp3 = ::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(623)
			::zpp_nape::geom::ZPP_SimplifyV nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(624)
			::zpp_nape::geom::ZPP_SimplifyV tmp4 = ::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(624)
			tmp4->next = null();
			HX_STACK_LINE(625)
			::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(631)
		while((true)){
			HX_STACK_LINE(631)
			::zpp_nape::geom::ZPP_SimplifyP tmp = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(631)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(631)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(631)
			if ((tmp2)){
				HX_STACK_LINE(631)
				break;
			}
			HX_STACK_LINE(632)
			::zpp_nape::geom::ZPP_SimplifyP tmp3 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(632)
			::zpp_nape::geom::ZPP_SimplifyP nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(633)
			::zpp_nape::geom::ZPP_SimplifyP tmp4 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(633)
			tmp4->next = null();
			HX_STACK_LINE(634)
			::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(640)
		while((true)){
			HX_STACK_LINE(640)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(640)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(640)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(640)
			if ((tmp2)){
				HX_STACK_LINE(640)
				break;
			}
			HX_STACK_LINE(641)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp3 = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(641)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(642)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP tmp4 = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(642)
			tmp4->next = null();
			HX_STACK_LINE(643)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(649)
		while((true)){
			HX_STACK_LINE(649)
			::zpp_nape::geom::ZPP_AABB tmp = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(649)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(649)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(649)
			if ((tmp2)){
				HX_STACK_LINE(649)
				break;
			}
			HX_STACK_LINE(650)
			::zpp_nape::geom::ZPP_AABB tmp3 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(650)
			::zpp_nape::geom::ZPP_AABB nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(651)
			::zpp_nape::geom::ZPP_AABB tmp4 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(651)
			tmp4->next = null();
			HX_STACK_LINE(652)
			::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(658)
		while((true)){
			HX_STACK_LINE(658)
			::zpp_nape::geom::ZPP_ToiEvent tmp = ::zpp_nape::geom::ZPP_ToiEvent_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(658)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(658)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(658)
			if ((tmp2)){
				HX_STACK_LINE(658)
				break;
			}
			HX_STACK_LINE(659)
			::zpp_nape::geom::ZPP_ToiEvent tmp3 = ::zpp_nape::geom::ZPP_ToiEvent_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(659)
			::zpp_nape::geom::ZPP_ToiEvent nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(660)
			::zpp_nape::geom::ZPP_ToiEvent tmp4 = ::zpp_nape::geom::ZPP_ToiEvent_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(660)
			tmp4->next = null();
			HX_STACK_LINE(661)
			::zpp_nape::geom::ZPP_ToiEvent_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(667)
		while((true)){
			HX_STACK_LINE(667)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(667)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(667)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(667)
			if ((tmp2)){
				HX_STACK_LINE(667)
				break;
			}
			HX_STACK_LINE(668)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp3 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(668)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(669)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(669)
			tmp4->next = null();
			HX_STACK_LINE(670)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(676)
		while((true)){
			HX_STACK_LINE(676)
			::zpp_nape::geom::ZPP_SimpleVert tmp = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(676)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(676)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(676)
			if ((tmp2)){
				HX_STACK_LINE(676)
				break;
			}
			HX_STACK_LINE(677)
			::zpp_nape::geom::ZPP_SimpleVert tmp3 = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(677)
			::zpp_nape::geom::ZPP_SimpleVert nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(678)
			::zpp_nape::geom::ZPP_SimpleVert tmp4 = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(678)
			tmp4->next = null();
			HX_STACK_LINE(679)
			::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(685)
		while((true)){
			HX_STACK_LINE(685)
			::zpp_nape::geom::ZPP_SimpleSeg tmp = ::zpp_nape::geom::ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(685)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(685)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(685)
			if ((tmp2)){
				HX_STACK_LINE(685)
				break;
			}
			HX_STACK_LINE(686)
			::zpp_nape::geom::ZPP_SimpleSeg tmp3 = ::zpp_nape::geom::ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(686)
			::zpp_nape::geom::ZPP_SimpleSeg nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(687)
			::zpp_nape::geom::ZPP_SimpleSeg tmp4 = ::zpp_nape::geom::ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(687)
			tmp4->next = null();
			HX_STACK_LINE(688)
			::zpp_nape::geom::ZPP_SimpleSeg_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(694)
		while((true)){
			HX_STACK_LINE(694)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(694)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(694)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(694)
			if ((tmp2)){
				HX_STACK_LINE(694)
				break;
			}
			HX_STACK_LINE(695)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp3 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(695)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(696)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(696)
			tmp4->next = null();
			HX_STACK_LINE(697)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(703)
		while((true)){
			HX_STACK_LINE(703)
			::zpp_nape::geom::ZPP_MarchSpan tmp = ::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(703)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(703)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(703)
			if ((tmp2)){
				HX_STACK_LINE(703)
				break;
			}
			HX_STACK_LINE(704)
			::zpp_nape::geom::ZPP_MarchSpan tmp3 = ::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(704)
			::zpp_nape::geom::ZPP_MarchSpan nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(705)
			::zpp_nape::geom::ZPP_MarchSpan tmp4 = ::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(705)
			tmp4->next = null();
			HX_STACK_LINE(706)
			::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(712)
		while((true)){
			HX_STACK_LINE(712)
			::zpp_nape::geom::ZPP_MarchPair tmp = ::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(712)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(712)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(712)
			if ((tmp2)){
				HX_STACK_LINE(712)
				break;
			}
			HX_STACK_LINE(713)
			::zpp_nape::geom::ZPP_MarchPair tmp3 = ::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(713)
			::zpp_nape::geom::ZPP_MarchPair nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(714)
			::zpp_nape::geom::ZPP_MarchPair tmp4 = ::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(714)
			tmp4->next = null();
			HX_STACK_LINE(715)
			::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(721)
		while((true)){
			HX_STACK_LINE(721)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(721)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(721)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(721)
			if ((tmp2)){
				HX_STACK_LINE(721)
				break;
			}
			HX_STACK_LINE(722)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp3 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(722)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(723)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(723)
			tmp4->next = null();
			HX_STACK_LINE(724)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(730)
		while((true)){
			HX_STACK_LINE(730)
			::zpp_nape::geom::ZPP_SimpleEvent tmp = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(730)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(730)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(730)
			if ((tmp2)){
				HX_STACK_LINE(730)
				break;
			}
			HX_STACK_LINE(731)
			::zpp_nape::geom::ZPP_SimpleEvent tmp3 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(731)
			::zpp_nape::geom::ZPP_SimpleEvent nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(732)
			::zpp_nape::geom::ZPP_SimpleEvent tmp4 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(732)
			tmp4->next = null();
			HX_STACK_LINE(733)
			::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(739)
		while((true)){
			HX_STACK_LINE(739)
			::zpp_nape::util::Hashable2_Boolfalse tmp = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(739)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(739)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(739)
			if ((tmp2)){
				HX_STACK_LINE(739)
				break;
			}
			HX_STACK_LINE(740)
			::zpp_nape::util::Hashable2_Boolfalse tmp3 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(740)
			::zpp_nape::util::Hashable2_Boolfalse nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(741)
			::zpp_nape::util::Hashable2_Boolfalse tmp4 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(741)
			tmp4->next = null();
			HX_STACK_LINE(742)
			::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(748)
		while((true)){
			HX_STACK_LINE(748)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(748)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(748)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(748)
			if ((tmp2)){
				HX_STACK_LINE(748)
				break;
			}
			HX_STACK_LINE(749)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp3 = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(749)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(750)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert tmp4 = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(750)
			tmp4->next = null();
			HX_STACK_LINE(751)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(757)
		while((true)){
			HX_STACK_LINE(757)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(757)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(757)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(757)
			if ((tmp2)){
				HX_STACK_LINE(757)
				break;
			}
			HX_STACK_LINE(758)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp3 = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(758)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(759)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp4 = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(759)
			tmp4->next = null();
			HX_STACK_LINE(760)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(766)
		while((true)){
			HX_STACK_LINE(766)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(766)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(766)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(766)
			if ((tmp2)){
				HX_STACK_LINE(766)
				break;
			}
			HX_STACK_LINE(767)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp3 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(767)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(768)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair tmp4 = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(768)
			tmp4->next = null();
			HX_STACK_LINE(769)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(775)
		while((true)){
			HX_STACK_LINE(775)
			::zpp_nape::shape::ZPP_Edge tmp = ::zpp_nape::shape::ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(775)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(775)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(775)
			if ((tmp2)){
				HX_STACK_LINE(775)
				break;
			}
			HX_STACK_LINE(776)
			::zpp_nape::shape::ZPP_Edge tmp3 = ::zpp_nape::shape::ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(776)
			::zpp_nape::shape::ZPP_Edge nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(777)
			::zpp_nape::shape::ZPP_Edge tmp4 = ::zpp_nape::shape::ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(777)
			tmp4->next = null();
			HX_STACK_LINE(778)
			::zpp_nape::shape::ZPP_Edge_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(784)
		while((true)){
			HX_STACK_LINE(784)
			::zpp_nape::util::ZNPNode_ZPP_Edge tmp = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(784)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(784)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(784)
			if ((tmp2)){
				HX_STACK_LINE(784)
				break;
			}
			HX_STACK_LINE(785)
			::zpp_nape::util::ZNPNode_ZPP_Edge tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(785)
			::zpp_nape::util::ZNPNode_ZPP_Edge nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(786)
			::zpp_nape::util::ZNPNode_ZPP_Edge tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(786)
			tmp4->next = null();
			HX_STACK_LINE(787)
			::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(793)
		while((true)){
			HX_STACK_LINE(793)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(793)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(793)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(793)
			if ((tmp2)){
				HX_STACK_LINE(793)
				break;
			}
			HX_STACK_LINE(794)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(794)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(795)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(795)
			tmp4->next = null();
			HX_STACK_LINE(796)
			::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(802)
		while((true)){
			HX_STACK_LINE(802)
			::zpp_nape::space::ZPP_SweepData tmp = ::zpp_nape::space::ZPP_SweepData_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(802)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(802)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(802)
			if ((tmp2)){
				HX_STACK_LINE(802)
				break;
			}
			HX_STACK_LINE(803)
			::zpp_nape::space::ZPP_SweepData tmp3 = ::zpp_nape::space::ZPP_SweepData_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(803)
			::zpp_nape::space::ZPP_SweepData nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(804)
			::zpp_nape::space::ZPP_SweepData tmp4 = ::zpp_nape::space::ZPP_SweepData_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(804)
			tmp4->next = null();
			HX_STACK_LINE(805)
			::zpp_nape::space::ZPP_SweepData_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(811)
		while((true)){
			HX_STACK_LINE(811)
			::zpp_nape::space::ZPP_AABBNode tmp = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(811)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(811)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(811)
			if ((tmp2)){
				HX_STACK_LINE(811)
				break;
			}
			HX_STACK_LINE(812)
			::zpp_nape::space::ZPP_AABBNode tmp3 = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(812)
			::zpp_nape::space::ZPP_AABBNode nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(813)
			::zpp_nape::space::ZPP_AABBNode tmp4 = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(813)
			tmp4->next = null();
			HX_STACK_LINE(814)
			::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(820)
		while((true)){
			HX_STACK_LINE(820)
			::zpp_nape::space::ZPP_AABBPair tmp = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(820)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(820)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(820)
			if ((tmp2)){
				HX_STACK_LINE(820)
				break;
			}
			HX_STACK_LINE(821)
			::zpp_nape::space::ZPP_AABBPair tmp3 = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(821)
			::zpp_nape::space::ZPP_AABBPair nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(822)
			::zpp_nape::space::ZPP_AABBPair tmp4 = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(822)
			tmp4->next = null();
			HX_STACK_LINE(823)
			::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(829)
		while((true)){
			HX_STACK_LINE(829)
			::zpp_nape::dynamics::ZPP_Contact tmp = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(829)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(829)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(829)
			if ((tmp2)){
				HX_STACK_LINE(829)
				break;
			}
			HX_STACK_LINE(830)
			::zpp_nape::dynamics::ZPP_Contact tmp3 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(830)
			::zpp_nape::dynamics::ZPP_Contact nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(831)
			::zpp_nape::dynamics::ZPP_Contact tmp4 = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(831)
			tmp4->next = null();
			HX_STACK_LINE(832)
			::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(838)
		while((true)){
			HX_STACK_LINE(838)
			::zpp_nape::util::ZNPNode_ZPP_Component tmp = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(838)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(838)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(838)
			if ((tmp2)){
				HX_STACK_LINE(838)
				break;
			}
			HX_STACK_LINE(839)
			::zpp_nape::util::ZNPNode_ZPP_Component tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(839)
			::zpp_nape::util::ZNPNode_ZPP_Component nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(840)
			::zpp_nape::util::ZNPNode_ZPP_Component tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(840)
			tmp4->next = null();
			HX_STACK_LINE(841)
			::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(847)
		while((true)){
			HX_STACK_LINE(847)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(847)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(847)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(847)
			if ((tmp2)){
				HX_STACK_LINE(847)
				break;
			}
			HX_STACK_LINE(848)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp3 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(848)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(849)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode tmp4 = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(849)
			tmp4->next = null();
			HX_STACK_LINE(850)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(856)
		while((true)){
			HX_STACK_LINE(856)
			::zpp_nape::space::ZPP_Island tmp = ::zpp_nape::space::ZPP_Island_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(856)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(856)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(856)
			if ((tmp2)){
				HX_STACK_LINE(856)
				break;
			}
			HX_STACK_LINE(857)
			::zpp_nape::space::ZPP_Island tmp3 = ::zpp_nape::space::ZPP_Island_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(857)
			::zpp_nape::space::ZPP_Island nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(858)
			::zpp_nape::space::ZPP_Island tmp4 = ::zpp_nape::space::ZPP_Island_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(858)
			tmp4->next = null();
			HX_STACK_LINE(859)
			::zpp_nape::space::ZPP_Island_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(865)
		while((true)){
			HX_STACK_LINE(865)
			::zpp_nape::space::ZPP_Component tmp = ::zpp_nape::space::ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(865)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(865)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(865)
			if ((tmp2)){
				HX_STACK_LINE(865)
				break;
			}
			HX_STACK_LINE(866)
			::zpp_nape::space::ZPP_Component tmp3 = ::zpp_nape::space::ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(866)
			::zpp_nape::space::ZPP_Component nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(867)
			::zpp_nape::space::ZPP_Component tmp4 = ::zpp_nape::space::ZPP_Component_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(867)
			tmp4->next = null();
			HX_STACK_LINE(868)
			::zpp_nape::space::ZPP_Component_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(874)
		while((true)){
			HX_STACK_LINE(874)
			::zpp_nape::space::ZPP_CallbackSet tmp = ::zpp_nape::space::ZPP_CallbackSet_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(874)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(874)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(874)
			if ((tmp2)){
				HX_STACK_LINE(874)
				break;
			}
			HX_STACK_LINE(875)
			::zpp_nape::space::ZPP_CallbackSet tmp3 = ::zpp_nape::space::ZPP_CallbackSet_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(875)
			::zpp_nape::space::ZPP_CallbackSet nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(876)
			::zpp_nape::space::ZPP_CallbackSet tmp4 = ::zpp_nape::space::ZPP_CallbackSet_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(876)
			tmp4->next = null();
			HX_STACK_LINE(877)
			::zpp_nape::space::ZPP_CallbackSet_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(883)
		while((true)){
			HX_STACK_LINE(883)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(883)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(883)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(883)
			if ((tmp2)){
				HX_STACK_LINE(883)
				break;
			}
			HX_STACK_LINE(884)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp3 = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(884)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(885)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(885)
			tmp4->next = null();
			HX_STACK_LINE(886)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(892)
		while((true)){
			HX_STACK_LINE(892)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(892)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(892)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(892)
			if ((tmp2)){
				HX_STACK_LINE(892)
				break;
			}
			HX_STACK_LINE(893)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp3 = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(893)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(894)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup tmp4 = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(894)
			tmp4->next = null();
			HX_STACK_LINE(895)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(901)
		while((true)){
			HX_STACK_LINE(901)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(901)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(901)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(901)
			if ((tmp2)){
				HX_STACK_LINE(901)
				break;
			}
			HX_STACK_LINE(902)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp3 = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(902)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(903)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(903)
			tmp4->next = null();
			HX_STACK_LINE(904)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(910)
		while((true)){
			HX_STACK_LINE(910)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(910)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(910)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(910)
			if ((tmp2)){
				HX_STACK_LINE(910)
				break;
			}
			HX_STACK_LINE(911)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp3 = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(911)
			::zpp_nape::dynamics::ZPP_InteractionFilter nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(912)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp4 = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(912)
			tmp4->next = null();
			HX_STACK_LINE(913)
			::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(919)
		while((true)){
			HX_STACK_LINE(919)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(919)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(919)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(919)
			if ((tmp2)){
				HX_STACK_LINE(919)
				break;
			}
			HX_STACK_LINE(920)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp3 = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(920)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(921)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(921)
			tmp4->next = null();
			HX_STACK_LINE(922)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(928)
		while((true)){
			HX_STACK_LINE(928)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(928)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(928)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(928)
			if ((tmp2)){
				HX_STACK_LINE(928)
				break;
			}
			HX_STACK_LINE(929)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp3 = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(929)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(930)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(930)
			tmp4->next = null();
			HX_STACK_LINE(931)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(937)
		while((true)){
			HX_STACK_LINE(937)
			::zpp_nape::util::ZNPNode_ZPP_Listener tmp = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(937)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(937)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(937)
			if ((tmp2)){
				HX_STACK_LINE(937)
				break;
			}
			HX_STACK_LINE(938)
			::zpp_nape::util::ZNPNode_ZPP_Listener tmp3 = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(938)
			::zpp_nape::util::ZNPNode_ZPP_Listener nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(939)
			::zpp_nape::util::ZNPNode_ZPP_Listener tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(939)
			tmp4->next = null();
			HX_STACK_LINE(940)
			::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(946)
		while((true)){
			HX_STACK_LINE(946)
			::zpp_nape::dynamics::ZPP_SensorArbiter tmp = ::zpp_nape::dynamics::ZPP_SensorArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(946)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(946)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(946)
			if ((tmp2)){
				HX_STACK_LINE(946)
				break;
			}
			HX_STACK_LINE(947)
			::zpp_nape::dynamics::ZPP_SensorArbiter tmp3 = ::zpp_nape::dynamics::ZPP_SensorArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(947)
			::zpp_nape::dynamics::ZPP_SensorArbiter nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(948)
			::zpp_nape::dynamics::ZPP_SensorArbiter tmp4 = ::zpp_nape::dynamics::ZPP_SensorArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(948)
			tmp4->next = null();
			HX_STACK_LINE(949)
			::zpp_nape::dynamics::ZPP_SensorArbiter_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(955)
		while((true)){
			HX_STACK_LINE(955)
			::zpp_nape::dynamics::ZPP_FluidArbiter tmp = ::zpp_nape::dynamics::ZPP_FluidArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(955)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(955)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(955)
			if ((tmp2)){
				HX_STACK_LINE(955)
				break;
			}
			HX_STACK_LINE(956)
			::zpp_nape::dynamics::ZPP_FluidArbiter tmp3 = ::zpp_nape::dynamics::ZPP_FluidArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(956)
			::zpp_nape::dynamics::ZPP_FluidArbiter nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(957)
			::zpp_nape::dynamics::ZPP_FluidArbiter tmp4 = ::zpp_nape::dynamics::ZPP_FluidArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(957)
			tmp4->next = null();
			HX_STACK_LINE(958)
			::zpp_nape::dynamics::ZPP_FluidArbiter_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(964)
		while((true)){
			HX_STACK_LINE(964)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(964)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(964)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(964)
			if ((tmp2)){
				HX_STACK_LINE(964)
				break;
			}
			HX_STACK_LINE(965)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp3 = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(965)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(966)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent tmp4 = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(966)
			tmp4->next = null();
			HX_STACK_LINE(967)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(973)
		while((true)){
			HX_STACK_LINE(973)
			::zpp_nape::dynamics::ZPP_ColArbiter tmp = ::zpp_nape::dynamics::ZPP_ColArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(973)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(973)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(973)
			if ((tmp2)){
				HX_STACK_LINE(973)
				break;
			}
			HX_STACK_LINE(974)
			::zpp_nape::dynamics::ZPP_ColArbiter tmp3 = ::zpp_nape::dynamics::ZPP_ColArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(974)
			::zpp_nape::dynamics::ZPP_ColArbiter nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(975)
			::zpp_nape::dynamics::ZPP_ColArbiter tmp4 = ::zpp_nape::dynamics::ZPP_ColArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(975)
			tmp4->next = null();
			HX_STACK_LINE(976)
			::zpp_nape::dynamics::ZPP_ColArbiter_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(982)
		while((true)){
			HX_STACK_LINE(982)
			::zpp_nape::util::ZNPNode_ConvexResult tmp = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(982)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(982)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(982)
			if ((tmp2)){
				HX_STACK_LINE(982)
				break;
			}
			HX_STACK_LINE(983)
			::zpp_nape::util::ZNPNode_ConvexResult tmp3 = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(983)
			::zpp_nape::util::ZNPNode_ConvexResult nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(984)
			::zpp_nape::util::ZNPNode_ConvexResult tmp4 = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(984)
			tmp4->next = null();
			HX_STACK_LINE(985)
			::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(991)
		while((true)){
			HX_STACK_LINE(991)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(991)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(991)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(991)
			if ((tmp2)){
				HX_STACK_LINE(991)
				break;
			}
			HX_STACK_LINE(992)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp3 = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(992)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(993)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly tmp4 = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(993)
			tmp4->next = null();
			HX_STACK_LINE(994)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(1000)
		while((true)){
			HX_STACK_LINE(1000)
			::zpp_nape::util::ZNPNode_RayResult tmp = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1000)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1000)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1000)
			if ((tmp2)){
				HX_STACK_LINE(1000)
				break;
			}
			HX_STACK_LINE(1001)
			::zpp_nape::util::ZNPNode_RayResult tmp3 = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1001)
			::zpp_nape::util::ZNPNode_RayResult nxt = tmp3->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(1002)
			::zpp_nape::util::ZNPNode_RayResult tmp4 = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1002)
			tmp4->next = null();
			HX_STACK_LINE(1003)
			::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(1010)
		while((true)){
			HX_STACK_LINE(1010)
			::nape::geom::GeomPoly tmp = ::zpp_nape::util::ZPP_PubPool_obj::poolGeomPoly;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1010)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1010)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1010)
			if ((tmp2)){
				HX_STACK_LINE(1010)
				break;
			}
			HX_STACK_LINE(1011)
			::nape::geom::GeomPoly tmp3 = ::zpp_nape::util::ZPP_PubPool_obj::poolGeomPoly;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1011)
			::nape::geom::GeomPoly nxt = tmp3->zpp_pool;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(1012)
			::nape::geom::GeomPoly tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::poolGeomPoly;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1012)
			tmp4->zpp_pool = null();
			HX_STACK_LINE(1013)
			::zpp_nape::util::ZPP_PubPool_obj::poolGeomPoly = nxt;
		}
		HX_STACK_LINE(1019)
		while((true)){
			HX_STACK_LINE(1019)
			::nape::geom::Vec2 tmp = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1019)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1019)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1019)
			if ((tmp2)){
				HX_STACK_LINE(1019)
				break;
			}
			HX_STACK_LINE(1020)
			::nape::geom::Vec2 tmp3 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1020)
			::nape::geom::Vec2 nxt = tmp3->zpp_pool;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(1021)
			::nape::geom::Vec2 tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1021)
			tmp4->zpp_pool = null();
			HX_STACK_LINE(1022)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = nxt;
		}
		HX_STACK_LINE(1028)
		while((true)){
			HX_STACK_LINE(1028)
			::nape::geom::Vec3 tmp = ::zpp_nape::util::ZPP_PubPool_obj::poolVec3;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1028)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1028)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1028)
			if ((tmp2)){
				HX_STACK_LINE(1028)
				break;
			}
			HX_STACK_LINE(1029)
			::nape::geom::Vec3 tmp3 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1029)
			::nape::geom::Vec3 nxt = tmp3->zpp_pool;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(1030)
			::nape::geom::Vec3 tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1030)
			tmp4->zpp_pool = null();
			HX_STACK_LINE(1031)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec3 = nxt;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,clearObjectPools,(void))

::openfl::_legacy::display::Shape Debug_obj::createGraphic( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.util.Debug","createGraphic",0x3515f56b,"nape.util.Debug.createGraphic","nape/util/Debug.hx",1091,0xfa9d0ab1)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(1095)
	::openfl::_legacy::display::Shape tmp = ::openfl::_legacy::display::Shape_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1095)
	::openfl::_legacy::display::Shape ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1096)
	::openfl::_legacy::display::Graphics tmp1 = ret->get_graphics();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1096)
	::openfl::_legacy::display::Graphics graphics = tmp1;		HX_STACK_VAR(graphics,"graphics");
	HX_STACK_LINE(1097)
	int tmp2 = body->zpp_inner_i->id;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1097)
	int tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1097)
	Float tmp4 = (Float(tmp3) / Float((int)1500));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1097)
	Float tmp5 = ::Math_obj::exp(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1097)
	Float tmp6 = ((int)16777215 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1097)
	int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1097)
	int idc = tmp7;		HX_STACK_VAR(idc,"idc");
	HX_STACK_LINE(1098)
	int tmp8 = (int(idc) & int((int)16711680));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1098)
	int tmp9 = (int(tmp8) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1098)
	Float tmp10 = (tmp9 * ((Float)0.7));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1098)
	Float _r = tmp10;		HX_STACK_VAR(_r,"_r");
	HX_STACK_LINE(1099)
	int tmp11 = (int(idc) & int((int)65280));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1099)
	int tmp12 = (int(tmp11) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1099)
	Float tmp13 = (tmp12 * ((Float)0.7));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1099)
	Float _g = tmp13;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1100)
	int tmp14 = (int(idc) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1100)
	Float tmp15 = (tmp14 * ((Float)0.7));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1100)
	Float _b = tmp15;		HX_STACK_VAR(_b,"_b");
	HX_STACK_LINE(1101)
	Float tmp16 = _r;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(1101)
	int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(1101)
	int tmp18 = (int(tmp17) << int((int)16));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(1101)
	Float tmp19 = _g;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(1101)
	int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(1101)
	int tmp21 = (int(tmp20) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(1101)
	int tmp22 = (int(tmp18) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(1101)
	Float tmp23 = _b;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(1101)
	int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(1101)
	int tmp25 = (int(tmp22) | int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(1101)
	int col = tmp25;		HX_STACK_VAR(col,"col");
	HX_STACK_LINE(1102)
	int tmp26 = col;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(1102)
	graphics->lineStyle(((Float)0.1),tmp26,(int)1,null(),null(),null(),null(),null());
	HX_STACK_LINE(1103)
	{
		HX_STACK_LINE(1103)
		::nape::shape::ShapeIterator tmp27;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1103)
		{
			HX_STACK_LINE(1103)
			::nape::shape::ShapeList tmp28 = body->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1103)
			::nape::shape::ShapeList _this = tmp28;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1103)
			_this->zpp_inner->valmod();
			HX_STACK_LINE(1103)
			::nape::shape::ShapeList tmp29 = _this;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1103)
			tmp27 = ::nape::shape::ShapeIterator_obj::get(tmp29);
		}
		HX_STACK_LINE(1103)
		::nape::shape::ShapeIterator _g1 = tmp27;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1103)
		while((true)){
			HX_STACK_LINE(1103)
			bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1103)
			{
				HX_STACK_LINE(1103)
				::zpp_nape::util::ZPP_ShapeList tmp29 = _g1->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1103)
				tmp29->valmod();
				HX_STACK_LINE(1103)
				int tmp30;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1103)
				{
					HX_STACK_LINE(1103)
					::nape::shape::ShapeList _this = _g1->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1103)
					_this->zpp_inner->valmod();
					HX_STACK_LINE(1103)
					bool tmp31 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1103)
					if ((tmp31)){
						HX_STACK_LINE(1103)
						_this->zpp_inner->zip_length = false;
						HX_STACK_LINE(1103)
						{
							HX_STACK_LINE(1103)
							::zpp_nape::util::ZNPList_ZPP_Shape tmp32 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1103)
							_this->zpp_inner->user_length = tmp32->length;
						}
					}
					HX_STACK_LINE(1103)
					tmp30 = _this->zpp_inner->user_length;
				}
				HX_STACK_LINE(1103)
				int length = tmp30;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(1103)
				_g1->zpp_critical = true;
				HX_STACK_LINE(1103)
				bool tmp31 = (_g1->zpp_i < length);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1103)
				if ((tmp31)){
					HX_STACK_LINE(1103)
					tmp28 = true;
				}
				else{
					HX_STACK_LINE(1103)
					{
						HX_STACK_LINE(1103)
						::nape::shape::ShapeIterator tmp32 = ::nape::shape::ShapeIterator_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1103)
						_g1->zpp_next = tmp32;
						HX_STACK_LINE(1103)
						::nape::shape::ShapeIterator_obj::zpp_pool = _g1;
						HX_STACK_LINE(1103)
						_g1->zpp_inner = null();
					}
					HX_STACK_LINE(1103)
					tmp28 = false;
				}
			}
			HX_STACK_LINE(1103)
			bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1103)
			if ((tmp29)){
				HX_STACK_LINE(1103)
				break;
			}
			HX_STACK_LINE(1103)
			::nape::shape::Shape tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1103)
			{
				HX_STACK_LINE(1103)
				_g1->zpp_critical = false;
				HX_STACK_LINE(1103)
				int tmp31 = (_g1->zpp_i)++;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1103)
				tmp30 = _g1->zpp_inner->at(tmp31);
			}
			HX_STACK_LINE(1103)
			::nape::shape::Shape s = tmp30;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1104)
			int tmp31 = s->zpp_inner->type;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1104)
			int tmp32 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1104)
			bool tmp33 = (tmp31 == tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1104)
			if ((tmp33)){
				HX_STACK_LINE(1105)
				int tmp34 = s->zpp_inner->type;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1105)
				int tmp35 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1105)
				bool tmp36 = (tmp34 == tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1105)
				::nape::shape::Circle tmp37;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1105)
				if ((tmp36)){
					HX_STACK_LINE(1105)
					::zpp_nape::shape::ZPP_Circle tmp38 = s->zpp_inner->circle;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(1105)
					tmp37 = tmp38->outer_zn;
				}
				else{
					HX_STACK_LINE(1105)
					tmp37 = null();
				}
				HX_STACK_LINE(1105)
				::nape::shape::Circle c = tmp37;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(1106)
				Float tmp38;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1106)
				{
					HX_STACK_LINE(1106)
					::nape::geom::Vec2 tmp39;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(1106)
					{
						HX_STACK_LINE(1106)
						::nape::geom::Vec2 tmp40 = c->zpp_inner->wrap_localCOM;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(1106)
						bool tmp41 = (tmp40 == null());		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(1106)
						if ((tmp41)){
							HX_STACK_LINE(1106)
							int tmp42 = c->zpp_inner->type;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1106)
							int tmp43 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1106)
							bool tmp44 = (tmp42 == tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1106)
							if ((tmp44)){
								HX_STACK_LINE(1106)
								::zpp_nape::shape::ZPP_Circle tmp45 = c->zpp_inner->circle;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(1106)
								tmp45->setupLocalCOM();
							}
							else{
								HX_STACK_LINE(1106)
								::zpp_nape::shape::ZPP_Polygon tmp45 = c->zpp_inner->polygon;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(1106)
								tmp45->setupLocalCOM();
							}
						}
						HX_STACK_LINE(1106)
						tmp39 = c->zpp_inner->wrap_localCOM;
					}
					HX_STACK_LINE(1106)
					::nape::geom::Vec2 _this = tmp39;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1106)
					{
						HX_STACK_LINE(1106)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(1106)
						bool tmp40 = (_this1->_validate != null());		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(1106)
						if ((tmp40)){
							HX_STACK_LINE(1106)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(1106)
					tmp38 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(1106)
				Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1106)
				{
					HX_STACK_LINE(1106)
					::nape::geom::Vec2 tmp40;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(1106)
					{
						HX_STACK_LINE(1106)
						::nape::geom::Vec2 tmp41 = c->zpp_inner->wrap_localCOM;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(1106)
						bool tmp42 = (tmp41 == null());		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(1106)
						if ((tmp42)){
							HX_STACK_LINE(1106)
							int tmp43 = c->zpp_inner->type;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1106)
							int tmp44 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1106)
							bool tmp45 = (tmp43 == tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1106)
							if ((tmp45)){
								HX_STACK_LINE(1106)
								::zpp_nape::shape::ZPP_Circle tmp46 = c->zpp_inner->circle;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(1106)
								tmp46->setupLocalCOM();
							}
							else{
								HX_STACK_LINE(1106)
								::zpp_nape::shape::ZPP_Polygon tmp46 = c->zpp_inner->polygon;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(1106)
								tmp46->setupLocalCOM();
							}
						}
						HX_STACK_LINE(1106)
						tmp40 = c->zpp_inner->wrap_localCOM;
					}
					HX_STACK_LINE(1106)
					::nape::geom::Vec2 _this = tmp40;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1106)
					{
						HX_STACK_LINE(1106)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(1106)
						bool tmp41 = (_this1->_validate != null());		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(1106)
						if ((tmp41)){
							HX_STACK_LINE(1106)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(1106)
					tmp39 = _this->zpp_inner->y;
				}
				HX_STACK_LINE(1106)
				Float tmp40 = c->zpp_inner_zn->radius;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1106)
				graphics->drawCircle(tmp38,tmp39,tmp40);
			}
			else{
				HX_STACK_LINE(1109)
				int tmp34 = s->zpp_inner->type;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1109)
				int tmp35 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1109)
				bool tmp36 = (tmp34 == tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1109)
				::nape::shape::Polygon tmp37;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1109)
				if ((tmp36)){
					HX_STACK_LINE(1109)
					::zpp_nape::shape::ZPP_Polygon tmp38 = s->zpp_inner->polygon;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(1109)
					tmp37 = tmp38->outer_zn;
				}
				else{
					HX_STACK_LINE(1109)
					tmp37 = null();
				}
				HX_STACK_LINE(1109)
				::nape::shape::Polygon p = tmp37;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(1110)
				Float tmp38;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1110)
				{
					HX_STACK_LINE(1110)
					::nape::geom::Vec2 tmp39;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(1110)
					{
						HX_STACK_LINE(1110)
						::nape::geom::Vec2 tmp40 = s->zpp_inner->wrap_localCOM;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(1110)
						bool tmp41 = (tmp40 == null());		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(1110)
						if ((tmp41)){
							HX_STACK_LINE(1110)
							int tmp42 = s->zpp_inner->type;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1110)
							int tmp43 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1110)
							bool tmp44 = (tmp42 == tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1110)
							if ((tmp44)){
								HX_STACK_LINE(1110)
								::zpp_nape::shape::ZPP_Circle tmp45 = s->zpp_inner->circle;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(1110)
								tmp45->setupLocalCOM();
							}
							else{
								HX_STACK_LINE(1110)
								::zpp_nape::shape::ZPP_Polygon tmp45 = s->zpp_inner->polygon;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(1110)
								tmp45->setupLocalCOM();
							}
						}
						HX_STACK_LINE(1110)
						tmp39 = s->zpp_inner->wrap_localCOM;
					}
					HX_STACK_LINE(1110)
					::nape::geom::Vec2 _this = tmp39;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1110)
					{
						HX_STACK_LINE(1110)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(1110)
						bool tmp40 = (_this1->_validate != null());		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(1110)
						if ((tmp40)){
							HX_STACK_LINE(1110)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(1110)
					tmp38 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(1110)
				Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1110)
				{
					HX_STACK_LINE(1110)
					::nape::geom::Vec2 tmp40;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(1110)
					{
						HX_STACK_LINE(1110)
						::nape::geom::Vec2 tmp41 = s->zpp_inner->wrap_localCOM;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(1110)
						bool tmp42 = (tmp41 == null());		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(1110)
						if ((tmp42)){
							HX_STACK_LINE(1110)
							int tmp43 = s->zpp_inner->type;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1110)
							int tmp44 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1110)
							bool tmp45 = (tmp43 == tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1110)
							if ((tmp45)){
								HX_STACK_LINE(1110)
								::zpp_nape::shape::ZPP_Circle tmp46 = s->zpp_inner->circle;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(1110)
								tmp46->setupLocalCOM();
							}
							else{
								HX_STACK_LINE(1110)
								::zpp_nape::shape::ZPP_Polygon tmp46 = s->zpp_inner->polygon;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(1110)
								tmp46->setupLocalCOM();
							}
						}
						HX_STACK_LINE(1110)
						tmp40 = s->zpp_inner->wrap_localCOM;
					}
					HX_STACK_LINE(1110)
					::nape::geom::Vec2 _this = tmp40;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1110)
					{
						HX_STACK_LINE(1110)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(1110)
						bool tmp41 = (_this1->_validate != null());		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(1110)
						if ((tmp41)){
							HX_STACK_LINE(1110)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(1110)
					tmp39 = _this->zpp_inner->y;
				}
				HX_STACK_LINE(1110)
				graphics->moveTo(tmp38,tmp39);
				HX_STACK_LINE(1111)
				{
					HX_STACK_LINE(1111)
					int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(1111)
					int tmp40;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(1111)
					{
						HX_STACK_LINE(1111)
						::nape::geom::Vec2List tmp41;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(1111)
						{
							HX_STACK_LINE(1111)
							::nape::geom::Vec2List tmp42 = p->zpp_inner_zn->wrap_gverts;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1111)
							bool tmp43 = (tmp42 == null());		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1111)
							if ((tmp43)){
								HX_STACK_LINE(1111)
								p->zpp_inner_zn->getgverts();
							}
							HX_STACK_LINE(1111)
							tmp41 = p->zpp_inner_zn->wrap_gverts;
						}
						HX_STACK_LINE(1111)
						::nape::geom::Vec2List _this = tmp41;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1111)
						tmp40 = _this->zpp_gl();
					}
					HX_STACK_LINE(1111)
					int _g2 = tmp40;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1111)
					while((true)){
						HX_STACK_LINE(1111)
						bool tmp41 = (_g11 < _g2);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(1111)
						bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(1111)
						if ((tmp42)){
							HX_STACK_LINE(1111)
							break;
						}
						HX_STACK_LINE(1111)
						int tmp43 = (_g11)++;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(1111)
						int i = tmp43;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(1112)
						::nape::geom::Vec2List tmp44;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(1112)
						{
							HX_STACK_LINE(1112)
							::nape::geom::Vec2List tmp45 = p->zpp_inner_zn->wrap_lverts;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1112)
							bool tmp46 = (tmp45 == null());		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1112)
							if ((tmp46)){
								HX_STACK_LINE(1112)
								p->zpp_inner_zn->getlverts();
							}
							HX_STACK_LINE(1112)
							tmp44 = p->zpp_inner_zn->wrap_lverts;
						}
						HX_STACK_LINE(1112)
						int tmp45 = i;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(1112)
						::nape::geom::Vec2 tmp46 = tmp44->at(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(1112)
						::nape::geom::Vec2 px = tmp46;		HX_STACK_VAR(px,"px");
						HX_STACK_LINE(1113)
						Float tmp47;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(1113)
						{
							HX_STACK_LINE(1113)
							{
								HX_STACK_LINE(1113)
								::zpp_nape::geom::ZPP_Vec2 _this = px->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1113)
								bool tmp48 = (_this->_validate != null());		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(1113)
								if ((tmp48)){
									HX_STACK_LINE(1113)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1113)
							tmp47 = px->zpp_inner->x;
						}
						HX_STACK_LINE(1113)
						Float tmp48;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(1113)
						{
							HX_STACK_LINE(1113)
							{
								HX_STACK_LINE(1113)
								::zpp_nape::geom::ZPP_Vec2 _this = px->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1113)
								bool tmp49 = (_this->_validate != null());		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(1113)
								if ((tmp49)){
									HX_STACK_LINE(1113)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1113)
							tmp48 = px->zpp_inner->y;
						}
						HX_STACK_LINE(1113)
						graphics->lineTo(tmp47,tmp48);
					}
				}
				HX_STACK_LINE(1115)
				::nape::geom::Vec2List tmp40;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1115)
				{
					HX_STACK_LINE(1115)
					::nape::geom::Vec2List tmp41 = p->zpp_inner_zn->wrap_lverts;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(1115)
					bool tmp42 = (tmp41 == null());		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(1115)
					if ((tmp42)){
						HX_STACK_LINE(1115)
						p->zpp_inner_zn->getlverts();
					}
					HX_STACK_LINE(1115)
					tmp40 = p->zpp_inner_zn->wrap_lverts;
				}
				HX_STACK_LINE(1115)
				::nape::geom::Vec2 tmp41 = tmp40->at((int)0);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1115)
				::nape::geom::Vec2 px = tmp41;		HX_STACK_VAR(px,"px");
				HX_STACK_LINE(1116)
				Float tmp42;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(1116)
				{
					HX_STACK_LINE(1116)
					{
						HX_STACK_LINE(1116)
						::zpp_nape::geom::ZPP_Vec2 _this = px->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1116)
						bool tmp43 = (_this->_validate != null());		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(1116)
						if ((tmp43)){
							HX_STACK_LINE(1116)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1116)
					tmp42 = px->zpp_inner->x;
				}
				HX_STACK_LINE(1116)
				Float tmp43;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1116)
				{
					HX_STACK_LINE(1116)
					{
						HX_STACK_LINE(1116)
						::zpp_nape::geom::ZPP_Vec2 _this = px->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1116)
						bool tmp44 = (_this->_validate != null());		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(1116)
						if ((tmp44)){
							HX_STACK_LINE(1116)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1116)
					tmp43 = px->zpp_inner->y;
				}
				HX_STACK_LINE(1116)
				graphics->lineTo(tmp42,tmp43);
			}
			HX_STACK_LINE(1118)
			int tmp34 = s->zpp_inner->type;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1118)
			int tmp35 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1118)
			bool tmp36 = (tmp34 == tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1118)
			if ((tmp36)){
				HX_STACK_LINE(1119)
				int tmp37 = s->zpp_inner->type;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1119)
				int tmp38 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1119)
				bool tmp39 = (tmp37 == tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1119)
				::nape::shape::Circle tmp40;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1119)
				if ((tmp39)){
					HX_STACK_LINE(1119)
					::zpp_nape::shape::ZPP_Circle tmp41 = s->zpp_inner->circle;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(1119)
					tmp40 = tmp41->outer_zn;
				}
				else{
					HX_STACK_LINE(1119)
					tmp40 = null();
				}
				HX_STACK_LINE(1119)
				::nape::shape::Circle c = tmp40;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(1120)
				Float tmp41;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1120)
				{
					HX_STACK_LINE(1120)
					::nape::geom::Vec2 tmp42;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(1120)
					{
						HX_STACK_LINE(1120)
						::nape::geom::Vec2 tmp43 = c->zpp_inner->wrap_localCOM;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(1120)
						bool tmp44 = (tmp43 == null());		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(1120)
						if ((tmp44)){
							HX_STACK_LINE(1120)
							int tmp45 = c->zpp_inner->type;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1120)
							int tmp46 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1120)
							bool tmp47 = (tmp45 == tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1120)
							if ((tmp47)){
								HX_STACK_LINE(1120)
								::zpp_nape::shape::ZPP_Circle tmp48 = c->zpp_inner->circle;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(1120)
								tmp48->setupLocalCOM();
							}
							else{
								HX_STACK_LINE(1120)
								::zpp_nape::shape::ZPP_Polygon tmp48 = c->zpp_inner->polygon;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(1120)
								tmp48->setupLocalCOM();
							}
						}
						HX_STACK_LINE(1120)
						tmp42 = c->zpp_inner->wrap_localCOM;
					}
					HX_STACK_LINE(1120)
					::nape::geom::Vec2 _this = tmp42;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1120)
					{
						HX_STACK_LINE(1120)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(1120)
						bool tmp43 = (_this1->_validate != null());		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(1120)
						if ((tmp43)){
							HX_STACK_LINE(1120)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(1120)
					tmp41 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(1120)
				Float tmp42 = c->zpp_inner_zn->radius;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(1120)
				Float tmp43 = (tmp42 * ((Float)0.3));		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1120)
				Float tmp44 = (tmp41 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(1120)
				Float tmp45;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(1120)
				{
					HX_STACK_LINE(1120)
					::nape::geom::Vec2 tmp46;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(1120)
					{
						HX_STACK_LINE(1120)
						::nape::geom::Vec2 tmp47 = c->zpp_inner->wrap_localCOM;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(1120)
						bool tmp48 = (tmp47 == null());		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(1120)
						if ((tmp48)){
							HX_STACK_LINE(1120)
							int tmp49 = c->zpp_inner->type;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1120)
							int tmp50 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1120)
							bool tmp51 = (tmp49 == tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1120)
							if ((tmp51)){
								HX_STACK_LINE(1120)
								::zpp_nape::shape::ZPP_Circle tmp52 = c->zpp_inner->circle;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(1120)
								tmp52->setupLocalCOM();
							}
							else{
								HX_STACK_LINE(1120)
								::zpp_nape::shape::ZPP_Polygon tmp52 = c->zpp_inner->polygon;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(1120)
								tmp52->setupLocalCOM();
							}
						}
						HX_STACK_LINE(1120)
						tmp46 = c->zpp_inner->wrap_localCOM;
					}
					HX_STACK_LINE(1120)
					::nape::geom::Vec2 _this = tmp46;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1120)
					{
						HX_STACK_LINE(1120)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(1120)
						bool tmp47 = (_this1->_validate != null());		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(1120)
						if ((tmp47)){
							HX_STACK_LINE(1120)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(1120)
					tmp45 = _this->zpp_inner->y;
				}
				HX_STACK_LINE(1120)
				graphics->moveTo(tmp44,tmp45);
				HX_STACK_LINE(1121)
				Float tmp46;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(1121)
				{
					HX_STACK_LINE(1121)
					::nape::geom::Vec2 tmp47;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(1121)
					{
						HX_STACK_LINE(1121)
						::nape::geom::Vec2 tmp48 = c->zpp_inner->wrap_localCOM;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(1121)
						bool tmp49 = (tmp48 == null());		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(1121)
						if ((tmp49)){
							HX_STACK_LINE(1121)
							int tmp50 = c->zpp_inner->type;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1121)
							int tmp51 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1121)
							bool tmp52 = (tmp50 == tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1121)
							if ((tmp52)){
								HX_STACK_LINE(1121)
								::zpp_nape::shape::ZPP_Circle tmp53 = c->zpp_inner->circle;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(1121)
								tmp53->setupLocalCOM();
							}
							else{
								HX_STACK_LINE(1121)
								::zpp_nape::shape::ZPP_Polygon tmp53 = c->zpp_inner->polygon;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(1121)
								tmp53->setupLocalCOM();
							}
						}
						HX_STACK_LINE(1121)
						tmp47 = c->zpp_inner->wrap_localCOM;
					}
					HX_STACK_LINE(1121)
					::nape::geom::Vec2 _this = tmp47;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1121)
					{
						HX_STACK_LINE(1121)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(1121)
						bool tmp48 = (_this1->_validate != null());		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(1121)
						if ((tmp48)){
							HX_STACK_LINE(1121)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(1121)
					tmp46 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(1121)
				Float tmp47 = c->zpp_inner_zn->radius;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(1121)
				Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(1121)
				Float tmp49;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(1121)
				{
					HX_STACK_LINE(1121)
					::nape::geom::Vec2 tmp50;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(1121)
					{
						HX_STACK_LINE(1121)
						::nape::geom::Vec2 tmp51 = c->zpp_inner->wrap_localCOM;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(1121)
						bool tmp52 = (tmp51 == null());		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(1121)
						if ((tmp52)){
							HX_STACK_LINE(1121)
							int tmp53 = c->zpp_inner->type;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1121)
							int tmp54 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1121)
							bool tmp55 = (tmp53 == tmp54);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1121)
							if ((tmp55)){
								HX_STACK_LINE(1121)
								::zpp_nape::shape::ZPP_Circle tmp56 = c->zpp_inner->circle;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(1121)
								tmp56->setupLocalCOM();
							}
							else{
								HX_STACK_LINE(1121)
								::zpp_nape::shape::ZPP_Polygon tmp56 = c->zpp_inner->polygon;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(1121)
								tmp56->setupLocalCOM();
							}
						}
						HX_STACK_LINE(1121)
						tmp50 = c->zpp_inner->wrap_localCOM;
					}
					HX_STACK_LINE(1121)
					::nape::geom::Vec2 _this = tmp50;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1121)
					{
						HX_STACK_LINE(1121)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(1121)
						bool tmp51 = (_this1->_validate != null());		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(1121)
						if ((tmp51)){
							HX_STACK_LINE(1121)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(1121)
					tmp49 = _this->zpp_inner->y;
				}
				HX_STACK_LINE(1121)
				graphics->lineTo(tmp48,tmp49);
			}
		}
	}
	HX_STACK_LINE(1124)
	::openfl::_legacy::display::Shape tmp27 = ret;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(1124)
	return tmp27;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,createGraphic,return )


Debug_obj::Debug_obj()
{
}

void Debug_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Debug);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_MEMBER_NAME(drawCollisionArbiters,"drawCollisionArbiters");
	HX_MARK_MEMBER_NAME(drawFluidArbiters,"drawFluidArbiters");
	HX_MARK_MEMBER_NAME(drawSensorArbiters,"drawSensorArbiters");
	HX_MARK_MEMBER_NAME(drawBodies,"drawBodies");
	HX_MARK_MEMBER_NAME(drawBodyDetail,"drawBodyDetail");
	HX_MARK_MEMBER_NAME(drawShapeDetail,"drawShapeDetail");
	HX_MARK_MEMBER_NAME(drawShapeAngleIndicators,"drawShapeAngleIndicators");
	HX_MARK_MEMBER_NAME(drawConstraints,"drawConstraints");
	HX_MARK_MEMBER_NAME(colour,"colour");
	HX_MARK_MEMBER_NAME(cullingEnabled,"cullingEnabled");
	HX_MARK_END_CLASS();
}

void Debug_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_VISIT_MEMBER_NAME(drawCollisionArbiters,"drawCollisionArbiters");
	HX_VISIT_MEMBER_NAME(drawFluidArbiters,"drawFluidArbiters");
	HX_VISIT_MEMBER_NAME(drawSensorArbiters,"drawSensorArbiters");
	HX_VISIT_MEMBER_NAME(drawBodies,"drawBodies");
	HX_VISIT_MEMBER_NAME(drawBodyDetail,"drawBodyDetail");
	HX_VISIT_MEMBER_NAME(drawShapeDetail,"drawShapeDetail");
	HX_VISIT_MEMBER_NAME(drawShapeAngleIndicators,"drawShapeAngleIndicators");
	HX_VISIT_MEMBER_NAME(drawConstraints,"drawConstraints");
	HX_VISIT_MEMBER_NAME(colour,"colour");
	HX_VISIT_MEMBER_NAME(cullingEnabled,"cullingEnabled");
}

Dynamic Debug_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { return colour; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { if (inCallProp == hx::paccAlways) return get_display(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bgColour") ) { if (inCallProp == hx::paccAlways) return get_bgColour(); }
		if (HX_FIELD_EQ(inName,"drawLine") ) { return drawLine_dyn(); }
		if (HX_FIELD_EQ(inName,"drawAABB") ) { return drawAABB_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"transform") ) { if (inCallProp == hx::paccAlways) return get_transform(); }
		if (HX_FIELD_EQ(inName,"drawCurve") ) { return drawCurve_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawBodies") ) { return drawBodies; }
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return drawCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"drawSpring") ) { return drawSpring_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_display") ) { return get_display_dyn(); }
		if (HX_FIELD_EQ(inName,"drawPolygon") ) { return drawPolygon_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_bgColour") ) { return get_bgColour_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bgColour") ) { return set_bgColour_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_transform") ) { return get_transform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_transform") ) { return set_transform_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"drawBodyDetail") ) { return drawBodyDetail; }
		if (HX_FIELD_EQ(inName,"cullingEnabled") ) { return cullingEnabled; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"drawShapeDetail") ) { return drawShapeDetail; }
		if (HX_FIELD_EQ(inName,"drawConstraints") ) { return drawConstraints; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"drawFilledCircle") ) { return drawFilledCircle_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"drawFluidArbiters") ) { return drawFluidArbiters; }
		if (HX_FIELD_EQ(inName,"drawFilledPolygon") ) { return drawFilledPolygon_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"drawSensorArbiters") ) { return drawSensorArbiters; }
		if (HX_FIELD_EQ(inName,"drawFilledTriangle") ) { return drawFilledTriangle_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"drawCollisionArbiters") ) { return drawCollisionArbiters; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"drawShapeAngleIndicators") ) { return drawShapeAngleIndicators; }
	}
	return super::__Field(inName,inCallProp);
}

bool Debug_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { outValue = version_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createGraphic") ) { outValue = createGraphic_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"clearObjectPools") ) { outValue = clearObjectPools_dyn(); return true;  }
	}
	return false;
}

Dynamic Debug_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { colour=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bgColour") ) { if (inCallProp == hx::paccAlways) return set_bgColour(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::util::ZPP_Debug >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transform") ) { if (inCallProp == hx::paccAlways) return set_transform(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawBodies") ) { drawBodies=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"drawBodyDetail") ) { drawBodyDetail=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cullingEnabled") ) { cullingEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"drawShapeDetail") ) { drawShapeDetail=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawConstraints") ) { drawConstraints=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"drawFluidArbiters") ) { drawFluidArbiters=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"drawSensorArbiters") ) { drawSensorArbiters=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"drawCollisionArbiters") ) { drawCollisionArbiters=inValue.Cast< bool >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"drawShapeAngleIndicators") ) { drawShapeAngleIndicators=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Debug_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("drawCollisionArbiters","\x58","\x22","\xbb","\x14"));
	outFields->push(HX_HCSTRING("drawFluidArbiters","\xf0","\x4d","\xe1","\xc1"));
	outFields->push(HX_HCSTRING("drawSensorArbiters","\xe8","\x23","\x51","\x4c"));
	outFields->push(HX_HCSTRING("drawBodies","\xa4","\x96","\xa0","\x9c"));
	outFields->push(HX_HCSTRING("drawBodyDetail","\xf7","\xd3","\x45","\x9a"));
	outFields->push(HX_HCSTRING("drawShapeDetail","\xee","\xea","\xf8","\xc7"));
	outFields->push(HX_HCSTRING("drawShapeAngleIndicators","\x7a","\x5f","\xb7","\x29"));
	outFields->push(HX_HCSTRING("drawConstraints","\xd2","\xf3","\x4b","\xdd"));
	outFields->push(HX_HCSTRING("bgColour","\xf1","\xb3","\x8d","\x9b"));
	outFields->push(HX_HCSTRING("display","\x42","\x2a","\x4a","\xbb"));
	outFields->push(HX_HCSTRING("cullingEnabled","\xf1","\x77","\xac","\x15"));
	outFields->push(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZPP_Debug*/ ,(int)offsetof(Debug_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{hx::fsBool,(int)offsetof(Debug_obj,drawCollisionArbiters),HX_HCSTRING("drawCollisionArbiters","\x58","\x22","\xbb","\x14")},
	{hx::fsBool,(int)offsetof(Debug_obj,drawFluidArbiters),HX_HCSTRING("drawFluidArbiters","\xf0","\x4d","\xe1","\xc1")},
	{hx::fsBool,(int)offsetof(Debug_obj,drawSensorArbiters),HX_HCSTRING("drawSensorArbiters","\xe8","\x23","\x51","\x4c")},
	{hx::fsBool,(int)offsetof(Debug_obj,drawBodies),HX_HCSTRING("drawBodies","\xa4","\x96","\xa0","\x9c")},
	{hx::fsBool,(int)offsetof(Debug_obj,drawBodyDetail),HX_HCSTRING("drawBodyDetail","\xf7","\xd3","\x45","\x9a")},
	{hx::fsBool,(int)offsetof(Debug_obj,drawShapeDetail),HX_HCSTRING("drawShapeDetail","\xee","\xea","\xf8","\xc7")},
	{hx::fsBool,(int)offsetof(Debug_obj,drawShapeAngleIndicators),HX_HCSTRING("drawShapeAngleIndicators","\x7a","\x5f","\xb7","\x29")},
	{hx::fsBool,(int)offsetof(Debug_obj,drawConstraints),HX_HCSTRING("drawConstraints","\xd2","\xf3","\x4b","\xdd")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Debug_obj,colour),HX_HCSTRING("colour","\x4c","\xc8","\x86","\xc6")},
	{hx::fsBool,(int)offsetof(Debug_obj,cullingEnabled),HX_HCSTRING("cullingEnabled","\xf1","\x77","\xac","\x15")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("drawCollisionArbiters","\x58","\x22","\xbb","\x14"),
	HX_HCSTRING("drawFluidArbiters","\xf0","\x4d","\xe1","\xc1"),
	HX_HCSTRING("drawSensorArbiters","\xe8","\x23","\x51","\x4c"),
	HX_HCSTRING("drawBodies","\xa4","\x96","\xa0","\x9c"),
	HX_HCSTRING("drawBodyDetail","\xf7","\xd3","\x45","\x9a"),
	HX_HCSTRING("drawShapeDetail","\xee","\xea","\xf8","\xc7"),
	HX_HCSTRING("drawShapeAngleIndicators","\x7a","\x5f","\xb7","\x29"),
	HX_HCSTRING("drawConstraints","\xd2","\xf3","\x4b","\xdd"),
	HX_HCSTRING("get_bgColour","\xfa","\x67","\xa7","\x50"),
	HX_HCSTRING("set_bgColour","\x6e","\x8b","\xa0","\x65"),
	HX_HCSTRING("colour","\x4c","\xc8","\x86","\xc6"),
	HX_HCSTRING("get_display","\x59","\x8a","\x44","\x41"),
	HX_HCSTRING("cullingEnabled","\xf1","\x77","\xac","\x15"),
	HX_HCSTRING("get_transform","\x43","\x01","\xf7","\x06"),
	HX_HCSTRING("set_transform","\x4f","\xe3","\xfc","\x4b"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("drawLine","\x18","\xc2","\x1c","\x5c"),
	HX_HCSTRING("drawCurve","\x0b","\x82","\x63","\x16"),
	HX_HCSTRING("drawCircle","\x34","\xed","\xd0","\x97"),
	HX_HCSTRING("drawAABB","\xa4","\xe8","\xb8","\x54"),
	HX_HCSTRING("drawFilledTriangle","\xae","\x39","\xe9","\xd6"),
	HX_HCSTRING("drawFilledCircle","\x76","\x47","\xc4","\xa3"),
	HX_HCSTRING("drawPolygon","\xd6","\x46","\xd9","\x5b"),
	HX_HCSTRING("drawFilledPolygon","\x54","\xe6","\xd4","\xc4"),
	HX_HCSTRING("drawSpring","\xf1","\x51","\x59","\x05"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Debug_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Debug_obj::__mClass,"__mClass");
};

#endif

hx::Class Debug_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("clearObjectPools","\x4b","\x84","\x4d","\x7f"),
	HX_HCSTRING("createGraphic","\x0c","\x33","\x4a","\x5c"),
	::String(null()) };

void Debug_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.util.Debug","\x8d","\x4a","\x62","\xab");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Debug_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Debug_obj >;
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
} // end namespace util
