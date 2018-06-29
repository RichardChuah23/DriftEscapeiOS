#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.String
struct String_t;
// UnityEngine.Purchasing.MiniJSON.Json/Parser
struct Parser_t4254629878;
// System.IO.StringReader
struct StringReader_t3465604688;
// System.IO.TextReader
struct TextReader_t283511965;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2865362463;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// UnityEngine.Purchasing.MiniJSON.Json/Serializer
struct Serializer_t2325318676;
// System.Collections.IList
struct IList_t2094931216;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// UnityEngine.Purchasing.UnityPurchasingCallback
struct UnityPurchasingCallback_t953216184;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.Calendar[]
struct CalendarU5BU5D_t3985046076;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Int32
struct Int32_t2950945753;
// System.Void
struct Void_t1185182177;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t1694351041;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;

extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1482762766;
extern const uint32_t Parser_IsWordBreak_m3507966501_MetadataUsageId;
extern RuntimeClass* StringReader_t3465604688_il2cpp_TypeInfo_var;
extern const uint32_t Parser__ctor_m2190586669_MetadataUsageId;
extern RuntimeClass* Parser_t4254629878_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t Parser_Parse_m2511162714_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t2865362463_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2606011945_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m3454039676_RuntimeMethod_var;
extern const uint32_t Parser_ParseObject_m1736603789_MetadataUsageId;
extern RuntimeClass* List_1_t257213610_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2321703786_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3338814081_RuntimeMethod_var;
extern const uint32_t Parser_ParseArray_m2773280396_MetadataUsageId;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern const uint32_t Parser_ParseByToken_m1035914310_MetadataUsageId;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern const uint32_t Parser_ParseString_m2489688143_MetadataUsageId;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t3736567304_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t594665363_il2cpp_TypeInfo_var;
extern const uint32_t Parser_ParseNumber_m3013742477_MetadataUsageId;
extern const uint32_t Parser_EatWhitespace_m1896757020_MetadataUsageId;
extern const uint32_t Parser_get_PeekChar_m3225474584_MetadataUsageId;
extern const uint32_t Parser_get_NextChar_m459984253_MetadataUsageId;
extern const uint32_t Parser_get_NextWord_m3610147638_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3875954633;
extern String_t* _stringLiteral4002445229;
extern String_t* _stringLiteral1202628576;
extern const uint32_t Parser_get_NextToken_m1975389542_MetadataUsageId;
extern const uint32_t Serializer__ctor_m4012197733_MetadataUsageId;
extern RuntimeClass* Serializer_t2325318676_il2cpp_TypeInfo_var;
extern const uint32_t Serializer_Serialize_m2764544081_MetadataUsageId;
extern RuntimeClass* IList_t2094931216_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_t1363984059_il2cpp_TypeInfo_var;
extern const uint32_t Serializer_SerializeValue_m4126677736_MetadataUsageId;
extern RuntimeClass* IEnumerable_t1941168011_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern const uint32_t Serializer_SerializeObject_m588325234_MetadataUsageId;
extern const uint32_t Serializer_SerializeArray_m2095104269_MetadataUsageId;
extern String_t* _stringLiteral3450386420;
extern String_t* _stringLiteral3458119668;
extern String_t* _stringLiteral3454580724;
extern String_t* _stringLiteral3454318580;
extern String_t* _stringLiteral3454842868;
extern String_t* _stringLiteral3455629300;
extern String_t* _stringLiteral3455498228;
extern String_t* _stringLiteral3455432692;
extern String_t* _stringLiteral3451303896;
extern const uint32_t Serializer_SerializeString_m400586247_MetadataUsageId;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32_t2560061978_il2cpp_TypeInfo_var;
extern RuntimeClass* SByte_t1669577662_il2cpp_TypeInfo_var;
extern RuntimeClass* Byte_t1134296376_il2cpp_TypeInfo_var;
extern RuntimeClass* Int16_t2552820387_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt16_t2177724958_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt64_t4134040092_il2cpp_TypeInfo_var;
extern RuntimeClass* Decimal_t2948259380_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614638;
extern const uint32_t Serializer_SerializeOther_m94806937_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m87616083_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m3008302402_RuntimeMethod_var;
extern const uint32_t MiniJsonExtensions_GetString_m1131042189_MetadataUsageId;
extern const uint32_t MiniJsonExtensions_HashtableFromJson_m192055464_MetadataUsageId;

struct CharU5BU5D_t3528271667;


#ifndef U3CMODULEU3E_T692745550_H
#define U3CMODULEU3E_T692745550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745550 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745550_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef MINIJSONEXTENSIONS_T2206121176_H
#define MINIJSONEXTENSIONS_T2206121176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions
struct  MiniJsonExtensions_t2206121176  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MINIJSONEXTENSIONS_T2206121176_H
#ifndef CULTUREINFO_T4157843068_H
#define CULTUREINFO_T4157843068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t4157843068  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_7;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_8;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_9;
	// System.Int32 System.Globalization.CultureInfo::specific_lcid
	int32_t ___specific_lcid_10;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_11;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_12;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_13;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t435877138 * ___numInfo_14;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_15;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3810425522 * ___textInfo_16;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_17;
	// System.String System.Globalization.CultureInfo::displayname
	String_t* ___displayname_18;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_19;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_20;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_21;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_22;
	// System.String System.Globalization.CultureInfo::icu_name
	String_t* ___icu_name_23;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_24;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_25;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1092934962 * ___compareInfo_26;
	// System.Int32* System.Globalization.CultureInfo::calendar_data
	int32_t* ___calendar_data_27;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_28;
	// System.Globalization.Calendar[] System.Globalization.CultureInfo::optional_calendars
	CalendarU5BU5D_t3985046076* ___optional_calendars_29;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t4157843068 * ___parent_culture_30;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_31;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t1661121569 * ___calendar_32;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_33;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t4116647657* ___cached_serialized_form_34;

