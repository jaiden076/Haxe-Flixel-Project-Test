#ifndef INCLUDED_flixel_system_debug_watch_WatchEntryData
#define INCLUDED_flixel_system_debug_watch_WatchEntryData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,_hx_system,debug,watch,WatchEntryData)
HX_DECLARE_CLASS1(hscript,Expr)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace watch{


class WatchEntryData_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef WatchEntryData_obj OBJ_;

	public:
		WatchEntryData_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flixel.system.debug.watch.WatchEntryData",54,23,6d,a5); }
		::String __ToString() const { return HX_("WatchEntryData.",01,e4,e7,77) + _hx_tag; }

		static ::flixel::_hx_system::debug::watch::WatchEntryData EXPRESSION(::String expression, ::hscript::Expr parsedExpr);
		static ::Dynamic EXPRESSION_dyn();
		static ::flixel::_hx_system::debug::watch::WatchEntryData FIELD( ::Dynamic object,::String field);
		static ::Dynamic FIELD_dyn();
		static ::flixel::_hx_system::debug::watch::WatchEntryData QUICK(::String value);
		static ::Dynamic QUICK_dyn();
};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace watch

#endif /* INCLUDED_flixel_system_debug_watch_WatchEntryData */ 