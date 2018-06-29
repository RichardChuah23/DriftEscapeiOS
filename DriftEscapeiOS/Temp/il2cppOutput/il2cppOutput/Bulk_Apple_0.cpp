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


// System.String
struct String_t;
// UnityEngine.Purchasing.UnityPurchasingCallback
struct UnityPurchasingCallback_t953216184;
// UnityEngine.Purchasing.iOSStoreBindings
struct iOSStoreBindings_t3204725121;
// UnityEngine.Purchasing.OSXStoreBindings
struct OSXStoreBindings_t1795895004;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;




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
#ifndef U3CMODULEU3E_T692745552_H
#define U3CMODULEU3E_T692745552_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745552 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745552_H
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
#ifndef OSXSTOREBINDINGS_T1795895004_H
#define OSXSTOREBINDINGS_T1795895004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.OSXStoreBindings
struct  OSXStoreBindings_t1795895004  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OSXSTOREBINDINGS_T1795895004_H
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
#ifndef IOSSTOREBINDINGS_T3204725121_H
#define IOSSTOREBINDINGS_T3204725121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.iOSStoreBindings
struct  iOSStoreBindings_t3204725121  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IOSSTOREBINDINGS_T3204725121_H
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



// System.Void UnityEngine.Purchasing.iOSStoreBindings::setUnityPurchasingCallback(UnityEngine.Purchasing.UnityPurchasingCallback)
extern "C"  void iOSStoreBindings_setUnityPurchasingCallback_m1482920455 (RuntimeObject * __this /* static, unused */, UnityPurchasingCallback_t953216184 * ___AsyncCallback0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.iOSStoreBindings::getUnityPurchasingAppReceipt()
extern "C"  String_t* iOSStoreBindings_getUnityPurchasingAppReceipt_m4103466157 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingRetrieveProducts(System.String)
extern "C"  void iOSStoreBindings_unityPurchasingRetrieveProducts_m1942317051 (RuntimeObject * __this /* static, unused */, String_t* ___json0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingPurchase(System.String,System.String)
extern "C"  void iOSStoreBindings_unityPurchasingPurchase_m127163060 (RuntimeObject * __this /* static, unused */, String_t* ___json0, String_t* ___developerPayload1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingFinishTransaction(System.String,System.String)
extern "C"  void iOSStoreBindings_unityPurchasingFinishTransaction_m1779103950 (RuntimeObject * __this /* static, unused */, String_t* ___productJSON0, String_t* ___transactionId1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingRestoreTransactions()
extern "C"  void iOSStoreBindings_unityPurchasingRestoreTransactions_m2532953743 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingAddTransactionObserver()
extern "C"  void iOSStoreBindings_unityPurchasingAddTransactionObserver_m463851353 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingInterceptPromotionalPurchases()
extern "C"  void iOSStoreBindings_unityPurchasingInterceptPromotionalPurchases_m421098356 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.OSXStoreBindings::setUnityPurchasingCallback(UnityEngine.Purchasing.UnityPurchasingCallback)
extern "C"  void OSXStoreBindings_setUnityPurchasingCallback_m3551531614 (RuntimeObject * __this /* static, unused */, UnityPurchasingCallback_t953216184 * ___AsyncCallback0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.OSXStoreBindings::getUnityPurchasingAppReceipt()
extern "C"  String_t* OSXStoreBindings_getUnityPurchasingAppReceipt_m643976844 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingRetrieveProducts(System.String)
extern "C"  bool OSXStoreBindings_unityPurchasingRetrieveProducts_m689081799 (RuntimeObject * __this /* static, unused */, String_t* ___json0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingPurchase(System.String,System.String)
extern "C"  bool OSXStoreBindings_unityPurchasingPurchase_m1987719083 (RuntimeObject * __this /* static, unused */, String_t* ___json0, String_t* ___developerPayload1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingFinishTransaction(System.String,System.String)
extern "C"  bool OSXStoreBindings_unityPurchasingFinishTransaction_m3734261221 (RuntimeObject * __this /* static, unused */, String_t* ___productJSON0, String_t* ___transactionId1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingRestoreTransactions()
extern "C"  void OSXStoreBindings_unityPurchasingRestoreTransactions_m3672818507 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingAddTransactionObserver()
extern "C"  void OSXStoreBindings_unityPurchasingAddTransactionObserver_m1174623098 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingInterceptPromotionalPurchases()
extern "C"  void OSXStoreBindings_unityPurchasingInterceptPromotionalPurchases_m3411166610 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
extern "C" void DEFAULT_CALL unityPurchasingRetrieveProducts(char*);
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingRetrieveProducts(System.String)
extern "C"  void iOSStoreBindings_unityPurchasingRetrieveProducts_m1942317051 (RuntimeObject * __this /* static, unused */, String_t* ___json0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___json0' to native representation
	char* ____json0_marshaled = NULL;
	____json0_marshaled = il2cpp_codegen_marshal_string(___json0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(unityPurchasingRetrieveProducts)(____json0_marshaled);

	// Marshaling cleanup of parameter '___json0' native representation
	il2cpp_codegen_marshal_free(____json0_marshaled);
	____json0_marshaled = NULL;

}
extern "C" void DEFAULT_CALL unityPurchasingPurchase(char*, char*);
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingPurchase(System.String,System.String)
extern "C"  void iOSStoreBindings_unityPurchasingPurchase_m127163060 (RuntimeObject * __this /* static, unused */, String_t* ___json0, String_t* ___developerPayload1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___json0' to native representation
	char* ____json0_marshaled = NULL;
	____json0_marshaled = il2cpp_codegen_marshal_string(___json0);

	// Marshaling of parameter '___developerPayload1' to native representation
	char* ____developerPayload1_marshaled = NULL;
	____developerPayload1_marshaled = il2cpp_codegen_marshal_string(___developerPayload1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(unityPurchasingPurchase)(____json0_marshaled, ____developerPayload1_marshaled);

	// Marshaling cleanup of parameter '___json0' native representation
	il2cpp_codegen_marshal_free(____json0_marshaled);
	____json0_marshaled = NULL;

	// Marshaling cleanup of parameter '___developerPayload1' native representation
	il2cpp_codegen_marshal_free(____developerPayload1_marshaled);
	____developerPayload1_marshaled = NULL;

}
extern "C" void DEFAULT_CALL unityPurchasingFinishTransaction(char*, char*);
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingFinishTransaction(System.String,System.String)
extern "C"  void iOSStoreBindings_unityPurchasingFinishTransaction_m1779103950 (RuntimeObject * __this /* static, unused */, String_t* ___productJSON0, String_t* ___transactionId1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___productJSON0' to native representation
	char* ____productJSON0_marshaled = NULL;
	____productJSON0_marshaled = il2cpp_codegen_marshal_string(___productJSON0);

	// Marshaling of parameter '___transactionId1' to native representation
	char* ____transactionId1_marshaled = NULL;
	____transactionId1_marshaled = il2cpp_codegen_marshal_string(___transactionId1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(unityPurchasingFinishTransaction)(____productJSON0_marshaled, ____transactionId1_marshaled);

	// Marshaling cleanup of parameter '___productJSON0' native representation
	il2cpp_codegen_marshal_free(____productJSON0_marshaled);
	____productJSON0_marshaled = NULL;

	// Marshaling cleanup of parameter '___transactionId1' native representation
	il2cpp_codegen_marshal_free(____transactionId1_marshaled);
	____transactionId1_marshaled = NULL;

}
extern "C" void DEFAULT_CALL unityPurchasingRestoreTransactions();
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingRestoreTransactions()
extern "C"  void iOSStoreBindings_unityPurchasingRestoreTransactions_m2532953743 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(unityPurchasingRestoreTransactions)();

}
extern "C" void DEFAULT_CALL unityPurchasingAddTransactionObserver();
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingAddTransactionObserver()
extern "C"  void iOSStoreBindings_unityPurchasingAddTransactionObserver_m463851353 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(unityPurchasingAddTransactionObserver)();

}
extern "C" void DEFAULT_CALL setUnityPurchasingCallback(Il2CppMethodPointer);
// System.Void UnityEngine.Purchasing.iOSStoreBindings::setUnityPurchasingCallback(UnityEngine.Purchasing.UnityPurchasingCallback)
extern "C"  void iOSStoreBindings_setUnityPurchasingCallback_m1482920455 (RuntimeObject * __this /* static, unused */, UnityPurchasingCallback_t953216184 * ___AsyncCallback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___AsyncCallback0' to native representation
	Il2CppMethodPointer ____AsyncCallback0_marshaled = NULL;
	____AsyncCallback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___AsyncCallback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(setUnityPurchasingCallback)(____AsyncCallback0_marshaled);

}
extern "C" char* DEFAULT_CALL getUnityPurchasingAppReceipt();
// System.String UnityEngine.Purchasing.iOSStoreBindings::getUnityPurchasingAppReceipt()
extern "C"  String_t* iOSStoreBindings_getUnityPurchasingAppReceipt_m4103466157 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(getUnityPurchasingAppReceipt)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
extern "C" void DEFAULT_CALL unityPurchasingInterceptPromotionalPurchases();
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingInterceptPromotionalPurchases()
extern "C"  void iOSStoreBindings_unityPurchasingInterceptPromotionalPurchases_m421098356 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(unityPurchasingInterceptPromotionalPurchases)();

}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::SetUnityPurchasingCallback(UnityEngine.Purchasing.UnityPurchasingCallback)
extern "C"  void iOSStoreBindings_SetUnityPurchasingCallback_m756868915 (iOSStoreBindings_t3204725121 * __this, UnityPurchasingCallback_t953216184 * ___AsyncCallback0, const RuntimeMethod* method)
{
	{
		UnityPurchasingCallback_t953216184 * L_0 = ___AsyncCallback0;
		iOSStoreBindings_setUnityPurchasingCallback_m1482920455(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Purchasing.iOSStoreBindings::get_appReceipt()
extern "C"  String_t* iOSStoreBindings_get_appReceipt_m2498480463 (iOSStoreBindings_t3204725121 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = iOSStoreBindings_getUnityPurchasingAppReceipt_m4103466157(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::RetrieveProducts(System.String)
extern "C"  void iOSStoreBindings_RetrieveProducts_m3230380609 (iOSStoreBindings_t3204725121 * __this, String_t* ___json0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___json0;
		iOSStoreBindings_unityPurchasingRetrieveProducts_m1942317051(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::Purchase(System.String,System.String)
extern "C"  void iOSStoreBindings_Purchase_m925077806 (iOSStoreBindings_t3204725121 * __this, String_t* ___productJSON0, String_t* ___developerPayload1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___productJSON0;
		String_t* L_1 = ___developerPayload1;
		iOSStoreBindings_unityPurchasingPurchase_m127163060(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::FinishTransaction(System.String,System.String)
extern "C"  void iOSStoreBindings_FinishTransaction_m601113037 (iOSStoreBindings_t3204725121 * __this, String_t* ___productJSON0, String_t* ___transactionId1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___productJSON0;
		String_t* L_1 = ___transactionId1;
		iOSStoreBindings_unityPurchasingFinishTransaction_m1779103950(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::RestoreTransactions()
extern "C"  void iOSStoreBindings_RestoreTransactions_m2847613056 (iOSStoreBindings_t3204725121 * __this, const RuntimeMethod* method)
{
	{
		iOSStoreBindings_unityPurchasingRestoreTransactions_m2532953743(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::AddTransactionObserver()
extern "C"  void iOSStoreBindings_AddTransactionObserver_m621098447 (iOSStoreBindings_t3204725121 * __this, const RuntimeMethod* method)
{
	{
		iOSStoreBindings_unityPurchasingAddTransactionObserver_m463851353(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::InterceptPromotionalPurchases()
extern "C"  void iOSStoreBindings_InterceptPromotionalPurchases_m2936449487 (iOSStoreBindings_t3204725121 * __this, const RuntimeMethod* method)
{
	{
		iOSStoreBindings_unityPurchasingInterceptPromotionalPurchases_m421098356(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::.ctor()
extern "C"  void iOSStoreBindings__ctor_m741138572 (iOSStoreBindings_t3204725121 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingRetrieveProducts(System.String)
extern "C"  bool OSXStoreBindings_unityPurchasingRetrieveProducts_m689081799 (RuntimeObject * __this /* static, unused */, String_t* ___json0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("unitypurchasing"), "unityPurchasingRetrieveProducts", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'unityPurchasingRetrieveProducts'"),NULL);
		}
	}

	// Marshaling of parameter '___json0' to native representation
	char* ____json0_marshaled = NULL;
	____json0_marshaled = il2cpp_codegen_marshal_string(___json0);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____json0_marshaled);

	// Marshaling cleanup of parameter '___json0' native representation
	il2cpp_codegen_marshal_free(____json0_marshaled);
	____json0_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Boolean UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingPurchase(System.String,System.String)
extern "C"  bool OSXStoreBindings_unityPurchasingPurchase_m1987719083 (RuntimeObject * __this /* static, unused */, String_t* ___json0, String_t* ___developerPayload1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, char*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("unitypurchasing"), "unityPurchasingPurchase", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'unityPurchasingPurchase'"),NULL);
		}
	}

	// Marshaling of parameter '___json0' to native representation
	char* ____json0_marshaled = NULL;
	____json0_marshaled = il2cpp_codegen_marshal_string(___json0);

	// Marshaling of parameter '___developerPayload1' to native representation
	char* ____developerPayload1_marshaled = NULL;
	____developerPayload1_marshaled = il2cpp_codegen_marshal_string(___developerPayload1);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____json0_marshaled, ____developerPayload1_marshaled);

	// Marshaling cleanup of parameter '___json0' native representation
	il2cpp_codegen_marshal_free(____json0_marshaled);
	____json0_marshaled = NULL;

	// Marshaling cleanup of parameter '___developerPayload1' native representation
	il2cpp_codegen_marshal_free(____developerPayload1_marshaled);
	____developerPayload1_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Boolean UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingFinishTransaction(System.String,System.String)
extern "C"  bool OSXStoreBindings_unityPurchasingFinishTransaction_m3734261221 (RuntimeObject * __this /* static, unused */, String_t* ___productJSON0, String_t* ___transactionId1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, char*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("unitypurchasing"), "unityPurchasingFinishTransaction", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'unityPurchasingFinishTransaction'"),NULL);
		}
	}

	// Marshaling of parameter '___productJSON0' to native representation
	char* ____productJSON0_marshaled = NULL;
	____productJSON0_marshaled = il2cpp_codegen_marshal_string(___productJSON0);

	// Marshaling of parameter '___transactionId1' to native representation
	char* ____transactionId1_marshaled = NULL;
	____transactionId1_marshaled = il2cpp_codegen_marshal_string(___transactionId1);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____productJSON0_marshaled, ____transactionId1_marshaled);

	// Marshaling cleanup of parameter '___productJSON0' native representation
	il2cpp_codegen_marshal_free(____productJSON0_marshaled);
	____productJSON0_marshaled = NULL;

	// Marshaling cleanup of parameter '___transactionId1' native representation
	il2cpp_codegen_marshal_free(____transactionId1_marshaled);
	____transactionId1_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingRestoreTransactions()
extern "C"  void OSXStoreBindings_unityPurchasingRestoreTransactions_m3672818507 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("unitypurchasing"), "unityPurchasingRestoreTransactions", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'unityPurchasingRestoreTransactions'"),NULL);
		}
	}

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingAddTransactionObserver()
extern "C"  void OSXStoreBindings_unityPurchasingAddTransactionObserver_m1174623098 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("unitypurchasing"), "unityPurchasingAddTransactionObserver", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'unityPurchasingAddTransactionObserver'"),NULL);
		}
	}

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::setUnityPurchasingCallback(UnityEngine.Purchasing.UnityPurchasingCallback)
extern "C"  void OSXStoreBindings_setUnityPurchasingCallback_m3551531614 (RuntimeObject * __this /* static, unused */, UnityPurchasingCallback_t953216184 * ___AsyncCallback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("unitypurchasing"), "setUnityPurchasingCallback", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'setUnityPurchasingCallback'"),NULL);
		}
	}

	// Marshaling of parameter '___AsyncCallback0' to native representation
	Il2CppMethodPointer ____AsyncCallback0_marshaled = NULL;
	____AsyncCallback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___AsyncCallback0));

	// Native function invocation
	il2cppPInvokeFunc(____AsyncCallback0_marshaled);

}
// System.String UnityEngine.Purchasing.OSXStoreBindings::getUnityPurchasingAppReceipt()
extern "C"  String_t* OSXStoreBindings_getUnityPurchasingAppReceipt_m643976844 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("unitypurchasing"), "getUnityPurchasingAppReceipt", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'getUnityPurchasingAppReceipt'"),NULL);
		}
	}

	// Native function invocation
	char* returnValue = il2cppPInvokeFunc();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingInterceptPromotionalPurchases()
extern "C"  void OSXStoreBindings_unityPurchasingInterceptPromotionalPurchases_m3411166610 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(unityPurchasingInterceptPromotionalPurchases)();

}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::SetUnityPurchasingCallback(UnityEngine.Purchasing.UnityPurchasingCallback)
extern "C"  void OSXStoreBindings_SetUnityPurchasingCallback_m1194194061 (OSXStoreBindings_t1795895004 * __this, UnityPurchasingCallback_t953216184 * ___AsyncCallback0, const RuntimeMethod* method)
{
	{
		UnityPurchasingCallback_t953216184 * L_0 = ___AsyncCallback0;
		OSXStoreBindings_setUnityPurchasingCallback_m3551531614(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Purchasing.OSXStoreBindings::get_appReceipt()
extern "C"  String_t* OSXStoreBindings_get_appReceipt_m3694613303 (OSXStoreBindings_t1795895004 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = OSXStoreBindings_getUnityPurchasingAppReceipt_m643976844(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::RetrieveProducts(System.String)
extern "C"  void OSXStoreBindings_RetrieveProducts_m292176241 (OSXStoreBindings_t1795895004 * __this, String_t* ___json0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___json0;
		OSXStoreBindings_unityPurchasingRetrieveProducts_m689081799(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::Purchase(System.String,System.String)
extern "C"  void OSXStoreBindings_Purchase_m24434274 (OSXStoreBindings_t1795895004 * __this, String_t* ___productJSON0, String_t* ___developerPayload1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___productJSON0;
		String_t* L_1 = ___developerPayload1;
		OSXStoreBindings_unityPurchasingPurchase_m1987719083(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::FinishTransaction(System.String,System.String)
extern "C"  void OSXStoreBindings_FinishTransaction_m3877922248 (OSXStoreBindings_t1795895004 * __this, String_t* ___productJSON0, String_t* ___transactionId1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___productJSON0;
		String_t* L_1 = ___transactionId1;
		OSXStoreBindings_unityPurchasingFinishTransaction_m3734261221(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::RestoreTransactions()
extern "C"  void OSXStoreBindings_RestoreTransactions_m670735781 (OSXStoreBindings_t1795895004 * __this, const RuntimeMethod* method)
{
	{
		OSXStoreBindings_unityPurchasingRestoreTransactions_m3672818507(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::AddTransactionObserver()
extern "C"  void OSXStoreBindings_AddTransactionObserver_m1687809343 (OSXStoreBindings_t1795895004 * __this, const RuntimeMethod* method)
{
	{
		OSXStoreBindings_unityPurchasingAddTransactionObserver_m1174623098(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::InterceptPromotionalPurchases()
extern "C"  void OSXStoreBindings_InterceptPromotionalPurchases_m769580797 (OSXStoreBindings_t1795895004 * __this, const RuntimeMethod* method)
{
	{
		OSXStoreBindings_unityPurchasingInterceptPromotionalPurchases_m3411166610(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::.ctor()
extern "C"  void OSXStoreBindings__ctor_m494355290 (OSXStoreBindings_t1795895004 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
