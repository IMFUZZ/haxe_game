#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
namespace sys{

Void FileSystem_obj::__construct()
{
	return null();
}

//FileSystem_obj::~FileSystem_obj() { }

Dynamic FileSystem_obj::__CreateEmpty() { return  new FileSystem_obj; }
hx::ObjectPtr< FileSystem_obj > FileSystem_obj::__new()
{  hx::ObjectPtr< FileSystem_obj > _result_ = new FileSystem_obj();
	_result_->__construct();
	return _result_;}

Dynamic FileSystem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FileSystem_obj > _result_ = new FileSystem_obj();
	_result_->__construct();
	return _result_;}

bool FileSystem_obj::exists( ::String path){
	HX_STACK_FRAME("sys.FileSystem","exists",0xf55bed9e,"sys.FileSystem.exists","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/FileSystem.hx",33,0xb7079c8b)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(34)
	::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	::String tmp1 = ::haxe::io::Path_obj::removeTrailingSlashes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	bool tmp2 = ::sys::FileSystem_obj::sys_exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileSystem_obj,exists,return )

Void FileSystem_obj::createDirectory( ::String path){
{
		HX_STACK_FRAME("sys.FileSystem","createDirectory",0x63bad3cf,"sys.FileSystem.createDirectory","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/FileSystem.hx",74,0xb7079c8b)
		HX_STACK_ARG(path,"path")
		HX_STACK_LINE(75)
		::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(75)
		::String tmp1 = ::haxe::io::Path_obj::addTrailingSlash(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(75)
		::String path1 = tmp1;		HX_STACK_VAR(path1,"path1");
		HX_STACK_LINE(76)
		::String _p = null();		HX_STACK_VAR(_p,"_p");
		HX_STACK_LINE(77)
		Array< ::String > parts = Array_obj< ::String >::__new();		HX_STACK_VAR(parts,"parts");
		HX_STACK_LINE(78)
		while((true)){
			HX_STACK_LINE(78)
			::String tmp2 = path1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(78)
			::String tmp3 = path1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(78)
			::String tmp4 = ::haxe::io::Path_obj::directory(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(78)
			::String tmp5 = _p = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(78)
			bool tmp6 = (tmp2 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(78)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(78)
			if ((tmp7)){
				HX_STACK_LINE(78)
				break;
			}
			HX_STACK_LINE(79)
			::String tmp8 = path1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(79)
			parts->unshift(tmp8);
			HX_STACK_LINE(80)
			path1 = _p;
		}
		HX_STACK_LINE(82)
		{
			HX_STACK_LINE(82)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(82)
			while((true)){
				HX_STACK_LINE(82)
				bool tmp2 = (_g < parts->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(82)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(82)
				if ((tmp3)){
					HX_STACK_LINE(82)
					break;
				}
				HX_STACK_LINE(82)
				::String tmp4 = parts->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(82)
				::String part = tmp4;		HX_STACK_VAR(part,"part");
				HX_STACK_LINE(82)
				++(_g);
				HX_STACK_LINE(83)
				int tmp5 = (part.length - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(83)
				Dynamic tmp6 = part.charCodeAt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(83)
				bool tmp7 = (tmp6 != (int)58);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(83)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(83)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(83)
				if ((tmp8)){
					HX_STACK_LINE(83)
					::String tmp10 = part;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(83)
					::String tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(83)
					::String tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(83)
					bool tmp13 = ::sys::FileSystem_obj::exists(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(83)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(83)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(83)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(83)
					bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(83)
					tmp9 = !(tmp17);
				}
				else{
					HX_STACK_LINE(83)
					tmp9 = false;
				}
				HX_STACK_LINE(83)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(83)
				if ((tmp9)){
					HX_STACK_LINE(83)
					::String tmp11 = part;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(83)
					::String tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(83)
					Dynamic tmp13 = ::sys::FileSystem_obj::sys_create_dir(tmp12,(int)493);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(83)
					Dynamic tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(83)
					tmp10 = (tmp14 == null());
				}
				else{
					HX_STACK_LINE(83)
					tmp10 = false;
				}
				HX_STACK_LINE(83)
				if ((tmp10)){
					HX_STACK_LINE(84)
					::String tmp11 = (HX_HCSTRING("Could not create directory:","\x05","\x3d","\x91","\x19") + part);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(84)
					HX_STACK_DO_THROW(tmp11);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileSystem_obj,createDirectory,(void))

Dynamic FileSystem_obj::sys_exists;

Dynamic FileSystem_obj::sys_create_dir;


FileSystem_obj::FileSystem_obj()
{
}

bool FileSystem_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { outValue = exists_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sys_exists") ) { outValue = sys_exists; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sys_create_dir") ) { outValue = sys_create_dir; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createDirectory") ) { outValue = createDirectory_dyn(); return true;  }
	}
	return false;
}

bool FileSystem_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"sys_exists") ) { sys_exists=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sys_create_dir") ) { sys_create_dir=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &FileSystem_obj::sys_exists,HX_HCSTRING("sys_exists","\x0e","\xee","\x8e","\xf5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &FileSystem_obj::sys_create_dir,HX_HCSTRING("sys_create_dir","\x7c","\xe8","\x2b","\x2e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FileSystem_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FileSystem_obj::sys_exists,"sys_exists");
	HX_MARK_MEMBER_NAME(FileSystem_obj::sys_create_dir,"sys_create_dir");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FileSystem_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FileSystem_obj::sys_exists,"sys_exists");
	HX_VISIT_MEMBER_NAME(FileSystem_obj::sys_create_dir,"sys_create_dir");
};

#endif

hx::Class FileSystem_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("createDirectory","\xd1","\xab","\x39","\xb1"),
	HX_HCSTRING("sys_exists","\x0e","\xee","\x8e","\xf5"),
	HX_HCSTRING("sys_create_dir","\x7c","\xe8","\x2b","\x2e"),
	::String(null()) };

void FileSystem_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.FileSystem","\x6c","\x2c","\xe5","\xe6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FileSystem_obj::__GetStatic;
	__mClass->mSetStaticField = &FileSystem_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FileSystem_obj >;
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

void FileSystem_obj::__boot()
{
	sys_exists= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_exists","\x0e","\xee","\x8e","\xf5"),(int)1);
	sys_create_dir= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_create_dir","\x7c","\xe8","\x2b","\x2e"),(int)2);
}

} // end namespace sys
