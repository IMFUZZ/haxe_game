// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal1
#include <flixel/util/_FlxSignal/FlxSignal1.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_10_new,"flixel.system.frontEnds.CameraFrontEnd","new",0xc6f5a1a3,"flixel.system.frontEnds.CameraFrontEnd.new","flixel/system/frontEnds/CameraFrontEnd.hx",10,0x7a57d3ec)
HX_DEFINE_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_50_add,"flixel.system.frontEnds.CameraFrontEnd","add",0xc6ebc364,"flixel.system.frontEnds.CameraFrontEnd.add","flixel/system/frontEnds/CameraFrontEnd.hx",50,0x7a57d3ec)
HX_DEFINE_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_65_remove,"flixel.system.frontEnds.CameraFrontEnd","remove",0xaa68b6e1,"flixel.system.frontEnds.CameraFrontEnd.remove","flixel/system/frontEnds/CameraFrontEnd.hx",65,0x7a57d3ec)
HX_DEFINE_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_99_reset,"flixel.system.frontEnds.CameraFrontEnd","reset",0xf67331d2,"flixel.system.frontEnds.CameraFrontEnd.reset","flixel/system/frontEnds/CameraFrontEnd.hx",99,0x7a57d3ec)
HX_DEFINE_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_124_flash,"flixel.system.frontEnds.CameraFrontEnd","flash",0x12371db3,"flixel.system.frontEnds.CameraFrontEnd.flash","flixel/system/frontEnds/CameraFrontEnd.hx",124,0x7a57d3ec)
HX_DEFINE_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_141_fade,"flixel.system.frontEnds.CameraFrontEnd","fade",0x4aaafed9,"flixel.system.frontEnds.CameraFrontEnd.fade","flixel/system/frontEnds/CameraFrontEnd.hx",141,0x7a57d3ec)
HX_DEFINE_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_158_shake,"flixel.system.frontEnds.CameraFrontEnd","shake",0x8bc7c6c9,"flixel.system.frontEnds.CameraFrontEnd.shake","flixel/system/frontEnds/CameraFrontEnd.hx",158,0x7a57d3ec)
HX_DEFINE_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_176_lock,"flixel.system.frontEnds.CameraFrontEnd","lock",0x4eace548,"flixel.system.frontEnds.CameraFrontEnd.lock","flixel/system/frontEnds/CameraFrontEnd.hx",176,0x7a57d3ec)
HX_DEFINE_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_218_render,"flixel.system.frontEnds.CameraFrontEnd","render",0xab0985f3,"flixel.system.frontEnds.CameraFrontEnd.render","flixel/system/frontEnds/CameraFrontEnd.hx",218,0x7a57d3ec)
HX_DEFINE_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_236_unlock,"flixel.system.frontEnds.CameraFrontEnd","unlock",0x0b6cbd61,"flixel.system.frontEnds.CameraFrontEnd.unlock","flixel/system/frontEnds/CameraFrontEnd.hx",236,0x7a57d3ec)
HX_DEFINE_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_263_update,"flixel.system.frontEnds.CameraFrontEnd","update",0x2ce5a0a6,"flixel.system.frontEnds.CameraFrontEnd.update","flixel/system/frontEnds/CameraFrontEnd.hx",263,0x7a57d3ec)
HX_DEFINE_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_278_resize,"flixel.system.frontEnds.CameraFrontEnd","resize",0xae5b7491,"flixel.system.frontEnds.CameraFrontEnd.resize","flixel/system/frontEnds/CameraFrontEnd.hx",278,0x7a57d3ec)
HX_DEFINE_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_286_get_bgColor,"flixel.system.frontEnds.CameraFrontEnd","get_bgColor",0x99072db8,"flixel.system.frontEnds.CameraFrontEnd.get_bgColor","flixel/system/frontEnds/CameraFrontEnd.hx",286,0x7a57d3ec)
HX_DEFINE_STACK_FRAME(_hx_pos_37a8fd7f84c9d590_290_set_bgColor,"flixel.system.frontEnds.CameraFrontEnd","set_bgColor",0xa37434c4,"flixel.system.frontEnds.CameraFrontEnd.set_bgColor","flixel/system/frontEnds/CameraFrontEnd.hx",290,0x7a57d3ec)
namespace flixel{
namespace _hx_system{
namespace frontEnds{

void CameraFrontEnd_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_10_new)
            	HX_STACK_THIS(this)
HXLINE(  40)		this->_cameraRect =  ::openfl::_legacy::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  36)		this->useBufferLocking = false;
HXLINE(  30)		this->cameraResized =  ::flixel::util::_FlxSignal::FlxSignal1_obj::__alloc( HX_CTX );
HXLINE(  27)		this->cameraRemoved =  ::flixel::util::_FlxSignal::FlxSignal1_obj::__alloc( HX_CTX );
HXLINE(  24)		this->cameraAdded =  ::flixel::util::_FlxSignal::FlxSignal1_obj::__alloc( HX_CTX );
HXLINE(  16)		this->list = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 167)		::flixel::FlxCamera_obj::defaultCameras = this->list;
            	}

