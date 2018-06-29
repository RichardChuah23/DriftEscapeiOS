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

template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// UnityEngine.Advertisements.Android.Platform
struct Platform_t1698302846;
// UnityEngine.Advertisements.iOS.Platform
struct Platform_t1647901813;
// UnityEngine.Advertisements.UnsupportedPlatform
struct UnsupportedPlatform_t2036049172;
// System.Exception
struct Exception_t;
// System.String
struct String_t;
// UnityEngine.Advertisements.Editor.Platform
struct Platform_t2756657262;
// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>
struct EventHandler_1_t2215985868;
// System.EventHandler`1<System.Object>
struct EventHandler_1_t1004265597;
// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>
struct EventHandler_1_t908338235;
// UnityEngine.Advertisements.MetaData
struct MetaData_t2274729001;
// UnityEngine.Advertisements.ShowOptions
struct ShowOptions_t990845000;
// UnityEngine.Advertisements.Advertisement/<Show>c__AnonStorey0
struct U3CShowU3Ec__AnonStorey0_t3170924441;
// System.Action`1<UnityEngine.Advertisements.ShowResult>
struct Action_1_t3243021218;
// UnityEngine.Advertisements.Advertisement/<Show>c__AnonStorey1
struct U3CShowU3Ec__AnonStorey1_t3170924442;
// UnityEngine.Advertisements.StartEventArgs
struct StartEventArgs_t4291826435;
// UnityEngine.Advertisements.FinishEventArgs
struct FinishEventArgs_t2984178802;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_t2835824643;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t32045322;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t4131667876;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Advertisements.CallbackExecutor
struct CallbackExecutor_t363496179;
// UnityEngine.Advertisements.Android.Platform/<onUnityAdsReady>c__AnonStorey0
struct U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815;
// System.Action`1<UnityEngine.Advertisements.CallbackExecutor>
struct Action_1_t535963774;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// UnityEngine.Advertisements.Android.Platform/<onUnityAdsStart>c__AnonStorey1
struct U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353;
// UnityEngine.Advertisements.Android.Platform/<onUnityAdsFinish>c__AnonStorey2
struct U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596;
// UnityEngine.Advertisements.Android.Platform/<onUnityAdsFinish>c__AnonStorey3
struct U3ConUnityAdsFinishU3Ec__AnonStorey3_t2653194732;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// UnityEngine.Advertisements.Android.Platform/<onUnityAdsError>c__AnonStorey4
struct U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180;
// UnityEngine.Advertisements.Android.Platform/<onUnityAdsError>c__AnonStorey5
struct U3ConUnityAdsErrorU3Ec__AnonStorey5_t3709914535;
// System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>
struct EventHandler_1_t2768214265;
// System.Delegate
struct Delegate_t1188392813;
// System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>
struct EventHandler_1_t177306446;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t1329213854;
// UnityEngine.Advertisements.ErrorEventArgs
struct ErrorEventArgs_t2253147013;
// UnityEngine.Advertisements.ReadyEventArgs
struct ReadyEventArgs_t549087536;
// System.Collections.Generic.Queue`1<System.Action`1<UnityEngine.Advertisements.CallbackExecutor>>
struct Queue_1_t382223268;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t2926365658;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Advertisements.Editor.Configuration
struct Configuration_t1722493896;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t4177511560;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1444694249;
// UnityEngine.Advertisements.Editor.Placeholder
struct Placeholder_t2906495853;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t3146511083;
// UnityEngine.Texture
struct Texture_t3661962703;
// UnityEngine.Advertisements.Editor.Platform/<Initialize>c__AnonStorey0
struct U3CInitializeU3Ec__AnonStorey0_t2183256279;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Net.WebRequest
struct WebRequest_t1939381076;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IO.StreamReader
struct StreamReader_t4009935899;
// System.IO.Stream
struct Stream_t1273022909;
// System.EventArgs
struct EventArgs_t3591816995;
// UnityEngine.Advertisements.iOS.Platform/unityAdsReady
struct unityAdsReady_t96934738;
// UnityEngine.Advertisements.iOS.Platform/unityAdsDidError
struct unityAdsDidError_t1993223595;
// UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart
struct unityAdsDidStart_t1058412932;
// UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish
struct unityAdsDidFinish_t3747416149;
// UnityEngine.Advertisements.iOS.Platform/<UnityAdsReady>c__AnonStorey0
struct U3CUnityAdsReadyU3Ec__AnonStorey0_t1009704718;
// UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidError>c__AnonStorey1
struct U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617;
// UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidStart>c__AnonStorey2
struct U3CUnityAdsDidStartU3Ec__AnonStorey2_t250005642;
// UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidFinish>c__AnonStorey3
struct U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544;
// UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidFinish>c__AnonStorey4
struct U3CUnityAdsDidFinishU3Ec__AnonStorey4_t3126029549;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2865362463;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t3225273728;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t1694351041;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>
struct Transform_1_t1747829908;
// System.Action`1<UnityEngine.Advertisements.CallbackExecutor>[]
struct Action_1U5BU5D_t3839123403;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Text.Decoder
struct Decoder_t2204182725;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Collections.Specialized.HybridDictionary
struct HybridDictionary_t4070033136;
// System.Net.IWebProxy
struct IWebProxy_t688979836;
// UnityEngine.Advertisements.IPlatform
struct IPlatform_t2298261414;

extern RuntimeClass* Advertisement_t842671397_il2cpp_TypeInfo_var;
extern RuntimeClass* Platform_t1698302846_il2cpp_TypeInfo_var;
extern RuntimeClass* Platform_t1647901813_il2cpp_TypeInfo_var;
extern RuntimeClass* UnsupportedPlatform_t2036049172_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4107934516;
extern const uint32_t Advertisement_LoadRuntime_m1930758518_MetadataUsageId;
extern RuntimeClass* Platform_t2756657262_il2cpp_TypeInfo_var;
extern const uint32_t Advertisement_LoadEditor_m2032877435_MetadataUsageId;
extern const uint32_t Advertisement_Load_m3998104966_MetadataUsageId;
extern const uint32_t Advertisement_get_debugLevel_m112247691_MetadataUsageId;
extern const uint32_t Advertisement_set_debugLevel_m748244073_MetadataUsageId;
extern const uint32_t Advertisement_get_isInitialized_m2728189845_MetadataUsageId;
extern const uint32_t Advertisement_set_isInitialized_m177689357_MetadataUsageId;
extern const uint32_t Advertisement_get_isSupported_m1369507557_MetadataUsageId;
extern RuntimeClass* IPlatform_t2298261414_il2cpp_TypeInfo_var;
extern const uint32_t Advertisement_get_debugMode_m2131110715_MetadataUsageId;
extern const uint32_t Advertisement_set_debugMode_m152285871_MetadataUsageId;
extern const uint32_t Advertisement_get_version_m3333841984_MetadataUsageId;
extern const uint32_t Advertisement_get_isShowing_m3507224835_MetadataUsageId;
extern const uint32_t Advertisement_set_isShowing_m1653892022_MetadataUsageId;
extern const uint32_t Advertisement_Initialize_m111792659_MetadataUsageId;
extern RuntimeClass* EventHandler_1_t2215985868_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_1_t908338235_il2cpp_TypeInfo_var;
extern RuntimeClass* MetaData_t2274729001_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Advertisement_U3CInitializeU3Em__0_m2484897031_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1__ctor_m247885508_RuntimeMethod_var;
extern const RuntimeMethod* Advertisement_U3CInitializeU3Em__1_m2109031916_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1__ctor_m1760330498_RuntimeMethod_var;
extern String_t* _stringLiteral2258625258;
extern String_t* _stringLiteral62725243;
extern String_t* _stringLiteral1947076759;
extern String_t* _stringLiteral1902401671;
extern String_t* _stringLiteral4032983950;
extern String_t* _stringLiteral2694997814;
extern const uint32_t Advertisement_Initialize_m1051450402_MetadataUsageId;
extern const uint32_t Advertisement_IsReady_m2792558112_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t Advertisement_IsReady_m2166462196_MetadataUsageId;
extern const uint32_t Advertisement_GetPlacementState_m2232065044_MetadataUsageId;
extern const uint32_t Advertisement_GetPlacementState_m4001863134_MetadataUsageId;
extern const uint32_t Advertisement_Show_m2619871676_MetadataUsageId;
extern const uint32_t Advertisement_Show_m53580060_MetadataUsageId;
extern const uint32_t Advertisement_Show_m663301454_MetadataUsageId;
extern RuntimeClass* U3CShowU3Ec__AnonStorey0_t3170924441_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CShowU3Ec__AnonStorey1_t3170924442_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CShowU3Ec__AnonStorey1_U3CU3Em__0_m1498981190_RuntimeMethod_var;
extern String_t* _stringLiteral2261821926;
extern String_t* _stringLiteral4028036860;
extern const uint32_t Advertisement_Show_m1413788125_MetadataUsageId;
extern const uint32_t Advertisement_SetMetaData_m3821393482_MetadataUsageId;
extern const uint32_t Advertisement__cctor_m2698673428_MetadataUsageId;
extern const uint32_t Advertisement_U3CInitializeU3Em__0_m2484897031_MetadataUsageId;
extern const uint32_t Advertisement_U3CInitializeU3Em__1_m2109031916_MetadataUsageId;
extern const RuntimeMethod* Action_1_Invoke_m860665472_RuntimeMethod_var;
extern const uint32_t U3CShowU3Ec__AnonStorey1_U3CU3Em__0_m1498981190_MetadataUsageId;
extern RuntimeClass* AndroidJavaProxy_t2835824643_il2cpp_TypeInfo_var;
extern RuntimeClass* AndroidJavaClass_t32045322_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t4131667876_m671986461_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisCallbackExecutor_t363496179_m2253360972_RuntimeMethod_var;
extern String_t* _stringLiteral1157834939;
extern String_t* _stringLiteral2149247999;
extern String_t* _stringLiteral3452315504;
extern String_t* _stringLiteral3217210809;
extern String_t* _stringLiteral2428876507;
extern const uint32_t Platform__ctor_m3233182567_MetadataUsageId;
extern RuntimeClass* U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t535963774_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3ConUnityAdsReadyU3Ec__AnonStorey0_U3CU3Em__0_m2531335987_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m246329423_RuntimeMethod_var;
extern const uint32_t Platform_onUnityAdsReady_m1835805958_MetadataUsageId;
extern RuntimeClass* U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3ConUnityAdsStartU3Ec__AnonStorey1_U3CU3Em__0_m3745486283_RuntimeMethod_var;
extern const uint32_t Platform_onUnityAdsStart_m2863714750_MetadataUsageId;
extern RuntimeClass* U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596_il2cpp_TypeInfo_var;
extern RuntimeClass* U3ConUnityAdsFinishU3Ec__AnonStorey3_t2653194732_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern const RuntimeMethod* AndroidJavaObject_Call_TisInt32_t2950945753_m3061355686_RuntimeMethod_var;
extern const RuntimeMethod* U3ConUnityAdsFinishU3Ec__AnonStorey3_U3CU3Em__0_m2379100025_RuntimeMethod_var;
extern String_t* _stringLiteral3378743801;
extern const uint32_t Platform_onUnityAdsFinish_m1351724442_MetadataUsageId;
extern RuntimeClass* U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180_il2cpp_TypeInfo_var;
extern RuntimeClass* U3ConUnityAdsErrorU3Ec__AnonStorey5_t3709914535_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3ConUnityAdsErrorU3Ec__AnonStorey5_U3CU3Em__0_m1873462927_RuntimeMethod_var;
extern const uint32_t Platform_onUnityAdsError_m2818265370_MetadataUsageId;
extern RuntimeClass* EventHandler_1_t2768214265_il2cpp_TypeInfo_var;
extern const uint32_t Platform_add_OnReady_m3299334683_MetadataUsageId;
extern const uint32_t Platform_remove_OnReady_m644170545_MetadataUsageId;
extern const uint32_t Platform_add_OnStart_m996194638_MetadataUsageId;
extern const uint32_t Platform_remove_OnStart_m2706477467_MetadataUsageId;
extern const uint32_t Platform_add_OnFinish_m3107184672_MetadataUsageId;
extern const uint32_t Platform_remove_OnFinish_m2870282854_MetadataUsageId;
extern RuntimeClass* EventHandler_1_t177306446_il2cpp_TypeInfo_var;
extern const uint32_t Platform_add_OnError_m3811019260_MetadataUsageId;
extern const uint32_t Platform_remove_OnError_m1044860335_MetadataUsageId;
extern const RuntimeMethod* AndroidJavaObject_CallStatic_TisBoolean_t97287965_m1100851500_RuntimeMethod_var;
extern String_t* _stringLiteral1263578497;
extern const uint32_t Platform_get_isInitialized_m4196749938_MetadataUsageId;
extern String_t* _stringLiteral930268361;
extern const uint32_t Platform_get_isSupported_m3096644395_MetadataUsageId;
extern const RuntimeMethod* AndroidJavaObject_CallStatic_TisString_t_m2571575926_RuntimeMethod_var;
extern String_t* _stringLiteral4068039089;
extern const uint32_t Platform_get_version_m2863392885_MetadataUsageId;
extern String_t* _stringLiteral3735224595;
extern const uint32_t Platform_get_debugMode_m1274978797_MetadataUsageId;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3735244631;
extern const uint32_t Platform_set_debugMode_m1126448795_MetadataUsageId;
extern String_t* _stringLiteral2540211304;
extern const uint32_t Platform_Initialize_m82924387_MetadataUsageId;
extern String_t* _stringLiteral3486120287;
extern const uint32_t Platform_IsReady_m1225029571_MetadataUsageId;
extern const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t4131667876_m2031442458_RuntimeMethod_var;
extern String_t* _stringLiteral2998687031;
extern const uint32_t Platform_GetPlacementState_m57946683_MetadataUsageId;
extern String_t* _stringLiteral3902473660;
extern const uint32_t Platform_Show_m1063852283_MetadataUsageId;
extern RuntimeClass* AndroidJavaObject_t4131667876_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t4242887519_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t1400637802_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m256823211_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m4108279609_RuntimeMethod_var;
extern const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t97287965_m2984583508_RuntimeMethod_var;
extern String_t* _stringLiteral3894938408;
extern String_t* _stringLiteral2143220806;
extern String_t* _stringLiteral2553217811;
extern String_t* _stringLiteral399103237;
extern const uint32_t Platform_SetMetaData_m3645297404_MetadataUsageId;
extern RuntimeClass* ErrorEventArgs_t2253147013_il2cpp_TypeInfo_var;
extern const RuntimeMethod* EventHandler_1_Invoke_m1199075846_RuntimeMethod_var;
extern const uint32_t U3ConUnityAdsErrorU3Ec__AnonStorey5_U3CU3Em__0_m1873462927_MetadataUsageId;
extern RuntimeClass* FinishEventArgs_t2984178802_il2cpp_TypeInfo_var;
extern const RuntimeMethod* EventHandler_1_Invoke_m3162226611_RuntimeMethod_var;
extern const uint32_t U3ConUnityAdsFinishU3Ec__AnonStorey3_U3CU3Em__0_m2379100025_MetadataUsageId;
extern RuntimeClass* ReadyEventArgs_t549087536_il2cpp_TypeInfo_var;
extern const RuntimeMethod* EventHandler_1_Invoke_m743178406_RuntimeMethod_var;
extern const uint32_t U3ConUnityAdsReadyU3Ec__AnonStorey0_U3CU3Em__0_m2531335987_MetadataUsageId;
extern RuntimeClass* StartEventArgs_t4291826435_il2cpp_TypeInfo_var;
extern const RuntimeMethod* EventHandler_1_Invoke_m1200448648_RuntimeMethod_var;
extern const uint32_t U3ConUnityAdsStartU3Ec__AnonStorey1_U3CU3Em__0_m3745486283_MetadataUsageId;
extern RuntimeClass* Queue_1_t382223268_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Queue_1__ctor_m401901252_RuntimeMethod_var;
extern const uint32_t CallbackExecutor__ctor_m543356810_MetadataUsageId;
extern const RuntimeMethod* Queue_1_Enqueue_m3882925169_RuntimeMethod_var;
extern const uint32_t CallbackExecutor_Post_m2417625912_MetadataUsageId;
extern const RuntimeMethod* Queue_1_Dequeue_m2377473102_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m345301731_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_get_Count_m2643849061_RuntimeMethod_var;
extern const uint32_t CallbackExecutor_Update_m1131287156_MetadataUsageId;
extern RuntimeClass* IDictionary_2_t1329213854_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t4177511560_il2cpp_TypeInfo_var;
extern RuntimeClass* IList_1_t600458651_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t2059959053_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t3512676632_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2310724936_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m95414296_RuntimeMethod_var;
extern String_t* _stringLiteral646178060;
extern String_t* _stringLiteral3236072574;
extern String_t* _stringLiteral3454449607;
extern String_t* _stringLiteral823543098;
extern String_t* _stringLiteral1948332219;
extern const uint32_t Configuration__ctor_m2049560937_MetadataUsageId;
extern RuntimeClass* Texture2D_t3840446185_il2cpp_TypeInfo_var;
extern const uint32_t Placeholder_TextureFromFile_m291359667_MetadataUsageId;
extern const uint32_t Placeholder_add_OnFinish_m3075927457_MetadataUsageId;
extern const uint32_t Placeholder_remove_OnFinish_m2422778168_MetadataUsageId;
extern RuntimeClass* Path_t1605229823_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3580575796;
extern String_t* _stringLiteral3463586438;
extern const uint32_t Placeholder_Load_m1103501462_MetadataUsageId;
extern RuntimeClass* WindowFunction_t3146511083_il2cpp_TypeInfo_var;
extern RuntimeClass* GUI_t1624858472_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Placeholder_ModalWindowFunction_m1854716751_RuntimeMethod_var;
extern String_t* _stringLiteral757602046;
extern const uint32_t Placeholder_OnGUI_m2560125389_MetadataUsageId;
extern String_t* _stringLiteral3899542074;
extern String_t* _stringLiteral3483484711;
extern const uint32_t Placeholder_ModalWindowFunction_m1854716751_MetadataUsageId;
extern const RuntimeMethod* GameObject_AddComponent_TisPlaceholder_t2906495853_m4080008109_RuntimeMethod_var;
extern const RuntimeMethod* Platform_U3CPlatformU3Em__0_m2859748733_RuntimeMethod_var;
extern String_t* _stringLiteral645957545;
extern const uint32_t Platform__ctor_m3929159556_MetadataUsageId;
extern const uint32_t Platform_add_OnStart_m534126228_MetadataUsageId;
extern const uint32_t Platform_remove_OnStart_m392217845_MetadataUsageId;
extern const uint32_t Platform_add_OnFinish_m2427335122_MetadataUsageId;
extern const uint32_t Platform_remove_OnFinish_m2807117244_MetadataUsageId;
extern String_t* _stringLiteral3040706120;
extern const uint32_t Platform_get_version_m2737893346_MetadataUsageId;
extern RuntimeClass* U3CInitializeU3Ec__AnonStorey0_t2183256279_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* Uri_t100236324_il2cpp_TypeInfo_var;
extern RuntimeClass* WebRequest_t1939381076_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncCallback_t3962456242_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m3447091495_RuntimeMethod_var;
extern String_t* _stringLiteral1223721476;
extern String_t* _stringLiteral3450517380;
extern String_t* _stringLiteral3451893639;
extern String_t* _stringLiteral3452614529;
extern String_t* _stringLiteral3452614522;
extern String_t* _stringLiteral637845977;
extern String_t* _stringLiteral3133685381;
extern String_t* _stringLiteral945277909;
extern const uint32_t Platform_Initialize_m1938088921_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m1412659484_RuntimeMethod_var;
extern const uint32_t Platform_IsReady_m1007373777_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Item_m3494146125_RuntimeMethod_var;
extern const uint32_t Platform_Show_m2242650914_MetadataUsageId;
extern String_t* _stringLiteral3342921282;
extern const uint32_t Platform__cctor_m2711454710_MetadataUsageId;
extern const uint32_t Platform_U3CPlatformU3Em__0_m2859748733_MetadataUsageId;
extern RuntimeClass* StreamReader_t4009935899_il2cpp_TypeInfo_var;
extern RuntimeClass* Configuration_t1722493896_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2170070431;
extern String_t* _stringLiteral1332923527;
extern String_t* _stringLiteral3541090105;
extern const uint32_t U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m3447091495_MetadataUsageId;
extern RuntimeClass* EventArgs_t3591816995_il2cpp_TypeInfo_var;
extern const uint32_t ErrorEventArgs__ctor_m2417395018_MetadataUsageId;
extern const uint32_t FinishEventArgs__ctor_m50835730_MetadataUsageId;
extern RuntimeClass* unityAdsReady_t96934738_il2cpp_TypeInfo_var;
extern RuntimeClass* unityAdsDidError_t1993223595_il2cpp_TypeInfo_var;
extern RuntimeClass* unityAdsDidStart_t1058412932_il2cpp_TypeInfo_var;
extern RuntimeClass* unityAdsDidFinish_t3747416149_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Platform_UnityAdsReady_m2855172723_RuntimeMethod_var;
extern const RuntimeMethod* Platform_UnityAdsDidError_m3621980989_RuntimeMethod_var;
extern const RuntimeMethod* Platform_UnityAdsDidStart_m971319454_RuntimeMethod_var;
extern const RuntimeMethod* Platform_UnityAdsDidFinish_m4137038415_RuntimeMethod_var;
extern const uint32_t Platform__ctor_m3887152146_MetadataUsageId;
extern RuntimeClass* U3CUnityAdsReadyU3Ec__AnonStorey0_t1009704718_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CUnityAdsReadyU3Ec__AnonStorey0_U3CU3Em__0_m656675668_RuntimeMethod_var;
extern const uint32_t Platform_UnityAdsReady_m2855172723_MetadataUsageId;
extern RuntimeClass* U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CUnityAdsDidErrorU3Ec__AnonStorey1_U3CU3Em__0_m1015626936_RuntimeMethod_var;
extern const uint32_t Platform_UnityAdsDidError_m3621980989_MetadataUsageId;
extern RuntimeClass* U3CUnityAdsDidStartU3Ec__AnonStorey2_t250005642_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CUnityAdsDidStartU3Ec__AnonStorey2_U3CU3Em__0_m413760534_RuntimeMethod_var;
extern const uint32_t Platform_UnityAdsDidStart_m971319454_MetadataUsageId;
extern RuntimeClass* U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CUnityAdsDidFinishU3Ec__AnonStorey4_t3126029549_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CUnityAdsDidFinishU3Ec__AnonStorey4_U3CU3Em__0_m944271777_RuntimeMethod_var;
extern const uint32_t Platform_UnityAdsDidFinish_m4137038415_MetadataUsageId;
extern const uint32_t Platform_add_OnReady_m2575728458_MetadataUsageId;
extern const uint32_t Platform_remove_OnReady_m502422865_MetadataUsageId;
extern const uint32_t Platform_add_OnStart_m1356999936_MetadataUsageId;
extern const uint32_t Platform_remove_OnStart_m3220674594_MetadataUsageId;
extern const uint32_t Platform_add_OnFinish_m568677360_MetadataUsageId;
extern const uint32_t Platform_remove_OnFinish_m3829156301_MetadataUsageId;
extern const uint32_t Platform_add_OnError_m2772632147_MetadataUsageId;
extern const uint32_t Platform_remove_OnError_m4035102861_MetadataUsageId;
extern const uint32_t U3CUnityAdsDidErrorU3Ec__AnonStorey1_U3CU3Em__0_m1015626936_MetadataUsageId;
extern const uint32_t U3CUnityAdsDidFinishU3Ec__AnonStorey4_U3CU3Em__0_m944271777_MetadataUsageId;
extern const uint32_t U3CUnityAdsDidStartU3Ec__AnonStorey2_U3CU3Em__0_m413760534_MetadataUsageId;
extern const uint32_t U3CUnityAdsReadyU3Ec__AnonStorey0_U3CU3Em__0_m656675668_MetadataUsageId;
extern RuntimeClass* Int64_t3736567304_il2cpp_TypeInfo_var;
extern const uint32_t unityAdsDidError_BeginInvoke_m3034855061_MetadataUsageId;
extern const uint32_t unityAdsDidFinish_BeginInvoke_m2033378741_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t2865362463_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2606011945_RuntimeMethod_var;
extern const uint32_t MetaData__ctor_m191542684_MetadataUsageId;
extern const uint32_t MetaData_Set_m2920014032_MetadataUsageId;
extern const uint32_t MetaData_Get_m3626153543_MetadataUsageId;
extern const uint32_t ReadyEventArgs__ctor_m1307451034_MetadataUsageId;
extern const uint32_t StartEventArgs__ctor_m1521341003_MetadataUsageId;
extern const uint32_t UnsupportedPlatform_add_OnFinish_m1575365808_MetadataUsageId;
extern const uint32_t UnsupportedPlatform_remove_OnFinish_m2418915001_MetadataUsageId;
extern const uint32_t UnsupportedPlatform_Show_m236483508_MetadataUsageId;

struct ObjectU5BU5D_t2843939325;
struct ByteU5BU5D_t4116647657;
struct StringU5BU5D_t1281789340;


#ifndef U3CMODULEU3E_T692745563_H
#define U3CMODULEU3E_T692745563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745563 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745563_H
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
#ifndef U3CONUNITYADSREADYU3EC__ANONSTOREY0_T2484343815_H
#define U3CONUNITYADSREADYU3EC__ANONSTOREY0_T2484343815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Android.Platform/<onUnityAdsReady>c__AnonStorey0
struct  U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs> UnityEngine.Advertisements.Android.Platform/<onUnityAdsReady>c__AnonStorey0::handler
	EventHandler_1_t2768214265 * ___handler_0;
	// System.String UnityEngine.Advertisements.Android.Platform/<onUnityAdsReady>c__AnonStorey0::placementId
	String_t* ___placementId_1;
	// UnityEngine.Advertisements.Android.Platform UnityEngine.Advertisements.Android.Platform/<onUnityAdsReady>c__AnonStorey0::$this
	Platform_t1698302846 * ___U24this_2;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815, ___handler_0)); }
	inline EventHandler_1_t2768214265 * get_handler_0() const { return ___handler_0; }
	inline EventHandler_1_t2768214265 ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(EventHandler_1_t2768214265 * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((&___handler_0), value);
	}

	inline static int32_t get_offset_of_placementId_1() { return static_cast<int32_t>(offsetof(U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815, ___placementId_1)); }
	inline String_t* get_placementId_1() const { return ___placementId_1; }
	inline String_t** get_address_of_placementId_1() { return &___placementId_1; }
	inline void set_placementId_1(String_t* value)
	{
		___placementId_1 = value;
		Il2CppCodeGenWriteBarrier((&___placementId_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815, ___U24this_2)); }
	inline Platform_t1698302846 * get_U24this_2() const { return ___U24this_2; }
	inline Platform_t1698302846 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(Platform_t1698302846 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CONUNITYADSREADYU3EC__ANONSTOREY0_T2484343815_H
#ifndef U3CUNITYADSDIDSTARTU3EC__ANONSTOREY2_T250005642_H
#define U3CUNITYADSDIDSTARTU3EC__ANONSTOREY2_T250005642_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidStart>c__AnonStorey2
struct  U3CUnityAdsDidStartU3Ec__AnonStorey2_t250005642  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs> UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidStart>c__AnonStorey2::handler
	EventHandler_1_t2215985868 * ___handler_0;
	// System.String UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidStart>c__AnonStorey2::placementId
	String_t* ___placementId_1;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(U3CUnityAdsDidStartU3Ec__AnonStorey2_t250005642, ___handler_0)); }
	inline EventHandler_1_t2215985868 * get_handler_0() const { return ___handler_0; }
	inline EventHandler_1_t2215985868 ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(EventHandler_1_t2215985868 * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((&___handler_0), value);
	}

	inline static int32_t get_offset_of_placementId_1() { return static_cast<int32_t>(offsetof(U3CUnityAdsDidStartU3Ec__AnonStorey2_t250005642, ___placementId_1)); }
	inline String_t* get_placementId_1() const { return ___placementId_1; }
	inline String_t** get_address_of_placementId_1() { return &___placementId_1; }
	inline void set_placementId_1(String_t* value)
	{
		___placementId_1 = value;
		Il2CppCodeGenWriteBarrier((&___placementId_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CUNITYADSDIDSTARTU3EC__ANONSTOREY2_T250005642_H
#ifndef U3CUNITYADSDIDERRORU3EC__ANONSTOREY1_T2659421617_H
#define U3CUNITYADSDIDERRORU3EC__ANONSTOREY1_T2659421617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidError>c__AnonStorey1
struct  U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs> UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidError>c__AnonStorey1::handler
	EventHandler_1_t177306446 * ___handler_0;
	// System.Int64 UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidError>c__AnonStorey1::rawError
	int64_t ___rawError_1;
	// System.String UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidError>c__AnonStorey1::message
	String_t* ___message_2;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617, ___handler_0)); }
	inline EventHandler_1_t177306446 * get_handler_0() const { return ___handler_0; }
	inline EventHandler_1_t177306446 ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(EventHandler_1_t177306446 * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((&___handler_0), value);
	}

	inline static int32_t get_offset_of_rawError_1() { return static_cast<int32_t>(offsetof(U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617, ___rawError_1)); }
	inline int64_t get_rawError_1() const { return ___rawError_1; }
	inline int64_t* get_address_of_rawError_1() { return &___rawError_1; }
	inline void set_rawError_1(int64_t value)
	{
		___rawError_1 = value;
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CUNITYADSDIDERRORU3EC__ANONSTOREY1_T2659421617_H
#ifndef U3CONUNITYADSSTARTU3EC__ANONSTOREY1_T2789353_H
#define U3CONUNITYADSSTARTU3EC__ANONSTOREY1_T2789353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Android.Platform/<onUnityAdsStart>c__AnonStorey1
struct  U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs> UnityEngine.Advertisements.Android.Platform/<onUnityAdsStart>c__AnonStorey1::handler
	EventHandler_1_t2215985868 * ___handler_0;
	// System.String UnityEngine.Advertisements.Android.Platform/<onUnityAdsStart>c__AnonStorey1::placementId
	String_t* ___placementId_1;
	// UnityEngine.Advertisements.Android.Platform UnityEngine.Advertisements.Android.Platform/<onUnityAdsStart>c__AnonStorey1::$this
	Platform_t1698302846 * ___U24this_2;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353, ___handler_0)); }
	inline EventHandler_1_t2215985868 * get_handler_0() const { return ___handler_0; }
	inline EventHandler_1_t2215985868 ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(EventHandler_1_t2215985868 * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((&___handler_0), value);
	}

	inline static int32_t get_offset_of_placementId_1() { return static_cast<int32_t>(offsetof(U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353, ___placementId_1)); }
	inline String_t* get_placementId_1() const { return ___placementId_1; }
	inline String_t** get_address_of_placementId_1() { return &___placementId_1; }
	inline void set_placementId_1(String_t* value)
	{
		___placementId_1 = value;
		Il2CppCodeGenWriteBarrier((&___placementId_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353, ___U24this_2)); }
	inline Platform_t1698302846 * get_U24this_2() const { return ___U24this_2; }
	inline Platform_t1698302846 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(Platform_t1698302846 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CONUNITYADSSTARTU3EC__ANONSTOREY1_T2789353_H
#ifndef U3CUNITYADSDIDFINISHU3EC__ANONSTOREY3_T3126029544_H
#define U3CUNITYADSDIDFINISHU3EC__ANONSTOREY3_T3126029544_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidFinish>c__AnonStorey3
struct  U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidFinish>c__AnonStorey3::handler
	EventHandler_1_t908338235 * ___handler_0;
	// System.String UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidFinish>c__AnonStorey3::placementId
	String_t* ___placementId_1;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544, ___handler_0)); }
	inline EventHandler_1_t908338235 * get_handler_0() const { return ___handler_0; }
	inline EventHandler_1_t908338235 ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(EventHandler_1_t908338235 * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((&___handler_0), value);
	}

	inline static int32_t get_offset_of_placementId_1() { return static_cast<int32_t>(offsetof(U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544, ___placementId_1)); }
	inline String_t* get_placementId_1() const { return ___placementId_1; }
	inline String_t** get_address_of_placementId_1() { return &___placementId_1; }
	inline void set_placementId_1(String_t* value)
	{
		___placementId_1 = value;
		Il2CppCodeGenWriteBarrier((&___placementId_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CUNITYADSDIDFINISHU3EC__ANONSTOREY3_T3126029544_H
#ifndef ANDROIDJAVAOBJECT_T4131667876_H
#define ANDROIDJAVAOBJECT_T4131667876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AndroidJavaObject
struct  AndroidJavaObject_t4131667876  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t3225273728 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t3225273728 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t4131667876, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t3225273728 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t3225273728 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t3225273728 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_jobject_1), value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t4131667876, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t3225273728 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t3225273728 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t3225273728 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_jclass_2), value);
	}
};

