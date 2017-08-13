// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_org_waxeye_parser_Assert
#include <org/waxeye/parser/Assert.h>
#endif
#ifndef INCLUDED_org_waxeye_parser_ParseError
#include <org/waxeye/parser/ParseError.h>
#endif
#ifndef INCLUDED_org_waxeye_parser_RawError
#include <org/waxeye/parser/RawError.h>
#endif
#ifndef INCLUDED_org_waxeye_parser_Util
#include <org/waxeye/parser/Util.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9c67c4576fa54f54_16_new,"org.waxeye.parser.RawError","new",0xa8fe9e20,"org.waxeye.parser.RawError.new","org/waxeye/parser/RawError.hx",16,0x6e536d0f)
HX_LOCAL_STACK_FRAME(_hx_pos_9c67c4576fa54f54_26_toParseError,"org.waxeye.parser.RawError","toParseError",0x0ad7be30,"org.waxeye.parser.RawError.toParseError","org/waxeye/parser/RawError.hx",26,0x6e536d0f)
namespace org{
namespace waxeye{
namespace parser{

void RawError_obj::__construct(int pos,::cpp::VirtualArray nonterminals,::cpp::VirtualArray failedChars, ::Dynamic currentNT){
            	HX_STACKFRAME(&_hx_pos_9c67c4576fa54f54_16_new)
HXLINE(  17)		this->pos = pos;
HXLINE(  18)		this->nonterminals = nonterminals;
HXLINE(  19)		this->failedChars = failedChars;
HXLINE(  20)		this->currentNT = currentNT;
HXLINE(  22)		::org::waxeye::parser::Assert_obj::ok(::Std_obj::is(this->nonterminals,hx::ArrayBase::__mClass));
HXLINE(  23)		::org::waxeye::parser::Assert_obj::ok(::Std_obj::is(this->failedChars,hx::ArrayBase::__mClass));
            	}

Dynamic RawError_obj::__CreateEmpty() { return new RawError_obj; }

void *RawError_obj::_hx_vtable = 0;

Dynamic RawError_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RawError_obj > _hx_result = new RawError_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool RawError_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x00f69f66;
}

 ::org::waxeye::parser::ParseError RawError_obj::toParseError(::String input){
            	HX_GC_STACKFRAME(&_hx_pos_9c67c4576fa54f54_26_toParseError)
HXLINE(  28)		::Array< int > ref = ::org::waxeye::parser::Util_obj::getLineCol(this->pos,input);
HXLINE(  30)		int line = ref->__get((int)0);
HXLINE(  31)		int col = ref->__get((int)0);
HXLINE(  32)		this->failedChars->reverse();
HXLINE(  33)		int _hx_tmp = this->pos;
HXDLIN(  33)		::cpp::VirtualArray _hx_tmp1 = ::org::waxeye::parser::Util_obj::uniq(this->nonterminals);
HXDLIN(  33)		return  ::org::waxeye::parser::ParseError_obj::__alloc( HX_CTX ,_hx_tmp,line,col,_hx_tmp1,this->failedChars);
            	}


HX_DEFINE_DYNAMIC_FUNC1(RawError_obj,toParseError,return )


hx::ObjectPtr< RawError_obj > RawError_obj::__new(int pos,::cpp::VirtualArray nonterminals,::cpp::VirtualArray failedChars, ::Dynamic currentNT) {
	hx::ObjectPtr< RawError_obj > __this = new RawError_obj();
	__this->__construct(pos,nonterminals,failedChars,currentNT);
	return __this;
}

hx::ObjectPtr< RawError_obj > RawError_obj::__alloc(hx::Ctx *_hx_ctx,int pos,::cpp::VirtualArray nonterminals,::cpp::VirtualArray failedChars, ::Dynamic currentNT) {
	RawError_obj *__this = (RawError_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(RawError_obj), true, "org.waxeye.parser.RawError"));
	*(void **)__this = RawError_obj::_hx_vtable;
	__this->__construct(pos,nonterminals,failedChars,currentNT);
	return __this;
}

RawError_obj::RawError_obj()
{
}

void RawError_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RawError);
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(nonterminals,"nonterminals");
	HX_MARK_MEMBER_NAME(failedChars,"failedChars");
	HX_MARK_MEMBER_NAME(currentNT,"currentNT");
	HX_MARK_END_CLASS();
}

void RawError_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(nonterminals,"nonterminals");
	HX_VISIT_MEMBER_NAME(failedChars,"failedChars");
	HX_VISIT_MEMBER_NAME(currentNT,"currentNT");
}

hx::Val RawError_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return hx::Val( pos ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"currentNT") ) { return hx::Val( currentNT ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"failedChars") ) { return hx::Val( failedChars ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"nonterminals") ) { return hx::Val( nonterminals ); }
		if (HX_FIELD_EQ(inName,"toParseError") ) { return hx::Val( toParseError_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val RawError_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"currentNT") ) { currentNT=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"failedChars") ) { failedChars=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"nonterminals") ) { nonterminals=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RawError_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("nonterminals","\xca","\x48","\x83","\xbe"));
	outFields->push(HX_HCSTRING("failedChars","\xe0","\x59","\xab","\x17"));
	outFields->push(HX_HCSTRING("currentNT","\xbf","\x20","\x2e","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo RawError_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(RawError_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(RawError_obj,nonterminals),HX_HCSTRING("nonterminals","\xca","\x48","\x83","\xbe")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(RawError_obj,failedChars),HX_HCSTRING("failedChars","\xe0","\x59","\xab","\x17")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(RawError_obj,currentNT),HX_HCSTRING("currentNT","\xbf","\x20","\x2e","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *RawError_obj_sStaticStorageInfo = 0;
#endif

static ::String RawError_obj_sMemberFields[] = {
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("nonterminals","\xca","\x48","\x83","\xbe"),
	HX_HCSTRING("failedChars","\xe0","\x59","\xab","\x17"),
	HX_HCSTRING("currentNT","\xbf","\x20","\x2e","\x41"),
	HX_HCSTRING("toParseError","\xf0","\x43","\xea","\x3e"),
	::String(null()) };

static void RawError_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RawError_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RawError_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RawError_obj::__mClass,"__mClass");
};

#endif

hx::Class RawError_obj::__mClass;

void RawError_obj::__register()
{
	hx::Object *dummy = new RawError_obj;
	RawError_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("org.waxeye.parser.RawError","\x2e","\x4e","\x15","\x9e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = RawError_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(RawError_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RawError_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RawError_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RawError_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RawError_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace org
} // end namespace waxeye
} // end namespace parser