public:
	inline static int32_t get_offset_of_m_isReadOnly_7() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isReadOnly_7)); }
	inline bool get_m_isReadOnly_7() const { return ___m_isReadOnly_7; }
	inline bool* get_address_of_m_isReadOnly_7() { return &___m_isReadOnly_7; }
	inline void set_m_isReadOnly_7(bool value)
	{
		___m_isReadOnly_7 = value;
	}

	inline static int32_t get_offset_of_cultureID_8() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cultureID_8)); }
	inline int32_t get_cultureID_8() const { return ___cultureID_8; }
	inline int32_t* get_address_of_cultureID_8() { return &___cultureID_8; }
	inline void set_cultureID_8(int32_t value)
	{
		___cultureID_8 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_9() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_lcid_9)); }
	inline int32_t get_parent_lcid_9() const { return ___parent_lcid_9; }
	inline int32_t* get_address_of_parent_lcid_9() { return &___parent_lcid_9; }
	inline void set_parent_lcid_9(int32_t value)
	{
		___parent_lcid_9 = value;
	}

	inline static int32_t get_offset_of_specific_lcid_10() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___specific_lcid_10)); }
	inline int32_t get_specific_lcid_10() const { return ___specific_lcid_10; }
	inline int32_t* get_address_of_specific_lcid_10() { return &___specific_lcid_10; }
	inline void set_specific_lcid_10(int32_t value)
	{
		___specific_lcid_10 = value;
	}

	inline static int32_t get_offset_of_datetime_index_11() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___datetime_index_11)); }
	inline int32_t get_datetime_index_11() const { return ___datetime_index_11; }
	inline int32_t* get_address_of_datetime_index_11() { return &___datetime_index_11; }
	inline void set_datetime_index_11(int32_t value)
	{
		___datetime_index_11 = value;
	}

	inline static int32_t get_offset_of_number_index_12() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___number_index_12)); }
	inline int32_t get_number_index_12() const { return ___number_index_12; }
	inline int32_t* get_address_of_number_index_12() { return &___number_index_12; }
	inline void set_number_index_12(int32_t value)
	{
		___number_index_12 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_13() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_useUserOverride_13)); }
	inline bool get_m_useUserOverride_13() const { return ___m_useUserOverride_13; }
	inline bool* get_address_of_m_useUserOverride_13() { return &___m_useUserOverride_13; }
	inline void set_m_useUserOverride_13(bool value)
	{
		___m_useUserOverride_13 = value;
	}

	inline static int32_t get_offset_of_numInfo_14() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___numInfo_14)); }
	inline NumberFormatInfo_t435877138 * get_numInfo_14() const { return ___numInfo_14; }
	inline NumberFormatInfo_t435877138 ** get_address_of_numInfo_14() { return &___numInfo_14; }
	inline void set_numInfo_14(NumberFormatInfo_t435877138 * value)
	{
		___numInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_14), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_15() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___dateTimeInfo_15)); }
	inline DateTimeFormatInfo_t2405853701 * get_dateTimeInfo_15() const { return ___dateTimeInfo_15; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_dateTimeInfo_15() { return &___dateTimeInfo_15; }
	inline void set_dateTimeInfo_15(DateTimeFormatInfo_t2405853701 * value)
	{
		___dateTimeInfo_15 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_15), value);
	}

	inline static int32_t get_offset_of_textInfo_16() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textInfo_16)); }
	inline TextInfo_t3810425522 * get_textInfo_16() const { return ___textInfo_16; }
	inline TextInfo_t3810425522 ** get_address_of_textInfo_16() { return &___textInfo_16; }
	inline void set_textInfo_16(TextInfo_t3810425522 * value)
	{
		___textInfo_16 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_16), value);
	}

	inline static int32_t get_offset_of_m_name_17() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_name_17)); }
	inline String_t* get_m_name_17() const { return ___m_name_17; }
	inline String_t** get_address_of_m_name_17() { return &___m_name_17; }
	inline void set_m_name_17(String_t* value)
	{
		___m_name_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_17), value);
	}

	inline static int32_t get_offset_of_displayname_18() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___displayname_18)); }
	inline String_t* get_displayname_18() const { return ___displayname_18; }
	inline String_t** get_address_of_displayname_18() { return &___displayname_18; }
	inline void set_displayname_18(String_t* value)
	{
		___displayname_18 = value;
		Il2CppCodeGenWriteBarrier((&___displayname_18), value);
	}

	inline static int32_t get_offset_of_englishname_19() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___englishname_19)); }
	inline String_t* get_englishname_19() const { return ___englishname_19; }
	inline String_t** get_address_of_englishname_19() { return &___englishname_19; }
	inline void set_englishname_19(String_t* value)
	{
		___englishname_19 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_19), value);
	}

	inline static int32_t get_offset_of_nativename_20() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___nativename_20)); }
	inline String_t* get_nativename_20() const { return ___nativename_20; }
	inline String_t** get_address_of_nativename_20() { return &___nativename_20; }
	inline void set_nativename_20(String_t* value)
	{
		___nativename_20 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_20), value);
	}

	inline static int32_t get_offset_of_iso3lang_21() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso3lang_21)); }
	inline String_t* get_iso3lang_21() const { return ___iso3lang_21; }
	inline String_t** get_address_of_iso3lang_21() { return &___iso3lang_21; }
	inline void set_iso3lang_21(String_t* value)
	{
		___iso3lang_21 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_21), value);
	}

	inline static int32_t get_offset_of_iso2lang_22() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso2lang_22)); }
	inline String_t* get_iso2lang_22() const { return ___iso2lang_22; }
	inline String_t** get_address_of_iso2lang_22() { return &___iso2lang_22; }
	inline void set_iso2lang_22(String_t* value)
	{
		___iso2lang_22 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_22), value);
	}

	inline static int32_t get_offset_of_icu_name_23() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___icu_name_23)); }
	inline String_t* get_icu_name_23() const { return ___icu_name_23; }
	inline String_t** get_address_of_icu_name_23() { return &___icu_name_23; }
	inline void set_icu_name_23(String_t* value)
	{
		___icu_name_23 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_23), value);
	}

	inline static int32_t get_offset_of_win3lang_24() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___win3lang_24)); }
	inline String_t* get_win3lang_24() const { return ___win3lang_24; }
	inline String_t** get_address_of_win3lang_24() { return &___win3lang_24; }
	inline void set_win3lang_24(String_t* value)
	{
		___win3lang_24 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_24), value);
	}

	inline static int32_t get_offset_of_territory_25() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___territory_25)); }
	inline String_t* get_territory_25() const { return ___territory_25; }
	inline String_t** get_address_of_territory_25() { return &___territory_25; }
	inline void set_territory_25(String_t* value)
	{
		___territory_25 = value;
		Il2CppCodeGenWriteBarrier((&___territory_25), value);
	}

	inline static int32_t get_offset_of_compareInfo_26() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___compareInfo_26)); }
	inline CompareInfo_t1092934962 * get_compareInfo_26() const { return ___compareInfo_26; }
	inline CompareInfo_t1092934962 ** get_address_of_compareInfo_26() { return &___compareInfo_26; }
	inline void set_compareInfo_26(CompareInfo_t1092934962 * value)
	{
		___compareInfo_26 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_26), value);
	}

	inline static int32_t get_offset_of_calendar_data_27() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_data_27)); }
	inline int32_t* get_calendar_data_27() const { return ___calendar_data_27; }
	inline int32_t** get_address_of_calendar_data_27() { return &___calendar_data_27; }
	inline void set_calendar_data_27(int32_t* value)
	{
		___calendar_data_27 = value;
	}

	inline static int32_t get_offset_of_textinfo_data_28() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textinfo_data_28)); }
	inline void* get_textinfo_data_28() const { return ___textinfo_data_28; }
	inline void** get_address_of_textinfo_data_28() { return &___textinfo_data_28; }
	inline void set_textinfo_data_28(void* value)
	{
		___textinfo_data_28 = value;
	}

	inline static int32_t get_offset_of_optional_calendars_29() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___optional_calendars_29)); }
	inline CalendarU5BU5D_t3985046076* get_optional_calendars_29() const { return ___optional_calendars_29; }
	inline CalendarU5BU5D_t3985046076** get_address_of_optional_calendars_29() { return &___optional_calendars_29; }
	inline void set_optional_calendars_29(CalendarU5BU5D_t3985046076* value)
	{
		___optional_calendars_29 = value;
		Il2CppCodeGenWriteBarrier((&___optional_calendars_29), value);
	}

	inline static int32_t get_offset_of_parent_culture_30() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_culture_30)); }
	inline CultureInfo_t4157843068 * get_parent_culture_30() const { return ___parent_culture_30; }
	inline CultureInfo_t4157843068 ** get_address_of_parent_culture_30() { return &___parent_culture_30; }
	inline void set_parent_culture_30(CultureInfo_t4157843068 * value)
	{
		___parent_culture_30 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_30), value);
	}

	inline static int32_t get_offset_of_m_dataItem_31() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_dataItem_31)); }
	inline int32_t get_m_dataItem_31() const { return ___m_dataItem_31; }
	inline int32_t* get_address_of_m_dataItem_31() { return &___m_dataItem_31; }
	inline void set_m_dataItem_31(int32_t value)
	{
		___m_dataItem_31 = value;
	}

	inline static int32_t get_offset_of_calendar_32() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_32)); }
	inline Calendar_t1661121569 * get_calendar_32() const { return ___calendar_32; }
	inline Calendar_t1661121569 ** get_address_of_calendar_32() { return &___calendar_32; }
	inline void set_calendar_32(Calendar_t1661121569 * value)
	{
		___calendar_32 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_32), value);
	}

	inline static int32_t get_offset_of_constructed_33() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___constructed_33)); }
	inline bool get_constructed_33() const { return ___constructed_33; }
	inline bool* get_address_of_constructed_33() { return &___constructed_33; }
	inline void set_constructed_33(bool value)
	{
		___constructed_33 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_34() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cached_serialized_form_34)); }
	inline ByteU5BU5D_t4116647657* get_cached_serialized_form_34() const { return ___cached_serialized_form_34; }
	inline ByteU5BU5D_t4116647657** get_address_of_cached_serialized_form_34() { return &___cached_serialized_form_34; }
	inline void set_cached_serialized_form_34(ByteU5BU5D_t4116647657* value)
	{
		___cached_serialized_form_34 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_34), value);
	}
};

struct CultureInfo_t4157843068_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t4157843068 * ___invariant_culture_info_4;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_5;
	// System.Int32 System.Globalization.CultureInfo::BootstrapCultureID
	int32_t ___BootstrapCultureID_6;
	// System.String System.Globalization.CultureInfo::MSG_READONLY
	String_t* ___MSG_READONLY_35;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_number
	Hashtable_t1853889766 * ___shared_by_number_36;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_name
	Hashtable_t1853889766 * ___shared_by_name_37;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map19
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map19_38;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1A
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1A_39;

public:
	inline static int32_t get_offset_of_invariant_culture_info_4() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___invariant_culture_info_4)); }
	inline CultureInfo_t4157843068 * get_invariant_culture_info_4() const { return ___invariant_culture_info_4; }
	inline CultureInfo_t4157843068 ** get_address_of_invariant_culture_info_4() { return &___invariant_culture_info_4; }
	inline void set_invariant_culture_info_4(CultureInfo_t4157843068 * value)
	{
		___invariant_culture_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_4), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_5() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_table_lock_5)); }
	inline RuntimeObject * get_shared_table_lock_5() const { return ___shared_table_lock_5; }
	inline RuntimeObject ** get_address_of_shared_table_lock_5() { return &___shared_table_lock_5; }
	inline void set_shared_table_lock_5(RuntimeObject * value)
	{
		___shared_table_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_5), value);
	}

	inline static int32_t get_offset_of_BootstrapCultureID_6() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___BootstrapCultureID_6)); }
	inline int32_t get_BootstrapCultureID_6() const { return ___BootstrapCultureID_6; }
	inline int32_t* get_address_of_BootstrapCultureID_6() { return &___BootstrapCultureID_6; }
	inline void set_BootstrapCultureID_6(int32_t value)
	{
		___BootstrapCultureID_6 = value;
	}

	inline static int32_t get_offset_of_MSG_READONLY_35() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___MSG_READONLY_35)); }
	inline String_t* get_MSG_READONLY_35() const { return ___MSG_READONLY_35; }
	inline String_t** get_address_of_MSG_READONLY_35() { return &___MSG_READONLY_35; }
	inline void set_MSG_READONLY_35(String_t* value)
	{
		___MSG_READONLY_35 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_35), value);
	}

	inline static int32_t get_offset_of_shared_by_number_36() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_number_36)); }
	inline Hashtable_t1853889766 * get_shared_by_number_36() const { return ___shared_by_number_36; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_number_36() { return &___shared_by_number_36; }
	inline void set_shared_by_number_36(Hashtable_t1853889766 * value)
	{
		___shared_by_number_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_36), value);
	}

	inline static int32_t get_offset_of_shared_by_name_37() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_name_37)); }
	inline Hashtable_t1853889766 * get_shared_by_name_37() const { return ___shared_by_name_37; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_name_37() { return &___shared_by_name_37; }
	inline void set_shared_by_name_37(Hashtable_t1853889766 * value)
	{
		___shared_by_name_37 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map19_38() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map19_38)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map19_38() const { return ___U3CU3Ef__switchU24map19_38; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map19_38() { return &___U3CU3Ef__switchU24map19_38; }
	inline void set_U3CU3Ef__switchU24map19_38(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map19_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map19_38), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1A_39() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map1A_39)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1A_39() const { return ___U3CU3Ef__switchU24map1A_39; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1A_39() { return &___U3CU3Ef__switchU24map1A_39; }
	inline void set_U3CU3Ef__switchU24map1A_39(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1A_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1A_39), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFO_T4157843068_H
#ifndef TEXTREADER_T283511965_H
#define TEXTREADER_T283511965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextReader
struct  TextReader_t283511965  : public RuntimeObject
{
public:

public:
};

struct TextReader_t283511965_StaticFields
{
public:
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t283511965 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(TextReader_t283511965_StaticFields, ___Null_0)); }
	inline TextReader_t283511965 * get_Null_0() const { return ___Null_0; }
	inline TextReader_t283511965 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(TextReader_t283511965 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTREADER_T283511965_H
#ifndef DICTIONARY_2_T2865362463_H
#define DICTIONARY_2_T2865362463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t2865362463  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ObjectU5BU5D_t2843939325* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___valueSlots_7)); }
	inline ObjectU5BU5D_t2843939325* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ObjectU5BU5D_t2843939325* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2865362463_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1694351041 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1694351041 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1694351041 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1694351041 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2865362463_H
#ifndef LIST_1_T257213610_H
#define LIST_1_T257213610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Object>
struct  List_1_t257213610  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t2843939325* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____items_1)); }
	inline ObjectU5BU5D_t2843939325* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t2843939325** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t2843939325* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t257213610_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ObjectU5BU5D_t2843939325* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t257213610_StaticFields, ___EmptyArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T257213610_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef SERIALIZER_T2325318676_H
