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


// UnityEngine.Purchasing.Default.IWindowsIAP
struct IWindowsIAP_t4053602182;
// System.NotImplementedException
struct NotImplementedException_t3489357830;
// UnityEngine.Purchasing.Default.WinProductDescription
struct WinProductDescription_t2080881907;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;

extern RuntimeClass* NotImplementedException_t3489357830_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Factory_Create_m2211217853_RuntimeMethod_var;
extern const uint32_t Factory_Create_m2211217853_MetadataUsageId;



#ifndef U3CMODULEU3E_T692745560_H
#define U3CMODULEU3E_T692745560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745560 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745560_H
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
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef FACTORY_T3975828591_H
#define FACTORY_T3975828591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Default.Factory
struct  Factory_t3975828591  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FACTORY_T3975828591_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
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
#ifndef NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#define NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t3489357830  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifndef WINPRODUCTDESCRIPTION_T2080881907_H
#define WINPRODUCTDESCRIPTION_T2080881907_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Default.WinProductDescription
struct  WinProductDescription_t2080881907  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<platformSpecificID>k__BackingField
	String_t* ___U3CplatformSpecificIDU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<price>k__BackingField
	String_t* ___U3CpriceU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<title>k__BackingField
	String_t* ___U3CtitleU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<description>k__BackingField
	String_t* ___U3CdescriptionU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<ISOCurrencyCode>k__BackingField
	String_t* ___U3CISOCurrencyCodeU3Ek__BackingField_4;
	// System.Decimal UnityEngine.Purchasing.Default.WinProductDescription::<priceDecimal>k__BackingField
	Decimal_t2948259380  ___U3CpriceDecimalU3Ek__BackingField_5;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<receipt>k__BackingField
	String_t* ___U3CreceiptU3Ek__BackingField_6;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<transactionID>k__BackingField
	String_t* ___U3CtransactionIDU3Ek__BackingField_7;
	// System.Boolean UnityEngine.Purchasing.Default.WinProductDescription::<consumable>k__BackingField
	bool ___U3CconsumableU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CplatformSpecificIDU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WinProductDescription_t2080881907, ___U3CplatformSpecificIDU3Ek__BackingField_0)); }
	inline String_t* get_U3CplatformSpecificIDU3Ek__BackingField_0() const { return ___U3CplatformSpecificIDU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CplatformSpecificIDU3Ek__BackingField_0() { return &___U3CplatformSpecificIDU3Ek__BackingField_0; }
	inline void set_U3CplatformSpecificIDU3Ek__BackingField_0(String_t* value)
	{
		___U3CplatformSpecificIDU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CplatformSpecificIDU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CpriceU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WinProductDescription_t2080881907, ___U3CpriceU3Ek__BackingField_1)); }
	inline String_t* get_U3CpriceU3Ek__BackingField_1() const { return ___U3CpriceU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CpriceU3Ek__BackingField_1() { return &___U3CpriceU3Ek__BackingField_1; }
	inline void set_U3CpriceU3Ek__BackingField_1(String_t* value)
	{
		___U3CpriceU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpriceU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CtitleU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(WinProductDescription_t2080881907, ___U3CtitleU3Ek__BackingField_2)); }
	inline String_t* get_U3CtitleU3Ek__BackingField_2() const { return ___U3CtitleU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CtitleU3Ek__BackingField_2() { return &___U3CtitleU3Ek__BackingField_2; }
	inline void set_U3CtitleU3Ek__BackingField_2(String_t* value)
	{
		___U3CtitleU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtitleU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CdescriptionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(WinProductDescription_t2080881907, ___U3CdescriptionU3Ek__BackingField_3)); }
	inline String_t* get_U3CdescriptionU3Ek__BackingField_3() const { return ___U3CdescriptionU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CdescriptionU3Ek__BackingField_3() { return &___U3CdescriptionU3Ek__BackingField_3; }
	inline void set_U3CdescriptionU3Ek__BackingField_3(String_t* value)
	{
		___U3CdescriptionU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CdescriptionU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CISOCurrencyCodeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(WinProductDescription_t2080881907, ___U3CISOCurrencyCodeU3Ek__BackingField_4)); }
	inline String_t* get_U3CISOCurrencyCodeU3Ek__BackingField_4() const { return ___U3CISOCurrencyCodeU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CISOCurrencyCodeU3Ek__BackingField_4() { return &___U3CISOCurrencyCodeU3Ek__BackingField_4; }
	inline void set_U3CISOCurrencyCodeU3Ek__BackingField_4(String_t* value)
	{
		___U3CISOCurrencyCodeU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CISOCurrencyCodeU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CpriceDecimalU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(WinProductDescription_t2080881907, ___U3CpriceDecimalU3Ek__BackingField_5)); }
	inline Decimal_t2948259380  get_U3CpriceDecimalU3Ek__BackingField_5() const { return ___U3CpriceDecimalU3Ek__BackingField_5; }
	inline Decimal_t2948259380 * get_address_of_U3CpriceDecimalU3Ek__BackingField_5() { return &___U3CpriceDecimalU3Ek__BackingField_5; }
	inline void set_U3CpriceDecimalU3Ek__BackingField_5(Decimal_t2948259380  value)
	{
		___U3CpriceDecimalU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CreceiptU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(WinProductDescription_t2080881907, ___U3CreceiptU3Ek__BackingField_6)); }
	inline String_t* get_U3CreceiptU3Ek__BackingField_6() const { return ___U3CreceiptU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CreceiptU3Ek__BackingField_6() { return &___U3CreceiptU3Ek__BackingField_6; }
	inline void set_U3CreceiptU3Ek__BackingField_6(String_t* value)
	{
		___U3CreceiptU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CreceiptU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CtransactionIDU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(WinProductDescription_t2080881907, ___U3CtransactionIDU3Ek__BackingField_7)); }
	inline String_t* get_U3CtransactionIDU3Ek__BackingField_7() const { return ___U3CtransactionIDU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CtransactionIDU3Ek__BackingField_7() { return &___U3CtransactionIDU3Ek__BackingField_7; }
	inline void set_U3CtransactionIDU3Ek__BackingField_7(String_t* value)
	{
		___U3CtransactionIDU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtransactionIDU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CconsumableU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(WinProductDescription_t2080881907, ___U3CconsumableU3Ek__BackingField_8)); }
	inline bool get_U3CconsumableU3Ek__BackingField_8() const { return ___U3CconsumableU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CconsumableU3Ek__BackingField_8() { return &___U3CconsumableU3Ek__BackingField_8; }
	inline void set_U3CconsumableU3Ek__BackingField_8(bool value)
	{
		___U3CconsumableU3Ek__BackingField_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINPRODUCTDESCRIPTION_T2080881907_H



// System.Void System.NotImplementedException::.ctor()
extern "C"  void NotImplementedException__ctor_m3058704252 (NotImplementedException_t3489357830 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_platformSpecificID(System.String)
extern "C"  void WinProductDescription_set_platformSpecificID_m888347517 (WinProductDescription_t2080881907 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_price(System.String)
extern "C"  void WinProductDescription_set_price_m275074854 (WinProductDescription_t2080881907 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_title(System.String)
extern "C"  void WinProductDescription_set_title_m32538958 (WinProductDescription_t2080881907 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_description(System.String)
extern "C"  void WinProductDescription_set_description_m3660971516 (WinProductDescription_t2080881907 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_ISOCurrencyCode(System.String)
extern "C"  void WinProductDescription_set_ISOCurrencyCode_m3420925389 (WinProductDescription_t2080881907 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_priceDecimal(System.Decimal)
extern "C"  void WinProductDescription_set_priceDecimal_m1789770476 (WinProductDescription_t2080881907 * __this, Decimal_t2948259380  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_receipt(System.String)
extern "C"  void WinProductDescription_set_receipt_m1867416603 (WinProductDescription_t2080881907 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_transactionID(System.String)
extern "C"  void WinProductDescription_set_transactionID_m1224415286 (WinProductDescription_t2080881907 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_consumable(System.Boolean)
extern "C"  void WinProductDescription_set_consumable_m3108167238 (WinProductDescription_t2080881907 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// UnityEngine.Purchasing.Default.IWindowsIAP UnityEngine.Purchasing.Default.Factory::Create(System.Boolean)
extern "C"  RuntimeObject* Factory_Create_m2211217853 (RuntimeObject * __this /* static, unused */, bool ___mocked0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Factory_Create_m2211217853_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,Factory_Create_m2211217853_RuntimeMethod_var);
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
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_platformSpecificID(System.String)
extern "C"  void WinProductDescription_set_platformSpecificID_m888347517 (WinProductDescription_t2080881907 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CplatformSpecificIDU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_price(System.String)
extern "C"  void WinProductDescription_set_price_m275074854 (WinProductDescription_t2080881907 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CpriceU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_title(System.String)
extern "C"  void WinProductDescription_set_title_m32538958 (WinProductDescription_t2080881907 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CtitleU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_description(System.String)
extern "C"  void WinProductDescription_set_description_m3660971516 (WinProductDescription_t2080881907 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CdescriptionU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_ISOCurrencyCode(System.String)
extern "C"  void WinProductDescription_set_ISOCurrencyCode_m3420925389 (WinProductDescription_t2080881907 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CISOCurrencyCodeU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_priceDecimal(System.Decimal)
extern "C"  void WinProductDescription_set_priceDecimal_m1789770476 (WinProductDescription_t2080881907 * __this, Decimal_t2948259380  ___value0, const RuntimeMethod* method)
{
	{
		Decimal_t2948259380  L_0 = ___value0;
		__this->set_U3CpriceDecimalU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_receipt(System.String)
extern "C"  void WinProductDescription_set_receipt_m1867416603 (WinProductDescription_t2080881907 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CreceiptU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_transactionID(System.String)
extern "C"  void WinProductDescription_set_transactionID_m1224415286 (WinProductDescription_t2080881907 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CtransactionIDU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_consumable(System.Boolean)
extern "C"  void WinProductDescription_set_consumable_m3108167238 (WinProductDescription_t2080881907 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CconsumableU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::.ctor(System.String,System.String,System.String,System.String,System.String,System.Decimal,System.String,System.String,System.Boolean)
extern "C"  void WinProductDescription__ctor_m529087061 (WinProductDescription_t2080881907 * __this, String_t* ___id0, String_t* ___price1, String_t* ___title2, String_t* ___description3, String_t* ___isoCode4, Decimal_t2948259380  ___priceD5, String_t* ___receipt6, String_t* ___transactionId7, bool ___consumable8, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id0;
		WinProductDescription_set_platformSpecificID_m888347517(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___price1;
		WinProductDescription_set_price_m275074854(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___title2;
		WinProductDescription_set_title_m32538958(__this, L_2, /*hidden argument*/NULL);
		String_t* L_3 = ___description3;
		WinProductDescription_set_description_m3660971516(__this, L_3, /*hidden argument*/NULL);
		String_t* L_4 = ___isoCode4;
		WinProductDescription_set_ISOCurrencyCode_m3420925389(__this, L_4, /*hidden argument*/NULL);
		Decimal_t2948259380  L_5 = ___priceD5;
		WinProductDescription_set_priceDecimal_m1789770476(__this, L_5, /*hidden argument*/NULL);
		String_t* L_6 = ___receipt6;
		WinProductDescription_set_receipt_m1867416603(__this, L_6, /*hidden argument*/NULL);
		String_t* L_7 = ___transactionId7;
		WinProductDescription_set_transactionID_m1224415286(__this, L_7, /*hidden argument*/NULL);
		bool L_8 = ___consumable8;
		WinProductDescription_set_consumable_m3108167238(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