Dynamic CameraFrontEnd_obj::__CreateEmpty() { return new CameraFrontEnd_obj; }

void *CameraFrontEnd_obj::_hx_vtable = 0;

Dynamic CameraFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CameraFrontEnd_obj > _hx_result = new CameraFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CameraFrontEnd_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3c1a01ed;
}

 ::Dynamic CameraFrontEnd_obj::add( ::Dynamic NewCamera){
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_50_add)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(NewCamera,"NewCamera")
HXLINE(  51)		 ::flixel::FlxGame _hx_tmp = ::flixel::FlxG_obj::game;
HXDLIN(  51)		HX_VARI_NAME(  ::openfl::_legacy::display::Sprite,NewCamera1,"NewCamera") = ( ( ::flixel::FlxCamera)(NewCamera) )->flashSprite;
HXDLIN(  51)		_hx_tmp->addChildAt(NewCamera1,::flixel::FlxG_obj::game->getChildIndex(::flixel::FlxG_obj::game->_inputContainer));
HXLINE(  52)		::flixel::FlxG_obj::cameras->list->push(NewCamera);
HXLINE(  53)		( ( ::flixel::FlxBasic)(NewCamera) )->ID = (::flixel::FlxG_obj::cameras->list->length - (int)1);
HXLINE(  54)		this->cameraAdded->dispatch(NewCamera);
HXLINE(  55)		return NewCamera;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,add,return )

void CameraFrontEnd_obj::remove( ::flixel::FlxCamera Camera,hx::Null< bool >  __o_Destroy){
bool Destroy = __o_Destroy.Default(true);
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_65_remove)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Camera,"Camera")
            	HX_STACK_ARG(Destroy,"Destroy")
HXLINE(  66)		HX_VARI( int,index) = this->list->indexOf(Camera,null());
HXLINE(  67)		bool _hx_tmp;
HXDLIN(  67)		if (hx::IsNotNull( Camera )) {
HXLINE(  67)			_hx_tmp = (index != (int)-1);
            		}
            		else {
HXLINE(  67)			_hx_tmp = false;
            		}
HXDLIN(  67)		if (_hx_tmp) {
HXLINE(  69)			::flixel::FlxG_obj::game->removeChild(Camera->flashSprite);
HXLINE(  70)			this->list->removeRange(index,(int)1);
            		}
            		else {
HXLINE(  75)			return;
            		}
HXLINE(  78)		if (::flixel::FlxG_obj::renderTile) {
HXLINE(  80)			HX_VARI( int,_g1) = (int)0;
HXDLIN(  80)			HX_VARI( int,_g) = this->list->length;
HXDLIN(  80)			while((_g1 < _g)){
HXLINE(  80)				_g1 = (_g1 + (int)1);
HXDLIN(  80)				HX_VARI( int,i) = (_g1 - (int)1);
HXLINE(  82)				this->list->__get(i).StaticCast<  ::flixel::FlxCamera >()->ID = i;
            			}
            		}
HXLINE(  86)		if (Destroy) {
HXLINE(  87)			Camera->destroy();
            		}
HXLINE(  89)		this->cameraRemoved->dispatch(Camera);
            	}


HX_DEFINE_DYNAMIC_FUNC2(CameraFrontEnd_obj,remove,(void))

void CameraFrontEnd_obj::reset( ::flixel::FlxCamera NewCamera){
            	HX_GC_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_99_reset)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(NewCamera,"NewCamera")
HXLINE( 100)		{
HXLINE( 100)			HX_VARI( int,_g) = (int)0;
HXDLIN( 100)			HX_VARI( ::Array< ::Dynamic>,_g1) = this->list;
HXDLIN( 100)			while((_g < _g1->length)){
HXLINE( 100)				HX_VARI(  ::flixel::FlxCamera,camera) = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 100)				_g = (_g + (int)1);
HXLINE( 101)				this->remove(camera,null());
            			}
            		}
