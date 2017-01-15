// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITileTest
#include <flixel/addons/ui/FlxUITileTest.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1ed93265c305abdf_15_new,"flixel.addons.ui.FlxUITileTest","new",0xc2e05f87,"flixel.addons.ui.FlxUITileTest.new","flixel/addons/ui/FlxUITileTest.hx",15,0xbeb161aa)
HX_DEFINE_STACK_FRAME(_hx_pos_1ed93265c305abdf_22_get_widthInTiles,"flixel.addons.ui.FlxUITileTest","get_widthInTiles",0xe8fe62fc,"flixel.addons.ui.FlxUITileTest.get_widthInTiles","flixel/addons/ui/FlxUITileTest.hx",22,0xbeb161aa)
HX_DEFINE_STACK_FRAME(_hx_pos_1ed93265c305abdf_23_get_heightInTiles,"flixel.addons.ui.FlxUITileTest","get_heightInTiles",0x7da8fef7,"flixel.addons.ui.FlxUITileTest.get_heightInTiles","flixel/addons/ui/FlxUITileTest.hx",23,0xbeb161aa)
HX_DEFINE_STACK_FRAME(_hx_pos_1ed93265c305abdf_50_makeTiles,"flixel.addons.ui.FlxUITileTest","makeTiles",0xea745b1e,"flixel.addons.ui.FlxUITileTest.makeTiles","flixel/addons/ui/FlxUITileTest.hx",50,0xbeb161aa)
HX_DEFINE_STACK_FRAME(_hx_pos_1ed93265c305abdf_79_constrain,"flixel.addons.ui.FlxUITileTest","constrain",0x5645169e,"flixel.addons.ui.FlxUITileTest.constrain","flixel/addons/ui/FlxUITileTest.hx",79,0xbeb161aa)
HX_DEFINE_STACK_FRAME(_hx_pos_1ed93265c305abdf_105_resize,"flixel.addons.ui.FlxUITileTest","resize",0x04b97d2d,"flixel.addons.ui.FlxUITileTest.resize","flixel/addons/ui/FlxUITileTest.hx",105,0xbeb161aa)
namespace flixel{
namespace addons{
namespace ui{

void FlxUITileTest_obj::__construct(Float X,Float Y,int TileWidth,int TileHeight,int tilesWide,int tilesTall,hx::Null< int >  __o_color1,hx::Null< int >  __o_color2,hx::Null< bool >  __o_FloorToEven){
int color1 = __o_color1.Default(8421504);
int color2 = __o_color2.Default(12895428);
bool FloorToEven = __o_FloorToEven.Default(false);
            	HX_STACKFRAME(&_hx_pos_1ed93265c305abdf_15_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(X,"X")
            	HX_STACK_ARG(Y,"Y")
            	HX_STACK_ARG(TileWidth,"TileWidth")
            	HX_STACK_ARG(TileHeight,"TileHeight")
            	HX_STACK_ARG(tilesWide,"tilesWide")
            	HX_STACK_ARG(tilesTall,"tilesTall")
            	HX_STACK_ARG(color1,"color1")
            	HX_STACK_ARG(color2,"color2")
            	HX_STACK_ARG(FloorToEven,"FloorToEven")
HXLINE(  31)		this->baseTileSize = (int)-1;
HXLINE(  30)		this->floorToEven = false;
HXLINE(  28)		this->_color2 = (int)0;
HXLINE(  27)		this->_color1 = (int)0;
HXLINE(  26)		this->_tilesTall = (int)2;
HXLINE(  25)		this->_tilesWide = (int)2;
HXLINE(  35)		super::__construct(X,Y,null());
HXLINE(  37)		this->tileWidth = TileWidth;
HXLINE(  38)		this->tileHeight = TileHeight;
HXLINE(  40)		this->_tilesWide = tilesWide;
HXLINE(  41)		this->_tilesTall = tilesTall;
HXLINE(  42)		this->_color1 = color1;
HXLINE(  43)		this->_color2 = color2;
HXLINE(  45)		this->floorToEven = FloorToEven;
HXLINE(  47)		this->makeTiles(this->tileWidth,this->tileHeight,this->_tilesWide,this->_tilesTall,this->_color1,this->_color2);
            	}

Dynamic FlxUITileTest_obj::__CreateEmpty() { return new FlxUITileTest_obj; }

void *FlxUITileTest_obj::_hx_vtable = 0;

Dynamic FlxUITileTest_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxUITileTest_obj > _hx_result = new FlxUITileTest_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8]);
	return _hx_result;
}

bool FlxUITileTest_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25a685e0) {
		if (inClassId<=(int)0x157453e3) {
			if (inClassId<=(int)0x0b6ffd77) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0b6ffd77;
			} else {
				return inClassId==(int)0x157453e3;
			}
		} else {
			return inClassId==(int)0x25a685e0;
		}
	} else {
		return inClassId==(int)0x2e105115 || inClassId==(int)0x7eb12c44;
	}
}