struct AndroidJavaObject_t4131667876_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaObject::s_JavaLangClass
	AndroidJavaClass_t32045322 * ___s_JavaLangClass_3;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t4131667876_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}

	inline static int32_t get_offset_of_s_JavaLangClass_3() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t4131667876_StaticFields, ___s_JavaLangClass_3)); }
	inline AndroidJavaClass_t32045322 * get_s_JavaLangClass_3() const { return ___s_JavaLangClass_3; }
	inline AndroidJavaClass_t32045322 ** get_address_of_s_JavaLangClass_3() { return &___s_JavaLangClass_3; }
	inline void set_s_JavaLangClass_3(AndroidJavaClass_t32045322 * value)
	{
		___s_JavaLangClass_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_JavaLangClass_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDJAVAOBJECT_T4131667876_H
#ifndef U3CINITIALIZEU3EC__ANONSTOREY0_T2183256279_H
#define U3CINITIALIZEU3EC__ANONSTOREY0_T2183256279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Editor.Platform/<Initialize>c__AnonStorey0
struct  U3CInitializeU3Ec__AnonStorey0_t2183256279  : public RuntimeObject
{
public:
	// System.Net.WebRequest UnityEngine.Advertisements.Editor.Platform/<Initialize>c__AnonStorey0::request
	WebRequest_t1939381076 * ___request_0;
	// System.String UnityEngine.Advertisements.Editor.Platform/<Initialize>c__AnonStorey0::gameId
	String_t* ___gameId_1;
	// UnityEngine.Advertisements.Editor.Platform UnityEngine.Advertisements.Editor.Platform/<Initialize>c__AnonStorey0::$this
	Platform_t2756657262 * ___U24this_2;

public:
	inline static int32_t get_offset_of_request_0() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ec__AnonStorey0_t2183256279, ___request_0)); }
	inline WebRequest_t1939381076 * get_request_0() const { return ___request_0; }
	inline WebRequest_t1939381076 ** get_address_of_request_0() { return &___request_0; }
	inline void set_request_0(WebRequest_t1939381076 * value)
	{
		___request_0 = value;
		Il2CppCodeGenWriteBarrier((&___request_0), value);
	}

	inline static int32_t get_offset_of_gameId_1() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ec__AnonStorey0_t2183256279, ___gameId_1)); }
	inline String_t* get_gameId_1() const { return ___gameId_1; }
	inline String_t** get_address_of_gameId_1() { return &___gameId_1; }
	inline void set_gameId_1(String_t* value)
	{
		___gameId_1 = value;
		Il2CppCodeGenWriteBarrier((&___gameId_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ec__AnonStorey0_t2183256279, ___U24this_2)); }
	inline Platform_t2756657262 * get_U24this_2() const { return ___U24this_2; }
	inline Platform_t2756657262 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(Platform_t2756657262 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CINITIALIZEU3EC__ANONSTOREY0_T2183256279_H
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
#ifndef U3CSHOWU3EC__ANONSTOREY1_T3170924442_H
#define U3CSHOWU3EC__ANONSTOREY1_T3170924442_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Advertisement/<Show>c__AnonStorey1
struct  U3CShowU3Ec__AnonStorey1_t3170924442  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.Advertisement/<Show>c__AnonStorey1::finishHandler
	EventHandler_1_t908338235 * ___finishHandler_0;
	// UnityEngine.Advertisements.Advertisement/<Show>c__AnonStorey0 UnityEngine.Advertisements.Advertisement/<Show>c__AnonStorey1::<>f__ref$0
	U3CShowU3Ec__AnonStorey0_t3170924441 * ___U3CU3Ef__refU240_1;

public:
	inline static int32_t get_offset_of_finishHandler_0() { return static_cast<int32_t>(offsetof(U3CShowU3Ec__AnonStorey1_t3170924442, ___finishHandler_0)); }
	inline EventHandler_1_t908338235 * get_finishHandler_0() const { return ___finishHandler_0; }
	inline EventHandler_1_t908338235 ** get_address_of_finishHandler_0() { return &___finishHandler_0; }
	inline void set_finishHandler_0(EventHandler_1_t908338235 * value)
	{
		___finishHandler_0 = value;
		Il2CppCodeGenWriteBarrier((&___finishHandler_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU240_1() { return static_cast<int32_t>(offsetof(U3CShowU3Ec__AnonStorey1_t3170924442, ___U3CU3Ef__refU240_1)); }
	inline U3CShowU3Ec__AnonStorey0_t3170924441 * get_U3CU3Ef__refU240_1() const { return ___U3CU3Ef__refU240_1; }
	inline U3CShowU3Ec__AnonStorey0_t3170924441 ** get_address_of_U3CU3Ef__refU240_1() { return &___U3CU3Ef__refU240_1; }
	inline void set_U3CU3Ef__refU240_1(U3CShowU3Ec__AnonStorey0_t3170924441 * value)
	{
		___U3CU3Ef__refU240_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__refU240_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSHOWU3EC__ANONSTOREY1_T3170924442_H
#ifndef U3CONUNITYADSFINISHU3EC__ANONSTOREY2_T696879596_H
#define U3CONUNITYADSFINISHU3EC__ANONSTOREY2_T696879596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Android.Platform/<onUnityAdsFinish>c__AnonStorey2
struct  U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.Android.Platform/<onUnityAdsFinish>c__AnonStorey2::handler
	EventHandler_1_t908338235 * ___handler_0;
	// System.String UnityEngine.Advertisements.Android.Platform/<onUnityAdsFinish>c__AnonStorey2::placementId
	String_t* ___placementId_1;
	// UnityEngine.Advertisements.Android.Platform UnityEngine.Advertisements.Android.Platform/<onUnityAdsFinish>c__AnonStorey2::$this
	Platform_t1698302846 * ___U24this_2;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596, ___handler_0)); }
	inline EventHandler_1_t908338235 * get_handler_0() const { return ___handler_0; }
	inline EventHandler_1_t908338235 ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(EventHandler_1_t908338235 * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((&___handler_0), value);
	}

	inline static int32_t get_offset_of_placementId_1() { return static_cast<int32_t>(offsetof(U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596, ___placementId_1)); }
	inline String_t* get_placementId_1() const { return ___placementId_1; }
	inline String_t** get_address_of_placementId_1() { return &___placementId_1; }
	inline void set_placementId_1(String_t* value)
	{
		___placementId_1 = value;
		Il2CppCodeGenWriteBarrier((&___placementId_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596, ___U24this_2)); }
	inline Platform_t1698302846 * get_U24this_2() const { return ___U24this_2; }
	inline Platform_t1698302846 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(Platform_t1698302846 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CONUNITYADSFINISHU3EC__ANONSTOREY2_T696879596_H
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public RuntimeObject
{
public:

public:
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_0)); }
	inline Stream_t1273022909 * get_Null_0() const { return ___Null_0; }
	inline Stream_t1273022909 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t1273022909 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
#ifndef DICTIONARY_2_T4177511560_H
#define DICTIONARY_2_T4177511560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct  Dictionary_2_t4177511560  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	BooleanU5BU5D_t2897418192* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560, ___valueSlots_7)); }
	inline BooleanU5BU5D_t2897418192* get_valueSlots_7() const { return ___valueSlots_7; }
	inline BooleanU5BU5D_t2897418192** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(BooleanU5BU5D_t2897418192* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t4177511560_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1747829908 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1747829908 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1747829908 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1747829908 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T4177511560_H
#ifndef CONFIGURATION_T1722493896_H
#define CONFIGURATION_T1722493896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Editor.Configuration
struct  Configuration_t1722493896  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Advertisements.Editor.Configuration::<enabled>k__BackingField
	bool ___U3CenabledU3Ek__BackingField_0;
	// System.String UnityEngine.Advertisements.Editor.Configuration::<defaultPlacement>k__BackingField
	String_t* ___U3CdefaultPlacementU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> UnityEngine.Advertisements.Editor.Configuration::<placements>k__BackingField
	Dictionary_2_t4177511560 * ___U3CplacementsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CenabledU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Configuration_t1722493896, ___U3CenabledU3Ek__BackingField_0)); }
	inline bool get_U3CenabledU3Ek__BackingField_0() const { return ___U3CenabledU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CenabledU3Ek__BackingField_0() { return &___U3CenabledU3Ek__BackingField_0; }
	inline void set_U3CenabledU3Ek__BackingField_0(bool value)
	{
		___U3CenabledU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CdefaultPlacementU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Configuration_t1722493896, ___U3CdefaultPlacementU3Ek__BackingField_1)); }
	inline String_t* get_U3CdefaultPlacementU3Ek__BackingField_1() const { return ___U3CdefaultPlacementU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CdefaultPlacementU3Ek__BackingField_1() { return &___U3CdefaultPlacementU3Ek__BackingField_1; }
	inline void set_U3CdefaultPlacementU3Ek__BackingField_1(String_t* value)
	{
		___U3CdefaultPlacementU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CdefaultPlacementU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CplacementsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Configuration_t1722493896, ___U3CplacementsU3Ek__BackingField_2)); }
	inline Dictionary_2_t4177511560 * get_U3CplacementsU3Ek__BackingField_2() const { return ___U3CplacementsU3Ek__BackingField_2; }
	inline Dictionary_2_t4177511560 ** get_address_of_U3CplacementsU3Ek__BackingField_2() { return &___U3CplacementsU3Ek__BackingField_2; }
	inline void set_U3CplacementsU3Ek__BackingField_2(Dictionary_2_t4177511560 * value)
	{
		___U3CplacementsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CplacementsU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATION_T1722493896_H
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
#ifndef QUEUE_1_T382223268_H
#define QUEUE_1_T382223268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1<System.Action`1<UnityEngine.Advertisements.CallbackExecutor>>
struct  Queue_1_t382223268  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	Action_1U5BU5D_t3839123403* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t382223268, ____array_0)); }
	inline Action_1U5BU5D_t3839123403* get__array_0() const { return ____array_0; }
	inline Action_1U5BU5D_t3839123403** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(Action_1U5BU5D_t3839123403* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t382223268, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t382223268, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t382223268, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t382223268, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_1_T382223268_H
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
#ifndef U3CONUNITYADSERRORU3EC__ANONSTOREY5_T3709914535_H
#define U3CONUNITYADSERRORU3EC__ANONSTOREY5_T3709914535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Android.Platform/<onUnityAdsError>c__AnonStorey5
struct  U3ConUnityAdsErrorU3Ec__AnonStorey5_t3709914535  : public RuntimeObject
{
public:
	// System.Int64 UnityEngine.Advertisements.Android.Platform/<onUnityAdsError>c__AnonStorey5::error
	int64_t ___error_0;
	// UnityEngine.Advertisements.Android.Platform/<onUnityAdsError>c__AnonStorey4 UnityEngine.Advertisements.Android.Platform/<onUnityAdsError>c__AnonStorey5::<>f__ref$4
	U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180 * ___U3CU3Ef__refU244_1;

public:
	inline static int32_t get_offset_of_error_0() { return static_cast<int32_t>(offsetof(U3ConUnityAdsErrorU3Ec__AnonStorey5_t3709914535, ___error_0)); }
	inline int64_t get_error_0() const { return ___error_0; }
	inline int64_t* get_address_of_error_0() { return &___error_0; }
	inline void set_error_0(int64_t value)
	{
		___error_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU244_1() { return static_cast<int32_t>(offsetof(U3ConUnityAdsErrorU3Ec__AnonStorey5_t3709914535, ___U3CU3Ef__refU244_1)); }
	inline U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180 * get_U3CU3Ef__refU244_1() const { return ___U3CU3Ef__refU244_1; }
	inline U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180 ** get_address_of_U3CU3Ef__refU244_1() { return &___U3CU3Ef__refU244_1; }
	inline void set_U3CU3Ef__refU244_1(U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180 * value)
	{
		___U3CU3Ef__refU244_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__refU244_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CONUNITYADSERRORU3EC__ANONSTOREY5_T3709914535_H
#ifndef U3CONUNITYADSERRORU3EC__ANONSTOREY4_T981031180_H
#define U3CONUNITYADSERRORU3EC__ANONSTOREY4_T981031180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Android.Platform/<onUnityAdsError>c__AnonStorey4
struct  U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs> UnityEngine.Advertisements.Android.Platform/<onUnityAdsError>c__AnonStorey4::handler
	EventHandler_1_t177306446 * ___handler_0;
	// System.String UnityEngine.Advertisements.Android.Platform/<onUnityAdsError>c__AnonStorey4::message
	String_t* ___message_1;
	// UnityEngine.Advertisements.Android.Platform UnityEngine.Advertisements.Android.Platform/<onUnityAdsError>c__AnonStorey4::$this
	Platform_t1698302846 * ___U24this_2;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180, ___handler_0)); }
	inline EventHandler_1_t177306446 * get_handler_0() const { return ___handler_0; }
	inline EventHandler_1_t177306446 ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(EventHandler_1_t177306446 * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((&___handler_0), value);
	}

	inline static int32_t get_offset_of_message_1() { return static_cast<int32_t>(offsetof(U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180, ___message_1)); }
	inline String_t* get_message_1() const { return ___message_1; }
	inline String_t** get_address_of_message_1() { return &___message_1; }
	inline void set_message_1(String_t* value)
	{
		___message_1 = value;
		Il2CppCodeGenWriteBarrier((&___message_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180, ___U24this_2)); }
	inline Platform_t1698302846 * get_U24this_2() const { return ___U24this_2; }
	inline Platform_t1698302846 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(Platform_t1698302846 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CONUNITYADSERRORU3EC__ANONSTOREY4_T981031180_H
#ifndef U3CUNITYADSREADYU3EC__ANONSTOREY0_T1009704718_H
#define U3CUNITYADSREADYU3EC__ANONSTOREY0_T1009704718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform/<UnityAdsReady>c__AnonStorey0
struct  U3CUnityAdsReadyU3Ec__AnonStorey0_t1009704718  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs> UnityEngine.Advertisements.iOS.Platform/<UnityAdsReady>c__AnonStorey0::handler
	EventHandler_1_t2768214265 * ___handler_0;
	// System.String UnityEngine.Advertisements.iOS.Platform/<UnityAdsReady>c__AnonStorey0::placementId
	String_t* ___placementId_1;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(U3CUnityAdsReadyU3Ec__AnonStorey0_t1009704718, ___handler_0)); }
	inline EventHandler_1_t2768214265 * get_handler_0() const { return ___handler_0; }
	inline EventHandler_1_t2768214265 ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(EventHandler_1_t2768214265 * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((&___handler_0), value);
	}

	inline static int32_t get_offset_of_placementId_1() { return static_cast<int32_t>(offsetof(U3CUnityAdsReadyU3Ec__AnonStorey0_t1009704718, ___placementId_1)); }
	inline String_t* get_placementId_1() const { return ___placementId_1; }
	inline String_t** get_address_of_placementId_1() { return &___placementId_1; }
	inline void set_placementId_1(String_t* value)
	{
		___placementId_1 = value;
		Il2CppCodeGenWriteBarrier((&___placementId_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CUNITYADSREADYU3EC__ANONSTOREY0_T1009704718_H
#ifndef U3CSHOWU3EC__ANONSTOREY0_T3170924441_H
#define U3CSHOWU3EC__ANONSTOREY0_T3170924441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Advertisement/<Show>c__AnonStorey0
struct  U3CShowU3Ec__AnonStorey0_t3170924441  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.ShowOptions UnityEngine.Advertisements.Advertisement/<Show>c__AnonStorey0::showOptions
	ShowOptions_t990845000 * ___showOptions_0;

public:
	inline static int32_t get_offset_of_showOptions_0() { return static_cast<int32_t>(offsetof(U3CShowU3Ec__AnonStorey0_t3170924441, ___showOptions_0)); }
	inline ShowOptions_t990845000 * get_showOptions_0() const { return ___showOptions_0; }
	inline ShowOptions_t990845000 ** get_address_of_showOptions_0() { return &___showOptions_0; }
	inline void set_showOptions_0(ShowOptions_t990845000 * value)
	{
		___showOptions_0 = value;
		Il2CppCodeGenWriteBarrier((&___showOptions_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSHOWU3EC__ANONSTOREY0_T3170924441_H
#ifndef METADATA_T2274729001_H
#define METADATA_T2274729001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.MetaData
struct  MetaData_t2274729001  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Advertisements.MetaData::m_MetaData
	RuntimeObject* ___m_MetaData_0;
	// System.String UnityEngine.Advertisements.MetaData::<category>k__BackingField
	String_t* ___U3CcategoryU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_m_MetaData_0() { return static_cast<int32_t>(offsetof(MetaData_t2274729001, ___m_MetaData_0)); }
	inline RuntimeObject* get_m_MetaData_0() const { return ___m_MetaData_0; }
	inline RuntimeObject** get_address_of_m_MetaData_0() { return &___m_MetaData_0; }
	inline void set_m_MetaData_0(RuntimeObject* value)
	{
		___m_MetaData_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_MetaData_0), value);
	}

	inline static int32_t get_offset_of_U3CcategoryU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MetaData_t2274729001, ___U3CcategoryU3Ek__BackingField_1)); }
	inline String_t* get_U3CcategoryU3Ek__BackingField_1() const { return ___U3CcategoryU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CcategoryU3Ek__BackingField_1() { return &___U3CcategoryU3Ek__BackingField_1; }
	inline void set_U3CcategoryU3Ek__BackingField_1(String_t* value)
	{
		___U3CcategoryU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcategoryU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METADATA_T2274729001_H
#ifndef PLATFORM_T2756657262_H
#define PLATFORM_T2756657262_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Editor.Platform
struct  Platform_t2756657262  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Advertisements.Editor.Platform::m_DebugMode
	bool ___m_DebugMode_1;
	// UnityEngine.Advertisements.Editor.Configuration UnityEngine.Advertisements.Editor.Platform::m_Configuration
	Configuration_t1722493896 * ___m_Configuration_2;
	// UnityEngine.Advertisements.Editor.Placeholder UnityEngine.Advertisements.Editor.Platform::m_Placeholder
	Placeholder_t2906495853 * ___m_Placeholder_3;
	// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs> UnityEngine.Advertisements.Editor.Platform::OnStart
	EventHandler_1_t2215985868 * ___OnStart_4;
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.Editor.Platform::OnFinish
	EventHandler_1_t908338235 * ___OnFinish_5;

public:
	inline static int32_t get_offset_of_m_DebugMode_1() { return static_cast<int32_t>(offsetof(Platform_t2756657262, ___m_DebugMode_1)); }
	inline bool get_m_DebugMode_1() const { return ___m_DebugMode_1; }
	inline bool* get_address_of_m_DebugMode_1() { return &___m_DebugMode_1; }
	inline void set_m_DebugMode_1(bool value)
	{
		___m_DebugMode_1 = value;
	}

	inline static int32_t get_offset_of_m_Configuration_2() { return static_cast<int32_t>(offsetof(Platform_t2756657262, ___m_Configuration_2)); }
	inline Configuration_t1722493896 * get_m_Configuration_2() const { return ___m_Configuration_2; }
	inline Configuration_t1722493896 ** get_address_of_m_Configuration_2() { return &___m_Configuration_2; }
	inline void set_m_Configuration_2(Configuration_t1722493896 * value)
	{
		___m_Configuration_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Configuration_2), value);
	}

	inline static int32_t get_offset_of_m_Placeholder_3() { return static_cast<int32_t>(offsetof(Platform_t2756657262, ___m_Placeholder_3)); }
	inline Placeholder_t2906495853 * get_m_Placeholder_3() const { return ___m_Placeholder_3; }
	inline Placeholder_t2906495853 ** get_address_of_m_Placeholder_3() { return &___m_Placeholder_3; }
	inline void set_m_Placeholder_3(Placeholder_t2906495853 * value)
	{
		___m_Placeholder_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Placeholder_3), value);
	}

	inline static int32_t get_offset_of_OnStart_4() { return static_cast<int32_t>(offsetof(Platform_t2756657262, ___OnStart_4)); }
	inline EventHandler_1_t2215985868 * get_OnStart_4() const { return ___OnStart_4; }
	inline EventHandler_1_t2215985868 ** get_address_of_OnStart_4() { return &___OnStart_4; }
	inline void set_OnStart_4(EventHandler_1_t2215985868 * value)
	{
		___OnStart_4 = value;
		Il2CppCodeGenWriteBarrier((&___OnStart_4), value);
	}

	inline static int32_t get_offset_of_OnFinish_5() { return static_cast<int32_t>(offsetof(Platform_t2756657262, ___OnFinish_5)); }
	inline EventHandler_1_t908338235 * get_OnFinish_5() const { return ___OnFinish_5; }
	inline EventHandler_1_t908338235 ** get_address_of_OnFinish_5() { return &___OnFinish_5; }
	inline void set_OnFinish_5(EventHandler_1_t908338235 * value)
	{
		___OnFinish_5 = value;
		Il2CppCodeGenWriteBarrier((&___OnFinish_5), value);
	}
};

struct Platform_t2756657262_StaticFields
{
public:
	// System.String UnityEngine.Advertisements.Editor.Platform::s_BaseUrl
	String_t* ___s_BaseUrl_0;

public:
	inline static int32_t get_offset_of_s_BaseUrl_0() { return static_cast<int32_t>(offsetof(Platform_t2756657262_StaticFields, ___s_BaseUrl_0)); }
	inline String_t* get_s_BaseUrl_0() const { return ___s_BaseUrl_0; }
	inline String_t** get_address_of_s_BaseUrl_0() { return &___s_BaseUrl_0; }
	inline void set_s_BaseUrl_0(String_t* value)
	{
		___s_BaseUrl_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_BaseUrl_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORM_T2756657262_H
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
#ifndef UNSUPPORTEDPLATFORM_T2036049172_H
#define UNSUPPORTEDPLATFORM_T2036049172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.UnsupportedPlatform
struct  UnsupportedPlatform_t2036049172  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.UnsupportedPlatform::OnFinish
	EventHandler_1_t908338235 * ___OnFinish_0;

public:
	inline static int32_t get_offset_of_OnFinish_0() { return static_cast<int32_t>(offsetof(UnsupportedPlatform_t2036049172, ___OnFinish_0)); }
	inline EventHandler_1_t908338235 * get_OnFinish_0() const { return ___OnFinish_0; }
	inline EventHandler_1_t908338235 ** get_address_of_OnFinish_0() { return &___OnFinish_0; }
	inline void set_OnFinish_0(EventHandler_1_t908338235 * value)
	{
		___OnFinish_0 = value;
		Il2CppCodeGenWriteBarrier((&___OnFinish_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNSUPPORTEDPLATFORM_T2036049172_H
#ifndef PLATFORM_T1647901813_H
#define PLATFORM_T1647901813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform
struct  Platform_t1647901813  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs> UnityEngine.Advertisements.iOS.Platform::OnReady
	EventHandler_1_t2768214265 * ___OnReady_2;
	// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs> UnityEngine.Advertisements.iOS.Platform::OnStart
	EventHandler_1_t2215985868 * ___OnStart_3;
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.iOS.Platform::OnFinish
	EventHandler_1_t908338235 * ___OnFinish_4;
	// System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs> UnityEngine.Advertisements.iOS.Platform::OnError
	EventHandler_1_t177306446 * ___OnError_5;

public:
	inline static int32_t get_offset_of_OnReady_2() { return static_cast<int32_t>(offsetof(Platform_t1647901813, ___OnReady_2)); }
	inline EventHandler_1_t2768214265 * get_OnReady_2() const { return ___OnReady_2; }
	inline EventHandler_1_t2768214265 ** get_address_of_OnReady_2() { return &___OnReady_2; }
	inline void set_OnReady_2(EventHandler_1_t2768214265 * value)
	{
		___OnReady_2 = value;
		Il2CppCodeGenWriteBarrier((&___OnReady_2), value);
	}

	inline static int32_t get_offset_of_OnStart_3() { return static_cast<int32_t>(offsetof(Platform_t1647901813, ___OnStart_3)); }
	inline EventHandler_1_t2215985868 * get_OnStart_3() const { return ___OnStart_3; }
	inline EventHandler_1_t2215985868 ** get_address_of_OnStart_3() { return &___OnStart_3; }
	inline void set_OnStart_3(EventHandler_1_t2215985868 * value)
	{
		___OnStart_3 = value;
		Il2CppCodeGenWriteBarrier((&___OnStart_3), value);
	}

	inline static int32_t get_offset_of_OnFinish_4() { return static_cast<int32_t>(offsetof(Platform_t1647901813, ___OnFinish_4)); }
	inline EventHandler_1_t908338235 * get_OnFinish_4() const { return ___OnFinish_4; }
	inline EventHandler_1_t908338235 ** get_address_of_OnFinish_4() { return &___OnFinish_4; }
	inline void set_OnFinish_4(EventHandler_1_t908338235 * value)
	{
		___OnFinish_4 = value;
		Il2CppCodeGenWriteBarrier((&___OnFinish_4), value);
	}

	inline static int32_t get_offset_of_OnError_5() { return static_cast<int32_t>(offsetof(Platform_t1647901813, ___OnError_5)); }
	inline EventHandler_1_t177306446 * get_OnError_5() const { return ___OnError_5; }
	inline EventHandler_1_t177306446 ** get_address_of_OnError_5() { return &___OnError_5; }
	inline void set_OnError_5(EventHandler_1_t177306446 * value)
	{
		___OnError_5 = value;
		Il2CppCodeGenWriteBarrier((&___OnError_5), value);
	}
};

struct Platform_t1647901813_StaticFields
{
public:
	// UnityEngine.Advertisements.iOS.Platform UnityEngine.Advertisements.iOS.Platform::s_Instance
	Platform_t1647901813 * ___s_Instance_0;
	// UnityEngine.Advertisements.CallbackExecutor UnityEngine.Advertisements.iOS.Platform::s_CallbackExecutor
	CallbackExecutor_t363496179 * ___s_CallbackExecutor_1;
	// UnityEngine.Advertisements.iOS.Platform/unityAdsReady UnityEngine.Advertisements.iOS.Platform::<>f__mg$cache0
	unityAdsReady_t96934738 * ___U3CU3Ef__mgU24cache0_6;
	// UnityEngine.Advertisements.iOS.Platform/unityAdsDidError UnityEngine.Advertisements.iOS.Platform::<>f__mg$cache1
	unityAdsDidError_t1993223595 * ___U3CU3Ef__mgU24cache1_7;
	// UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart UnityEngine.Advertisements.iOS.Platform::<>f__mg$cache2
	unityAdsDidStart_t1058412932 * ___U3CU3Ef__mgU24cache2_8;
	// UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish UnityEngine.Advertisements.iOS.Platform::<>f__mg$cache3
	unityAdsDidFinish_t3747416149 * ___U3CU3Ef__mgU24cache3_9;

public:
	inline static int32_t get_offset_of_s_Instance_0() { return static_cast<int32_t>(offsetof(Platform_t1647901813_StaticFields, ___s_Instance_0)); }
	inline Platform_t1647901813 * get_s_Instance_0() const { return ___s_Instance_0; }
	inline Platform_t1647901813 ** get_address_of_s_Instance_0() { return &___s_Instance_0; }
	inline void set_s_Instance_0(Platform_t1647901813 * value)
	{
		___s_Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_Instance_0), value);
	}

	inline static int32_t get_offset_of_s_CallbackExecutor_1() { return static_cast<int32_t>(offsetof(Platform_t1647901813_StaticFields, ___s_CallbackExecutor_1)); }
	inline CallbackExecutor_t363496179 * get_s_CallbackExecutor_1() const { return ___s_CallbackExecutor_1; }
	inline CallbackExecutor_t363496179 ** get_address_of_s_CallbackExecutor_1() { return &___s_CallbackExecutor_1; }
	inline void set_s_CallbackExecutor_1(CallbackExecutor_t363496179 * value)
	{
		___s_CallbackExecutor_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_CallbackExecutor_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_6() { return static_cast<int32_t>(offsetof(Platform_t1647901813_StaticFields, ___U3CU3Ef__mgU24cache0_6)); }
	inline unityAdsReady_t96934738 * get_U3CU3Ef__mgU24cache0_6() const { return ___U3CU3Ef__mgU24cache0_6; }
	inline unityAdsReady_t96934738 ** get_address_of_U3CU3Ef__mgU24cache0_6() { return &___U3CU3Ef__mgU24cache0_6; }
	inline void set_U3CU3Ef__mgU24cache0_6(unityAdsReady_t96934738 * value)
	{
		___U3CU3Ef__mgU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_7() { return static_cast<int32_t>(offsetof(Platform_t1647901813_StaticFields, ___U3CU3Ef__mgU24cache1_7)); }
	inline unityAdsDidError_t1993223595 * get_U3CU3Ef__mgU24cache1_7() const { return ___U3CU3Ef__mgU24cache1_7; }
	inline unityAdsDidError_t1993223595 ** get_address_of_U3CU3Ef__mgU24cache1_7() { return &___U3CU3Ef__mgU24cache1_7; }
	inline void set_U3CU3Ef__mgU24cache1_7(unityAdsDidError_t1993223595 * value)
	{
		___U3CU3Ef__mgU24cache1_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_7), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_8() { return static_cast<int32_t>(offsetof(Platform_t1647901813_StaticFields, ___U3CU3Ef__mgU24cache2_8)); }
	inline unityAdsDidStart_t1058412932 * get_U3CU3Ef__mgU24cache2_8() const { return ___U3CU3Ef__mgU24cache2_8; }
	inline unityAdsDidStart_t1058412932 ** get_address_of_U3CU3Ef__mgU24cache2_8() { return &___U3CU3Ef__mgU24cache2_8; }
	inline void set_U3CU3Ef__mgU24cache2_8(unityAdsDidStart_t1058412932 * value)
	{
		___U3CU3Ef__mgU24cache2_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_8), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_9() { return static_cast<int32_t>(offsetof(Platform_t1647901813_StaticFields, ___U3CU3Ef__mgU24cache3_9)); }
	inline unityAdsDidFinish_t3747416149 * get_U3CU3Ef__mgU24cache3_9() const { return ___U3CU3Ef__mgU24cache3_9; }
	inline unityAdsDidFinish_t3747416149 ** get_address_of_U3CU3Ef__mgU24cache3_9() { return &___U3CU3Ef__mgU24cache3_9; }
	inline void set_U3CU3Ef__mgU24cache3_9(unityAdsDidFinish_t3747416149 * value)
	{
		___U3CU3Ef__mgU24cache3_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORM_T1647901813_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2760389100_H
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
#ifndef SHOWOPTIONS_T990845000_H
#define SHOWOPTIONS_T990845000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.ShowOptions
struct  ShowOptions_t990845000  : public RuntimeObject
{
public:
	// System.Action`1<UnityEngine.Advertisements.ShowResult> UnityEngine.Advertisements.ShowOptions::<resultCallback>k__BackingField
	Action_1_t3243021218 * ___U3CresultCallbackU3Ek__BackingField_0;
	// System.String UnityEngine.Advertisements.ShowOptions::<gamerSid>k__BackingField
	String_t* ___U3CgamerSidU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CresultCallbackU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ShowOptions_t990845000, ___U3CresultCallbackU3Ek__BackingField_0)); }
	inline Action_1_t3243021218 * get_U3CresultCallbackU3Ek__BackingField_0() const { return ___U3CresultCallbackU3Ek__BackingField_0; }
	inline Action_1_t3243021218 ** get_address_of_U3CresultCallbackU3Ek__BackingField_0() { return &___U3CresultCallbackU3Ek__BackingField_0; }
	inline void set_U3CresultCallbackU3Ek__BackingField_0(Action_1_t3243021218 * value)
	{
		___U3CresultCallbackU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CresultCallbackU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CgamerSidU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ShowOptions_t990845000, ___U3CgamerSidU3Ek__BackingField_1)); }
	inline String_t* get_U3CgamerSidU3Ek__BackingField_1() const { return ___U3CgamerSidU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CgamerSidU3Ek__BackingField_1() { return &___U3CgamerSidU3Ek__BackingField_1; }
	inline void set_U3CgamerSidU3Ek__BackingField_1(String_t* value)
	{
		___U3CgamerSidU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CgamerSidU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHOWOPTIONS_T990845000_H
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
#ifndef WEBRESPONSE_T229922639_H
#define WEBRESPONSE_T229922639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebResponse
struct  WebResponse_t229922639  : public MarshalByRefObject_t2760389100
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBRESPONSE_T229922639_H
#ifndef STREAMREADER_T4009935899_H
#define STREAMREADER_T4009935899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamReader
struct  StreamReader_t4009935899  : public TextReader_t283511965
{
public:
	// System.Byte[] System.IO.StreamReader::input_buffer
	ByteU5BU5D_t4116647657* ___input_buffer_1;
	// System.Char[] System.IO.StreamReader::decoded_buffer
	CharU5BU5D_t3528271667* ___decoded_buffer_2;
	// System.Int32 System.IO.StreamReader::decoded_count
	int32_t ___decoded_count_3;
	// System.Int32 System.IO.StreamReader::pos
	int32_t ___pos_4;
	// System.Int32 System.IO.StreamReader::buffer_size
	int32_t ___buffer_size_5;
	// System.Int32 System.IO.StreamReader::do_checks
	int32_t ___do_checks_6;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_t1523322056 * ___encoding_7;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t2204182725 * ___decoder_8;
	// System.IO.Stream System.IO.StreamReader::base_stream
	Stream_t1273022909 * ___base_stream_9;
	// System.Boolean System.IO.StreamReader::mayBlock
	bool ___mayBlock_10;
	// System.Text.StringBuilder System.IO.StreamReader::line_builder
	StringBuilder_t * ___line_builder_11;
	// System.Boolean System.IO.StreamReader::foundCR
	bool ___foundCR_13;

public:
	inline static int32_t get_offset_of_input_buffer_1() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___input_buffer_1)); }
	inline ByteU5BU5D_t4116647657* get_input_buffer_1() const { return ___input_buffer_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_input_buffer_1() { return &___input_buffer_1; }
	inline void set_input_buffer_1(ByteU5BU5D_t4116647657* value)
	{
		___input_buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___input_buffer_1), value);
	}

	inline static int32_t get_offset_of_decoded_buffer_2() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___decoded_buffer_2)); }
	inline CharU5BU5D_t3528271667* get_decoded_buffer_2() const { return ___decoded_buffer_2; }
	inline CharU5BU5D_t3528271667** get_address_of_decoded_buffer_2() { return &___decoded_buffer_2; }
	inline void set_decoded_buffer_2(CharU5BU5D_t3528271667* value)
	{
		___decoded_buffer_2 = value;
		Il2CppCodeGenWriteBarrier((&___decoded_buffer_2), value);
	}

	inline static int32_t get_offset_of_decoded_count_3() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___decoded_count_3)); }
	inline int32_t get_decoded_count_3() const { return ___decoded_count_3; }
	inline int32_t* get_address_of_decoded_count_3() { return &___decoded_count_3; }
	inline void set_decoded_count_3(int32_t value)
	{
		___decoded_count_3 = value;
	}

	inline static int32_t get_offset_of_pos_4() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___pos_4)); }
	inline int32_t get_pos_4() const { return ___pos_4; }
	inline int32_t* get_address_of_pos_4() { return &___pos_4; }
	inline void set_pos_4(int32_t value)
	{
		___pos_4 = value;
	}

	inline static int32_t get_offset_of_buffer_size_5() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___buffer_size_5)); }
	inline int32_t get_buffer_size_5() const { return ___buffer_size_5; }
	inline int32_t* get_address_of_buffer_size_5() { return &___buffer_size_5; }
	inline void set_buffer_size_5(int32_t value)
	{
		___buffer_size_5 = value;
	}

	inline static int32_t get_offset_of_do_checks_6() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___do_checks_6)); }
	inline int32_t get_do_checks_6() const { return ___do_checks_6; }
	inline int32_t* get_address_of_do_checks_6() { return &___do_checks_6; }
	inline void set_do_checks_6(int32_t value)
	{
		___do_checks_6 = value;
	}

	inline static int32_t get_offset_of_encoding_7() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___encoding_7)); }
	inline Encoding_t1523322056 * get_encoding_7() const { return ___encoding_7; }
	inline Encoding_t1523322056 ** get_address_of_encoding_7() { return &___encoding_7; }
	inline void set_encoding_7(Encoding_t1523322056 * value)
	{
		___encoding_7 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_7), value);
	}

	inline static int32_t get_offset_of_decoder_8() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___decoder_8)); }
	inline Decoder_t2204182725 * get_decoder_8() const { return ___decoder_8; }
	inline Decoder_t2204182725 ** get_address_of_decoder_8() { return &___decoder_8; }
	inline void set_decoder_8(Decoder_t2204182725 * value)
	{
		___decoder_8 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_8), value);
	}

	inline static int32_t get_offset_of_base_stream_9() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___base_stream_9)); }
	inline Stream_t1273022909 * get_base_stream_9() const { return ___base_stream_9; }
	inline Stream_t1273022909 ** get_address_of_base_stream_9() { return &___base_stream_9; }
	inline void set_base_stream_9(Stream_t1273022909 * value)
	{
		___base_stream_9 = value;
		Il2CppCodeGenWriteBarrier((&___base_stream_9), value);
	}

	inline static int32_t get_offset_of_mayBlock_10() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___mayBlock_10)); }
	inline bool get_mayBlock_10() const { return ___mayBlock_10; }
	inline bool* get_address_of_mayBlock_10() { return &___mayBlock_10; }
	inline void set_mayBlock_10(bool value)
	{
		___mayBlock_10 = value;
	}

	inline static int32_t get_offset_of_line_builder_11() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___line_builder_11)); }
	inline StringBuilder_t * get_line_builder_11() const { return ___line_builder_11; }
	inline StringBuilder_t ** get_address_of_line_builder_11() { return &___line_builder_11; }
	inline void set_line_builder_11(StringBuilder_t * value)
	{
		___line_builder_11 = value;
		Il2CppCodeGenWriteBarrier((&___line_builder_11), value);
	}

	inline static int32_t get_offset_of_foundCR_13() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___foundCR_13)); }
	inline bool get_foundCR_13() const { return ___foundCR_13; }
	inline bool* get_address_of_foundCR_13() { return &___foundCR_13; }
	inline void set_foundCR_13(bool value)
	{
		___foundCR_13 = value;
	}
};