HXLINE( 103)		this->list->removeRange((int)0,this->list->length);
HXLINE( 105)		if (hx::IsNull( NewCamera )) {
HXLINE( 106)			NewCamera =  ::flixel::FlxCamera_obj::__alloc( HX_CTX ,(int)0,(int)0,::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,null());
            		}
HXLINE( 108)		::flixel::FlxG_obj::camera = ( ( ::flixel::FlxCamera)(this->add(NewCamera)) );
HXLINE( 109)		NewCamera->ID = (int)0;
HXLINE( 111)		::flixel::FlxCamera_obj::defaultCameras = this->list;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,reset,(void))

void CameraFrontEnd_obj::flash(hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration, ::Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-1);
Float Duration = __o_Duration.Default(1);
bool Force = __o_Force.Default(false);
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_124_flash)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Color,"Color")
            	HX_STACK_ARG(Duration,"Duration")
            	HX_STACK_ARG(OnComplete,"OnComplete")
            	HX_STACK_ARG(Force,"Force")
HXLINE( 124)		HX_VARI( int,_g) = (int)0;
HXDLIN( 124)		HX_VARI( ::Array< ::Dynamic>,_g1) = this->list;
HXDLIN( 124)		while((_g < _g1->length)){
HXLINE( 124)			HX_VARI(  ::flixel::FlxCamera,camera) = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 124)			_g = (_g + (int)1);
HXLINE( 126)			camera->flash(Color,Duration,OnComplete,Force);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(CameraFrontEnd_obj,flash,(void))

void CameraFrontEnd_obj::fade(hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,hx::Null< bool >  __o_FadeIn, ::Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-16777216);
Float Duration = __o_Duration.Default(1);
bool FadeIn = __o_FadeIn.Default(false);
bool Force = __o_Force.Default(false);
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_141_fade)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Color,"Color")
            	HX_STACK_ARG(Duration,"Duration")
            	HX_STACK_ARG(FadeIn,"FadeIn")
            	HX_STACK_ARG(OnComplete,"OnComplete")
            	HX_STACK_ARG(Force,"Force")
HXLINE( 141)		HX_VARI( int,_g) = (int)0;
HXDLIN( 141)		HX_VARI( ::Array< ::Dynamic>,_g1) = this->list;
HXDLIN( 141)		while((_g < _g1->length)){
HXLINE( 141)			HX_VARI(  ::flixel::FlxCamera,camera) = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 141)			_g = (_g + (int)1);
HXLINE( 143)			camera->fade(Color,Duration,FadeIn,OnComplete,Force);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(CameraFrontEnd_obj,fade,(void))

void CameraFrontEnd_obj::shake(hx::Null< Float >  __o_Intensity,hx::Null< Float >  __o_Duration, ::Dynamic OnComplete,hx::Null< bool >  __o_Force, ::flixel::util::FlxAxes Axes){
Float Intensity = __o_Intensity.Default(((Float)0.05));
Float Duration = __o_Duration.Default(((Float)0.5));
bool Force = __o_Force.Default(true);
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_158_shake)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Intensity,"Intensity")
            	HX_STACK_ARG(Duration,"Duration")
            	HX_STACK_ARG(OnComplete,"OnComplete")
            	HX_STACK_ARG(Force,"Force")
            	HX_STACK_ARG(Axes,"Axes")
HXLINE( 158)		HX_VARI( int,_g) = (int)0;
HXDLIN( 158)		HX_VARI( ::Array< ::Dynamic>,_g1) = this->list;
HXDLIN( 158)		while((_g < _g1->length)){
HXLINE( 158)			HX_VARI(  ::flixel::FlxCamera,camera) = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 158)			_g = (_g + (int)1);
HXLINE( 160)			camera->shake(Intensity,Duration,OnComplete,Force,Axes);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(CameraFrontEnd_obj,shake,(void))

void CameraFrontEnd_obj::lock(){
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_176_lock)
            	HX_STACK_THIS(this)
HXLINE( 176)		HX_VARI( int,_g) = (int)0;
HXDLIN( 176)		HX_VARI( ::Array< ::Dynamic>,_g1) = this->list;
HXDLIN( 176)		while((_g < _g1->length)){
HXLINE( 176)			HX_VARI(  ::flixel::FlxCamera,camera) = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 176)			_g = (_g + (int)1);
HXLINE( 178)			bool _hx_tmp;
HXDLIN( 178)			bool _hx_tmp1;
HXDLIN( 178)			if (hx::IsNotNull( camera )) {
HXLINE( 178)				_hx_tmp1 = !(camera->exists);
            			}
            			else {
HXLINE( 178)				_hx_tmp1 = true;
            			}