#define SERIALIZER_T2325318676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.MiniJSON.Json/Serializer
struct  Serializer_t2325318676  : public RuntimeObject
{
public:
	// System.Text.StringBuilder UnityEngine.Purchasing.MiniJSON.Json/Serializer::builder
	StringBuilder_t * ___builder_0;

public:
	inline static int32_t get_offset_of_builder_0() { return static_cast<int32_t>(offsetof(Serializer_t2325318676, ___builder_0)); }
	inline StringBuilder_t * get_builder_0() const { return ___builder_0; }
	inline StringBuilder_t ** get_address_of_builder_0() { return &___builder_0; }
	inline void set_builder_0(StringBuilder_t * value)
	{
		___builder_0 = value;
		Il2CppCodeGenWriteBarrier((&___builder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZER_T2325318676_H
#ifndef MINIJSON_T2055087936_H
#define MINIJSON_T2055087936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.MiniJson
struct  MiniJson_t2055087936  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MINIJSON_T2055087936_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef JSON_T4111971237_H
#define JSON_T4111971237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.MiniJSON.Json
struct  Json_t4111971237  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSON_T4111971237_H
#ifndef PARSER_T4254629878_H
#define PARSER_T4254629878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.MiniJSON.Json/Parser
struct  Parser_t4254629878  : public RuntimeObject
{
public:
	// System.IO.StringReader UnityEngine.Purchasing.MiniJSON.Json/Parser::json
	StringReader_t3465604688 * ___json_0;

public:
	inline static int32_t get_offset_of_json_0() { return static_cast<int32_t>(offsetof(Parser_t4254629878, ___json_0)); }
	inline StringReader_t3465604688 * get_json_0() const { return ___json_0; }
	inline StringReader_t3465604688 ** get_address_of_json_0() { return &___json_0; }
	inline void set_json_0(StringReader_t3465604688 * value)
	{
		___json_0 = value;
		Il2CppCodeGenWriteBarrier((&___json_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSER_T4254629878_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef SBYTE_T1669577662_H
#define SBYTE_T1669577662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t1669577662 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t1669577662, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T1669577662_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef INT16_T2552820387_H
#define INT16_T2552820387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2552820387 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t2552820387, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2552820387_H
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_5;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_6;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_7;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_8;

public:
	inline static int32_t get_offset_of_flags_5() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_5)); }
	inline uint32_t get_flags_5() const { return ___flags_5; }
	inline uint32_t* get_address_of_flags_5() { return &___flags_5; }
	inline void set_flags_5(uint32_t value)
	{
		___flags_5 = value;
	}

	inline static int32_t get_offset_of_hi_6() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_6)); }
	inline uint32_t get_hi_6() const { return ___hi_6; }
	inline uint32_t* get_address_of_hi_6() { return &___hi_6; }
	inline void set_hi_6(uint32_t value)
	{
		___hi_6 = value;
	}

	inline static int32_t get_offset_of_lo_7() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_7)); }
	inline uint32_t get_lo_7() const { return ___lo_7; }
	inline uint32_t* get_address_of_lo_7() { return &___lo_7; }
	inline void set_lo_7(uint32_t value)
	{
		___lo_7 = value;
	}

	inline static int32_t get_offset_of_mid_8() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_8)); }
	inline uint32_t get_mid_8() const { return ___mid_8; }
	inline uint32_t* get_address_of_mid_8() { return &___mid_8; }
	inline void set_mid_8(uint32_t value)
	{
		___mid_8 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_3;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t2948259380  ___MaxValueDiv10_4;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_0)); }
	inline Decimal_t2948259380  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t2948259380 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t2948259380  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_1)); }
	inline Decimal_t2948259380  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t2948259380  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_2)); }
	inline Decimal_t2948259380  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t2948259380  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_3)); }
	inline Decimal_t2948259380  get_One_3() const { return ___One_3; }
	inline Decimal_t2948259380 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t2948259380  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_4() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValueDiv10_4)); }
	inline Decimal_t2948259380  get_MaxValueDiv10_4() const { return ___MaxValueDiv10_4; }
	inline Decimal_t2948259380 * get_address_of_MaxValueDiv10_4() { return &___MaxValueDiv10_4; }
	inline void set_MaxValueDiv10_4(Decimal_t2948259380  value)
	{
		___MaxValueDiv10_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef STRINGREADER_T3465604688_H
#define STRINGREADER_T3465604688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StringReader
struct  StringReader_t3465604688  : public TextReader_t283511965
{
public:
	// System.String System.IO.StringReader::source
	String_t* ___source_1;
	// System.Int32 System.IO.StringReader::nextChar
	int32_t ___nextChar_2;
	// System.Int32 System.IO.StringReader::sourceLength
	int32_t ___sourceLength_3;

public:
	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(StringReader_t3465604688, ___source_1)); }
	inline String_t* get_source_1() const { return ___source_1; }
	inline String_t** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(String_t* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((&___source_1), value);
	}

	inline static int32_t get_offset_of_nextChar_2() { return static_cast<int32_t>(offsetof(StringReader_t3465604688, ___nextChar_2)); }
	inline int32_t get_nextChar_2() const { return ___nextChar_2; }
	inline int32_t* get_address_of_nextChar_2() { return &___nextChar_2; }
	inline void set_nextChar_2(int32_t value)
	{
		___nextChar_2 = value;
	}

	inline static int32_t get_offset_of_sourceLength_3() { return static_cast<int32_t>(offsetof(StringReader_t3465604688, ___sourceLength_3)); }
	inline int32_t get_sourceLength_3() const { return ___sourceLength_3; }
	inline int32_t* get_address_of_sourceLength_3() { return &___sourceLength_3; }
	inline void set_sourceLength_3(int32_t value)
	{
		___sourceLength_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGREADER_T3465604688_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef NUMBERSTYLES_T617258130_H
#define NUMBERSTYLES_T617258130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberStyles
struct  NumberStyles_t617258130 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NumberStyles_t617258130, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERSTYLES_T617258130_H
#ifndef TOKEN_T4214352417_H
#define TOKEN_T4214352417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.MiniJSON.Json/Parser/TOKEN
struct  TOKEN_t4214352417 
{
public:
	// System.Int32 UnityEngine.Purchasing.MiniJSON.Json/Parser/TOKEN::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TOKEN_t4214352417, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOKEN_T4214352417_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef UNITYPURCHASINGCALLBACK_T953216184_H
#define UNITYPURCHASINGCALLBACK_T953216184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.UnityPurchasingCallback
struct  UnityPurchasingCallback_t953216184  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYPURCHASINGCALLBACK_T953216184_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C"  void Dictionary_2_set_Item_m3474379962_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C"  bool Dictionary_2_ContainsKey_m2278349286_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C"  RuntimeObject * Dictionary_2_get_Item_m2714930061_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);

// System.String UnityEngine.Purchasing.MiniJSON.Json::Serialize(System.Object)
extern "C"  String_t* Json_Serialize_m907055186 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.Purchasing.MiniJSON.Json::Deserialize(System.String)
extern "C"  RuntimeObject * Json_Deserialize_m3945097775 (RuntimeObject * __this /* static, unused */, String_t* ___json0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.Purchasing.MiniJSON.Json/Parser::Parse(System.String)
extern "C"  RuntimeObject * Parser_Parse_m2511162714 (RuntimeObject * __this /* static, unused */, String_t* ___jsonString0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.MiniJSON.Json/Serializer::Serialize(System.Object)
extern "C"  String_t* Serializer_Serialize_m2764544081 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsWhiteSpace(System.Char)
extern "C"  bool Char_IsWhiteSpace_m2148390798 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char)
extern "C"  int32_t String_IndexOf_m363431711 (String_t* __this, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringReader::.ctor(System.String)
extern "C"  void StringReader__ctor_m126993932 (StringReader_t3465604688 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Parser::.ctor(System.String)
extern "C"  void Parser__ctor_m2190586669 (Parser_t4254629878 * __this, String_t* ___jsonString0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseValue()
extern "C"  RuntimeObject * Parser_ParseValue_m3136137333 (Parser_t4254629878 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::Dispose()
extern "C"  void TextReader_Dispose_m4253712522 (TextReader_t283511965 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
#define Dictionary_2__ctor_m2606011945(__this, method) ((  void (*) (Dictionary_2_t2865362463 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// UnityEngine.Purchasing.MiniJSON.Json/Parser/TOKEN UnityEngine.Purchasing.MiniJSON.Json/Parser::get_NextToken()
extern "C"  int32_t Parser_get_NextToken_m1975389542 (Parser_t4254629878 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseString()
extern "C"  String_t* Parser_ParseString_m2489688143 (Parser_t4254629878 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
#define Dictionary_2_set_Item_m3454039676(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2865362463 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
#define List_1__ctor_m2321703786(__this, method) ((  void (*) (List_1_t257213610 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Object UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseByToken(UnityEngine.Purchasing.MiniJSON.Json/Parser/TOKEN)
extern "C"  RuntimeObject * Parser_ParseByToken_m1035914310 (Parser_t4254629878 * __this, int32_t ___token0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
#define List_1_Add_m3338814081(__this, p0, method) ((  void (*) (List_1_t257213610 *, RuntimeObject *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Object UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseNumber()
extern "C"  RuntimeObject * Parser_ParseNumber_m3013742477 (Parser_t4254629878 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseObject()
extern "C"  Dictionary_2_t2865362463 * Parser_ParseObject_m1736603789 (Parser_t4254629878 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseArray()
extern "C"  List_1_t257213610 * Parser_ParseArray_m2773280396 (Parser_t4254629878 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor()
extern "C"  void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.Purchasing.MiniJSON.Json/Parser::get_NextChar()
extern "C"  Il2CppChar Parser_get_NextChar_m459984253 (Parser_t4254629878 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C"  StringBuilder_t * StringBuilder_Append_m2383614642 (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char[])
extern "C"  String_t* String_CreateString_m2818852475 (String_t* __this, CharU5BU5D_t3528271667* ___val0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.String,System.Int32)
extern "C"  int32_t Convert_ToInt32_m391894676 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.MiniJSON.Json/Parser::get_NextWord()
extern "C"  String_t* Parser_get_NextWord_m3610147638 (Parser_t4254629878 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C"  CultureInfo_t4157843068 * CultureInfo_get_InvariantCulture_m3532445182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int64::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int64&)
extern "C"  bool Int64_TryParse_m3606398488 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, RuntimeObject* p2, int64_t* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Double&)
extern "C"  bool Double_TryParse_m623190659 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, RuntimeObject* p2, double* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.Purchasing.MiniJSON.Json/Parser::get_PeekChar()
extern "C"  Il2CppChar Parser_get_PeekChar_m3225474584 (Parser_t4254629878 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Int32)
extern "C"  Il2CppChar Convert_ToChar_m4189066566 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.MiniJSON.Json/Parser::IsWordBreak(System.Char)
extern "C"  bool Parser_IsWordBreak_m3507966501 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Parser::EatWhitespace()
extern "C"  void Parser_EatWhitespace_m1896757020 (Parser_t4254629878 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::.ctor()
extern "C"  void Serializer__ctor_m4012197733 (Serializer_t2325318676 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::SerializeValue(System.Object)
extern "C"  void Serializer_SerializeValue_m4126677736 (Serializer_t2325318676 * __this, RuntimeObject * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C"  StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::SerializeString(System.String)
extern "C"  void Serializer_SerializeString_m400586247 (Serializer_t2325318676 * __this, String_t* ___str0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
extern "C"  void Serializer_SerializeArray_m2095104269 (Serializer_t2325318676 * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
extern "C"  void Serializer_SerializeObject_m588325234 (Serializer_t2325318676 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char,System.Int32)
extern "C"  String_t* String_CreateString_m1262864254 (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::SerializeOther(System.Object)
extern "C"  void Serializer_SerializeOther_m94806937 (Serializer_t2325318676 * __this, RuntimeObject * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.String::ToCharArray()
extern "C"  CharU5BU5D_t3528271667* String_ToCharArray_m1492846834 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Char)
extern "C"  int32_t Convert_ToInt32_m1876369743 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString(System.String)
extern "C"  String_t* Int32_ToString_m372259452 (int32_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Single::ToString(System.String)
extern "C"  String_t* Single_ToString_m3489843083 (float* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
extern "C"  StringBuilder_t * StringBuilder_Append_m1640838743 (StringBuilder_t * __this, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Object)
extern "C"  double Convert_ToDouble_m4025515304 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Double::ToString(System.String)
extern "C"  String_t* Double_ToString_m896573572 (double* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m87616083(__this, p0, method) ((  bool (*) (Dictionary_2_t2865362463 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0)
#define Dictionary_2_get_Item_m3008302402(__this, p0, method) ((  RuntimeObject * (*) (Dictionary_2_t2865362463 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// System.String UnityEngine.Purchasing.MiniJson::JsonEncode(System.Object)
extern "C"  String_t* MiniJson_JsonEncode_m4232126612 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___json0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.Purchasing.MiniJson::JsonDecode(System.String)
extern "C"  RuntimeObject * MiniJson_JsonDecode_m1204021123 (RuntimeObject * __this /* static, unused */, String_t* ___json0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UnityPurchasingCallback::Invoke(System.String,System.String,System.String,System.String)
extern "C"  void UnityPurchasingCallback_Invoke_m376366797 (UnityPurchasingCallback_t953216184 * __this, String_t* ___subject0, String_t* ___payload1, String_t* ___receipt2, String_t* ___transactionId3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.Purchasing.MiniJson::JsonEncode(System.Object)
extern "C"  String_t* MiniJson_JsonEncode_m4232126612 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___json0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		RuntimeObject * L_0 = ___json0;
		String_t* L_1 = Json_Serialize_m907055186(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Object UnityEngine.Purchasing.MiniJson::JsonDecode(System.String)
extern "C"  RuntimeObject * MiniJson_JsonDecode_m1204021123 (RuntimeObject * __this /* static, unused */, String_t* ___json0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		String_t* L_0 = ___json0;
		RuntimeObject * L_1 = Json_Deserialize_m3945097775(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject * L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object UnityEngine.Purchasing.MiniJSON.Json::Deserialize(System.String)
extern "C"  RuntimeObject * Json_Deserialize_m3945097775 (RuntimeObject * __this /* static, unused */, String_t* ___json0, const RuntimeMethod* method)
{
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	{
		String_t* L_0 = ___json0;
		V_0 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		V_1 = NULL;
		goto IL_0017;
	}

IL_000e:
	{
		String_t* L_2 = ___json0;
		RuntimeObject * L_3 = Parser_Parse_m2511162714(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0017;
	}

IL_0017:
	{
		RuntimeObject * L_4 = V_1;
		return L_4;
	}
}
// System.String UnityEngine.Purchasing.MiniJSON.Json::Serialize(System.Object)
extern "C"  String_t* Json_Serialize_m907055186 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		String_t* L_1 = Serializer_Serialize_m2764544081(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Purchasing.MiniJSON.Json/Parser::IsWordBreak(System.Char)
extern "C"  bool Parser_IsWordBreak_m3507966501 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_IsWordBreak_m3507966501_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		Il2CppChar L_0 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_1 = Char_IsWhiteSpace_m2148390798(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Il2CppChar L_2 = ___c0;
		NullCheck(_stringLiteral1482762766);
		int32_t L_3 = String_IndexOf_m363431711(_stringLiteral1482762766, L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0020;
	}

IL_0020:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Parser::.ctor(System.String)
extern "C"  void Parser__ctor_m2190586669 (Parser_t4254629878 * __this, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser__ctor_m2190586669_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___jsonString0;
		StringReader_t3465604688 * L_1 = (StringReader_t3465604688 *)il2cpp_codegen_object_new(StringReader_t3465604688_il2cpp_TypeInfo_var);
		StringReader__ctor_m126993932(L_1, L_0, /*hidden argument*/NULL);
		__this->set_json_0(L_1);
		return;
	}
}
// System.Object UnityEngine.Purchasing.MiniJSON.Json/Parser::Parse(System.String)
extern "C"  RuntimeObject * Parser_Parse_m2511162714 (RuntimeObject * __this /* static, unused */, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_Parse_m2511162714_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Parser_t4254629878 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___jsonString0;
		Parser_t4254629878 * L_1 = (Parser_t4254629878 *)il2cpp_codegen_object_new(Parser_t4254629878_il2cpp_TypeInfo_var);
		Parser__ctor_m2190586669(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		Parser_t4254629878 * L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject * L_3 = Parser_ParseValue_m3136137333(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		IL2CPP_LEAVE(0x1D, FINALLY_0012);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0012;
	}

FINALLY_0012:
	{ // begin finally (depth: 1)
		{
			Parser_t4254629878 * L_4 = V_0;
			if (!L_4)
			{
				goto IL_001c;
			}
		}

IL_0015:
		{
			Parser_t4254629878 * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_5);
		}

IL_001c:
		{
			IL2CPP_END_FINALLY(18)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(18)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_001d:
	{
		RuntimeObject * L_6 = V_1;
		return L_6;
	}
}
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Parser::Dispose()
extern "C"  void Parser_Dispose_m3681066680 (Parser_t4254629878 * __this, const RuntimeMethod* method)
{
	{
		StringReader_t3465604688 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		TextReader_Dispose_m4253712522(L_0, /*hidden argument*/NULL);
		__this->set_json_0((StringReader_t3465604688 *)NULL);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseObject()
extern "C"  Dictionary_2_t2865362463 * Parser_ParseObject_m1736603789 (Parser_t4254629878 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseObject_m1736603789_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t2865362463 * V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	Dictionary_2_t2865362463 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		Dictionary_2_t2865362463 * L_0 = (Dictionary_2_t2865362463 *)il2cpp_codegen_object_new(Dictionary_2_t2865362463_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2606011945(L_0, /*hidden argument*/Dictionary_2__ctor_m2606011945_RuntimeMethod_var);
		V_0 = L_0;
		StringReader_t3465604688 * L_1 = __this->get_json_0();
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		goto IL_0082;
	}

IL_0015:
	{
		int32_t L_2 = Parser_get_NextToken_m1975389542(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		goto IL_0022;
	}

IL_0022:
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_0034;
		}
	}
	{
		goto IL_0028;
	}

IL_0028:
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)6)))
		{
			goto IL_0032;
		}
	}
	{
		goto IL_0038;
	}

IL_002e:
	{
		V_3 = (Dictionary_2_t2865362463 *)NULL;
		goto IL_0087;
	}

IL_0032:
	{
		goto IL_0082;
	}

IL_0034:
	{
		Dictionary_2_t2865362463 * L_6 = V_0;
		V_3 = L_6;
		goto IL_0087;
	}

IL_0038:
	{
		String_t* L_7 = Parser_ParseString_m2489688143(__this, /*hidden argument*/NULL);
		V_2 = L_7;
		String_t* L_8 = V_2;
		V_4 = (bool)((((RuntimeObject*)(String_t*)L_8) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		V_3 = (Dictionary_2_t2865362463 *)NULL;
		goto IL_0087;
	}

IL_004e:
	{
		int32_t L_10 = Parser_get_NextToken_m1975389542(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_10) == ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		V_3 = (Dictionary_2_t2865362463 *)NULL;
		goto IL_0087;
	}

IL_0065:
	{
		StringReader_t3465604688 * L_12 = __this->get_json_0();
		NullCheck(L_12);
		VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Read() */, L_12);
		Dictionary_2_t2865362463 * L_13 = V_0;
		String_t* L_14 = V_2;
		RuntimeObject * L_15 = Parser_ParseValue_m3136137333(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Dictionary_2_set_Item_m3454039676(L_13, L_14, L_15, /*hidden argument*/Dictionary_2_set_Item_m3454039676_RuntimeMethod_var);
		goto IL_0081;
	}

IL_0081:
	{
	}

IL_0082:
	{
		V_6 = (bool)1;
		goto IL_0015;
	}

IL_0087:
	{
		Dictionary_2_t2865362463 * L_16 = V_3;
		return L_16;
	}
}
// System.Collections.Generic.List`1<System.Object> UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseArray()
extern "C"  List_1_t257213610 * Parser_ParseArray_m2773280396 (Parser_t4254629878 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseArray_m2773280396_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t257213610 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RuntimeObject * V_4 = NULL;
	List_1_t257213610 * V_5 = NULL;
	bool V_6 = false;
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)il2cpp_codegen_object_new(List_1_t257213610_il2cpp_TypeInfo_var);
		List_1__ctor_m2321703786(L_0, /*hidden argument*/List_1__ctor_m2321703786_RuntimeMethod_var);
		V_0 = L_0;
		StringReader_t3465604688 * L_1 = __this->get_json_0();
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		V_1 = (bool)1;
		goto IL_0052;
	}

IL_0017:
	{
		int32_t L_2 = Parser_get_NextToken_m1975389542(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		int32_t L_3 = V_2;
		V_3 = L_3;
		int32_t L_4 = V_3;
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_3;
		if ((((int32_t)L_5) == ((int32_t)4)))
		{
			goto IL_0039;
		}
	}
	{
		goto IL_002c;
	}

IL_002c:
	{
		int32_t L_6 = V_3;
		if ((((int32_t)L_6) == ((int32_t)6)))
		{
			goto IL_0037;
		}
	}
	{
		goto IL_003d;
	}

IL_0032:
	{
		V_5 = (List_1_t257213610 *)NULL;
		goto IL_005e;
	}

IL_0037:
	{
		goto IL_0052;
	}

IL_0039:
	{
		V_1 = (bool)0;
		goto IL_0051;
	}

IL_003d:
	{
		int32_t L_7 = V_2;
		RuntimeObject * L_8 = Parser_ParseByToken_m1035914310(__this, L_7, /*hidden argument*/NULL);
		V_4 = L_8;
		List_1_t257213610 * L_9 = V_0;
		RuntimeObject * L_10 = V_4;
		NullCheck(L_9);
		List_1_Add_m3338814081(L_9, L_10, /*hidden argument*/List_1_Add_m3338814081_RuntimeMethod_var);
		goto IL_0051;
	}

IL_0051:
	{
	}

IL_0052:
	{
		bool L_11 = V_1;
		V_6 = L_11;
		bool L_12 = V_6;
		if (L_12)
		{
			goto IL_0017;
		}
	}
	{
		List_1_t257213610 * L_13 = V_0;
		V_5 = L_13;
		goto IL_005e;
	}

IL_005e:
	{
		List_1_t257213610 * L_14 = V_5;
		return L_14;
	}
}
// System.Object UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseValue()
extern "C"  RuntimeObject * Parser_ParseValue_m3136137333 (Parser_t4254629878 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = Parser_get_NextToken_m1975389542(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		RuntimeObject * L_2 = Parser_ParseByToken_m1035914310(__this, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_0012;
	}

IL_0012:
	{
		RuntimeObject * L_3 = V_1;
		return L_3;
	}
}
// System.Object UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseByToken(UnityEngine.Purchasing.MiniJSON.Json/Parser/TOKEN)
extern "C"  RuntimeObject * Parser_ParseByToken_m1035914310 (Parser_t4254629878 * __this, int32_t ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseByToken_m1035914310_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = ___token0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_004b;
			}
			case 1:
			{
				goto IL_0073;
			}
			case 2:
			{
				goto IL_0054;
			}
			case 3:
			{
				goto IL_0073;
			}
			case 4:
			{
				goto IL_0073;
			}
			case 5:
			{
				goto IL_0073;
			}
			case 6:
			{
				goto IL_0039;
			}
			case 7:
			{
				goto IL_0042;
			}
			case 8:
			{
				goto IL_005d;
			}
			case 9:
			{
				goto IL_0066;
			}
			case 10:
			{
				goto IL_006f;
			}
		}
	}
	{
		goto IL_0073;
	}

IL_0039:
	{
		String_t* L_2 = Parser_ParseString_m2489688143(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_0077;
	}

IL_0042:
	{
		RuntimeObject * L_3 = Parser_ParseNumber_m3013742477(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0077;
	}

IL_004b:
	{
		Dictionary_2_t2865362463 * L_4 = Parser_ParseObject_m1736603789(__this, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0077;
	}

IL_0054:
	{
		List_1_t257213610 * L_5 = Parser_ParseArray_m2773280396(__this, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0077;
	}

IL_005d:
	{
		bool L_6 = ((bool)1);
		RuntimeObject * L_7 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_6);
		V_1 = L_7;
		goto IL_0077;
	}

IL_0066:
	{
		bool L_8 = ((bool)0);
		RuntimeObject * L_9 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_8);
		V_1 = L_9;
		goto IL_0077;
	}

IL_006f:
	{
		V_1 = NULL;
		goto IL_0077;
	}

IL_0073:
	{
		V_1 = NULL;
		goto IL_0077;
	}

IL_0077:
	{
		RuntimeObject * L_10 = V_1;
		return L_10;
	}
}
// System.String UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseString()
extern "C"  String_t* Parser_ParseString_m2489688143 (Parser_t4254629878 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseString_m2489688143_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	bool V_3 = false;
	Il2CppChar V_4 = 0x0;
	bool V_5 = false;
	Il2CppChar V_6 = 0x0;
	CharU5BU5D_t3528271667* V_7 = NULL;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	String_t* V_11 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringReader_t3465604688 * L_1 = __this->get_json_0();
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		V_2 = (bool)1;
		goto IL_0170;
	}

IL_001a:
	{
		StringReader_t3465604688 * L_2 = __this->get_json_0();
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Peek() */, L_2);
		V_3 = (bool)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_017a;
	}

IL_0035:
	{
		Il2CppChar L_5 = Parser_get_NextChar_m459984253(__this, /*hidden argument*/NULL);
		V_1 = L_5;
		Il2CppChar L_6 = V_1;
		V_4 = L_6;
		Il2CppChar L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)34))))
		{
			goto IL_0052;
		}
	}
	{
		goto IL_0047;
	}

IL_0047:
	{
		Il2CppChar L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)92))))
		{
			goto IL_0059;
		}
	}
	{
		goto IL_0165;
	}

IL_0052:
	{
		V_2 = (bool)0;
		goto IL_016f;
	}

IL_0059:
	{
		StringReader_t3465604688 * L_9 = __this->get_json_0();
		NullCheck(L_9);
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Peek() */, L_9);
		V_5 = (bool)((((int32_t)L_10) == ((int32_t)(-1)))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0075;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_016f;
	}

IL_0075:
	{
		Il2CppChar L_12 = Parser_get_NextChar_m459984253(__this, /*hidden argument*/NULL);
		V_1 = L_12;
		Il2CppChar L_13 = V_1;
		V_6 = L_13;
		Il2CppChar L_14 = V_6;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)92)))))
		{
			goto IL_00a0;
		}
	}
	{
		Il2CppChar L_15 = V_6;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)34))))
		{
			goto IL_00e0;
		}
	}
	{
		goto IL_008d;
	}

IL_008d:
	{
		Il2CppChar L_16 = V_6;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)47))))
		{
			goto IL_00e0;
		}
	}
	{
		goto IL_0095;
	}

IL_0095:
	{
		Il2CppChar L_17 = V_6;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)92))))
		{
			goto IL_00e0;
		}
	}
	{
		goto IL_0163;
	}