struct StreamReader_t4009935899_StaticFields
{
public:
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t4009935899 * ___Null_12;

public:
	inline static int32_t get_offset_of_Null_12() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899_StaticFields, ___Null_12)); }
	inline StreamReader_t4009935899 * get_Null_12() const { return ___Null_12; }
	inline StreamReader_t4009935899 ** get_address_of_Null_12() { return &___Null_12; }
	inline void set_Null_12(StreamReader_t4009935899 * value)
	{
		___Null_12 = value;
		Il2CppCodeGenWriteBarrier((&___Null_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMREADER_T4009935899_H
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
#ifndef KEYVALUEPAIR_2_T2530217319_H
#define KEYVALUEPAIR_2_T2530217319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t2530217319 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2530217319_H
#ifndef ERROREVENTARGS_T2253147013_H
#define ERROREVENTARGS_T2253147013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.ErrorEventArgs
struct  ErrorEventArgs_t2253147013  : public EventArgs_t3591816995
{
public:
	// System.Int64 UnityEngine.Advertisements.ErrorEventArgs::<error>k__BackingField
	int64_t ___U3CerrorU3Ek__BackingField_1;
	// System.String UnityEngine.Advertisements.ErrorEventArgs::<message>k__BackingField
	String_t* ___U3CmessageU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CerrorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ErrorEventArgs_t2253147013, ___U3CerrorU3Ek__BackingField_1)); }
	inline int64_t get_U3CerrorU3Ek__BackingField_1() const { return ___U3CerrorU3Ek__BackingField_1; }
	inline int64_t* get_address_of_U3CerrorU3Ek__BackingField_1() { return &___U3CerrorU3Ek__BackingField_1; }
	inline void set_U3CerrorU3Ek__BackingField_1(int64_t value)
	{
		___U3CerrorU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CmessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ErrorEventArgs_t2253147013, ___U3CmessageU3Ek__BackingField_2)); }
	inline String_t* get_U3CmessageU3Ek__BackingField_2() const { return ___U3CmessageU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CmessageU3Ek__BackingField_2() { return &___U3CmessageU3Ek__BackingField_2; }
	inline void set_U3CmessageU3Ek__BackingField_2(String_t* value)
	{
		___U3CmessageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmessageU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERROREVENTARGS_T2253147013_H
#ifndef READYEVENTARGS_T549087536_H
#define READYEVENTARGS_T549087536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.ReadyEventArgs
struct  ReadyEventArgs_t549087536  : public EventArgs_t3591816995
{
public:
	// System.String UnityEngine.Advertisements.ReadyEventArgs::<placementId>k__BackingField
	String_t* ___U3CplacementIdU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CplacementIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ReadyEventArgs_t549087536, ___U3CplacementIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CplacementIdU3Ek__BackingField_1() const { return ___U3CplacementIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CplacementIdU3Ek__BackingField_1() { return &___U3CplacementIdU3Ek__BackingField_1; }
	inline void set_U3CplacementIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CplacementIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CplacementIdU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READYEVENTARGS_T549087536_H
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
#ifndef KEYVALUEPAIR_2_T968067334_H
#define KEYVALUEPAIR_2_T968067334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct  KeyValuePair_2_t968067334 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t968067334, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t968067334, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T968067334_H
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
#ifndef STARTEVENTARGS_T4291826435_H
#define STARTEVENTARGS_T4291826435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.StartEventArgs
struct  StartEventArgs_t4291826435  : public EventArgs_t3591816995
{
public:
	// System.String UnityEngine.Advertisements.StartEventArgs::<placementId>k__BackingField
	String_t* ___U3CplacementIdU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CplacementIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(StartEventArgs_t4291826435, ___U3CplacementIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CplacementIdU3Ek__BackingField_1() const { return ___U3CplacementIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CplacementIdU3Ek__BackingField_1() { return &___U3CplacementIdU3Ek__BackingField_1; }
	inline void set_U3CplacementIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CplacementIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CplacementIdU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STARTEVENTARGS_T4291826435_H
#ifndef ANDROIDJAVACLASS_T32045322_H
#define ANDROIDJAVACLASS_T32045322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AndroidJavaClass
struct  AndroidJavaClass_t32045322  : public AndroidJavaObject_t4131667876
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDJAVACLASS_T32045322_H
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
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
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
#ifndef SCALEMODE_T2341947364_H
#define SCALEMODE_T2341947364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScaleMode
struct  ScaleMode_t2341947364 
{
public:
	// System.Int32 UnityEngine.ScaleMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ScaleMode_t2341947364, ___value___1)); }
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
#endif // SCALEMODE_T2341947364_H
#ifndef RUNTIMEPLATFORM_T4159857903_H
#define RUNTIMEPLATFORM_T4159857903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_t4159857903 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RuntimePlatform_t4159857903, ___value___1)); }
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
#endif // RUNTIMEPLATFORM_T4159857903_H
#ifndef AUTHENTICATIONLEVEL_T1236753641_H
#define AUTHENTICATIONLEVEL_T1236753641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.AuthenticationLevel
struct  AuthenticationLevel_t1236753641 
{
public:
	// System.Int32 System.Net.Security.AuthenticationLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AuthenticationLevel_t1236753641, ___value___1)); }
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
#endif // AUTHENTICATIONLEVEL_T1236753641_H
#ifndef DEBUGLEVELINTERNAL_T4213999277_H
#define DEBUGLEVELINTERNAL_T4213999277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Advertisement/DebugLevelInternal
struct  DebugLevelInternal_t4213999277 
{
public:
	// System.Int32 UnityEngine.Advertisements.Advertisement/DebugLevelInternal::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DebugLevelInternal_t4213999277, ___value___1)); }
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
#endif // DEBUGLEVELINTERNAL_T4213999277_H
#ifndef DEBUGLEVEL_T2669295423_H
#define DEBUGLEVEL_T2669295423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Advertisement/DebugLevel
struct  DebugLevel_t2669295423 
{
public:
	// System.Int32 UnityEngine.Advertisements.Advertisement/DebugLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DebugLevel_t2669295423, ___value___1)); }
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
#endif // DEBUGLEVEL_T2669295423_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef HIDEFLAGS_T4250555765_H
#define HIDEFLAGS_T4250555765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HideFlags
struct  HideFlags_t4250555765 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HideFlags_t4250555765, ___value___1)); }
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
#endif // HIDEFLAGS_T4250555765_H
#ifndef ANDROIDJAVAPROXY_T2835824643_H
#define ANDROIDJAVAPROXY_T2835824643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AndroidJavaProxy
struct  AndroidJavaProxy_t2835824643  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_t32045322 * ___javaInterface_0;
	// UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaProxy::proxyObject
	AndroidJavaObject_t4131667876 * ___proxyObject_1;

public:
	inline static int32_t get_offset_of_javaInterface_0() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_t2835824643, ___javaInterface_0)); }
	inline AndroidJavaClass_t32045322 * get_javaInterface_0() const { return ___javaInterface_0; }
	inline AndroidJavaClass_t32045322 ** get_address_of_javaInterface_0() { return &___javaInterface_0; }
	inline void set_javaInterface_0(AndroidJavaClass_t32045322 * value)
	{
		___javaInterface_0 = value;
		Il2CppCodeGenWriteBarrier((&___javaInterface_0), value);
	}

	inline static int32_t get_offset_of_proxyObject_1() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_t2835824643, ___proxyObject_1)); }
	inline AndroidJavaObject_t4131667876 * get_proxyObject_1() const { return ___proxyObject_1; }
	inline AndroidJavaObject_t4131667876 ** get_address_of_proxyObject_1() { return &___proxyObject_1; }
	inline void set_proxyObject_1(AndroidJavaObject_t4131667876 * value)
	{
		___proxyObject_1 = value;
		Il2CppCodeGenWriteBarrier((&___proxyObject_1), value);
	}
};

struct AndroidJavaProxy_t2835824643_StaticFields
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t3225273728 * ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;

public:
	inline static int32_t get_offset_of_s_JavaLangSystemClass_2() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_t2835824643_StaticFields, ___s_JavaLangSystemClass_2)); }
	inline GlobalJavaObjectRef_t3225273728 * get_s_JavaLangSystemClass_2() const { return ___s_JavaLangSystemClass_2; }
	inline GlobalJavaObjectRef_t3225273728 ** get_address_of_s_JavaLangSystemClass_2() { return &___s_JavaLangSystemClass_2; }
	inline void set_s_JavaLangSystemClass_2(GlobalJavaObjectRef_t3225273728 * value)
	{
		___s_JavaLangSystemClass_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_JavaLangSystemClass_2), value);
	}

	inline static int32_t get_offset_of_s_HashCodeMethodID_3() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_t2835824643_StaticFields, ___s_HashCodeMethodID_3)); }
	inline intptr_t get_s_HashCodeMethodID_3() const { return ___s_HashCodeMethodID_3; }
	inline intptr_t* get_address_of_s_HashCodeMethodID_3() { return &___s_HashCodeMethodID_3; }
	inline void set_s_HashCodeMethodID_3(intptr_t value)
	{
		___s_HashCodeMethodID_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDJAVAPROXY_T2835824643_H
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
#ifndef PLACEMENTSTATE_T4035359335_H
#define PLACEMENTSTATE_T4035359335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.PlacementState
struct  PlacementState_t4035359335 
{
public:
	// System.Int32 UnityEngine.Advertisements.PlacementState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PlacementState_t4035359335, ___value___1)); }
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
#endif // PLACEMENTSTATE_T4035359335_H
#ifndef SHOWRESULT_T3070553623_H
#define SHOWRESULT_T3070553623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.ShowResult
struct  ShowResult_t3070553623 
{
public:
	// System.Int32 UnityEngine.Advertisements.ShowResult::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ShowResult_t3070553623, ___value___1)); }
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
#endif // SHOWRESULT_T3070553623_H
#ifndef WEBREQUEST_T1939381076_H
#define WEBREQUEST_T1939381076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebRequest
struct  WebRequest_t1939381076  : public MarshalByRefObject_t2760389100
{
public:
	// System.Net.Security.AuthenticationLevel System.Net.WebRequest::authentication_level
	int32_t ___authentication_level_4;

public:
	inline static int32_t get_offset_of_authentication_level_4() { return static_cast<int32_t>(offsetof(WebRequest_t1939381076, ___authentication_level_4)); }
	inline int32_t get_authentication_level_4() const { return ___authentication_level_4; }
	inline int32_t* get_address_of_authentication_level_4() { return &___authentication_level_4; }
	inline void set_authentication_level_4(int32_t value)
	{
		___authentication_level_4 = value;
	}
};

struct WebRequest_t1939381076_StaticFields
{
public:
	// System.Collections.Specialized.HybridDictionary System.Net.WebRequest::prefixes
	HybridDictionary_t4070033136 * ___prefixes_1;
	// System.Boolean System.Net.WebRequest::isDefaultWebProxySet
	bool ___isDefaultWebProxySet_2;
	// System.Net.IWebProxy System.Net.WebRequest::defaultWebProxy
	RuntimeObject* ___defaultWebProxy_3;
	// System.Object System.Net.WebRequest::lockobj
	RuntimeObject * ___lockobj_5;

public:
	inline static int32_t get_offset_of_prefixes_1() { return static_cast<int32_t>(offsetof(WebRequest_t1939381076_StaticFields, ___prefixes_1)); }
	inline HybridDictionary_t4070033136 * get_prefixes_1() const { return ___prefixes_1; }
	inline HybridDictionary_t4070033136 ** get_address_of_prefixes_1() { return &___prefixes_1; }
	inline void set_prefixes_1(HybridDictionary_t4070033136 * value)
	{
		___prefixes_1 = value;
		Il2CppCodeGenWriteBarrier((&___prefixes_1), value);
	}

	inline static int32_t get_offset_of_isDefaultWebProxySet_2() { return static_cast<int32_t>(offsetof(WebRequest_t1939381076_StaticFields, ___isDefaultWebProxySet_2)); }
	inline bool get_isDefaultWebProxySet_2() const { return ___isDefaultWebProxySet_2; }
	inline bool* get_address_of_isDefaultWebProxySet_2() { return &___isDefaultWebProxySet_2; }
	inline void set_isDefaultWebProxySet_2(bool value)
	{
		___isDefaultWebProxySet_2 = value;
	}

	inline static int32_t get_offset_of_defaultWebProxy_3() { return static_cast<int32_t>(offsetof(WebRequest_t1939381076_StaticFields, ___defaultWebProxy_3)); }
	inline RuntimeObject* get_defaultWebProxy_3() const { return ___defaultWebProxy_3; }
	inline RuntimeObject** get_address_of_defaultWebProxy_3() { return &___defaultWebProxy_3; }
	inline void set_defaultWebProxy_3(RuntimeObject* value)
	{
		___defaultWebProxy_3 = value;
		Il2CppCodeGenWriteBarrier((&___defaultWebProxy_3), value);
	}

	inline static int32_t get_offset_of_lockobj_5() { return static_cast<int32_t>(offsetof(WebRequest_t1939381076_StaticFields, ___lockobj_5)); }
	inline RuntimeObject * get_lockobj_5() const { return ___lockobj_5; }
	inline RuntimeObject ** get_address_of_lockobj_5() { return &___lockobj_5; }
	inline void set_lockobj_5(RuntimeObject * value)
	{
		___lockobj_5 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUEST_T1939381076_H
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
#ifndef U3CUNITYADSDIDFINISHU3EC__ANONSTOREY4_T3126029549_H
#define U3CUNITYADSDIDFINISHU3EC__ANONSTOREY4_T3126029549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidFinish>c__AnonStorey4
struct  U3CUnityAdsDidFinishU3Ec__AnonStorey4_t3126029549  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.ShowResult UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidFinish>c__AnonStorey4::showResult
	int32_t ___showResult_0;
	// UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidFinish>c__AnonStorey3 UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidFinish>c__AnonStorey4::<>f__ref$3
	U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544 * ___U3CU3Ef__refU243_1;

public:
	inline static int32_t get_offset_of_showResult_0() { return static_cast<int32_t>(offsetof(U3CUnityAdsDidFinishU3Ec__AnonStorey4_t3126029549, ___showResult_0)); }
	inline int32_t get_showResult_0() const { return ___showResult_0; }
	inline int32_t* get_address_of_showResult_0() { return &___showResult_0; }
	inline void set_showResult_0(int32_t value)
	{
		___showResult_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU243_1() { return static_cast<int32_t>(offsetof(U3CUnityAdsDidFinishU3Ec__AnonStorey4_t3126029549, ___U3CU3Ef__refU243_1)); }
	inline U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544 * get_U3CU3Ef__refU243_1() const { return ___U3CU3Ef__refU243_1; }
	inline U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544 ** get_address_of_U3CU3Ef__refU243_1() { return &___U3CU3Ef__refU243_1; }
	inline void set_U3CU3Ef__refU243_1(U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544 * value)
	{
		___U3CU3Ef__refU243_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__refU243_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CUNITYADSDIDFINISHU3EC__ANONSTOREY4_T3126029549_H
#ifndef ADVERTISEMENT_T842671397_H
#define ADVERTISEMENT_T842671397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Advertisement
struct  Advertisement_t842671397  : public RuntimeObject
{
public:

public:
};

struct Advertisement_t842671397_StaticFields
{
public:
	// System.Boolean UnityEngine.Advertisements.Advertisement::s_Initialized
	bool ___s_Initialized_0;
	// UnityEngine.Advertisements.IPlatform UnityEngine.Advertisements.Advertisement::s_Platform
	RuntimeObject* ___s_Platform_1;
	// System.Boolean UnityEngine.Advertisements.Advertisement::s_EditorSupportedPlatform
	bool ___s_EditorSupportedPlatform_2;
	// System.Boolean UnityEngine.Advertisements.Advertisement::s_Showing
	bool ___s_Showing_3;
	// UnityEngine.Advertisements.Advertisement/DebugLevelInternal UnityEngine.Advertisements.Advertisement::s_DebugLevel
	int32_t ___s_DebugLevel_4;
	// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs> UnityEngine.Advertisements.Advertisement::<>f__am$cache0
	EventHandler_1_t2215985868 * ___U3CU3Ef__amU24cache0_5;
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.Advertisement::<>f__am$cache1
	EventHandler_1_t908338235 * ___U3CU3Ef__amU24cache1_6;

public:
	inline static int32_t get_offset_of_s_Initialized_0() { return static_cast<int32_t>(offsetof(Advertisement_t842671397_StaticFields, ___s_Initialized_0)); }
	inline bool get_s_Initialized_0() const { return ___s_Initialized_0; }
	inline bool* get_address_of_s_Initialized_0() { return &___s_Initialized_0; }
	inline void set_s_Initialized_0(bool value)
	{
		___s_Initialized_0 = value;
	}

	inline static int32_t get_offset_of_s_Platform_1() { return static_cast<int32_t>(offsetof(Advertisement_t842671397_StaticFields, ___s_Platform_1)); }
	inline RuntimeObject* get_s_Platform_1() const { return ___s_Platform_1; }
	inline RuntimeObject** get_address_of_s_Platform_1() { return &___s_Platform_1; }
	inline void set_s_Platform_1(RuntimeObject* value)
	{
		___s_Platform_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_Platform_1), value);
	}

	inline static int32_t get_offset_of_s_EditorSupportedPlatform_2() { return static_cast<int32_t>(offsetof(Advertisement_t842671397_StaticFields, ___s_EditorSupportedPlatform_2)); }
	inline bool get_s_EditorSupportedPlatform_2() const { return ___s_EditorSupportedPlatform_2; }
	inline bool* get_address_of_s_EditorSupportedPlatform_2() { return &___s_EditorSupportedPlatform_2; }
	inline void set_s_EditorSupportedPlatform_2(bool value)
	{
		___s_EditorSupportedPlatform_2 = value;
	}

	inline static int32_t get_offset_of_s_Showing_3() { return static_cast<int32_t>(offsetof(Advertisement_t842671397_StaticFields, ___s_Showing_3)); }
	inline bool get_s_Showing_3() const { return ___s_Showing_3; }
	inline bool* get_address_of_s_Showing_3() { return &___s_Showing_3; }
	inline void set_s_Showing_3(bool value)
	{
		___s_Showing_3 = value;
	}

	inline static int32_t get_offset_of_s_DebugLevel_4() { return static_cast<int32_t>(offsetof(Advertisement_t842671397_StaticFields, ___s_DebugLevel_4)); }
	inline int32_t get_s_DebugLevel_4() const { return ___s_DebugLevel_4; }
	inline int32_t* get_address_of_s_DebugLevel_4() { return &___s_DebugLevel_4; }
	inline void set_s_DebugLevel_4(int32_t value)
	{
		___s_DebugLevel_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_5() { return static_cast<int32_t>(offsetof(Advertisement_t842671397_StaticFields, ___U3CU3Ef__amU24cache0_5)); }
	inline EventHandler_1_t2215985868 * get_U3CU3Ef__amU24cache0_5() const { return ___U3CU3Ef__amU24cache0_5; }
	inline EventHandler_1_t2215985868 ** get_address_of_U3CU3Ef__amU24cache0_5() { return &___U3CU3Ef__amU24cache0_5; }
	inline void set_U3CU3Ef__amU24cache0_5(EventHandler_1_t2215985868 * value)
	{
		___U3CU3Ef__amU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_5), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_6() { return static_cast<int32_t>(offsetof(Advertisement_t842671397_StaticFields, ___U3CU3Ef__amU24cache1_6)); }
	inline EventHandler_1_t908338235 * get_U3CU3Ef__amU24cache1_6() const { return ___U3CU3Ef__amU24cache1_6; }
	inline EventHandler_1_t908338235 ** get_address_of_U3CU3Ef__amU24cache1_6() { return &___U3CU3Ef__amU24cache1_6; }
	inline void set_U3CU3Ef__amU24cache1_6(EventHandler_1_t908338235 * value)
	{
		___U3CU3Ef__amU24cache1_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADVERTISEMENT_T842671397_H
#ifndef PLATFORM_T1698302846_H
#define PLATFORM_T1698302846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Android.Platform
struct  Platform_t1698302846  : public AndroidJavaProxy_t2835824643
{
public:
	// UnityEngine.AndroidJavaObject UnityEngine.Advertisements.Android.Platform::m_CurrentActivity
	AndroidJavaObject_t4131667876 * ___m_CurrentActivity_4;
	// UnityEngine.AndroidJavaClass UnityEngine.Advertisements.Android.Platform::m_UnityAds
	AndroidJavaClass_t32045322 * ___m_UnityAds_5;
	// UnityEngine.Advertisements.CallbackExecutor UnityEngine.Advertisements.Android.Platform::m_CallbackExecutor
	CallbackExecutor_t363496179 * ___m_CallbackExecutor_6;
	// System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs> UnityEngine.Advertisements.Android.Platform::OnReady
	EventHandler_1_t2768214265 * ___OnReady_7;
	// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs> UnityEngine.Advertisements.Android.Platform::OnStart
	EventHandler_1_t2215985868 * ___OnStart_8;
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.Android.Platform::OnFinish
	EventHandler_1_t908338235 * ___OnFinish_9;
	// System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs> UnityEngine.Advertisements.Android.Platform::OnError
	EventHandler_1_t177306446 * ___OnError_10;

public:
	inline static int32_t get_offset_of_m_CurrentActivity_4() { return static_cast<int32_t>(offsetof(Platform_t1698302846, ___m_CurrentActivity_4)); }
	inline AndroidJavaObject_t4131667876 * get_m_CurrentActivity_4() const { return ___m_CurrentActivity_4; }
	inline AndroidJavaObject_t4131667876 ** get_address_of_m_CurrentActivity_4() { return &___m_CurrentActivity_4; }
	inline void set_m_CurrentActivity_4(AndroidJavaObject_t4131667876 * value)
	{
		___m_CurrentActivity_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentActivity_4), value);
	}

	inline static int32_t get_offset_of_m_UnityAds_5() { return static_cast<int32_t>(offsetof(Platform_t1698302846, ___m_UnityAds_5)); }
	inline AndroidJavaClass_t32045322 * get_m_UnityAds_5() const { return ___m_UnityAds_5; }
	inline AndroidJavaClass_t32045322 ** get_address_of_m_UnityAds_5() { return &___m_UnityAds_5; }
	inline void set_m_UnityAds_5(AndroidJavaClass_t32045322 * value)
	{
		___m_UnityAds_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_UnityAds_5), value);
	}

	inline static int32_t get_offset_of_m_CallbackExecutor_6() { return static_cast<int32_t>(offsetof(Platform_t1698302846, ___m_CallbackExecutor_6)); }
	inline CallbackExecutor_t363496179 * get_m_CallbackExecutor_6() const { return ___m_CallbackExecutor_6; }
	inline CallbackExecutor_t363496179 ** get_address_of_m_CallbackExecutor_6() { return &___m_CallbackExecutor_6; }
	inline void set_m_CallbackExecutor_6(CallbackExecutor_t363496179 * value)
	{
		___m_CallbackExecutor_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_CallbackExecutor_6), value);
	}

	inline static int32_t get_offset_of_OnReady_7() { return static_cast<int32_t>(offsetof(Platform_t1698302846, ___OnReady_7)); }
	inline EventHandler_1_t2768214265 * get_OnReady_7() const { return ___OnReady_7; }
	inline EventHandler_1_t2768214265 ** get_address_of_OnReady_7() { return &___OnReady_7; }
	inline void set_OnReady_7(EventHandler_1_t2768214265 * value)
	{
		___OnReady_7 = value;
		Il2CppCodeGenWriteBarrier((&___OnReady_7), value);
	}

	inline static int32_t get_offset_of_OnStart_8() { return static_cast<int32_t>(offsetof(Platform_t1698302846, ___OnStart_8)); }
	inline EventHandler_1_t2215985868 * get_OnStart_8() const { return ___OnStart_8; }
	inline EventHandler_1_t2215985868 ** get_address_of_OnStart_8() { return &___OnStart_8; }
	inline void set_OnStart_8(EventHandler_1_t2215985868 * value)
	{
		___OnStart_8 = value;
		Il2CppCodeGenWriteBarrier((&___OnStart_8), value);
	}

	inline static int32_t get_offset_of_OnFinish_9() { return static_cast<int32_t>(offsetof(Platform_t1698302846, ___OnFinish_9)); }
	inline EventHandler_1_t908338235 * get_OnFinish_9() const { return ___OnFinish_9; }
	inline EventHandler_1_t908338235 ** get_address_of_OnFinish_9() { return &___OnFinish_9; }
	inline void set_OnFinish_9(EventHandler_1_t908338235 * value)
	{
		___OnFinish_9 = value;
		Il2CppCodeGenWriteBarrier((&___OnFinish_9), value);
	}

	inline static int32_t get_offset_of_OnError_10() { return static_cast<int32_t>(offsetof(Platform_t1698302846, ___OnError_10)); }
	inline EventHandler_1_t177306446 * get_OnError_10() const { return ___OnError_10; }
	inline EventHandler_1_t177306446 ** get_address_of_OnError_10() { return &___OnError_10; }
	inline void set_OnError_10(EventHandler_1_t177306446 * value)
	{
		___OnError_10 = value;
		Il2CppCodeGenWriteBarrier((&___OnError_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORM_T1698302846_H
#ifndef FINISHEVENTARGS_T2984178802_H
#define FINISHEVENTARGS_T2984178802_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.FinishEventArgs
struct  FinishEventArgs_t2984178802  : public EventArgs_t3591816995
{
public:
	// System.String UnityEngine.Advertisements.FinishEventArgs::<placementId>k__BackingField
	String_t* ___U3CplacementIdU3Ek__BackingField_1;
	// UnityEngine.Advertisements.ShowResult UnityEngine.Advertisements.FinishEventArgs::<showResult>k__BackingField
	int32_t ___U3CshowResultU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CplacementIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FinishEventArgs_t2984178802, ___U3CplacementIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CplacementIdU3Ek__BackingField_1() const { return ___U3CplacementIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CplacementIdU3Ek__BackingField_1() { return &___U3CplacementIdU3Ek__BackingField_1; }
	inline void set_U3CplacementIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CplacementIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CplacementIdU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CshowResultU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FinishEventArgs_t2984178802, ___U3CshowResultU3Ek__BackingField_2)); }
	inline int32_t get_U3CshowResultU3Ek__BackingField_2() const { return ___U3CshowResultU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CshowResultU3Ek__BackingField_2() { return &___U3CshowResultU3Ek__BackingField_2; }
	inline void set_U3CshowResultU3Ek__BackingField_2(int32_t value)
	{
		___U3CshowResultU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FINISHEVENTARGS_T2984178802_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef U3CONUNITYADSFINISHU3EC__ANONSTOREY3_T2653194732_H
#define U3CONUNITYADSFINISHU3EC__ANONSTOREY3_T2653194732_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Android.Platform/<onUnityAdsFinish>c__AnonStorey3
struct  U3ConUnityAdsFinishU3Ec__AnonStorey3_t2653194732  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.ShowResult UnityEngine.Advertisements.Android.Platform/<onUnityAdsFinish>c__AnonStorey3::showResult
	int32_t ___showResult_0;
	// UnityEngine.Advertisements.Android.Platform/<onUnityAdsFinish>c__AnonStorey2 UnityEngine.Advertisements.Android.Platform/<onUnityAdsFinish>c__AnonStorey3::<>f__ref$2
	U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596 * ___U3CU3Ef__refU242_1;

public:
	inline static int32_t get_offset_of_showResult_0() { return static_cast<int32_t>(offsetof(U3ConUnityAdsFinishU3Ec__AnonStorey3_t2653194732, ___showResult_0)); }
	inline int32_t get_showResult_0() const { return ___showResult_0; }
	inline int32_t* get_address_of_showResult_0() { return &___showResult_0; }
	inline void set_showResult_0(int32_t value)
	{
		___showResult_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU242_1() { return static_cast<int32_t>(offsetof(U3ConUnityAdsFinishU3Ec__AnonStorey3_t2653194732, ___U3CU3Ef__refU242_1)); }
	inline U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596 * get_U3CU3Ef__refU242_1() const { return ___U3CU3Ef__refU242_1; }
	inline U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596 ** get_address_of_U3CU3Ef__refU242_1() { return &___U3CU3Ef__refU242_1; }
	inline void set_U3CU3Ef__refU242_1(U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596 * value)
	{
		___U3CU3Ef__refU242_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__refU242_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CONUNITYADSFINISHU3EC__ANONSTOREY3_T2653194732_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef ACTION_1_T3243021218_H
#define ACTION_1_T3243021218_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.Advertisements.ShowResult>
struct  Action_1_t3243021218  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3243021218_H
#ifndef WINDOWFUNCTION_T3146511083_H
#define WINDOWFUNCTION_T3146511083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUI/WindowFunction
struct  WindowFunction_t3146511083  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWFUNCTION_T3146511083_H
#ifndef EVENTHANDLER_1_T908338235_H
#define EVENTHANDLER_1_T908338235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>
struct  EventHandler_1_t908338235  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T908338235_H
#ifndef EVENTHANDLER_1_T2215985868_H
#define EVENTHANDLER_1_T2215985868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>
struct  EventHandler_1_t2215985868  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T2215985868_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
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
#ifndef EVENTHANDLER_1_T177306446_H
#define EVENTHANDLER_1_T177306446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>
struct  EventHandler_1_t177306446  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T177306446_H
#ifndef UNITYADSREADY_T96934738_H
#define UNITYADSREADY_T96934738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform/unityAdsReady
struct  unityAdsReady_t96934738  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYADSREADY_T96934738_H
#ifndef UNITYADSDIDERROR_T1993223595_H
#define UNITYADSDIDERROR_T1993223595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform/unityAdsDidError
struct  unityAdsDidError_t1993223595  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYADSDIDERROR_T1993223595_H
#ifndef UNITYADSDIDSTART_T1058412932_H
#define UNITYADSDIDSTART_T1058412932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart
struct  unityAdsDidStart_t1058412932  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYADSDIDSTART_T1058412932_H
#ifndef UNITYADSDIDFINISH_T3747416149_H
#define UNITYADSDIDFINISH_T3747416149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish
struct  unityAdsDidFinish_t3747416149  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYADSDIDFINISH_T3747416149_H
#ifndef ACTION_1_T535963774_H
#define ACTION_1_T535963774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.Advertisements.CallbackExecutor>
struct  Action_1_t535963774  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T535963774_H
#ifndef EVENTHANDLER_1_T2768214265_H
#define EVENTHANDLER_1_T2768214265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>
struct  EventHandler_1_t2768214265  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T2768214265_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef PLACEHOLDER_T2906495853_H
#define PLACEHOLDER_T2906495853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Editor.Placeholder
struct  Placeholder_t2906495853  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Texture2D UnityEngine.Advertisements.Editor.Placeholder::m_LandscapeTexture
	Texture2D_t3840446185 * ___m_LandscapeTexture_2;
	// UnityEngine.Texture2D UnityEngine.Advertisements.Editor.Placeholder::m_PortraitTexture
	Texture2D_t3840446185 * ___m_PortraitTexture_3;
	// System.Boolean UnityEngine.Advertisements.Editor.Placeholder::m_Showing
	bool ___m_Showing_4;
	// System.String UnityEngine.Advertisements.Editor.Placeholder::m_PlacementId
	String_t* ___m_PlacementId_5;
	// System.Boolean UnityEngine.Advertisements.Editor.Placeholder::m_AllowSkip
	bool ___m_AllowSkip_6;
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.Editor.Placeholder::OnFinish
	EventHandler_1_t908338235 * ___OnFinish_7;

public:
	inline static int32_t get_offset_of_m_LandscapeTexture_2() { return static_cast<int32_t>(offsetof(Placeholder_t2906495853, ___m_LandscapeTexture_2)); }
	inline Texture2D_t3840446185 * get_m_LandscapeTexture_2() const { return ___m_LandscapeTexture_2; }
	inline Texture2D_t3840446185 ** get_address_of_m_LandscapeTexture_2() { return &___m_LandscapeTexture_2; }
	inline void set_m_LandscapeTexture_2(Texture2D_t3840446185 * value)
	{
		___m_LandscapeTexture_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_LandscapeTexture_2), value);
	}

	inline static int32_t get_offset_of_m_PortraitTexture_3() { return static_cast<int32_t>(offsetof(Placeholder_t2906495853, ___m_PortraitTexture_3)); }
	inline Texture2D_t3840446185 * get_m_PortraitTexture_3() const { return ___m_PortraitTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_m_PortraitTexture_3() { return &___m_PortraitTexture_3; }
	inline void set_m_PortraitTexture_3(Texture2D_t3840446185 * value)
	{
		___m_PortraitTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PortraitTexture_3), value);
	}

	inline static int32_t get_offset_of_m_Showing_4() { return static_cast<int32_t>(offsetof(Placeholder_t2906495853, ___m_Showing_4)); }
	inline bool get_m_Showing_4() const { return ___m_Showing_4; }
	inline bool* get_address_of_m_Showing_4() { return &___m_Showing_4; }
	inline void set_m_Showing_4(bool value)
	{
		___m_Showing_4 = value;
	}

	inline static int32_t get_offset_of_m_PlacementId_5() { return static_cast<int32_t>(offsetof(Placeholder_t2906495853, ___m_PlacementId_5)); }
	inline String_t* get_m_PlacementId_5() const { return ___m_PlacementId_5; }
	inline String_t** get_address_of_m_PlacementId_5() { return &___m_PlacementId_5; }
	inline void set_m_PlacementId_5(String_t* value)
	{
		___m_PlacementId_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PlacementId_5), value);
	}

	inline static int32_t get_offset_of_m_AllowSkip_6() { return static_cast<int32_t>(offsetof(Placeholder_t2906495853, ___m_AllowSkip_6)); }
	inline bool get_m_AllowSkip_6() const { return ___m_AllowSkip_6; }
	inline bool* get_address_of_m_AllowSkip_6() { return &___m_AllowSkip_6; }
	inline void set_m_AllowSkip_6(bool value)
	{
		___m_AllowSkip_6 = value;
	}

	inline static int32_t get_offset_of_OnFinish_7() { return static_cast<int32_t>(offsetof(Placeholder_t2906495853, ___OnFinish_7)); }
	inline EventHandler_1_t908338235 * get_OnFinish_7() const { return ___OnFinish_7; }
	inline EventHandler_1_t908338235 ** get_address_of_OnFinish_7() { return &___OnFinish_7; }
	inline void set_OnFinish_7(EventHandler_1_t908338235 * value)
	{
		___OnFinish_7 = value;
		Il2CppCodeGenWriteBarrier((&___OnFinish_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLACEHOLDER_T2906495853_H
#ifndef CALLBACKEXECUTOR_T363496179_H
#define CALLBACKEXECUTOR_T363496179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.CallbackExecutor
struct  CallbackExecutor_t363496179  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.Queue`1<System.Action`1<UnityEngine.Advertisements.CallbackExecutor>> UnityEngine.Advertisements.CallbackExecutor::s_Queue
	Queue_1_t382223268 * ___s_Queue_2;

public:
	inline static int32_t get_offset_of_s_Queue_2() { return static_cast<int32_t>(offsetof(CallbackExecutor_t363496179, ___s_Queue_2)); }
	inline Queue_1_t382223268 * get_s_Queue_2() const { return ___s_Queue_2; }
	inline Queue_1_t382223268 ** get_address_of_s_Queue_2() { return &___s_Queue_2; }
	inline void set_s_Queue_2(Queue_1_t382223268 * value)
	{
		___s_Queue_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_Queue_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLBACKEXECUTOR_T363496179_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void EventHandler_1__ctor_m699822512_gshared (EventHandler_1_t1004265597 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Advertisements.ShowResult>::Invoke(!0)
extern "C"  void Action_1_Invoke_m860665472_gshared (Action_1_t3243021218 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
extern "C"  RuntimeObject * AndroidJavaObject_GetStatic_TisRuntimeObject_m2411779517_gshared (AndroidJavaObject_t4131667876 * __this, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m147650894_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m118522912_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
extern "C"  int32_t AndroidJavaObject_Call_TisInt32_t2950945753_m3061355686_gshared (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
extern "C"  bool AndroidJavaObject_CallStatic_TisBoolean_t97287965_m1100851500_gshared (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
extern "C"  RuntimeObject * AndroidJavaObject_CallStatic_TisRuntimeObject_m1663918964_gshared (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m1328507389_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3464904234_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
extern "C"  bool AndroidJavaObject_Call_TisBoolean_t97287965_m2984583508_gshared (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
extern "C"  void EventHandler_1_Invoke_m4124830036_gshared (EventHandler_1_t1004265597 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
extern "C"  void Queue_1__ctor_m3749217910_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
extern "C"  void Queue_1_Enqueue_m1868480850_gshared (Queue_1_t2926365658 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
extern "C"  RuntimeObject * Queue_1_Dequeue_m3550993416_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
extern "C"  void Action_1_Invoke_m2461023210_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
extern "C"  int32_t Queue_1_get_Count_m2496300460_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C"  void Dictionary_2__ctor_m236774955_gshared (Dictionary_2_t1444694249 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m4262304220_gshared (Dictionary_2_t1444694249 * __this, RuntimeObject * p0, bool p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(!0)
extern "C"  bool Dictionary_2_ContainsKey_m1703962396_gshared (Dictionary_2_t1444694249 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(!0)
extern "C"  bool Dictionary_2_get_Item_m872229925_gshared (Dictionary_2_t1444694249 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);

// System.Boolean UnityEngine.Application::get_isEditor()
extern "C"  bool Application_get_isEditor_m857789090 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isSupported()
extern "C"  bool Advertisement_get_isSupported_m1369507557 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C"  int32_t Application_get_platform_m2150679437 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Android.Platform::.ctor()
extern "C"  void Platform__ctor_m3233182567 (Platform_t1698302846 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::.ctor()
extern "C"  void Platform__ctor_m3887152146 (Platform_t1647901813 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::.ctor()
extern "C"  void UnsupportedPlatform__ctor_m1419529813 (UnsupportedPlatform_t2036049172 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern "C"  void Debug_LogException_m2207318968 (RuntimeObject * __this /* static, unused */, Exception_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::Load()
extern "C"  void Advertisement_Load_m3998104966 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Editor.Platform::.ctor(System.String)
extern "C"  void Platform__ctor_m3929159556 (Platform_t2756657262 * __this, String_t* ___extensionPath0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::get_initializeOnStartup()
extern "C"  bool Advertisement_get_initializeOnStartup_m827867793 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.Advertisement::get_gameId()
extern "C"  String_t* Advertisement_get_gameId_m3960932921 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::get_testMode()
extern "C"  bool Advertisement_get_testMode_m1292646014 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean)
extern "C"  void Advertisement_Initialize_m1051450402 (RuntimeObject * __this /* static, unused */, String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.UnityAdsSettings::get_initializeOnStartup()
extern "C"  bool UnityAdsSettings_get_initializeOnStartup_m4135646069 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.UnityAdsSettings::get_enabled()
extern "C"  bool UnityAdsSettings_get_enabled_m805351818 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::IsEnabled()
extern "C"  bool Advertisement_IsEnabled_m3879149330 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.UnityAdsSettings::get_testMode()
extern "C"  bool UnityAdsSettings_get_testMode_m1754589381 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.UnityAdsSettings::GetGameId(UnityEngine.RuntimePlatform)
extern "C"  String_t* UnityAdsSettings_GetGameId_m1540739525 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isInitialized()
extern "C"  bool Advertisement_get_isInitialized_m2728189845 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::set_isInitialized(System.Boolean)
extern "C"  void Advertisement_set_isInitialized_m177689357 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>::.ctor(System.Object,System.IntPtr)
#define EventHandler_1__ctor_m247885508(__this, p0, p1, method) ((  void (*) (EventHandler_1_t2215985868 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m699822512_gshared)(__this, p0, p1, method)
// System.Void System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>::.ctor(System.Object,System.IntPtr)
#define EventHandler_1__ctor_m1760330498(__this, p0, p1, method) ((  void (*) (EventHandler_1_t908338235 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m699822512_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.Advertisements.MetaData::.ctor(System.String)
extern "C"  void MetaData__ctor_m191542684 (MetaData_t2274729001 * __this, String_t* ___category0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.MetaData::Set(System.String,System.Object)
extern "C"  void MetaData_Set_m2920014032 (MetaData_t2274729001 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_unityVersion()
extern "C"  String_t* Application_get_unityVersion_m1068543125 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::SetMetaData(UnityEngine.Advertisements.MetaData)
extern "C"  void Advertisement_SetMetaData_m3821393482 (RuntimeObject * __this /* static, unused */, MetaData_t2274729001 * ___metaData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.Advertisement::get_version()
extern "C"  String_t* Advertisement_get_version_m3333841984 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::IsReady(System.String)
extern "C"  bool Advertisement_IsReady_m2166462196 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C"  bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Advertisements.PlacementState UnityEngine.Advertisements.Advertisement::GetPlacementState(System.String)
extern "C"  int32_t Advertisement_GetPlacementState_m4001863134 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String,UnityEngine.Advertisements.ShowOptions)
extern "C"  void Advertisement_Show_m1413788125 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, ShowOptions_t990845000 * ___showOptions1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement/<Show>c__AnonStorey0::.ctor()
extern "C"  void U3CShowU3Ec__AnonStorey0__ctor_m2448096591 (U3CShowU3Ec__AnonStorey0_t3170924441 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Action`1<UnityEngine.Advertisements.ShowResult> UnityEngine.Advertisements.ShowOptions::get_resultCallback()
extern "C"  Action_1_t3243021218 * ShowOptions_get_resultCallback_m2710569767 (ShowOptions_t990845000 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement/<Show>c__AnonStorey1::.ctor()
extern "C"  void U3CShowU3Ec__AnonStorey1__ctor_m2571500879 (U3CShowU3Ec__AnonStorey1_t3170924442 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.ShowOptions::get_gamerSid()
extern "C"  String_t* ShowOptions_get_gamerSid_m2724807180 (ShowOptions_t990845000 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
extern "C"  bool Debug_get_isDebugBuild_m1389897688 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::set_isShowing(System.Boolean)
extern "C"  void Advertisement_set_isShowing_m1653892022 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Advertisements.ShowResult UnityEngine.Advertisements.FinishEventArgs::get_showResult()
extern "C"  int32_t FinishEventArgs_get_showResult_m2484985128 (FinishEventArgs_t2984178802 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<UnityEngine.Advertisements.ShowResult>::Invoke(!0)
#define Action_1_Invoke_m860665472(__this, p0, method) ((  void (*) (Action_1_t3243021218 *, int32_t, const RuntimeMethod*))Action_1_Invoke_m860665472_gshared)(__this, p0, method)
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
extern "C"  void AndroidJavaProxy__ctor_m545570009 (AndroidJavaProxy_t2835824643 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
extern "C"  void AndroidJavaClass__ctor_m366853020 (AndroidJavaClass_t32045322 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
#define AndroidJavaObject_GetStatic_TisAndroidJavaObject_t4131667876_m671986461(__this, p0, method) ((  AndroidJavaObject_t4131667876 * (*) (AndroidJavaObject_t4131667876 *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m2411779517_gshared)(__this, p0, method)
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C"  void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern "C"  void Object_set_hideFlags_m1648752846 (Object_t631007953 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Advertisements.CallbackExecutor>()
#define GameObject_AddComponent_TisCallbackExecutor_t363496179_m2253360972(__this, method) ((  CallbackExecutor_t363496179 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m147650894_gshared)(__this, method)
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C"  void Object_DontDestroyOnLoad_m166252750 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Android.Platform/<onUnityAdsReady>c__AnonStorey0::.ctor()
extern "C"  void U3ConUnityAdsReadyU3Ec__AnonStorey0__ctor_m2531656002 (U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<UnityEngine.Advertisements.CallbackExecutor>::.ctor(System.Object,System.IntPtr)
#define Action_1__ctor_m246329423(__this, p0, p1, method) ((  void (*) (Action_1_t535963774 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.Advertisements.CallbackExecutor::Post(System.Action`1<UnityEngine.Advertisements.CallbackExecutor>)
extern "C"  void CallbackExecutor_Post_m2417625912 (CallbackExecutor_t363496179 * __this, Action_1_t535963774 * ___action0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Android.Platform/<onUnityAdsStart>c__AnonStorey1::.ctor()
extern "C"  void U3ConUnityAdsStartU3Ec__AnonStorey1__ctor_m1282976937 (U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Android.Platform/<onUnityAdsFinish>c__AnonStorey2::.ctor()
extern "C"  void U3ConUnityAdsFinishU3Ec__AnonStorey2__ctor_m3699482386 (U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Android.Platform/<onUnityAdsFinish>c__AnonStorey3::.ctor()
extern "C"  void U3ConUnityAdsFinishU3Ec__AnonStorey3__ctor_m818981741 (U3ConUnityAdsFinishU3Ec__AnonStorey3_t2653194732 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
#define AndroidJavaObject_Call_TisInt32_t2950945753_m3061355686(__this, p0, p1, method) ((  int32_t (*) (AndroidJavaObject_t4131667876 *, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt32_t2950945753_m3061355686_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.Advertisements.Android.Platform/<onUnityAdsError>c__AnonStorey4::.ctor()
extern "C"  void U3ConUnityAdsErrorU3Ec__AnonStorey4__ctor_m2383325633 (U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Android.Platform/<onUnityAdsError>c__AnonStorey5::.ctor()
extern "C"  void U3ConUnityAdsErrorU3Ec__AnonStorey5__ctor_m2454694337 (U3ConUnityAdsErrorU3Ec__AnonStorey5_t3709914535 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
#define AndroidJavaObject_CallStatic_TisBoolean_t97287965_m1100851500(__this, p0, p1, method) ((  bool (*) (AndroidJavaObject_t4131667876 *, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisBoolean_t97287965_m1100851500_gshared)(__this, p0, p1, method)
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.String>(System.String,System.Object[])
#define AndroidJavaObject_CallStatic_TisString_t_m2571575926(__this, p0, p1, method) ((  String_t* (*) (AndroidJavaObject_t4131667876 *, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_m1663918964_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
extern "C"  void AndroidJavaObject_CallStatic_m2922144688 (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
#define AndroidJavaObject_CallStatic_TisAndroidJavaObject_t4131667876_m2031442458(__this, p0, p1, method) ((  AndroidJavaObject_t4131667876 * (*) (AndroidJavaObject_t4131667876 *, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_m1663918964_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
extern "C"  void AndroidJavaObject__ctor_m3828648572 (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.MetaData::get_category()
extern "C"  String_t* MetaData_get_category_m4241298320 (MetaData_t2274729001 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
extern "C"  void AndroidJavaObject_Call_m1449555179 (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Advertisements.MetaData::get_Values()
extern "C"  RuntimeObject* MetaData_get_Values_m2805296889 (MetaData_t2274729001 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m256823211(__this, method) ((  String_t* (*) (KeyValuePair_2_t968067334 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1328507389_gshared)(__this, method)
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m4108279609(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t968067334 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3464904234_gshared)(__this, method)
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
#define AndroidJavaObject_Call_TisBoolean_t97287965_m2984583508(__this, p0, p1, method) ((  bool (*) (AndroidJavaObject_t4131667876 *, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t97287965_m2984583508_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.Advertisements.ErrorEventArgs::.ctor(System.Int64,System.String)
extern "C"  void ErrorEventArgs__ctor_m2417395018 (ErrorEventArgs_t2253147013 * __this, int64_t ___error0, String_t* ___message1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>::Invoke(System.Object,!0)
#define EventHandler_1_Invoke_m1199075846(__this, p0, p1, method) ((  void (*) (EventHandler_1_t177306446 *, RuntimeObject *, ErrorEventArgs_t2253147013 *, const RuntimeMethod*))EventHandler_1_Invoke_m4124830036_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.Advertisements.FinishEventArgs::.ctor(System.String,UnityEngine.Advertisements.ShowResult)
extern "C"  void FinishEventArgs__ctor_m50835730 (FinishEventArgs_t2984178802 * __this, String_t* ___placementId0, int32_t ___showResult1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>::Invoke(System.Object,!0)
#define EventHandler_1_Invoke_m3162226611(__this, p0, p1, method) ((  void (*) (EventHandler_1_t908338235 *, RuntimeObject *, FinishEventArgs_t2984178802 *, const RuntimeMethod*))EventHandler_1_Invoke_m4124830036_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.Advertisements.ReadyEventArgs::.ctor(System.String)
extern "C"  void ReadyEventArgs__ctor_m1307451034 (ReadyEventArgs_t549087536 * __this, String_t* ___placementId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>::Invoke(System.Object,!0)
#define EventHandler_1_Invoke_m743178406(__this, p0, p1, method) ((  void (*) (EventHandler_1_t2768214265 *, RuntimeObject *, ReadyEventArgs_t549087536 *, const RuntimeMethod*))EventHandler_1_Invoke_m4124830036_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.Advertisements.StartEventArgs::.ctor(System.String)
extern "C"  void StartEventArgs__ctor_m1521341003 (StartEventArgs_t4291826435 * __this, String_t* ___placementId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>::Invoke(System.Object,!0)
#define EventHandler_1_Invoke_m1200448648(__this, p0, p1, method) ((  void (*) (EventHandler_1_t2215985868 *, RuntimeObject *, StartEventArgs_t4291826435 *, const RuntimeMethod*))EventHandler_1_Invoke_m4124830036_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.Queue`1<System.Action`1<UnityEngine.Advertisements.CallbackExecutor>>::.ctor()
#define Queue_1__ctor_m401901252(__this, method) ((  void (*) (Queue_1_t382223268 *, const RuntimeMethod*))Queue_1__ctor_m3749217910_gshared)(__this, method)
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C"  void Monitor_Enter_m2249409497 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Queue`1<System.Action`1<UnityEngine.Advertisements.CallbackExecutor>>::Enqueue(!0)
#define Queue_1_Enqueue_m3882925169(__this, p0, method) ((  void (*) (Queue_1_t382223268 *, Action_1_t535963774 *, const RuntimeMethod*))Queue_1_Enqueue_m1868480850_gshared)(__this, p0, method)
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C"  void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.Queue`1<System.Action`1<UnityEngine.Advertisements.CallbackExecutor>>::Dequeue()
#define Queue_1_Dequeue_m2377473102(__this, method) ((  Action_1_t535963774 * (*) (Queue_1_t382223268 *, const RuntimeMethod*))Queue_1_Dequeue_m3550993416_gshared)(__this, method)
// System.Void System.Action`1<UnityEngine.Advertisements.CallbackExecutor>::Invoke(!0)
#define Action_1_Invoke_m345301731(__this, p0, method) ((  void (*) (Action_1_t535963774 *, CallbackExecutor_t363496179 *, const RuntimeMethod*))Action_1_Invoke_m2461023210_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.Queue`1<System.Action`1<UnityEngine.Advertisements.CallbackExecutor>>::get_Count()
#define Queue_1_get_Count_m2643849061(__this, method) ((  int32_t (*) (Queue_1_t382223268 *, const RuntimeMethod*))Queue_1_get_Count_m2496300460_gshared)(__this, method)
// System.Object SimpleJson.SimpleJson::DeserializeObject(System.String)
extern "C"  RuntimeObject * SimpleJson_DeserializeObject_m4064817826 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Editor.Configuration::set_enabled(System.Boolean)
extern "C"  void Configuration_set_enabled_m3944276849 (Configuration_t1722493896 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor()
#define Dictionary_2__ctor_m2310724936(__this, method) ((  void (*) (Dictionary_2_t4177511560 *, const RuntimeMethod*))Dictionary_2__ctor_m236774955_gshared)(__this, method)
// System.Void UnityEngine.Advertisements.Editor.Configuration::set_placements(System.Collections.Generic.Dictionary`2<System.String,System.Boolean>)
extern "C"  void Configuration_set_placements_m4002258735 (Configuration_t1722493896 * __this, Dictionary_2_t4177511560 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Editor.Configuration::set_defaultPlacement(System.String)
extern "C"  void Configuration_set_defaultPlacement_m3028665897 (Configuration_t1722493896 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> UnityEngine.Advertisements.Editor.Configuration::get_placements()
extern "C"  Dictionary_2_t4177511560 * Configuration_get_placements_m1853086915 (Configuration_t1722493896 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Add(!0,!1)
#define Dictionary_2_Add_m95414296(__this, p0, p1, method) ((  void (*) (Dictionary_2_t4177511560 *, String_t*, bool, const RuntimeMethod*))Dictionary_2_Add_m4262304220_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
extern "C"  void Texture2D__ctor_m373113269 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
extern "C"  ByteU5BU5D_t4116647657* File_ReadAllBytes_m1435775076 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[])
extern "C"  bool ImageConversion_LoadImage_m2182108104 (RuntimeObject * __this /* static, unused */, Texture2D_t3840446185 * p0, ByteU5BU5D_t4116647657* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::Combine(System.String,System.String)
extern "C"  String_t* Path_Combine_m3389272516 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.Advertisements.Editor.Placeholder::TextureFromFile(System.String)
extern "C"  Texture2D_t3840446185 * Placeholder_TextureFromFile_m291359667 (RuntimeObject * __this /* static, unused */, String_t* ___filePath0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_width()
extern "C"  int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_height()
extern "C"  int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI/WindowFunction::.ctor(System.Object,System.IntPtr)
extern "C"  void WindowFunction__ctor_m2544237635 (WindowFunction_t3146511083 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::ModalWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
extern "C"  Rect_t2360479859  GUI_ModalWindow_m2334426705 (RuntimeObject * __this /* static, unused */, int32_t p0, Rect_t2360479859  p1, WindowFunction_t3146511083 * p2, String_t* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode)
extern "C"  void GUI_DrawTexture_m2312292152 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, Texture_t3661962703 * p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
extern "C"  bool GUI_Button_m1518979886 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Advertisements.Editor.Placeholder>()
#define GameObject_AddComponent_TisPlaceholder_t2906495853_m4080008109(__this, method) ((  Placeholder_t2906495853 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m147650894_gshared)(__this, method)
// System.Void UnityEngine.Advertisements.Editor.Placeholder::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C"  void Placeholder_add_OnFinish_m3075927457 (Placeholder_t2906495853 * __this, EventHandler_1_t908338235 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Editor.Placeholder::Load(System.String)
extern "C"  void Placeholder_Load_m1103501462 (Placeholder_t2906495853 * __this, String_t* ___extensionPath0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Editor.Platform/<Initialize>c__AnonStorey0::.ctor()
extern "C"  void U3CInitializeU3Ec__AnonStorey0__ctor_m3353071426 (U3CInitializeU3Ec__AnonStorey0_t2183256279 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::EscapeDataString(System.String)
extern "C"  String_t* Uri_EscapeDataString_m2743853427 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.Editor.Platform::get_version()
extern "C"  String_t* Platform_get_version_m2737893346 (Platform_t2756657262 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Join(System.String,System.String[])
extern "C"  String_t* String_Join_m2050845953 (RuntimeObject * __this /* static, unused */, String_t* p0, StringU5BU5D_t1281789340* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.WebRequest::Create(System.String)
extern "C"  WebRequest_t1939381076 * WebRequest_Create_m1521009289 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void AsyncCallback__ctor_m530647953 (AsyncCallback_t3962456242 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Editor.Platform::get_isInitialized()
extern "C"  bool Platform_get_isInitialized_m472391085 (Platform_t2756657262 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m1412659484(__this, p0, method) ((  bool (*) (Dictionary_2_t4177511560 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m1703962396_gshared)(__this, p0, method)
// System.Boolean UnityEngine.Advertisements.Editor.Platform::IsReady(System.String)
extern "C"  bool Platform_IsReady_m1007373777 (Platform_t2756657262 * __this, String_t* ___placementId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.Editor.Configuration::get_defaultPlacement()
extern "C"  String_t* Configuration_get_defaultPlacement_m3927249128 (Configuration_t1722493896 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Item(!0)
#define Dictionary_2_get_Item_m3494146125(__this, p0, method) ((  bool (*) (Dictionary_2_t4177511560 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m872229925_gshared)(__this, p0, method)
// System.Void UnityEngine.Advertisements.Editor.Placeholder::Show(System.String,System.Boolean)
extern "C"  void Placeholder_Show_m277657847 (Placeholder_t2906495853 * __this, String_t* ___placementId0, bool ___allowSkip1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.FinishEventArgs::get_placementId()
extern "C"  String_t* FinishEventArgs_get_placementId_m3475944639 (FinishEventArgs_t2984178802 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
extern "C"  void StreamReader__ctor_m1047876681 (StreamReader_t4009935899 * __this, Stream_t1273022909 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Editor.Configuration::.ctor(System.String)
extern "C"  void Configuration__ctor_m2049560937 (Configuration_t1722493896 * __this, String_t* ___configurationResponse0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Editor.Configuration::get_enabled()
extern "C"  bool Configuration_get_enabled_m2999626715 (Configuration_t1722493896 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C"  void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventArgs::.ctor()
extern "C"  void EventArgs__ctor_m32674013 (EventArgs_t3591816995 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.ErrorEventArgs::set_error(System.Int64)
extern "C"  void ErrorEventArgs_set_error_m4248800756 (ErrorEventArgs_t2253147013 * __this, int64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.ErrorEventArgs::set_message(System.String)
extern "C"  void ErrorEventArgs_set_message_m3532469052 (ErrorEventArgs_t2253147013 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.FinishEventArgs::set_placementId(System.String)
extern "C"  void FinishEventArgs_set_placementId_m452915092 (FinishEventArgs_t2984178802 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.FinishEventArgs::set_showResult(UnityEngine.Advertisements.ShowResult)
extern "C"  void FinishEventArgs_set_showResult_m203134832 (FinishEventArgs_t2984178802 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsReady(System.String)
extern "C"  void Platform_UnityAdsReady_m2855172723 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsDidError(System.Int64,System.String)
extern "C"  void Platform_UnityAdsDidError_m3621980989 (RuntimeObject * __this /* static, unused */, int64_t ___rawError0, String_t* ___message1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsDidStart(System.String)
extern "C"  void Platform_UnityAdsDidStart_m971319454 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsDidFinish(System.String,System.Int64)
extern "C"  void Platform_UnityAdsDidFinish_m4137038415 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, int64_t ___rawShowResult1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsReady::.ctor(System.Object,System.IntPtr)
extern "C"  void unityAdsReady__ctor_m3699019508 (unityAdsReady_t96934738 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetReadyCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsReady)
extern "C"  void Platform_UnityAdsEngineSetReadyCallback_m572408946 (RuntimeObject * __this /* static, unused */, unityAdsReady_t96934738 * ___callback0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidError::.ctor(System.Object,System.IntPtr)
extern "C"  void unityAdsDidError__ctor_m4120111418 (unityAdsDidError_t1993223595 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetDidErrorCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsDidError)
extern "C"  void Platform_UnityAdsEngineSetDidErrorCallback_m2717679206 (RuntimeObject * __this /* static, unused */, unityAdsDidError_t1993223595 * ___callback0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart::.ctor(System.Object,System.IntPtr)
extern "C"  void unityAdsDidStart__ctor_m610751912 (unityAdsDidStart_t1058412932 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetDidStartCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart)
extern "C"  void Platform_UnityAdsEngineSetDidStartCallback_m104356378 (RuntimeObject * __this /* static, unused */, unityAdsDidStart_t1058412932 * ___callback0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish::.ctor(System.Object,System.IntPtr)
extern "C"  void unityAdsDidFinish__ctor_m3115871303 (unityAdsDidFinish_t3747416149 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetDidFinishCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish)
extern "C"  void Platform_UnityAdsEngineSetDidFinishCallback_m1054131631 (RuntimeObject * __this /* static, unused */, unityAdsDidFinish_t3747416149 * ___callback0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/<UnityAdsReady>c__AnonStorey0::.ctor()
extern "C"  void U3CUnityAdsReadyU3Ec__AnonStorey0__ctor_m676019578 (U3CUnityAdsReadyU3Ec__AnonStorey0_t1009704718 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidError>c__AnonStorey1::.ctor()
extern "C"  void U3CUnityAdsDidErrorU3Ec__AnonStorey1__ctor_m2619504999 (U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidStart>c__AnonStorey2::.ctor()
extern "C"  void U3CUnityAdsDidStartU3Ec__AnonStorey2__ctor_m1780498047 (U3CUnityAdsDidStartU3Ec__AnonStorey2_t250005642 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidFinish>c__AnonStorey3::.ctor()
extern "C"  void U3CUnityAdsDidFinishU3Ec__AnonStorey3__ctor_m138433083 (U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidFinish>c__AnonStorey4::.ctor()
extern "C"  void U3CUnityAdsDidFinishU3Ec__AnonStorey4__ctor_m2012697147 (U3CUnityAdsDidFinishU3Ec__AnonStorey4_t3126029549 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineIsInitialized()
extern "C"  bool Platform_UnityAdsEngineIsInitialized_m3090894253 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineIsSupported()
extern "C"  bool Platform_UnityAdsEngineIsSupported_m2832327113 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineGetVersion()
extern "C"  String_t* Platform_UnityAdsEngineGetVersion_m45362240 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineGetDebugMode()
extern "C"  bool Platform_UnityAdsEngineGetDebugMode_m559010788 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetDebugMode(System.Boolean)
extern "C"  void Platform_UnityAdsEngineSetDebugMode_m2043700802 (RuntimeObject * __this /* static, unused */, bool ___debugMode0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineInitialize(System.String,System.Boolean)
extern "C"  void Platform_UnityAdsEngineInitialize_m3450854254 (RuntimeObject * __this /* static, unused */, String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineIsReady(System.String)
extern "C"  bool Platform_UnityAdsEngineIsReady_m1204345331 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineGetPlacementState(System.String)
extern "C"  int64_t Platform_UnityAdsEngineGetPlacementState_m763487549 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineShow(System.String)
extern "C"  void Platform_UnityAdsEngineShow_m1525385135 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.MetaData::ToJSON()
extern "C"  String_t* MetaData_ToJSON_m4186793159 (MetaData_t2274729001 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetMetaData(System.String,System.String)
extern "C"  void Platform_UnityAdsEngineSetMetaData_m1955283902 (RuntimeObject * __this /* static, unused */, String_t* ___category0, String_t* ___data1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidError::Invoke(System.Int64,System.String)
extern "C"  void unityAdsDidError_Invoke_m1306672649 (unityAdsDidError_t1993223595 * __this, int64_t ___rawError0, String_t* ___message1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish::Invoke(System.String,System.Int64)
extern "C"  void unityAdsDidFinish_Invoke_m880139269 (unityAdsDidFinish_t3747416149 * __this, String_t* ___placementId0, int64_t ___rawFinishState1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart::Invoke(System.String)
extern "C"  void unityAdsDidStart_Invoke_m1190774304 (unityAdsDidStart_t1058412932 * __this, String_t* ___placementId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsReady::Invoke(System.String)
extern "C"  void unityAdsReady_Invoke_m800719555 (unityAdsReady_t96934738 * __this, String_t* ___placementId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
#define Dictionary_2__ctor_m2606011945(__this, method) ((  void (*) (Dictionary_2_t2865362463 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void UnityEngine.Advertisements.MetaData::set_category(System.String)
extern "C"  void MetaData_set_category_m1755177233 (MetaData_t2274729001 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object)
extern "C"  String_t* SimpleJson_SerializeObject_m3082180887 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.ReadyEventArgs::set_placementId(System.String)
extern "C"  void ReadyEventArgs_set_placementId_m818740610 (ReadyEventArgs_t549087536 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.StartEventArgs::set_placementId(System.String)
extern "C"  void StartEventArgs_set_placementId_m632111893 (StartEventArgs_t4291826435 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void UnityEngine.Advertisements.Advertisement::LoadRuntime()
extern "C"  void Advertisement_LoadRuntime_m1930758518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_LoadRuntime_m1930758518_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		if (L_0)
		{
			goto IL_009b;
		}
	}
	{
		bool L_1 = Application_get_isEditor_m857789090(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		bool L_2 = Advertisement_get_isSupported_m1369507557(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}

IL_0020:
	{
		goto IL_009b;
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_3 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
			V_0 = L_3;
			int32_t L_4 = V_0;
			if ((((int32_t)L_4) == ((int32_t)((int32_t)11))))
			{
				goto IL_0040;
			}
		}

IL_0034:
		{
			int32_t L_5 = V_0;
			if ((((int32_t)L_5) == ((int32_t)8)))
			{
				goto IL_004f;
			}
		}

IL_003b:
		{
			goto IL_005e;
		}

IL_0040:
		{
			Platform_t1698302846 * L_6 = (Platform_t1698302846 *)il2cpp_codegen_object_new(Platform_t1698302846_il2cpp_TypeInfo_var);
			Platform__ctor_m3233182567(L_6, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
			((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->set_s_Platform_1(L_6);
			goto IL_006d;
		}

IL_004f:
		{
			Platform_t1647901813 * L_7 = (Platform_t1647901813 *)il2cpp_codegen_object_new(Platform_t1647901813_il2cpp_TypeInfo_var);
			Platform__ctor_m3887152146(L_7, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
			((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->set_s_Platform_1(L_7);
			goto IL_006d;
		}

IL_005e:
		{
			UnsupportedPlatform_t2036049172 * L_8 = (UnsupportedPlatform_t2036049172 *)il2cpp_codegen_object_new(UnsupportedPlatform_t2036049172_il2cpp_TypeInfo_var);
			UnsupportedPlatform__ctor_m1419529813(L_8, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
			((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->set_s_Platform_1(L_8);
			goto IL_006d;
		}

IL_006d:
		{
			goto IL_0095;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0073;
		throw e;
	}

CATCH_0073:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral4107934516, /*hidden argument*/NULL);
		Exception_t * L_9 = V_1;
		Debug_LogException_m2207318968(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		UnsupportedPlatform_t2036049172 * L_10 = (UnsupportedPlatform_t2036049172 *)il2cpp_codegen_object_new(UnsupportedPlatform_t2036049172_il2cpp_TypeInfo_var);
		UnsupportedPlatform__ctor_m1419529813(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->set_s_Platform_1(L_10);
		goto IL_0095;
	} // end catch (depth: 1)

IL_0095:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		Advertisement_Load_m3998104966(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_009b:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::LoadEditor(System.String,System.Boolean)
extern "C"  void Advertisement_LoadEditor_m2032877435 (RuntimeObject * __this /* static, unused */, String_t* ___extensionPath0, bool ___supportedPlatform1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_LoadEditor_m2032877435_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		if (L_0)
		{
			goto IL_003c;
		}
	}
	{
		bool L_1 = ___supportedPlatform1;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_2 = ___extensionPath0;
		Platform_t2756657262 * L_3 = (Platform_t2756657262 *)il2cpp_codegen_object_new(Platform_t2756657262_il2cpp_TypeInfo_var);
		Platform__ctor_m3929159556(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->set_s_Platform_1(L_3);
		((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->set_s_EditorSupportedPlatform_2((bool)1);
		goto IL_0036;
	}

IL_002a:
	{
		UnsupportedPlatform_t2036049172 * L_4 = (UnsupportedPlatform_t2036049172 *)il2cpp_codegen_object_new(UnsupportedPlatform_t2036049172_il2cpp_TypeInfo_var);
		UnsupportedPlatform__ctor_m1419529813(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->set_s_Platform_1(L_4);
	}

IL_0036:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		Advertisement_Load_m3998104966(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_003c:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Load()
extern "C"  void Advertisement_Load_m3998104966 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_Load_m3998104966_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		bool L_1 = Advertisement_get_isSupported_m1369507557(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		bool L_2 = Advertisement_get_initializeOnStartup_m827867793(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		String_t* L_3 = Advertisement_get_gameId_m3960932921(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_4 = Advertisement_get_testMode_m1292646014(NULL /*static, unused*/, /*hidden argument*/NULL);
		Advertisement_Initialize_m1051450402(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::get_initializeOnStartup()
extern "C"  bool Advertisement_get_initializeOnStartup_m827867793 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = UnityAdsSettings_get_initializeOnStartup_m4135646069(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::IsEnabled()
extern "C"  bool Advertisement_IsEnabled_m3879149330 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = UnityAdsSettings_get_enabled_m805351818(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Advertisements.Advertisement/DebugLevel UnityEngine.Advertisements.Advertisement::get_debugLevel()
extern "C"  int32_t Advertisement_get_debugLevel_m112247691 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_get_debugLevel_m112247691_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_DebugLevel_4();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::set_debugLevel(UnityEngine.Advertisements.Advertisement/DebugLevel)
extern "C"  void Advertisement_set_debugLevel_m748244073 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_set_debugLevel_m748244073_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->set_s_DebugLevel_4(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isInitialized()
extern "C"  bool Advertisement_get_isInitialized_m2728189845 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_get_isInitialized_m2728189845_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		bool L_0 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Initialized_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::set_isInitialized(System.Boolean)
extern "C"  void Advertisement_set_isInitialized_m177689357 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_set_isInitialized_m177689357_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->set_s_Initialized_0(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isSupported()
extern "C"  bool Advertisement_get_isSupported_m1369507557 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_get_isSupported_m1369507557_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = Application_get_isEditor_m857789090(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		bool L_1 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_EditorSupportedPlatform_2();
		if (L_1)
		{
			goto IL_002c;
		}
	}

IL_0015:
	{
		int32_t L_2 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)8)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0038;
		}
	}

IL_002c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		bool L_4 = Advertisement_IsEnabled_m3879149330(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_003f;
	}

IL_0038:
	{
		V_0 = (bool)0;
		goto IL_003f;
	}

IL_003f:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::get_debugMode()
extern "C"  bool Advertisement_get_debugMode_m2131110715 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_get_debugMode_m2131110715_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(11 /* System.Boolean UnityEngine.Advertisements.IPlatform::get_debugMode() */, IPlatform_t2298261414_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::set_debugMode(System.Boolean)
extern "C"  void Advertisement_set_debugMode_m152285871 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_set_debugMode_m152285871_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		bool L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(12 /* System.Void UnityEngine.Advertisements.IPlatform::set_debugMode(System.Boolean) */, IPlatform_t2298261414_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::get_testMode()
extern "C"  bool Advertisement_get_testMode_m1292646014 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = UnityAdsSettings_get_testMode_m1754589381(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Advertisements.Advertisement::get_gameId()
extern "C"  String_t* Advertisement_get_gameId_m3960932921 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		int32_t L_0 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = UnityAdsSettings_GetGameId_m1540739525(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String UnityEngine.Advertisements.Advertisement::get_version()
extern "C"  String_t* Advertisement_get_version_m3333841984 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_get_version_m3333841984_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		NullCheck(L_0);
		String_t* L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(10 /* System.String UnityEngine.Advertisements.IPlatform::get_version() */, IPlatform_t2298261414_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isShowing()
extern "C"  bool Advertisement_get_isShowing_m3507224835 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_get_isShowing_m3507224835_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		bool L_0 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Showing_3();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::set_isShowing(System.Boolean)
extern "C"  void Advertisement_set_isShowing_m1653892022 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_set_isShowing_m1653892022_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->set_s_Showing_3(L_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String)
extern "C"  void Advertisement_Initialize_m111792659 (RuntimeObject * __this /* static, unused */, String_t* ___gameId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_Initialize_m111792659_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___gameId0;
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		Advertisement_Initialize_m1051450402(NULL /*static, unused*/, L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean)
extern "C"  void Advertisement_Initialize_m1051450402 (RuntimeObject * __this /* static, unused */, String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_Initialize_m1051450402_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MetaData_t2274729001 * V_0 = NULL;
	MetaData_t2274729001 * V_1 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		bool L_0 = Advertisement_get_isInitialized_m2728189845(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_00cf;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		Advertisement_set_isInitialized_m177689357(NULL /*static, unused*/, (bool)1, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		EventHandler_1_t2215985868 * L_2 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_5();
		G_B2_0 = L_1;
		if (L_2)
		{
			G_B3_0 = L_1;
			goto IL_002f;
		}
	}
	{
		intptr_t L_3 = (intptr_t)Advertisement_U3CInitializeU3Em__0_m2484897031_RuntimeMethod_var;
		EventHandler_1_t2215985868 * L_4 = (EventHandler_1_t2215985868 *)il2cpp_codegen_object_new(EventHandler_1_t2215985868_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m247885508(L_4, NULL, L_3, /*hidden argument*/EventHandler_1__ctor_m247885508_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_5(L_4);
		G_B3_0 = G_B2_0;
	}

IL_002f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		EventHandler_1_t2215985868 * L_5 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_5();
		NullCheck(G_B3_0);
		InterfaceActionInvoker1< EventHandler_1_t2215985868 * >::Invoke(2 /* System.Void UnityEngine.Advertisements.IPlatform::add_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>) */, IPlatform_t2298261414_il2cpp_TypeInfo_var, G_B3_0, L_5);
		RuntimeObject* L_6 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		EventHandler_1_t908338235 * L_7 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_6();
		G_B4_0 = L_6;
		if (L_7)
		{
			G_B5_0 = L_6;
			goto IL_0056;
		}
	}
	{
		intptr_t L_8 = (intptr_t)Advertisement_U3CInitializeU3Em__1_m2109031916_RuntimeMethod_var;
		EventHandler_1_t908338235 * L_9 = (EventHandler_1_t908338235 *)il2cpp_codegen_object_new(EventHandler_1_t908338235_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1760330498(L_9, NULL, L_8, /*hidden argument*/EventHandler_1__ctor_m1760330498_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1_6(L_9);
		G_B5_0 = G_B4_0;
	}

IL_0056:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		EventHandler_1_t908338235 * L_10 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_6();
		NullCheck(G_B5_0);
		InterfaceActionInvoker1< EventHandler_1_t908338235 * >::Invoke(4 /* System.Void UnityEngine.Advertisements.IPlatform::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>) */, IPlatform_t2298261414_il2cpp_TypeInfo_var, G_B5_0, L_10);
		MetaData_t2274729001 * L_11 = (MetaData_t2274729001 *)il2cpp_codegen_object_new(MetaData_t2274729001_il2cpp_TypeInfo_var);
		MetaData__ctor_m191542684(L_11, _stringLiteral2258625258, /*hidden argument*/NULL);
		V_0 = L_11;
		MetaData_t2274729001 * L_12 = V_0;
		NullCheck(L_12);
		MetaData_Set_m2920014032(L_12, _stringLiteral62725243, _stringLiteral1947076759, /*hidden argument*/NULL);
		MetaData_t2274729001 * L_13 = V_0;
		String_t* L_14 = Application_get_unityVersion_m1068543125(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		MetaData_Set_m2920014032(L_13, _stringLiteral1902401671, L_14, /*hidden argument*/NULL);
		MetaData_t2274729001 * L_15 = V_0;
		Advertisement_SetMetaData_m3821393482(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		MetaData_t2274729001 * L_16 = (MetaData_t2274729001 *)il2cpp_codegen_object_new(MetaData_t2274729001_il2cpp_TypeInfo_var);
		MetaData__ctor_m191542684(L_16, _stringLiteral4032983950, /*hidden argument*/NULL);
		V_1 = L_16;
		MetaData_t2274729001 * L_17 = V_1;
		NullCheck(L_17);
		MetaData_Set_m2920014032(L_17, _stringLiteral62725243, _stringLiteral2694997814, /*hidden argument*/NULL);
		MetaData_t2274729001 * L_18 = V_1;
		String_t* L_19 = Advertisement_get_version_m3333841984(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_18);
		MetaData_Set_m2920014032(L_18, _stringLiteral1902401671, L_19, /*hidden argument*/NULL);
		MetaData_t2274729001 * L_20 = V_1;
		Advertisement_SetMetaData_m3821393482(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		RuntimeObject* L_21 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		String_t* L_22 = ___gameId0;
		bool L_23 = ___testMode1;
		NullCheck(L_21);
		InterfaceActionInvoker2< String_t*, bool >::Invoke(13 /* System.Void UnityEngine.Advertisements.IPlatform::Initialize(System.String,System.Boolean) */, IPlatform_t2298261414_il2cpp_TypeInfo_var, L_21, L_22, L_23);
	}

IL_00cf:
	{
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::IsReady()
extern "C"  bool Advertisement_IsReady_m2792558112 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_IsReady_m2792558112_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		bool L_0 = Advertisement_IsReady_m2166462196(NULL /*static, unused*/, (String_t*)NULL, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::IsReady(System.String)
extern "C"  bool Advertisement_IsReady_m2166462196 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_IsReady_m2166462196_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		String_t* L_1 = ___placementId0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		G_B1_0 = L_0;
		if (!L_2)
		{
			G_B2_0 = L_0;
			goto IL_0017;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0017:
	{
		String_t* L_3 = ___placementId0;
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		NullCheck(G_B3_1);
		bool L_4 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(14 /* System.Boolean UnityEngine.Advertisements.IPlatform::IsReady(System.String) */, IPlatform_t2298261414_il2cpp_TypeInfo_var, G_B3_1, G_B3_0);
		V_0 = L_4;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Advertisements.PlacementState UnityEngine.Advertisements.Advertisement::GetPlacementState()
extern "C"  int32_t Advertisement_GetPlacementState_m2232065044 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_GetPlacementState_m2232065044_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		int32_t L_0 = Advertisement_GetPlacementState_m4001863134(NULL /*static, unused*/, (String_t*)NULL, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Advertisements.PlacementState UnityEngine.Advertisements.Advertisement::GetPlacementState(System.String)
extern "C"  int32_t Advertisement_GetPlacementState_m4001863134 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_GetPlacementState_m4001863134_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		String_t* L_1 = ___placementId0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		G_B1_0 = L_0;
		if (!L_2)
		{
			G_B2_0 = L_0;
			goto IL_0017;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0017:
	{
		String_t* L_3 = ___placementId0;
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		NullCheck(G_B3_1);
		int32_t L_4 = InterfaceFuncInvoker1< int32_t, String_t* >::Invoke(15 /* UnityEngine.Advertisements.PlacementState UnityEngine.Advertisements.IPlatform::GetPlacementState(System.String) */, IPlatform_t2298261414_il2cpp_TypeInfo_var, G_B3_1, G_B3_0);
		V_0 = L_4;
		goto IL_0023;
	}

IL_0023:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Show()
extern "C"  void Advertisement_Show_m2619871676 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_Show_m2619871676_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		Advertisement_Show_m1413788125(NULL /*static, unused*/, (String_t*)NULL, (ShowOptions_t990845000 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Show(UnityEngine.Advertisements.ShowOptions)
extern "C"  void Advertisement_Show_m53580060 (RuntimeObject * __this /* static, unused */, ShowOptions_t990845000 * ___showOptions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_Show_m53580060_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ShowOptions_t990845000 * L_0 = ___showOptions0;
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		Advertisement_Show_m1413788125(NULL /*static, unused*/, (String_t*)NULL, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String)
extern "C"  void Advertisement_Show_m663301454 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_Show_m663301454_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___placementId0;
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		Advertisement_Show_m1413788125(NULL /*static, unused*/, L_0, (ShowOptions_t990845000 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String,UnityEngine.Advertisements.ShowOptions)
extern "C"  void Advertisement_Show_m1413788125 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, ShowOptions_t990845000 * ___showOptions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_Show_m1413788125_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CShowU3Ec__AnonStorey0_t3170924441 * V_0 = NULL;
	U3CShowU3Ec__AnonStorey1_t3170924442 * V_1 = NULL;
	MetaData_t2274729001 * V_2 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	String_t* G_B9_0 = NULL;
	RuntimeObject* G_B9_1 = NULL;
	{
		U3CShowU3Ec__AnonStorey0_t3170924441 * L_0 = (U3CShowU3Ec__AnonStorey0_t3170924441 *)il2cpp_codegen_object_new(U3CShowU3Ec__AnonStorey0_t3170924441_il2cpp_TypeInfo_var);
		U3CShowU3Ec__AnonStorey0__ctor_m2448096591(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CShowU3Ec__AnonStorey0_t3170924441 * L_1 = V_0;
		ShowOptions_t990845000 * L_2 = ___showOptions1;
		NullCheck(L_1);
		L_1->set_showOptions_0(L_2);
		U3CShowU3Ec__AnonStorey0_t3170924441 * L_3 = V_0;
		NullCheck(L_3);
		ShowOptions_t990845000 * L_4 = L_3->get_showOptions_0();
		if (!L_4)
		{
			goto IL_00a1;
		}
	}
	{
		U3CShowU3Ec__AnonStorey0_t3170924441 * L_5 = V_0;
		NullCheck(L_5);
		ShowOptions_t990845000 * L_6 = L_5->get_showOptions_0();
		NullCheck(L_6);
		Action_1_t3243021218 * L_7 = ShowOptions_get_resultCallback_m2710569767(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0062;
		}
	}
	{
		U3CShowU3Ec__AnonStorey1_t3170924442 * L_8 = (U3CShowU3Ec__AnonStorey1_t3170924442 *)il2cpp_codegen_object_new(U3CShowU3Ec__AnonStorey1_t3170924442_il2cpp_TypeInfo_var);
		U3CShowU3Ec__AnonStorey1__ctor_m2571500879(L_8, /*hidden argument*/NULL);
		V_1 = L_8;
		U3CShowU3Ec__AnonStorey1_t3170924442 * L_9 = V_1;
		U3CShowU3Ec__AnonStorey0_t3170924441 * L_10 = V_0;
		NullCheck(L_9);
		L_9->set_U3CU3Ef__refU240_1(L_10);
		U3CShowU3Ec__AnonStorey1_t3170924442 * L_11 = V_1;
		NullCheck(L_11);
		L_11->set_finishHandler_0((EventHandler_1_t908338235 *)NULL);
		U3CShowU3Ec__AnonStorey1_t3170924442 * L_12 = V_1;
		U3CShowU3Ec__AnonStorey1_t3170924442 * L_13 = V_1;
		intptr_t L_14 = (intptr_t)U3CShowU3Ec__AnonStorey1_U3CU3Em__0_m1498981190_RuntimeMethod_var;
		EventHandler_1_t908338235 * L_15 = (EventHandler_1_t908338235 *)il2cpp_codegen_object_new(EventHandler_1_t908338235_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1760330498(L_15, L_13, L_14, /*hidden argument*/EventHandler_1__ctor_m1760330498_RuntimeMethod_var);
		NullCheck(L_12);
		L_12->set_finishHandler_0(L_15);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		RuntimeObject* L_16 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		U3CShowU3Ec__AnonStorey1_t3170924442 * L_17 = V_1;
		NullCheck(L_17);
		EventHandler_1_t908338235 * L_18 = L_17->get_finishHandler_0();
		NullCheck(L_16);
		InterfaceActionInvoker1< EventHandler_1_t908338235 * >::Invoke(4 /* System.Void UnityEngine.Advertisements.IPlatform::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>) */, IPlatform_t2298261414_il2cpp_TypeInfo_var, L_16, L_18);
	}

IL_0062:
	{
		U3CShowU3Ec__AnonStorey0_t3170924441 * L_19 = V_0;
		NullCheck(L_19);
		ShowOptions_t990845000 * L_20 = L_19->get_showOptions_0();
		NullCheck(L_20);
		String_t* L_21 = ShowOptions_get_gamerSid_m2724807180(L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_22 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_00a0;
		}
	}
	{
		MetaData_t2274729001 * L_23 = (MetaData_t2274729001 *)il2cpp_codegen_object_new(MetaData_t2274729001_il2cpp_TypeInfo_var);
		MetaData__ctor_m191542684(L_23, _stringLiteral2261821926, /*hidden argument*/NULL);
		V_2 = L_23;
		MetaData_t2274729001 * L_24 = V_2;
		U3CShowU3Ec__AnonStorey0_t3170924441 * L_25 = V_0;
		NullCheck(L_25);
		ShowOptions_t990845000 * L_26 = L_25->get_showOptions_0();
		NullCheck(L_26);
		String_t* L_27 = ShowOptions_get_gamerSid_m2724807180(L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		MetaData_Set_m2920014032(L_24, _stringLiteral4028036860, L_27, /*hidden argument*/NULL);
		MetaData_t2274729001 * L_28 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		Advertisement_SetMetaData_m3821393482(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
	}

IL_00a0:
	{
	}

IL_00a1:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		RuntimeObject* L_29 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		String_t* L_30 = ___placementId0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_31 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		G_B7_0 = L_29;
		if (!L_31)
		{
			G_B8_0 = L_29;
			goto IL_00b7;
		}
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		G_B9_1 = G_B7_0;
		goto IL_00b8;
	}

IL_00b7:
	{
		String_t* L_32 = ___placementId0;
		G_B9_0 = L_32;
		G_B9_1 = G_B8_0;
	}

IL_00b8:
	{
		NullCheck(G_B9_1);
		InterfaceActionInvoker1< String_t* >::Invoke(16 /* System.Void UnityEngine.Advertisements.IPlatform::Show(System.String) */, IPlatform_t2298261414_il2cpp_TypeInfo_var, G_B9_1, G_B9_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::SetMetaData(UnityEngine.Advertisements.MetaData)
extern "C"  void Advertisement_SetMetaData_m3821393482 (RuntimeObject * __this /* static, unused */, MetaData_t2274729001 * ___metaData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_SetMetaData_m3821393482_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		MetaData_t2274729001 * L_1 = ___metaData0;
		NullCheck(L_0);
		InterfaceActionInvoker1< MetaData_t2274729001 * >::Invoke(17 /* System.Void UnityEngine.Advertisements.IPlatform::SetMetaData(UnityEngine.Advertisements.MetaData) */, IPlatform_t2298261414_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::.cctor()
extern "C"  void Advertisement__cctor_m2698673428 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement__cctor_m2698673428_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		bool L_0 = Debug_get_isDebugBuild_m1389897688(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((int32_t)15);
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 7;
	}

IL_0012:
	{
		((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->set_s_DebugLevel_4(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::<Initialize>m__0(System.Object,UnityEngine.Advertisements.StartEventArgs)
extern "C"  void Advertisement_U3CInitializeU3Em__0_m2484897031 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___sender0, StartEventArgs_t4291826435 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_U3CInitializeU3Em__0_m2484897031_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		Advertisement_set_isShowing_m1653892022(NULL /*static, unused*/, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::<Initialize>m__1(System.Object,UnityEngine.Advertisements.FinishEventArgs)
extern "C"  void Advertisement_U3CInitializeU3Em__1_m2109031916 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___sender0, FinishEventArgs_t2984178802 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_U3CInitializeU3Em__1_m2109031916_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		Advertisement_set_isShowing_m1653892022(NULL /*static, unused*/, (bool)0, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.Advertisement/<Show>c__AnonStorey0::.ctor()
extern "C"  void U3CShowU3Ec__AnonStorey0__ctor_m2448096591 (U3CShowU3Ec__AnonStorey0_t3170924441 * __this, const RuntimeMethod* method)
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
// System.Void UnityEngine.Advertisements.Advertisement/<Show>c__AnonStorey1::.ctor()
extern "C"  void U3CShowU3Ec__AnonStorey1__ctor_m2571500879 (U3CShowU3Ec__AnonStorey1_t3170924442 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement/<Show>c__AnonStorey1::<>m__0(System.Object,UnityEngine.Advertisements.FinishEventArgs)
extern "C"  void U3CShowU3Ec__AnonStorey1_U3CU3Em__0_m1498981190 (U3CShowU3Ec__AnonStorey1_t3170924442 * __this, RuntimeObject * ___sender0, FinishEventArgs_t2984178802 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CShowU3Ec__AnonStorey1_U3CU3Em__0_m1498981190_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShowU3Ec__AnonStorey0_t3170924441 * L_0 = __this->get_U3CU3Ef__refU240_1();
		NullCheck(L_0);
		ShowOptions_t990845000 * L_1 = L_0->get_showOptions_0();
		NullCheck(L_1);
		Action_1_t3243021218 * L_2 = ShowOptions_get_resultCallback_m2710569767(L_1, /*hidden argument*/NULL);
		FinishEventArgs_t2984178802 * L_3 = ___e1;
		NullCheck(L_3);
		int32_t L_4 = FinishEventArgs_get_showResult_m2484985128(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Action_1_Invoke_m860665472(L_2, L_4, /*hidden argument*/Action_1_Invoke_m860665472_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		RuntimeObject* L_5 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		EventHandler_1_t908338235 * L_6 = __this->get_finishHandler_0();
		NullCheck(L_5);
		InterfaceActionInvoker1< EventHandler_1_t908338235 * >::Invoke(5 /* System.Void UnityEngine.Advertisements.IPlatform::remove_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>) */, IPlatform_t2298261414_il2cpp_TypeInfo_var, L_5, L_6);
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
// System.Void UnityEngine.Advertisements.Android.Platform::.ctor()
extern "C"  void Platform__ctor_m3233182567 (Platform_t1698302846 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform__ctor_m3233182567_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_t32045322 * V_0 = NULL;
	GameObject_t1113636619 * V_1 = NULL;
	GameObject_t1113636619 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_t2835824643_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m545570009(__this, _stringLiteral1157834939, /*hidden argument*/NULL);
		AndroidJavaClass_t32045322 * L_0 = (AndroidJavaClass_t32045322 *)il2cpp_codegen_object_new(AndroidJavaClass_t32045322_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_m366853020(L_0, _stringLiteral2149247999, /*hidden argument*/NULL);
		V_0 = L_0;
		AndroidJavaClass_t32045322 * L_1 = V_0;
		NullCheck(L_1);
		AndroidJavaObject_t4131667876 * L_2 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t4131667876_m671986461(L_1, _stringLiteral3452315504, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t4131667876_m671986461_RuntimeMethod_var);
		__this->set_m_CurrentActivity_4(L_2);
		AndroidJavaClass_t32045322 * L_3 = (AndroidJavaClass_t32045322 *)il2cpp_codegen_object_new(AndroidJavaClass_t32045322_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_m366853020(L_3, _stringLiteral3217210809, /*hidden argument*/NULL);
		__this->set_m_UnityAds_5(L_3);
		GameObject_t1113636619 * L_4 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_4, _stringLiteral2428876507, /*hidden argument*/NULL);
		V_2 = L_4;
		GameObject_t1113636619 * L_5 = V_2;
		NullCheck(L_5);
		Object_set_hideFlags_m1648752846(L_5, ((int32_t)63), /*hidden argument*/NULL);
		GameObject_t1113636619 * L_6 = V_2;
		V_1 = L_6;
		GameObject_t1113636619 * L_7 = V_1;
		NullCheck(L_7);
		CallbackExecutor_t363496179 * L_8 = GameObject_AddComponent_TisCallbackExecutor_t363496179_m2253360972(L_7, /*hidden argument*/GameObject_AddComponent_TisCallbackExecutor_t363496179_m2253360972_RuntimeMethod_var);
		__this->set_m_CallbackExecutor_6(L_8);
		GameObject_t1113636619 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::onUnityAdsReady(System.String)
extern "C"  void Platform_onUnityAdsReady_m1835805958 (Platform_t1698302846 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_onUnityAdsReady_m1835805958_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815 * V_0 = NULL;
	{
		U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815 * L_0 = (U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815 *)il2cpp_codegen_object_new(U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815_il2cpp_TypeInfo_var);
		U3ConUnityAdsReadyU3Ec__AnonStorey0__ctor_m2531656002(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815 * L_1 = V_0;
		String_t* L_2 = ___placementId0;
		NullCheck(L_1);
		L_1->set_placementId_1(L_2);
		U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_2(__this);
		U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815 * L_4 = V_0;
		EventHandler_1_t2768214265 * L_5 = __this->get_OnReady_7();
		NullCheck(L_4);
		L_4->set_handler_0(L_5);
		U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815 * L_6 = V_0;
		NullCheck(L_6);
		EventHandler_1_t2768214265 * L_7 = L_6->get_handler_0();
		if (!L_7)
		{
			goto IL_0045;
		}
	}
	{
		CallbackExecutor_t363496179 * L_8 = __this->get_m_CallbackExecutor_6();
		U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815 * L_9 = V_0;
		intptr_t L_10 = (intptr_t)U3ConUnityAdsReadyU3Ec__AnonStorey0_U3CU3Em__0_m2531335987_RuntimeMethod_var;
		Action_1_t535963774 * L_11 = (Action_1_t535963774 *)il2cpp_codegen_object_new(Action_1_t535963774_il2cpp_TypeInfo_var);
		Action_1__ctor_m246329423(L_11, L_9, L_10, /*hidden argument*/Action_1__ctor_m246329423_RuntimeMethod_var);
		NullCheck(L_8);
		CallbackExecutor_Post_m2417625912(L_8, L_11, /*hidden argument*/NULL);
	}

IL_0045:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::onUnityAdsStart(System.String)
extern "C"  void Platform_onUnityAdsStart_m2863714750 (Platform_t1698302846 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_onUnityAdsStart_m2863714750_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353 * V_0 = NULL;
	{
		U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353 * L_0 = (U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353 *)il2cpp_codegen_object_new(U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353_il2cpp_TypeInfo_var);
		U3ConUnityAdsStartU3Ec__AnonStorey1__ctor_m1282976937(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353 * L_1 = V_0;
		String_t* L_2 = ___placementId0;
		NullCheck(L_1);
		L_1->set_placementId_1(L_2);
		U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_2(__this);
		U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353 * L_4 = V_0;
		EventHandler_1_t2215985868 * L_5 = __this->get_OnStart_8();
		NullCheck(L_4);
		L_4->set_handler_0(L_5);
		U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353 * L_6 = V_0;
		NullCheck(L_6);
		EventHandler_1_t2215985868 * L_7 = L_6->get_handler_0();
		if (!L_7)
		{
			goto IL_0045;
		}
	}
	{
		CallbackExecutor_t363496179 * L_8 = __this->get_m_CallbackExecutor_6();
		U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353 * L_9 = V_0;
		intptr_t L_10 = (intptr_t)U3ConUnityAdsStartU3Ec__AnonStorey1_U3CU3Em__0_m3745486283_RuntimeMethod_var;
		Action_1_t535963774 * L_11 = (Action_1_t535963774 *)il2cpp_codegen_object_new(Action_1_t535963774_il2cpp_TypeInfo_var);
		Action_1__ctor_m246329423(L_11, L_9, L_10, /*hidden argument*/Action_1__ctor_m246329423_RuntimeMethod_var);
		NullCheck(L_8);
		CallbackExecutor_Post_m2417625912(L_8, L_11, /*hidden argument*/NULL);
	}

IL_0045:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::onUnityAdsFinish(System.String,UnityEngine.AndroidJavaObject)
extern "C"  void Platform_onUnityAdsFinish_m1351724442 (Platform_t1698302846 * __this, String_t* ___placementId0, AndroidJavaObject_t4131667876 * ___rawShowResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_onUnityAdsFinish_m1351724442_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596 * V_0 = NULL;
	U3ConUnityAdsFinishU3Ec__AnonStorey3_t2653194732 * V_1 = NULL;
	{
		U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596 * L_0 = (U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596 *)il2cpp_codegen_object_new(U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596_il2cpp_TypeInfo_var);
		U3ConUnityAdsFinishU3Ec__AnonStorey2__ctor_m3699482386(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596 * L_1 = V_0;
		String_t* L_2 = ___placementId0;
		NullCheck(L_1);
		L_1->set_placementId_1(L_2);
		U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_2(__this);
		U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596 * L_4 = V_0;
		EventHandler_1_t908338235 * L_5 = __this->get_OnFinish_9();
		NullCheck(L_4);
		L_4->set_handler_0(L_5);
		U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596 * L_6 = V_0;
		NullCheck(L_6);
		EventHandler_1_t908338235 * L_7 = L_6->get_handler_0();
		if (!L_7)
		{
			goto IL_0069;
		}
	}
	{
		U3ConUnityAdsFinishU3Ec__AnonStorey3_t2653194732 * L_8 = (U3ConUnityAdsFinishU3Ec__AnonStorey3_t2653194732 *)il2cpp_codegen_object_new(U3ConUnityAdsFinishU3Ec__AnonStorey3_t2653194732_il2cpp_TypeInfo_var);
		U3ConUnityAdsFinishU3Ec__AnonStorey3__ctor_m818981741(L_8, /*hidden argument*/NULL);
		V_1 = L_8;
		U3ConUnityAdsFinishU3Ec__AnonStorey3_t2653194732 * L_9 = V_1;
		U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596 * L_10 = V_0;
		NullCheck(L_9);
		L_9->set_U3CU3Ef__refU242_1(L_10);
		U3ConUnityAdsFinishU3Ec__AnonStorey3_t2653194732 * L_11 = V_1;
		AndroidJavaObject_t4131667876 * L_12 = ___rawShowResult1;
		NullCheck(L_12);
		int32_t L_13 = AndroidJavaObject_Call_TisInt32_t2950945753_m3061355686(L_12, _stringLiteral3378743801, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_Call_TisInt32_t2950945753_m3061355686_RuntimeMethod_var);
		NullCheck(L_11);
		L_11->set_showResult_0(L_13);
		CallbackExecutor_t363496179 * L_14 = __this->get_m_CallbackExecutor_6();
		U3ConUnityAdsFinishU3Ec__AnonStorey3_t2653194732 * L_15 = V_1;
		intptr_t L_16 = (intptr_t)U3ConUnityAdsFinishU3Ec__AnonStorey3_U3CU3Em__0_m2379100025_RuntimeMethod_var;
		Action_1_t535963774 * L_17 = (Action_1_t535963774 *)il2cpp_codegen_object_new(Action_1_t535963774_il2cpp_TypeInfo_var);
		Action_1__ctor_m246329423(L_17, L_15, L_16, /*hidden argument*/Action_1__ctor_m246329423_RuntimeMethod_var);
		NullCheck(L_14);
		CallbackExecutor_Post_m2417625912(L_14, L_17, /*hidden argument*/NULL);
	}

IL_0069:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::onUnityAdsError(UnityEngine.AndroidJavaObject,System.String)
extern "C"  void Platform_onUnityAdsError_m2818265370 (Platform_t1698302846 * __this, AndroidJavaObject_t4131667876 * ___rawError0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_onUnityAdsError_m2818265370_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180 * V_0 = NULL;
	U3ConUnityAdsErrorU3Ec__AnonStorey5_t3709914535 * V_1 = NULL;
	{
		U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180 * L_0 = (U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180 *)il2cpp_codegen_object_new(U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180_il2cpp_TypeInfo_var);
		U3ConUnityAdsErrorU3Ec__AnonStorey4__ctor_m2383325633(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180 * L_1 = V_0;
		String_t* L_2 = ___message1;
		NullCheck(L_1);
		L_1->set_message_1(L_2);
		U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_2(__this);
		U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180 * L_4 = V_0;
		EventHandler_1_t177306446 * L_5 = __this->get_OnError_10();
		NullCheck(L_4);
		L_4->set_handler_0(L_5);
		U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180 * L_6 = V_0;
		NullCheck(L_6);
		EventHandler_1_t177306446 * L_7 = L_6->get_handler_0();
		if (!L_7)
		{
			goto IL_006a;
		}
	}
	{
		U3ConUnityAdsErrorU3Ec__AnonStorey5_t3709914535 * L_8 = (U3ConUnityAdsErrorU3Ec__AnonStorey5_t3709914535 *)il2cpp_codegen_object_new(U3ConUnityAdsErrorU3Ec__AnonStorey5_t3709914535_il2cpp_TypeInfo_var);
		U3ConUnityAdsErrorU3Ec__AnonStorey5__ctor_m2454694337(L_8, /*hidden argument*/NULL);
		V_1 = L_8;
		U3ConUnityAdsErrorU3Ec__AnonStorey5_t3709914535 * L_9 = V_1;
		U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180 * L_10 = V_0;
		NullCheck(L_9);
		L_9->set_U3CU3Ef__refU244_1(L_10);
		U3ConUnityAdsErrorU3Ec__AnonStorey5_t3709914535 * L_11 = V_1;
		AndroidJavaObject_t4131667876 * L_12 = ___rawError0;
		NullCheck(L_12);
		int32_t L_13 = AndroidJavaObject_Call_TisInt32_t2950945753_m3061355686(L_12, _stringLiteral3378743801, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_Call_TisInt32_t2950945753_m3061355686_RuntimeMethod_var);
		NullCheck(L_11);
		L_11->set_error_0((((int64_t)((int64_t)L_13))));
		CallbackExecutor_t363496179 * L_14 = __this->get_m_CallbackExecutor_6();
		U3ConUnityAdsErrorU3Ec__AnonStorey5_t3709914535 * L_15 = V_1;
		intptr_t L_16 = (intptr_t)U3ConUnityAdsErrorU3Ec__AnonStorey5_U3CU3Em__0_m1873462927_RuntimeMethod_var;
		Action_1_t535963774 * L_17 = (Action_1_t535963774 *)il2cpp_codegen_object_new(Action_1_t535963774_il2cpp_TypeInfo_var);
		Action_1__ctor_m246329423(L_17, L_15, L_16, /*hidden argument*/Action_1__ctor_m246329423_RuntimeMethod_var);
		NullCheck(L_14);
		CallbackExecutor_Post_m2417625912(L_14, L_17, /*hidden argument*/NULL);
	}

IL_006a:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::add_OnReady(System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>)
extern "C"  void Platform_add_OnReady_m3299334683 (Platform_t1698302846 * __this, EventHandler_1_t2768214265 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_add_OnReady_m3299334683_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2768214265 * V_0 = NULL;
	EventHandler_1_t2768214265 * V_1 = NULL;
	{
		EventHandler_1_t2768214265 * L_0 = __this->get_OnReady_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2768214265 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2768214265 ** L_2 = __this->get_address_of_OnReady_7();
		EventHandler_1_t2768214265 * L_3 = V_1;
		EventHandler_1_t2768214265 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2768214265 * L_6 = V_0;
		EventHandler_1_t2768214265 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2768214265 *>(L_2, ((EventHandler_1_t2768214265 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2768214265_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2768214265 * L_8 = V_0;
		EventHandler_1_t2768214265 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2768214265 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2768214265 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::remove_OnReady(System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>)
extern "C"  void Platform_remove_OnReady_m644170545 (Platform_t1698302846 * __this, EventHandler_1_t2768214265 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_remove_OnReady_m644170545_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2768214265 * V_0 = NULL;
	EventHandler_1_t2768214265 * V_1 = NULL;
	{
		EventHandler_1_t2768214265 * L_0 = __this->get_OnReady_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2768214265 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2768214265 ** L_2 = __this->get_address_of_OnReady_7();
		EventHandler_1_t2768214265 * L_3 = V_1;
		EventHandler_1_t2768214265 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2768214265 * L_6 = V_0;
		EventHandler_1_t2768214265 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2768214265 *>(L_2, ((EventHandler_1_t2768214265 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2768214265_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2768214265 * L_8 = V_0;
		EventHandler_1_t2768214265 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2768214265 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2768214265 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::add_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
extern "C"  void Platform_add_OnStart_m996194638 (Platform_t1698302846 * __this, EventHandler_1_t2215985868 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_add_OnStart_m996194638_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2215985868 * V_0 = NULL;
	EventHandler_1_t2215985868 * V_1 = NULL;
	{
		EventHandler_1_t2215985868 * L_0 = __this->get_OnStart_8();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2215985868 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2215985868 ** L_2 = __this->get_address_of_OnStart_8();
		EventHandler_1_t2215985868 * L_3 = V_1;
		EventHandler_1_t2215985868 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2215985868 * L_6 = V_0;
		EventHandler_1_t2215985868 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2215985868 *>(L_2, ((EventHandler_1_t2215985868 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2215985868_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2215985868 * L_8 = V_0;
		EventHandler_1_t2215985868 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2215985868 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2215985868 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::remove_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
extern "C"  void Platform_remove_OnStart_m2706477467 (Platform_t1698302846 * __this, EventHandler_1_t2215985868 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_remove_OnStart_m2706477467_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2215985868 * V_0 = NULL;
	EventHandler_1_t2215985868 * V_1 = NULL;
	{
		EventHandler_1_t2215985868 * L_0 = __this->get_OnStart_8();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2215985868 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2215985868 ** L_2 = __this->get_address_of_OnStart_8();
		EventHandler_1_t2215985868 * L_3 = V_1;
		EventHandler_1_t2215985868 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2215985868 * L_6 = V_0;
		EventHandler_1_t2215985868 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2215985868 *>(L_2, ((EventHandler_1_t2215985868 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2215985868_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2215985868 * L_8 = V_0;
		EventHandler_1_t2215985868 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2215985868 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2215985868 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C"  void Platform_add_OnFinish_m3107184672 (Platform_t1698302846 * __this, EventHandler_1_t908338235 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_add_OnFinish_m3107184672_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t908338235 * V_0 = NULL;
	EventHandler_1_t908338235 * V_1 = NULL;
	{
		EventHandler_1_t908338235 * L_0 = __this->get_OnFinish_9();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t908338235 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t908338235 ** L_2 = __this->get_address_of_OnFinish_9();
		EventHandler_1_t908338235 * L_3 = V_1;
		EventHandler_1_t908338235 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t908338235 * L_6 = V_0;
		EventHandler_1_t908338235 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t908338235 *>(L_2, ((EventHandler_1_t908338235 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t908338235_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t908338235 * L_8 = V_0;
		EventHandler_1_t908338235 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t908338235 *)L_8) == ((RuntimeObject*)(EventHandler_1_t908338235 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::remove_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C"  void Platform_remove_OnFinish_m2870282854 (Platform_t1698302846 * __this, EventHandler_1_t908338235 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_remove_OnFinish_m2870282854_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t908338235 * V_0 = NULL;
	EventHandler_1_t908338235 * V_1 = NULL;
	{
		EventHandler_1_t908338235 * L_0 = __this->get_OnFinish_9();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t908338235 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t908338235 ** L_2 = __this->get_address_of_OnFinish_9();
		EventHandler_1_t908338235 * L_3 = V_1;
		EventHandler_1_t908338235 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t908338235 * L_6 = V_0;
		EventHandler_1_t908338235 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t908338235 *>(L_2, ((EventHandler_1_t908338235 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t908338235_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t908338235 * L_8 = V_0;
		EventHandler_1_t908338235 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t908338235 *)L_8) == ((RuntimeObject*)(EventHandler_1_t908338235 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::add_OnError(System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>)
extern "C"  void Platform_add_OnError_m3811019260 (Platform_t1698302846 * __this, EventHandler_1_t177306446 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_add_OnError_m3811019260_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t177306446 * V_0 = NULL;
	EventHandler_1_t177306446 * V_1 = NULL;
	{
		EventHandler_1_t177306446 * L_0 = __this->get_OnError_10();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t177306446 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t177306446 ** L_2 = __this->get_address_of_OnError_10();
		EventHandler_1_t177306446 * L_3 = V_1;
		EventHandler_1_t177306446 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t177306446 * L_6 = V_0;
		EventHandler_1_t177306446 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t177306446 *>(L_2, ((EventHandler_1_t177306446 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t177306446_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t177306446 * L_8 = V_0;
		EventHandler_1_t177306446 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t177306446 *)L_8) == ((RuntimeObject*)(EventHandler_1_t177306446 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::remove_OnError(System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>)
extern "C"  void Platform_remove_OnError_m1044860335 (Platform_t1698302846 * __this, EventHandler_1_t177306446 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_remove_OnError_m1044860335_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t177306446 * V_0 = NULL;
	EventHandler_1_t177306446 * V_1 = NULL;
	{
		EventHandler_1_t177306446 * L_0 = __this->get_OnError_10();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t177306446 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t177306446 ** L_2 = __this->get_address_of_OnError_10();
		EventHandler_1_t177306446 * L_3 = V_1;
		EventHandler_1_t177306446 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t177306446 * L_6 = V_0;
		EventHandler_1_t177306446 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t177306446 *>(L_2, ((EventHandler_1_t177306446 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t177306446_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t177306446 * L_8 = V_0;
		EventHandler_1_t177306446 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t177306446 *)L_8) == ((RuntimeObject*)(EventHandler_1_t177306446 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Android.Platform::get_isInitialized()
extern "C"  bool Platform_get_isInitialized_m4196749938 (Platform_t1698302846 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_get_isInitialized_m4196749938_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		AndroidJavaClass_t32045322 * L_0 = __this->get_m_UnityAds_5();
		NullCheck(L_0);
		bool L_1 = AndroidJavaObject_CallStatic_TisBoolean_t97287965_m1100851500(L_0, _stringLiteral1263578497, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_CallStatic_TisBoolean_t97287965_m1100851500_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_001d;
	}

IL_001d:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Advertisements.Android.Platform::get_isSupported()
extern "C"  bool Platform_get_isSupported_m3096644395 (Platform_t1698302846 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_get_isSupported_m3096644395_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		AndroidJavaClass_t32045322 * L_0 = __this->get_m_UnityAds_5();
		NullCheck(L_0);
		bool L_1 = AndroidJavaObject_CallStatic_TisBoolean_t97287965_m1100851500(L_0, _stringLiteral930268361, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_CallStatic_TisBoolean_t97287965_m1100851500_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_001d;
	}

IL_001d:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.String UnityEngine.Advertisements.Android.Platform::get_version()
extern "C"  String_t* Platform_get_version_m2863392885 (Platform_t1698302846 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_get_version_m2863392885_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		AndroidJavaClass_t32045322 * L_0 = __this->get_m_UnityAds_5();
		NullCheck(L_0);
		String_t* L_1 = AndroidJavaObject_CallStatic_TisString_t_m2571575926(L_0, _stringLiteral4068039089, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m2571575926_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_001d;
	}

IL_001d:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Advertisements.Android.Platform::get_debugMode()
extern "C"  bool Platform_get_debugMode_m1274978797 (Platform_t1698302846 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_get_debugMode_m1274978797_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		AndroidJavaClass_t32045322 * L_0 = __this->get_m_UnityAds_5();
		NullCheck(L_0);
		bool L_1 = AndroidJavaObject_CallStatic_TisBoolean_t97287965_m1100851500(L_0, _stringLiteral3735224595, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_CallStatic_TisBoolean_t97287965_m1100851500_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_001d;
	}

IL_001d:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::set_debugMode(System.Boolean)
extern "C"  void Platform_set_debugMode_m1126448795 (Platform_t1698302846 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_set_debugMode_m1126448795_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaClass_t32045322 * L_0 = __this->get_m_UnityAds_5();
		ObjectU5BU5D_t2843939325* L_1 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		bool L_2 = ___value0;
		bool L_3 = L_2;
		RuntimeObject * L_4 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m2922144688(L_0, _stringLiteral3735244631, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::Initialize(System.String,System.Boolean)
extern "C"  void Platform_Initialize_m82924387 (Platform_t1698302846 * __this, String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_Initialize_m82924387_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaClass_t32045322 * L_0 = __this->get_m_UnityAds_5();
		ObjectU5BU5D_t2843939325* L_1 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		AndroidJavaObject_t4131667876 * L_2 = __this->get_m_CurrentActivity_4();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t2843939325* L_3 = L_1;
		String_t* L_4 = ___gameId0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = L_3;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, __this);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)__this);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		bool L_7 = ___testMode1;
		bool L_8 = L_7;
		RuntimeObject * L_9 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_9);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m2922144688(L_0, _stringLiteral2540211304, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Android.Platform::IsReady(System.String)
extern "C"  bool Platform_IsReady_m1225029571 (Platform_t1698302846 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_IsReady_m1225029571_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		String_t* L_0 = ___placementId0;
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		AndroidJavaClass_t32045322 * L_1 = __this->get_m_UnityAds_5();
		NullCheck(L_1);
		bool L_2 = AndroidJavaObject_CallStatic_TisBoolean_t97287965_m1100851500(L_1, _stringLiteral3486120287, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_CallStatic_TisBoolean_t97287965_m1100851500_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0044;
	}

IL_0024:
	{
		AndroidJavaClass_t32045322 * L_3 = __this->get_m_UnityAds_5();
		ObjectU5BU5D_t2843939325* L_4 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		String_t* L_5 = ___placementId0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_3);
		bool L_6 = AndroidJavaObject_CallStatic_TisBoolean_t97287965_m1100851500(L_3, _stringLiteral3486120287, L_4, /*hidden argument*/AndroidJavaObject_CallStatic_TisBoolean_t97287965_m1100851500_RuntimeMethod_var);
		V_0 = L_6;
		goto IL_0044;
	}

IL_0044:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Advertisements.PlacementState UnityEngine.Advertisements.Android.Platform::GetPlacementState(System.String)
extern "C"  int32_t Platform_GetPlacementState_m57946683 (Platform_t1698302846 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_GetPlacementState_m57946683_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t4131667876 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___placementId0;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		AndroidJavaClass_t32045322 * L_1 = __this->get_m_UnityAds_5();
		NullCheck(L_1);
		AndroidJavaObject_t4131667876 * L_2 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t4131667876_m2031442458(L_1, _stringLiteral2998687031, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_CallStatic_TisAndroidJavaObject_t4131667876_m2031442458_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0042;
	}

IL_0025:
	{
		AndroidJavaClass_t32045322 * L_3 = __this->get_m_UnityAds_5();
		ObjectU5BU5D_t2843939325* L_4 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		String_t* L_5 = ___placementId0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_3);
		AndroidJavaObject_t4131667876 * L_6 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t4131667876_m2031442458(L_3, _stringLiteral2998687031, L_4, /*hidden argument*/AndroidJavaObject_CallStatic_TisAndroidJavaObject_t4131667876_m2031442458_RuntimeMethod_var);
		V_0 = L_6;
	}

IL_0042:
	{
		AndroidJavaObject_t4131667876 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = AndroidJavaObject_Call_TisInt32_t2950945753_m3061355686(L_7, _stringLiteral3378743801, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/AndroidJavaObject_Call_TisInt32_t2950945753_m3061355686_RuntimeMethod_var);
		V_1 = L_8;
		goto IL_0059;
	}

IL_0059:
	{
		int32_t L_9 = V_1;
		return L_9;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::Show(System.String)
extern "C"  void Platform_Show_m1063852283 (Platform_t1698302846 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_Show_m1063852283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___placementId0;
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		AndroidJavaClass_t32045322 * L_1 = __this->get_m_UnityAds_5();
		ObjectU5BU5D_t2843939325* L_2 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		AndroidJavaObject_t4131667876 * L_3 = __this->get_m_CurrentActivity_4();
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_1);
		AndroidJavaObject_CallStatic_m2922144688(L_1, _stringLiteral3902473660, L_2, /*hidden argument*/NULL);
		goto IL_0052;
	}

IL_002d:
	{
		AndroidJavaClass_t32045322 * L_4 = __this->get_m_UnityAds_5();
		ObjectU5BU5D_t2843939325* L_5 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		AndroidJavaObject_t4131667876 * L_6 = __this->get_m_CurrentActivity_4();
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		ObjectU5BU5D_t2843939325* L_7 = L_5;
		String_t* L_8 = ___placementId0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		NullCheck(L_4);
		AndroidJavaObject_CallStatic_m2922144688(L_4, _stringLiteral3902473660, L_7, /*hidden argument*/NULL);
	}

IL_0052:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::SetMetaData(UnityEngine.Advertisements.MetaData)
extern "C"  void Platform_SetMetaData_m3645297404 (Platform_t1698302846 * __this, MetaData_t2274729001 * ___metaData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_SetMetaData_m3645297404_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t4131667876 * V_0 = NULL;
	KeyValuePair_2_t968067334  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		AndroidJavaObject_t4131667876 * L_1 = __this->get_m_CurrentActivity_4();
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		AndroidJavaObject_t4131667876 * L_2 = (AndroidJavaObject_t4131667876 *)il2cpp_codegen_object_new(AndroidJavaObject_t4131667876_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m3828648572(L_2, _stringLiteral3894938408, L_0, /*hidden argument*/NULL);
		V_0 = L_2;
		AndroidJavaObject_t4131667876 * L_3 = V_0;
		ObjectU5BU5D_t2843939325* L_4 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		MetaData_t2274729001 * L_5 = ___metaData0;
		NullCheck(L_5);
		String_t* L_6 = MetaData_get_category_m4241298320(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		NullCheck(L_3);
		AndroidJavaObject_Call_m1449555179(L_3, _stringLiteral2143220806, L_4, /*hidden argument*/NULL);
		MetaData_t2274729001 * L_7 = ___metaData0;
		NullCheck(L_7);
		RuntimeObject* L_8 = MetaData_get_Values_m2805296889(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		RuntimeObject* L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetEnumerator() */, IEnumerable_1_t4242887519_il2cpp_TypeInfo_var, L_8);
		V_2 = L_9;
	}

IL_0042:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0076;
		}

IL_0047:
		{
			RuntimeObject* L_10 = V_2;
			NullCheck(L_10);
			KeyValuePair_2_t968067334  L_11 = InterfaceFuncInvoker0< KeyValuePair_2_t968067334  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current() */, IEnumerator_1_t1400637802_il2cpp_TypeInfo_var, L_10);
			V_1 = L_11;
			AndroidJavaObject_t4131667876 * L_12 = V_0;
			ObjectU5BU5D_t2843939325* L_13 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
			String_t* L_14 = KeyValuePair_2_get_Key_m256823211((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m256823211_RuntimeMethod_var);
			NullCheck(L_13);
			ArrayElementTypeCheck (L_13, L_14);
			(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_14);
			ObjectU5BU5D_t2843939325* L_15 = L_13;
			RuntimeObject * L_16 = KeyValuePair_2_get_Value_m4108279609((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m4108279609_RuntimeMethod_var);
			NullCheck(L_15);
			ArrayElementTypeCheck (L_15, L_16);
			(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_16);
			NullCheck(L_12);
			AndroidJavaObject_Call_TisBoolean_t97287965_m2984583508(L_12, _stringLiteral2553217811, L_15, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t97287965_m2984583508_RuntimeMethod_var);
		}

IL_0076:
		{
			RuntimeObject* L_17 = V_2;
			NullCheck(L_17);
			bool L_18 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_17);
			if (L_18)
			{
				goto IL_0047;
			}
		}

IL_0081:
		{
			IL2CPP_LEAVE(0x93, FINALLY_0086);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0086;
	}

FINALLY_0086:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_19 = V_2;
			if (!L_19)
			{
				goto IL_0092;
			}
		}

IL_008c:
		{
			RuntimeObject* L_20 = V_2;
			NullCheck(L_20);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_20);
		}

IL_0092:
		{
			IL2CPP_END_FINALLY(134)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(134)
	{
		IL2CPP_JUMP_TBL(0x93, IL_0093)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0093:
	{
		AndroidJavaObject_t4131667876 * L_21 = V_0;
		NullCheck(L_21);
		AndroidJavaObject_Call_m1449555179(L_21, _stringLiteral399103237, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.Android.Platform/<onUnityAdsError>c__AnonStorey4::.ctor()
extern "C"  void U3ConUnityAdsErrorU3Ec__AnonStorey4__ctor_m2383325633 (U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180 * __this, const RuntimeMethod* method)
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
// System.Void UnityEngine.Advertisements.Android.Platform/<onUnityAdsError>c__AnonStorey5::.ctor()
extern "C"  void U3ConUnityAdsErrorU3Ec__AnonStorey5__ctor_m2454694337 (U3ConUnityAdsErrorU3Ec__AnonStorey5_t3709914535 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform/<onUnityAdsError>c__AnonStorey5::<>m__0(UnityEngine.Advertisements.CallbackExecutor)
extern "C"  void U3ConUnityAdsErrorU3Ec__AnonStorey5_U3CU3Em__0_m1873462927 (U3ConUnityAdsErrorU3Ec__AnonStorey5_t3709914535 * __this, CallbackExecutor_t363496179 * ___executor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3ConUnityAdsErrorU3Ec__AnonStorey5_U3CU3Em__0_m1873462927_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180 * L_0 = __this->get_U3CU3Ef__refU244_1();
		NullCheck(L_0);
		EventHandler_1_t177306446 * L_1 = L_0->get_handler_0();
		U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180 * L_2 = __this->get_U3CU3Ef__refU244_1();
		NullCheck(L_2);
		Platform_t1698302846 * L_3 = L_2->get_U24this_2();
		int64_t L_4 = __this->get_error_0();
		U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180 * L_5 = __this->get_U3CU3Ef__refU244_1();
		NullCheck(L_5);
		String_t* L_6 = L_5->get_message_1();
		ErrorEventArgs_t2253147013 * L_7 = (ErrorEventArgs_t2253147013 *)il2cpp_codegen_object_new(ErrorEventArgs_t2253147013_il2cpp_TypeInfo_var);
		ErrorEventArgs__ctor_m2417395018(L_7, L_4, L_6, /*hidden argument*/NULL);
		NullCheck(L_1);
		EventHandler_1_Invoke_m1199075846(L_1, L_3, L_7, /*hidden argument*/EventHandler_1_Invoke_m1199075846_RuntimeMethod_var);
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
// System.Void UnityEngine.Advertisements.Android.Platform/<onUnityAdsFinish>c__AnonStorey2::.ctor()
extern "C"  void U3ConUnityAdsFinishU3Ec__AnonStorey2__ctor_m3699482386 (U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596 * __this, const RuntimeMethod* method)
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
// System.Void UnityEngine.Advertisements.Android.Platform/<onUnityAdsFinish>c__AnonStorey3::.ctor()
extern "C"  void U3ConUnityAdsFinishU3Ec__AnonStorey3__ctor_m818981741 (U3ConUnityAdsFinishU3Ec__AnonStorey3_t2653194732 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform/<onUnityAdsFinish>c__AnonStorey3::<>m__0(UnityEngine.Advertisements.CallbackExecutor)
extern "C"  void U3ConUnityAdsFinishU3Ec__AnonStorey3_U3CU3Em__0_m2379100025 (U3ConUnityAdsFinishU3Ec__AnonStorey3_t2653194732 * __this, CallbackExecutor_t363496179 * ___executor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3ConUnityAdsFinishU3Ec__AnonStorey3_U3CU3Em__0_m2379100025_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596 * L_0 = __this->get_U3CU3Ef__refU242_1();
		NullCheck(L_0);
		EventHandler_1_t908338235 * L_1 = L_0->get_handler_0();
		U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596 * L_2 = __this->get_U3CU3Ef__refU242_1();
		NullCheck(L_2);
		Platform_t1698302846 * L_3 = L_2->get_U24this_2();
		U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596 * L_4 = __this->get_U3CU3Ef__refU242_1();
		NullCheck(L_4);
		String_t* L_5 = L_4->get_placementId_1();
		int32_t L_6 = __this->get_showResult_0();
		FinishEventArgs_t2984178802 * L_7 = (FinishEventArgs_t2984178802 *)il2cpp_codegen_object_new(FinishEventArgs_t2984178802_il2cpp_TypeInfo_var);
		FinishEventArgs__ctor_m50835730(L_7, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_1);
		EventHandler_1_Invoke_m3162226611(L_1, L_3, L_7, /*hidden argument*/EventHandler_1_Invoke_m3162226611_RuntimeMethod_var);
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
// System.Void UnityEngine.Advertisements.Android.Platform/<onUnityAdsReady>c__AnonStorey0::.ctor()
extern "C"  void U3ConUnityAdsReadyU3Ec__AnonStorey0__ctor_m2531656002 (U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform/<onUnityAdsReady>c__AnonStorey0::<>m__0(UnityEngine.Advertisements.CallbackExecutor)
extern "C"  void U3ConUnityAdsReadyU3Ec__AnonStorey0_U3CU3Em__0_m2531335987 (U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815 * __this, CallbackExecutor_t363496179 * ___executor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3ConUnityAdsReadyU3Ec__AnonStorey0_U3CU3Em__0_m2531335987_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t2768214265 * L_0 = __this->get_handler_0();
		Platform_t1698302846 * L_1 = __this->get_U24this_2();
		String_t* L_2 = __this->get_placementId_1();
		ReadyEventArgs_t549087536 * L_3 = (ReadyEventArgs_t549087536 *)il2cpp_codegen_object_new(ReadyEventArgs_t549087536_il2cpp_TypeInfo_var);
		ReadyEventArgs__ctor_m1307451034(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		EventHandler_1_Invoke_m743178406(L_0, L_1, L_3, /*hidden argument*/EventHandler_1_Invoke_m743178406_RuntimeMethod_var);
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
// System.Void UnityEngine.Advertisements.Android.Platform/<onUnityAdsStart>c__AnonStorey1::.ctor()
extern "C"  void U3ConUnityAdsStartU3Ec__AnonStorey1__ctor_m1282976937 (U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform/<onUnityAdsStart>c__AnonStorey1::<>m__0(UnityEngine.Advertisements.CallbackExecutor)
extern "C"  void U3ConUnityAdsStartU3Ec__AnonStorey1_U3CU3Em__0_m3745486283 (U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353 * __this, CallbackExecutor_t363496179 * ___executor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3ConUnityAdsStartU3Ec__AnonStorey1_U3CU3Em__0_m3745486283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t2215985868 * L_0 = __this->get_handler_0();
		Platform_t1698302846 * L_1 = __this->get_U24this_2();
		String_t* L_2 = __this->get_placementId_1();
		StartEventArgs_t4291826435 * L_3 = (StartEventArgs_t4291826435 *)il2cpp_codegen_object_new(StartEventArgs_t4291826435_il2cpp_TypeInfo_var);
		StartEventArgs__ctor_m1521341003(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		EventHandler_1_Invoke_m1200448648(L_0, L_1, L_3, /*hidden argument*/EventHandler_1_Invoke_m1200448648_RuntimeMethod_var);
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
// System.Void UnityEngine.Advertisements.CallbackExecutor::.ctor()
extern "C"  void CallbackExecutor__ctor_m543356810 (CallbackExecutor_t363496179 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CallbackExecutor__ctor_m543356810_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_t382223268 * L_0 = (Queue_1_t382223268 *)il2cpp_codegen_object_new(Queue_1_t382223268_il2cpp_TypeInfo_var);
		Queue_1__ctor_m401901252(L_0, /*hidden argument*/Queue_1__ctor_m401901252_RuntimeMethod_var);
		__this->set_s_Queue_2(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.CallbackExecutor::Post(System.Action`1<UnityEngine.Advertisements.CallbackExecutor>)
extern "C"  void CallbackExecutor_Post_m2417625912 (CallbackExecutor_t363496179 * __this, Action_1_t535963774 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CallbackExecutor_Post_m2417625912_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Queue_1_t382223268 * L_0 = __this->get_s_Queue_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		Queue_1_t382223268 * L_2 = __this->get_s_Queue_2();
		Action_1_t535963774 * L_3 = ___action0;
		NullCheck(L_2);
		Queue_1_Enqueue_m3882925169(L_2, L_3, /*hidden argument*/Queue_1_Enqueue_m3882925169_RuntimeMethod_var);
		IL2CPP_LEAVE(0x28, FINALLY_0021);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(33)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_JUMP_TBL(0x28, IL_0028)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0028:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.CallbackExecutor::Update()
extern "C"  void CallbackExecutor_Update_m1131287156 (CallbackExecutor_t363496179 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CallbackExecutor_Update_m1131287156_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Queue_1_t382223268 * L_0 = __this->get_s_Queue_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0027;
		}

IL_0014:
		{
			Queue_1_t382223268 * L_2 = __this->get_s_Queue_2();
			NullCheck(L_2);
			Action_1_t535963774 * L_3 = Queue_1_Dequeue_m2377473102(L_2, /*hidden argument*/Queue_1_Dequeue_m2377473102_RuntimeMethod_var);
			NullCheck(L_3);
			Action_1_Invoke_m345301731(L_3, __this, /*hidden argument*/Action_1_Invoke_m345301731_RuntimeMethod_var);
		}

IL_0027:
		{
			Queue_1_t382223268 * L_4 = __this->get_s_Queue_2();
			NullCheck(L_4);
			int32_t L_5 = Queue_1_get_Count_m2643849061(L_4, /*hidden argument*/Queue_1_get_Count_m2643849061_RuntimeMethod_var);
			if ((((int32_t)L_5) > ((int32_t)0)))
			{
				goto IL_0014;
			}
		}

IL_0038:
		{
			IL2CPP_LEAVE(0x45, FINALLY_003e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003e;
	}

FINALLY_003e:
	{ // begin finally (depth: 1)
		RuntimeObject * L_6 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(62)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(62)
	{
		IL2CPP_JUMP_TBL(0x45, IL_0045)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0045:
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
// System.Void UnityEngine.Advertisements.Editor.Configuration::.ctor(System.String)
extern "C"  void Configuration__ctor_m2049560937 (Configuration_t1722493896 * __this, String_t* ___configurationResponse0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Configuration__ctor_m2049560937_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___configurationResponse0;
		RuntimeObject * L_1 = SimpleJson_DeserializeObject_m4064817826(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IDictionary_2_t1329213854_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject * L_3 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(1 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, L_2, _stringLiteral646178060);
		Configuration_set_enabled_m3944276849(__this, ((*(bool*)((bool*)UnBox(L_3, Boolean_t97287965_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		Dictionary_2_t4177511560 * L_4 = (Dictionary_2_t4177511560 *)il2cpp_codegen_object_new(Dictionary_2_t4177511560_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2310724936(L_4, /*hidden argument*/Dictionary_2__ctor_m2310724936_RuntimeMethod_var);
		Configuration_set_placements_m4002258735(__this, L_4, /*hidden argument*/NULL);
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject * L_6 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(1 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, L_5, _stringLiteral3236072574);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_6, IList_1_t600458651_il2cpp_TypeInfo_var)));
		RuntimeObject* L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IEnumerable_1_t2059959053_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IList_1_t600458651_il2cpp_TypeInfo_var)));
		V_2 = L_7;
	}

IL_004b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00ad;
		}

IL_0050:
		{
			RuntimeObject* L_8 = V_2;
			NullCheck(L_8);
			RuntimeObject * L_9 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IEnumerator_1_t3512676632_il2cpp_TypeInfo_var, L_8);
			V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_9, IDictionary_2_t1329213854_il2cpp_TypeInfo_var));
			RuntimeObject* L_10 = V_1;
			NullCheck(L_10);
			RuntimeObject * L_11 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(1 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, L_10, _stringLiteral3454449607);
			V_3 = ((String_t*)CastclassSealed((RuntimeObject*)L_11, String_t_il2cpp_TypeInfo_var));
			RuntimeObject* L_12 = V_1;
			NullCheck(L_12);
			RuntimeObject * L_13 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(1 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, L_12, _stringLiteral823543098);
			V_4 = ((*(bool*)((bool*)UnBox(L_13, Boolean_t97287965_il2cpp_TypeInfo_var))));
			RuntimeObject* L_14 = V_1;
			NullCheck(L_14);
			RuntimeObject * L_15 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(1 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, L_14, _stringLiteral1948332219);
			if (!((*(bool*)((bool*)UnBox(L_15, Boolean_t97287965_il2cpp_TypeInfo_var)))))
			{
				goto IL_009e;
			}
		}

IL_0095:
		{
			String_t* L_16 = V_3;
			Configuration_set_defaultPlacement_m3028665897(__this, L_16, /*hidden argument*/NULL);
		}

IL_009e:
		{
			Dictionary_2_t4177511560 * L_17 = Configuration_get_placements_m1853086915(__this, /*hidden argument*/NULL);
			String_t* L_18 = V_3;
			bool L_19 = V_4;
			NullCheck(L_17);
			Dictionary_2_Add_m95414296(L_17, L_18, L_19, /*hidden argument*/Dictionary_2_Add_m95414296_RuntimeMethod_var);
		}

IL_00ad:
		{
			RuntimeObject* L_20 = V_2;
			NullCheck(L_20);
			bool L_21 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_0050;
			}
		}

IL_00b8:
		{
			IL2CPP_LEAVE(0xCA, FINALLY_00bd);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00bd;
	}

FINALLY_00bd:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_22 = V_2;
			if (!L_22)
			{
				goto IL_00c9;
			}
		}

IL_00c3:
		{
			RuntimeObject* L_23 = V_2;
			NullCheck(L_23);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_23);
		}

IL_00c9:
		{
			IL2CPP_END_FINALLY(189)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(189)
	{
		IL2CPP_JUMP_TBL(0xCA, IL_00ca)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ca:
	{
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Editor.Configuration::get_enabled()
extern "C"  bool Configuration_get_enabled_m2999626715 (Configuration_t1722493896 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_U3CenabledU3Ek__BackingField_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Configuration::set_enabled(System.Boolean)
extern "C"  void Configuration_set_enabled_m3944276849 (Configuration_t1722493896 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CenabledU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String UnityEngine.Advertisements.Editor.Configuration::get_defaultPlacement()
extern "C"  String_t* Configuration_get_defaultPlacement_m3927249128 (Configuration_t1722493896 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CdefaultPlacementU3Ek__BackingField_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Configuration::set_defaultPlacement(System.String)
extern "C"  void Configuration_set_defaultPlacement_m3028665897 (Configuration_t1722493896 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CdefaultPlacementU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> UnityEngine.Advertisements.Editor.Configuration::get_placements()
extern "C"  Dictionary_2_t4177511560 * Configuration_get_placements_m1853086915 (Configuration_t1722493896 * __this, const RuntimeMethod* method)
{
	Dictionary_2_t4177511560 * V_0 = NULL;
	{
		Dictionary_2_t4177511560 * L_0 = __this->get_U3CplacementsU3Ek__BackingField_2();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Dictionary_2_t4177511560 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Configuration::set_placements(System.Collections.Generic.Dictionary`2<System.String,System.Boolean>)
extern "C"  void Configuration_set_placements_m4002258735 (Configuration_t1722493896 * __this, Dictionary_2_t4177511560 * ___value0, const RuntimeMethod* method)
{
	{
		Dictionary_2_t4177511560 * L_0 = ___value0;
		__this->set_U3CplacementsU3Ek__BackingField_2(L_0);
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
// System.Void UnityEngine.Advertisements.Editor.Placeholder::.ctor()
extern "C"  void Placeholder__ctor_m196381996 (Placeholder_t2906495853 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Texture2D UnityEngine.Advertisements.Editor.Placeholder::TextureFromFile(System.String)
extern "C"  Texture2D_t3840446185 * Placeholder_TextureFromFile_m291359667 (RuntimeObject * __this /* static, unused */, String_t* ___filePath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Placeholder_TextureFromFile_m291359667_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t3840446185 * V_0 = NULL;
	Texture2D_t3840446185 * V_1 = NULL;
	{
		Texture2D_t3840446185 * L_0 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m373113269(L_0, 1, 1, /*hidden argument*/NULL);
		V_0 = L_0;
		Texture2D_t3840446185 * L_1 = V_0;
		String_t* L_2 = ___filePath0;
		ByteU5BU5D_t4116647657* L_3 = File_ReadAllBytes_m1435775076(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		ImageConversion_LoadImage_m2182108104(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_4 = V_0;
		V_1 = L_4;
		goto IL_001d;
	}

IL_001d:
	{
		Texture2D_t3840446185 * L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Placeholder::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C"  void Placeholder_add_OnFinish_m3075927457 (Placeholder_t2906495853 * __this, EventHandler_1_t908338235 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Placeholder_add_OnFinish_m3075927457_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t908338235 * V_0 = NULL;
	EventHandler_1_t908338235 * V_1 = NULL;
	{
		EventHandler_1_t908338235 * L_0 = __this->get_OnFinish_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t908338235 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t908338235 ** L_2 = __this->get_address_of_OnFinish_7();
		EventHandler_1_t908338235 * L_3 = V_1;
		EventHandler_1_t908338235 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t908338235 * L_6 = V_0;
		EventHandler_1_t908338235 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t908338235 *>(L_2, ((EventHandler_1_t908338235 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t908338235_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t908338235 * L_8 = V_0;
		EventHandler_1_t908338235 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t908338235 *)L_8) == ((RuntimeObject*)(EventHandler_1_t908338235 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Placeholder::remove_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C"  void Placeholder_remove_OnFinish_m2422778168 (Placeholder_t2906495853 * __this, EventHandler_1_t908338235 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Placeholder_remove_OnFinish_m2422778168_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t908338235 * V_0 = NULL;
	EventHandler_1_t908338235 * V_1 = NULL;
	{
		EventHandler_1_t908338235 * L_0 = __this->get_OnFinish_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t908338235 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t908338235 ** L_2 = __this->get_address_of_OnFinish_7();
		EventHandler_1_t908338235 * L_3 = V_1;
		EventHandler_1_t908338235 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t908338235 * L_6 = V_0;
		EventHandler_1_t908338235 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t908338235 *>(L_2, ((EventHandler_1_t908338235 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t908338235_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t908338235 * L_8 = V_0;
		EventHandler_1_t908338235 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t908338235 *)L_8) == ((RuntimeObject*)(EventHandler_1_t908338235 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Placeholder::Load(System.String)
extern "C"  void Placeholder_Load_m1103501462 (Placeholder_t2906495853 * __this, String_t* ___extensionPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Placeholder_Load_m1103501462_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___extensionPath0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_1 = Path_Combine_m3389272516(NULL /*static, unused*/, L_0, _stringLiteral3580575796, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_2 = Placeholder_TextureFromFile_m291359667(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->set_m_LandscapeTexture_2(L_2);
		String_t* L_3 = ___extensionPath0;
		String_t* L_4 = Path_Combine_m3389272516(NULL /*static, unused*/, L_3, _stringLiteral3463586438, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_5 = Placeholder_TextureFromFile_m291359667(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		__this->set_m_PortraitTexture_3(L_5);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Placeholder::Show(System.String,System.Boolean)
extern "C"  void Placeholder_Show_m277657847 (Placeholder_t2906495853 * __this, String_t* ___placementId0, bool ___allowSkip1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___placementId0;
		__this->set_m_PlacementId_5(L_0);
		bool L_1 = ___allowSkip1;
		__this->set_m_AllowSkip_6(L_1);
		__this->set_m_Showing_4((bool)1);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Placeholder::OnGUI()
extern "C"  void Placeholder_OnGUI_m2560125389 (Placeholder_t2906495853 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Placeholder_OnGUI_m2560125389_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_m_Showing_4();
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_0045;
	}

IL_0012:
	{
		int32_t L_1 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t2360479859  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Rect__ctor_m2614021312((&L_3), (0.0f), (0.0f), (((float)((float)L_1))), (((float)((float)L_2))), /*hidden argument*/NULL);
		intptr_t L_4 = (intptr_t)Placeholder_ModalWindowFunction_m1854716751_RuntimeMethod_var;
		WindowFunction_t3146511083 * L_5 = (WindowFunction_t3146511083 *)il2cpp_codegen_object_new(WindowFunction_t3146511083_il2cpp_TypeInfo_var);
		WindowFunction__ctor_m2544237635(L_5, __this, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUI_ModalWindow_m2334426705(NULL /*static, unused*/, 0, L_3, L_5, _stringLiteral757602046, /*hidden argument*/NULL);
	}

IL_0045:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Placeholder::ModalWindowFunction(System.Int32)
extern "C"  void Placeholder_ModalWindowFunction_m1854716751 (Placeholder_t2906495853 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Placeholder_ModalWindowFunction_m1854716751_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t908338235 * V_0 = NULL;
	EventHandler_1_t908338235 * V_1 = NULL;
	Rect_t2360479859  G_B2_0;
	memset(&G_B2_0, 0, sizeof(G_B2_0));
	Rect_t2360479859  G_B1_0;
	memset(&G_B1_0, 0, sizeof(G_B1_0));
	Texture2D_t3840446185 * G_B3_0 = NULL;
	Rect_t2360479859  G_B3_1;
	memset(&G_B3_1, 0, sizeof(G_B3_1));
	{
		int32_t L_0 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t2360479859  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Rect__ctor_m2614021312((&L_2), (0.0f), (0.0f), (((float)((float)L_0))), (((float)((float)L_1))), /*hidden argument*/NULL);
		int32_t L_3 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_4 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B1_0 = L_2;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			G_B2_0 = L_2;
			goto IL_0036;
		}
	}
	{
		Texture2D_t3840446185 * L_5 = __this->get_m_LandscapeTexture_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_003c;
	}

IL_0036:
	{
		Texture2D_t3840446185 * L_6 = __this->get_m_PortraitTexture_3();
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_003c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUI_DrawTexture_m2312292152(NULL /*static, unused*/, G_B3_1, G_B3_0, 1, /*hidden argument*/NULL);
		bool L_7 = __this->get_m_AllowSkip_6();
		if (!L_7)
		{
			goto IL_00a0;
		}
	}
	{
		Rect_t2360479859  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Rect__ctor_m2614021312((&L_8), (20.0f), (20.0f), (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		bool L_9 = GUI_Button_m1518979886(NULL /*static, unused*/, L_8, _stringLiteral3899542074, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00a0;
		}
	}
	{
		__this->set_m_Showing_4((bool)0);
		EventHandler_1_t908338235 * L_10 = __this->get_OnFinish_7();
		V_0 = L_10;
		EventHandler_1_t908338235 * L_11 = V_0;
		if (!L_11)
		{
			goto IL_009f;
		}
	}
	{
		EventHandler_1_t908338235 * L_12 = V_0;
		String_t* L_13 = __this->get_m_PlacementId_5();
		FinishEventArgs_t2984178802 * L_14 = (FinishEventArgs_t2984178802 *)il2cpp_codegen_object_new(FinishEventArgs_t2984178802_il2cpp_TypeInfo_var);
		FinishEventArgs__ctor_m50835730(L_14, L_13, 1, /*hidden argument*/NULL);
		NullCheck(L_12);
		EventHandler_1_Invoke_m3162226611(L_12, __this, L_14, /*hidden argument*/EventHandler_1_Invoke_m3162226611_RuntimeMethod_var);
	}

IL_009f:
	{
	}

IL_00a0:
	{
		int32_t L_15 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t2360479859  L_16;
		memset(&L_16, 0, sizeof(L_16));
		Rect__ctor_m2614021312((&L_16), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)((int32_t)170)))))), (20.0f), (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		bool L_17 = GUI_Button_m1518979886(NULL /*static, unused*/, L_16, _stringLiteral3483484711, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00fa;
		}
	}
	{
		__this->set_m_Showing_4((bool)0);
		EventHandler_1_t908338235 * L_18 = __this->get_OnFinish_7();
		V_1 = L_18;
		EventHandler_1_t908338235 * L_19 = V_1;
		if (!L_19)
		{
			goto IL_00f9;
		}
	}
	{
		EventHandler_1_t908338235 * L_20 = V_1;
		String_t* L_21 = __this->get_m_PlacementId_5();
		FinishEventArgs_t2984178802 * L_22 = (FinishEventArgs_t2984178802 *)il2cpp_codegen_object_new(FinishEventArgs_t2984178802_il2cpp_TypeInfo_var);
		FinishEventArgs__ctor_m50835730(L_22, L_21, 2, /*hidden argument*/NULL);
		NullCheck(L_20);
		EventHandler_1_Invoke_m3162226611(L_20, __this, L_22, /*hidden argument*/EventHandler_1_Invoke_m3162226611_RuntimeMethod_var);
	}

IL_00f9:
	{
	}

IL_00fa:
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
// System.Void UnityEngine.Advertisements.Editor.Platform::.ctor(System.String)
extern "C"  void Platform__ctor_m3929159556 (Platform_t2756657262 * __this, String_t* ___extensionPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform__ctor_m3929159556_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	GameObject_t1113636619 * V_1 = NULL;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_0, _stringLiteral645957545, /*hidden argument*/NULL);
		V_1 = L_0;
		GameObject_t1113636619 * L_1 = V_1;
		NullCheck(L_1);
		Object_set_hideFlags_m1648752846(L_1, ((int32_t)63), /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = V_1;
		V_0 = L_2;
		GameObject_t1113636619 * L_3 = V_0;
		NullCheck(L_3);
		Placeholder_t2906495853 * L_4 = GameObject_AddComponent_TisPlaceholder_t2906495853_m4080008109(L_3, /*hidden argument*/GameObject_AddComponent_TisPlaceholder_t2906495853_m4080008109_RuntimeMethod_var);
		__this->set_m_Placeholder_3(L_4);
		Placeholder_t2906495853 * L_5 = __this->get_m_Placeholder_3();
		intptr_t L_6 = (intptr_t)Platform_U3CPlatformU3Em__0_m2859748733_RuntimeMethod_var;
		EventHandler_1_t908338235 * L_7 = (EventHandler_1_t908338235 *)il2cpp_codegen_object_new(EventHandler_1_t908338235_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1760330498(L_7, __this, L_6, /*hidden argument*/EventHandler_1__ctor_m1760330498_RuntimeMethod_var);
		NullCheck(L_5);
		Placeholder_add_OnFinish_m3075927457(L_5, L_7, /*hidden argument*/NULL);
		Placeholder_t2906495853 * L_8 = __this->get_m_Placeholder_3();
		String_t* L_9 = ___extensionPath0;
		NullCheck(L_8);
		Placeholder_Load_m1103501462(L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::add_OnReady(System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>)
extern "C"  void Platform_add_OnReady_m2188949100 (Platform_t2756657262 * __this, EventHandler_1_t2768214265 * ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::remove_OnReady(System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>)
extern "C"  void Platform_remove_OnReady_m2059499402 (Platform_t2756657262 * __this, EventHandler_1_t2768214265 * ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::add_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
extern "C"  void Platform_add_OnStart_m534126228 (Platform_t2756657262 * __this, EventHandler_1_t2215985868 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_add_OnStart_m534126228_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2215985868 * V_0 = NULL;
	EventHandler_1_t2215985868 * V_1 = NULL;
	{
		EventHandler_1_t2215985868 * L_0 = __this->get_OnStart_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2215985868 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2215985868 ** L_2 = __this->get_address_of_OnStart_4();
		EventHandler_1_t2215985868 * L_3 = V_1;
		EventHandler_1_t2215985868 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2215985868 * L_6 = V_0;
		EventHandler_1_t2215985868 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2215985868 *>(L_2, ((EventHandler_1_t2215985868 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2215985868_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2215985868 * L_8 = V_0;
		EventHandler_1_t2215985868 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2215985868 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2215985868 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::remove_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
extern "C"  void Platform_remove_OnStart_m392217845 (Platform_t2756657262 * __this, EventHandler_1_t2215985868 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_remove_OnStart_m392217845_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2215985868 * V_0 = NULL;
	EventHandler_1_t2215985868 * V_1 = NULL;
	{
		EventHandler_1_t2215985868 * L_0 = __this->get_OnStart_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2215985868 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2215985868 ** L_2 = __this->get_address_of_OnStart_4();
		EventHandler_1_t2215985868 * L_3 = V_1;
		EventHandler_1_t2215985868 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2215985868 * L_6 = V_0;
		EventHandler_1_t2215985868 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2215985868 *>(L_2, ((EventHandler_1_t2215985868 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2215985868_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2215985868 * L_8 = V_0;
		EventHandler_1_t2215985868 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2215985868 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2215985868 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C"  void Platform_add_OnFinish_m2427335122 (Platform_t2756657262 * __this, EventHandler_1_t908338235 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_add_OnFinish_m2427335122_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t908338235 * V_0 = NULL;
	EventHandler_1_t908338235 * V_1 = NULL;
	{
		EventHandler_1_t908338235 * L_0 = __this->get_OnFinish_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t908338235 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t908338235 ** L_2 = __this->get_address_of_OnFinish_5();
		EventHandler_1_t908338235 * L_3 = V_1;
		EventHandler_1_t908338235 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t908338235 * L_6 = V_0;
		EventHandler_1_t908338235 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t908338235 *>(L_2, ((EventHandler_1_t908338235 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t908338235_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t908338235 * L_8 = V_0;
		EventHandler_1_t908338235 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t908338235 *)L_8) == ((RuntimeObject*)(EventHandler_1_t908338235 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::remove_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C"  void Platform_remove_OnFinish_m2807117244 (Platform_t2756657262 * __this, EventHandler_1_t908338235 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_remove_OnFinish_m2807117244_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t908338235 * V_0 = NULL;
	EventHandler_1_t908338235 * V_1 = NULL;
	{
		EventHandler_1_t908338235 * L_0 = __this->get_OnFinish_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t908338235 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t908338235 ** L_2 = __this->get_address_of_OnFinish_5();
		EventHandler_1_t908338235 * L_3 = V_1;
		EventHandler_1_t908338235 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t908338235 * L_6 = V_0;
		EventHandler_1_t908338235 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t908338235 *>(L_2, ((EventHandler_1_t908338235 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t908338235_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t908338235 * L_8 = V_0;
		EventHandler_1_t908338235 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t908338235 *)L_8) == ((RuntimeObject*)(EventHandler_1_t908338235 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::add_OnError(System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>)
extern "C"  void Platform_add_OnError_m3126490155 (Platform_t2756657262 * __this, EventHandler_1_t177306446 * ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::remove_OnError(System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>)
extern "C"  void Platform_remove_OnError_m306628686 (Platform_t2756657262 * __this, EventHandler_1_t177306446 * ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Editor.Platform::get_isInitialized()
extern "C"  bool Platform_get_isInitialized_m472391085 (Platform_t2756657262 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Configuration_t1722493896 * L_0 = __this->get_m_Configuration_2();
		V_0 = (bool)((((int32_t)((((RuntimeObject*)(Configuration_t1722493896 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0013:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Advertisements.Editor.Platform::get_isSupported()
extern "C"  bool Platform_get_isSupported_m3110485577 (Platform_t2756657262 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = Application_get_isEditor_m857789090(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Advertisements.Editor.Platform::get_version()
extern "C"  String_t* Platform_get_version_m2737893346 (Platform_t2756657262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_get_version_m2737893346_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		V_0 = _stringLiteral3040706120;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.Advertisements.Editor.Platform::get_debugMode()
extern "C"  bool Platform_get_debugMode_m2568032682 (Platform_t2756657262 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_DebugMode_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::set_debugMode(System.Boolean)
extern "C"  void Platform_set_debugMode_m1278356037 (Platform_t2756657262 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_DebugMode_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::Initialize(System.String,System.Boolean)
extern "C"  void Platform_Initialize_m1938088921 (Platform_t2756657262 * __this, String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_Initialize_m1938088921_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeU3Ec__AnonStorey0_t2183256279 * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		U3CInitializeU3Ec__AnonStorey0_t2183256279 * L_0 = (U3CInitializeU3Ec__AnonStorey0_t2183256279 *)il2cpp_codegen_object_new(U3CInitializeU3Ec__AnonStorey0_t2183256279_il2cpp_TypeInfo_var);
		U3CInitializeU3Ec__AnonStorey0__ctor_m3353071426(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CInitializeU3Ec__AnonStorey0_t2183256279 * L_1 = V_0;
		String_t* L_2 = ___gameId0;
		NullCheck(L_1);
		L_1->set_gameId_1(L_2);
		U3CInitializeU3Ec__AnonStorey0_t2183256279 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_2(__this);
		ObjectU5BU5D_t2843939325* L_4 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral1223721476);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1223721476);
		ObjectU5BU5D_t2843939325* L_5 = L_4;
		U3CInitializeU3Ec__AnonStorey0_t2183256279 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = L_6->get_gameId_1();
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_5;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral3450517380);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3450517380);
		ObjectU5BU5D_t2843939325* L_9 = L_8;
		bool L_10 = ___testMode1;
		bool L_11 = L_10;
		RuntimeObject * L_12 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_12);
		ObjectU5BU5D_t2843939325* L_13 = L_9;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral3451893639);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral3451893639);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m2971454694(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		StringU5BU5D_t1281789340* L_15 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)3));
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t2756657262_il2cpp_TypeInfo_var);
		String_t* L_16 = ((Platform_t2756657262_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t2756657262_il2cpp_TypeInfo_var))->get_s_BaseUrl_0();
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_16);
		StringU5BU5D_t1281789340* L_17 = L_15;
		U3CInitializeU3Ec__AnonStorey0_t2183256279 * L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = L_18->get_gameId_1();
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_19);
		StringU5BU5D_t1281789340* L_20 = L_17;
		StringU5BU5D_t1281789340* L_21 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)3));
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral637845977);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral637845977);
		StringU5BU5D_t1281789340* L_22 = L_21;
		String_t* L_23 = Application_get_unityVersion_m1068543125(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t100236324_il2cpp_TypeInfo_var);
		String_t* L_24 = Uri_EscapeDataString_m2743853427(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		String_t* L_25 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3133685381, L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_25);
		StringU5BU5D_t1281789340* L_26 = L_22;
		String_t* L_27 = Platform_get_version_m2737893346(__this, /*hidden argument*/NULL);
		String_t* L_28 = Uri_EscapeDataString_m2743853427(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		String_t* L_29 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral945277909, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_29);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_29);
		String_t* L_30 = String_Join_m2050845953(NULL /*static, unused*/, _stringLiteral3452614522, L_26, /*hidden argument*/NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_30);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_30);
		String_t* L_31 = String_Join_m2050845953(NULL /*static, unused*/, _stringLiteral3452614529, L_20, /*hidden argument*/NULL);
		V_1 = L_31;
		U3CInitializeU3Ec__AnonStorey0_t2183256279 * L_32 = V_0;
		String_t* L_33 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(WebRequest_t1939381076_il2cpp_TypeInfo_var);
		WebRequest_t1939381076 * L_34 = WebRequest_Create_m1521009289(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		NullCheck(L_32);
		L_32->set_request_0(L_34);
		U3CInitializeU3Ec__AnonStorey0_t2183256279 * L_35 = V_0;
		NullCheck(L_35);
		WebRequest_t1939381076 * L_36 = L_35->get_request_0();
		U3CInitializeU3Ec__AnonStorey0_t2183256279 * L_37 = V_0;
		intptr_t L_38 = (intptr_t)U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m3447091495_RuntimeMethod_var;
		AsyncCallback_t3962456242 * L_39 = (AsyncCallback_t3962456242 *)il2cpp_codegen_object_new(AsyncCallback_t3962456242_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m530647953(L_39, L_37, L_38, /*hidden argument*/NULL);
		NullCheck(L_36);
		VirtFuncInvoker2< RuntimeObject*, AsyncCallback_t3962456242 *, RuntimeObject * >::Invoke(12 /* System.IAsyncResult System.Net.WebRequest::BeginGetResponse(System.AsyncCallback,System.Object) */, L_36, L_39, NULL);
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Editor.Platform::IsReady(System.String)
extern "C"  bool Platform_IsReady_m1007373777 (Platform_t2756657262 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_IsReady_m1007373777_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		String_t* L_0 = ___placementId0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		bool L_1 = Platform_get_isInitialized_m472391085(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0039;
	}

IL_0014:
	{
		bool L_2 = Platform_get_isInitialized_m472391085(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		Configuration_t1722493896 * L_3 = __this->get_m_Configuration_2();
		NullCheck(L_3);
		Dictionary_2_t4177511560 * L_4 = Configuration_get_placements_m1853086915(L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___placementId0;
		NullCheck(L_4);
		bool L_6 = Dictionary_2_ContainsKey_m1412659484(L_4, L_5, /*hidden argument*/Dictionary_2_ContainsKey_m1412659484_RuntimeMethod_var);
		G_B5_0 = ((int32_t)(L_6));
		goto IL_0033;
	}

IL_0032:
	{
		G_B5_0 = 0;
	}

IL_0033:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0039;
	}

IL_0039:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Advertisements.PlacementState UnityEngine.Advertisements.Editor.Platform::GetPlacementState(System.String)
extern "C"  int32_t Platform_GetPlacementState_m359299365 (Platform_t2756657262 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___placementId0;
		bool L_1 = Platform_IsReady_m1007373777(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_0 = 0;
		goto IL_001c;
	}

IL_0015:
	{
		V_0 = 1;
		goto IL_001c;
	}

IL_001c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::Show(System.String)
extern "C"  void Platform_Show_m2242650914 (Platform_t2756657262 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_Show_m2242650914_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2215985868 * V_0 = NULL;
	EventHandler_1_t908338235 * V_1 = NULL;
	{
		bool L_0 = Platform_get_isInitialized_m472391085(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_1 = ___placementId0;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		Configuration_t1722493896 * L_2 = __this->get_m_Configuration_2();
		NullCheck(L_2);
		String_t* L_3 = Configuration_get_defaultPlacement_m3927249128(L_2, /*hidden argument*/NULL);
		___placementId0 = L_3;
	}

IL_0021:
	{
		String_t* L_4 = ___placementId0;
		bool L_5 = Platform_IsReady_m1007373777(__this, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		EventHandler_1_t2215985868 * L_6 = __this->get_OnStart_4();
		V_0 = L_6;
		EventHandler_1_t2215985868 * L_7 = V_0;
		if (!L_7)
		{
			goto IL_004a;
		}
	}
	{
		EventHandler_1_t2215985868 * L_8 = V_0;
		String_t* L_9 = ___placementId0;
		StartEventArgs_t4291826435 * L_10 = (StartEventArgs_t4291826435 *)il2cpp_codegen_object_new(StartEventArgs_t4291826435_il2cpp_TypeInfo_var);
		StartEventArgs__ctor_m1521341003(L_10, L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		EventHandler_1_Invoke_m1200448648(L_8, __this, L_10, /*hidden argument*/EventHandler_1_Invoke_m1200448648_RuntimeMethod_var);
	}

IL_004a:
	{
		Placeholder_t2906495853 * L_11 = __this->get_m_Placeholder_3();
		String_t* L_12 = ___placementId0;
		Configuration_t1722493896 * L_13 = __this->get_m_Configuration_2();
		NullCheck(L_13);
		Dictionary_2_t4177511560 * L_14 = Configuration_get_placements_m1853086915(L_13, /*hidden argument*/NULL);
		String_t* L_15 = ___placementId0;
		NullCheck(L_14);
		bool L_16 = Dictionary_2_get_Item_m3494146125(L_14, L_15, /*hidden argument*/Dictionary_2_get_Item_m3494146125_RuntimeMethod_var);
		NullCheck(L_11);
		Placeholder_Show_m277657847(L_11, L_12, L_16, /*hidden argument*/NULL);
		goto IL_008c;
	}

IL_006d:
	{
		EventHandler_1_t908338235 * L_17 = __this->get_OnFinish_5();
		V_1 = L_17;
		EventHandler_1_t908338235 * L_18 = V_1;
		if (!L_18)
		{
			goto IL_008b;
		}
	}
	{
		EventHandler_1_t908338235 * L_19 = V_1;
		String_t* L_20 = ___placementId0;
		FinishEventArgs_t2984178802 * L_21 = (FinishEventArgs_t2984178802 *)il2cpp_codegen_object_new(FinishEventArgs_t2984178802_il2cpp_TypeInfo_var);
		FinishEventArgs__ctor_m50835730(L_21, L_20, 0, /*hidden argument*/NULL);
		NullCheck(L_19);
		EventHandler_1_Invoke_m3162226611(L_19, __this, L_21, /*hidden argument*/EventHandler_1_Invoke_m3162226611_RuntimeMethod_var);
	}

IL_008b:
	{
	}

IL_008c:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::SetMetaData(UnityEngine.Advertisements.MetaData)
extern "C"  void Platform_SetMetaData_m2723199929 (Platform_t2756657262 * __this, MetaData_t2274729001 * ___metaData0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::.cctor()
extern "C"  void Platform__cctor_m2711454710 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform__cctor_m2711454710_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Platform_t2756657262_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t2756657262_il2cpp_TypeInfo_var))->set_s_BaseUrl_0(_stringLiteral3342921282);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::<Platform>m__0(System.Object,UnityEngine.Advertisements.FinishEventArgs)
extern "C"  void Platform_U3CPlatformU3Em__0_m2859748733 (Platform_t2756657262 * __this, RuntimeObject * ___sender0, FinishEventArgs_t2984178802 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_U3CPlatformU3Em__0_m2859748733_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t908338235 * V_0 = NULL;
	{
		EventHandler_1_t908338235 * L_0 = __this->get_OnFinish_5();
		V_0 = L_0;
		EventHandler_1_t908338235 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		EventHandler_1_t908338235 * L_2 = V_0;
		RuntimeObject * L_3 = ___sender0;
		FinishEventArgs_t2984178802 * L_4 = ___e1;
		NullCheck(L_4);
		String_t* L_5 = FinishEventArgs_get_placementId_m3475944639(L_4, /*hidden argument*/NULL);
		FinishEventArgs_t2984178802 * L_6 = ___e1;
		NullCheck(L_6);
		int32_t L_7 = FinishEventArgs_get_showResult_m2484985128(L_6, /*hidden argument*/NULL);
		FinishEventArgs_t2984178802 * L_8 = (FinishEventArgs_t2984178802 *)il2cpp_codegen_object_new(FinishEventArgs_t2984178802_il2cpp_TypeInfo_var);
		FinishEventArgs__ctor_m50835730(L_8, L_5, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		EventHandler_1_Invoke_m3162226611(L_2, L_3, L_8, /*hidden argument*/EventHandler_1_Invoke_m3162226611_RuntimeMethod_var);
	}

IL_0028:
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
// System.Void UnityEngine.Advertisements.Editor.Platform/<Initialize>c__AnonStorey0::.ctor()
extern "C"  void U3CInitializeU3Ec__AnonStorey0__ctor_m3353071426 (U3CInitializeU3Ec__AnonStorey0_t2183256279 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform/<Initialize>c__AnonStorey0::<>m__0(System.IAsyncResult)
extern "C"  void U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m3447091495 (U3CInitializeU3Ec__AnonStorey0_t2183256279 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m3447091495_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebResponse_t229922639 * V_0 = NULL;
	StreamReader_t4009935899 * V_1 = NULL;
	String_t* V_2 = NULL;
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		WebRequest_t1939381076 * L_0 = __this->get_request_0();
		RuntimeObject* L_1 = ___result0;
		NullCheck(L_0);
		WebResponse_t229922639 * L_2 = VirtFuncInvoker1< WebResponse_t229922639 *, RuntimeObject* >::Invoke(13 /* System.Net.WebResponse System.Net.WebRequest::EndGetResponse(System.IAsyncResult) */, L_0, L_1);
		V_0 = L_2;
		WebResponse_t229922639 * L_3 = V_0;
		NullCheck(L_3);
		Stream_t1273022909 * L_4 = VirtFuncInvoker0< Stream_t1273022909 * >::Invoke(8 /* System.IO.Stream System.Net.WebResponse::GetResponseStream() */, L_3);
		StreamReader_t4009935899 * L_5 = (StreamReader_t4009935899 *)il2cpp_codegen_object_new(StreamReader_t4009935899_il2cpp_TypeInfo_var);
		StreamReader__ctor_m1047876681(L_5, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		StreamReader_t4009935899 * L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadToEnd() */, L_6);
		V_2 = L_7;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		{
			Platform_t2756657262 * L_8 = __this->get_U24this_2();
			String_t* L_9 = V_2;
			Configuration_t1722493896 * L_10 = (Configuration_t1722493896 *)il2cpp_codegen_object_new(Configuration_t1722493896_il2cpp_TypeInfo_var);
			Configuration__ctor_m2049560937(L_10, L_9, /*hidden argument*/NULL);
			NullCheck(L_8);
			L_8->set_m_Configuration_2(L_10);
			Platform_t2756657262 * L_11 = __this->get_U24this_2();
			NullCheck(L_11);
			Configuration_t1722493896 * L_12 = L_11->get_m_Configuration_2();
			NullCheck(L_12);
			bool L_13 = Configuration_get_enabled_m2999626715(L_12, /*hidden argument*/NULL);
			if (L_13)
			{
				goto IL_0064;
			}
		}

IL_0048:
		{
			String_t* L_14 = __this->get_gameId_1();
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_15 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral2170070431, L_14, _stringLiteral1332923527, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		}

IL_0064:
		{
			goto IL_0093;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_006a;
		throw e;
	}

CATCH_006a:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		String_t* L_16 = __this->get_gameId_1();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3541090105, L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		String_t* L_18 = V_2;
		Debug_Log_m4051431634(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		Exception_t * L_19 = V_3;
		Debug_LogException_m2207318968(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		goto IL_0093;
	} // end catch (depth: 1)

IL_0093:
	{
		StreamReader_t4009935899 * L_20 = V_1;
		NullCheck(L_20);
		VirtActionInvoker0::Invoke(5 /* System.Void System.IO.TextReader::Close() */, L_20);
		WebResponse_t229922639 * L_21 = V_0;
		NullCheck(L_21);
		VirtActionInvoker0::Invoke(7 /* System.Void System.Net.WebResponse::Close() */, L_21);
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
// System.Void UnityEngine.Advertisements.ErrorEventArgs::.ctor(System.Int64,System.String)
extern "C"  void ErrorEventArgs__ctor_m2417395018 (ErrorEventArgs_t2253147013 * __this, int64_t ___error0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ErrorEventArgs__ctor_m2417395018_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		int64_t L_0 = ___error0;
		ErrorEventArgs_set_error_m4248800756(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___message1;
		ErrorEventArgs_set_message_m3532469052(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int64 UnityEngine.Advertisements.ErrorEventArgs::get_error()
extern "C"  int64_t ErrorEventArgs_get_error_m4212549059 (ErrorEventArgs_t2253147013 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		int64_t L_0 = __this->get_U3CerrorU3Ek__BackingField_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Advertisements.ErrorEventArgs::set_error(System.Int64)
extern "C"  void ErrorEventArgs_set_error_m4248800756 (ErrorEventArgs_t2253147013 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_U3CerrorU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String UnityEngine.Advertisements.ErrorEventArgs::get_message()
extern "C"  String_t* ErrorEventArgs_get_message_m3554449995 (ErrorEventArgs_t2253147013 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CmessageU3Ek__BackingField_2();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Advertisements.ErrorEventArgs::set_message(System.String)
extern "C"  void ErrorEventArgs_set_message_m3532469052 (ErrorEventArgs_t2253147013 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CmessageU3Ek__BackingField_2(L_0);
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
// System.Void UnityEngine.Advertisements.FinishEventArgs::.ctor(System.String,UnityEngine.Advertisements.ShowResult)
extern "C"  void FinishEventArgs__ctor_m50835730 (FinishEventArgs_t2984178802 * __this, String_t* ___placementId0, int32_t ___showResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FinishEventArgs__ctor_m50835730_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___placementId0;
		FinishEventArgs_set_placementId_m452915092(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___showResult1;
		FinishEventArgs_set_showResult_m203134832(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Advertisements.FinishEventArgs::get_placementId()
extern "C"  String_t* FinishEventArgs_get_placementId_m3475944639 (FinishEventArgs_t2984178802 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CplacementIdU3Ek__BackingField_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Advertisements.FinishEventArgs::set_placementId(System.String)
extern "C"  void FinishEventArgs_set_placementId_m452915092 (FinishEventArgs_t2984178802 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CplacementIdU3Ek__BackingField_1(L_0);
		return;
	}
}
// UnityEngine.Advertisements.ShowResult UnityEngine.Advertisements.FinishEventArgs::get_showResult()
extern "C"  int32_t FinishEventArgs_get_showResult_m2484985128 (FinishEventArgs_t2984178802 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CshowResultU3Ek__BackingField_2();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Advertisements.FinishEventArgs::set_showResult(UnityEngine.Advertisements.ShowResult)
extern "C"  void FinishEventArgs_set_showResult_m203134832 (FinishEventArgs_t2984178802 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CshowResultU3Ek__BackingField_2(L_0);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Platform_UnityAdsReady_m2855172723(char* ___placementId0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___placementId0' to managed representation
	String_t* ____placementId0_unmarshaled = NULL;
	____placementId0_unmarshaled = il2cpp_codegen_marshal_string_result(___placementId0);

	// Managed method invocation
	Platform_UnityAdsReady_m2855172723(NULL, ____placementId0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Platform_UnityAdsDidError_m3621980989(int64_t ___rawError0, char* ___message1)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___message1' to managed representation
	String_t* ____message1_unmarshaled = NULL;
	____message1_unmarshaled = il2cpp_codegen_marshal_string_result(___message1);

	// Managed method invocation
	Platform_UnityAdsDidError_m3621980989(NULL, ___rawError0, ____message1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Platform_UnityAdsDidStart_m971319454(char* ___placementId0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___placementId0' to managed representation
	String_t* ____placementId0_unmarshaled = NULL;
	____placementId0_unmarshaled = il2cpp_codegen_marshal_string_result(___placementId0);

	// Managed method invocation
	Platform_UnityAdsDidStart_m971319454(NULL, ____placementId0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Platform_UnityAdsDidFinish_m4137038415(char* ___placementId0, int64_t ___rawShowResult1)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___placementId0' to managed representation
	String_t* ____placementId0_unmarshaled = NULL;
	____placementId0_unmarshaled = il2cpp_codegen_marshal_string_result(___placementId0);

	// Managed method invocation
	Platform_UnityAdsDidFinish_m4137038415(NULL, ____placementId0_unmarshaled, ___rawShowResult1, NULL);

}
// System.Void UnityEngine.Advertisements.iOS.Platform::.ctor()
extern "C"  void Platform__ctor_m3887152146 (Platform_t1647901813 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform__ctor_m3887152146_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	GameObject_t1113636619 * V_1 = NULL;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->set_s_Instance_0(__this);
		GameObject_t1113636619 * L_0 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_0, _stringLiteral2428876507, /*hidden argument*/NULL);
		V_1 = L_0;
		GameObject_t1113636619 * L_1 = V_1;
		NullCheck(L_1);
		Object_set_hideFlags_m1648752846(L_1, ((int32_t)63), /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = V_1;
		V_0 = L_2;
		GameObject_t1113636619 * L_3 = V_0;
		NullCheck(L_3);
		CallbackExecutor_t363496179 * L_4 = GameObject_AddComponent_TisCallbackExecutor_t363496179_m2253360972(L_3, /*hidden argument*/GameObject_AddComponent_TisCallbackExecutor_t363496179_m2253360972_RuntimeMethod_var);
		((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->set_s_CallbackExecutor_1(L_4);
		GameObject_t1113636619 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		unityAdsReady_t96934738 * L_6 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_6();
		if (L_6)
		{
			goto IL_004b;
		}
	}
	{
		intptr_t L_7 = (intptr_t)Platform_UnityAdsReady_m2855172723_RuntimeMethod_var;
		unityAdsReady_t96934738 * L_8 = (unityAdsReady_t96934738 *)il2cpp_codegen_object_new(unityAdsReady_t96934738_il2cpp_TypeInfo_var);
		unityAdsReady__ctor_m3699019508(L_8, NULL, L_7, /*hidden argument*/NULL);
		((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_6(L_8);
	}

IL_004b:
	{
		unityAdsReady_t96934738 * L_9 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_6();
		Platform_UnityAdsEngineSetReadyCallback_m572408946(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		unityAdsDidError_t1993223595 * L_10 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_7();
		if (L_10)
		{
			goto IL_006d;
		}
	}
	{
		intptr_t L_11 = (intptr_t)Platform_UnityAdsDidError_m3621980989_RuntimeMethod_var;
		unityAdsDidError_t1993223595 * L_12 = (unityAdsDidError_t1993223595 *)il2cpp_codegen_object_new(unityAdsDidError_t1993223595_il2cpp_TypeInfo_var);
		unityAdsDidError__ctor_m4120111418(L_12, NULL, L_11, /*hidden argument*/NULL);
		((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1_7(L_12);
	}

IL_006d:
	{
		unityAdsDidError_t1993223595 * L_13 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_7();
		Platform_UnityAdsEngineSetDidErrorCallback_m2717679206(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		unityAdsDidStart_t1058412932 * L_14 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_8();
		if (L_14)
		{
			goto IL_008f;
		}
	}
	{
		intptr_t L_15 = (intptr_t)Platform_UnityAdsDidStart_m971319454_RuntimeMethod_var;
		unityAdsDidStart_t1058412932 * L_16 = (unityAdsDidStart_t1058412932 *)il2cpp_codegen_object_new(unityAdsDidStart_t1058412932_il2cpp_TypeInfo_var);
		unityAdsDidStart__ctor_m610751912(L_16, NULL, L_15, /*hidden argument*/NULL);
		((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache2_8(L_16);
	}

IL_008f:
	{
		unityAdsDidStart_t1058412932 * L_17 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_8();
		Platform_UnityAdsEngineSetDidStartCallback_m104356378(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		unityAdsDidFinish_t3747416149 * L_18 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache3_9();
		if (L_18)
		{
			goto IL_00b1;
		}
	}
	{
		intptr_t L_19 = (intptr_t)Platform_UnityAdsDidFinish_m4137038415_RuntimeMethod_var;
		unityAdsDidFinish_t3747416149 * L_20 = (unityAdsDidFinish_t3747416149 *)il2cpp_codegen_object_new(unityAdsDidFinish_t3747416149_il2cpp_TypeInfo_var);
		unityAdsDidFinish__ctor_m3115871303(L_20, NULL, L_19, /*hidden argument*/NULL);
		((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache3_9(L_20);
	}

IL_00b1:
	{
		unityAdsDidFinish_t3747416149 * L_21 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache3_9();
		Platform_UnityAdsEngineSetDidFinishCallback_m1054131631(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL UnityAdsEngineInitialize(char*, int32_t);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineInitialize(System.String,System.Boolean)
extern "C"  void Platform_UnityAdsEngineInitialize_m3450854254 (RuntimeObject * __this /* static, unused */, String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter '___gameId0' to native representation
	char* ____gameId0_marshaled = NULL;
	____gameId0_marshaled = il2cpp_codegen_marshal_string(___gameId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsEngineInitialize)(____gameId0_marshaled, static_cast<int32_t>(___testMode1));

	// Marshaling cleanup of parameter '___gameId0' native representation
	il2cpp_codegen_marshal_free(____gameId0_marshaled);
	____gameId0_marshaled = NULL;

}
extern "C" void DEFAULT_CALL UnityAdsEngineShow(char*);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineShow(System.String)
extern "C"  void Platform_UnityAdsEngineShow_m1525385135 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsEngineShow)(____placementId0_marshaled);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

}
extern "C" int32_t DEFAULT_CALL UnityAdsEngineGetDebugMode();
// System.Boolean UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineGetDebugMode()
extern "C"  bool Platform_UnityAdsEngineGetDebugMode_m559010788 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityAdsEngineGetDebugMode)();

	return static_cast<bool>(returnValue);
}
extern "C" void DEFAULT_CALL UnityAdsEngineSetDebugMode(int32_t);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetDebugMode(System.Boolean)
extern "C"  void Platform_UnityAdsEngineSetDebugMode_m2043700802 (RuntimeObject * __this /* static, unused */, bool ___debugMode0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsEngineSetDebugMode)(static_cast<int32_t>(___debugMode0));

}
extern "C" int32_t DEFAULT_CALL UnityAdsEngineIsSupported();
// System.Boolean UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineIsSupported()
extern "C"  bool Platform_UnityAdsEngineIsSupported_m2832327113 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityAdsEngineIsSupported)();

	return static_cast<bool>(returnValue);
}
extern "C" int32_t DEFAULT_CALL UnityAdsEngineIsReady(char*);
// System.Boolean UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineIsReady(System.String)
extern "C"  bool Platform_UnityAdsEngineIsReady_m1204345331 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityAdsEngineIsReady)(____placementId0_marshaled);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
extern "C" int64_t DEFAULT_CALL UnityAdsEngineGetPlacementState(char*);
// System.Int64 UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineGetPlacementState(System.String)
extern "C"  int64_t Platform_UnityAdsEngineGetPlacementState_m763487549 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method)
{
	typedef int64_t (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(UnityAdsEngineGetPlacementState)(____placementId0_marshaled);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

	return returnValue;
}
extern "C" char* DEFAULT_CALL UnityAdsEngineGetVersion();
// System.String UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineGetVersion()
extern "C"  String_t* Platform_UnityAdsEngineGetVersion_m45362240 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(UnityAdsEngineGetVersion)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
extern "C" int32_t DEFAULT_CALL UnityAdsEngineIsInitialized();
// System.Boolean UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineIsInitialized()
extern "C"  bool Platform_UnityAdsEngineIsInitialized_m3090894253 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityAdsEngineIsInitialized)();

	return static_cast<bool>(returnValue);
}
extern "C" void DEFAULT_CALL UnityAdsEngineSetMetaData(char*, char*);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetMetaData(System.String,System.String)
extern "C"  void Platform_UnityAdsEngineSetMetaData_m1955283902 (RuntimeObject * __this /* static, unused */, String_t* ___category0, String_t* ___data1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___category0' to native representation
	char* ____category0_marshaled = NULL;
	____category0_marshaled = il2cpp_codegen_marshal_string(___category0);

	// Marshaling of parameter '___data1' to native representation
	char* ____data1_marshaled = NULL;
	____data1_marshaled = il2cpp_codegen_marshal_string(___data1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsEngineSetMetaData)(____category0_marshaled, ____data1_marshaled);

	// Marshaling cleanup of parameter '___category0' native representation
	il2cpp_codegen_marshal_free(____category0_marshaled);
	____category0_marshaled = NULL;

	// Marshaling cleanup of parameter '___data1' native representation
	il2cpp_codegen_marshal_free(____data1_marshaled);
	____data1_marshaled = NULL;

}
extern "C" void DEFAULT_CALL UnityAdsEngineSetReadyCallback(Il2CppMethodPointer);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetReadyCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsReady)
extern "C"  void Platform_UnityAdsEngineSetReadyCallback_m572408946 (RuntimeObject * __this /* static, unused */, unityAdsReady_t96934738 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsEngineSetReadyCallback)(____callback0_marshaled);

}
extern "C" void DEFAULT_CALL UnityAdsEngineSetDidErrorCallback(Il2CppMethodPointer);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetDidErrorCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsDidError)
extern "C"  void Platform_UnityAdsEngineSetDidErrorCallback_m2717679206 (RuntimeObject * __this /* static, unused */, unityAdsDidError_t1993223595 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsEngineSetDidErrorCallback)(____callback0_marshaled);

}
extern "C" void DEFAULT_CALL UnityAdsEngineSetDidStartCallback(Il2CppMethodPointer);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetDidStartCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart)
extern "C"  void Platform_UnityAdsEngineSetDidStartCallback_m104356378 (RuntimeObject * __this /* static, unused */, unityAdsDidStart_t1058412932 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsEngineSetDidStartCallback)(____callback0_marshaled);

}
extern "C" void DEFAULT_CALL UnityAdsEngineSetDidFinishCallback(Il2CppMethodPointer);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetDidFinishCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish)
extern "C"  void Platform_UnityAdsEngineSetDidFinishCallback_m1054131631 (RuntimeObject * __this /* static, unused */, unityAdsDidFinish_t3747416149 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsEngineSetDidFinishCallback)(____callback0_marshaled);

}
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsReady(System.String)
extern "C"  void Platform_UnityAdsReady_m2855172723 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_UnityAdsReady_m2855172723_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CUnityAdsReadyU3Ec__AnonStorey0_t1009704718 * V_0 = NULL;
	{
		U3CUnityAdsReadyU3Ec__AnonStorey0_t1009704718 * L_0 = (U3CUnityAdsReadyU3Ec__AnonStorey0_t1009704718 *)il2cpp_codegen_object_new(U3CUnityAdsReadyU3Ec__AnonStorey0_t1009704718_il2cpp_TypeInfo_var);
		U3CUnityAdsReadyU3Ec__AnonStorey0__ctor_m676019578(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CUnityAdsReadyU3Ec__AnonStorey0_t1009704718 * L_1 = V_0;
		String_t* L_2 = ___placementId0;
		NullCheck(L_1);
		L_1->set_placementId_1(L_2);
		U3CUnityAdsReadyU3Ec__AnonStorey0_t1009704718 * L_3 = V_0;
		Platform_t1647901813 * L_4 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_Instance_0();
		NullCheck(L_4);
		EventHandler_1_t2768214265 * L_5 = L_4->get_OnReady_2();
		NullCheck(L_3);
		L_3->set_handler_0(L_5);
		U3CUnityAdsReadyU3Ec__AnonStorey0_t1009704718 * L_6 = V_0;
		NullCheck(L_6);
		EventHandler_1_t2768214265 * L_7 = L_6->get_handler_0();
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		CallbackExecutor_t363496179 * L_8 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_CallbackExecutor_1();
		U3CUnityAdsReadyU3Ec__AnonStorey0_t1009704718 * L_9 = V_0;
		intptr_t L_10 = (intptr_t)U3CUnityAdsReadyU3Ec__AnonStorey0_U3CU3Em__0_m656675668_RuntimeMethod_var;
		Action_1_t535963774 * L_11 = (Action_1_t535963774 *)il2cpp_codegen_object_new(Action_1_t535963774_il2cpp_TypeInfo_var);
		Action_1__ctor_m246329423(L_11, L_9, L_10, /*hidden argument*/Action_1__ctor_m246329423_RuntimeMethod_var);
		NullCheck(L_8);
		CallbackExecutor_Post_m2417625912(L_8, L_11, /*hidden argument*/NULL);
	}

IL_0041:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsDidError(System.Int64,System.String)
extern "C"  void Platform_UnityAdsDidError_m3621980989 (RuntimeObject * __this /* static, unused */, int64_t ___rawError0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_UnityAdsDidError_m3621980989_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617 * V_0 = NULL;
	{
		U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617 * L_0 = (U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617 *)il2cpp_codegen_object_new(U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617_il2cpp_TypeInfo_var);
		U3CUnityAdsDidErrorU3Ec__AnonStorey1__ctor_m2619504999(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617 * L_1 = V_0;
		int64_t L_2 = ___rawError0;
		NullCheck(L_1);
		L_1->set_rawError_1(L_2);
		U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617 * L_3 = V_0;
		String_t* L_4 = ___message1;
		NullCheck(L_3);
		L_3->set_message_2(L_4);
		U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617 * L_5 = V_0;
		Platform_t1647901813 * L_6 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_Instance_0();
		NullCheck(L_6);
		EventHandler_1_t177306446 * L_7 = L_6->get_OnError_5();
		NullCheck(L_5);
		L_5->set_handler_0(L_7);
		U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617 * L_8 = V_0;
		NullCheck(L_8);
		EventHandler_1_t177306446 * L_9 = L_8->get_handler_0();
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		CallbackExecutor_t363496179 * L_10 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_CallbackExecutor_1();
		U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617 * L_11 = V_0;
		intptr_t L_12 = (intptr_t)U3CUnityAdsDidErrorU3Ec__AnonStorey1_U3CU3Em__0_m1015626936_RuntimeMethod_var;
		Action_1_t535963774 * L_13 = (Action_1_t535963774 *)il2cpp_codegen_object_new(Action_1_t535963774_il2cpp_TypeInfo_var);
		Action_1__ctor_m246329423(L_13, L_11, L_12, /*hidden argument*/Action_1__ctor_m246329423_RuntimeMethod_var);
		NullCheck(L_10);
		CallbackExecutor_Post_m2417625912(L_10, L_13, /*hidden argument*/NULL);
	}

IL_0048:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsDidStart(System.String)
extern "C"  void Platform_UnityAdsDidStart_m971319454 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_UnityAdsDidStart_m971319454_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CUnityAdsDidStartU3Ec__AnonStorey2_t250005642 * V_0 = NULL;
	{
		U3CUnityAdsDidStartU3Ec__AnonStorey2_t250005642 * L_0 = (U3CUnityAdsDidStartU3Ec__AnonStorey2_t250005642 *)il2cpp_codegen_object_new(U3CUnityAdsDidStartU3Ec__AnonStorey2_t250005642_il2cpp_TypeInfo_var);
		U3CUnityAdsDidStartU3Ec__AnonStorey2__ctor_m1780498047(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CUnityAdsDidStartU3Ec__AnonStorey2_t250005642 * L_1 = V_0;
		String_t* L_2 = ___placementId0;
		NullCheck(L_1);
		L_1->set_placementId_1(L_2);
		U3CUnityAdsDidStartU3Ec__AnonStorey2_t250005642 * L_3 = V_0;
		Platform_t1647901813 * L_4 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_Instance_0();
		NullCheck(L_4);
		EventHandler_1_t2215985868 * L_5 = L_4->get_OnStart_3();
		NullCheck(L_3);
		L_3->set_handler_0(L_5);
		U3CUnityAdsDidStartU3Ec__AnonStorey2_t250005642 * L_6 = V_0;
		NullCheck(L_6);
		EventHandler_1_t2215985868 * L_7 = L_6->get_handler_0();
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		CallbackExecutor_t363496179 * L_8 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_CallbackExecutor_1();
		U3CUnityAdsDidStartU3Ec__AnonStorey2_t250005642 * L_9 = V_0;
		intptr_t L_10 = (intptr_t)U3CUnityAdsDidStartU3Ec__AnonStorey2_U3CU3Em__0_m413760534_RuntimeMethod_var;
		Action_1_t535963774 * L_11 = (Action_1_t535963774 *)il2cpp_codegen_object_new(Action_1_t535963774_il2cpp_TypeInfo_var);
		Action_1__ctor_m246329423(L_11, L_9, L_10, /*hidden argument*/Action_1__ctor_m246329423_RuntimeMethod_var);
		NullCheck(L_8);
		CallbackExecutor_Post_m2417625912(L_8, L_11, /*hidden argument*/NULL);
	}

IL_0041:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsDidFinish(System.String,System.Int64)
extern "C"  void Platform_UnityAdsDidFinish_m4137038415 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, int64_t ___rawShowResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_UnityAdsDidFinish_m4137038415_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544 * V_0 = NULL;
	U3CUnityAdsDidFinishU3Ec__AnonStorey4_t3126029549 * V_1 = NULL;
	{
		U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544 * L_0 = (U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544 *)il2cpp_codegen_object_new(U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544_il2cpp_TypeInfo_var);
		U3CUnityAdsDidFinishU3Ec__AnonStorey3__ctor_m138433083(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544 * L_1 = V_0;
		String_t* L_2 = ___placementId0;
		NullCheck(L_1);
		L_1->set_placementId_1(L_2);
		U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544 * L_3 = V_0;
		Platform_t1647901813 * L_4 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_Instance_0();
		NullCheck(L_4);
		EventHandler_1_t908338235 * L_5 = L_4->get_OnFinish_4();
		NullCheck(L_3);
		L_3->set_handler_0(L_5);
		U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544 * L_6 = V_0;
		NullCheck(L_6);
		EventHandler_1_t908338235 * L_7 = L_6->get_handler_0();
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		U3CUnityAdsDidFinishU3Ec__AnonStorey4_t3126029549 * L_8 = (U3CUnityAdsDidFinishU3Ec__AnonStorey4_t3126029549 *)il2cpp_codegen_object_new(U3CUnityAdsDidFinishU3Ec__AnonStorey4_t3126029549_il2cpp_TypeInfo_var);
		U3CUnityAdsDidFinishU3Ec__AnonStorey4__ctor_m2012697147(L_8, /*hidden argument*/NULL);
		V_1 = L_8;
		U3CUnityAdsDidFinishU3Ec__AnonStorey4_t3126029549 * L_9 = V_1;
		U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544 * L_10 = V_0;
		NullCheck(L_9);
		L_9->set_U3CU3Ef__refU243_1(L_10);
		U3CUnityAdsDidFinishU3Ec__AnonStorey4_t3126029549 * L_11 = V_1;
		int64_t L_12 = ___rawShowResult1;
		NullCheck(L_11);
		L_11->set_showResult_0((((int32_t)((int32_t)L_12))));
		CallbackExecutor_t363496179 * L_13 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_CallbackExecutor_1();
		U3CUnityAdsDidFinishU3Ec__AnonStorey4_t3126029549 * L_14 = V_1;
		intptr_t L_15 = (intptr_t)U3CUnityAdsDidFinishU3Ec__AnonStorey4_U3CU3Em__0_m944271777_RuntimeMethod_var;
		Action_1_t535963774 * L_16 = (Action_1_t535963774 *)il2cpp_codegen_object_new(Action_1_t535963774_il2cpp_TypeInfo_var);
		Action_1__ctor_m246329423(L_16, L_14, L_15, /*hidden argument*/Action_1__ctor_m246329423_RuntimeMethod_var);
		NullCheck(L_13);
		CallbackExecutor_Post_m2417625912(L_13, L_16, /*hidden argument*/NULL);
	}

IL_0056:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::add_OnReady(System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>)
extern "C"  void Platform_add_OnReady_m2575728458 (Platform_t1647901813 * __this, EventHandler_1_t2768214265 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_add_OnReady_m2575728458_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2768214265 * V_0 = NULL;
	EventHandler_1_t2768214265 * V_1 = NULL;
	{
		EventHandler_1_t2768214265 * L_0 = __this->get_OnReady_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2768214265 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2768214265 ** L_2 = __this->get_address_of_OnReady_2();
		EventHandler_1_t2768214265 * L_3 = V_1;
		EventHandler_1_t2768214265 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2768214265 * L_6 = V_0;
		EventHandler_1_t2768214265 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2768214265 *>(L_2, ((EventHandler_1_t2768214265 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2768214265_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2768214265 * L_8 = V_0;
		EventHandler_1_t2768214265 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2768214265 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2768214265 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::remove_OnReady(System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>)
extern "C"  void Platform_remove_OnReady_m502422865 (Platform_t1647901813 * __this, EventHandler_1_t2768214265 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_remove_OnReady_m502422865_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2768214265 * V_0 = NULL;
	EventHandler_1_t2768214265 * V_1 = NULL;
	{
		EventHandler_1_t2768214265 * L_0 = __this->get_OnReady_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2768214265 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2768214265 ** L_2 = __this->get_address_of_OnReady_2();
		EventHandler_1_t2768214265 * L_3 = V_1;
		EventHandler_1_t2768214265 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2768214265 * L_6 = V_0;
		EventHandler_1_t2768214265 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2768214265 *>(L_2, ((EventHandler_1_t2768214265 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2768214265_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2768214265 * L_8 = V_0;
		EventHandler_1_t2768214265 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2768214265 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2768214265 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::add_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
extern "C"  void Platform_add_OnStart_m1356999936 (Platform_t1647901813 * __this, EventHandler_1_t2215985868 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_add_OnStart_m1356999936_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2215985868 * V_0 = NULL;
	EventHandler_1_t2215985868 * V_1 = NULL;
	{
		EventHandler_1_t2215985868 * L_0 = __this->get_OnStart_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2215985868 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2215985868 ** L_2 = __this->get_address_of_OnStart_3();
		EventHandler_1_t2215985868 * L_3 = V_1;
		EventHandler_1_t2215985868 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2215985868 * L_6 = V_0;
		EventHandler_1_t2215985868 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2215985868 *>(L_2, ((EventHandler_1_t2215985868 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2215985868_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2215985868 * L_8 = V_0;
		EventHandler_1_t2215985868 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2215985868 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2215985868 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::remove_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
extern "C"  void Platform_remove_OnStart_m3220674594 (Platform_t1647901813 * __this, EventHandler_1_t2215985868 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_remove_OnStart_m3220674594_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2215985868 * V_0 = NULL;
	EventHandler_1_t2215985868 * V_1 = NULL;
	{
		EventHandler_1_t2215985868 * L_0 = __this->get_OnStart_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2215985868 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2215985868 ** L_2 = __this->get_address_of_OnStart_3();
		EventHandler_1_t2215985868 * L_3 = V_1;
		EventHandler_1_t2215985868 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2215985868 * L_6 = V_0;
		EventHandler_1_t2215985868 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2215985868 *>(L_2, ((EventHandler_1_t2215985868 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2215985868_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2215985868 * L_8 = V_0;
		EventHandler_1_t2215985868 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2215985868 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2215985868 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C"  void Platform_add_OnFinish_m568677360 (Platform_t1647901813 * __this, EventHandler_1_t908338235 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_add_OnFinish_m568677360_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t908338235 * V_0 = NULL;
	EventHandler_1_t908338235 * V_1 = NULL;
	{
		EventHandler_1_t908338235 * L_0 = __this->get_OnFinish_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t908338235 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t908338235 ** L_2 = __this->get_address_of_OnFinish_4();
		EventHandler_1_t908338235 * L_3 = V_1;
		EventHandler_1_t908338235 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t908338235 * L_6 = V_0;
		EventHandler_1_t908338235 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t908338235 *>(L_2, ((EventHandler_1_t908338235 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t908338235_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t908338235 * L_8 = V_0;
		EventHandler_1_t908338235 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t908338235 *)L_8) == ((RuntimeObject*)(EventHandler_1_t908338235 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::remove_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C"  void Platform_remove_OnFinish_m3829156301 (Platform_t1647901813 * __this, EventHandler_1_t908338235 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_remove_OnFinish_m3829156301_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t908338235 * V_0 = NULL;
	EventHandler_1_t908338235 * V_1 = NULL;
	{
		EventHandler_1_t908338235 * L_0 = __this->get_OnFinish_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t908338235 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t908338235 ** L_2 = __this->get_address_of_OnFinish_4();
		EventHandler_1_t908338235 * L_3 = V_1;
		EventHandler_1_t908338235 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t908338235 * L_6 = V_0;
		EventHandler_1_t908338235 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t908338235 *>(L_2, ((EventHandler_1_t908338235 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t908338235_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t908338235 * L_8 = V_0;
		EventHandler_1_t908338235 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t908338235 *)L_8) == ((RuntimeObject*)(EventHandler_1_t908338235 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::add_OnError(System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>)
extern "C"  void Platform_add_OnError_m2772632147 (Platform_t1647901813 * __this, EventHandler_1_t177306446 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_add_OnError_m2772632147_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t177306446 * V_0 = NULL;
	EventHandler_1_t177306446 * V_1 = NULL;
	{
		EventHandler_1_t177306446 * L_0 = __this->get_OnError_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t177306446 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t177306446 ** L_2 = __this->get_address_of_OnError_5();
		EventHandler_1_t177306446 * L_3 = V_1;
		EventHandler_1_t177306446 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t177306446 * L_6 = V_0;
		EventHandler_1_t177306446 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t177306446 *>(L_2, ((EventHandler_1_t177306446 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t177306446_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t177306446 * L_8 = V_0;
		EventHandler_1_t177306446 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t177306446 *)L_8) == ((RuntimeObject*)(EventHandler_1_t177306446 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::remove_OnError(System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>)
extern "C"  void Platform_remove_OnError_m4035102861 (Platform_t1647901813 * __this, EventHandler_1_t177306446 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_remove_OnError_m4035102861_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t177306446 * V_0 = NULL;
	EventHandler_1_t177306446 * V_1 = NULL;
	{
		EventHandler_1_t177306446 * L_0 = __this->get_OnError_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t177306446 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t177306446 ** L_2 = __this->get_address_of_OnError_5();
		EventHandler_1_t177306446 * L_3 = V_1;
		EventHandler_1_t177306446 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t177306446 * L_6 = V_0;
		EventHandler_1_t177306446 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t177306446 *>(L_2, ((EventHandler_1_t177306446 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t177306446_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t177306446 * L_8 = V_0;
		EventHandler_1_t177306446 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t177306446 *)L_8) == ((RuntimeObject*)(EventHandler_1_t177306446 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.iOS.Platform::get_isInitialized()
extern "C"  bool Platform_get_isInitialized_m2102110254 (Platform_t1647901813 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = Platform_UnityAdsEngineIsInitialized_m3090894253(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Advertisements.iOS.Platform::get_isSupported()
extern "C"  bool Platform_get_isSupported_m2519758644 (Platform_t1647901813 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = Platform_UnityAdsEngineIsSupported_m2832327113(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Advertisements.iOS.Platform::get_version()
extern "C"  String_t* Platform_get_version_m3524912503 (Platform_t1647901813 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = Platform_UnityAdsEngineGetVersion_m45362240(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Advertisements.iOS.Platform::get_debugMode()
extern "C"  bool Platform_get_debugMode_m1861849307 (Platform_t1647901813 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = Platform_UnityAdsEngineGetDebugMode_m559010788(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::set_debugMode(System.Boolean)
extern "C"  void Platform_set_debugMode_m2911553557 (Platform_t1647901813 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		Platform_UnityAdsEngineSetDebugMode_m2043700802(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::Initialize(System.String,System.Boolean)
extern "C"  void Platform_Initialize_m3701987262 (Platform_t1647901813 * __this, String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___gameId0;
		bool L_1 = ___testMode1;
		Platform_UnityAdsEngineInitialize_m3450854254(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.iOS.Platform::IsReady(System.String)
extern "C"  bool Platform_IsReady_m337435948 (Platform_t1647901813 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = ___placementId0;
		bool L_1 = Platform_UnityAdsEngineIsReady_m1204345331(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Advertisements.PlacementState UnityEngine.Advertisements.iOS.Platform::GetPlacementState(System.String)
extern "C"  int32_t Platform_GetPlacementState_m1071949241 (Platform_t1647901813 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___placementId0;
		int64_t L_1 = Platform_UnityAdsEngineGetPlacementState_m763487549(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = (((int32_t)((int32_t)L_1)));
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::Show(System.String)
extern "C"  void Platform_Show_m1585066734 (Platform_t1647901813 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___placementId0;
		Platform_UnityAdsEngineShow_m1525385135(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::SetMetaData(UnityEngine.Advertisements.MetaData)
extern "C"  void Platform_SetMetaData_m3621197024 (Platform_t1647901813 * __this, MetaData_t2274729001 * ___metaData0, const RuntimeMethod* method)
{
	{
		MetaData_t2274729001 * L_0 = ___metaData0;
		NullCheck(L_0);
		String_t* L_1 = MetaData_get_category_m4241298320(L_0, /*hidden argument*/NULL);
		MetaData_t2274729001 * L_2 = ___metaData0;
		NullCheck(L_2);
		String_t* L_3 = MetaData_ToJSON_m4186793159(L_2, /*hidden argument*/NULL);
		Platform_UnityAdsEngineSetMetaData_m1955283902(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidError>c__AnonStorey1::.ctor()
extern "C"  void U3CUnityAdsDidErrorU3Ec__AnonStorey1__ctor_m2619504999 (U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidError>c__AnonStorey1::<>m__0(UnityEngine.Advertisements.CallbackExecutor)
extern "C"  void U3CUnityAdsDidErrorU3Ec__AnonStorey1_U3CU3Em__0_m1015626936 (U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617 * __this, CallbackExecutor_t363496179 * ___executor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CUnityAdsDidErrorU3Ec__AnonStorey1_U3CU3Em__0_m1015626936_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t177306446 * L_0 = __this->get_handler_0();
		Platform_t1647901813 * L_1 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_Instance_0();
		int64_t L_2 = __this->get_rawError_1();
		String_t* L_3 = __this->get_message_2();
		ErrorEventArgs_t2253147013 * L_4 = (ErrorEventArgs_t2253147013 *)il2cpp_codegen_object_new(ErrorEventArgs_t2253147013_il2cpp_TypeInfo_var);
		ErrorEventArgs__ctor_m2417395018(L_4, L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		EventHandler_1_Invoke_m1199075846(L_0, L_1, L_4, /*hidden argument*/EventHandler_1_Invoke_m1199075846_RuntimeMethod_var);
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
// System.Void UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidFinish>c__AnonStorey3::.ctor()
extern "C"  void U3CUnityAdsDidFinishU3Ec__AnonStorey3__ctor_m138433083 (U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544 * __this, const RuntimeMethod* method)
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
// System.Void UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidFinish>c__AnonStorey4::.ctor()
extern "C"  void U3CUnityAdsDidFinishU3Ec__AnonStorey4__ctor_m2012697147 (U3CUnityAdsDidFinishU3Ec__AnonStorey4_t3126029549 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidFinish>c__AnonStorey4::<>m__0(UnityEngine.Advertisements.CallbackExecutor)
extern "C"  void U3CUnityAdsDidFinishU3Ec__AnonStorey4_U3CU3Em__0_m944271777 (U3CUnityAdsDidFinishU3Ec__AnonStorey4_t3126029549 * __this, CallbackExecutor_t363496179 * ___executor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CUnityAdsDidFinishU3Ec__AnonStorey4_U3CU3Em__0_m944271777_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544 * L_0 = __this->get_U3CU3Ef__refU243_1();
		NullCheck(L_0);
		EventHandler_1_t908338235 * L_1 = L_0->get_handler_0();
		Platform_t1647901813 * L_2 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_Instance_0();
		U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544 * L_3 = __this->get_U3CU3Ef__refU243_1();
		NullCheck(L_3);
		String_t* L_4 = L_3->get_placementId_1();
		int32_t L_5 = __this->get_showResult_0();
		FinishEventArgs_t2984178802 * L_6 = (FinishEventArgs_t2984178802 *)il2cpp_codegen_object_new(FinishEventArgs_t2984178802_il2cpp_TypeInfo_var);
		FinishEventArgs__ctor_m50835730(L_6, L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		EventHandler_1_Invoke_m3162226611(L_1, L_2, L_6, /*hidden argument*/EventHandler_1_Invoke_m3162226611_RuntimeMethod_var);
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
// System.Void UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidStart>c__AnonStorey2::.ctor()
extern "C"  void U3CUnityAdsDidStartU3Ec__AnonStorey2__ctor_m1780498047 (U3CUnityAdsDidStartU3Ec__AnonStorey2_t250005642 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidStart>c__AnonStorey2::<>m__0(UnityEngine.Advertisements.CallbackExecutor)
extern "C"  void U3CUnityAdsDidStartU3Ec__AnonStorey2_U3CU3Em__0_m413760534 (U3CUnityAdsDidStartU3Ec__AnonStorey2_t250005642 * __this, CallbackExecutor_t363496179 * ___executor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CUnityAdsDidStartU3Ec__AnonStorey2_U3CU3Em__0_m413760534_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t2215985868 * L_0 = __this->get_handler_0();
		Platform_t1647901813 * L_1 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_Instance_0();
		String_t* L_2 = __this->get_placementId_1();
		StartEventArgs_t4291826435 * L_3 = (StartEventArgs_t4291826435 *)il2cpp_codegen_object_new(StartEventArgs_t4291826435_il2cpp_TypeInfo_var);
		StartEventArgs__ctor_m1521341003(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		EventHandler_1_Invoke_m1200448648(L_0, L_1, L_3, /*hidden argument*/EventHandler_1_Invoke_m1200448648_RuntimeMethod_var);
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
// System.Void UnityEngine.Advertisements.iOS.Platform/<UnityAdsReady>c__AnonStorey0::.ctor()
extern "C"  void U3CUnityAdsReadyU3Ec__AnonStorey0__ctor_m676019578 (U3CUnityAdsReadyU3Ec__AnonStorey0_t1009704718 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform/<UnityAdsReady>c__AnonStorey0::<>m__0(UnityEngine.Advertisements.CallbackExecutor)
extern "C"  void U3CUnityAdsReadyU3Ec__AnonStorey0_U3CU3Em__0_m656675668 (U3CUnityAdsReadyU3Ec__AnonStorey0_t1009704718 * __this, CallbackExecutor_t363496179 * ___executor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CUnityAdsReadyU3Ec__AnonStorey0_U3CU3Em__0_m656675668_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t2768214265 * L_0 = __this->get_handler_0();
		Platform_t1647901813 * L_1 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_Instance_0();
		String_t* L_2 = __this->get_placementId_1();
		ReadyEventArgs_t549087536 * L_3 = (ReadyEventArgs_t549087536 *)il2cpp_codegen_object_new(ReadyEventArgs_t549087536_il2cpp_TypeInfo_var);
		ReadyEventArgs__ctor_m1307451034(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		EventHandler_1_Invoke_m743178406(L_0, L_1, L_3, /*hidden argument*/EventHandler_1_Invoke_m743178406_RuntimeMethod_var);
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
extern "C"  void DelegatePInvokeWrapper_unityAdsDidError_t1993223595 (unityAdsDidError_t1993223595 * __this, int64_t ___rawError0, String_t* ___message1, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(int64_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message1' to native representation
	char* ____message1_marshaled = NULL;
	____message1_marshaled = il2cpp_codegen_marshal_string(___message1);

	// Native function invocation
	il2cppPInvokeFunc(___rawError0, ____message1_marshaled);

	// Marshaling cleanup of parameter '___message1' native representation
	il2cpp_codegen_marshal_free(____message1_marshaled);
	____message1_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidError::.ctor(System.Object,System.IntPtr)
extern "C"  void unityAdsDidError__ctor_m4120111418 (unityAdsDidError_t1993223595 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidError::Invoke(System.Int64,System.String)
extern "C"  void unityAdsDidError_Invoke_m1306672649 (unityAdsDidError_t1993223595 * __this, int64_t ___rawError0, String_t* ___message1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		unityAdsDidError_Invoke_m1306672649((unityAdsDidError_t1993223595 *)__this->get_prev_9(), ___rawError0, ___message1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, int64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___rawError0, ___message1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, int64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___rawError0, ___message1, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int64_t, String_t* >::Invoke(targetMethod, targetThis, ___rawError0, ___message1);
					else
						GenericVirtActionInvoker2< int64_t, String_t* >::Invoke(targetMethod, targetThis, ___rawError0, ___message1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int64_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rawError0, ___message1);
					else
						VirtActionInvoker2< int64_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rawError0, ___message1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rawError0, ___message1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.iOS.Platform/unityAdsDidError::BeginInvoke(System.Int64,System.String,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* unityAdsDidError_BeginInvoke_m3034855061 (unityAdsDidError_t1993223595 * __this, int64_t ___rawError0, String_t* ___message1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (unityAdsDidError_BeginInvoke_m3034855061_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &___rawError0);
	__d_args[1] = ___message1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidError::EndInvoke(System.IAsyncResult)
extern "C"  void unityAdsDidError_EndInvoke_m1111163234 (unityAdsDidError_t1993223595 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_unityAdsDidFinish_t3747416149 (unityAdsDidFinish_t3747416149 * __this, String_t* ___placementId0, int64_t ___rawFinishState1, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(char*, int64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	il2cppPInvokeFunc(____placementId0_marshaled, ___rawFinishState1);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish::.ctor(System.Object,System.IntPtr)
extern "C"  void unityAdsDidFinish__ctor_m3115871303 (unityAdsDidFinish_t3747416149 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish::Invoke(System.String,System.Int64)
extern "C"  void unityAdsDidFinish_Invoke_m880139269 (unityAdsDidFinish_t3747416149 * __this, String_t* ___placementId0, int64_t ___rawFinishState1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		unityAdsDidFinish_Invoke_m880139269((unityAdsDidFinish_t3747416149 *)__this->get_prev_9(), ___placementId0, ___rawFinishState1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, String_t*, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___placementId0, ___rawFinishState1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, String_t*, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___placementId0, ___rawFinishState1, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, int64_t >::Invoke(targetMethod, targetThis, ___placementId0, ___rawFinishState1);
					else
						GenericVirtActionInvoker2< String_t*, int64_t >::Invoke(targetMethod, targetThis, ___placementId0, ___rawFinishState1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___placementId0, ___rawFinishState1);
					else
						VirtActionInvoker2< String_t*, int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___placementId0, ___rawFinishState1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, ___rawFinishState1, targetMethod);
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
						GenericInterfaceActionInvoker1< int64_t >::Invoke(targetMethod, ___placementId0, ___rawFinishState1);
					else
						GenericVirtActionInvoker1< int64_t >::Invoke(targetMethod, ___placementId0, ___rawFinishState1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___placementId0, ___rawFinishState1);
					else
						VirtActionInvoker1< int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___placementId0, ___rawFinishState1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, ___rawFinishState1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish::BeginInvoke(System.String,System.Int64,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* unityAdsDidFinish_BeginInvoke_m2033378741 (unityAdsDidFinish_t3747416149 * __this, String_t* ___placementId0, int64_t ___rawFinishState1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (unityAdsDidFinish_BeginInvoke_m2033378741_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___placementId0;
	__d_args[1] = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &___rawFinishState1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish::EndInvoke(System.IAsyncResult)
extern "C"  void unityAdsDidFinish_EndInvoke_m1036948251 (unityAdsDidFinish_t3747416149 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_unityAdsDidStart_t1058412932 (unityAdsDidStart_t1058412932 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	il2cppPInvokeFunc(____placementId0_marshaled);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart::.ctor(System.Object,System.IntPtr)
extern "C"  void unityAdsDidStart__ctor_m610751912 (unityAdsDidStart_t1058412932 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart::Invoke(System.String)
extern "C"  void unityAdsDidStart_Invoke_m1190774304 (unityAdsDidStart_t1058412932 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		unityAdsDidStart_Invoke_m1190774304((unityAdsDidStart_t1058412932 *)__this->get_prev_9(), ___placementId0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___placementId0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___placementId0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___placementId0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___placementId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___placementId0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___placementId0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___placementId0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___placementId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___placementId0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___placementId0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* unityAdsDidStart_BeginInvoke_m1941000148 (unityAdsDidStart_t1058412932 * __this, String_t* ___placementId0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___placementId0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart::EndInvoke(System.IAsyncResult)
extern "C"  void unityAdsDidStart_EndInvoke_m1846743683 (unityAdsDidStart_t1058412932 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_unityAdsReady_t96934738 (unityAdsReady_t96934738 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	il2cppPInvokeFunc(____placementId0_marshaled);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsReady::.ctor(System.Object,System.IntPtr)
extern "C"  void unityAdsReady__ctor_m3699019508 (unityAdsReady_t96934738 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsReady::Invoke(System.String)
extern "C"  void unityAdsReady_Invoke_m800719555 (unityAdsReady_t96934738 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		unityAdsReady_Invoke_m800719555((unityAdsReady_t96934738 *)__this->get_prev_9(), ___placementId0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___placementId0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___placementId0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___placementId0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___placementId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___placementId0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___placementId0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___placementId0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___placementId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___placementId0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___placementId0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.iOS.Platform/unityAdsReady::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* unityAdsReady_BeginInvoke_m3396861174 (unityAdsReady_t96934738 * __this, String_t* ___placementId0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___placementId0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsReady::EndInvoke(System.IAsyncResult)
extern "C"  void unityAdsReady_EndInvoke_m4129629457 (unityAdsReady_t96934738 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.MetaData::.ctor(System.String)
extern "C"  void MetaData__ctor_m191542684 (MetaData_t2274729001 * __this, String_t* ___category0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaData__ctor_m191542684_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2865362463 * L_0 = (Dictionary_2_t2865362463 *)il2cpp_codegen_object_new(Dictionary_2_t2865362463_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2606011945(L_0, /*hidden argument*/Dictionary_2__ctor_m2606011945_RuntimeMethod_var);
		__this->set_m_MetaData_0(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___category0;
		MetaData_set_category_m1755177233(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Advertisements.MetaData::get_category()
extern "C"  String_t* MetaData_get_category_m4241298320 (MetaData_t2274729001 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CcategoryU3Ek__BackingField_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Advertisements.MetaData::set_category(System.String)
extern "C"  void MetaData_set_category_m1755177233 (MetaData_t2274729001 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CcategoryU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.MetaData::Set(System.String,System.Object)
extern "C"  void MetaData_Set_m2920014032 (MetaData_t2274729001 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaData_Set_m2920014032_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_m_MetaData_0();
		String_t* L_1 = ___key0;
		RuntimeObject * L_2 = ___value1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(2 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(!0,!1) */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Object UnityEngine.Advertisements.MetaData::Get(System.String)
extern "C"  RuntimeObject * MetaData_Get_m3626153543 (MetaData_t2274729001 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaData_Get_m3626153543_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->get_m_MetaData_0();
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		RuntimeObject * L_2 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(1 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		goto IL_0013;
	}

IL_0013:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Advertisements.MetaData::get_Values()
extern "C"  RuntimeObject* MetaData_get_Values_m2805296889 (MetaData_t2274729001 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->get_m_MetaData_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Advertisements.MetaData::ToJSON()
extern "C"  String_t* MetaData_ToJSON_m4186793159 (MetaData_t2274729001 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->get_m_MetaData_0();
		String_t* L_1 = SimpleJson_SerializeObject_m3082180887(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.ReadyEventArgs::.ctor(System.String)
extern "C"  void ReadyEventArgs__ctor_m1307451034 (ReadyEventArgs_t549087536 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadyEventArgs__ctor_m1307451034_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___placementId0;
		ReadyEventArgs_set_placementId_m818740610(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Advertisements.ReadyEventArgs::get_placementId()
extern "C"  String_t* ReadyEventArgs_get_placementId_m159588481 (ReadyEventArgs_t549087536 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CplacementIdU3Ek__BackingField_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Advertisements.ReadyEventArgs::set_placementId(System.String)
extern "C"  void ReadyEventArgs_set_placementId_m818740610 (ReadyEventArgs_t549087536 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CplacementIdU3Ek__BackingField_1(L_0);
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
// System.Void UnityEngine.Advertisements.ShowOptions::.ctor()
extern "C"  void ShowOptions__ctor_m2194205660 (ShowOptions_t990845000 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Action`1<UnityEngine.Advertisements.ShowResult> UnityEngine.Advertisements.ShowOptions::get_resultCallback()
extern "C"  Action_1_t3243021218 * ShowOptions_get_resultCallback_m2710569767 (ShowOptions_t990845000 * __this, const RuntimeMethod* method)
{
	Action_1_t3243021218 * V_0 = NULL;
	{
		Action_1_t3243021218 * L_0 = __this->get_U3CresultCallbackU3Ek__BackingField_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Action_1_t3243021218 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Advertisements.ShowOptions::set_resultCallback(System.Action`1<UnityEngine.Advertisements.ShowResult>)
extern "C"  void ShowOptions_set_resultCallback_m3887508449 (ShowOptions_t990845000 * __this, Action_1_t3243021218 * ___value0, const RuntimeMethod* method)
{
	{
		Action_1_t3243021218 * L_0 = ___value0;
		__this->set_U3CresultCallbackU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String UnityEngine.Advertisements.ShowOptions::get_gamerSid()
extern "C"  String_t* ShowOptions_get_gamerSid_m2724807180 (ShowOptions_t990845000 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CgamerSidU3Ek__BackingField_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Advertisements.ShowOptions::set_gamerSid(System.String)
extern "C"  void ShowOptions_set_gamerSid_m2518373442 (ShowOptions_t990845000 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CgamerSidU3Ek__BackingField_1(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.StartEventArgs::.ctor(System.String)
extern "C"  void StartEventArgs__ctor_m1521341003 (StartEventArgs_t4291826435 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StartEventArgs__ctor_m1521341003_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___placementId0;
		StartEventArgs_set_placementId_m632111893(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Advertisements.StartEventArgs::get_placementId()
extern "C"  String_t* StartEventArgs_get_placementId_m3925703442 (StartEventArgs_t4291826435 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CplacementIdU3Ek__BackingField_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Advertisements.StartEventArgs::set_placementId(System.String)
extern "C"  void StartEventArgs_set_placementId_m632111893 (StartEventArgs_t4291826435 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CplacementIdU3Ek__BackingField_1(L_0);
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
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::.ctor()
extern "C"  void UnsupportedPlatform__ctor_m1419529813 (UnsupportedPlatform_t2036049172 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::add_OnReady(System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>)
extern "C"  void UnsupportedPlatform_add_OnReady_m764226071 (UnsupportedPlatform_t2036049172 * __this, EventHandler_1_t2768214265 * ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::remove_OnReady(System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>)
extern "C"  void UnsupportedPlatform_remove_OnReady_m1659196031 (UnsupportedPlatform_t2036049172 * __this, EventHandler_1_t2768214265 * ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::add_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
extern "C"  void UnsupportedPlatform_add_OnStart_m3534057703 (UnsupportedPlatform_t2036049172 * __this, EventHandler_1_t2215985868 * ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::remove_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
extern "C"  void UnsupportedPlatform_remove_OnStart_m2140917651 (UnsupportedPlatform_t2036049172 * __this, EventHandler_1_t2215985868 * ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C"  void UnsupportedPlatform_add_OnFinish_m1575365808 (UnsupportedPlatform_t2036049172 * __this, EventHandler_1_t908338235 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnsupportedPlatform_add_OnFinish_m1575365808_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t908338235 * V_0 = NULL;
	EventHandler_1_t908338235 * V_1 = NULL;
	{
		EventHandler_1_t908338235 * L_0 = __this->get_OnFinish_0();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t908338235 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t908338235 ** L_2 = __this->get_address_of_OnFinish_0();
		EventHandler_1_t908338235 * L_3 = V_1;
		EventHandler_1_t908338235 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t908338235 * L_6 = V_0;
		EventHandler_1_t908338235 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t908338235 *>(L_2, ((EventHandler_1_t908338235 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t908338235_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t908338235 * L_8 = V_0;
		EventHandler_1_t908338235 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t908338235 *)L_8) == ((RuntimeObject*)(EventHandler_1_t908338235 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::remove_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C"  void UnsupportedPlatform_remove_OnFinish_m2418915001 (UnsupportedPlatform_t2036049172 * __this, EventHandler_1_t908338235 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnsupportedPlatform_remove_OnFinish_m2418915001_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t908338235 * V_0 = NULL;
	EventHandler_1_t908338235 * V_1 = NULL;
	{
		EventHandler_1_t908338235 * L_0 = __this->get_OnFinish_0();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t908338235 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t908338235 ** L_2 = __this->get_address_of_OnFinish_0();
		EventHandler_1_t908338235 * L_3 = V_1;
		EventHandler_1_t908338235 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t908338235 * L_6 = V_0;
		EventHandler_1_t908338235 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t908338235 *>(L_2, ((EventHandler_1_t908338235 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t908338235_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t908338235 * L_8 = V_0;
		EventHandler_1_t908338235 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t908338235 *)L_8) == ((RuntimeObject*)(EventHandler_1_t908338235 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::add_OnError(System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>)
extern "C"  void UnsupportedPlatform_add_OnError_m10453347 (UnsupportedPlatform_t2036049172 * __this, EventHandler_1_t177306446 * ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::remove_OnError(System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>)
extern "C"  void UnsupportedPlatform_remove_OnError_m947805258 (UnsupportedPlatform_t2036049172 * __this, EventHandler_1_t177306446 * ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.UnsupportedPlatform::get_isInitialized()
extern "C"  bool UnsupportedPlatform_get_isInitialized_m3696729222 (UnsupportedPlatform_t2036049172 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0008;
	}

IL_0008:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.Advertisements.UnsupportedPlatform::get_isSupported()
extern "C"  bool UnsupportedPlatform_get_isSupported_m1312723691 (UnsupportedPlatform_t2036049172 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0008;
	}

IL_0008:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.String UnityEngine.Advertisements.UnsupportedPlatform::get_version()
extern "C"  String_t* UnsupportedPlatform_get_version_m3206956595 (UnsupportedPlatform_t2036049172 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		V_0 = (String_t*)NULL;
		goto IL_0008;
	}

IL_0008:
	{
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.Advertisements.UnsupportedPlatform::get_debugMode()
extern "C"  bool UnsupportedPlatform_get_debugMode_m1924332595 (UnsupportedPlatform_t2036049172 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0008;
	}

IL_0008:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::set_debugMode(System.Boolean)
extern "C"  void UnsupportedPlatform_set_debugMode_m1030255308 (UnsupportedPlatform_t2036049172 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::Initialize(System.String,System.Boolean)
extern "C"  void UnsupportedPlatform_Initialize_m2351467844 (UnsupportedPlatform_t2036049172 * __this, String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.UnsupportedPlatform::IsReady(System.String)
extern "C"  bool UnsupportedPlatform_IsReady_m721141642 (UnsupportedPlatform_t2036049172 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0008;
	}

IL_0008:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Advertisements.PlacementState UnityEngine.Advertisements.UnsupportedPlatform::GetPlacementState(System.String)
extern "C"  int32_t UnsupportedPlatform_GetPlacementState_m3500418431 (UnsupportedPlatform_t2036049172 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 1;
		goto IL_0008;
	}

IL_0008:
	{
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::Show(System.String)
extern "C"  void UnsupportedPlatform_Show_m236483508 (UnsupportedPlatform_t2036049172 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnsupportedPlatform_Show_m236483508_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t908338235 * V_0 = NULL;
	{
		EventHandler_1_t908338235 * L_0 = __this->get_OnFinish_0();
		V_0 = L_0;
		EventHandler_1_t908338235 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		EventHandler_1_t908338235 * L_2 = V_0;
		String_t* L_3 = ___placementId0;
		FinishEventArgs_t2984178802 * L_4 = (FinishEventArgs_t2984178802 *)il2cpp_codegen_object_new(FinishEventArgs_t2984178802_il2cpp_TypeInfo_var);
		FinishEventArgs__ctor_m50835730(L_4, L_3, 0, /*hidden argument*/NULL);
		NullCheck(L_2);
		EventHandler_1_Invoke_m3162226611(L_2, __this, L_4, /*hidden argument*/EventHandler_1_Invoke_m3162226611_RuntimeMethod_var);
	}

IL_001e:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::SetMetaData(UnityEngine.Advertisements.MetaData)
extern "C"  void UnsupportedPlatform_SetMetaData_m3305125483 (UnsupportedPlatform_t2036049172 * __this, MetaData_t2274729001 * ___metaData0, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
