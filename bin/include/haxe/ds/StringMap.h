// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_haxe_ds_StringMap
#define INCLUDED_haxe_ds_StringMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)

namespace haxe{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES StringMap_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef StringMap_obj OBJ_;
		StringMap_obj();

	public:
		enum { _hx_ClassId = 0x7fd15eaa };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ds.StringMap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ds.StringMap"); }

		hx::ObjectPtr< StringMap_obj > __new() {
			hx::ObjectPtr< StringMap_obj > __this = new StringMap_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< StringMap_obj > __alloc(hx::Ctx *_hx_ctx) {
			StringMap_obj *__this = (StringMap_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(StringMap_obj), true, "haxe.ds.StringMap"));
			*(void **)__this = StringMap_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StringMap_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("StringMap","\x2b","\x12","\x8c","\x69"); }

		 ::Dynamic h;
		 ::Dynamic get(::String key);
		::Dynamic get_dyn();

		 ::Dynamic keys();
		::Dynamic keys_dyn();


  inline void set(String key, ::null value) { __string_hash_set(h,key,value); }
  inline void set(String key, bool value) { __string_hash_set(h,key,value); }
  inline void set(String key, char value) { __string_hash_set_int(h,key,value); }
  inline void set(String key, unsigned char value) { __string_hash_set_int(h,key,value); }
  inline void set(String key, signed char value) { __string_hash_set_int(h,key,value); }
  inline void set(String key, short value) { __string_hash_set_int(h,key,value); }
  inline void set(String key, unsigned short value) { __string_hash_set_int(h,key,value); }
  inline void set(String key, int value) { __string_hash_set_int(h,key,value); }
  inline void set(String key, unsigned int value) { __string_hash_set_int(h,key,value); }
  inline void set(String key, float value) { __string_hash_set_float(h,key,value); }
  inline void set(String key, double value) { __string_hash_set_float(h,key,value); }
  inline void set(String key, ::String value) { __string_hash_set_string(h,key,value); }

  template<typename V, typename H>
  inline void set(String key, const ::cpp::Struct<V,H> &value) {__string_hash_set(h,key,value); }
  template<typename V>
  inline void set(String key, const ::cpp::Function<V> &value) {__string_hash_set(h,key,(Dynamic)value ); }
  template<typename V>
  inline void set(String key, const ::cpp::Pointer<V> &value) {__string_hash_set(h,key,(Dynamic)value ); }

  template<typename VALUE>
  inline void set(Dynamic &key, const VALUE &value) { set( (String)key, value ); }

};

} // end namespace haxe
} // end namespace ds

#endif /* INCLUDED_haxe_ds_StringMap */ 