IL_00a0:
	{
		Il2CppChar L_18 = V_6;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)102)))))
		{
			goto IL_00b9;
		}
	}
	{
		Il2CppChar L_19 = V_6;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)98))))
		{
			goto IL_00ea;
		}
	}
	{
		goto IL_00ae;
	}

IL_00ae:
	{
		Il2CppChar L_20 = V_6;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)102))))
		{
			goto IL_00f4;
		}
	}
	{
		goto IL_0163;
	}

IL_00b9:
	{
		Il2CppChar L_21 = V_6;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)110))))
		{
			goto IL_00ff;
		}
	}
	{
		goto IL_00c1;
	}

IL_00c1:
	{
		Il2CppChar L_22 = V_6;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)((int32_t)114))))
		{
			case 0:
			{
				goto IL_010a;
			}
			case 1:
			{
				goto IL_0163;
			}
			case 2:
			{
				goto IL_0115;
			}
			case 3:
			{
				goto IL_0120;
			}
		}
	}
	{
		goto IL_0163;
	}

IL_00e0:
	{
		StringBuilder_t * L_23 = V_0;
		Il2CppChar L_24 = V_1;
		NullCheck(L_23);
		StringBuilder_Append_m2383614642(L_23, L_24, /*hidden argument*/NULL);
		goto IL_0163;
	}