static ::flixel::IFlxSprite_obj _hx_flixel_addons_ui_FlxUITileTest__hx_flixel_IFlxSprite= {
	( bool (hx::Object::*)(bool))&::flixel::addons::ui::FlxUITileTest_obj::set_active,
	( bool (hx::Object::*)(bool))&::flixel::addons::ui::FlxUITileTest_obj::set_visible,
	( bool (hx::Object::*)(bool))&::flixel::addons::ui::FlxUITileTest_obj::set_alive,
	( bool (hx::Object::*)(bool))&::flixel::addons::ui::FlxUITileTest_obj::set_exists,
	( void (hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::draw,
	( void (hx::Object::*)(Float))&::flixel::addons::ui::FlxUITileTest_obj::update,
	( void (hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::destroy,
	( void (hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::kill,
	( void (hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::revive,
	( ::String (hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::toString,
	( Float (hx::Object::*)(Float))&::flixel::addons::ui::FlxUITileTest_obj::set_x,
	( Float (hx::Object::*)(Float))&::flixel::addons::ui::FlxUITileTest_obj::set_y,
	( Float (hx::Object::*)(Float))&::flixel::addons::ui::FlxUITileTest_obj::set_alpha,
	( Float (hx::Object::*)(Float))&::flixel::addons::ui::FlxUITileTest_obj::set_angle,
	( int (hx::Object::*)(int))&::flixel::addons::ui::FlxUITileTest_obj::set_facing,
	( bool (hx::Object::*)(bool))&::flixel::addons::ui::FlxUITileTest_obj::set_moves,
	( bool (hx::Object::*)(bool))&::flixel::addons::ui::FlxUITileTest_obj::set_immovable,
	( void (hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUITileTest_obj::reset,
	( void (hx::Object::*)(hx::Null< Float > ,hx::Null< Float > ))&::flixel::addons::ui::FlxUITileTest_obj::setPosition,
};

static ::flixel::IFlxBasic_obj _hx_flixel_addons_ui_FlxUITileTest__hx_flixel_IFlxBasic= {
	( bool (hx::Object::*)(bool))&::flixel::addons::ui::FlxUITileTest_obj::set_active,
	( bool (hx::Object::*)(bool))&::flixel::addons::ui::FlxUITileTest_obj::set_visible,
	( bool (hx::Object::*)(bool))&::flixel::addons::ui::FlxUITileTest_obj::set_alive,
	( bool (hx::Object::*)(bool))&::flixel::addons::ui::FlxUITileTest_obj::set_exists,
	( void (hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::draw,
	( void (hx::Object::*)(Float))&::flixel::addons::ui::FlxUITileTest_obj::update,
	( void (hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::destroy,
	( void (hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::kill,
	( void (hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::revive,
	( ::String (hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::toString,
};

static ::flixel::addons::ui::interfaces::IFlxUIWidget_obj _hx_flixel_addons_ui_FlxUITileTest__hx_flixel_addons_ui_interfaces_IFlxUIWidget= {
	( bool (hx::Object::*)(bool))&::flixel::addons::ui::FlxUITileTest_obj::set_active,
	( bool (hx::Object::*)(bool))&::flixel::addons::ui::FlxUITileTest_obj::set_visible,
	( bool (hx::Object::*)(bool))&::flixel::addons::ui::FlxUITileTest_obj::set_alive,
	( bool (hx::Object::*)(bool))&::flixel::addons::ui::FlxUITileTest_obj::set_exists,
	( void (hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::draw,
	( void (hx::Object::*)(Float))&::flixel::addons::ui::FlxUITileTest_obj::update,
	( void (hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::destroy,
	( void (hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::kill,
	( void (hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::revive,
	( ::String (hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::toString,
	( Float (hx::Object::*)(Float))&::flixel::addons::ui::FlxUITileTest_obj::set_x,
	( Float (hx::Object::*)(Float))&::flixel::addons::ui::FlxUITileTest_obj::set_y,
	( Float (hx::Object::*)(Float))&::flixel::addons::ui::FlxUITileTest_obj::set_alpha,
	( Float (hx::Object::*)(Float))&::flixel::addons::ui::FlxUITileTest_obj::set_angle,
	( int (hx::Object::*)(int))&::flixel::addons::ui::FlxUITileTest_obj::set_facing,
	( bool (hx::Object::*)(bool))&::flixel::addons::ui::FlxUITileTest_obj::set_moves,
	( bool (hx::Object::*)(bool))&::flixel::addons::ui::FlxUITileTest_obj::set_immovable,
	( void (hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUITileTest_obj::reset,
	( void (hx::Object::*)(hx::Null< Float > ,hx::Null< Float > ))&::flixel::addons::ui::FlxUITileTest_obj::setPosition,
	( Float (hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::get_width,
	( Float (hx::Object::*)(Float))&::flixel::addons::ui::FlxUITileTest_obj::set_width,
	( Float (hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::get_height,
	( Float (hx::Object::*)(Float))&::flixel::addons::ui::FlxUITileTest_obj::set_height,
};

static ::flixel::addons::ui::interfaces::IResizable_obj _hx_flixel_addons_ui_FlxUITileTest__hx_flixel_addons_ui_interfaces_IResizable= {
	( Float (hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::get_width,
	( Float (hx::Object::*)(Float))&::flixel::addons::ui::FlxUITileTest_obj::set_width,
	( Float (hx::Object::*)())&::flixel::addons::ui::FlxUITileTest_obj::get_height,
	( Float (hx::Object::*)(Float))&::flixel::addons::ui::FlxUITileTest_obj::set_height,
	( void (hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUITileTest_obj::resize,
};

void *FlxUITileTest_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x897c83aa: return &_hx_flixel_addons_ui_FlxUITileTest__hx_flixel_IFlxSprite;
		case (int)0x284cfea9: return &_hx_flixel_addons_ui_FlxUITileTest__hx_flixel_IFlxBasic;
		case (int)0x998525de: return &_hx_flixel_addons_ui_FlxUITileTest__hx_flixel_addons_ui_interfaces_IFlxUIWidget;
		case (int)0x194a3c9f: return &_hx_flixel_addons_ui_FlxUITileTest__hx_flixel_addons_ui_interfaces_IResizable;
	}
	return super::_hx_getInterface(inHash);
}

int FlxUITileTest_obj::get_widthInTiles(){
            	HX_STACKFRAME(&_hx_pos_1ed93265c305abdf_22_get_widthInTiles)
            	HX_STACK_THIS(this)
HXLINE(  22)		return this->_tilesWide;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITileTest_obj,get_widthInTiles,return )

int FlxUITileTest_obj::get_heightInTiles(){
            	HX_STACKFRAME(&_hx_pos_1ed93265c305abdf_23_get_heightInTiles)
            	HX_STACK_THIS(this)
HXLINE(  23)		return this->_tilesTall;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITileTest_obj,get_heightInTiles,return )

void FlxUITileTest_obj::makeTiles(int tileWidth,int tileHeight,int tilesWide,int tilesTall,hx::Null< int >  __o_color1,hx::Null< int >  __o_color2){
int color1 = __o_color1.Default(-8355712);
int color2 = __o_color2.Default(-3881788);
            	HX_STACKFRAME(&_hx_pos_1ed93265c305abdf_50_makeTiles)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(tileWidth,"tileWidth")
            	HX_STACK_ARG(tileHeight,"tileHeight")
            	HX_STACK_ARG(tilesWide,"tilesWide")
            	HX_STACK_ARG(tilesTall,"tilesTall")
            	HX_STACK_ARG(color1,"color1")
            	HX_STACK_ARG(color2,"color2")
HXLINE(  51)		HX_VARI(  ::flixel::math::FlxPoint,size) = this->constrain((tileWidth * this->_tilesWide),(tileHeight * this->_tilesTall));
HXLINE(  53)		tileWidth = ::Std_obj::_hx_int(size->x);
HXLINE(  54)		tileHeight = ::Std_obj::_hx_int(size->y);
HXLINE(  56)		this->makeGraphic(tilesWide,tilesTall,color1,null(),null());
HXLINE(  58)		HX_VARI(  ::openfl::_legacy::display::BitmapData,canvas) = this->get_pixels();
HXLINE(  60)		HX_VARI( int,j) = (int)0;
HXLINE(  61)		{
HXLINE(  61)			HX_VARI( int,_g1) = (int)0;
HXDLIN(  61)			while((_g1 < tilesWide)){
HXLINE(  61)				_g1 = (_g1 + (int)1);
HXDLIN(  61)				HX_VARI( int,ix) = (_g1 - (int)1);
HXLINE(  62)				{
HXLINE(  62)					HX_VARI( int,_g3) = (int)0;
HXDLIN(  62)					while((_g3 < tilesTall)){
HXLINE(  62)						_g3 = (_g3 + (int)1);
HXLINE(  63)						if ((hx::Mod(j,(int)2) == (int)0)) {
HXLINE(  64)							canvas->setPixel(ix,(_g3 - (int)1),color2);
            						}
HXLINE(  66)						j = (j + (int)1);
            					}
            				}
HXLINE(  68)				if ((hx::Mod(tilesWide,(int)2) != (int)0)) {
HXLINE(  69)					j = (j + (int)1);
            				}
            			}
            		}
HXLINE(  73)		this->set_pixels(canvas);
HXLINE(  74)		this->scale->set(tileWidth,tileHeight);
HXLINE(  75)		this->updateHitbox();
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxUITileTest_obj,makeTiles,(void))

 ::flixel::math::FlxPoint FlxUITileTest_obj::constrain(Float w,Float h){
            	HX_GC_STACKFRAME(&_hx_pos_1ed93265c305abdf_79_constrain)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(w,"w")
            	HX_STACK_ARG(h,"h")
HXLINE(  80)		HX_VARI( int,tileWidth) = ::Std_obj::_hx_int(((Float)w / (Float)this->_tilesWide));
HXLINE(  81)		HX_VARI( int,tileHeight) = ::Std_obj::_hx_int(((Float)h / (Float)this->_tilesTall));
HXLINE(  83)		if ((tileWidth < tileHeight)) {
HXLINE(  83)			tileHeight = tileWidth;
            		}
            		else {
HXLINE(  84)			if ((tileHeight < tileWidth)) {
HXLINE(  84)				tileWidth = tileHeight;
            			}
            		}
HXLINE(  86)		if (this->floorToEven) {
HXLINE(  88)			if ((hx::Mod(tileWidth,(int)2) == (int)1)) {
HXLINE(  89)				tileWidth = (tileWidth - (int)1);
HXLINE(  90)				tileHeight = tileWidth;
            			}
            		}
HXLINE(  95)		if ((this->baseTileSize > (int)0)) {
HXLINE(  97)			int tileWidth1 = ::Std_obj::_hx_int(((Float)tileWidth / (Float)this->baseTileSize));
HXDLIN(  97)			tileWidth = (tileWidth1 * this->baseTileSize);
HXLINE(  98)			tileHeight = tileWidth;
            		}
HXLINE( 101)		return  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,tileWidth,tileHeight);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITileTest_obj,constrain,return )

void FlxUITileTest_obj::resize(Float w,Float h){
            	HX_STACKFRAME(&_hx_pos_1ed93265c305abdf_105_resize)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(w,"w")
            	HX_STACK_ARG(h,"h")
HXLINE( 105)		this->makeTiles(this->tileWidth,this->tileHeight,this->_tilesWide,this->_tilesTall,this->_color1,this->_color2);
            	}



hx::ObjectPtr< FlxUITileTest_obj > FlxUITileTest_obj::__new(Float X,Float Y,int TileWidth,int TileHeight,int tilesWide,int tilesTall,hx::Null< int >  __o_color1,hx::Null< int >  __o_color2,hx::Null< bool >  __o_FloorToEven) {
	hx::ObjectPtr< FlxUITileTest_obj > __this = new FlxUITileTest_obj();
	__this->__construct(X,Y,TileWidth,TileHeight,tilesWide,tilesTall,__o_color1,__o_color2,__o_FloorToEven);
	return __this;
}

hx::ObjectPtr< FlxUITileTest_obj > FlxUITileTest_obj::__alloc(hx::Ctx *_hx_ctx,Float X,Float Y,int TileWidth,int TileHeight,int tilesWide,int tilesTall,hx::Null< int >  __o_color1,hx::Null< int >  __o_color2,hx::Null< bool >  __o_FloorToEven) {
	FlxUITileTest_obj *__this = (FlxUITileTest_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxUITileTest_obj), true, "flixel.addons.ui.FlxUITileTest"));
	*(void **)__this = FlxUITileTest_obj::_hx_vtable;
	__this->__construct(X,Y,TileWidth,TileHeight,tilesWide,tilesTall,__o_color1,__o_color2,__o_FloorToEven);
	return __this;
}

FlxUITileTest_obj::FlxUITileTest_obj()
{
}

hx::Val FlxUITileTest_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return hx::Val( resize_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_color1") ) { return hx::Val( _color1); }
		if (HX_FIELD_EQ(inName,"_color2") ) { return hx::Val( _color2); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { return hx::Val( tileWidth); }
		if (HX_FIELD_EQ(inName,"makeTiles") ) { return hx::Val( makeTiles_dyn()); }
		if (HX_FIELD_EQ(inName,"constrain") ) { return hx::Val( constrain_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return hx::Val( tileHeight); }
		if (HX_FIELD_EQ(inName,"_tilesWide") ) { return hx::Val( _tilesWide); }
		if (HX_FIELD_EQ(inName,"_tilesTall") ) { return hx::Val( _tilesTall); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"floorToEven") ) { return hx::Val( floorToEven); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { return hx::Val( inCallProp == hx::paccAlways ? get_widthInTiles() : widthInTiles); }
		if (HX_FIELD_EQ(inName,"baseTileSize") ) { return hx::Val( baseTileSize); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { return hx::Val( inCallProp == hx::paccAlways ? get_heightInTiles() : heightInTiles); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_widthInTiles") ) { return hx::Val( get_widthInTiles_dyn()); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_heightInTiles") ) { return hx::Val( get_heightInTiles_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxUITileTest_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_color1") ) { _color1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_color2") ) { _color2=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { tileWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { tileHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tilesWide") ) { _tilesWide=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tilesTall") ) { _tilesTall=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"floorToEven") ) { floorToEven=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { widthInTiles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"baseTileSize") ) { baseTileSize=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { heightInTiles=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUITileTest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("widthInTiles","\xfa","\xb1","\x71","\xd4"));
	outFields->push(HX_HCSTRING("heightInTiles","\x39","\xce","\x1a","\x97"));
	outFields->push(HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55"));
	outFields->push(HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66"));
	outFields->push(HX_HCSTRING("_tilesWide","\xf9","\xb3","\xb6","\xc4"));
	outFields->push(HX_HCSTRING("_tilesTall","\x13","\x05","\xb5","\xc2"));
	outFields->push(HX_HCSTRING("_color1","\x0d","\xd7","\xfd","\x34"));
	outFields->push(HX_HCSTRING("_color2","\x0e","\xd7","\xfd","\x34"));
	outFields->push(HX_HCSTRING("floorToEven","\x21","\x81","\x8e","\xed"));
	outFields->push(HX_HCSTRING("baseTileSize","\x40","\x64","\x4c","\xfa"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxUITileTest_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxUITileTest_obj,widthInTiles),HX_HCSTRING("widthInTiles","\xfa","\xb1","\x71","\xd4")},
	{hx::fsInt,(int)offsetof(FlxUITileTest_obj,heightInTiles),HX_HCSTRING("heightInTiles","\x39","\xce","\x1a","\x97")},
	{hx::fsInt,(int)offsetof(FlxUITileTest_obj,tileWidth),HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55")},
	{hx::fsInt,(int)offsetof(FlxUITileTest_obj,tileHeight),HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66")},
	{hx::fsInt,(int)offsetof(FlxUITileTest_obj,_tilesWide),HX_HCSTRING("_tilesWide","\xf9","\xb3","\xb6","\xc4")},
	{hx::fsInt,(int)offsetof(FlxUITileTest_obj,_tilesTall),HX_HCSTRING("_tilesTall","\x13","\x05","\xb5","\xc2")},
	{hx::fsInt,(int)offsetof(FlxUITileTest_obj,_color1),HX_HCSTRING("_color1","\x0d","\xd7","\xfd","\x34")},
	{hx::fsInt,(int)offsetof(FlxUITileTest_obj,_color2),HX_HCSTRING("_color2","\x0e","\xd7","\xfd","\x34")},
	{hx::fsBool,(int)offsetof(FlxUITileTest_obj,floorToEven),HX_HCSTRING("floorToEven","\x21","\x81","\x8e","\xed")},
	{hx::fsInt,(int)offsetof(FlxUITileTest_obj,baseTileSize),HX_HCSTRING("baseTileSize","\x40","\x64","\x4c","\xfa")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxUITileTest_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxUITileTest_obj_sMemberFields[] = {
	HX_HCSTRING("widthInTiles","\xfa","\xb1","\x71","\xd4"),
	HX_HCSTRING("heightInTiles","\x39","\xce","\x1a","\x97"),
	HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55"),
	HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66"),
	HX_HCSTRING("get_widthInTiles","\x83","\x9e","\x10","\xd9"),
	HX_HCSTRING("get_heightInTiles","\x90","\xd9","\x8a","\x9d"),
	HX_HCSTRING("_tilesWide","\xf9","\xb3","\xb6","\xc4"),
	HX_HCSTRING("_tilesTall","\x13","\x05","\xb5","\xc2"),
	HX_HCSTRING("_color1","\x0d","\xd7","\xfd","\x34"),
	HX_HCSTRING("_color2","\x0e","\xd7","\xfd","\x34"),
	HX_HCSTRING("floorToEven","\x21","\x81","\x8e","\xed"),
	HX_HCSTRING("baseTileSize","\x40","\x64","\x4c","\xfa"),
	HX_HCSTRING("makeTiles","\xb7","\x74","\xcd","\xe3"),
	HX_HCSTRING("constrain","\x37","\x30","\x9e","\x4f"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	::String(null()) };

static void FlxUITileTest_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUITileTest_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxUITileTest_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUITileTest_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxUITileTest_obj::__mClass;

void FlxUITileTest_obj::__register()
{
	hx::Object *dummy = new FlxUITileTest_obj;
	FlxUITileTest_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.FlxUITileTest","\x15","\x90","\x32","\xd8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxUITileTest_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxUITileTest_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxUITileTest_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxUITileTest_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxUITileTest_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxUITileTest_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui