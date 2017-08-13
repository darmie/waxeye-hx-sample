// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_org_waxeye_parser_Parser
#define INCLUDED_org_waxeye_parser_Parser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(org,waxeye,parser,Continuations)
HX_DECLARE_CLASS3(org,waxeye,parser,MachineConfiguration)
HX_DECLARE_CLASS3(org,waxeye,parser,MachineState)
HX_DECLARE_CLASS3(org,waxeye,parser,Parser)
HX_DECLARE_CLASS3(org,waxeye,parser,RawError)

namespace org{
namespace waxeye{
namespace parser{


class HXCPP_CLASS_ATTRIBUTES Parser_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Parser_obj OBJ_;
		Parser_obj();

	public:
		enum { _hx_ClassId = 0x3932f421 };

		void __construct( ::Dynamic env,::String __o_start);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="org.waxeye.parser.Parser")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"org.waxeye.parser.Parser"); }
		static hx::ObjectPtr< Parser_obj > __new( ::Dynamic env,::String __o_start);
		static hx::ObjectPtr< Parser_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic env,::String __o_start);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Parser_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Parser","\xff","\x10","\x1d","\x22"); }

		 ::Dynamic env;
		::String start;
		int inputLen;
		::String input;
		::String nt;
		 ::org::waxeye::parser::MachineState state;
		 ::Dynamic match(::String nt,::String input);
		::Dynamic match_dyn();

		bool eof(int pos);
		::Dynamic eof_dyn();

		void move( ::org::waxeye::parser::MachineConfiguration conf);
		::Dynamic move_dyn();

		 ::org::waxeye::parser::MachineState visit( ::Dynamic charClasses,::Array< ::Dynamic> k, ::org::waxeye::parser::RawError err,int pos,::cpp::VirtualArray cc, ::Dynamic asts);
		::Dynamic visit_dyn();

		 ::Dynamic parse(::String input);
		::Dynamic parse_dyn();

};

} // end namespace org
} // end namespace waxeye
} // end namespace parser

#endif /* INCLUDED_org_waxeye_parser_Parser */ 