IL_00ea:
	{
		StringBuilder_t * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_Append_m2383614642(L_25, 8, /*hidden argument*/NULL);
		goto IL_0163;
	}

IL_00f4:
	{
		StringBuilder_t * L_26 = V_0;
		NullCheck(L_26);
		StringBuilder_Append_m2383614642(L_26, ((int32_t)12), /*hidden argument*/NULL);
		goto IL_0163;
	}

IL_00ff:
	{
		StringBuilder_t * L_27 = V_0;
		NullCheck(L_27);
		StringBuilder_Append_m2383614642(L_27, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_0163;
	}

IL_010a:
	{
		StringBuilder_t * L_28 = V_0;
		NullCheck(L_28);
		StringBuilder_Append_m2383614642(L_28, ((int32_t)13), /*hidden argument*/NULL);
		goto IL_0163;
	}

IL_0115:
	{
		StringBuilder_t * L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_Append_m2383614642(L_29, ((int32_t)9), /*hidden argument*/NULL);
		goto IL_0163;
	}

IL_0120:
	{
		V_7 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)4));
		V_8 = 0;
		goto IL_0140;
	}

IL_012d:
	{
		CharU5BU5D_t3528271667* L_30 = V_7;
		int32_t L_31 = V_8;
		Il2CppChar L_32 = Parser_get_NextChar_m459984253(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (Il2CppChar)L_32);
		int32_t L_33 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_0140:
	{
		int32_t L_34 = V_8;
		V_9 = (bool)((((int32_t)L_34) < ((int32_t)4))? 1 : 0);
		bool L_35 = V_9;
		if (L_35)
		{
			goto IL_012d;
		}
	}
	{
		StringBuilder_t * L_36 = V_0;
		CharU5BU5D_t3528271667* L_37 = V_7;
		String_t* L_38 = String_CreateString_m2818852475(NULL, L_37, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_39 = Convert_ToInt32_m391894676(NULL /*static, unused*/, L_38, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_36);
		StringBuilder_Append_m2383614642(L_36, (((int32_t)((uint16_t)L_39))), /*hidden argument*/NULL);
		goto IL_0163;
	}

IL_0163:
	{
		goto IL_016f;
	}

IL_0165:
	{
		StringBuilder_t * L_40 = V_0;
		Il2CppChar L_41 = V_1;
		NullCheck(L_40);
		StringBuilder_Append_m2383614642(L_40, L_41, /*hidden argument*/NULL);
		goto IL_016f;
	}

IL_016f:
	{
	}

IL_0170:
	{
		bool L_42 = V_2;
		V_10 = L_42;
		bool L_43 = V_10;
		if (L_43)
		{
			goto IL_001a;
		}
	}

IL_017a:
	{
		StringBuilder_t * L_44 = V_0;
		NullCheck(L_44);
		String_t* L_45 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_44);
		V_11 = L_45;
		goto IL_0184;
	}

IL_0184:
	{
		String_t* L_46 = V_11;
		return L_46;
	}
}
// System.Object UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseNumber()
extern "C"  RuntimeObject * Parser_ParseNumber_m3013742477 (Parser_t4254629878 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseNumber_m3013742477_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	double V_1 = 0.0;
	bool V_2 = false;
	int64_t V_3 = 0;
	RuntimeObject * V_4 = NULL;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = Parser_get_NextWord_m3610147638(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = String_IndexOf_m363431711(L_1, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = String_IndexOf_m363431711(L_3, ((int32_t)101), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = String_IndexOf_m363431711(L_5, ((int32_t)69), /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0);
		goto IL_002c;
	}

IL_002b:
	{
		G_B4_0 = 0;
	}

IL_002c:
	{
		V_2 = (bool)G_B4_0;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_9 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		Int64_TryParse_m3606398488(NULL /*static, unused*/, L_8, ((int32_t)511), L_9, (&V_3), /*hidden argument*/NULL);
		int64_t L_10 = V_3;
		int64_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_11);
		V_4 = L_12;
		goto IL_006b;
	}

IL_004e:
	{
		String_t* L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_14 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		Double_TryParse_m623190659(NULL /*static, unused*/, L_13, ((int32_t)511), L_14, (&V_1), /*hidden argument*/NULL);
		double L_15 = V_1;
		double L_16 = L_15;
		RuntimeObject * L_17 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_16);
		V_4 = L_17;
		goto IL_006b;
	}

IL_006b:
	{
		RuntimeObject * L_18 = V_4;
		return L_18;
	}
}
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Parser::EatWhitespace()
extern "C"  void Parser_EatWhitespace_m1896757020 (Parser_t4254629878 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_EatWhitespace_m1896757020_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		goto IL_0026;
	}