HXDLIN( 178)			if (!(_hx_tmp1)) {
HXLINE( 178)				_hx_tmp = !(camera->visible);
            			}
            			else {
HXLINE( 178)				_hx_tmp = true;
            			}
HXDLIN( 178)			if (_hx_tmp) {
HXLINE( 180)				continue;
            			}
HXLINE( 183)			if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 185)				camera->checkResize();
            			}
HXLINE( 193)			if (::flixel::FlxG_obj::renderTile) {
HXLINE( 195)				camera->clearDrawStack();
HXLINE( 196)				camera->canvas->get_graphics()->clear();
            			}
HXLINE( 203)			if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 205)				camera->fill(camera->bgColor,camera->useBgAlphaBlending,null(),null());
HXLINE( 206)				camera->screen->dirty = true;
            			}
            			else {
HXLINE( 210)				camera->fill(((int)camera->bgColor & (int)(int)16777215),camera->useBgAlphaBlending,((Float)((int)((int)camera->bgColor >> (int)(int)24) & (int)(int)255) / (Float)(int)255),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,lock,(void))

void CameraFrontEnd_obj::render(){
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_218_render)
            	HX_STACK_THIS(this)
HXLINE( 218)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 220)			HX_VARI( int,_g) = (int)0;
HXDLIN( 220)			HX_VARI( ::Array< ::Dynamic>,_g1) = this->list;
HXDLIN( 220)			while((_g < _g1->length)){
HXLINE( 220)				HX_VARI(  ::flixel::FlxCamera,camera) = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 220)				_g = (_g + (int)1);
HXLINE( 222)				bool _hx_tmp;
HXDLIN( 222)				bool _hx_tmp1;
HXDLIN( 222)				if (hx::IsNotNull( camera )) {
HXLINE( 222)					_hx_tmp1 = camera->exists;
            				}
            				else {
HXLINE( 222)					_hx_tmp1 = false;
            				}
HXDLIN( 222)				if (_hx_tmp1) {
HXLINE( 222)					_hx_tmp = camera->visible;
            				}
            				else {
HXLINE( 222)					_hx_tmp = false;
            				}
HXDLIN( 222)				if (_hx_tmp) {
HXLINE( 224)					camera->render();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,render,(void))

void CameraFrontEnd_obj::unlock(){
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_236_unlock)
            	HX_STACK_THIS(this)
HXLINE( 236)		HX_VARI( int,_g) = (int)0;
HXDLIN( 236)		HX_VARI( ::Array< ::Dynamic>,_g1) = this->list;
HXDLIN( 236)		while((_g < _g1->length)){
HXLINE( 236)			HX_VARI(  ::flixel::FlxCamera,camera) = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 236)			_g = (_g + (int)1);
HXLINE( 238)			bool _hx_tmp;
HXDLIN( 238)			bool _hx_tmp1;
HXDLIN( 238)			if (hx::IsNotNull( camera )) {
HXLINE( 238)				_hx_tmp1 = !(camera->exists);
            			}
            			else {
HXLINE( 238)				_hx_tmp1 = true;
            			}
HXDLIN( 238)			if (!(_hx_tmp1)) {
HXLINE( 238)				_hx_tmp = !(camera->visible);
            			}
            			else {
HXLINE( 238)				_hx_tmp = true;
            			}
HXDLIN( 238)			if (_hx_tmp) {
HXLINE( 240)				continue;
            			}
HXLINE( 243)			camera->drawFX();
HXLINE( 245)			if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 252)				camera->screen->dirty = true;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,unlock,(void))

void CameraFrontEnd_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_263_update)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(elapsed,"elapsed")
HXLINE( 263)		HX_VARI( int,_g) = (int)0;
HXDLIN( 263)		HX_VARI( ::Array< ::Dynamic>,_g1) = this->list;
HXDLIN( 263)		while((_g < _g1->length)){
HXLINE( 263)			HX_VARI(  ::flixel::FlxCamera,camera) = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 263)			_g = (_g + (int)1);
HXLINE( 265)			bool _hx_tmp;
HXDLIN( 265)			bool _hx_tmp1;
HXDLIN( 265)			if (hx::IsNotNull( camera )) {
HXLINE( 265)				_hx_tmp1 = camera->exists;
            			}
            			else {
HXLINE( 265)				_hx_tmp1 = false;
            			}