IL_0003:
	{
		StringReader_t3465604688 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		StringReader_t3465604688 * L_1 = __this->get_json_0();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Peek() */, L_1);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		goto IL_0035;
	}

IL_0025:
	{
	}

IL_0026:
	{
		Il2CppChar L_4 = Parser_get_PeekChar_m3225474584(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_5 = Char_IsWhiteSpace_m2148390798(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (L_6)
		{
			goto IL_0003;
		}
	}

IL_0035:
	{
		return;
	}
}
// System.Char UnityEngine.Purchasing.MiniJSON.Json/Parser::get_PeekChar()
extern "C"  Il2CppChar Parser_get_PeekChar_m3225474584 (Parser_t4254629878 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_PeekChar_m3225474584_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		StringReader_t3465604688 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Il2CppChar L_2 = Convert_ToChar_m4189066566(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Il2CppChar L_3 = V_0;
		return L_3;
	}
}
// System.Char UnityEngine.Purchasing.MiniJSON.Json/Parser::get_NextChar()
extern "C"  Il2CppChar Parser_get_NextChar_m459984253 (Parser_t4254629878 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_NextChar_m459984253_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		StringReader_t3465604688 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Il2CppChar L_2 = Convert_ToChar_m4189066566(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Il2CppChar L_3 = V_0;
		return L_3;
	}
}
// System.String UnityEngine.Purchasing.MiniJSON.Json/Parser::get_NextWord()
extern "C"  String_t* Parser_get_NextWord_m3610147638 (Parser_t4254629878 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_NextWord_m3610147638_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	String_t* V_3 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_002d;
	}

IL_0009:
	{
		StringBuilder_t * L_1 = V_0;
		Il2CppChar L_2 = Parser_get_NextChar_m459984253(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_m2383614642(L_1, L_2, /*hidden argument*/NULL);
		StringReader_t3465604688 * L_3 = __this->get_json_0();
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Peek() */, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_003f;
	}

IL_002c:
	{
	}

IL_002d:
	{
		Il2CppChar L_6 = Parser_get_PeekChar_m3225474584(__this, /*hidden argument*/NULL);
		bool L_7 = Parser_IsWordBreak_m3507966501(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_0009;
		}
	}

IL_003f:
	{
		StringBuilder_t * L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		V_3 = L_10;
		goto IL_0048;
	}

IL_0048:
	{
		String_t* L_11 = V_3;
		return L_11;
	}
}
// UnityEngine.Purchasing.MiniJSON.Json/Parser/TOKEN UnityEngine.Purchasing.MiniJSON.Json/Parser::get_NextToken()
extern "C"  int32_t Parser_get_NextToken_m1975389542 (Parser_t4254629878 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_NextToken_m1975389542_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	String_t* V_3 = NULL;
	{
		Parser_EatWhitespace_m1896757020(__this, /*hidden argument*/NULL);
		StringReader_t3465604688 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		V_1 = 0;
		goto IL_0143;
	}

IL_0022:
	{
		Il2CppChar L_3 = Parser_get_PeekChar_m3225474584(__this, /*hidden argument*/NULL);
		V_2 = L_3;
		Il2CppChar L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)91)))))
		{
			goto IL_00a4;
		}
	}
	{
		Il2CppChar L_5 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)34))))
		{
			case 0:
			{
				goto IL_00f4;
			}
			case 1:
			{
				goto IL_0100;
			}
			case 2:
			{
				goto IL_0100;
			}
			case 3:
			{
				goto IL_0100;
			}
			case 4:
			{
				goto IL_0100;
			}
			case 5:
			{
				goto IL_0100;
			}
			case 6:
			{
				goto IL_0100;
			}
			case 7:
			{
				goto IL_0100;
			}
			case 8:
			{
				goto IL_0100;
			}
			case 9:
			{
				goto IL_0100;
			}
			case 10:
			{
				goto IL_00e4;
			}
			case 11:
			{
				goto IL_00fc;
			}
			case 12:
			{
				goto IL_0100;
			}
			case 13:
			{
				goto IL_0100;
			}
			case 14:
			{
				goto IL_00fc;
			}
			case 15:
			{
				goto IL_00fc;
			}
			case 16:
			{
				goto IL_00fc;
			}
			case 17:
			{
				goto IL_00fc;
			}
			case 18:
			{
				goto IL_00fc;
			}
			case 19:
			{
				goto IL_00fc;
			}
			case 20:
			{
				goto IL_00fc;
			}
			case 21:
			{
				goto IL_00fc;
			}
			case 22:
			{
				goto IL_00fc;
			}
			case 23:
			{
				goto IL_00fc;
			}
			case 24:
			{
				goto IL_00f8;
			}
		}
	}
	{
		goto IL_009d;
	}

IL_009d:
	{
		Il2CppChar L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)91))))
		{
			goto IL_00d0;
		}
	}
	{
		goto IL_0100;
	}

IL_00a4:
	{
		Il2CppChar L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)93))))
		{
			goto IL_00d4;
		}
	}
	{
		goto IL_00ab;
	}

IL_00ab:
	{
		Il2CppChar L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)123))))
		{
			goto IL_00b9;
		}
	}
	{
		goto IL_00b2;
	}

IL_00b2:
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)125))))
		{
			goto IL_00c0;
		}
	}
	{
		goto IL_0100;
	}

IL_00b9:
	{
		V_1 = 1;
		goto IL_0143;
	}

IL_00c0:
	{
		StringReader_t3465604688 * L_10 = __this->get_json_0();
		NullCheck(L_10);
		VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Read() */, L_10);
		V_1 = 2;
		goto IL_0143;
	}

IL_00d0:
	{
		V_1 = 3;
		goto IL_0143;
	}

IL_00d4:
	{
		StringReader_t3465604688 * L_11 = __this->get_json_0();
		NullCheck(L_11);
		VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Read() */, L_11);
		V_1 = 4;
		goto IL_0143;
	}

IL_00e4:
	{
		StringReader_t3465604688 * L_12 = __this->get_json_0();
		NullCheck(L_12);
		VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Read() */, L_12);
		V_1 = 6;
		goto IL_0143;
	}

IL_00f4:
	{
		V_1 = 7;
		goto IL_0143;
	}

IL_00f8:
	{
		V_1 = 5;
		goto IL_0143;
	}

IL_00fc:
	{
		V_1 = 8;
		goto IL_0143;
	}

IL_0100:
	{
		String_t* L_13 = Parser_get_NextWord_m3610147638(__this, /*hidden argument*/NULL);
		V_3 = L_13;
		String_t* L_14 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_15 = String_op_Equality_m920492651(NULL /*static, unused*/, L_14, _stringLiteral3875954633, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0130;
		}
	}
	{
		String_t* L_16 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_17 = String_op_Equality_m920492651(NULL /*static, unused*/, L_16, _stringLiteral4002445229, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0135;
		}
	}
	{
		String_t* L_18 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_op_Equality_m920492651(NULL /*static, unused*/, L_18, _stringLiteral1202628576, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_013a;
		}
	}
	{
		goto IL_013f;
	}

IL_0130:
	{
		V_1 = ((int32_t)10);
		goto IL_0143;
	}

IL_0135:
	{
		V_1 = ((int32_t)9);
		goto IL_0143;
	}

IL_013a:
	{
		V_1 = ((int32_t)11);
		goto IL_0143;
	}

IL_013f:
	{
		V_1 = 0;
		goto IL_0143;
	}

IL_0143:
	{
		int32_t L_20 = V_1;
		return L_20;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::.ctor()
extern "C"  void Serializer__ctor_m4012197733 (Serializer_t2325318676 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer__ctor_m4012197733_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		__this->set_builder_0(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.MiniJSON.Json/Serializer::Serialize(System.Object)
extern "C"  String_t* Serializer_Serialize_m2764544081 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_Serialize_m2764544081_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Serializer_t2325318676 * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		Serializer_t2325318676 * L_0 = (Serializer_t2325318676 *)il2cpp_codegen_object_new(Serializer_t2325318676_il2cpp_TypeInfo_var);
		Serializer__ctor_m4012197733(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Serializer_t2325318676 * L_1 = V_0;
		RuntimeObject * L_2 = ___obj0;
		NullCheck(L_1);
		Serializer_SerializeValue_m4126677736(L_1, L_2, /*hidden argument*/NULL);
		Serializer_t2325318676 * L_3 = V_0;
		NullCheck(L_3);
		StringBuilder_t * L_4 = L_3->get_builder_0();
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		V_1 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		String_t* L_6 = V_1;
		return L_6;
	}
}
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::SerializeValue(System.Object)
extern "C"  void Serializer_SerializeValue_m4126677736 (Serializer_t2325318676 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeValue_m4126677736_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	StringBuilder_t * G_B7_0 = NULL;
	StringBuilder_t * G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	StringBuilder_t * G_B8_1 = NULL;
	{
		RuntimeObject * L_0 = ___value0;
		V_3 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		StringBuilder_t * L_2 = __this->get_builder_0();
		NullCheck(L_2);
		StringBuilder_Append_m1965104174(L_2, _stringLiteral1202628576, /*hidden argument*/NULL);
		goto IL_00de;
	}

IL_0021:
	{
		RuntimeObject * L_3 = ___value0;
		String_t* L_4 = ((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var));
		V_2 = L_4;
		V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_6 = V_2;
		Serializer_SerializeString_m400586247(__this, L_6, /*hidden argument*/NULL);
		goto IL_00de;
	}

IL_0041:
	{
		RuntimeObject * L_7 = ___value0;
		V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_7, Boolean_t97287965_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_8 = V_5;
		if (!L_8)
		{
			goto IL_0074;
		}
	}
	{
		StringBuilder_t * L_9 = __this->get_builder_0();
		RuntimeObject * L_10 = ___value0;
		G_B6_0 = L_9;
		if (((*(bool*)((bool*)UnBox(L_10, Boolean_t97287965_il2cpp_TypeInfo_var)))))
		{
			G_B7_0 = L_9;
			goto IL_0066;
		}
	}
	{
		G_B8_0 = _stringLiteral3875954633;
		G_B8_1 = G_B6_0;
		goto IL_006b;
	}

IL_0066:
	{
		G_B8_0 = _stringLiteral4002445229;
		G_B8_1 = G_B7_0;
	}

IL_006b:
	{
		NullCheck(G_B8_1);
		StringBuilder_Append_m1965104174(G_B8_1, G_B8_0, /*hidden argument*/NULL);
		goto IL_00de;
	}

IL_0074:
	{
		RuntimeObject * L_11 = ___value0;
		RuntimeObject* L_12 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IList_t2094931216_il2cpp_TypeInfo_var));
		V_0 = L_12;
		V_6 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_12) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_13 = V_6;
		if (!L_13)
		{
			goto IL_0091;
		}
	}
	{
		RuntimeObject* L_14 = V_0;
		Serializer_SerializeArray_m2095104269(__this, L_14, /*hidden argument*/NULL);
		goto IL_00de;
	}