HXDLIN( 265)			if (_hx_tmp1) {
HXLINE( 265)				_hx_tmp = camera->active;
            			}
            			else {
HXLINE( 265)				_hx_tmp = false;
            			}
HXDLIN( 265)			if (_hx_tmp) {
HXLINE( 267)				camera->update(elapsed);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,update,(void))

void CameraFrontEnd_obj::resize(){
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_278_resize)
            	HX_STACK_THIS(this)
HXLINE( 278)		HX_VARI( int,_g) = (int)0;
HXDLIN( 278)		HX_VARI( ::Array< ::Dynamic>,_g1) = this->list;
HXDLIN( 278)		while((_g < _g1->length)){
HXLINE( 278)			HX_VARI(  ::flixel::FlxCamera,camera) = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 278)			_g = (_g + (int)1);
HXLINE( 280)			camera->onResize();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,resize,(void))

int CameraFrontEnd_obj::get_bgColor(){
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_286_get_bgColor)
            	HX_STACK_THIS(this)
HXLINE( 286)		if (hx::IsNull( ::flixel::FlxG_obj::camera )) {
HXLINE( 286)			return (int)-16777216;
            		}
            		else {
HXLINE( 286)			return ::flixel::FlxG_obj::camera->bgColor;
            		}
HXDLIN( 286)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,get_bgColor,return )

int CameraFrontEnd_obj::set_bgColor(int Color){
            	HX_STACKFRAME(&_hx_pos_37a8fd7f84c9d590_290_set_bgColor)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Color,"Color")
HXLINE( 291)		{
HXLINE( 291)			HX_VARI( int,_g) = (int)0;
HXDLIN( 291)			HX_VARI( ::Array< ::Dynamic>,_g1) = this->list;
HXDLIN( 291)			while((_g < _g1->length)){
HXLINE( 291)				HX_VARI(  ::flixel::FlxCamera,camera) = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 291)				_g = (_g + (int)1);
HXLINE( 293)				camera->bgColor = Color;
            			}
            		}
HXLINE( 296)		return Color;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,set_bgColor,return )


hx::ObjectPtr< CameraFrontEnd_obj > CameraFrontEnd_obj::__new() {
	hx::ObjectPtr< CameraFrontEnd_obj > __this = new CameraFrontEnd_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< CameraFrontEnd_obj > CameraFrontEnd_obj::__alloc(hx::Ctx *_hx_ctx) {
	CameraFrontEnd_obj *__this = (CameraFrontEnd_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CameraFrontEnd_obj), true, "flixel.system.frontEnds.CameraFrontEnd"));
	*(void **)__this = CameraFrontEnd_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CameraFrontEnd_obj::CameraFrontEnd_obj()
{
}

void CameraFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CameraFrontEnd);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(cameraAdded,"cameraAdded");
	HX_MARK_MEMBER_NAME(cameraRemoved,"cameraRemoved");
	HX_MARK_MEMBER_NAME(cameraResized,"cameraResized");
	HX_MARK_MEMBER_NAME(useBufferLocking,"useBufferLocking");
	HX_MARK_MEMBER_NAME(_cameraRect,"_cameraRect");
	HX_MARK_END_CLASS();
}

void CameraFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(cameraAdded,"cameraAdded");
	HX_VISIT_MEMBER_NAME(cameraRemoved,"cameraRemoved");
	HX_VISIT_MEMBER_NAME(cameraResized,"cameraResized");
	HX_VISIT_MEMBER_NAME(useBufferLocking,"useBufferLocking");
	HX_VISIT_MEMBER_NAME(_cameraRect,"_cameraRect");
}