IL_0091:
	{
		RuntimeObject * L_15 = ___value0;
		RuntimeObject* L_16 = ((RuntimeObject*)IsInst((RuntimeObject*)L_15, IDictionary_t1363984059_il2cpp_TypeInfo_var));
		V_1 = L_16;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_17 = V_7;
		if (!L_17)
		{
			goto IL_00ae;
		}
	}
	{
		RuntimeObject* L_18 = V_1;
		Serializer_SerializeObject_m588325234(__this, L_18, /*hidden argument*/NULL);
		goto IL_00de;
	}

IL_00ae:
	{
		RuntimeObject * L_19 = ___value0;
		V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_19, Char_t3634460470_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_20 = V_8;
		if (!L_20)
		{
			goto IL_00d4;
		}
	}
	{
		RuntimeObject * L_21 = ___value0;
		String_t* L_22 = String_CreateString_m1262864254(NULL, ((*(Il2CppChar*)((Il2CppChar*)UnBox(L_21, Char_t3634460470_il2cpp_TypeInfo_var)))), 1, /*hidden argument*/NULL);
		Serializer_SerializeString_m400586247(__this, L_22, /*hidden argument*/NULL);
		goto IL_00de;
	}

IL_00d4:
	{
		RuntimeObject * L_23 = ___value0;
		Serializer_SerializeOther_m94806937(__this, L_23, /*hidden argument*/NULL);
	}

IL_00de:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
extern "C"  void Serializer_SerializeObject_m588325234 (Serializer_t2325318676 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeObject_m588325234_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)1;
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m2383614642(L_0, ((int32_t)123), /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___obj0;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t1363984059_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006c;
		}

IL_0020:
		{
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			RuntimeObject * L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_4);
			V_2 = L_5;
			bool L_6 = V_0;
			V_3 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
			bool L_7 = V_3;
			if (!L_7)
			{
				goto IL_0040;
			}
		}

IL_0030:
		{
			StringBuilder_t * L_8 = __this->get_builder_0();
			NullCheck(L_8);
			StringBuilder_Append_m2383614642(L_8, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0040:
		{
			RuntimeObject * L_9 = V_2;
			NullCheck(L_9);
			String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
			Serializer_SerializeString_m400586247(__this, L_10, /*hidden argument*/NULL);
			StringBuilder_t * L_11 = __this->get_builder_0();
			NullCheck(L_11);
			StringBuilder_Append_m2383614642(L_11, ((int32_t)58), /*hidden argument*/NULL);
			RuntimeObject* L_12 = ___obj0;
			RuntimeObject * L_13 = V_2;
			NullCheck(L_12);
			RuntimeObject * L_14 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t1363984059_il2cpp_TypeInfo_var, L_12, L_13);
			Serializer_SerializeValue_m4126677736(__this, L_14, /*hidden argument*/NULL);
			V_0 = (bool)0;
		}

IL_006c:
		{
			RuntimeObject* L_15 = V_1;
			NullCheck(L_15);
			bool L_16 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_15);
			if (L_16)
			{
				goto IL_0020;
			}
		}

IL_0074:
		{
			IL2CPP_LEAVE(0x8B, FINALLY_0076);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0076;
	}

FINALLY_0076:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_17 = V_1;
			V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_18 = V_4;
			if (!L_18)
			{
				goto IL_008a;
			}
		}

IL_0082:
		{
			RuntimeObject* L_19 = V_4;
			NullCheck(L_19);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_19);
		}

IL_008a:
		{
			IL2CPP_END_FINALLY(118)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(118)
	{
		IL2CPP_JUMP_TBL(0x8B, IL_008b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008b:
	{
		StringBuilder_t * L_20 = __this->get_builder_0();
		NullCheck(L_20);
		StringBuilder_Append_m2383614642(L_20, ((int32_t)125), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
extern "C"  void Serializer_SerializeArray_m2095104269 (Serializer_t2325318676 * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeArray_m2095104269_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m2383614642(L_0, ((int32_t)91), /*hidden argument*/NULL);
		V_0 = (bool)1;
		RuntimeObject* L_1 = ___anArray0;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0046;
		}

IL_001b:
		{
			RuntimeObject* L_3 = V_1;
			NullCheck(L_3);
			RuntimeObject * L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_3);
			V_2 = L_4;
			bool L_5 = V_0;
			V_3 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
			bool L_6 = V_3;
			if (!L_6)
			{
				goto IL_003b;
			}
		}

IL_002b:
		{
			StringBuilder_t * L_7 = __this->get_builder_0();
			NullCheck(L_7);
			StringBuilder_Append_m2383614642(L_7, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_003b:
		{
			RuntimeObject * L_8 = V_2;
			Serializer_SerializeValue_m4126677736(__this, L_8, /*hidden argument*/NULL);
			V_0 = (bool)0;
		}

IL_0046:
		{
			RuntimeObject* L_9 = V_1;
			NullCheck(L_9);
			bool L_10 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_9);
			if (L_10)
			{
				goto IL_001b;
			}
		}

IL_004e:
		{
			IL2CPP_LEAVE(0x65, FINALLY_0050);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_11 = V_1;
			V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_12 = V_4;
			if (!L_12)
			{
				goto IL_0064;
			}
		}

IL_005c:
		{
			RuntimeObject* L_13 = V_4;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_13);
		}

IL_0064:
		{
			IL2CPP_END_FINALLY(80)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_JUMP_TBL(0x65, IL_0065)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0065:
	{
		StringBuilder_t * L_14 = __this->get_builder_0();
		NullCheck(L_14);
		StringBuilder_Append_m2383614642(L_14, ((int32_t)93), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::SerializeString(System.String)
extern "C"  void Serializer_SerializeString_m400586247 (Serializer_t2325318676 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeString_m400586247_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t3528271667* V_0 = NULL;
	CharU5BU5D_t3528271667* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	Il2CppChar V_4 = 0x0;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t G_B17_0 = 0;
	{
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m2383614642(L_0, ((int32_t)34), /*hidden argument*/NULL);
		String_t* L_1 = ___str0;
		NullCheck(L_1);
		CharU5BU5D_t3528271667* L_2 = String_ToCharArray_m1492846834(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		CharU5BU5D_t3528271667* L_3 = V_0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_0155;
	}

IL_0020:
	{
		CharU5BU5D_t3528271667* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		Il2CppChar L_8 = V_3;
		V_4 = L_8;
		Il2CppChar L_9 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)8)))
		{
			case 0:
			{
				goto IL_008a;
			}
			case 1:
			{
				goto IL_00df;
			}
			case 2:
			{
				goto IL_00b6;
			}
			case 3:
			{
				goto IL_00f2;
			}
			case 4:
			{
				goto IL_00a0;
			}
			case 5:
			{
				goto IL_00cc;
			}
		}
	}
	{
		goto IL_004b;
	}

IL_004b:
	{
		Il2CppChar L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)34))))
		{
			goto IL_005e;
		}
	}
	{
		goto IL_0053;
	}

IL_0053:
	{
		Il2CppChar L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)92))))
		{
			goto IL_0074;
		}
	}
	{
		goto IL_00f2;
	}

IL_005e:
	{
		StringBuilder_t * L_12 = __this->get_builder_0();
		NullCheck(L_12);
		StringBuilder_Append_m1965104174(L_12, _stringLiteral3450386420, /*hidden argument*/NULL);
		goto IL_0150;
	}

IL_0074:
	{
		StringBuilder_t * L_13 = __this->get_builder_0();
		NullCheck(L_13);
		StringBuilder_Append_m1965104174(L_13, _stringLiteral3458119668, /*hidden argument*/NULL);
		goto IL_0150;
	}

IL_008a:
	{
		StringBuilder_t * L_14 = __this->get_builder_0();
		NullCheck(L_14);
		StringBuilder_Append_m1965104174(L_14, _stringLiteral3454580724, /*hidden argument*/NULL);
		goto IL_0150;
	}

IL_00a0:
	{
		StringBuilder_t * L_15 = __this->get_builder_0();
		NullCheck(L_15);
		StringBuilder_Append_m1965104174(L_15, _stringLiteral3454318580, /*hidden argument*/NULL);
		goto IL_0150;
	}

IL_00b6:
	{
		StringBuilder_t * L_16 = __this->get_builder_0();
		NullCheck(L_16);
		StringBuilder_Append_m1965104174(L_16, _stringLiteral3454842868, /*hidden argument*/NULL);
		goto IL_0150;
	}

IL_00cc:
	{
		StringBuilder_t * L_17 = __this->get_builder_0();
		NullCheck(L_17);
		StringBuilder_Append_m1965104174(L_17, _stringLiteral3455629300, /*hidden argument*/NULL);
		goto IL_0150;
	}

IL_00df:
	{
		StringBuilder_t * L_18 = __this->get_builder_0();
		NullCheck(L_18);
		StringBuilder_Append_m1965104174(L_18, _stringLiteral3455498228, /*hidden argument*/NULL);
		goto IL_0150;
	}

IL_00f2:
	{
		Il2CppChar L_19 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_20 = Convert_ToInt32_m1876369743(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		V_5 = L_20;
		int32_t L_21 = V_5;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)32))))
		{
			goto IL_010b;
		}
	}
	{
		int32_t L_22 = V_5;
		G_B17_0 = ((((int32_t)((((int32_t)L_22) > ((int32_t)((int32_t)126)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_010c;
	}

IL_010b:
	{
		G_B17_0 = 0;
	}

IL_010c:
	{
		V_6 = (bool)G_B17_0;
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_0123;
		}
	}
	{
		StringBuilder_t * L_24 = __this->get_builder_0();
		Il2CppChar L_25 = V_3;
		NullCheck(L_24);
		StringBuilder_Append_m2383614642(L_24, L_25, /*hidden argument*/NULL);
		goto IL_014e;
	}

IL_0123:
	{
		StringBuilder_t * L_26 = __this->get_builder_0();
		NullCheck(L_26);
		StringBuilder_Append_m1965104174(L_26, _stringLiteral3455432692, /*hidden argument*/NULL);
		StringBuilder_t * L_27 = __this->get_builder_0();
		String_t* L_28 = Int32_ToString_m372259452((&V_5), _stringLiteral3451303896, /*hidden argument*/NULL);
		NullCheck(L_27);
		StringBuilder_Append_m1965104174(L_27, L_28, /*hidden argument*/NULL);
	}

IL_014e:
	{
		goto IL_0150;
	}

IL_0150:
	{
		int32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_0155:
	{
		int32_t L_30 = V_2;
		CharU5BU5D_t3528271667* L_31 = V_1;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_31)->max_length)))))))
		{
			goto IL_0020;
		}
	}
	{
		StringBuilder_t * L_32 = __this->get_builder_0();
		NullCheck(L_32);
		StringBuilder_Append_m2383614642(L_32, ((int32_t)34), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::SerializeOther(System.Object)
extern "C"  void Serializer_SerializeOther_m94806937 (Serializer_t2325318676 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeOther_m94806937_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	double V_4 = 0.0;
	int32_t G_B11_0 = 0;
	int32_t G_B16_0 = 0;
	{
		RuntimeObject * L_0 = ___value0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Single_t1397266774_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		StringBuilder_t * L_2 = __this->get_builder_0();
		RuntimeObject * L_3 = ___value0;
		V_1 = ((*(float*)((float*)UnBox(L_3, Single_t1397266774_il2cpp_TypeInfo_var))));
		String_t* L_4 = Single_ToString_m3489843083((&V_1), _stringLiteral3452614638, /*hidden argument*/NULL);
		NullCheck(L_2);
		StringBuilder_Append_m1965104174(L_2, L_4, /*hidden argument*/NULL);
		goto IL_00d8;
	}

IL_0034:
	{
		RuntimeObject * L_5 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, Int32_t2950945753_il2cpp_TypeInfo_var)))
		{
			goto IL_0077;
		}
	}
	{
		RuntimeObject * L_6 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, UInt32_t2560061978_il2cpp_TypeInfo_var)))
		{
			goto IL_0077;
		}
	}
	{
		RuntimeObject * L_7 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_7, Int64_t3736567304_il2cpp_TypeInfo_var)))
		{
			goto IL_0077;
		}
	}
	{
		RuntimeObject * L_8 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_8, SByte_t1669577662_il2cpp_TypeInfo_var)))
		{
			goto IL_0077;
		}
	}
	{
		RuntimeObject * L_9 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_9, Byte_t1134296376_il2cpp_TypeInfo_var)))
		{
			goto IL_0077;
		}
	}
	{
		RuntimeObject * L_10 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_10, Int16_t2552820387_il2cpp_TypeInfo_var)))
		{
			goto IL_0077;
		}
	}
	{
		RuntimeObject * L_11 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_11, UInt16_t2177724958_il2cpp_TypeInfo_var)))
		{
			goto IL_0077;
		}
	}
	{
		RuntimeObject * L_12 = ___value0;
		G_B11_0 = ((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_12, UInt64_t4134040092_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0078;
	}

IL_0077:
	{
		G_B11_0 = 1;
	}

IL_0078:
	{
		V_2 = (bool)G_B11_0;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_008d;
		}
	}
	{
		StringBuilder_t * L_14 = __this->get_builder_0();
		RuntimeObject * L_15 = ___value0;
		NullCheck(L_14);
		StringBuilder_Append_m1640838743(L_14, L_15, /*hidden argument*/NULL);
		goto IL_00d8;
	}

IL_008d:
	{
		RuntimeObject * L_16 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_16, Double_t594665363_il2cpp_TypeInfo_var)))
		{
			goto IL_00a0;
		}
	}
	{
		RuntimeObject * L_17 = ___value0;
		G_B16_0 = ((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_17, Decimal_t2948259380_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_00a1;
	}

IL_00a0:
	{
		G_B16_0 = 1;
	}

IL_00a1:
	{
		V_3 = (bool)G_B16_0;
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_00c9;
		}
	}
	{
		StringBuilder_t * L_19 = __this->get_builder_0();
		RuntimeObject * L_20 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		double L_21 = Convert_ToDouble_m4025515304(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		V_4 = L_21;
		String_t* L_22 = Double_ToString_m896573572((&V_4), _stringLiteral3452614638, /*hidden argument*/NULL);
		NullCheck(L_19);
		StringBuilder_Append_m1965104174(L_19, L_22, /*hidden argument*/NULL);
		goto IL_00d8;
	}

IL_00c9:
	{
		RuntimeObject * L_23 = ___value0;
		NullCheck(L_23);
		String_t* L_24 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
		Serializer_SerializeString_m400586247(__this, L_24, /*hidden argument*/NULL);
	}

IL_00d8:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::GetString(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,System.String)
extern "C"  String_t* MiniJsonExtensions_GetString_m1131042189 (RuntimeObject * __this /* static, unused */, Dictionary_2_t2865362463 * ___dic0, String_t* ___key1, String_t* ___defaultValue2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MiniJsonExtensions_GetString_m1131042189_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		Dictionary_2_t2865362463 * L_0 = ___dic0;
		String_t* L_1 = ___key1;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m87616083(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m87616083_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		Dictionary_2_t2865362463 * L_4 = ___dic0;
		String_t* L_5 = ___key1;
		NullCheck(L_4);
		RuntimeObject * L_6 = Dictionary_2_get_Item_m3008302402(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m3008302402_RuntimeMethod_var);
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		V_1 = L_7;
		goto IL_001f;
	}

IL_001b:
	{
		String_t* L_8 = ___defaultValue2;
		V_1 = L_8;
		goto IL_001f;
	}

IL_001f:
	{
		String_t* L_9 = V_1;
		return L_9;
	}
}
// System.String UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::toJson(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  String_t* MiniJsonExtensions_toJson_m2438466869 (RuntimeObject * __this /* static, unused */, Dictionary_2_t2865362463 * ___obj0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		Dictionary_2_t2865362463 * L_0 = ___obj0;
		String_t* L_1 = MiniJson_JsonEncode_m4232126612(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::HashtableFromJson(System.String)
extern "C"  Dictionary_2_t2865362463 * MiniJsonExtensions_HashtableFromJson_m192055464 (RuntimeObject * __this /* static, unused */, String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MiniJsonExtensions_HashtableFromJson_m192055464_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t2865362463 * V_0 = NULL;
	{
		String_t* L_0 = ___json0;
		RuntimeObject * L_1 = MiniJson_JsonDecode_m1204021123(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t2865362463 *)IsInstClass((RuntimeObject*)L_1, Dictionary_2_t2865362463_il2cpp_TypeInfo_var));
		goto IL_000f;
	}

IL_000f:
	{
		Dictionary_2_t2865362463 * L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_UnityPurchasingCallback_t953216184 (UnityPurchasingCallback_t953216184 * __this, String_t* ___subject0, String_t* ___payload1, String_t* ___receipt2, String_t* ___transactionId3, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(char*, char*, char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___subject0' to native representation
	char* ____subject0_marshaled = NULL;
	____subject0_marshaled = il2cpp_codegen_marshal_string(___subject0);

	// Marshaling of parameter '___payload1' to native representation
	char* ____payload1_marshaled = NULL;
	____payload1_marshaled = il2cpp_codegen_marshal_string(___payload1);

	// Marshaling of parameter '___receipt2' to native representation
	char* ____receipt2_marshaled = NULL;
	____receipt2_marshaled = il2cpp_codegen_marshal_string(___receipt2);

	// Marshaling of parameter '___transactionId3' to native representation
	char* ____transactionId3_marshaled = NULL;
	____transactionId3_marshaled = il2cpp_codegen_marshal_string(___transactionId3);

	// Native function invocation
	il2cppPInvokeFunc(____subject0_marshaled, ____payload1_marshaled, ____receipt2_marshaled, ____transactionId3_marshaled);

	// Marshaling cleanup of parameter '___subject0' native representation
	il2cpp_codegen_marshal_free(____subject0_marshaled);
	____subject0_marshaled = NULL;

	// Marshaling cleanup of parameter '___payload1' native representation
	il2cpp_codegen_marshal_free(____payload1_marshaled);
	____payload1_marshaled = NULL;

	// Marshaling cleanup of parameter '___receipt2' native representation
	il2cpp_codegen_marshal_free(____receipt2_marshaled);
	____receipt2_marshaled = NULL;

	// Marshaling cleanup of parameter '___transactionId3' native representation
	il2cpp_codegen_marshal_free(____transactionId3_marshaled);
	____transactionId3_marshaled = NULL;

}
// System.Void UnityEngine.Purchasing.UnityPurchasingCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityPurchasingCallback__ctor_m925918397 (UnityPurchasingCallback_t953216184 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Purchasing.UnityPurchasingCallback::Invoke(System.String,System.String,System.String,System.String)
extern "C"  void UnityPurchasingCallback_Invoke_m376366797 (UnityPurchasingCallback_t953216184 * __this, String_t* ___subject0, String_t* ___payload1, String_t* ___receipt2, String_t* ___transactionId3, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityPurchasingCallback_Invoke_m376366797((UnityPurchasingCallback_t953216184 *)__this->get_prev_9(), ___subject0, ___payload1, ___receipt2, ___transactionId3, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 4)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___subject0, ___payload1, ___receipt2, ___transactionId3, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___subject0, ___payload1, ___receipt2, ___transactionId3, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 4)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< String_t*, String_t*, String_t*, String_t* >::Invoke(targetMethod, targetThis, ___subject0, ___payload1, ___receipt2, ___transactionId3);
					else
						GenericVirtActionInvoker4< String_t*, String_t*, String_t*, String_t* >::Invoke(targetMethod, targetThis, ___subject0, ___payload1, ___receipt2, ___transactionId3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< String_t*, String_t*, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___subject0, ___payload1, ___receipt2, ___transactionId3);
					else
						VirtActionInvoker4< String_t*, String_t*, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___subject0, ___payload1, ___receipt2, ___transactionId3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___subject0, ___payload1, ___receipt2, ___transactionId3, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< String_t*, String_t*, String_t* >::Invoke(targetMethod, ___subject0, ___payload1, ___receipt2, ___transactionId3);
					else
						GenericVirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(targetMethod, ___subject0, ___payload1, ___receipt2, ___transactionId3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< String_t*, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___subject0, ___payload1, ___receipt2, ___transactionId3);
					else
						VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___subject0, ___payload1, ___receipt2, ___transactionId3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___subject0, ___payload1, ___receipt2, ___transactionId3, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Purchasing.UnityPurchasingCallback::BeginInvoke(System.String,System.String,System.String,System.String,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* UnityPurchasingCallback_BeginInvoke_m3876554379 (UnityPurchasingCallback_t953216184 * __this, String_t* ___subject0, String_t* ___payload1, String_t* ___receipt2, String_t* ___transactionId3, AsyncCallback_t3962456242 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___subject0;
	__d_args[1] = ___payload1;
	__d_args[2] = ___receipt2;
	__d_args[3] = ___transactionId3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void UnityEngine.Purchasing.UnityPurchasingCallback::EndInvoke(System.IAsyncResult)
extern "C"  void UnityPurchasingCallback_EndInvoke_m1141153032 (UnityPurchasingCallback_t953216184 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