hx::Val CameraFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn()); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return hx::Val( list); }
		if (HX_FIELD_EQ(inName,"fade") ) { return hx::Val( fade_dyn()); }
		if (HX_FIELD_EQ(inName,"lock") ) { return hx::Val( lock_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return hx::Val( reset_dyn()); }
		if (HX_FIELD_EQ(inName,"flash") ) { return hx::Val( flash_dyn()); }
		if (HX_FIELD_EQ(inName,"shake") ) { return hx::Val( shake_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn()); }
		if (HX_FIELD_EQ(inName,"render") ) { return hx::Val( render_dyn()); }
		if (HX_FIELD_EQ(inName,"unlock") ) { return hx::Val( unlock_dyn()); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn()); }
		if (HX_FIELD_EQ(inName,"resize") ) { return hx::Val( resize_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_bgColor()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cameraAdded") ) { return hx::Val( cameraAdded); }
		if (HX_FIELD_EQ(inName,"_cameraRect") ) { return hx::Val( _cameraRect); }
		if (HX_FIELD_EQ(inName,"get_bgColor") ) { return hx::Val( get_bgColor_dyn()); }
		if (HX_FIELD_EQ(inName,"set_bgColor") ) { return hx::Val( set_bgColor_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cameraRemoved") ) { return hx::Val( cameraRemoved); }
		if (HX_FIELD_EQ(inName,"cameraResized") ) { return hx::Val( cameraResized); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"useBufferLocking") ) { return hx::Val( useBufferLocking); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val CameraFrontEnd_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_bgColor(inValue) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cameraAdded") ) { cameraAdded=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal1 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cameraRect") ) { _cameraRect=inValue.Cast<  ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cameraRemoved") ) { cameraRemoved=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal1 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cameraResized") ) { cameraResized=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal1 >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"useBufferLocking") ) { useBufferLocking=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CameraFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	outFields->push(HX_HCSTRING("bgColor","\x5e","\x81","\x83","\xf7"));
	outFields->push(HX_HCSTRING("cameraAdded","\xdb","\xc7","\x89","\x10"));
	outFields->push(HX_HCSTRING("cameraRemoved","\x7b","\x4f","\xfd","\xfa"));
	outFields->push(HX_HCSTRING("cameraResized","\xcb","\x8b","\x70","\x6b"));
	outFields->push(HX_HCSTRING("useBufferLocking","\xf0","\x43","\x3c","\x76"));
	outFields->push(HX_HCSTRING("_cameraRect","\x88","\x43","\x4f","\x84"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CameraFrontEnd_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CameraFrontEnd_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal1*/ ,(int)offsetof(CameraFrontEnd_obj,cameraAdded),HX_HCSTRING("cameraAdded","\xdb","\xc7","\x89","\x10")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal1*/ ,(int)offsetof(CameraFrontEnd_obj,cameraRemoved),HX_HCSTRING("cameraRemoved","\x7b","\x4f","\xfd","\xfa")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal1*/ ,(int)offsetof(CameraFrontEnd_obj,cameraResized),HX_HCSTRING("cameraResized","\xcb","\x8b","\x70","\x6b")},
	{hx::fsBool,(int)offsetof(CameraFrontEnd_obj,useBufferLocking),HX_HCSTRING("useBufferLocking","\xf0","\x43","\x3c","\x76")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(CameraFrontEnd_obj,_cameraRect),HX_HCSTRING("_cameraRect","\x88","\x43","\x4f","\x84")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *CameraFrontEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String CameraFrontEnd_obj_sMemberFields[] = {
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("cameraAdded","\xdb","\xc7","\x89","\x10"),
	HX_HCSTRING("cameraRemoved","\x7b","\x4f","\xfd","\xfa"),
	HX_HCSTRING("cameraResized","\xcb","\x8b","\x70","\x6b"),
	HX_HCSTRING("useBufferLocking","\xf0","\x43","\x3c","\x76"),
	HX_HCSTRING("_cameraRect","\x88","\x43","\x4f","\x84"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("flash","\xb0","\x35","\x8c","\x02"),
	HX_HCSTRING("fade","\x7c","\xb5","\xb5","\x43"),
	HX_HCSTRING("shake","\xc6","\xde","\x1c","\x7c"),
	HX_HCSTRING("lock","\xeb","\x9b","\xb7","\x47"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("unlock","\xc4","\xa2","\x8c","\x65"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("get_bgColor","\x75","\xe1","\x7d","\x7d"),
	HX_HCSTRING("set_bgColor","\x81","\xe8","\xea","\x87"),
	::String(null()) };

static void CameraFrontEnd_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CameraFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CameraFrontEnd_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CameraFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class CameraFrontEnd_obj::__mClass;

void CameraFrontEnd_obj::__register()
{
	hx::Object *dummy = new CameraFrontEnd_obj;
	CameraFrontEnd_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.CameraFrontEnd","\x31","\x94","\x3d","\x41");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CameraFrontEnd_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CameraFrontEnd_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CameraFrontEnd_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CameraFrontEnd_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CameraFrontEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CameraFrontEnd_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds