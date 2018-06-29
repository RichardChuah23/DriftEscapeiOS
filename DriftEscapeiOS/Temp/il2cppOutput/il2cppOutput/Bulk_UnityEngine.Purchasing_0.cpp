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

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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

// UnityEngine.Purchasing.AnalyticsReporter
struct AnalyticsReporter_t2806096347;
// UnityEngine.Purchasing.IUnityAnalytics
struct IUnityAnalytics_t1873369198;
// UnityEngine.Purchasing.Product
struct Product_t3244410059;
// UnityEngine.Purchasing.ProductMetadata
struct ProductMetadata_t3417118930;
// System.String
struct String_t;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t339727138;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2865362463;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// UnityEngine.Purchasing.ConfigurationBuilder
struct ConfigurationBuilder_t1618671084;
// UnityEngine.Purchasing.PurchasingFactory
struct PurchasingFactory_t4012818695;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>
struct HashSet_1_t3199643908;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t1645055638;
// UnityEngine.Purchasing.Extension.IPurchasingModule
struct IPurchasingModule_t960499109;
// UnityEngine.Purchasing.Extension.IPurchasingModule[]
struct IPurchasingModuleU5BU5D_t3784316456;
// UnityEngine.Purchasing.IDs
struct IDs_t697119909;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.PayoutDefinition>
struct IEnumerable_1_t2551536953;
// UnityEngine.Purchasing.Extension.AbstractPurchasingModule
struct AbstractPurchasingModule_t2882497868;
// UnityEngine.Purchasing.Extension.IPurchasingBinder
struct IPurchasingBinder_t3569785493;
// UnityEngine.Purchasing.Extension.IStore
struct IStore_t2324734081;
// UnityEngine.Purchasing.Extension.AbstractStore
struct AbstractStore_t285429589;
// UnityEngine.Purchasing.Extension.ProductDescription
struct ProductDescription_t714013132;
// UnityEngine.Purchasing.Extension.PurchaseFailureDescription
struct PurchaseFailureDescription_t437632294;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1632706988;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IEnumerator_1_t167982327;
// UnityEngine.Purchasing.PayoutDefinition
struct PayoutDefinition_t3571684064;
// System.Type
struct Type_t;
// System.ArgumentException
struct ArgumentException_t132251570;
// UnityEngine.Purchasing.ProductCollection
struct ProductCollection_t2671956229;
// UnityEngine.Purchasing.Product[]
struct ProductU5BU5D_t2942947242;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product>
struct HashSet_1_t1809359533;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Product>
struct IEnumerable_1_t2224262948;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Func`2<UnityEngine.Purchasing.Product,System.String>
struct Func_2_t1313482816;
// System.Func`2<System.Object,System.Object>
struct Func_2_t2447130374;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Purchasing.Product>
struct Dictionary_2_t3029666358;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>
struct List_1_t748791510;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// UnityEngine.Purchasing.PurchaseEventArgs
struct PurchaseEventArgs_t3033159582;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Purchasing.Extension.IStoreConfiguration>
struct Dictionary_2_t2519197568;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Purchasing.IStoreExtension>
struct Dictionary_2_t3031246492;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// UnityEngine.Purchasing.Extension.ICatalogProvider
struct ICatalogProvider_t574371958;
// System.Action`1<System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>>
struct Action_1_t3544579098;
// UnityEngine.Purchasing.SimpleCatalogProvider
struct SimpleCatalogProvider_t2437048597;
// UnityEngine.Purchasing.PurchasingManager
struct PurchasingManager_t2174502701;
// UnityEngine.Purchasing.TransactionLog
struct TransactionLog_t937968217;
// UnityEngine.ILogger
struct ILogger_t2607134790;
// System.Action`1<UnityEngine.Purchasing.InitializationFailureReason>
struct Action_1_t2913035299;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>
struct List_1_t2186087874;
// System.Action
struct Action_t1264377477;
// UnityEngine.Purchasing.IInternalStoreListener
struct IInternalStoreListener_t3516020022;
// System.Func`2<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Product>
struct Func_2_t2408407863;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.ProductDefinition>
struct IEnumerable_1_t3614547323;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductDefinition>
struct List_1_t1811801880;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>
struct ReadOnlyCollection_1_t1552303425;
// System.Collections.Generic.IList`1<UnityEngine.Purchasing.ProductDefinition>
struct IList_1_t2155046921;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t4292682451;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t600458651;
// System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>
struct Action_1_t3372111503;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// UnityEngine.Purchasing.StoreListenerProxy
struct StoreListenerProxy_t3004682744;
// UnityEngine.Purchasing.IStoreListener
struct IStoreListener_t2917505531;
// UnityEngine.Purchasing.IExtensionProvider
struct IExtensionProvider_t3180538779;
// UnityEngine.Purchasing.IStoreController
struct IStoreController_t2579314702;
// System.IO.DirectoryInfo
struct DirectoryInfo_t35957480;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// UnityEngine.Purchasing.UnityAnalytics
struct UnityAnalytics_t1988537891;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t1329213854;
// UnityEngine.Purchasing.UnityPurchasing/<Initialize>c__AnonStorey0
struct U3CInitializeU3Ec__AnonStorey0_t1727991359;
// UnityEngine.Purchasing.UnityPurchasing/<FetchAndMergeProducts>c__AnonStorey1
struct U3CFetchAndMergeProductsU3Ec__AnonStorey1_t3610355129;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// UnityEngine.Purchasing.IStoreExtension[]
struct IStoreExtensionU5BU5D_t2489405453;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t296309482;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,UnityEngine.Purchasing.IStoreExtension,System.Collections.DictionaryEntry>
struct Transform_1_t2769900464;
// UnityEngine.Purchasing.Extension.ProductDescription[]
struct ProductDescriptionU5BU5D_t597346693;
// UnityEngine.Purchasing.Extension.IStoreConfiguration[]
struct IStoreConfigurationU5BU5D_t1964808985;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,UnityEngine.Purchasing.Extension.IStoreConfiguration,System.Collections.DictionaryEntry>
struct Transform_1_t2245303996;
// UnityEngine.Purchasing.PayoutDefinition[]
struct PayoutDefinitionU5BU5D_t274752929;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.Purchasing.Product,System.Collections.DictionaryEntry>
struct Transform_1_t1793358958;
// System.Collections.Generic.HashSet`1/Link<UnityEngine.Purchasing.Product>[]
struct LinkU5BU5D_t1335864701;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Purchasing.Product>
struct IEqualityComparer_1_t1056774781;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// UnityEngine.Purchasing.ProductDefinition[]
struct ProductDefinitionU5BU5D_t2640912919;
// System.Collections.Generic.HashSet`1/Link<UnityEngine.Purchasing.ProductDefinition>[]
struct LinkU5BU5D_t1033830378;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Purchasing.ProductDefinition>
struct IEqualityComparer_1_t2447059156;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>
struct Transform_1_t132201056;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t1694351041;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;

extern RuntimeClass* IUnityAnalytics_t1873369198_il2cpp_TypeInfo_var;
extern const uint32_t AnalyticsReporter_OnPurchaseSucceeded_m2686746169_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t2865362463_il2cpp_TypeInfo_var;
extern RuntimeClass* PurchaseFailureReason_t4243987912_il2cpp_TypeInfo_var;
extern RuntimeClass* Decimal_t2948259380_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2606011945_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m837785969_RuntimeMethod_var;
extern String_t* _stringLiteral1191178068;
extern String_t* _stringLiteral338012450;
extern String_t* _stringLiteral1252984078;
extern String_t* _stringLiteral2947611015;
extern String_t* _stringLiteral1489405757;
extern const uint32_t AnalyticsReporter_OnPurchaseFailed_m4151707250_MetadataUsageId;
extern RuntimeClass* HashSet_1_t3199643908_il2cpp_TypeInfo_var;
extern const RuntimeMethod* HashSet_1__ctor_m3206103540_RuntimeMethod_var;
extern const uint32_t ConfigurationBuilder__ctor_m601088221_MetadataUsageId;
extern RuntimeClass* PurchasingFactory_t4012818695_il2cpp_TypeInfo_var;
extern RuntimeClass* ConfigurationBuilder_t1618671084_il2cpp_TypeInfo_var;
extern const uint32_t ConfigurationBuilder_Instance_m2204111312_MetadataUsageId;
extern RuntimeClass* ProductDefinition_t339727138_il2cpp_TypeInfo_var;
extern const RuntimeMethod* HashSet_1_Add_m2871625864_RuntimeMethod_var;
extern const uint32_t ConfigurationBuilder_AddProduct_m2562156830_MetadataUsageId;
extern RuntimeClass* IPurchasingBinder_t3569785493_il2cpp_TypeInfo_var;
extern const uint32_t AbstractPurchasingModule_RegisterStore_m3613685983_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t1632706988_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3302800229_RuntimeMethod_var;
extern const uint32_t IDs__ctor_m3084577891_MetadataUsageId;
extern RuntimeClass* Enumerator_t3586889763_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_GetEnumerator_m1883005577_RuntimeMethod_var;
extern const uint32_t IDs_System_Collections_IEnumerable_GetEnumerator_m893119491_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_set_Item_m187286838_RuntimeMethod_var;
extern const uint32_t IDs_Add_m701658157_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m131312521_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m2543911734_RuntimeMethod_var;
extern const uint32_t IDs_SpecificIDForStore_m4239003019_MetadataUsageId;
extern const uint32_t IDs_GetEnumerator_m2797796332_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t PayoutDefinition__ctor_m480258218_MetadataUsageId;
extern const RuntimeType* PayoutType_t2016707446_0_0_0_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Enum_t4135868527_il2cpp_TypeInfo_var;
extern RuntimeClass* PayoutType_t2016707446_il2cpp_TypeInfo_var;
extern const uint32_t PayoutDefinition__ctor_m2238149198_MetadataUsageId;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern const RuntimeMethod* PayoutDefinition_set_subtype_m4245100266_RuntimeMethod_var;
extern String_t* _stringLiteral4238302583;
extern const uint32_t PayoutDefinition_set_subtype_m4245100266_MetadataUsageId;
extern const RuntimeMethod* PayoutDefinition_set_data_m3710665706_RuntimeMethod_var;
extern String_t* _stringLiteral2814054188;
extern const uint32_t PayoutDefinition_set_data_m3710665706_MetadataUsageId;
extern const uint32_t Product_get_hasReceipt_m2449951182_MetadataUsageId;
extern RuntimeClass* Product_t3244410059_il2cpp_TypeInfo_var;
extern const uint32_t Product_Equals_m468564859_MetadataUsageId;
extern RuntimeClass* HashSet_1_t1809359533_il2cpp_TypeInfo_var;
extern const RuntimeMethod* HashSet_1__ctor_m1526724929_RuntimeMethod_var;
extern const uint32_t ProductCollection__ctor_m1333293406_MetadataUsageId;
extern RuntimeClass* ProductCollection_t2671956229_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t1313482816_il2cpp_TypeInfo_var;
extern const RuntimeMethod* HashSet_1_UnionWith_m2629278899_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToArray_TisProduct_t3244410059_m1600507615_RuntimeMethod_var;
extern const RuntimeMethod* ProductCollection_U3CAddProductsU3Em__0_m539516108_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m70153528_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToDictionary_TisProduct_t3244410059_TisString_t_m1569553407_RuntimeMethod_var;
extern const RuntimeMethod* ProductCollection_U3CAddProductsU3Em__1_m1388243568_RuntimeMethod_var;
extern const uint32_t ProductCollection_AddProducts_m3516972499_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m3839205334_RuntimeMethod_var;
extern const uint32_t ProductCollection_WithID_m2597694943_MetadataUsageId;
extern const uint32_t ProductCollection_WithStoreSpecificID_m2495952872_MetadataUsageId;
extern RuntimeClass* List_1_t748791510_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2305681321_RuntimeMethod_var;
extern const uint32_t ProductDefinition__ctor_m3267495726_MetadataUsageId;
extern const uint32_t ProductDefinition_Equals_m2651766784_MetadataUsageId;
extern const RuntimeMethod* List_1_Clear_m3858397092_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_m2240270450_RuntimeMethod_var;
extern const uint32_t ProductDefinition_SetPayouts_m580635826_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t2519197568_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t3031246492_il2cpp_TypeInfo_var;
extern RuntimeClass* IPurchasingModule_t960499109_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2510914953_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2632381183_RuntimeMethod_var;
extern const uint32_t PurchasingFactory__ctor_m2746997968_MetadataUsageId;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern const RuntimeMethod* PurchasingFactory_get_service_m1834406598_RuntimeMethod_var;
extern String_t* _stringLiteral3786456592;
extern const uint32_t PurchasingFactory_get_service_m1834406598_MetadataUsageId;
extern RuntimeClass* SimpleCatalogProvider_t2437048597_il2cpp_TypeInfo_var;
extern const uint32_t PurchasingFactory_SetCatalogProviderFunction_m3510672563_MetadataUsageId;
extern const uint32_t PurchasingManager_InitiatePurchase_m2347184675_MetadataUsageId;
extern const uint32_t PurchasingManager_InitiatePurchase_m244097932_MetadataUsageId;
extern RuntimeClass* ILogger_t2607134790_il2cpp_TypeInfo_var;
extern RuntimeClass* IInternalStoreListener_t3516020022_il2cpp_TypeInfo_var;
extern RuntimeClass* IStore_t2324734081_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2601538339;
extern String_t* _stringLiteral3814032172;
extern const uint32_t PurchasingManager_InitiatePurchase_m2028603504_MetadataUsageId;
extern String_t* _stringLiteral2673559748;
extern const uint32_t PurchasingManager_InitiatePurchase_m2465901418_MetadataUsageId;
extern String_t* _stringLiteral690372164;
extern String_t* _stringLiteral849635213;
extern const uint32_t PurchasingManager_ConfirmPendingPurchase_m1662894679_MetadataUsageId;
extern RuntimeClass* ProductMetadata_t3417118930_il2cpp_TypeInfo_var;
extern const uint32_t PurchasingManager_OnPurchaseSucceeded_m2040664106_MetadataUsageId;
extern const RuntimeMethod* Action_1_Invoke_m4084811606_RuntimeMethod_var;
extern const uint32_t PurchasingManager_OnSetupFailed_m3099873275_MetadataUsageId;
extern String_t* _stringLiteral583922;
extern String_t* _stringLiteral4214330368;
extern const uint32_t PurchasingManager_OnPurchaseFailed_m3597833702_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m3948724805_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3883874576_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_Add_m3481334688_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2234378541_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m855450366_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_get_Count_m2156088054_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_GetEnumerator_m2404254953_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m419305491_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2112519677_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2764701031_RuntimeMethod_var;
extern const uint32_t PurchasingManager_OnProductsRetrieved_m2601533332_MetadataUsageId;
extern RuntimeClass* PurchaseEventArgs_t3033159582_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2567552709;
extern const uint32_t PurchasingManager_ProcessPurchaseIfNew_m546795524_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3189976310;
extern const uint32_t PurchasingManager_CheckForInitialization_m3081620621_MetadataUsageId;
extern RuntimeClass* PurchasingManager_t2174502701_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t2408407863_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyCollection_1_t1552303425_il2cpp_TypeInfo_var;
extern const RuntimeMethod* PurchasingManager_U3CInitializeU3Em__1_m2926205295_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m1822220331_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Select_TisProductDefinition_t339727138_TisProduct_t3244410059_m1482655603_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToList_TisProductDefinition_t339727138_m3266869506_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1__ctor_m1366470084_RuntimeMethod_var;
extern const uint32_t PurchasingManager_Initialize_m774274131_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_set_Item_m3454039676_RuntimeMethod_var;
extern String_t* _stringLiteral1544471543;
extern String_t* _stringLiteral1632276064;
extern String_t* _stringLiteral3264264274;
extern const uint32_t PurchasingManager_FormatUnifiedReceipt_m3708085126_MetadataUsageId;
extern const uint32_t PurchasingManager_U3CInitializeU3Em__1_m2926205295_MetadataUsageId;
extern const RuntimeMethod* Action_1_Invoke_m3970742127_RuntimeMethod_var;
extern const uint32_t SimpleCatalogProvider_FetchProducts_m3199640622_MetadataUsageId;
extern RuntimeClass* IStoreListener_t2917505531_il2cpp_TypeInfo_var;
extern const uint32_t StoreListenerProxy_OnInitialized_m1679091803_MetadataUsageId;
extern const uint32_t StoreListenerProxy_OnInitializeFailed_m1457808528_MetadataUsageId;
extern const uint32_t StoreListenerProxy_ProcessPurchase_m759558423_MetadataUsageId;
extern const uint32_t StoreListenerProxy_OnPurchaseFailed_m1474736034_MetadataUsageId;
extern RuntimeClass* Path_t1605229823_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1947076759;
extern String_t* _stringLiteral3953762712;
extern const uint32_t TransactionLog__ctor_m1598720892_MetadataUsageId;
extern const uint32_t TransactionLog_HasRecordOf_m709540537_MetadataUsageId;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern const uint32_t TransactionLog_Record_m1959187216_MetadataUsageId;
extern const uint32_t TransactionLog_GetRecordPath_m4193031146_MetadataUsageId;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* BitConverter_t3118986983_il2cpp_TypeInfo_var;
extern RuntimeClass* Byte_t1134296376_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2238338897;
extern const uint32_t TransactionLog_ComputeHash_m480528600_MetadataUsageId;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityAnalytics_t1988537891_il2cpp_TypeInfo_var;
extern const uint32_t UnityPurchasing_Initialize_m1836262307_MetadataUsageId;
extern RuntimeClass* U3CInitializeU3Ec__AnonStorey0_t1727991359_il2cpp_TypeInfo_var;
extern RuntimeClass* TransactionLog_t937968217_il2cpp_TypeInfo_var;
extern RuntimeClass* AnalyticsReporter_t2806096347_il2cpp_TypeInfo_var;
extern RuntimeClass* StoreListenerProxy_t3004682744_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t3372111503_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m144825785_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m2299265044_RuntimeMethod_var;
extern const uint32_t UnityPurchasing_Initialize_m2554911097_MetadataUsageId;
extern RuntimeClass* U3CFetchAndMergeProductsU3Ec__AnonStorey1_t3610355129_il2cpp_TypeInfo_var;
extern RuntimeClass* ICatalogProvider_t574371958_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CFetchAndMergeProductsU3Ec__AnonStorey1_U3CU3Em__0_m1422934616_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m1665236704_RuntimeMethod_var;
extern const uint32_t UnityPurchasing_FetchAndMergeProducts_m1882435942_MetadataUsageId;
extern const RuntimeMethod* HashSet_1__ctor_m2810352290_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_GetEnumerator_m3437090163_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m585826552_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_Remove_m2854925952_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m32644322_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m969545434_RuntimeMethod_var;
extern const uint32_t U3CFetchAndMergeProductsU3Ec__AnonStorey1_U3CU3Em__0_m1422934616_MetadataUsageId;

struct IPurchasingModuleU5BU5D_t3784316456;
struct StringU5BU5D_t1281789340;
struct ProductU5BU5D_t2942947242;
struct ObjectU5BU5D_t2843939325;
struct ByteU5BU5D_t4116647657;


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
#ifndef U3CMODULEU3E_T692745558_H
#define U3CMODULEU3E_T692745558_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745558 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745558_H
#ifndef DICTIONARY_2_T3031246492_H
#define DICTIONARY_2_T3031246492_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Purchasing.IStoreExtension>
struct  Dictionary_2_t3031246492  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	TypeU5BU5D_t3940880105* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	IStoreExtensionU5BU5D_t2489405453* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3031246492, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3031246492, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3031246492, ___keySlots_6)); }
	inline TypeU5BU5D_t3940880105* get_keySlots_6() const { return ___keySlots_6; }
	inline TypeU5BU5D_t3940880105** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(TypeU5BU5D_t3940880105* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3031246492, ___valueSlots_7)); }
	inline IStoreExtensionU5BU5D_t2489405453* get_valueSlots_7() const { return ___valueSlots_7; }
	inline IStoreExtensionU5BU5D_t2489405453** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(IStoreExtensionU5BU5D_t2489405453* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3031246492, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3031246492, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3031246492, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3031246492, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3031246492, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3031246492, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3031246492, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3031246492_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2769900464 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3031246492_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2769900464 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2769900464 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2769900464 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3031246492_H
#ifndef SIMPLECATALOGPROVIDER_T2437048597_H
#define SIMPLECATALOGPROVIDER_T2437048597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.SimpleCatalogProvider
struct  SimpleCatalogProvider_t2437048597  : public RuntimeObject
{
public:
	// System.Action`1<System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>> UnityEngine.Purchasing.SimpleCatalogProvider::m_Func
	Action_1_t3544579098 * ___m_Func_0;

public:
	inline static int32_t get_offset_of_m_Func_0() { return static_cast<int32_t>(offsetof(SimpleCatalogProvider_t2437048597, ___m_Func_0)); }
	inline Action_1_t3544579098 * get_m_Func_0() const { return ___m_Func_0; }
	inline Action_1_t3544579098 ** get_address_of_m_Func_0() { return &___m_Func_0; }
	inline void set_m_Func_0(Action_1_t3544579098 * value)
	{
		___m_Func_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Func_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLECATALOGPROVIDER_T2437048597_H
#ifndef PURCHASINGMANAGER_T2174502701_H
#define PURCHASINGMANAGER_T2174502701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.PurchasingManager
struct  PurchasingManager_t2174502701  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.PurchasingManager::m_Store
	RuntimeObject* ___m_Store_0;
	// UnityEngine.Purchasing.IInternalStoreListener UnityEngine.Purchasing.PurchasingManager::m_Listener
	RuntimeObject* ___m_Listener_1;
	// UnityEngine.ILogger UnityEngine.Purchasing.PurchasingManager::m_Logger
	RuntimeObject* ___m_Logger_2;
	// UnityEngine.Purchasing.TransactionLog UnityEngine.Purchasing.PurchasingManager::m_TransactionLog
	TransactionLog_t937968217 * ___m_TransactionLog_3;
	// System.String UnityEngine.Purchasing.PurchasingManager::m_StoreName
	String_t* ___m_StoreName_4;
	// System.Action UnityEngine.Purchasing.PurchasingManager::m_AdditionalProductsCallback
	Action_t1264377477 * ___m_AdditionalProductsCallback_5;
	// System.Action`1<UnityEngine.Purchasing.InitializationFailureReason> UnityEngine.Purchasing.PurchasingManager::m_AdditionalProductsFailCallback
	Action_1_t2913035299 * ___m_AdditionalProductsFailCallback_6;
	// System.Boolean UnityEngine.Purchasing.PurchasingManager::<useTransactionLog>k__BackingField
	bool ___U3CuseTransactionLogU3Ek__BackingField_7;
	// UnityEngine.Purchasing.ProductCollection UnityEngine.Purchasing.PurchasingManager::<products>k__BackingField
	ProductCollection_t2671956229 * ___U3CproductsU3Ek__BackingField_8;
	// System.Boolean UnityEngine.Purchasing.PurchasingManager::initialized
	bool ___initialized_9;

public:
	inline static int32_t get_offset_of_m_Store_0() { return static_cast<int32_t>(offsetof(PurchasingManager_t2174502701, ___m_Store_0)); }
	inline RuntimeObject* get_m_Store_0() const { return ___m_Store_0; }
	inline RuntimeObject** get_address_of_m_Store_0() { return &___m_Store_0; }
	inline void set_m_Store_0(RuntimeObject* value)
	{
		___m_Store_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Store_0), value);
	}

	inline static int32_t get_offset_of_m_Listener_1() { return static_cast<int32_t>(offsetof(PurchasingManager_t2174502701, ___m_Listener_1)); }
	inline RuntimeObject* get_m_Listener_1() const { return ___m_Listener_1; }
	inline RuntimeObject** get_address_of_m_Listener_1() { return &___m_Listener_1; }
	inline void set_m_Listener_1(RuntimeObject* value)
	{
		___m_Listener_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Listener_1), value);
	}

	inline static int32_t get_offset_of_m_Logger_2() { return static_cast<int32_t>(offsetof(PurchasingManager_t2174502701, ___m_Logger_2)); }
	inline RuntimeObject* get_m_Logger_2() const { return ___m_Logger_2; }
	inline RuntimeObject** get_address_of_m_Logger_2() { return &___m_Logger_2; }
	inline void set_m_Logger_2(RuntimeObject* value)
	{
		___m_Logger_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Logger_2), value);
	}

	inline static int32_t get_offset_of_m_TransactionLog_3() { return static_cast<int32_t>(offsetof(PurchasingManager_t2174502701, ___m_TransactionLog_3)); }
	inline TransactionLog_t937968217 * get_m_TransactionLog_3() const { return ___m_TransactionLog_3; }
	inline TransactionLog_t937968217 ** get_address_of_m_TransactionLog_3() { return &___m_TransactionLog_3; }
	inline void set_m_TransactionLog_3(TransactionLog_t937968217 * value)
	{
		___m_TransactionLog_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_TransactionLog_3), value);
	}

	inline static int32_t get_offset_of_m_StoreName_4() { return static_cast<int32_t>(offsetof(PurchasingManager_t2174502701, ___m_StoreName_4)); }
	inline String_t* get_m_StoreName_4() const { return ___m_StoreName_4; }
	inline String_t** get_address_of_m_StoreName_4() { return &___m_StoreName_4; }
	inline void set_m_StoreName_4(String_t* value)
	{
		___m_StoreName_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_StoreName_4), value);
	}

	inline static int32_t get_offset_of_m_AdditionalProductsCallback_5() { return static_cast<int32_t>(offsetof(PurchasingManager_t2174502701, ___m_AdditionalProductsCallback_5)); }
	inline Action_t1264377477 * get_m_AdditionalProductsCallback_5() const { return ___m_AdditionalProductsCallback_5; }
	inline Action_t1264377477 ** get_address_of_m_AdditionalProductsCallback_5() { return &___m_AdditionalProductsCallback_5; }
	inline void set_m_AdditionalProductsCallback_5(Action_t1264377477 * value)
	{
		___m_AdditionalProductsCallback_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_AdditionalProductsCallback_5), value);
	}

	inline static int32_t get_offset_of_m_AdditionalProductsFailCallback_6() { return static_cast<int32_t>(offsetof(PurchasingManager_t2174502701, ___m_AdditionalProductsFailCallback_6)); }
	inline Action_1_t2913035299 * get_m_AdditionalProductsFailCallback_6() const { return ___m_AdditionalProductsFailCallback_6; }
	inline Action_1_t2913035299 ** get_address_of_m_AdditionalProductsFailCallback_6() { return &___m_AdditionalProductsFailCallback_6; }
	inline void set_m_AdditionalProductsFailCallback_6(Action_1_t2913035299 * value)
	{
		___m_AdditionalProductsFailCallback_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_AdditionalProductsFailCallback_6), value);
	}

	inline static int32_t get_offset_of_U3CuseTransactionLogU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PurchasingManager_t2174502701, ___U3CuseTransactionLogU3Ek__BackingField_7)); }
	inline bool get_U3CuseTransactionLogU3Ek__BackingField_7() const { return ___U3CuseTransactionLogU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CuseTransactionLogU3Ek__BackingField_7() { return &___U3CuseTransactionLogU3Ek__BackingField_7; }
	inline void set_U3CuseTransactionLogU3Ek__BackingField_7(bool value)
	{
		___U3CuseTransactionLogU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CproductsU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PurchasingManager_t2174502701, ___U3CproductsU3Ek__BackingField_8)); }
	inline ProductCollection_t2671956229 * get_U3CproductsU3Ek__BackingField_8() const { return ___U3CproductsU3Ek__BackingField_8; }
	inline ProductCollection_t2671956229 ** get_address_of_U3CproductsU3Ek__BackingField_8() { return &___U3CproductsU3Ek__BackingField_8; }
	inline void set_U3CproductsU3Ek__BackingField_8(ProductCollection_t2671956229 * value)
	{
		___U3CproductsU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CproductsU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_initialized_9() { return static_cast<int32_t>(offsetof(PurchasingManager_t2174502701, ___initialized_9)); }
	inline bool get_initialized_9() const { return ___initialized_9; }
	inline bool* get_address_of_initialized_9() { return &___initialized_9; }
	inline void set_initialized_9(bool value)
	{
		___initialized_9 = value;
	}
};

struct PurchasingManager_t2174502701_StaticFields
{
public:
	// System.Func`2<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Product> UnityEngine.Purchasing.PurchasingManager::<>f__am$cache1
	Func_2_t2408407863 * ___U3CU3Ef__amU24cache1_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_10() { return static_cast<int32_t>(offsetof(PurchasingManager_t2174502701_StaticFields, ___U3CU3Ef__amU24cache1_10)); }
	inline Func_2_t2408407863 * get_U3CU3Ef__amU24cache1_10() const { return ___U3CU3Ef__amU24cache1_10; }
	inline Func_2_t2408407863 ** get_address_of_U3CU3Ef__amU24cache1_10() { return &___U3CU3Ef__amU24cache1_10; }
	inline void set_U3CU3Ef__amU24cache1_10(Func_2_t2408407863 * value)
	{
		___U3CU3Ef__amU24cache1_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PURCHASINGMANAGER_T2174502701_H
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
#ifndef TRANSACTIONLOG_T937968217_H
#define TRANSACTIONLOG_T937968217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.TransactionLog
struct  TransactionLog_t937968217  : public RuntimeObject
{
public:
	// UnityEngine.ILogger UnityEngine.Purchasing.TransactionLog::logger
	RuntimeObject* ___logger_0;
	// System.String UnityEngine.Purchasing.TransactionLog::persistentDataPath
	String_t* ___persistentDataPath_1;

public:
	inline static int32_t get_offset_of_logger_0() { return static_cast<int32_t>(offsetof(TransactionLog_t937968217, ___logger_0)); }
	inline RuntimeObject* get_logger_0() const { return ___logger_0; }
	inline RuntimeObject** get_address_of_logger_0() { return &___logger_0; }
	inline void set_logger_0(RuntimeObject* value)
	{
		___logger_0 = value;
		Il2CppCodeGenWriteBarrier((&___logger_0), value);
	}

	inline static int32_t get_offset_of_persistentDataPath_1() { return static_cast<int32_t>(offsetof(TransactionLog_t937968217, ___persistentDataPath_1)); }
	inline String_t* get_persistentDataPath_1() const { return ___persistentDataPath_1; }
	inline String_t** get_address_of_persistentDataPath_1() { return &___persistentDataPath_1; }
	inline void set_persistentDataPath_1(String_t* value)
	{
		___persistentDataPath_1 = value;
		Il2CppCodeGenWriteBarrier((&___persistentDataPath_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSACTIONLOG_T937968217_H
#ifndef LIST_1_T2186087874_H
#define LIST_1_T2186087874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>
struct  List_1_t2186087874  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ProductDescriptionU5BU5D_t597346693* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2186087874, ____items_1)); }
	inline ProductDescriptionU5BU5D_t597346693* get__items_1() const { return ____items_1; }
	inline ProductDescriptionU5BU5D_t597346693** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ProductDescriptionU5BU5D_t597346693* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2186087874, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2186087874, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2186087874_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ProductDescriptionU5BU5D_t597346693* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2186087874_StaticFields, ___EmptyArray_4)); }
	inline ProductDescriptionU5BU5D_t597346693* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ProductDescriptionU5BU5D_t597346693** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ProductDescriptionU5BU5D_t597346693* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2186087874_H
#ifndef DICTIONARY_2_T2519197568_H
#define DICTIONARY_2_T2519197568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Purchasing.Extension.IStoreConfiguration>
struct  Dictionary_2_t2519197568  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	TypeU5BU5D_t3940880105* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	IStoreConfigurationU5BU5D_t1964808985* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2519197568, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2519197568, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2519197568, ___keySlots_6)); }
	inline TypeU5BU5D_t3940880105* get_keySlots_6() const { return ___keySlots_6; }
	inline TypeU5BU5D_t3940880105** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(TypeU5BU5D_t3940880105* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2519197568, ___valueSlots_7)); }
	inline IStoreConfigurationU5BU5D_t1964808985* get_valueSlots_7() const { return ___valueSlots_7; }
	inline IStoreConfigurationU5BU5D_t1964808985** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(IStoreConfigurationU5BU5D_t1964808985* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2519197568, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2519197568, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2519197568, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2519197568, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2519197568, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2519197568, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2519197568, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2519197568_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2245303996 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2519197568_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2245303996 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2245303996 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2245303996 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2519197568_H
#ifndef PURCHASEEVENTARGS_T3033159582_H
#define PURCHASEEVENTARGS_T3033159582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.PurchaseEventArgs
struct  PurchaseEventArgs_t3033159582  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.Product UnityEngine.Purchasing.PurchaseEventArgs::<purchasedProduct>k__BackingField
	Product_t3244410059 * ___U3CpurchasedProductU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CpurchasedProductU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PurchaseEventArgs_t3033159582, ___U3CpurchasedProductU3Ek__BackingField_0)); }
	inline Product_t3244410059 * get_U3CpurchasedProductU3Ek__BackingField_0() const { return ___U3CpurchasedProductU3Ek__BackingField_0; }
	inline Product_t3244410059 ** get_address_of_U3CpurchasedProductU3Ek__BackingField_0() { return &___U3CpurchasedProductU3Ek__BackingField_0; }
	inline void set_U3CpurchasedProductU3Ek__BackingField_0(Product_t3244410059 * value)
	{
		___U3CpurchasedProductU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpurchasedProductU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PURCHASEEVENTARGS_T3033159582_H
#ifndef LIST_1_T748791510_H
#define LIST_1_T748791510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>
struct  List_1_t748791510  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PayoutDefinitionU5BU5D_t274752929* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t748791510, ____items_1)); }
	inline PayoutDefinitionU5BU5D_t274752929* get__items_1() const { return ____items_1; }
	inline PayoutDefinitionU5BU5D_t274752929** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PayoutDefinitionU5BU5D_t274752929* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t748791510, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t748791510, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t748791510_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	PayoutDefinitionU5BU5D_t274752929* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t748791510_StaticFields, ___EmptyArray_4)); }
	inline PayoutDefinitionU5BU5D_t274752929* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline PayoutDefinitionU5BU5D_t274752929** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(PayoutDefinitionU5BU5D_t274752929* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T748791510_H
#ifndef DICTIONARY_2_T3029666358_H
#define DICTIONARY_2_T3029666358_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Purchasing.Product>
struct  Dictionary_2_t3029666358  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ProductU5BU5D_t2942947242* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3029666358, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3029666358, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3029666358, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3029666358, ___valueSlots_7)); }
	inline ProductU5BU5D_t2942947242* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ProductU5BU5D_t2942947242** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ProductU5BU5D_t2942947242* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3029666358, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3029666358, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3029666358, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3029666358, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3029666358, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3029666358, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3029666358, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3029666358_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1793358958 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3029666358_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1793358958 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1793358958 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1793358958 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3029666358_H
#ifndef HASHSET_1_T1809359533_H
#define HASHSET_1_T1809359533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product>
struct  HashSet_1_t1809359533  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1::links
	LinkU5BU5D_t1335864701* ___links_5;
	// T[] System.Collections.Generic.HashSet`1::slots
	ProductU5BU5D_t2942947242* ___slots_6;
	// System.Int32 System.Collections.Generic.HashSet`1::touched
	int32_t ___touched_7;
	// System.Int32 System.Collections.Generic.HashSet`1::empty_slot
	int32_t ___empty_slot_8;
	// System.Int32 System.Collections.Generic.HashSet`1::count
	int32_t ___count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::threshold
	int32_t ___threshold_10;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::comparer
	RuntimeObject* ___comparer_11;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::si
	SerializationInfo_t950877179 * ___si_12;
	// System.Int32 System.Collections.Generic.HashSet`1::generation
	int32_t ___generation_13;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(HashSet_1_t1809359533, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_links_5() { return static_cast<int32_t>(offsetof(HashSet_1_t1809359533, ___links_5)); }
	inline LinkU5BU5D_t1335864701* get_links_5() const { return ___links_5; }
	inline LinkU5BU5D_t1335864701** get_address_of_links_5() { return &___links_5; }
	inline void set_links_5(LinkU5BU5D_t1335864701* value)
	{
		___links_5 = value;
		Il2CppCodeGenWriteBarrier((&___links_5), value);
	}

	inline static int32_t get_offset_of_slots_6() { return static_cast<int32_t>(offsetof(HashSet_1_t1809359533, ___slots_6)); }
	inline ProductU5BU5D_t2942947242* get_slots_6() const { return ___slots_6; }
	inline ProductU5BU5D_t2942947242** get_address_of_slots_6() { return &___slots_6; }
	inline void set_slots_6(ProductU5BU5D_t2942947242* value)
	{
		___slots_6 = value;
		Il2CppCodeGenWriteBarrier((&___slots_6), value);
	}

	inline static int32_t get_offset_of_touched_7() { return static_cast<int32_t>(offsetof(HashSet_1_t1809359533, ___touched_7)); }
	inline int32_t get_touched_7() const { return ___touched_7; }
	inline int32_t* get_address_of_touched_7() { return &___touched_7; }
	inline void set_touched_7(int32_t value)
	{
		___touched_7 = value;
	}

	inline static int32_t get_offset_of_empty_slot_8() { return static_cast<int32_t>(offsetof(HashSet_1_t1809359533, ___empty_slot_8)); }
	inline int32_t get_empty_slot_8() const { return ___empty_slot_8; }
	inline int32_t* get_address_of_empty_slot_8() { return &___empty_slot_8; }
	inline void set_empty_slot_8(int32_t value)
	{
		___empty_slot_8 = value;
	}

	inline static int32_t get_offset_of_count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t1809359533, ___count_9)); }
	inline int32_t get_count_9() const { return ___count_9; }
	inline int32_t* get_address_of_count_9() { return &___count_9; }
	inline void set_count_9(int32_t value)
	{
		___count_9 = value;
	}

	inline static int32_t get_offset_of_threshold_10() { return static_cast<int32_t>(offsetof(HashSet_1_t1809359533, ___threshold_10)); }
	inline int32_t get_threshold_10() const { return ___threshold_10; }
	inline int32_t* get_address_of_threshold_10() { return &___threshold_10; }
	inline void set_threshold_10(int32_t value)
	{
		___threshold_10 = value;
	}

	inline static int32_t get_offset_of_comparer_11() { return static_cast<int32_t>(offsetof(HashSet_1_t1809359533, ___comparer_11)); }
	inline RuntimeObject* get_comparer_11() const { return ___comparer_11; }
	inline RuntimeObject** get_address_of_comparer_11() { return &___comparer_11; }
	inline void set_comparer_11(RuntimeObject* value)
	{
		___comparer_11 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_11), value);
	}

	inline static int32_t get_offset_of_si_12() { return static_cast<int32_t>(offsetof(HashSet_1_t1809359533, ___si_12)); }
	inline SerializationInfo_t950877179 * get_si_12() const { return ___si_12; }
	inline SerializationInfo_t950877179 ** get_address_of_si_12() { return &___si_12; }
	inline void set_si_12(SerializationInfo_t950877179 * value)
	{
		___si_12 = value;
		Il2CppCodeGenWriteBarrier((&___si_12), value);
	}

	inline static int32_t get_offset_of_generation_13() { return static_cast<int32_t>(offsetof(HashSet_1_t1809359533, ___generation_13)); }
	inline int32_t get_generation_13() const { return ___generation_13; }
	inline int32_t* get_address_of_generation_13() { return &___generation_13; }
	inline void set_generation_13(int32_t value)
	{
		___generation_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHSET_1_T1809359533_H
#ifndef PRODUCTCOLLECTION_T2671956229_H
#define PRODUCTCOLLECTION_T2671956229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.ProductCollection
struct  ProductCollection_t2671956229  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Purchasing.Product> UnityEngine.Purchasing.ProductCollection::m_IdToProduct
	Dictionary_2_t3029666358 * ___m_IdToProduct_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Purchasing.Product> UnityEngine.Purchasing.ProductCollection::m_StoreSpecificIdToProduct
	Dictionary_2_t3029666358 * ___m_StoreSpecificIdToProduct_1;
	// UnityEngine.Purchasing.Product[] UnityEngine.Purchasing.ProductCollection::m_Products
	ProductU5BU5D_t2942947242* ___m_Products_2;
	// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product> UnityEngine.Purchasing.ProductCollection::m_ProductSet
	HashSet_1_t1809359533 * ___m_ProductSet_3;

public:
	inline static int32_t get_offset_of_m_IdToProduct_0() { return static_cast<int32_t>(offsetof(ProductCollection_t2671956229, ___m_IdToProduct_0)); }
	inline Dictionary_2_t3029666358 * get_m_IdToProduct_0() const { return ___m_IdToProduct_0; }
	inline Dictionary_2_t3029666358 ** get_address_of_m_IdToProduct_0() { return &___m_IdToProduct_0; }
	inline void set_m_IdToProduct_0(Dictionary_2_t3029666358 * value)
	{
		___m_IdToProduct_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_IdToProduct_0), value);
	}

	inline static int32_t get_offset_of_m_StoreSpecificIdToProduct_1() { return static_cast<int32_t>(offsetof(ProductCollection_t2671956229, ___m_StoreSpecificIdToProduct_1)); }
	inline Dictionary_2_t3029666358 * get_m_StoreSpecificIdToProduct_1() const { return ___m_StoreSpecificIdToProduct_1; }
	inline Dictionary_2_t3029666358 ** get_address_of_m_StoreSpecificIdToProduct_1() { return &___m_StoreSpecificIdToProduct_1; }
	inline void set_m_StoreSpecificIdToProduct_1(Dictionary_2_t3029666358 * value)
	{
		___m_StoreSpecificIdToProduct_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_StoreSpecificIdToProduct_1), value);
	}

	inline static int32_t get_offset_of_m_Products_2() { return static_cast<int32_t>(offsetof(ProductCollection_t2671956229, ___m_Products_2)); }
	inline ProductU5BU5D_t2942947242* get_m_Products_2() const { return ___m_Products_2; }
	inline ProductU5BU5D_t2942947242** get_address_of_m_Products_2() { return &___m_Products_2; }
	inline void set_m_Products_2(ProductU5BU5D_t2942947242* value)
	{
		___m_Products_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Products_2), value);
	}

	inline static int32_t get_offset_of_m_ProductSet_3() { return static_cast<int32_t>(offsetof(ProductCollection_t2671956229, ___m_ProductSet_3)); }
	inline HashSet_1_t1809359533 * get_m_ProductSet_3() const { return ___m_ProductSet_3; }
	inline HashSet_1_t1809359533 ** get_address_of_m_ProductSet_3() { return &___m_ProductSet_3; }
	inline void set_m_ProductSet_3(HashSet_1_t1809359533 * value)
	{
		___m_ProductSet_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_ProductSet_3), value);
	}
};

struct ProductCollection_t2671956229_StaticFields
{
public:
	// System.Func`2<UnityEngine.Purchasing.Product,System.String> UnityEngine.Purchasing.ProductCollection::<>f__am$cache0
	Func_2_t1313482816 * ___U3CU3Ef__amU24cache0_4;
	// System.Func`2<UnityEngine.Purchasing.Product,System.String> UnityEngine.Purchasing.ProductCollection::<>f__am$cache1
	Func_2_t1313482816 * ___U3CU3Ef__amU24cache1_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_4() { return static_cast<int32_t>(offsetof(ProductCollection_t2671956229_StaticFields, ___U3CU3Ef__amU24cache0_4)); }
	inline Func_2_t1313482816 * get_U3CU3Ef__amU24cache0_4() const { return ___U3CU3Ef__amU24cache0_4; }
	inline Func_2_t1313482816 ** get_address_of_U3CU3Ef__amU24cache0_4() { return &___U3CU3Ef__amU24cache0_4; }
	inline void set_U3CU3Ef__amU24cache0_4(Func_2_t1313482816 * value)
	{
		___U3CU3Ef__amU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_5() { return static_cast<int32_t>(offsetof(ProductCollection_t2671956229_StaticFields, ___U3CU3Ef__amU24cache1_5)); }
	inline Func_2_t1313482816 * get_U3CU3Ef__amU24cache1_5() const { return ___U3CU3Ef__amU24cache1_5; }
	inline Func_2_t1313482816 ** get_address_of_U3CU3Ef__amU24cache1_5() { return &___U3CU3Ef__amU24cache1_5; }
	inline void set_U3CU3Ef__amU24cache1_5(Func_2_t1313482816 * value)
	{
		___U3CU3Ef__amU24cache1_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRODUCTCOLLECTION_T2671956229_H
#ifndef READONLYCOLLECTION_1_T1552303425_H
#define READONLYCOLLECTION_1_T1552303425_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>
struct  ReadOnlyCollection_1_t1552303425  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t1552303425, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTION_1_T1552303425_H
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
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
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
#ifndef U3CFETCHANDMERGEPRODUCTSU3EC__ANONSTOREY1_T3610355129_H
#define U3CFETCHANDMERGEPRODUCTSU3EC__ANONSTOREY1_T3610355129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.UnityPurchasing/<FetchAndMergeProducts>c__AnonStorey1
struct  U3CFetchAndMergeProductsU3Ec__AnonStorey1_t3610355129  : public RuntimeObject
{
public:
	// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.UnityPurchasing/<FetchAndMergeProducts>c__AnonStorey1::localProductSet
	HashSet_1_t3199643908 * ___localProductSet_0;
	// System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>> UnityEngine.Purchasing.UnityPurchasing/<FetchAndMergeProducts>c__AnonStorey1::callback
	Action_1_t3372111503 * ___callback_1;

public:
	inline static int32_t get_offset_of_localProductSet_0() { return static_cast<int32_t>(offsetof(U3CFetchAndMergeProductsU3Ec__AnonStorey1_t3610355129, ___localProductSet_0)); }
	inline HashSet_1_t3199643908 * get_localProductSet_0() const { return ___localProductSet_0; }
	inline HashSet_1_t3199643908 ** get_address_of_localProductSet_0() { return &___localProductSet_0; }
	inline void set_localProductSet_0(HashSet_1_t3199643908 * value)
	{
		___localProductSet_0 = value;
		Il2CppCodeGenWriteBarrier((&___localProductSet_0), value);
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(U3CFetchAndMergeProductsU3Ec__AnonStorey1_t3610355129, ___callback_1)); }
	inline Action_1_t3372111503 * get_callback_1() const { return ___callback_1; }
	inline Action_1_t3372111503 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(Action_1_t3372111503 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((&___callback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFETCHANDMERGEPRODUCTSU3EC__ANONSTOREY1_T3610355129_H
#ifndef U3CINITIALIZEU3EC__ANONSTOREY0_T1727991359_H
#define U3CINITIALIZEU3EC__ANONSTOREY0_T1727991359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.UnityPurchasing/<Initialize>c__AnonStorey0
struct  U3CInitializeU3Ec__AnonStorey0_t1727991359  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.PurchasingManager UnityEngine.Purchasing.UnityPurchasing/<Initialize>c__AnonStorey0::manager
	PurchasingManager_t2174502701 * ___manager_0;
	// UnityEngine.Purchasing.StoreListenerProxy UnityEngine.Purchasing.UnityPurchasing/<Initialize>c__AnonStorey0::proxy
	StoreListenerProxy_t3004682744 * ___proxy_1;

public:
	inline static int32_t get_offset_of_manager_0() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ec__AnonStorey0_t1727991359, ___manager_0)); }
	inline PurchasingManager_t2174502701 * get_manager_0() const { return ___manager_0; }
	inline PurchasingManager_t2174502701 ** get_address_of_manager_0() { return &___manager_0; }
	inline void set_manager_0(PurchasingManager_t2174502701 * value)
	{
		___manager_0 = value;
		Il2CppCodeGenWriteBarrier((&___manager_0), value);
	}

	inline static int32_t get_offset_of_proxy_1() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ec__AnonStorey0_t1727991359, ___proxy_1)); }
	inline StoreListenerProxy_t3004682744 * get_proxy_1() const { return ___proxy_1; }
	inline StoreListenerProxy_t3004682744 ** get_address_of_proxy_1() { return &___proxy_1; }
	inline void set_proxy_1(StoreListenerProxy_t3004682744 * value)
	{
		___proxy_1 = value;
		Il2CppCodeGenWriteBarrier((&___proxy_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CINITIALIZEU3EC__ANONSTOREY0_T1727991359_H
#ifndef UNITYPURCHASING_T804213223_H
#define UNITYPURCHASING_T804213223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.UnityPurchasing
struct  UnityPurchasing_t804213223  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYPURCHASING_T804213223_H
#ifndef UNITYANALYTICS_T1988537891_H
#define UNITYANALYTICS_T1988537891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.UnityAnalytics
struct  UnityAnalytics_t1988537891  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYANALYTICS_T1988537891_H
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
#ifndef STORELISTENERPROXY_T3004682744_H
#define STORELISTENERPROXY_T3004682744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.StoreListenerProxy
struct  StoreListenerProxy_t3004682744  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.AnalyticsReporter UnityEngine.Purchasing.StoreListenerProxy::m_Analytics
	AnalyticsReporter_t2806096347 * ___m_Analytics_0;
	// UnityEngine.Purchasing.IStoreListener UnityEngine.Purchasing.StoreListenerProxy::m_ForwardTo
	RuntimeObject* ___m_ForwardTo_1;
	// UnityEngine.Purchasing.IExtensionProvider UnityEngine.Purchasing.StoreListenerProxy::m_Extensions
	RuntimeObject* ___m_Extensions_2;

public:
	inline static int32_t get_offset_of_m_Analytics_0() { return static_cast<int32_t>(offsetof(StoreListenerProxy_t3004682744, ___m_Analytics_0)); }
	inline AnalyticsReporter_t2806096347 * get_m_Analytics_0() const { return ___m_Analytics_0; }
	inline AnalyticsReporter_t2806096347 ** get_address_of_m_Analytics_0() { return &___m_Analytics_0; }
	inline void set_m_Analytics_0(AnalyticsReporter_t2806096347 * value)
	{
		___m_Analytics_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Analytics_0), value);
	}

	inline static int32_t get_offset_of_m_ForwardTo_1() { return static_cast<int32_t>(offsetof(StoreListenerProxy_t3004682744, ___m_ForwardTo_1)); }
	inline RuntimeObject* get_m_ForwardTo_1() const { return ___m_ForwardTo_1; }
	inline RuntimeObject** get_address_of_m_ForwardTo_1() { return &___m_ForwardTo_1; }
	inline void set_m_ForwardTo_1(RuntimeObject* value)
	{
		___m_ForwardTo_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ForwardTo_1), value);
	}

	inline static int32_t get_offset_of_m_Extensions_2() { return static_cast<int32_t>(offsetof(StoreListenerProxy_t3004682744, ___m_Extensions_2)); }
	inline RuntimeObject* get_m_Extensions_2() const { return ___m_Extensions_2; }
	inline RuntimeObject** get_address_of_m_Extensions_2() { return &___m_Extensions_2; }
	inline void set_m_Extensions_2(RuntimeObject* value)
	{
		___m_Extensions_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Extensions_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STORELISTENERPROXY_T3004682744_H
#ifndef LIST_1_T1811801880_H
#define LIST_1_T1811801880_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductDefinition>
struct  List_1_t1811801880  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ProductDefinitionU5BU5D_t2640912919* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1811801880, ____items_1)); }
	inline ProductDefinitionU5BU5D_t2640912919* get__items_1() const { return ____items_1; }
	inline ProductDefinitionU5BU5D_t2640912919** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ProductDefinitionU5BU5D_t2640912919* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1811801880, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1811801880, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1811801880_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ProductDefinitionU5BU5D_t2640912919* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1811801880_StaticFields, ___EmptyArray_4)); }
	inline ProductDefinitionU5BU5D_t2640912919* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ProductDefinitionU5BU5D_t2640912919** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ProductDefinitionU5BU5D_t2640912919* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1811801880_H
#ifndef CONFIGURATIONBUILDER_T1618671084_H
#define CONFIGURATIONBUILDER_T1618671084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.ConfigurationBuilder
struct  ConfigurationBuilder_t1618671084  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.PurchasingFactory UnityEngine.Purchasing.ConfigurationBuilder::m_Factory
	PurchasingFactory_t4012818695 * ___m_Factory_0;
	// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.ConfigurationBuilder::m_Products
	HashSet_1_t3199643908 * ___m_Products_1;
	// System.Boolean UnityEngine.Purchasing.ConfigurationBuilder::<useCatalogProvider>k__BackingField
	bool ___U3CuseCatalogProviderU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_m_Factory_0() { return static_cast<int32_t>(offsetof(ConfigurationBuilder_t1618671084, ___m_Factory_0)); }
	inline PurchasingFactory_t4012818695 * get_m_Factory_0() const { return ___m_Factory_0; }
	inline PurchasingFactory_t4012818695 ** get_address_of_m_Factory_0() { return &___m_Factory_0; }
	inline void set_m_Factory_0(PurchasingFactory_t4012818695 * value)
	{
		___m_Factory_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Factory_0), value);
	}

	inline static int32_t get_offset_of_m_Products_1() { return static_cast<int32_t>(offsetof(ConfigurationBuilder_t1618671084, ___m_Products_1)); }
	inline HashSet_1_t3199643908 * get_m_Products_1() const { return ___m_Products_1; }
	inline HashSet_1_t3199643908 ** get_address_of_m_Products_1() { return &___m_Products_1; }
	inline void set_m_Products_1(HashSet_1_t3199643908 * value)
	{
		___m_Products_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Products_1), value);
	}

	inline static int32_t get_offset_of_U3CuseCatalogProviderU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ConfigurationBuilder_t1618671084, ___U3CuseCatalogProviderU3Ek__BackingField_2)); }
	inline bool get_U3CuseCatalogProviderU3Ek__BackingField_2() const { return ___U3CuseCatalogProviderU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CuseCatalogProviderU3Ek__BackingField_2() { return &___U3CuseCatalogProviderU3Ek__BackingField_2; }
	inline void set_U3CuseCatalogProviderU3Ek__BackingField_2(bool value)
	{
		___U3CuseCatalogProviderU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONBUILDER_T1618671084_H
#ifndef HASHSET_1_T3199643908_H
#define HASHSET_1_T3199643908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>
struct  HashSet_1_t3199643908  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1::links
	LinkU5BU5D_t1033830378* ___links_5;
	// T[] System.Collections.Generic.HashSet`1::slots
	ProductDefinitionU5BU5D_t2640912919* ___slots_6;
	// System.Int32 System.Collections.Generic.HashSet`1::touched
	int32_t ___touched_7;
	// System.Int32 System.Collections.Generic.HashSet`1::empty_slot
	int32_t ___empty_slot_8;
	// System.Int32 System.Collections.Generic.HashSet`1::count
	int32_t ___count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::threshold
	int32_t ___threshold_10;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::comparer
	RuntimeObject* ___comparer_11;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::si
	SerializationInfo_t950877179 * ___si_12;
	// System.Int32 System.Collections.Generic.HashSet`1::generation
	int32_t ___generation_13;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(HashSet_1_t3199643908, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_links_5() { return static_cast<int32_t>(offsetof(HashSet_1_t3199643908, ___links_5)); }
	inline LinkU5BU5D_t1033830378* get_links_5() const { return ___links_5; }
	inline LinkU5BU5D_t1033830378** get_address_of_links_5() { return &___links_5; }
	inline void set_links_5(LinkU5BU5D_t1033830378* value)
	{
		___links_5 = value;
		Il2CppCodeGenWriteBarrier((&___links_5), value);
	}

	inline static int32_t get_offset_of_slots_6() { return static_cast<int32_t>(offsetof(HashSet_1_t3199643908, ___slots_6)); }
	inline ProductDefinitionU5BU5D_t2640912919* get_slots_6() const { return ___slots_6; }
	inline ProductDefinitionU5BU5D_t2640912919** get_address_of_slots_6() { return &___slots_6; }
	inline void set_slots_6(ProductDefinitionU5BU5D_t2640912919* value)
	{
		___slots_6 = value;
		Il2CppCodeGenWriteBarrier((&___slots_6), value);
	}

	inline static int32_t get_offset_of_touched_7() { return static_cast<int32_t>(offsetof(HashSet_1_t3199643908, ___touched_7)); }
	inline int32_t get_touched_7() const { return ___touched_7; }
	inline int32_t* get_address_of_touched_7() { return &___touched_7; }
	inline void set_touched_7(int32_t value)
	{
		___touched_7 = value;
	}

	inline static int32_t get_offset_of_empty_slot_8() { return static_cast<int32_t>(offsetof(HashSet_1_t3199643908, ___empty_slot_8)); }
	inline int32_t get_empty_slot_8() const { return ___empty_slot_8; }
	inline int32_t* get_address_of_empty_slot_8() { return &___empty_slot_8; }
	inline void set_empty_slot_8(int32_t value)
	{
		___empty_slot_8 = value;
	}

	inline static int32_t get_offset_of_count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t3199643908, ___count_9)); }
	inline int32_t get_count_9() const { return ___count_9; }
	inline int32_t* get_address_of_count_9() { return &___count_9; }
	inline void set_count_9(int32_t value)
	{
		___count_9 = value;
	}

	inline static int32_t get_offset_of_threshold_10() { return static_cast<int32_t>(offsetof(HashSet_1_t3199643908, ___threshold_10)); }
	inline int32_t get_threshold_10() const { return ___threshold_10; }
	inline int32_t* get_address_of_threshold_10() { return &___threshold_10; }
	inline void set_threshold_10(int32_t value)
	{
		___threshold_10 = value;
	}

	inline static int32_t get_offset_of_comparer_11() { return static_cast<int32_t>(offsetof(HashSet_1_t3199643908, ___comparer_11)); }
	inline RuntimeObject* get_comparer_11() const { return ___comparer_11; }
	inline RuntimeObject** get_address_of_comparer_11() { return &___comparer_11; }
	inline void set_comparer_11(RuntimeObject* value)
	{
		___comparer_11 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_11), value);
	}

	inline static int32_t get_offset_of_si_12() { return static_cast<int32_t>(offsetof(HashSet_1_t3199643908, ___si_12)); }
	inline SerializationInfo_t950877179 * get_si_12() const { return ___si_12; }
	inline SerializationInfo_t950877179 ** get_address_of_si_12() { return &___si_12; }
	inline void set_si_12(SerializationInfo_t950877179 * value)
	{
		___si_12 = value;
		Il2CppCodeGenWriteBarrier((&___si_12), value);
	}

	inline static int32_t get_offset_of_generation_13() { return static_cast<int32_t>(offsetof(HashSet_1_t3199643908, ___generation_13)); }
	inline int32_t get_generation_13() const { return ___generation_13; }
	inline int32_t* get_address_of_generation_13() { return &___generation_13; }
	inline void set_generation_13(int32_t value)
	{
		___generation_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHSET_1_T3199643908_H
#ifndef DICTIONARY_2_T1632706988_H
#define DICTIONARY_2_T1632706988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_t1632706988  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	StringU5BU5D_t1281789340* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___valueSlots_7)); }
	inline StringU5BU5D_t1281789340* get_valueSlots_7() const { return ___valueSlots_7; }
	inline StringU5BU5D_t1281789340** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(StringU5BU5D_t1281789340* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1632706988_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t132201056 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t132201056 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t132201056 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t132201056 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1632706988_H
#ifndef PRODUCT_T3244410059_H
#define PRODUCT_T3244410059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Product
struct  Product_t3244410059  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.Product::<definition>k__BackingField
	ProductDefinition_t339727138 * ___U3CdefinitionU3Ek__BackingField_0;
	// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Product::<metadata>k__BackingField
	ProductMetadata_t3417118930 * ___U3CmetadataU3Ek__BackingField_1;
	// System.Boolean UnityEngine.Purchasing.Product::<availableToPurchase>k__BackingField
	bool ___U3CavailableToPurchaseU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Product::<transactionID>k__BackingField
	String_t* ___U3CtransactionIDU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Product::<receipt>k__BackingField
	String_t* ___U3CreceiptU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CdefinitionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Product_t3244410059, ___U3CdefinitionU3Ek__BackingField_0)); }
	inline ProductDefinition_t339727138 * get_U3CdefinitionU3Ek__BackingField_0() const { return ___U3CdefinitionU3Ek__BackingField_0; }
	inline ProductDefinition_t339727138 ** get_address_of_U3CdefinitionU3Ek__BackingField_0() { return &___U3CdefinitionU3Ek__BackingField_0; }
	inline void set_U3CdefinitionU3Ek__BackingField_0(ProductDefinition_t339727138 * value)
	{
		___U3CdefinitionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CdefinitionU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CmetadataU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Product_t3244410059, ___U3CmetadataU3Ek__BackingField_1)); }
	inline ProductMetadata_t3417118930 * get_U3CmetadataU3Ek__BackingField_1() const { return ___U3CmetadataU3Ek__BackingField_1; }
	inline ProductMetadata_t3417118930 ** get_address_of_U3CmetadataU3Ek__BackingField_1() { return &___U3CmetadataU3Ek__BackingField_1; }
	inline void set_U3CmetadataU3Ek__BackingField_1(ProductMetadata_t3417118930 * value)
	{
		___U3CmetadataU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmetadataU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CavailableToPurchaseU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Product_t3244410059, ___U3CavailableToPurchaseU3Ek__BackingField_2)); }
	inline bool get_U3CavailableToPurchaseU3Ek__BackingField_2() const { return ___U3CavailableToPurchaseU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CavailableToPurchaseU3Ek__BackingField_2() { return &___U3CavailableToPurchaseU3Ek__BackingField_2; }
	inline void set_U3CavailableToPurchaseU3Ek__BackingField_2(bool value)
	{
		___U3CavailableToPurchaseU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CtransactionIDU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Product_t3244410059, ___U3CtransactionIDU3Ek__BackingField_3)); }
	inline String_t* get_U3CtransactionIDU3Ek__BackingField_3() const { return ___U3CtransactionIDU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CtransactionIDU3Ek__BackingField_3() { return &___U3CtransactionIDU3Ek__BackingField_3; }
	inline void set_U3CtransactionIDU3Ek__BackingField_3(String_t* value)
	{
		___U3CtransactionIDU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtransactionIDU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CreceiptU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Product_t3244410059, ___U3CreceiptU3Ek__BackingField_4)); }
	inline String_t* get_U3CreceiptU3Ek__BackingField_4() const { return ___U3CreceiptU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CreceiptU3Ek__BackingField_4() { return &___U3CreceiptU3Ek__BackingField_4; }
	inline void set_U3CreceiptU3Ek__BackingField_4(String_t* value)
	{
		___U3CreceiptU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CreceiptU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRODUCT_T3244410059_H
#ifndef IDS_T697119909_H
#define IDS_T697119909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.IDs
struct  IDs_t697119909  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.Purchasing.IDs::m_Dic
	Dictionary_2_t1632706988 * ___m_Dic_0;

public:
	inline static int32_t get_offset_of_m_Dic_0() { return static_cast<int32_t>(offsetof(IDs_t697119909, ___m_Dic_0)); }
	inline Dictionary_2_t1632706988 * get_m_Dic_0() const { return ___m_Dic_0; }
	inline Dictionary_2_t1632706988 ** get_address_of_m_Dic_0() { return &___m_Dic_0; }
	inline void set_m_Dic_0(Dictionary_2_t1632706988 * value)
	{
		___m_Dic_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Dic_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IDS_T697119909_H
#ifndef ABSTRACTPURCHASINGMODULE_T2882497868_H
#define ABSTRACTPURCHASINGMODULE_T2882497868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Extension.AbstractPurchasingModule
struct  AbstractPurchasingModule_t2882497868  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.Extension.IPurchasingBinder UnityEngine.Purchasing.Extension.AbstractPurchasingModule::m_Binder
	RuntimeObject* ___m_Binder_0;

public:
	inline static int32_t get_offset_of_m_Binder_0() { return static_cast<int32_t>(offsetof(AbstractPurchasingModule_t2882497868, ___m_Binder_0)); }
	inline RuntimeObject* get_m_Binder_0() const { return ___m_Binder_0; }
	inline RuntimeObject** get_address_of_m_Binder_0() { return &___m_Binder_0; }
	inline void set_m_Binder_0(RuntimeObject* value)
	{
		___m_Binder_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Binder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTPURCHASINGMODULE_T2882497868_H
#ifndef ABSTRACTSTORE_T285429589_H
#define ABSTRACTSTORE_T285429589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Extension.AbstractStore
struct  AbstractStore_t285429589  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTSTORE_T285429589_H
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
#ifndef ANALYTICSREPORTER_T2806096347_H
#define ANALYTICSREPORTER_T2806096347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.AnalyticsReporter
struct  AnalyticsReporter_t2806096347  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.IUnityAnalytics UnityEngine.Purchasing.AnalyticsReporter::m_Analytics
	RuntimeObject* ___m_Analytics_0;

public:
	inline static int32_t get_offset_of_m_Analytics_0() { return static_cast<int32_t>(offsetof(AnalyticsReporter_t2806096347, ___m_Analytics_0)); }
	inline RuntimeObject* get_m_Analytics_0() const { return ___m_Analytics_0; }
	inline RuntimeObject** get_address_of_m_Analytics_0() { return &___m_Analytics_0; }
	inline void set_m_Analytics_0(RuntimeObject* value)
	{
		___m_Analytics_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Analytics_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANALYTICSREPORTER_T2806096347_H
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
#ifndef PURCHASINGFACTORY_T4012818695_H
#define PURCHASINGFACTORY_T4012818695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.PurchasingFactory
struct  PurchasingFactory_t4012818695  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Purchasing.Extension.IStoreConfiguration> UnityEngine.Purchasing.PurchasingFactory::m_ConfigMap
	Dictionary_2_t2519197568 * ___m_ConfigMap_0;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Purchasing.IStoreExtension> UnityEngine.Purchasing.PurchasingFactory::m_ExtensionMap
	Dictionary_2_t3031246492 * ___m_ExtensionMap_1;
	// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.PurchasingFactory::m_Store
	RuntimeObject* ___m_Store_2;
	// UnityEngine.Purchasing.Extension.ICatalogProvider UnityEngine.Purchasing.PurchasingFactory::m_CatalogProvider
	RuntimeObject* ___m_CatalogProvider_3;
	// System.String UnityEngine.Purchasing.PurchasingFactory::<storeName>k__BackingField
	String_t* ___U3CstoreNameU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_m_ConfigMap_0() { return static_cast<int32_t>(offsetof(PurchasingFactory_t4012818695, ___m_ConfigMap_0)); }
	inline Dictionary_2_t2519197568 * get_m_ConfigMap_0() const { return ___m_ConfigMap_0; }
	inline Dictionary_2_t2519197568 ** get_address_of_m_ConfigMap_0() { return &___m_ConfigMap_0; }
	inline void set_m_ConfigMap_0(Dictionary_2_t2519197568 * value)
	{
		___m_ConfigMap_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ConfigMap_0), value);
	}

	inline static int32_t get_offset_of_m_ExtensionMap_1() { return static_cast<int32_t>(offsetof(PurchasingFactory_t4012818695, ___m_ExtensionMap_1)); }
	inline Dictionary_2_t3031246492 * get_m_ExtensionMap_1() const { return ___m_ExtensionMap_1; }
	inline Dictionary_2_t3031246492 ** get_address_of_m_ExtensionMap_1() { return &___m_ExtensionMap_1; }
	inline void set_m_ExtensionMap_1(Dictionary_2_t3031246492 * value)
	{
		___m_ExtensionMap_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ExtensionMap_1), value);
	}

	inline static int32_t get_offset_of_m_Store_2() { return static_cast<int32_t>(offsetof(PurchasingFactory_t4012818695, ___m_Store_2)); }
	inline RuntimeObject* get_m_Store_2() const { return ___m_Store_2; }
	inline RuntimeObject** get_address_of_m_Store_2() { return &___m_Store_2; }
	inline void set_m_Store_2(RuntimeObject* value)
	{
		___m_Store_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Store_2), value);
	}

	inline static int32_t get_offset_of_m_CatalogProvider_3() { return static_cast<int32_t>(offsetof(PurchasingFactory_t4012818695, ___m_CatalogProvider_3)); }
	inline RuntimeObject* get_m_CatalogProvider_3() const { return ___m_CatalogProvider_3; }
	inline RuntimeObject** get_address_of_m_CatalogProvider_3() { return &___m_CatalogProvider_3; }
	inline void set_m_CatalogProvider_3(RuntimeObject* value)
	{
		___m_CatalogProvider_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CatalogProvider_3), value);
	}

	inline static int32_t get_offset_of_U3CstoreNameU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PurchasingFactory_t4012818695, ___U3CstoreNameU3Ek__BackingField_4)); }
	inline String_t* get_U3CstoreNameU3Ek__BackingField_4() const { return ___U3CstoreNameU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CstoreNameU3Ek__BackingField_4() { return &___U3CstoreNameU3Ek__BackingField_4; }
	inline void set_U3CstoreNameU3Ek__BackingField_4(String_t* value)
	{
		___U3CstoreNameU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CstoreNameU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PURCHASINGFACTORY_T4012818695_H
#ifndef ENUMERATOR_T3514536804_H
#define ENUMERATOR_T3514536804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Purchasing.Product>
struct  Enumerator_t3514536804 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::hashset
	HashSet_1_t1809359533 * ___hashset_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::stamp
	int32_t ___stamp_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::current
	Product_t3244410059 * ___current_3;

public:
	inline static int32_t get_offset_of_hashset_0() { return static_cast<int32_t>(offsetof(Enumerator_t3514536804, ___hashset_0)); }
	inline HashSet_1_t1809359533 * get_hashset_0() const { return ___hashset_0; }
	inline HashSet_1_t1809359533 ** get_address_of_hashset_0() { return &___hashset_0; }
	inline void set_hashset_0(HashSet_1_t1809359533 * value)
	{
		___hashset_0 = value;
		Il2CppCodeGenWriteBarrier((&___hashset_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3514536804, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t3514536804, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3514536804, ___current_3)); }
	inline Product_t3244410059 * get_current_3() const { return ___current_3; }
	inline Product_t3244410059 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Product_t3244410059 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3514536804_H
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
#ifndef ENUMERATOR_T3350232909_H
#define ENUMERATOR_T3350232909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct  Enumerator_t3350232909 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::hashset
	HashSet_1_t1645055638 * ___hashset_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::stamp
	int32_t ___stamp_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_hashset_0() { return static_cast<int32_t>(offsetof(Enumerator_t3350232909, ___hashset_0)); }
	inline HashSet_1_t1645055638 * get_hashset_0() const { return ___hashset_0; }
	inline HashSet_1_t1645055638 ** get_address_of_hashset_0() { return &___hashset_0; }
	inline void set_hashset_0(HashSet_1_t1645055638 * value)
	{
		___hashset_0 = value;
		Il2CppCodeGenWriteBarrier((&___hashset_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3350232909, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t3350232909, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3350232909, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3350232909_H
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
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef ENUMERATOR_T4075331751_H
#define ENUMERATOR_T4075331751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.Extension.ProductDescription>
struct  Enumerator_t4075331751 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2186087874 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ProductDescription_t714013132 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t4075331751, ___l_0)); }
	inline List_1_t2186087874 * get_l_0() const { return ___l_0; }
	inline List_1_t2186087874 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t2186087874 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t4075331751, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t4075331751, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t4075331751, ___current_3)); }
	inline ProductDescription_t714013132 * get_current_3() const { return ___current_3; }
	inline ProductDescription_t714013132 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ProductDescription_t714013132 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T4075331751_H
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
#ifndef KEYVALUEPAIR_2_T4030379155_H
#define KEYVALUEPAIR_2_T4030379155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct  KeyValuePair_2_t4030379155 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4030379155, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4030379155, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T4030379155_H
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
#ifndef ENUMERATOR_T609853883_H
#define ENUMERATOR_T609853883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Purchasing.ProductDefinition>
struct  Enumerator_t609853883 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::hashset
	HashSet_1_t3199643908 * ___hashset_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::stamp
	int32_t ___stamp_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::current
	ProductDefinition_t339727138 * ___current_3;

public:
	inline static int32_t get_offset_of_hashset_0() { return static_cast<int32_t>(offsetof(Enumerator_t609853883, ___hashset_0)); }
	inline HashSet_1_t3199643908 * get_hashset_0() const { return ___hashset_0; }
	inline HashSet_1_t3199643908 ** get_address_of_hashset_0() { return &___hashset_0; }
	inline void set_hashset_0(HashSet_1_t3199643908 * value)
	{
		___hashset_0 = value;
		Il2CppCodeGenWriteBarrier((&___hashset_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t609853883, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t609853883, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t609853883, ___current_3)); }
	inline ProductDefinition_t339727138 * get_current_3() const { return ___current_3; }
	inline ProductDefinition_t339727138 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ProductDefinition_t339727138 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T609853883_H
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
#ifndef PURCHASEFAILUREREASON_T4243987912_H
#define PURCHASEFAILUREREASON_T4243987912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.PurchaseFailureReason
struct  PurchaseFailureReason_t4243987912 
{
public:
	// System.Int32 UnityEngine.Purchasing.PurchaseFailureReason::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PurchaseFailureReason_t4243987912, ___value___1)); }
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
#endif // PURCHASEFAILUREREASON_T4243987912_H
#ifndef ANALYTICSRESULT_T2273004240_H
#define ANALYTICSRESULT_T2273004240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsResult
struct  AnalyticsResult_t2273004240 
{
public:
	// System.Int32 UnityEngine.Analytics.AnalyticsResult::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AnalyticsResult_t2273004240, ___value___1)); }
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
#endif // ANALYTICSRESULT_T2273004240_H
#ifndef INITIALIZATIONFAILUREREASON_T2740567704_H
#define INITIALIZATIONFAILUREREASON_T2740567704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.InitializationFailureReason
struct  InitializationFailureReason_t2740567704 
{
public:
	// System.Int32 UnityEngine.Purchasing.InitializationFailureReason::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InitializationFailureReason_t2740567704, ___value___1)); }
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
#endif // INITIALIZATIONFAILUREREASON_T2740567704_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
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
#endif // BINDINGFLAGS_T2721792723_H
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
#ifndef PRODUCTMETADATA_T3417118930_H
#define PRODUCTMETADATA_T3417118930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.ProductMetadata
struct  ProductMetadata_t3417118930  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.ProductMetadata::<localizedPriceString>k__BackingField
	String_t* ___U3ClocalizedPriceStringU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.ProductMetadata::<localizedTitle>k__BackingField
	String_t* ___U3ClocalizedTitleU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.ProductMetadata::<localizedDescription>k__BackingField
	String_t* ___U3ClocalizedDescriptionU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.ProductMetadata::<isoCurrencyCode>k__BackingField
	String_t* ___U3CisoCurrencyCodeU3Ek__BackingField_3;
	// System.Decimal UnityEngine.Purchasing.ProductMetadata::<localizedPrice>k__BackingField
	Decimal_t2948259380  ___U3ClocalizedPriceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3ClocalizedPriceStringU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProductMetadata_t3417118930, ___U3ClocalizedPriceStringU3Ek__BackingField_0)); }
	inline String_t* get_U3ClocalizedPriceStringU3Ek__BackingField_0() const { return ___U3ClocalizedPriceStringU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3ClocalizedPriceStringU3Ek__BackingField_0() { return &___U3ClocalizedPriceStringU3Ek__BackingField_0; }
	inline void set_U3ClocalizedPriceStringU3Ek__BackingField_0(String_t* value)
	{
		___U3ClocalizedPriceStringU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClocalizedPriceStringU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3ClocalizedTitleU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ProductMetadata_t3417118930, ___U3ClocalizedTitleU3Ek__BackingField_1)); }
	inline String_t* get_U3ClocalizedTitleU3Ek__BackingField_1() const { return ___U3ClocalizedTitleU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3ClocalizedTitleU3Ek__BackingField_1() { return &___U3ClocalizedTitleU3Ek__BackingField_1; }
	inline void set_U3ClocalizedTitleU3Ek__BackingField_1(String_t* value)
	{
		___U3ClocalizedTitleU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClocalizedTitleU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3ClocalizedDescriptionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProductMetadata_t3417118930, ___U3ClocalizedDescriptionU3Ek__BackingField_2)); }
	inline String_t* get_U3ClocalizedDescriptionU3Ek__BackingField_2() const { return ___U3ClocalizedDescriptionU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3ClocalizedDescriptionU3Ek__BackingField_2() { return &___U3ClocalizedDescriptionU3Ek__BackingField_2; }
	inline void set_U3ClocalizedDescriptionU3Ek__BackingField_2(String_t* value)
	{
		___U3ClocalizedDescriptionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClocalizedDescriptionU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CisoCurrencyCodeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ProductMetadata_t3417118930, ___U3CisoCurrencyCodeU3Ek__BackingField_3)); }
	inline String_t* get_U3CisoCurrencyCodeU3Ek__BackingField_3() const { return ___U3CisoCurrencyCodeU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CisoCurrencyCodeU3Ek__BackingField_3() { return &___U3CisoCurrencyCodeU3Ek__BackingField_3; }
	inline void set_U3CisoCurrencyCodeU3Ek__BackingField_3(String_t* value)
	{
		___U3CisoCurrencyCodeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CisoCurrencyCodeU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3ClocalizedPriceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ProductMetadata_t3417118930, ___U3ClocalizedPriceU3Ek__BackingField_4)); }
	inline Decimal_t2948259380  get_U3ClocalizedPriceU3Ek__BackingField_4() const { return ___U3ClocalizedPriceU3Ek__BackingField_4; }
	inline Decimal_t2948259380 * get_address_of_U3ClocalizedPriceU3Ek__BackingField_4() { return &___U3ClocalizedPriceU3Ek__BackingField_4; }
	inline void set_U3ClocalizedPriceU3Ek__BackingField_4(Decimal_t2948259380  value)
	{
		___U3ClocalizedPriceU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRODUCTMETADATA_T3417118930_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef PURCHASEPROCESSINGRESULT_T2219688332_H
#define PURCHASEPROCESSINGRESULT_T2219688332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.PurchaseProcessingResult
struct  PurchaseProcessingResult_t2219688332 
{
public:
	// System.Int32 UnityEngine.Purchasing.PurchaseProcessingResult::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PurchaseProcessingResult_t2219688332, ___value___1)); }
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
#endif // PURCHASEPROCESSINGRESULT_T2219688332_H
#ifndef ENUMERATOR_T3586889763_H
#define ENUMERATOR_T3586889763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct  Enumerator_t3586889763 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t1632706988 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t4030379155  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t3586889763, ___dictionary_0)); }
	inline Dictionary_2_t1632706988 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1632706988 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1632706988 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3586889763, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t3586889763, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3586889763, ___current_3)); }
	inline KeyValuePair_2_t4030379155  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t4030379155 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t4030379155  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3586889763_H
#ifndef ENUMERATOR_T2086727927_H
#define ENUMERATOR_T2086727927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct  Enumerator_t2086727927 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t132545152 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t2530217319  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___dictionary_0)); }
	inline Dictionary_2_t132545152 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t132545152 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t132545152 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___current_3)); }
	inline KeyValuePair_2_t2530217319  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2530217319 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2530217319  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2086727927_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef PAYOUTTYPE_T2016707446_H
#define PAYOUTTYPE_T2016707446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.PayoutType
struct  PayoutType_t2016707446 
{
public:
	// System.Int32 UnityEngine.Purchasing.PayoutType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PayoutType_t2016707446, ___value___1)); }
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
#endif // PAYOUTTYPE_T2016707446_H
#ifndef PRODUCTTYPE_T1868976581_H
#define PRODUCTTYPE_T1868976581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.ProductType
struct  ProductType_t1868976581 
{
public:
	// System.Int32 UnityEngine.Purchasing.ProductType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ProductType_t1868976581, ___value___1)); }
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
#endif // PRODUCTTYPE_T1868976581_H
#ifndef FILEATTRIBUTES_T3417205536_H
#define FILEATTRIBUTES_T3417205536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAttributes
struct  FileAttributes_t3417205536 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAttributes_t3417205536, ___value___1)); }
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
#endif // FILEATTRIBUTES_T3417205536_H
#ifndef LOGTYPE_T73765434_H
#define LOGTYPE_T73765434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t73765434 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogType_t73765434, ___value___1)); }
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
#endif // LOGTYPE_T73765434_H
#ifndef PRODUCTDESCRIPTION_T714013132_H
#define PRODUCTDESCRIPTION_T714013132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Extension.ProductDescription
struct  ProductDescription_t714013132  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Extension.ProductDescription::<storeSpecificId>k__BackingField
	String_t* ___U3CstoreSpecificIdU3Ek__BackingField_0;
	// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.Extension.ProductDescription::type
	int32_t ___type_1;
	// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Extension.ProductDescription::<metadata>k__BackingField
	ProductMetadata_t3417118930 * ___U3CmetadataU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Extension.ProductDescription::<receipt>k__BackingField
	String_t* ___U3CreceiptU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Extension.ProductDescription::<transactionId>k__BackingField
	String_t* ___U3CtransactionIdU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CstoreSpecificIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProductDescription_t714013132, ___U3CstoreSpecificIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CstoreSpecificIdU3Ek__BackingField_0() const { return ___U3CstoreSpecificIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CstoreSpecificIdU3Ek__BackingField_0() { return &___U3CstoreSpecificIdU3Ek__BackingField_0; }
	inline void set_U3CstoreSpecificIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CstoreSpecificIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CstoreSpecificIdU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ProductDescription_t714013132, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_U3CmetadataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProductDescription_t714013132, ___U3CmetadataU3Ek__BackingField_2)); }
	inline ProductMetadata_t3417118930 * get_U3CmetadataU3Ek__BackingField_2() const { return ___U3CmetadataU3Ek__BackingField_2; }
	inline ProductMetadata_t3417118930 ** get_address_of_U3CmetadataU3Ek__BackingField_2() { return &___U3CmetadataU3Ek__BackingField_2; }
	inline void set_U3CmetadataU3Ek__BackingField_2(ProductMetadata_t3417118930 * value)
	{
		___U3CmetadataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmetadataU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CreceiptU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ProductDescription_t714013132, ___U3CreceiptU3Ek__BackingField_3)); }
	inline String_t* get_U3CreceiptU3Ek__BackingField_3() const { return ___U3CreceiptU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CreceiptU3Ek__BackingField_3() { return &___U3CreceiptU3Ek__BackingField_3; }
	inline void set_U3CreceiptU3Ek__BackingField_3(String_t* value)
	{
		___U3CreceiptU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CreceiptU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CtransactionIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ProductDescription_t714013132, ___U3CtransactionIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CtransactionIdU3Ek__BackingField_4() const { return ___U3CtransactionIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CtransactionIdU3Ek__BackingField_4() { return &___U3CtransactionIdU3Ek__BackingField_4; }
	inline void set_U3CtransactionIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CtransactionIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtransactionIdU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRODUCTDESCRIPTION_T714013132_H
#ifndef MONOIOSTAT_T592533987_H
#define MONOIOSTAT_T592533987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MonoIOStat
struct  MonoIOStat_t592533987 
{
public:
	// System.String System.IO.MonoIOStat::Name
	String_t* ___Name_0;
	// System.IO.FileAttributes System.IO.MonoIOStat::Attributes
	int32_t ___Attributes_1;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_2;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_3;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_4;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_5;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Attributes_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___Attributes_1)); }
	inline int32_t get_Attributes_1() const { return ___Attributes_1; }
	inline int32_t* get_address_of_Attributes_1() { return &___Attributes_1; }
	inline void set_Attributes_1(int32_t value)
	{
		___Attributes_1 = value;
	}

	inline static int32_t get_offset_of_Length_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___Length_2)); }
	inline int64_t get_Length_2() const { return ___Length_2; }
	inline int64_t* get_address_of_Length_2() { return &___Length_2; }
	inline void set_Length_2(int64_t value)
	{
		___Length_2 = value;
	}

	inline static int32_t get_offset_of_CreationTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___CreationTime_3)); }
	inline int64_t get_CreationTime_3() const { return ___CreationTime_3; }
	inline int64_t* get_address_of_CreationTime_3() { return &___CreationTime_3; }
	inline void set_CreationTime_3(int64_t value)
	{
		___CreationTime_3 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___LastAccessTime_4)); }
	inline int64_t get_LastAccessTime_4() const { return ___LastAccessTime_4; }
	inline int64_t* get_address_of_LastAccessTime_4() { return &___LastAccessTime_4; }
	inline void set_LastAccessTime_4(int64_t value)
	{
		___LastAccessTime_4 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_5() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___LastWriteTime_5)); }
	inline int64_t get_LastWriteTime_5() const { return ___LastWriteTime_5; }
	inline int64_t* get_address_of_LastWriteTime_5() { return &___LastWriteTime_5; }
	inline void set_LastWriteTime_5(int64_t value)
	{
		___LastWriteTime_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.IO.MonoIOStat
struct MonoIOStat_t592533987_marshaled_pinvoke
{
	char* ___Name_0;
	int32_t ___Attributes_1;
	int64_t ___Length_2;
	int64_t ___CreationTime_3;
	int64_t ___LastAccessTime_4;
	int64_t ___LastWriteTime_5;
};
// Native definition for COM marshalling of System.IO.MonoIOStat
struct MonoIOStat_t592533987_marshaled_com
{
	Il2CppChar* ___Name_0;
	int32_t ___Attributes_1;
	int64_t ___Length_2;
	int64_t ___CreationTime_3;
	int64_t ___LastAccessTime_4;
	int64_t ___LastWriteTime_5;
};
#endif // MONOIOSTAT_T592533987_H
#ifndef PAYOUTDEFINITION_T3571684064_H
#define PAYOUTDEFINITION_T3571684064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.PayoutDefinition
struct  PayoutDefinition_t3571684064  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.PayoutType UnityEngine.Purchasing.PayoutDefinition::m_Type
	int32_t ___m_Type_0;
	// System.String UnityEngine.Purchasing.PayoutDefinition::m_Subtype
	String_t* ___m_Subtype_1;
	// System.Double UnityEngine.Purchasing.PayoutDefinition::m_Quantity
	double ___m_Quantity_2;
	// System.String UnityEngine.Purchasing.PayoutDefinition::m_Data
	String_t* ___m_Data_3;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(PayoutDefinition_t3571684064, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_Subtype_1() { return static_cast<int32_t>(offsetof(PayoutDefinition_t3571684064, ___m_Subtype_1)); }
	inline String_t* get_m_Subtype_1() const { return ___m_Subtype_1; }
	inline String_t** get_address_of_m_Subtype_1() { return &___m_Subtype_1; }
	inline void set_m_Subtype_1(String_t* value)
	{
		___m_Subtype_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Subtype_1), value);
	}

	inline static int32_t get_offset_of_m_Quantity_2() { return static_cast<int32_t>(offsetof(PayoutDefinition_t3571684064, ___m_Quantity_2)); }
	inline double get_m_Quantity_2() const { return ___m_Quantity_2; }
	inline double* get_address_of_m_Quantity_2() { return &___m_Quantity_2; }
	inline void set_m_Quantity_2(double value)
	{
		___m_Quantity_2 = value;
	}

	inline static int32_t get_offset_of_m_Data_3() { return static_cast<int32_t>(offsetof(PayoutDefinition_t3571684064, ___m_Data_3)); }
	inline String_t* get_m_Data_3() const { return ___m_Data_3; }
	inline String_t** get_address_of_m_Data_3() { return &___m_Data_3; }
	inline void set_m_Data_3(String_t* value)
	{
		___m_Data_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Data_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PAYOUTDEFINITION_T3571684064_H
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
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef PRODUCTDEFINITION_T339727138_H
#define PRODUCTDEFINITION_T339727138_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.ProductDefinition
struct  ProductDefinition_t339727138  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.ProductDefinition::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.ProductDefinition::<storeSpecificId>k__BackingField
	String_t* ___U3CstoreSpecificIdU3Ek__BackingField_1;
	// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.ProductDefinition::<type>k__BackingField
	int32_t ___U3CtypeU3Ek__BackingField_2;
	// System.Boolean UnityEngine.Purchasing.ProductDefinition::<enabled>k__BackingField
	bool ___U3CenabledU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition> UnityEngine.Purchasing.ProductDefinition::m_Payouts
	List_1_t748791510 * ___m_Payouts_4;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProductDefinition_t339727138, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CidU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CstoreSpecificIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ProductDefinition_t339727138, ___U3CstoreSpecificIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CstoreSpecificIdU3Ek__BackingField_1() const { return ___U3CstoreSpecificIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CstoreSpecificIdU3Ek__BackingField_1() { return &___U3CstoreSpecificIdU3Ek__BackingField_1; }
	inline void set_U3CstoreSpecificIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CstoreSpecificIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CstoreSpecificIdU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProductDefinition_t339727138, ___U3CtypeU3Ek__BackingField_2)); }
	inline int32_t get_U3CtypeU3Ek__BackingField_2() const { return ___U3CtypeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CtypeU3Ek__BackingField_2() { return &___U3CtypeU3Ek__BackingField_2; }
	inline void set_U3CtypeU3Ek__BackingField_2(int32_t value)
	{
		___U3CtypeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CenabledU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ProductDefinition_t339727138, ___U3CenabledU3Ek__BackingField_3)); }
	inline bool get_U3CenabledU3Ek__BackingField_3() const { return ___U3CenabledU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CenabledU3Ek__BackingField_3() { return &___U3CenabledU3Ek__BackingField_3; }
	inline void set_U3CenabledU3Ek__BackingField_3(bool value)
	{
		___U3CenabledU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_m_Payouts_4() { return static_cast<int32_t>(offsetof(ProductDefinition_t339727138, ___m_Payouts_4)); }
	inline List_1_t748791510 * get_m_Payouts_4() const { return ___m_Payouts_4; }
	inline List_1_t748791510 ** get_address_of_m_Payouts_4() { return &___m_Payouts_4; }
	inline void set_m_Payouts_4(List_1_t748791510 * value)
	{
		___m_Payouts_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Payouts_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRODUCTDEFINITION_T339727138_H
#ifndef PURCHASEFAILUREDESCRIPTION_T437632294_H
#define PURCHASEFAILUREDESCRIPTION_T437632294_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Extension.PurchaseFailureDescription
struct  PurchaseFailureDescription_t437632294  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Extension.PurchaseFailureDescription::<productId>k__BackingField
	String_t* ___U3CproductIdU3Ek__BackingField_0;
	// UnityEngine.Purchasing.PurchaseFailureReason UnityEngine.Purchasing.Extension.PurchaseFailureDescription::<reason>k__BackingField
	int32_t ___U3CreasonU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.Extension.PurchaseFailureDescription::<message>k__BackingField
	String_t* ___U3CmessageU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CproductIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PurchaseFailureDescription_t437632294, ___U3CproductIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CproductIdU3Ek__BackingField_0() const { return ___U3CproductIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CproductIdU3Ek__BackingField_0() { return &___U3CproductIdU3Ek__BackingField_0; }
	inline void set_U3CproductIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CproductIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CproductIdU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CreasonU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PurchaseFailureDescription_t437632294, ___U3CreasonU3Ek__BackingField_1)); }
	inline int32_t get_U3CreasonU3Ek__BackingField_1() const { return ___U3CreasonU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CreasonU3Ek__BackingField_1() { return &___U3CreasonU3Ek__BackingField_1; }
	inline void set_U3CreasonU3Ek__BackingField_1(int32_t value)
	{
		___U3CreasonU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CmessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PurchaseFailureDescription_t437632294, ___U3CmessageU3Ek__BackingField_2)); }
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
#endif // PURCHASEFAILUREDESCRIPTION_T437632294_H
#ifndef ACTION_1_T2913035299_H
#define ACTION_1_T2913035299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.Purchasing.InitializationFailureReason>
struct  Action_1_t2913035299  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T2913035299_H
#ifndef ACTION_1_T3372111503_H
#define ACTION_1_T3372111503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>
struct  Action_1_t3372111503  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3372111503_H
#ifndef FILESYSTEMINFO_T3745885336_H
#define FILESYSTEMINFO_T3745885336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileSystemInfo
struct  FileSystemInfo_t3745885336  : public MarshalByRefObject_t2760389100
{
public:
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_1;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_2;
	// System.IO.MonoIOStat System.IO.FileSystemInfo::stat
	MonoIOStat_t592533987  ___stat_3;
	// System.Boolean System.IO.FileSystemInfo::valid
	bool ___valid_4;

public:
	inline static int32_t get_offset_of_FullPath_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___FullPath_1)); }
	inline String_t* get_FullPath_1() const { return ___FullPath_1; }
	inline String_t** get_address_of_FullPath_1() { return &___FullPath_1; }
	inline void set_FullPath_1(String_t* value)
	{
		___FullPath_1 = value;
		Il2CppCodeGenWriteBarrier((&___FullPath_1), value);
	}

	inline static int32_t get_offset_of_OriginalPath_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___OriginalPath_2)); }
	inline String_t* get_OriginalPath_2() const { return ___OriginalPath_2; }
	inline String_t** get_address_of_OriginalPath_2() { return &___OriginalPath_2; }
	inline void set_OriginalPath_2(String_t* value)
	{
		___OriginalPath_2 = value;
		Il2CppCodeGenWriteBarrier((&___OriginalPath_2), value);
	}

	inline static int32_t get_offset_of_stat_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___stat_3)); }
	inline MonoIOStat_t592533987  get_stat_3() const { return ___stat_3; }
	inline MonoIOStat_t592533987 * get_address_of_stat_3() { return &___stat_3; }
	inline void set_stat_3(MonoIOStat_t592533987  value)
	{
		___stat_3 = value;
	}

	inline static int32_t get_offset_of_valid_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___valid_4)); }
	inline bool get_valid_4() const { return ___valid_4; }
	inline bool* get_address_of_valid_4() { return &___valid_4; }
	inline void set_valid_4(bool value)
	{
		___valid_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESYSTEMINFO_T3745885336_H
#ifndef ACTION_1_T3544579098_H
#define ACTION_1_T3544579098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>>
struct  Action_1_t3544579098  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3544579098_H
#ifndef FUNC_2_T1313482816_H
#define FUNC_2_T1313482816_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<UnityEngine.Purchasing.Product,System.String>
struct  Func_2_t1313482816  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T1313482816_H
#ifndef FUNC_2_T2408407863_H
#define FUNC_2_T2408407863_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Product>
struct  Func_2_t2408407863  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T2408407863_H
#ifndef ACTION_T1264377477_H
#define ACTION_T1264377477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t1264377477  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T1264377477_H
#ifndef DIRECTORYINFO_T35957480_H
#define DIRECTORYINFO_T35957480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.DirectoryInfo
struct  DirectoryInfo_t35957480  : public FileSystemInfo_t3745885336
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_5;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_6;

public:
	inline static int32_t get_offset_of_current_5() { return static_cast<int32_t>(offsetof(DirectoryInfo_t35957480, ___current_5)); }
	inline String_t* get_current_5() const { return ___current_5; }
	inline String_t** get_address_of_current_5() { return &___current_5; }
	inline void set_current_5(String_t* value)
	{
		___current_5 = value;
		Il2CppCodeGenWriteBarrier((&___current_5), value);
	}

	inline static int32_t get_offset_of_parent_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t35957480, ___parent_6)); }
	inline String_t* get_parent_6() const { return ___parent_6; }
	inline String_t** get_address_of_parent_6() { return &___parent_6; }
	inline void set_parent_6(String_t* value)
	{
		___parent_6 = value;
		Il2CppCodeGenWriteBarrier((&___parent_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORYINFO_T35957480_H
// UnityEngine.Purchasing.Extension.IPurchasingModule[]
struct IPurchasingModuleU5BU5D_t3784316456  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
// UnityEngine.Purchasing.Product[]
struct ProductU5BU5D_t2942947242  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Product_t3244410059 * m_Items[1];

public:
	inline Product_t3244410059 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Product_t3244410059 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Product_t3244410059 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Product_t3244410059 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Product_t3244410059 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Product_t3244410059 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
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


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m2387223709_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C"  void HashSet_1__ctor_m4231804131_gshared (HashSet_1_t1645055638 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
extern "C"  bool HashSet_1_Add_m1971460364_gshared (HashSet_1_t1645055638 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C"  Enumerator_t2086727927  Dictionary_2_GetEnumerator_m3278257048_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C"  void Dictionary_2_set_Item_m3474379962_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C"  bool Dictionary_2_ContainsKey_m2278349286_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C"  RuntimeObject * Dictionary_2_get_Item_m2714930061_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::UnionWith(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void HashSet_1_UnionWith_m3218834515_gshared (HashSet_1_t1645055638 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  ObjectU5BU5D_t2843939325* Enumerable_ToArray_TisRuntimeObject_m1238976823_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m348566106_gshared (Func_2_t2447130374 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<!!1,!!0> System.Linq.Enumerable::ToDictionary<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C"  Dictionary_2_t132545152 * Enumerable_ToDictionary_TisRuntimeObject_TisRuntimeObject_m887171814_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t2447130374 * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
extern "C"  bool Dictionary_2_TryGetValue_m3280774074_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C"  void List_1_Clear_m3697625829_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void List_1_AddRange_m3709462088_gshared (List_1_t257213610 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Purchasing.InitializationFailureReason>::Invoke(!0)
extern "C"  void Action_1_Invoke_m4084811606_gshared (Action_1_t2913035299 * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C"  int32_t HashSet_1_get_Count_m542532379_gshared (HashSet_1_t1645055638 * __this, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t3350232909  HashSet_1_GetEnumerator_m3346268098_gshared (HashSet_1_t1645055638 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m4213278602_gshared (Enumerator_t3350232909 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m3714175425_gshared (Enumerator_t3350232909 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m1204547613_gshared (Enumerator_t3350232909 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C"  RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m1369720275_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t2447130374 * p1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  List_1_t257213610 * Enumerable_ToList_TisRuntimeObject_m3722849500_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::.ctor(System.Collections.Generic.IList`1<!0>)
extern "C"  void ReadOnlyCollection_1__ctor_m3900376080_gshared (ReadOnlyCollection_1_t4292682451 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
extern "C"  void Action_1_Invoke_m2461023210_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m118522912_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void HashSet_1__ctor_m1748776861_gshared (HashSet_1_t1645055638 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(!0)
extern "C"  bool HashSet_1_Remove_m709044238_gshared (HashSet_1_t1645055638 * __this, RuntimeObject * p0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Product::get_metadata()
extern "C"  ProductMetadata_t3417118930 * Product_get_metadata_m3202120155 (Product_t3244410059 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.ProductMetadata::get_isoCurrencyCode()
extern "C"  String_t* ProductMetadata_get_isoCurrencyCode_m1144927692 (ProductMetadata_t3417118930 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.Product::get_definition()
extern "C"  ProductDefinition_t339727138 * Product_get_definition_m3366103520 (Product_t3244410059 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.ProductDefinition::get_storeSpecificId()
extern "C"  String_t* ProductDefinition_get_storeSpecificId_m2520532185 (ProductDefinition_t339727138 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Decimal UnityEngine.Purchasing.ProductMetadata::get_localizedPrice()
extern "C"  Decimal_t2948259380  ProductMetadata_get_localizedPrice_m3688706107 (ProductMetadata_t3417118930 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.Product::get_receipt()
extern "C"  String_t* Product_get_receipt_m117487645 (Product_t3244410059 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
#define Dictionary_2__ctor_m2606011945(__this, method) ((  void (*) (Dictionary_2_t2865362463 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1)
#define Dictionary_2_Add_m837785969(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2865362463 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>::.ctor()
#define HashSet_1__ctor_m3206103540(__this, method) ((  void (*) (HashSet_1_t3199643908 *, const RuntimeMethod*))HashSet_1__ctor_m4231804131_gshared)(__this, method)
// System.Void UnityEngine.Purchasing.PurchasingFactory::.ctor(UnityEngine.Purchasing.Extension.IPurchasingModule,UnityEngine.Purchasing.Extension.IPurchasingModule[])
extern "C"  void PurchasingFactory__ctor_m2746997968 (PurchasingFactory_t4012818695 * __this, RuntimeObject* ___first0, IPurchasingModuleU5BU5D_t3784316456* ___remainingModules1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.ConfigurationBuilder::.ctor(UnityEngine.Purchasing.PurchasingFactory)
extern "C"  void ConfigurationBuilder__ctor_m601088221 (ConfigurationBuilder_t1618671084 * __this, PurchasingFactory_t4012818695 * ___factory0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::AddProduct(System.String,UnityEngine.Purchasing.ProductType,UnityEngine.Purchasing.IDs)
extern "C"  ConfigurationBuilder_t1618671084 * ConfigurationBuilder_AddProduct_m3410369666 (ConfigurationBuilder_t1618671084 * __this, String_t* ___id0, int32_t ___type1, IDs_t697119909 * ___storeIDs2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::AddProduct(System.String,UnityEngine.Purchasing.ProductType,UnityEngine.Purchasing.IDs,System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.PayoutDefinition>)
extern "C"  ConfigurationBuilder_t1618671084 * ConfigurationBuilder_AddProduct_m2562156830 (ConfigurationBuilder_t1618671084 * __this, String_t* ___id0, int32_t ___type1, IDs_t697119909 * ___storeIDs2, RuntimeObject* ___payouts3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.PurchasingFactory UnityEngine.Purchasing.ConfigurationBuilder::get_factory()
extern "C"  PurchasingFactory_t4012818695 * ConfigurationBuilder_get_factory_m4264938587 (ConfigurationBuilder_t1618671084 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.PurchasingFactory::get_storeName()
extern "C"  String_t* PurchasingFactory_get_storeName_m2469232669 (PurchasingFactory_t4012818695 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.IDs::SpecificIDForStore(System.String,System.String)
extern "C"  String_t* IDs_SpecificIDForStore_m4239003019 (IDs_t697119909 * __this, String_t* ___store0, String_t* ___defaultValue1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.ProductDefinition::.ctor(System.String,System.String,UnityEngine.Purchasing.ProductType)
extern "C"  void ProductDefinition__ctor_m2889571019 (ProductDefinition_t339727138 * __this, String_t* ___id0, String_t* ___storeSpecificId1, int32_t ___type2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.ProductDefinition::SetPayouts(System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.PayoutDefinition>)
extern "C"  void ProductDefinition_SetPayouts_m580635826 (ProductDefinition_t339727138 * __this, RuntimeObject* ___newPayouts0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>::Add(!0)
#define HashSet_1_Add_m2871625864(__this, p0, method) ((  bool (*) (HashSet_1_t3199643908 *, ProductDefinition_t339727138 *, const RuntimeMethod*))HashSet_1_Add_m1971460364_gshared)(__this, p0, method)
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::set_storeSpecificId(System.String)
extern "C"  void ProductDescription_set_storeSpecificId_m3599465816 (ProductDescription_t714013132 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::set_metadata(UnityEngine.Purchasing.ProductMetadata)
extern "C"  void ProductDescription_set_metadata_m226775712 (ProductDescription_t714013132 * __this, ProductMetadata_t3417118930 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::set_receipt(System.String)
extern "C"  void ProductDescription_set_receipt_m3359025263 (ProductDescription_t714013132 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::set_transactionId(System.String)
extern "C"  void ProductDescription_set_transactionId_m3435239027 (ProductDescription_t714013132 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::.ctor(System.String,UnityEngine.Purchasing.ProductMetadata,System.String,System.String)
extern "C"  void ProductDescription__ctor_m2003094149 (ProductDescription_t714013132 * __this, String_t* ___id0, ProductMetadata_t3417118930 * ___metadata1, String_t* ___receipt2, String_t* ___transactionId3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.PurchaseFailureDescription::set_productId(System.String)
extern "C"  void PurchaseFailureDescription_set_productId_m1922537378 (PurchaseFailureDescription_t437632294 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.PurchaseFailureDescription::set_reason(UnityEngine.Purchasing.PurchaseFailureReason)
extern "C"  void PurchaseFailureDescription_set_reason_m83116780 (PurchaseFailureDescription_t437632294 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.PurchaseFailureDescription::set_message(System.String)
extern "C"  void PurchaseFailureDescription_set_message_m3224327965 (PurchaseFailureDescription_t437632294 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
#define Dictionary_2__ctor_m3302800229(__this, method) ((  void (*) (Dictionary_2_t1632706988 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m1883005577(__this, method) ((  Enumerator_t3586889763  (*) (Dictionary_2_t1632706988 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m3278257048_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1)
#define Dictionary_2_set_Item_m187286838(__this, p0, p1, method) ((  void (*) (Dictionary_2_t1632706988 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m131312521(__this, p0, method) ((  bool (*) (Dictionary_2_t1632706988 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// !1 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(!0)
#define Dictionary_2_get_Item_m2543911734(__this, p0, method) ((  String_t* (*) (Dictionary_2_t1632706988 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
extern "C"  bool Enum_IsDefined_m1442314461 (RuntimeObject * __this /* static, unused */, Type_t * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::Parse(System.Type,System.String)
extern "C"  RuntimeObject * Enum_Parse_m1871331077 (RuntimeObject * __this /* static, unused */, Type_t * p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PayoutDefinition::set_type(UnityEngine.Purchasing.PayoutType)
extern "C"  void PayoutDefinition_set_type_m3987409729 (PayoutDefinition_t3571684064 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PayoutDefinition::set_subtype(System.String)
extern "C"  void PayoutDefinition_set_subtype_m4245100266 (PayoutDefinition_t3571684064 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PayoutDefinition::set_quantity(System.Double)
extern "C"  void PayoutDefinition_set_quantity_m3731254436 (PayoutDefinition_t3571684064 * __this, double ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PayoutDefinition::set_data(System.String)
extern "C"  void PayoutDefinition_set_data_m3710665706 (PayoutDefinition_t3571684064 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object)
extern "C"  String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C"  void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Product::set_definition(UnityEngine.Purchasing.ProductDefinition)
extern "C"  void Product_set_definition_m2628710370 (Product_t3244410059 * __this, ProductDefinition_t339727138 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Product::set_metadata(UnityEngine.Purchasing.ProductMetadata)
extern "C"  void Product_set_metadata_m686315527 (Product_t3244410059 * __this, ProductMetadata_t3417118930 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Product::set_receipt(System.String)
extern "C"  void Product_set_receipt_m3483172683 (Product_t3244410059 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Product::.ctor(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.ProductMetadata,System.String)
extern "C"  void Product__ctor_m1856965277 (Product_t3244410059 * __this, ProductDefinition_t339727138 * ___definition0, ProductMetadata_t3417118930 * ___metadata1, String_t* ___receipt2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C"  bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product>::.ctor()
#define HashSet_1__ctor_m1526724929(__this, method) ((  void (*) (HashSet_1_t1809359533 *, const RuntimeMethod*))HashSet_1__ctor_m4231804131_gshared)(__this, method)
// System.Void UnityEngine.Purchasing.ProductCollection::AddProducts(System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Product>)
extern "C"  void ProductCollection_AddProducts_m3516972499 (ProductCollection_t2671956229 * __this, RuntimeObject* ___products0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product>::UnionWith(System.Collections.Generic.IEnumerable`1<!0>)
#define HashSet_1_UnionWith_m2629278899(__this, p0, method) ((  void (*) (HashSet_1_t1809359533 *, RuntimeObject*, const RuntimeMethod*))HashSet_1_UnionWith_m3218834515_gshared)(__this, p0, method)
// !!0[] System.Linq.Enumerable::ToArray<UnityEngine.Purchasing.Product>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToArray_TisProduct_t3244410059_m1600507615(__this /* static, unused */, p0, method) ((  ProductU5BU5D_t2942947242* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m1238976823_gshared)(__this /* static, unused */, p0, method)
// System.Void System.Func`2<UnityEngine.Purchasing.Product,System.String>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m70153528(__this, p0, p1, method) ((  void (*) (Func_2_t1313482816 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m348566106_gshared)(__this, p0, p1, method)
// System.Collections.Generic.Dictionary`2<!!1,!!0> System.Linq.Enumerable::ToDictionary<UnityEngine.Purchasing.Product,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
#define Enumerable_ToDictionary_TisProduct_t3244410059_TisString_t_m1569553407(__this /* static, unused */, p0, p1, method) ((  Dictionary_2_t3029666358 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t1313482816 *, const RuntimeMethod*))Enumerable_ToDictionary_TisRuntimeObject_TisRuntimeObject_m887171814_gshared)(__this /* static, unused */, p0, p1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Purchasing.Product>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m3839205334(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t3029666358 *, String_t*, Product_t3244410059 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3280774074_gshared)(__this, p0, p1, method)
// System.String UnityEngine.Purchasing.ProductDefinition::get_id()
extern "C"  String_t* ProductDefinition_get_id_m1593385231 (ProductDefinition_t339727138 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.ProductDefinition::.ctor(System.String,System.String,UnityEngine.Purchasing.ProductType,System.Boolean)
extern "C"  void ProductDefinition__ctor_m2244438016 (ProductDefinition_t339727138 * __this, String_t* ___id0, String_t* ___storeSpecificId1, int32_t ___type2, bool ___enabled3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.ProductDefinition::.ctor(System.String,System.String,UnityEngine.Purchasing.ProductType,System.Boolean,System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.PayoutDefinition>)
extern "C"  void ProductDefinition__ctor_m3267495726 (ProductDefinition_t339727138 * __this, String_t* ___id0, String_t* ___storeSpecificId1, int32_t ___type2, bool ___enabled3, RuntimeObject* ___payouts4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>::.ctor()
#define List_1__ctor_m2305681321(__this, method) ((  void (*) (List_1_t748791510 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void UnityEngine.Purchasing.ProductDefinition::set_id(System.String)
extern "C"  void ProductDefinition_set_id_m3726047248 (ProductDefinition_t339727138 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.ProductDefinition::set_storeSpecificId(System.String)
extern "C"  void ProductDefinition_set_storeSpecificId_m3168192593 (ProductDefinition_t339727138 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.ProductDefinition::set_type(UnityEngine.Purchasing.ProductType)
extern "C"  void ProductDefinition_set_type_m1878988275 (ProductDefinition_t339727138 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.ProductDefinition::set_enabled(System.Boolean)
extern "C"  void ProductDefinition_set_enabled_m80478909 (ProductDefinition_t339727138 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>::Clear()
#define List_1_Clear_m3858397092(__this, method) ((  void (*) (List_1_t748791510 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1_AddRange_m2240270450(__this, p0, method) ((  void (*) (List_1_t748791510 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m3709462088_gshared)(__this, p0, method)
// System.Void UnityEngine.Purchasing.ProductMetadata::set_localizedPriceString(System.String)
extern "C"  void ProductMetadata_set_localizedPriceString_m1610096054 (ProductMetadata_t3417118930 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.ProductMetadata::set_localizedTitle(System.String)
extern "C"  void ProductMetadata_set_localizedTitle_m2721164981 (ProductMetadata_t3417118930 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.ProductMetadata::set_localizedDescription(System.String)
extern "C"  void ProductMetadata_set_localizedDescription_m579183859 (ProductMetadata_t3417118930 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.ProductMetadata::set_isoCurrencyCode(System.String)
extern "C"  void ProductMetadata_set_isoCurrencyCode_m3113608994 (ProductMetadata_t3417118930 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.ProductMetadata::set_localizedPrice(System.Decimal)
extern "C"  void ProductMetadata_set_localizedPrice_m2468387343 (ProductMetadata_t3417118930 * __this, Decimal_t2948259380  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchaseEventArgs::set_purchasedProduct(UnityEngine.Purchasing.Product)
extern "C"  void PurchaseEventArgs_set_purchasedProduct_m1859649286 (PurchaseEventArgs_t3033159582 * __this, Product_t3244410059 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Purchasing.Extension.IStoreConfiguration>::.ctor()
#define Dictionary_2__ctor_m2510914953(__this, method) ((  void (*) (Dictionary_2_t2519197568 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Purchasing.IStoreExtension>::.ctor()
#define Dictionary_2__ctor_m2632381183(__this, method) ((  void (*) (Dictionary_2_t3031246492 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C"  void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingFactory::set_storeName(System.String)
extern "C"  void PurchasingFactory_set_storeName_m50963097 (PurchasingFactory_t4012818695 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingFactory::set_service(UnityEngine.Purchasing.Extension.IStore)
extern "C"  void PurchasingFactory_set_service_m2964388153 (PurchasingFactory_t4012818695 * __this, RuntimeObject* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.SimpleCatalogProvider::.ctor(System.Action`1<System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>>)
extern "C"  void SimpleCatalogProvider__ctor_m3985646308 (SimpleCatalogProvider_t2437048597 * __this, Action_1_t3544579098 * ___func0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::set_useTransactionLog(System.Boolean)
extern "C"  void PurchasingManager_set_useTransactionLog_m3219543670 (PurchasingManager_t2174502701 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::InitiatePurchase(UnityEngine.Purchasing.Product,System.String)
extern "C"  void PurchasingManager_InitiatePurchase_m2028603504 (PurchasingManager_t2174502701 * __this, Product_t3244410059 * ___product0, String_t* ___developerPayload1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::InitiatePurchase(System.String,System.String)
extern "C"  void PurchasingManager_InitiatePurchase_m2465901418 (PurchasingManager_t2174502701 * __this, String_t* ___purchasableId0, String_t* ___developerPayload1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.Product::get_availableToPurchase()
extern "C"  bool Product_get_availableToPurchase_m3282912434 (Product_t3244410059 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ProductCollection UnityEngine.Purchasing.PurchasingManager::get_products()
extern "C"  ProductCollection_t2671956229 * PurchasingManager_get_products_m4284742285 (PurchasingManager_t2174502701 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.ProductCollection::WithID(System.String)
extern "C"  Product_t3244410059 * ProductCollection_WithID_m2597694943 (ProductCollection_t2671956229 * __this, String_t* ___id0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.Product::get_transactionID()
extern "C"  String_t* Product_get_transactionID_m2196298596 (Product_t3244410059 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.PurchasingManager::get_useTransactionLog()
extern "C"  bool PurchasingManager_get_useTransactionLog_m3269492081 (PurchasingManager_t2174502701 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.TransactionLog::Record(System.String)
extern "C"  void TransactionLog_Record_m1959187216 (TransactionLog_t937968217 * __this, String_t* ___transactionID0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.ProductCollection::WithStoreSpecificID(System.String)
extern "C"  Product_t3244410059 * ProductCollection_WithStoreSpecificID_m2495952872 (ProductCollection_t2671956229 * __this, String_t* ___id0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.ProductDefinition::.ctor(System.String,UnityEngine.Purchasing.ProductType)
extern "C"  void ProductDefinition__ctor_m3534107177 (ProductDefinition_t339727138 * __this, String_t* ___id0, int32_t ___type1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.ProductMetadata::.ctor()
extern "C"  void ProductMetadata__ctor_m3530766301 (ProductMetadata_t3417118930 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Product::.ctor(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.ProductMetadata)
extern "C"  void Product__ctor_m3347204444 (Product_t3244410059 * __this, ProductDefinition_t339727138 * ___definition0, ProductMetadata_t3417118930 * ___metadata1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.PurchasingManager::FormatUnifiedReceipt(System.String,System.String)
extern "C"  String_t* PurchasingManager_FormatUnifiedReceipt_m3708085126 (PurchasingManager_t2174502701 * __this, String_t* ___platformReceipt0, String_t* ___transactionId1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Product::set_transactionID(System.String)
extern "C"  void Product_set_transactionID_m2290527171 (Product_t3244410059 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::ProcessPurchaseIfNew(UnityEngine.Purchasing.Product)
extern "C"  void PurchasingManager_ProcessPurchaseIfNew_m546795524 (PurchasingManager_t2174502701 * __this, Product_t3244410059 * ___product0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<UnityEngine.Purchasing.InitializationFailureReason>::Invoke(!0)
#define Action_1_Invoke_m4084811606(__this, p0, method) ((  void (*) (Action_1_t2913035299 *, int32_t, const RuntimeMethod*))Action_1_Invoke_m4084811606_gshared)(__this, p0, method)
// System.String UnityEngine.Purchasing.Extension.PurchaseFailureDescription::get_productId()
extern "C"  String_t* PurchaseFailureDescription_get_productId_m1501924961 (PurchaseFailureDescription_t437632294 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.PurchaseFailureReason UnityEngine.Purchasing.Extension.PurchaseFailureDescription::get_reason()
extern "C"  int32_t PurchaseFailureDescription_get_reason_m4151118165 (PurchaseFailureDescription_t437632294 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>::GetEnumerator()
#define List_1_GetEnumerator_m3948724805(__this, method) ((  Enumerator_t4075331751  (*) (List_1_t2186087874 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.Extension.ProductDescription>::get_Current()
#define Enumerator_get_Current_m3883874576(__this, method) ((  ProductDescription_t714013132 * (*) (Enumerator_t4075331751 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.String UnityEngine.Purchasing.Extension.ProductDescription::get_storeSpecificId()
extern "C"  String_t* ProductDescription_get_storeSpecificId_m3233843041 (ProductDescription_t714013132 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Extension.ProductDescription::get_metadata()
extern "C"  ProductMetadata_t3417118930 * ProductDescription_get_metadata_m1434964289 (ProductDescription_t714013132 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product>::Add(!0)
#define HashSet_1_Add_m3481334688(__this, p0, method) ((  bool (*) (HashSet_1_t1809359533 *, Product_t3244410059 *, const RuntimeMethod*))HashSet_1_Add_m1971460364_gshared)(__this, p0, method)
// System.Void UnityEngine.Purchasing.Product::set_availableToPurchase(System.Boolean)
extern "C"  void Product_set_availableToPurchase_m2601648514 (Product_t3244410059 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.Extension.ProductDescription::get_transactionId()
extern "C"  String_t* ProductDescription_get_transactionId_m3101010494 (ProductDescription_t714013132 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.Extension.ProductDescription::get_receipt()
extern "C"  String_t* ProductDescription_get_receipt_m2155648733 (ProductDescription_t714013132 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.Extension.ProductDescription>::MoveNext()
#define Enumerator_MoveNext_m2234378541(__this, method) ((  bool (*) (Enumerator_t4075331751 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.Extension.ProductDescription>::Dispose()
#define Enumerator_Dispose_m855450366(__this, method) ((  void (*) (Enumerator_t4075331751 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product>::get_Count()
#define HashSet_1_get_Count_m2156088054(__this, method) ((  int32_t (*) (HashSet_1_t1809359533 *, const RuntimeMethod*))HashSet_1_get_Count_m542532379_gshared)(__this, method)
// System.Void UnityEngine.Purchasing.PurchasingManager::CheckForInitialization()
extern "C"  void PurchasingManager_CheckForInitialization_m3081620621 (PurchasingManager_t2174502701 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product> UnityEngine.Purchasing.ProductCollection::get_set()
extern "C"  HashSet_1_t1809359533 * ProductCollection_get_set_m194937982 (ProductCollection_t2671956229 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product>::GetEnumerator()
#define HashSet_1_GetEnumerator_m2404254953(__this, method) ((  Enumerator_t3514536804  (*) (HashSet_1_t1809359533 *, const RuntimeMethod*))HashSet_1_GetEnumerator_m3346268098_gshared)(__this, method)
// !0 System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Purchasing.Product>::get_Current()
#define Enumerator_get_Current_m419305491(__this, method) ((  Product_t3244410059 * (*) (Enumerator_t3514536804 *, const RuntimeMethod*))Enumerator_get_Current_m4213278602_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Purchasing.Product>::MoveNext()
#define Enumerator_MoveNext_m2112519677(__this, method) ((  bool (*) (Enumerator_t3514536804 *, const RuntimeMethod*))Enumerator_MoveNext_m3714175425_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Purchasing.Product>::Dispose()
#define Enumerator_Dispose_m2764701031(__this, method) ((  void (*) (Enumerator_t3514536804 *, const RuntimeMethod*))Enumerator_Dispose_m1204547613_gshared)(__this, method)
// System.Boolean UnityEngine.Purchasing.TransactionLog::HasRecordOf(System.String)
extern "C"  bool TransactionLog_HasRecordOf_m709540537 (TransactionLog_t937968217 * __this, String_t* ___transactionID0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchaseEventArgs::.ctor(UnityEngine.Purchasing.Product)
extern "C"  void PurchaseEventArgs__ctor_m2534870112 (PurchaseEventArgs_t3033159582 * __this, Product_t3244410059 * ___purchasedProduct0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::ConfirmPendingPurchase(UnityEngine.Purchasing.Product)
extern "C"  void PurchasingManager_ConfirmPendingPurchase_m1662894679 (PurchasingManager_t2174502701 * __this, Product_t3244410059 * ___product0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::OnSetupFailed(UnityEngine.Purchasing.InitializationFailureReason)
extern "C"  void PurchasingManager_OnSetupFailed_m3099873275 (PurchasingManager_t2174502701 * __this, int32_t ___reason0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action::Invoke()
extern "C"  void Action_Invoke_m937035532 (Action_t1264377477 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Func`2<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Product>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m1822220331(__this, p0, p1, method) ((  void (*) (Func_2_t2408407863 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m348566106_gshared)(__this, p0, p1, method)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Product>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
#define Enumerable_Select_TisProductDefinition_t339727138_TisProduct_t3244410059_m1482655603(__this /* static, unused */, p0, p1, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t2408407863 *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m1369720275_gshared)(__this /* static, unused */, p0, p1, method)
// System.Void UnityEngine.Purchasing.ProductCollection::.ctor(UnityEngine.Purchasing.Product[])
extern "C"  void ProductCollection__ctor_m1333293406 (ProductCollection_t2671956229 * __this, ProductU5BU5D_t2942947242* ___products0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::set_products(UnityEngine.Purchasing.ProductCollection)
extern "C"  void PurchasingManager_set_products_m2244506063 (PurchasingManager_t2174502701 * __this, ProductCollection_t2671956229 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<UnityEngine.Purchasing.ProductDefinition>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToList_TisProductDefinition_t339727138_m3266869506(__this /* static, unused */, p0, method) ((  List_1_t1811801880 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m3722849500_gshared)(__this /* static, unused */, p0, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>::.ctor(System.Collections.Generic.IList`1<!0>)
#define ReadOnlyCollection_1__ctor_m1366470084(__this, p0, method) ((  void (*) (ReadOnlyCollection_1_t1552303425 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_m3900376080_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
#define Dictionary_2_set_Item_m3454039676(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2865362463 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method)
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object)
extern "C"  String_t* SimpleJson_SerializeObject_m3082180887 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>>::Invoke(!0)
#define Action_1_Invoke_m3970742127(__this, p0, method) ((  void (*) (Action_1_t3544579098 *, Action_1_t3372111503 *, const RuntimeMethod*))Action_1_Invoke_m2461023210_gshared)(__this, p0, method)
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.PurchaseEventArgs::get_purchasedProduct()
extern "C"  Product_t3244410059 * PurchaseEventArgs_get_purchasedProduct_m3472521060 (PurchaseEventArgs_t3033159582 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AnalyticsReporter::OnPurchaseSucceeded(UnityEngine.Purchasing.Product)
extern "C"  void AnalyticsReporter_OnPurchaseSucceeded_m2686746169 (AnalyticsReporter_t2806096347 * __this, Product_t3244410059 * ___product0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AnalyticsReporter::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
extern "C"  void AnalyticsReporter_OnPurchaseFailed_m4151707250 (AnalyticsReporter_t2806096347 * __this, Product_t3244410059 * ___product0, int32_t ___reason1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::Combine(System.String,System.String)
extern "C"  String_t* Path_Combine_m3389272516 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.TransactionLog::GetRecordPath(System.String)
extern "C"  String_t* TransactionLog_GetRecordPath_m4193031146 (TransactionLog_t937968217 * __this, String_t* ___transactionID0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Directory::Exists(System.String)
extern "C"  bool Directory_Exists_m1484791558 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
extern "C"  DirectoryInfo_t35957480 * Directory_CreateDirectory_m751642867 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.TransactionLog::ComputeHash(System.String)
extern "C"  String_t* TransactionLog_ComputeHash_m480528600 (RuntimeObject * __this /* static, unused */, String_t* ___transactionID0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
extern "C"  Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
extern "C"  void StringBuilder__ctor_m2367297767 (StringBuilder_t * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.UInt64)
extern "C"  ByteU5BU5D_t4116647657* BitConverter_GetBytes_m2889955588 (RuntimeObject * __this /* static, unused */, uint64_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
extern "C"  StringBuilder_t * StringBuilder_AppendFormat_m3016532472 (StringBuilder_t * __this, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::Transaction(System.String,System.Decimal,System.String,System.String,System.String,System.Boolean)
extern "C"  int32_t Analytics_Transaction_m1370258750 (RuntimeObject * __this /* static, unused */, String_t* p0, Decimal_t2948259380  p1, String_t* p2, String_t* p3, String_t* p4, bool p5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::CustomEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t Analytics_CustomEvent_m3835919949 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ILogger UnityEngine.Debug::get_unityLogger()
extern "C"  RuntimeObject* Debug_get_unityLogger_m2239795986 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_persistentDataPath()
extern "C"  String_t* Application_get_persistentDataPath_m1428108154 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UnityAnalytics::.ctor()
extern "C"  void UnityAnalytics__ctor_m3398157862 (UnityAnalytics_t1988537891 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Extension.ICatalogProvider UnityEngine.Purchasing.PurchasingFactory::GetCatalogProvider()
extern "C"  RuntimeObject* PurchasingFactory_GetCatalogProvider_m3183986021 (PurchasingFactory_t4012818695 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UnityPurchasing::Initialize(UnityEngine.Purchasing.IStoreListener,UnityEngine.Purchasing.ConfigurationBuilder,UnityEngine.ILogger,System.String,UnityEngine.Purchasing.IUnityAnalytics,UnityEngine.Purchasing.Extension.ICatalogProvider)
extern "C"  void UnityPurchasing_Initialize_m2554911097 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___listener0, ConfigurationBuilder_t1618671084 * ___builder1, RuntimeObject* ___logger2, String_t* ___persistentDatapath3, RuntimeObject* ___analytics4, RuntimeObject* ___catalog5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UnityPurchasing/<Initialize>c__AnonStorey0::.ctor()
extern "C"  void U3CInitializeU3Ec__AnonStorey0__ctor_m867459580 (U3CInitializeU3Ec__AnonStorey0_t1727991359 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.TransactionLog::.ctor(UnityEngine.ILogger,System.String)
extern "C"  void TransactionLog__ctor_m1598720892 (TransactionLog_t937968217 * __this, RuntimeObject* ___logger0, String_t* ___persistentDataPath1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.PurchasingFactory::get_service()
extern "C"  RuntimeObject* PurchasingFactory_get_service_m1834406598 (PurchasingFactory_t4012818695 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PurchasingManager::.ctor(UnityEngine.Purchasing.TransactionLog,UnityEngine.ILogger,UnityEngine.Purchasing.Extension.IStore,System.String)
extern "C"  void PurchasingManager__ctor_m615616940 (PurchasingManager_t2174502701 * __this, TransactionLog_t937968217 * ___tDb0, RuntimeObject* ___logger1, RuntimeObject* ___store2, String_t* ___storeName3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AnalyticsReporter::.ctor(UnityEngine.Purchasing.IUnityAnalytics)
extern "C"  void AnalyticsReporter__ctor_m1242352561 (AnalyticsReporter_t2806096347 * __this, RuntimeObject* ___analytics0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.StoreListenerProxy::.ctor(UnityEngine.Purchasing.IStoreListener,UnityEngine.Purchasing.AnalyticsReporter,UnityEngine.Purchasing.IExtensionProvider)
extern "C"  void StoreListenerProxy__ctor_m3577065163 (StoreListenerProxy_t3004682744 * __this, RuntimeObject* ___forwardTo0, AnalyticsReporter_t2806096347 * ___analytics1, RuntimeObject* ___extensions2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.ConfigurationBuilder::get_useCatalogProvider()
extern "C"  bool ConfigurationBuilder_get_useCatalogProvider_m110834416 (ConfigurationBuilder_t1618671084 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.ConfigurationBuilder::get_products()
extern "C"  HashSet_1_t3199643908 * ConfigurationBuilder_get_products_m513767079 (ConfigurationBuilder_t1618671084 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>::.ctor(System.Object,System.IntPtr)
#define Action_1__ctor_m2299265044(__this, p0, p1, method) ((  void (*) (Action_1_t3372111503 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.Purchasing.UnityPurchasing::FetchAndMergeProducts(System.Boolean,System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>,UnityEngine.Purchasing.Extension.ICatalogProvider,System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>)
extern "C"  void UnityPurchasing_FetchAndMergeProducts_m1882435942 (RuntimeObject * __this /* static, unused */, bool ___useCatalog0, HashSet_1_t3199643908 * ___localProductSet1, RuntimeObject* ___catalog2, Action_1_t3372111503 * ___callback3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UnityPurchasing/<FetchAndMergeProducts>c__AnonStorey1::.ctor()
extern "C"  void U3CFetchAndMergeProductsU3Ec__AnonStorey1__ctor_m3292554412 (U3CFetchAndMergeProductsU3Ec__AnonStorey1_t3610355129 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>::Invoke(!0)
#define Action_1_Invoke_m1665236704(__this, p0, method) ((  void (*) (Action_1_t3372111503 *, HashSet_1_t3199643908 *, const RuntimeMethod*))Action_1_Invoke_m2461023210_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
#define HashSet_1__ctor_m2810352290(__this, p0, method) ((  void (*) (HashSet_1_t3199643908 *, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m1748776861_gshared)(__this, p0, method)
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>::GetEnumerator()
#define HashSet_1_GetEnumerator_m3437090163(__this, method) ((  Enumerator_t609853883  (*) (HashSet_1_t3199643908 *, const RuntimeMethod*))HashSet_1_GetEnumerator_m3346268098_gshared)(__this, method)
// !0 System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Purchasing.ProductDefinition>::get_Current()
#define Enumerator_get_Current_m585826552(__this, method) ((  ProductDefinition_t339727138 * (*) (Enumerator_t609853883 *, const RuntimeMethod*))Enumerator_get_Current_m4213278602_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>::Remove(!0)
#define HashSet_1_Remove_m2854925952(__this, p0, method) ((  bool (*) (HashSet_1_t3199643908 *, ProductDefinition_t339727138 *, const RuntimeMethod*))HashSet_1_Remove_m709044238_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Purchasing.ProductDefinition>::MoveNext()
#define Enumerator_MoveNext_m32644322(__this, method) ((  bool (*) (Enumerator_t609853883 *, const RuntimeMethod*))Enumerator_MoveNext_m3714175425_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Purchasing.ProductDefinition>::Dispose()
#define Enumerator_Dispose_m969545434(__this, method) ((  void (*) (Enumerator_t609853883 *, const RuntimeMethod*))Enumerator_Dispose_m1204547613_gshared)(__this, method)
// System.Void UnityEngine.Purchasing.PurchasingManager::Initialize(UnityEngine.Purchasing.IInternalStoreListener,System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>)
extern "C"  void PurchasingManager_Initialize_m774274131 (PurchasingManager_t2174502701 * __this, RuntimeObject* ___listener0, HashSet_1_t3199643908 * ___products1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void UnityEngine.Purchasing.AnalyticsReporter::.ctor(UnityEngine.Purchasing.IUnityAnalytics)
extern "C"  void AnalyticsReporter__ctor_m1242352561 (AnalyticsReporter_t2806096347 * __this, RuntimeObject* ___analytics0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___analytics0;
		__this->set_m_Analytics_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.AnalyticsReporter::OnPurchaseSucceeded(UnityEngine.Purchasing.Product)
extern "C"  void AnalyticsReporter_OnPurchaseSucceeded_m2686746169 (AnalyticsReporter_t2806096347 * __this, Product_t3244410059 * ___product0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnalyticsReporter_OnPurchaseSucceeded_m2686746169_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Product_t3244410059 * L_0 = ___product0;
		NullCheck(L_0);
		ProductMetadata_t3417118930 * L_1 = Product_get_metadata_m3202120155(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = ProductMetadata_get_isoCurrencyCode_m1144927692(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_004a;
	}

IL_0017:
	{
		RuntimeObject* L_3 = __this->get_m_Analytics_0();
		Product_t3244410059 * L_4 = ___product0;
		NullCheck(L_4);
		ProductDefinition_t339727138 * L_5 = Product_get_definition_m3366103520(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = ProductDefinition_get_storeSpecificId_m2520532185(L_5, /*hidden argument*/NULL);
		Product_t3244410059 * L_7 = ___product0;
		NullCheck(L_7);
		ProductMetadata_t3417118930 * L_8 = Product_get_metadata_m3202120155(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Decimal_t2948259380  L_9 = ProductMetadata_get_localizedPrice_m3688706107(L_8, /*hidden argument*/NULL);
		Product_t3244410059 * L_10 = ___product0;
		NullCheck(L_10);
		ProductMetadata_t3417118930 * L_11 = Product_get_metadata_m3202120155(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = ProductMetadata_get_isoCurrencyCode_m1144927692(L_11, /*hidden argument*/NULL);
		Product_t3244410059 * L_13 = ___product0;
		NullCheck(L_13);
		String_t* L_14 = Product_get_receipt_m117487645(L_13, /*hidden argument*/NULL);
		NullCheck(L_3);
		InterfaceActionInvoker5< String_t*, Decimal_t2948259380 , String_t*, String_t*, String_t* >::Invoke(0 /* System.Void UnityEngine.Purchasing.IUnityAnalytics::Transaction(System.String,System.Decimal,System.String,System.String,System.String) */, IUnityAnalytics_t1873369198_il2cpp_TypeInfo_var, L_3, L_6, L_9, L_12, L_14, (String_t*)NULL);
	}

IL_004a:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.AnalyticsReporter::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
extern "C"  void AnalyticsReporter_OnPurchaseFailed_m4151707250 (AnalyticsReporter_t2806096347 * __this, Product_t3244410059 * ___product0, int32_t ___reason1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnalyticsReporter_OnPurchaseFailed_m4151707250_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t2865362463 * V_0 = NULL;
	Dictionary_2_t2865362463 * V_1 = NULL;
	{
		Dictionary_2_t2865362463 * L_0 = (Dictionary_2_t2865362463 *)il2cpp_codegen_object_new(Dictionary_2_t2865362463_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2606011945(L_0, /*hidden argument*/Dictionary_2__ctor_m2606011945_RuntimeMethod_var);
		V_1 = L_0;
		Dictionary_2_t2865362463 * L_1 = V_1;
		Product_t3244410059 * L_2 = ___product0;
		NullCheck(L_2);
		ProductDefinition_t339727138 * L_3 = Product_get_definition_m3366103520(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4 = ProductDefinition_get_storeSpecificId_m2520532185(L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		Dictionary_2_Add_m837785969(L_1, _stringLiteral1191178068, L_4, /*hidden argument*/Dictionary_2_Add_m837785969_RuntimeMethod_var);
		Dictionary_2_t2865362463 * L_5 = V_1;
		int32_t L_6 = ___reason1;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(PurchaseFailureReason_t4243987912_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		Dictionary_2_Add_m837785969(L_5, _stringLiteral338012450, L_8, /*hidden argument*/Dictionary_2_Add_m837785969_RuntimeMethod_var);
		Dictionary_2_t2865362463 * L_9 = V_1;
		Product_t3244410059 * L_10 = ___product0;
		NullCheck(L_10);
		ProductMetadata_t3417118930 * L_11 = Product_get_metadata_m3202120155(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Decimal_t2948259380  L_12 = ProductMetadata_get_localizedPrice_m3688706107(L_11, /*hidden argument*/NULL);
		Decimal_t2948259380  L_13 = L_12;
		RuntimeObject * L_14 = Box(Decimal_t2948259380_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_9);
		Dictionary_2_Add_m837785969(L_9, _stringLiteral1252984078, L_14, /*hidden argument*/Dictionary_2_Add_m837785969_RuntimeMethod_var);
		Dictionary_2_t2865362463 * L_15 = V_1;
		Product_t3244410059 * L_16 = ___product0;
		NullCheck(L_16);
		ProductMetadata_t3417118930 * L_17 = Product_get_metadata_m3202120155(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		String_t* L_18 = ProductMetadata_get_isoCurrencyCode_m1144927692(L_17, /*hidden argument*/NULL);
		NullCheck(L_15);
		Dictionary_2_Add_m837785969(L_15, _stringLiteral2947611015, L_18, /*hidden argument*/Dictionary_2_Add_m837785969_RuntimeMethod_var);
		Dictionary_2_t2865362463 * L_19 = V_1;
		V_0 = L_19;
		RuntimeObject* L_20 = __this->get_m_Analytics_0();
		Dictionary_2_t2865362463 * L_21 = V_0;
		NullCheck(L_20);
		InterfaceActionInvoker2< String_t*, Dictionary_2_t2865362463 * >::Invoke(1 /* System.Void UnityEngine.Purchasing.IUnityAnalytics::CustomEvent(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>) */, IUnityAnalytics_t1873369198_il2cpp_TypeInfo_var, L_20, _stringLiteral1489405757, L_21);
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
// System.Void UnityEngine.Purchasing.ConfigurationBuilder::.ctor(UnityEngine.Purchasing.PurchasingFactory)
extern "C"  void ConfigurationBuilder__ctor_m601088221 (ConfigurationBuilder_t1618671084 * __this, PurchasingFactory_t4012818695 * ___factory0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigurationBuilder__ctor_m601088221_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashSet_1_t3199643908 * L_0 = (HashSet_1_t3199643908 *)il2cpp_codegen_object_new(HashSet_1_t3199643908_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m3206103540(L_0, /*hidden argument*/HashSet_1__ctor_m3206103540_RuntimeMethod_var);
		__this->set_m_Products_1(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		PurchasingFactory_t4012818695 * L_1 = ___factory0;
		__this->set_m_Factory_0(L_1);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.ConfigurationBuilder::get_useCatalogProvider()
extern "C"  bool ConfigurationBuilder_get_useCatalogProvider_m110834416 (ConfigurationBuilder_t1618671084 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_U3CuseCatalogProviderU3Ek__BackingField_2();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.ConfigurationBuilder::get_products()
extern "C"  HashSet_1_t3199643908 * ConfigurationBuilder_get_products_m513767079 (ConfigurationBuilder_t1618671084 * __this, const RuntimeMethod* method)
{
	HashSet_1_t3199643908 * V_0 = NULL;
	{
		HashSet_1_t3199643908 * L_0 = __this->get_m_Products_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		HashSet_1_t3199643908 * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Purchasing.PurchasingFactory UnityEngine.Purchasing.ConfigurationBuilder::get_factory()
extern "C"  PurchasingFactory_t4012818695 * ConfigurationBuilder_get_factory_m4264938587 (ConfigurationBuilder_t1618671084 * __this, const RuntimeMethod* method)
{
	PurchasingFactory_t4012818695 * V_0 = NULL;
	{
		PurchasingFactory_t4012818695 * L_0 = __this->get_m_Factory_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PurchasingFactory_t4012818695 * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::Instance(UnityEngine.Purchasing.Extension.IPurchasingModule,UnityEngine.Purchasing.Extension.IPurchasingModule[])
extern "C"  ConfigurationBuilder_t1618671084 * ConfigurationBuilder_Instance_m2204111312 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___first0, IPurchasingModuleU5BU5D_t3784316456* ___rest1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigurationBuilder_Instance_m2204111312_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PurchasingFactory_t4012818695 * V_0 = NULL;
	ConfigurationBuilder_t1618671084 * V_1 = NULL;
	{
		RuntimeObject* L_0 = ___first0;
		IPurchasingModuleU5BU5D_t3784316456* L_1 = ___rest1;
		PurchasingFactory_t4012818695 * L_2 = (PurchasingFactory_t4012818695 *)il2cpp_codegen_object_new(PurchasingFactory_t4012818695_il2cpp_TypeInfo_var);
		PurchasingFactory__ctor_m2746997968(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		PurchasingFactory_t4012818695 * L_3 = V_0;
		ConfigurationBuilder_t1618671084 * L_4 = (ConfigurationBuilder_t1618671084 *)il2cpp_codegen_object_new(ConfigurationBuilder_t1618671084_il2cpp_TypeInfo_var);
		ConfigurationBuilder__ctor_m601088221(L_4, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		ConfigurationBuilder_t1618671084 * L_5 = V_1;
		return L_5;
	}
}
// UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::AddProduct(System.String,UnityEngine.Purchasing.ProductType)
extern "C"  ConfigurationBuilder_t1618671084 * ConfigurationBuilder_AddProduct_m788979654 (ConfigurationBuilder_t1618671084 * __this, String_t* ___id0, int32_t ___type1, const RuntimeMethod* method)
{
	ConfigurationBuilder_t1618671084 * V_0 = NULL;
	{
		String_t* L_0 = ___id0;
		int32_t L_1 = ___type1;
		ConfigurationBuilder_t1618671084 * L_2 = ConfigurationBuilder_AddProduct_m3410369666(__this, L_0, L_1, (IDs_t697119909 *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		ConfigurationBuilder_t1618671084 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::AddProduct(System.String,UnityEngine.Purchasing.ProductType,UnityEngine.Purchasing.IDs)
extern "C"  ConfigurationBuilder_t1618671084 * ConfigurationBuilder_AddProduct_m3410369666 (ConfigurationBuilder_t1618671084 * __this, String_t* ___id0, int32_t ___type1, IDs_t697119909 * ___storeIDs2, const RuntimeMethod* method)
{
	ConfigurationBuilder_t1618671084 * V_0 = NULL;
	{
		String_t* L_0 = ___id0;
		int32_t L_1 = ___type1;
		IDs_t697119909 * L_2 = ___storeIDs2;
		ConfigurationBuilder_t1618671084 * L_3 = ConfigurationBuilder_AddProduct_m2562156830(__this, L_0, L_1, L_2, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		ConfigurationBuilder_t1618671084 * L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::AddProduct(System.String,UnityEngine.Purchasing.ProductType,UnityEngine.Purchasing.IDs,System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.PayoutDefinition>)
extern "C"  ConfigurationBuilder_t1618671084 * ConfigurationBuilder_AddProduct_m2562156830 (ConfigurationBuilder_t1618671084 * __this, String_t* ___id0, int32_t ___type1, IDs_t697119909 * ___storeIDs2, RuntimeObject* ___payouts3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigurationBuilder_AddProduct_m2562156830_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	ProductDefinition_t339727138 * V_1 = NULL;
	ConfigurationBuilder_t1618671084 * V_2 = NULL;
	{
		String_t* L_0 = ___id0;
		V_0 = L_0;
		IDs_t697119909 * L_1 = ___storeIDs2;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		IDs_t697119909 * L_2 = ___storeIDs2;
		PurchasingFactory_t4012818695 * L_3 = ConfigurationBuilder_get_factory_m4264938587(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4 = PurchasingFactory_get_storeName_m2469232669(L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___id0;
		NullCheck(L_2);
		String_t* L_6 = IDs_SpecificIDForStore_m4239003019(L_2, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_001c:
	{
		String_t* L_7 = ___id0;
		String_t* L_8 = V_0;
		int32_t L_9 = ___type1;
		ProductDefinition_t339727138 * L_10 = (ProductDefinition_t339727138 *)il2cpp_codegen_object_new(ProductDefinition_t339727138_il2cpp_TypeInfo_var);
		ProductDefinition__ctor_m2889571019(L_10, L_7, L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		ProductDefinition_t339727138 * L_11 = V_1;
		RuntimeObject* L_12 = ___payouts3;
		NullCheck(L_11);
		ProductDefinition_SetPayouts_m580635826(L_11, L_12, /*hidden argument*/NULL);
		HashSet_1_t3199643908 * L_13 = __this->get_m_Products_1();
		ProductDefinition_t339727138 * L_14 = V_1;
		NullCheck(L_13);
		HashSet_1_Add_m2871625864(L_13, L_14, /*hidden argument*/HashSet_1_Add_m2871625864_RuntimeMethod_var);
		V_2 = __this;
		goto IL_0041;
	}

IL_0041:
	{
		ConfigurationBuilder_t1618671084 * L_15 = V_2;
		return L_15;
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
// System.Void UnityEngine.Purchasing.Extension.AbstractPurchasingModule::.ctor()
extern "C"  void AbstractPurchasingModule__ctor_m2825997110 (AbstractPurchasingModule_t2882497868 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Extension.AbstractPurchasingModule::Configure(UnityEngine.Purchasing.Extension.IPurchasingBinder)
extern "C"  void AbstractPurchasingModule_Configure_m1088574306 (AbstractPurchasingModule_t2882497868 * __this, RuntimeObject* ___binder0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___binder0;
		__this->set_m_Binder_0(L_0);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.Purchasing.Extension.AbstractPurchasingModule::Configure() */, __this);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Extension.AbstractPurchasingModule::RegisterStore(System.String,UnityEngine.Purchasing.Extension.IStore)
extern "C"  void AbstractPurchasingModule_RegisterStore_m3613685983 (AbstractPurchasingModule_t2882497868 * __this, String_t* ___name0, RuntimeObject* ___a1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AbstractPurchasingModule_RegisterStore_m3613685983_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_m_Binder_0();
		String_t* L_1 = ___name0;
		RuntimeObject* L_2 = ___a1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(0 /* System.Void UnityEngine.Purchasing.Extension.IPurchasingBinder::RegisterStore(System.String,UnityEngine.Purchasing.Extension.IStore) */, IPurchasingBinder_t3569785493_il2cpp_TypeInfo_var, L_0, L_1, L_2);
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
// System.Void UnityEngine.Purchasing.Extension.AbstractStore::.ctor()
extern "C"  void AbstractStore__ctor_m2184959637 (AbstractStore_t285429589 * __this, const RuntimeMethod* method)
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
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::.ctor(System.String,UnityEngine.Purchasing.ProductMetadata,System.String,System.String)
extern "C"  void ProductDescription__ctor_m2003094149 (ProductDescription_t714013132 * __this, String_t* ___id0, ProductMetadata_t3417118930 * ___metadata1, String_t* ___receipt2, String_t* ___transactionId3, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id0;
		ProductDescription_set_storeSpecificId_m3599465816(__this, L_0, /*hidden argument*/NULL);
		ProductMetadata_t3417118930 * L_1 = ___metadata1;
		ProductDescription_set_metadata_m226775712(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___receipt2;
		ProductDescription_set_receipt_m3359025263(__this, L_2, /*hidden argument*/NULL);
		String_t* L_3 = ___transactionId3;
		ProductDescription_set_transactionId_m3435239027(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::.ctor(System.String,UnityEngine.Purchasing.ProductMetadata)
extern "C"  void ProductDescription__ctor_m3916440598 (ProductDescription_t714013132 * __this, String_t* ___id0, ProductMetadata_t3417118930 * ___metadata1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___id0;
		ProductMetadata_t3417118930 * L_1 = ___metadata1;
		ProductDescription__ctor_m2003094149(__this, L_0, L_1, (String_t*)NULL, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Purchasing.Extension.ProductDescription::get_storeSpecificId()
extern "C"  String_t* ProductDescription_get_storeSpecificId_m3233843041 (ProductDescription_t714013132 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CstoreSpecificIdU3Ek__BackingField_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::set_storeSpecificId(System.String)
extern "C"  void ProductDescription_set_storeSpecificId_m3599465816 (ProductDescription_t714013132 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CstoreSpecificIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Extension.ProductDescription::get_metadata()
extern "C"  ProductMetadata_t3417118930 * ProductDescription_get_metadata_m1434964289 (ProductDescription_t714013132 * __this, const RuntimeMethod* method)
{
	ProductMetadata_t3417118930 * V_0 = NULL;
	{
		ProductMetadata_t3417118930 * L_0 = __this->get_U3CmetadataU3Ek__BackingField_2();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		ProductMetadata_t3417118930 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::set_metadata(UnityEngine.Purchasing.ProductMetadata)
extern "C"  void ProductDescription_set_metadata_m226775712 (ProductDescription_t714013132 * __this, ProductMetadata_t3417118930 * ___value0, const RuntimeMethod* method)
{
	{
		ProductMetadata_t3417118930 * L_0 = ___value0;
		__this->set_U3CmetadataU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Extension.ProductDescription::get_receipt()
extern "C"  String_t* ProductDescription_get_receipt_m2155648733 (ProductDescription_t714013132 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CreceiptU3Ek__BackingField_3();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::set_receipt(System.String)
extern "C"  void ProductDescription_set_receipt_m3359025263 (ProductDescription_t714013132 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CreceiptU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Extension.ProductDescription::get_transactionId()
extern "C"  String_t* ProductDescription_get_transactionId_m3101010494 (ProductDescription_t714013132 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CtransactionIdU3Ek__BackingField_4();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::set_transactionId(System.String)
extern "C"  void ProductDescription_set_transactionId_m3435239027 (ProductDescription_t714013132 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CtransactionIdU3Ek__BackingField_4(L_0);
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
// System.Void UnityEngine.Purchasing.Extension.PurchaseFailureDescription::.ctor(System.String,UnityEngine.Purchasing.PurchaseFailureReason,System.String)
extern "C"  void PurchaseFailureDescription__ctor_m3435232560 (PurchaseFailureDescription_t437632294 * __this, String_t* ___productId0, int32_t ___reason1, String_t* ___message2, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___productId0;
		PurchaseFailureDescription_set_productId_m1922537378(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___reason1;
		PurchaseFailureDescription_set_reason_m83116780(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___message2;
		PurchaseFailureDescription_set_message_m3224327965(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Purchasing.Extension.PurchaseFailureDescription::get_productId()
extern "C"  String_t* PurchaseFailureDescription_get_productId_m1501924961 (PurchaseFailureDescription_t437632294 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CproductIdU3Ek__BackingField_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.Extension.PurchaseFailureDescription::set_productId(System.String)
extern "C"  void PurchaseFailureDescription_set_productId_m1922537378 (PurchaseFailureDescription_t437632294 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CproductIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// UnityEngine.Purchasing.PurchaseFailureReason UnityEngine.Purchasing.Extension.PurchaseFailureDescription::get_reason()
extern "C"  int32_t PurchaseFailureDescription_get_reason_m4151118165 (PurchaseFailureDescription_t437632294 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CreasonU3Ek__BackingField_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.Extension.PurchaseFailureDescription::set_reason(UnityEngine.Purchasing.PurchaseFailureReason)
extern "C"  void PurchaseFailureDescription_set_reason_m83116780 (PurchaseFailureDescription_t437632294 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CreasonU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Extension.PurchaseFailureDescription::get_message()
extern "C"  String_t* PurchaseFailureDescription_get_message_m3489497373 (PurchaseFailureDescription_t437632294 * __this, const RuntimeMethod* method)
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
// System.Void UnityEngine.Purchasing.Extension.PurchaseFailureDescription::set_message(System.String)
extern "C"  void PurchaseFailureDescription_set_message_m3224327965 (PurchaseFailureDescription_t437632294 * __this, String_t* ___value0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Purchasing.IDs::.ctor()
extern "C"  void IDs__ctor_m3084577891 (IDs_t697119909 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IDs__ctor_m3084577891_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t1632706988 * L_0 = (Dictionary_2_t1632706988 *)il2cpp_codegen_object_new(Dictionary_2_t1632706988_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3302800229(L_0, /*hidden argument*/Dictionary_2__ctor_m3302800229_RuntimeMethod_var);
		__this->set_m_Dic_0(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.Purchasing.IDs::System.Collections.IEnumerable.GetEnumerator()
extern "C"  RuntimeObject* IDs_System_Collections_IEnumerable_GetEnumerator_m893119491 (IDs_t697119909 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IDs_System_Collections_IEnumerable_GetEnumerator_m893119491_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Dictionary_2_t1632706988 * L_0 = __this->get_m_Dic_0();
		NullCheck(L_0);
		Enumerator_t3586889763  L_1 = Dictionary_2_GetEnumerator_m1883005577(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m1883005577_RuntimeMethod_var);
		Enumerator_t3586889763  L_2 = L_1;
		RuntimeObject * L_3 = Box(Enumerator_t3586889763_il2cpp_TypeInfo_var, &L_2);
		V_0 = (RuntimeObject*)L_3;
		goto IL_0017;
	}

IL_0017:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.Purchasing.IDs::Add(System.String,System.String[])
extern "C"  void IDs_Add_m701658157 (IDs_t697119909 * __this, String_t* ___id0, StringU5BU5D_t1281789340* ___stores1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IDs_Add_m701658157_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t1281789340* V_1 = NULL;
	int32_t V_2 = 0;
	{
		StringU5BU5D_t1281789340* L_0 = ___stores1;
		V_1 = L_0;
		V_2 = 0;
		goto IL_0020;
	}

IL_000b:
	{
		StringU5BU5D_t1281789340* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		Dictionary_2_t1632706988 * L_5 = __this->get_m_Dic_0();
		String_t* L_6 = V_0;
		String_t* L_7 = ___id0;
		NullCheck(L_5);
		Dictionary_2_set_Item_m187286838(L_5, L_6, L_7, /*hidden argument*/Dictionary_2_set_Item_m187286838_RuntimeMethod_var);
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_9 = V_2;
		StringU5BU5D_t1281789340* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}
}
// System.String UnityEngine.Purchasing.IDs::SpecificIDForStore(System.String,System.String)
extern "C"  String_t* IDs_SpecificIDForStore_m4239003019 (IDs_t697119909 * __this, String_t* ___store0, String_t* ___defaultValue1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IDs_SpecificIDForStore_m4239003019_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Dictionary_2_t1632706988 * L_0 = __this->get_m_Dic_0();
		String_t* L_1 = ___store0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m131312521(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m131312521_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		Dictionary_2_t1632706988 * L_3 = __this->get_m_Dic_0();
		String_t* L_4 = ___store0;
		NullCheck(L_3);
		String_t* L_5 = Dictionary_2_get_Item_m2543911734(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m2543911734_RuntimeMethod_var);
		V_0 = L_5;
		goto IL_002b;
	}

IL_0024:
	{
		String_t* L_6 = ___defaultValue1;
		V_0 = L_6;
		goto IL_002b;
	}

IL_002b:
	{
		String_t* L_7 = V_0;
		return L_7;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>> UnityEngine.Purchasing.IDs::GetEnumerator()
extern "C"  RuntimeObject* IDs_GetEnumerator_m2797796332 (IDs_t697119909 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IDs_GetEnumerator_m2797796332_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Dictionary_2_t1632706988 * L_0 = __this->get_m_Dic_0();
		NullCheck(L_0);
		Enumerator_t3586889763  L_1 = Dictionary_2_GetEnumerator_m1883005577(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m1883005577_RuntimeMethod_var);
		Enumerator_t3586889763  L_2 = L_1;
		RuntimeObject * L_3 = Box(Enumerator_t3586889763_il2cpp_TypeInfo_var, &L_2);
		V_0 = (RuntimeObject*)L_3;
		goto IL_0017;
	}

IL_0017:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
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
// System.Void UnityEngine.Purchasing.PayoutDefinition::.ctor()
extern "C"  void PayoutDefinition__ctor_m480258218 (PayoutDefinition_t3571684064 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PayoutDefinition__ctor_m480258218_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_Type_0(0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_m_Subtype_1(L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_m_Data_3(L_1);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.PayoutDefinition::.ctor(System.String,System.String,System.Double,System.String)
extern "C"  void PayoutDefinition__ctor_m2238149198 (PayoutDefinition_t3571684064 * __this, String_t* ___typeString0, String_t* ___subtype1, double ___quantity2, String_t* ___data3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PayoutDefinition__ctor_m2238149198_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		__this->set_m_Type_0(0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_m_Subtype_1(L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_m_Data_3(L_1);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		V_0 = 0;
		RuntimeTypeHandle_t3027515415  L_2 = { reinterpret_cast<intptr_t> (PayoutType_t2016707446_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		String_t* L_4 = ___typeString0;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t4135868527_il2cpp_TypeInfo_var);
		bool L_5 = Enum_IsDefined_m1442314461(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (PayoutType_t2016707446_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		String_t* L_8 = ___typeString0;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t4135868527_il2cpp_TypeInfo_var);
		RuntimeObject * L_9 = Enum_Parse_m1871331077(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		V_0 = ((*(int32_t*)((int32_t*)UnBox(L_9, PayoutType_t2016707446_il2cpp_TypeInfo_var))));
	}

IL_0051:
	{
		int32_t L_10 = V_0;
		PayoutDefinition_set_type_m3987409729(__this, L_10, /*hidden argument*/NULL);
		String_t* L_11 = ___subtype1;
		PayoutDefinition_set_subtype_m4245100266(__this, L_11, /*hidden argument*/NULL);
		double L_12 = ___quantity2;
		PayoutDefinition_set_quantity_m3731254436(__this, L_12, /*hidden argument*/NULL);
		String_t* L_13 = ___data3;
		PayoutDefinition_set_data_m3710665706(__this, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.PayoutDefinition::set_type(UnityEngine.Purchasing.PayoutType)
extern "C"  void PayoutDefinition_set_type_m3987409729 (PayoutDefinition_t3571684064 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_Type_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.PayoutDefinition::set_subtype(System.String)
extern "C"  void PayoutDefinition_set_subtype_m4245100266 (PayoutDefinition_t3571684064 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PayoutDefinition_set_subtype_m4245100266_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m3847582255(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)64))))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_2 = ((int32_t)64);
		RuntimeObject * L_3 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral4238302583, L_3, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_5 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5,PayoutDefinition_set_subtype_m4245100266_RuntimeMethod_var);
	}

IL_0025:
	{
		String_t* L_6 = ___value0;
		__this->set_m_Subtype_1(L_6);
		return;
	}
}
// System.Void UnityEngine.Purchasing.PayoutDefinition::set_quantity(System.Double)
extern "C"  void PayoutDefinition_set_quantity_m3731254436 (PayoutDefinition_t3571684064 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		double L_0 = ___value0;
		__this->set_m_Quantity_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.PayoutDefinition::set_data(System.String)
extern "C"  void PayoutDefinition_set_data_m3710665706 (PayoutDefinition_t3571684064 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PayoutDefinition_set_data_m3710665706_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m3847582255(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ((int32_t)1024);
		RuntimeObject * L_3 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2814054188, L_3, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_5 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5,PayoutDefinition_set_data_m3710665706_RuntimeMethod_var);
	}

IL_002b:
	{
		String_t* L_6 = ___value0;
		__this->set_m_Data_3(L_6);
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
// System.Void UnityEngine.Purchasing.Product::.ctor(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.ProductMetadata,System.String)
extern "C"  void Product__ctor_m1856965277 (Product_t3244410059 * __this, ProductDefinition_t339727138 * ___definition0, ProductMetadata_t3417118930 * ___metadata1, String_t* ___receipt2, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ProductDefinition_t339727138 * L_0 = ___definition0;
		Product_set_definition_m2628710370(__this, L_0, /*hidden argument*/NULL);
		ProductMetadata_t3417118930 * L_1 = ___metadata1;
		Product_set_metadata_m686315527(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___receipt2;
		Product_set_receipt_m3483172683(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Product::.ctor(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.ProductMetadata)
extern "C"  void Product__ctor_m3347204444 (Product_t3244410059 * __this, ProductDefinition_t339727138 * ___definition0, ProductMetadata_t3417118930 * ___metadata1, const RuntimeMethod* method)
{
	{
		ProductDefinition_t339727138 * L_0 = ___definition0;
		ProductMetadata_t3417118930 * L_1 = ___metadata1;
		Product__ctor_m1856965277(__this, L_0, L_1, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.Product::get_definition()
extern "C"  ProductDefinition_t339727138 * Product_get_definition_m3366103520 (Product_t3244410059 * __this, const RuntimeMethod* method)
{
	ProductDefinition_t339727138 * V_0 = NULL;
	{
		ProductDefinition_t339727138 * L_0 = __this->get_U3CdefinitionU3Ek__BackingField_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		ProductDefinition_t339727138 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.Product::set_definition(UnityEngine.Purchasing.ProductDefinition)
extern "C"  void Product_set_definition_m2628710370 (Product_t3244410059 * __this, ProductDefinition_t339727138 * ___value0, const RuntimeMethod* method)
{
	{
		ProductDefinition_t339727138 * L_0 = ___value0;
		__this->set_U3CdefinitionU3Ek__BackingField_0(L_0);
		return;
	}
}
// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Product::get_metadata()
extern "C"  ProductMetadata_t3417118930 * Product_get_metadata_m3202120155 (Product_t3244410059 * __this, const RuntimeMethod* method)
{
	ProductMetadata_t3417118930 * V_0 = NULL;
	{
		ProductMetadata_t3417118930 * L_0 = __this->get_U3CmetadataU3Ek__BackingField_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		ProductMetadata_t3417118930 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.Product::set_metadata(UnityEngine.Purchasing.ProductMetadata)
extern "C"  void Product_set_metadata_m686315527 (Product_t3244410059 * __this, ProductMetadata_t3417118930 * ___value0, const RuntimeMethod* method)
{
	{
		ProductMetadata_t3417118930 * L_0 = ___value0;
		__this->set_U3CmetadataU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.Product::get_availableToPurchase()
extern "C"  bool Product_get_availableToPurchase_m3282912434 (Product_t3244410059 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_U3CavailableToPurchaseU3Ek__BackingField_2();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.Product::set_availableToPurchase(System.Boolean)
extern "C"  void Product_set_availableToPurchase_m2601648514 (Product_t3244410059 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CavailableToPurchaseU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Product::get_transactionID()
extern "C"  String_t* Product_get_transactionID_m2196298596 (Product_t3244410059 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CtransactionIDU3Ek__BackingField_3();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.Product::set_transactionID(System.String)
extern "C"  void Product_set_transactionID_m2290527171 (Product_t3244410059 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CtransactionIDU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.Product::get_hasReceipt()
extern "C"  bool Product_get_hasReceipt_m2449951182 (Product_t3244410059 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Product_get_hasReceipt_m2449951182_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		String_t* L_0 = Product_get_receipt_m117487645(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.String UnityEngine.Purchasing.Product::get_receipt()
extern "C"  String_t* Product_get_receipt_m117487645 (Product_t3244410059 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CreceiptU3Ek__BackingField_4();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.Product::set_receipt(System.String)
extern "C"  void Product_set_receipt_m3483172683 (Product_t3244410059 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CreceiptU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.Product::Equals(System.Object)
extern "C"  bool Product_Equals_m468564859 (Product_t3244410059 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Product_Equals_m468564859_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Product_t3244410059 * V_1 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0039;
	}

IL_000e:
	{
		RuntimeObject * L_1 = ___obj0;
		V_1 = ((Product_t3244410059 *)IsInstClass((RuntimeObject*)L_1, Product_t3244410059_il2cpp_TypeInfo_var));
		Product_t3244410059 * L_2 = V_1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0039;
	}

IL_0022:
	{
		ProductDefinition_t339727138 * L_3 = Product_get_definition_m3366103520(__this, /*hidden argument*/NULL);
		Product_t3244410059 * L_4 = V_1;
		NullCheck(L_4);
		ProductDefinition_t339727138 * L_5 = Product_get_definition_m3366103520(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_5);
		V_0 = L_6;
		goto IL_0039;
	}

IL_0039:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Int32 UnityEngine.Purchasing.Product::GetHashCode()
extern "C"  int32_t Product_GetHashCode_m3767175756 (Product_t3244410059 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ProductDefinition_t339727138 * L_0 = Product_get_definition_m3366103520(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
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
// System.Void UnityEngine.Purchasing.ProductCollection::.ctor(UnityEngine.Purchasing.Product[])
extern "C"  void ProductCollection__ctor_m1333293406 (ProductCollection_t2671956229 * __this, ProductU5BU5D_t2942947242* ___products0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ProductCollection__ctor_m1333293406_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashSet_1_t1809359533 * L_0 = (HashSet_1_t1809359533 *)il2cpp_codegen_object_new(HashSet_1_t1809359533_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m1526724929(L_0, /*hidden argument*/HashSet_1__ctor_m1526724929_RuntimeMethod_var);
		__this->set_m_ProductSet_3(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ProductU5BU5D_t2942947242* L_1 = ___products0;
		ProductCollection_AddProducts_m3516972499(__this, (RuntimeObject*)(RuntimeObject*)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ProductCollection::AddProducts(System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Product>)
extern "C"  void ProductCollection_AddProducts_m3516972499 (ProductCollection_t2671956229 * __this, RuntimeObject* ___products0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ProductCollection_AddProducts_m3516972499_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProductU5BU5D_t2942947242* G_B2_0 = NULL;
	ProductCollection_t2671956229 * G_B2_1 = NULL;
	ProductU5BU5D_t2942947242* G_B1_0 = NULL;
	ProductCollection_t2671956229 * G_B1_1 = NULL;
	ProductU5BU5D_t2942947242* G_B4_0 = NULL;
	ProductCollection_t2671956229 * G_B4_1 = NULL;
	ProductU5BU5D_t2942947242* G_B3_0 = NULL;
	ProductCollection_t2671956229 * G_B3_1 = NULL;
	{
		HashSet_1_t1809359533 * L_0 = __this->get_m_ProductSet_3();
		RuntimeObject* L_1 = ___products0;
		NullCheck(L_0);
		HashSet_1_UnionWith_m2629278899(L_0, L_1, /*hidden argument*/HashSet_1_UnionWith_m2629278899_RuntimeMethod_var);
		HashSet_1_t1809359533 * L_2 = __this->get_m_ProductSet_3();
		ProductU5BU5D_t2942947242* L_3 = Enumerable_ToArray_TisProduct_t3244410059_m1600507615(NULL /*static, unused*/, L_2, /*hidden argument*/Enumerable_ToArray_TisProduct_t3244410059_m1600507615_RuntimeMethod_var);
		__this->set_m_Products_2(L_3);
		ProductU5BU5D_t2942947242* L_4 = __this->get_m_Products_2();
		Func_2_t1313482816 * L_5 = ((ProductCollection_t2671956229_StaticFields*)il2cpp_codegen_static_fields_for(ProductCollection_t2671956229_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_4();
		G_B1_0 = L_4;
		G_B1_1 = __this;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = __this;
			goto IL_003d;
		}
	}
	{
		intptr_t L_6 = (intptr_t)ProductCollection_U3CAddProductsU3Em__0_m539516108_RuntimeMethod_var;
		Func_2_t1313482816 * L_7 = (Func_2_t1313482816 *)il2cpp_codegen_object_new(Func_2_t1313482816_il2cpp_TypeInfo_var);
		Func_2__ctor_m70153528(L_7, NULL, L_6, /*hidden argument*/Func_2__ctor_m70153528_RuntimeMethod_var);
		((ProductCollection_t2671956229_StaticFields*)il2cpp_codegen_static_fields_for(ProductCollection_t2671956229_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_4(L_7);
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
	}

IL_003d:
	{
		Func_2_t1313482816 * L_8 = ((ProductCollection_t2671956229_StaticFields*)il2cpp_codegen_static_fields_for(ProductCollection_t2671956229_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_4();
		Dictionary_2_t3029666358 * L_9 = Enumerable_ToDictionary_TisProduct_t3244410059_TisString_t_m1569553407(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)G_B2_0, L_8, /*hidden argument*/Enumerable_ToDictionary_TisProduct_t3244410059_TisString_t_m1569553407_RuntimeMethod_var);
		NullCheck(G_B2_1);
		G_B2_1->set_m_IdToProduct_0(L_9);
		ProductU5BU5D_t2942947242* L_10 = __this->get_m_Products_2();
		Func_2_t1313482816 * L_11 = ((ProductCollection_t2671956229_StaticFields*)il2cpp_codegen_static_fields_for(ProductCollection_t2671956229_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_5();
		G_B3_0 = L_10;
		G_B3_1 = __this;
		if (L_11)
		{
			G_B4_0 = L_10;
			G_B4_1 = __this;
			goto IL_006b;
		}
	}
	{
		intptr_t L_12 = (intptr_t)ProductCollection_U3CAddProductsU3Em__1_m1388243568_RuntimeMethod_var;
		Func_2_t1313482816 * L_13 = (Func_2_t1313482816 *)il2cpp_codegen_object_new(Func_2_t1313482816_il2cpp_TypeInfo_var);
		Func_2__ctor_m70153528(L_13, NULL, L_12, /*hidden argument*/Func_2__ctor_m70153528_RuntimeMethod_var);
		((ProductCollection_t2671956229_StaticFields*)il2cpp_codegen_static_fields_for(ProductCollection_t2671956229_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1_5(L_13);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
	}

IL_006b:
	{
		Func_2_t1313482816 * L_14 = ((ProductCollection_t2671956229_StaticFields*)il2cpp_codegen_static_fields_for(ProductCollection_t2671956229_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_5();
		Dictionary_2_t3029666358 * L_15 = Enumerable_ToDictionary_TisProduct_t3244410059_TisString_t_m1569553407(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)G_B4_0, L_14, /*hidden argument*/Enumerable_ToDictionary_TisProduct_t3244410059_TisString_t_m1569553407_RuntimeMethod_var);
		NullCheck(G_B4_1);
		G_B4_1->set_m_StoreSpecificIdToProduct_1(L_15);
		return;
	}
}
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product> UnityEngine.Purchasing.ProductCollection::get_set()
extern "C"  HashSet_1_t1809359533 * ProductCollection_get_set_m194937982 (ProductCollection_t2671956229 * __this, const RuntimeMethod* method)
{
	HashSet_1_t1809359533 * V_0 = NULL;
	{
		HashSet_1_t1809359533 * L_0 = __this->get_m_ProductSet_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		HashSet_1_t1809359533 * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Purchasing.Product[] UnityEngine.Purchasing.ProductCollection::get_all()
extern "C"  ProductU5BU5D_t2942947242* ProductCollection_get_all_m2286843352 (ProductCollection_t2671956229 * __this, const RuntimeMethod* method)
{
	ProductU5BU5D_t2942947242* V_0 = NULL;
	{
		ProductU5BU5D_t2942947242* L_0 = __this->get_m_Products_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		ProductU5BU5D_t2942947242* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.ProductCollection::WithID(System.String)
extern "C"  Product_t3244410059 * ProductCollection_WithID_m2597694943 (ProductCollection_t2671956229 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ProductCollection_WithID_m2597694943_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Product_t3244410059 * V_0 = NULL;
	Product_t3244410059 * V_1 = NULL;
	{
		V_0 = (Product_t3244410059 *)NULL;
		Dictionary_2_t3029666358 * L_0 = __this->get_m_IdToProduct_0();
		String_t* L_1 = ___id0;
		NullCheck(L_0);
		Dictionary_2_TryGetValue_m3839205334(L_0, L_1, (&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m3839205334_RuntimeMethod_var);
		Product_t3244410059 * L_2 = V_0;
		V_1 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		Product_t3244410059 * L_3 = V_1;
		return L_3;
	}
}
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.ProductCollection::WithStoreSpecificID(System.String)
extern "C"  Product_t3244410059 * ProductCollection_WithStoreSpecificID_m2495952872 (ProductCollection_t2671956229 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ProductCollection_WithStoreSpecificID_m2495952872_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Product_t3244410059 * V_0 = NULL;
	Product_t3244410059 * V_1 = NULL;
	{
		V_0 = (Product_t3244410059 *)NULL;
		Dictionary_2_t3029666358 * L_0 = __this->get_m_StoreSpecificIdToProduct_1();
		String_t* L_1 = ___id0;
		NullCheck(L_0);
		Dictionary_2_TryGetValue_m3839205334(L_0, L_1, (&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m3839205334_RuntimeMethod_var);
		Product_t3244410059 * L_2 = V_0;
		V_1 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		Product_t3244410059 * L_3 = V_1;
		return L_3;
	}
}
// System.String UnityEngine.Purchasing.ProductCollection::<AddProducts>m__0(UnityEngine.Purchasing.Product)
extern "C"  String_t* ProductCollection_U3CAddProductsU3Em__0_m539516108 (RuntimeObject * __this /* static, unused */, Product_t3244410059 * ___x0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		Product_t3244410059 * L_0 = ___x0;
		NullCheck(L_0);
		ProductDefinition_t339727138 * L_1 = Product_get_definition_m3366103520(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = ProductDefinition_get_id_m1593385231(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String UnityEngine.Purchasing.ProductCollection::<AddProducts>m__1(UnityEngine.Purchasing.Product)
extern "C"  String_t* ProductCollection_U3CAddProductsU3Em__1_m1388243568 (RuntimeObject * __this /* static, unused */, Product_t3244410059 * ___x0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		Product_t3244410059 * L_0 = ___x0;
		NullCheck(L_0);
		ProductDefinition_t339727138 * L_1 = Product_get_definition_m3366103520(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = ProductDefinition_get_storeSpecificId_m2520532185(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		String_t* L_3 = V_0;
		return L_3;
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
// System.Void UnityEngine.Purchasing.ProductDefinition::.ctor(System.String,System.String,UnityEngine.Purchasing.ProductType)
extern "C"  void ProductDefinition__ctor_m2889571019 (ProductDefinition_t339727138 * __this, String_t* ___id0, String_t* ___storeSpecificId1, int32_t ___type2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___id0;
		String_t* L_1 = ___storeSpecificId1;
		int32_t L_2 = ___type2;
		ProductDefinition__ctor_m2244438016(__this, L_0, L_1, L_2, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ProductDefinition::.ctor(System.String,System.String,UnityEngine.Purchasing.ProductType,System.Boolean)
extern "C"  void ProductDefinition__ctor_m2244438016 (ProductDefinition_t339727138 * __this, String_t* ___id0, String_t* ___storeSpecificId1, int32_t ___type2, bool ___enabled3, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___id0;
		String_t* L_1 = ___storeSpecificId1;
		int32_t L_2 = ___type2;
		bool L_3 = ___enabled3;
		ProductDefinition__ctor_m3267495726(__this, L_0, L_1, L_2, L_3, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ProductDefinition::.ctor(System.String,System.String,UnityEngine.Purchasing.ProductType,System.Boolean,System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.PayoutDefinition>)
extern "C"  void ProductDefinition__ctor_m3267495726 (ProductDefinition_t339727138 * __this, String_t* ___id0, String_t* ___storeSpecificId1, int32_t ___type2, bool ___enabled3, RuntimeObject* ___payouts4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ProductDefinition__ctor_m3267495726_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t748791510 * L_0 = (List_1_t748791510 *)il2cpp_codegen_object_new(List_1_t748791510_il2cpp_TypeInfo_var);
		List_1__ctor_m2305681321(L_0, /*hidden argument*/List_1__ctor_m2305681321_RuntimeMethod_var);
		__this->set_m_Payouts_4(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___id0;
		ProductDefinition_set_id_m3726047248(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___storeSpecificId1;
		ProductDefinition_set_storeSpecificId_m3168192593(__this, L_2, /*hidden argument*/NULL);
		int32_t L_3 = ___type2;
		ProductDefinition_set_type_m1878988275(__this, L_3, /*hidden argument*/NULL);
		bool L_4 = ___enabled3;
		ProductDefinition_set_enabled_m80478909(__this, L_4, /*hidden argument*/NULL);
		RuntimeObject* L_5 = ___payouts4;
		ProductDefinition_SetPayouts_m580635826(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ProductDefinition::.ctor(System.String,UnityEngine.Purchasing.ProductType)
extern "C"  void ProductDefinition__ctor_m3534107177 (ProductDefinition_t339727138 * __this, String_t* ___id0, int32_t ___type1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___id0;
		String_t* L_1 = ___id0;
		int32_t L_2 = ___type1;
		ProductDefinition__ctor_m2889571019(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Purchasing.ProductDefinition::get_id()
extern "C"  String_t* ProductDefinition_get_id_m1593385231 (ProductDefinition_t339727138 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.ProductDefinition::set_id(System.String)
extern "C"  void ProductDefinition_set_id_m3726047248 (ProductDefinition_t339727138 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.ProductDefinition::get_storeSpecificId()
extern "C"  String_t* ProductDefinition_get_storeSpecificId_m2520532185 (ProductDefinition_t339727138 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CstoreSpecificIdU3Ek__BackingField_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.ProductDefinition::set_storeSpecificId(System.String)
extern "C"  void ProductDefinition_set_storeSpecificId_m3168192593 (ProductDefinition_t339727138 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CstoreSpecificIdU3Ek__BackingField_1(L_0);
		return;
	}
}
// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.ProductDefinition::get_type()
extern "C"  int32_t ProductDefinition_get_type_m1651363521 (ProductDefinition_t339727138 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CtypeU3Ek__BackingField_2();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.ProductDefinition::set_type(UnityEngine.Purchasing.ProductType)
extern "C"  void ProductDefinition_set_type_m1878988275 (ProductDefinition_t339727138 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CtypeU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.ProductDefinition::get_enabled()
extern "C"  bool ProductDefinition_get_enabled_m3337637214 (ProductDefinition_t339727138 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_U3CenabledU3Ek__BackingField_3();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.ProductDefinition::set_enabled(System.Boolean)
extern "C"  void ProductDefinition_set_enabled_m80478909 (ProductDefinition_t339727138 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CenabledU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.ProductDefinition::Equals(System.Object)
extern "C"  bool ProductDefinition_Equals_m2651766784 (ProductDefinition_t339727138 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ProductDefinition_Equals_m2651766784_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ProductDefinition_t339727138 * V_1 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0039;
	}

IL_000e:
	{
		RuntimeObject * L_1 = ___obj0;
		V_1 = ((ProductDefinition_t339727138 *)IsInstClass((RuntimeObject*)L_1, ProductDefinition_t339727138_il2cpp_TypeInfo_var));
		ProductDefinition_t339727138 * L_2 = V_1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0039;
	}

IL_0022:
	{
		String_t* L_3 = ProductDefinition_get_id_m1593385231(__this, /*hidden argument*/NULL);
		ProductDefinition_t339727138 * L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5 = ProductDefinition_get_id_m1593385231(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m920492651(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0039;
	}

IL_0039:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Int32 UnityEngine.Purchasing.ProductDefinition::GetHashCode()
extern "C"  int32_t ProductDefinition_GetHashCode_m216453023 (ProductDefinition_t339727138 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ProductDefinition_get_id_m1593385231(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Purchasing.ProductDefinition::SetPayouts(System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.PayoutDefinition>)
extern "C"  void ProductDefinition_SetPayouts_m580635826 (ProductDefinition_t339727138 * __this, RuntimeObject* ___newPayouts0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ProductDefinition_SetPayouts_m580635826_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___newPayouts0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0023;
	}

IL_000c:
	{
		List_1_t748791510 * L_1 = __this->get_m_Payouts_4();
		NullCheck(L_1);
		List_1_Clear_m3858397092(L_1, /*hidden argument*/List_1_Clear_m3858397092_RuntimeMethod_var);
		List_1_t748791510 * L_2 = __this->get_m_Payouts_4();
		RuntimeObject* L_3 = ___newPayouts0;
		NullCheck(L_2);
		List_1_AddRange_m2240270450(L_2, L_3, /*hidden argument*/List_1_AddRange_m2240270450_RuntimeMethod_var);
	}

IL_0023:
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
// System.Void UnityEngine.Purchasing.ProductMetadata::.ctor(System.String,System.String,System.String,System.String,System.Decimal)
extern "C"  void ProductMetadata__ctor_m868675718 (ProductMetadata_t3417118930 * __this, String_t* ___priceString0, String_t* ___title1, String_t* ___description2, String_t* ___currencyCode3, Decimal_t2948259380  ___localizedPrice4, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___priceString0;
		ProductMetadata_set_localizedPriceString_m1610096054(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___title1;
		ProductMetadata_set_localizedTitle_m2721164981(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___description2;
		ProductMetadata_set_localizedDescription_m579183859(__this, L_2, /*hidden argument*/NULL);
		String_t* L_3 = ___currencyCode3;
		ProductMetadata_set_isoCurrencyCode_m3113608994(__this, L_3, /*hidden argument*/NULL);
		Decimal_t2948259380  L_4 = ___localizedPrice4;
		ProductMetadata_set_localizedPrice_m2468387343(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ProductMetadata::.ctor()
extern "C"  void ProductMetadata__ctor_m3530766301 (ProductMetadata_t3417118930 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Purchasing.ProductMetadata::get_localizedPriceString()
extern "C"  String_t* ProductMetadata_get_localizedPriceString_m3339862584 (ProductMetadata_t3417118930 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3ClocalizedPriceStringU3Ek__BackingField_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.ProductMetadata::set_localizedPriceString(System.String)
extern "C"  void ProductMetadata_set_localizedPriceString_m1610096054 (ProductMetadata_t3417118930 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3ClocalizedPriceStringU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.ProductMetadata::get_localizedTitle()
extern "C"  String_t* ProductMetadata_get_localizedTitle_m1221956283 (ProductMetadata_t3417118930 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3ClocalizedTitleU3Ek__BackingField_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.ProductMetadata::set_localizedTitle(System.String)
extern "C"  void ProductMetadata_set_localizedTitle_m2721164981 (ProductMetadata_t3417118930 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3ClocalizedTitleU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.ProductMetadata::get_localizedDescription()
extern "C"  String_t* ProductMetadata_get_localizedDescription_m2896855065 (ProductMetadata_t3417118930 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3ClocalizedDescriptionU3Ek__BackingField_2();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.ProductMetadata::set_localizedDescription(System.String)
extern "C"  void ProductMetadata_set_localizedDescription_m579183859 (ProductMetadata_t3417118930 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3ClocalizedDescriptionU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.ProductMetadata::get_isoCurrencyCode()
extern "C"  String_t* ProductMetadata_get_isoCurrencyCode_m1144927692 (ProductMetadata_t3417118930 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CisoCurrencyCodeU3Ek__BackingField_3();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.ProductMetadata::set_isoCurrencyCode(System.String)
extern "C"  void ProductMetadata_set_isoCurrencyCode_m3113608994 (ProductMetadata_t3417118930 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CisoCurrencyCodeU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Decimal UnityEngine.Purchasing.ProductMetadata::get_localizedPrice()
extern "C"  Decimal_t2948259380  ProductMetadata_get_localizedPrice_m3688706107 (ProductMetadata_t3417118930 * __this, const RuntimeMethod* method)
{
	Decimal_t2948259380  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Decimal_t2948259380  L_0 = __this->get_U3ClocalizedPriceU3Ek__BackingField_4();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Decimal_t2948259380  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.ProductMetadata::set_localizedPrice(System.Decimal)
extern "C"  void ProductMetadata_set_localizedPrice_m2468387343 (ProductMetadata_t3417118930 * __this, Decimal_t2948259380  ___value0, const RuntimeMethod* method)
{
	{
		Decimal_t2948259380  L_0 = ___value0;
		__this->set_U3ClocalizedPriceU3Ek__BackingField_4(L_0);
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
// System.Void UnityEngine.Purchasing.PurchaseEventArgs::.ctor(UnityEngine.Purchasing.Product)
extern "C"  void PurchaseEventArgs__ctor_m2534870112 (PurchaseEventArgs_t3033159582 * __this, Product_t3244410059 * ___purchasedProduct0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Product_t3244410059 * L_0 = ___purchasedProduct0;
		PurchaseEventArgs_set_purchasedProduct_m1859649286(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.PurchaseEventArgs::get_purchasedProduct()
extern "C"  Product_t3244410059 * PurchaseEventArgs_get_purchasedProduct_m3472521060 (PurchaseEventArgs_t3033159582 * __this, const RuntimeMethod* method)
{
	Product_t3244410059 * V_0 = NULL;
	{
		Product_t3244410059 * L_0 = __this->get_U3CpurchasedProductU3Ek__BackingField_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Product_t3244410059 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.PurchaseEventArgs::set_purchasedProduct(UnityEngine.Purchasing.Product)
extern "C"  void PurchaseEventArgs_set_purchasedProduct_m1859649286 (PurchaseEventArgs_t3033159582 * __this, Product_t3244410059 * ___value0, const RuntimeMethod* method)
{
	{
		Product_t3244410059 * L_0 = ___value0;
		__this->set_U3CpurchasedProductU3Ek__BackingField_0(L_0);
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
// System.Void UnityEngine.Purchasing.PurchasingFactory::.ctor(UnityEngine.Purchasing.Extension.IPurchasingModule,UnityEngine.Purchasing.Extension.IPurchasingModule[])
extern "C"  void PurchasingFactory__ctor_m2746997968 (PurchasingFactory_t4012818695 * __this, RuntimeObject* ___first0, IPurchasingModuleU5BU5D_t3784316456* ___remainingModules1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchasingFactory__ctor_m2746997968_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	IPurchasingModuleU5BU5D_t3784316456* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Dictionary_2_t2519197568 * L_0 = (Dictionary_2_t2519197568 *)il2cpp_codegen_object_new(Dictionary_2_t2519197568_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2510914953(L_0, /*hidden argument*/Dictionary_2__ctor_m2510914953_RuntimeMethod_var);
		__this->set_m_ConfigMap_0(L_0);
		Dictionary_2_t3031246492 * L_1 = (Dictionary_2_t3031246492 *)il2cpp_codegen_object_new(Dictionary_2_t3031246492_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2632381183(L_1, /*hidden argument*/Dictionary_2__ctor_m2632381183_RuntimeMethod_var);
		__this->set_m_ExtensionMap_1(L_1);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___first0;
		NullCheck(L_2);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void UnityEngine.Purchasing.Extension.IPurchasingModule::Configure(UnityEngine.Purchasing.Extension.IPurchasingBinder) */, IPurchasingModule_t960499109_il2cpp_TypeInfo_var, L_2, __this);
		IPurchasingModuleU5BU5D_t3784316456* L_3 = ___remainingModules1;
		V_1 = L_3;
		V_2 = 0;
		goto IL_003d;
	}

IL_002e:
	{
		IPurchasingModuleU5BU5D_t3784316456* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = L_7;
		RuntimeObject* L_8 = V_0;
		NullCheck(L_8);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void UnityEngine.Purchasing.Extension.IPurchasingModule::Configure(UnityEngine.Purchasing.Extension.IPurchasingBinder) */, IPurchasingModule_t960499109_il2cpp_TypeInfo_var, L_8, __this);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_003d:
	{
		int32_t L_10 = V_2;
		IPurchasingModuleU5BU5D_t3784316456* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_002e;
		}
	}
	{
		return;
	}
}
// System.String UnityEngine.Purchasing.PurchasingFactory::get_storeName()
extern "C"  String_t* PurchasingFactory_get_storeName_m2469232669 (PurchasingFactory_t4012818695 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CstoreNameU3Ek__BackingField_4();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.PurchasingFactory::set_storeName(System.String)
extern "C"  void PurchasingFactory_set_storeName_m50963097 (PurchasingFactory_t4012818695 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CstoreNameU3Ek__BackingField_4(L_0);
		return;
	}
}
// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.PurchasingFactory::get_service()
extern "C"  RuntimeObject* PurchasingFactory_get_service_m1834406598 (PurchasingFactory_t4012818695 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchasingFactory_get_service_m1834406598_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->get_m_Store_2();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_m_Store_2();
		V_0 = L_1;
		goto IL_0023;
	}

IL_0018:
	{
		InvalidOperationException_t56020091 * L_2 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_2, _stringLiteral3786456592, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,PurchasingFactory_get_service_m1834406598_RuntimeMethod_var);
	}

IL_0023:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.Purchasing.PurchasingFactory::set_service(UnityEngine.Purchasing.Extension.IStore)
extern "C"  void PurchasingFactory_set_service_m2964388153 (PurchasingFactory_t4012818695 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_m_Store_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.PurchasingFactory::RegisterStore(System.String,UnityEngine.Purchasing.Extension.IStore)
extern "C"  void PurchasingFactory_RegisterStore_m3069297051 (PurchasingFactory_t4012818695 * __this, String_t* ___name0, RuntimeObject* ___s1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_m_Store_2();
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_1 = ___s1;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_2 = ___name0;
		PurchasingFactory_set_storeName_m50963097(__this, L_2, /*hidden argument*/NULL);
		RuntimeObject* L_3 = ___s1;
		PurchasingFactory_set_service_m2964388153(__this, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.PurchasingFactory::SetCatalogProvider(UnityEngine.Purchasing.Extension.ICatalogProvider)
extern "C"  void PurchasingFactory_SetCatalogProvider_m2662169561 (PurchasingFactory_t4012818695 * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___provider0;
		__this->set_m_CatalogProvider_3(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.PurchasingFactory::SetCatalogProviderFunction(System.Action`1<System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>>)
extern "C"  void PurchasingFactory_SetCatalogProviderFunction_m3510672563 (PurchasingFactory_t4012818695 * __this, Action_1_t3544579098 * ___func0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchasingFactory_SetCatalogProviderFunction_m3510672563_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t3544579098 * L_0 = ___func0;
		SimpleCatalogProvider_t2437048597 * L_1 = (SimpleCatalogProvider_t2437048597 *)il2cpp_codegen_object_new(SimpleCatalogProvider_t2437048597_il2cpp_TypeInfo_var);
		SimpleCatalogProvider__ctor_m3985646308(L_1, L_0, /*hidden argument*/NULL);
		__this->set_m_CatalogProvider_3(L_1);
		return;
	}
}
// UnityEngine.Purchasing.Extension.ICatalogProvider UnityEngine.Purchasing.PurchasingFactory::GetCatalogProvider()
extern "C"  RuntimeObject* PurchasingFactory_GetCatalogProvider_m3183986021 (PurchasingFactory_t4012818695 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->get_m_CatalogProvider_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
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
// System.Void UnityEngine.Purchasing.PurchasingManager::.ctor(UnityEngine.Purchasing.TransactionLog,UnityEngine.ILogger,UnityEngine.Purchasing.Extension.IStore,System.String)
extern "C"  void PurchasingManager__ctor_m615616940 (PurchasingManager_t2174502701 * __this, TransactionLog_t937968217 * ___tDb0, RuntimeObject* ___logger1, RuntimeObject* ___store2, String_t* ___storeName3, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		TransactionLog_t937968217 * L_0 = ___tDb0;
		__this->set_m_TransactionLog_3(L_0);
		RuntimeObject* L_1 = ___store2;
		__this->set_m_Store_0(L_1);
		RuntimeObject* L_2 = ___logger1;
		__this->set_m_Logger_2(L_2);
		String_t* L_3 = ___storeName3;
		__this->set_m_StoreName_4(L_3);
		PurchasingManager_set_useTransactionLog_m3219543670(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.PurchasingManager::get_useTransactionLog()
extern "C"  bool PurchasingManager_get_useTransactionLog_m3269492081 (PurchasingManager_t2174502701 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_U3CuseTransactionLogU3Ek__BackingField_7();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.PurchasingManager::set_useTransactionLog(System.Boolean)
extern "C"  void PurchasingManager_set_useTransactionLog_m3219543670 (PurchasingManager_t2174502701 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CuseTransactionLogU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.PurchasingManager::InitiatePurchase(UnityEngine.Purchasing.Product)
extern "C"  void PurchasingManager_InitiatePurchase_m2347184675 (PurchasingManager_t2174502701 * __this, Product_t3244410059 * ___product0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchasingManager_InitiatePurchase_m2347184675_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Product_t3244410059 * L_0 = ___product0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		PurchasingManager_InitiatePurchase_m2028603504(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.PurchasingManager::InitiatePurchase(System.String)
extern "C"  void PurchasingManager_InitiatePurchase_m244097932 (PurchasingManager_t2174502701 * __this, String_t* ___productId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchasingManager_InitiatePurchase_m244097932_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___productId0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		PurchasingManager_InitiatePurchase_m2465901418(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.PurchasingManager::InitiatePurchase(UnityEngine.Purchasing.Product,System.String)
extern "C"  void PurchasingManager_InitiatePurchase_m2028603504 (PurchasingManager_t2174502701 * __this, Product_t3244410059 * ___product0, String_t* ___developerPayload1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchasingManager_InitiatePurchase_m2028603504_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Product_t3244410059 * L_0 = ___product0;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_m_Logger_2();
		NullCheck(L_1);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(2 /* System.Void UnityEngine.ILogger::Log(System.Object) */, ILogger_t2607134790_il2cpp_TypeInfo_var, L_1, _stringLiteral2601538339);
		goto IL_0068;
	}

IL_001d:
	{
		Product_t3244410059 * L_2 = ___product0;
		NullCheck(L_2);
		bool L_3 = Product_get_availableToPurchase_m3282912434(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_003b;
		}
	}
	{
		RuntimeObject* L_4 = __this->get_m_Listener_1();
		Product_t3244410059 * L_5 = ___product0;
		NullCheck(L_4);
		InterfaceActionInvoker2< Product_t3244410059 *, int32_t >::Invoke(2 /* System.Void UnityEngine.Purchasing.IInternalStoreListener::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason) */, IInternalStoreListener_t3516020022_il2cpp_TypeInfo_var, L_4, L_5, 2);
		goto IL_0068;
	}

IL_003b:
	{
		RuntimeObject* L_6 = __this->get_m_Store_0();
		Product_t3244410059 * L_7 = ___product0;
		NullCheck(L_7);
		ProductDefinition_t339727138 * L_8 = Product_get_definition_m3366103520(L_7, /*hidden argument*/NULL);
		String_t* L_9 = ___developerPayload1;
		NullCheck(L_6);
		InterfaceActionInvoker2< ProductDefinition_t339727138 *, String_t* >::Invoke(2 /* System.Void UnityEngine.Purchasing.Extension.IStore::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String) */, IStore_t2324734081_il2cpp_TypeInfo_var, L_6, L_8, L_9);
		RuntimeObject* L_10 = __this->get_m_Logger_2();
		Product_t3244410059 * L_11 = ___product0;
		NullCheck(L_11);
		ProductDefinition_t339727138 * L_12 = Product_get_definition_m3366103520(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		String_t* L_13 = ProductDefinition_get_id_m1593385231(L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(3 /* System.Void UnityEngine.ILogger::Log(System.String,System.Object) */, ILogger_t2607134790_il2cpp_TypeInfo_var, L_10, _stringLiteral3814032172, L_13);
	}

IL_0068:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.PurchasingManager::InitiatePurchase(System.String,System.String)
extern "C"  void PurchasingManager_InitiatePurchase_m2465901418 (PurchasingManager_t2174502701 * __this, String_t* ___purchasableId0, String_t* ___developerPayload1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchasingManager_InitiatePurchase_m2465901418_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Product_t3244410059 * V_0 = NULL;
	{
		ProductCollection_t2671956229 * L_0 = PurchasingManager_get_products_m4284742285(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___purchasableId0;
		NullCheck(L_0);
		Product_t3244410059 * L_2 = ProductCollection_WithID_m2597694943(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Product_t3244410059 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_4 = __this->get_m_Logger_2();
		String_t* L_5 = ___purchasableId0;
		NullCheck(L_4);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(4 /* System.Void UnityEngine.ILogger::LogWarning(System.String,System.Object) */, ILogger_t2607134790_il2cpp_TypeInfo_var, L_4, _stringLiteral2673559748, L_5);
	}

IL_0025:
	{
		Product_t3244410059 * L_6 = V_0;
		String_t* L_7 = ___developerPayload1;
		PurchasingManager_InitiatePurchase_m2028603504(__this, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.PurchasingManager::ConfirmPendingPurchase(UnityEngine.Purchasing.Product)
extern "C"  void PurchasingManager_ConfirmPendingPurchase_m1662894679 (PurchasingManager_t2174502701 * __this, Product_t3244410059 * ___product0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchasingManager_ConfirmPendingPurchase_m1662894679_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Product_t3244410059 * L_0 = ___product0;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_m_Logger_2();
		NullCheck(L_1);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(2 /* System.Void UnityEngine.ILogger::Log(System.Object) */, ILogger_t2607134790_il2cpp_TypeInfo_var, L_1, _stringLiteral690372164);
		goto IL_0076;
	}

IL_001d:
	{
		Product_t3244410059 * L_2 = ___product0;
		NullCheck(L_2);
		String_t* L_3 = Product_get_transactionID_m2196298596(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		RuntimeObject* L_5 = __this->get_m_Logger_2();
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(2 /* System.Void UnityEngine.ILogger::Log(System.Object) */, ILogger_t2607134790_il2cpp_TypeInfo_var, L_5, _stringLiteral849635213);
		goto IL_0076;
	}

IL_0043:
	{
		bool L_6 = PurchasingManager_get_useTransactionLog_m3269492081(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_005f;
		}
	}
	{
		TransactionLog_t937968217 * L_7 = __this->get_m_TransactionLog_3();
		Product_t3244410059 * L_8 = ___product0;
		NullCheck(L_8);
		String_t* L_9 = Product_get_transactionID_m2196298596(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		TransactionLog_Record_m1959187216(L_7, L_9, /*hidden argument*/NULL);
	}

IL_005f:
	{
		RuntimeObject* L_10 = __this->get_m_Store_0();
		Product_t3244410059 * L_11 = ___product0;
		NullCheck(L_11);
		ProductDefinition_t339727138 * L_12 = Product_get_definition_m3366103520(L_11, /*hidden argument*/NULL);
		Product_t3244410059 * L_13 = ___product0;
		NullCheck(L_13);
		String_t* L_14 = Product_get_transactionID_m2196298596(L_13, /*hidden argument*/NULL);
		NullCheck(L_10);
		InterfaceActionInvoker2< ProductDefinition_t339727138 *, String_t* >::Invoke(3 /* System.Void UnityEngine.Purchasing.Extension.IStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String) */, IStore_t2324734081_il2cpp_TypeInfo_var, L_10, L_12, L_14);
	}

IL_0076:
	{
		return;
	}
}
// UnityEngine.Purchasing.ProductCollection UnityEngine.Purchasing.PurchasingManager::get_products()
extern "C"  ProductCollection_t2671956229 * PurchasingManager_get_products_m4284742285 (PurchasingManager_t2174502701 * __this, const RuntimeMethod* method)
{
	ProductCollection_t2671956229 * V_0 = NULL;
	{
		ProductCollection_t2671956229 * L_0 = __this->get_U3CproductsU3Ek__BackingField_8();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		ProductCollection_t2671956229 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.PurchasingManager::set_products(UnityEngine.Purchasing.ProductCollection)
extern "C"  void PurchasingManager_set_products_m2244506063 (PurchasingManager_t2174502701 * __this, ProductCollection_t2671956229 * ___value0, const RuntimeMethod* method)
{
	{
		ProductCollection_t2671956229 * L_0 = ___value0;
		__this->set_U3CproductsU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.PurchasingManager::OnPurchaseSucceeded(System.String,System.String,System.String)
extern "C"  void PurchasingManager_OnPurchaseSucceeded_m2040664106 (PurchasingManager_t2174502701 * __this, String_t* ___id0, String_t* ___receipt1, String_t* ___transactionId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchasingManager_OnPurchaseSucceeded_m2040664106_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Product_t3244410059 * V_0 = NULL;
	ProductDefinition_t339727138 * V_1 = NULL;
	String_t* V_2 = NULL;
	{
		ProductCollection_t2671956229 * L_0 = PurchasingManager_get_products_m4284742285(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___id0;
		NullCheck(L_0);
		Product_t3244410059 * L_2 = ProductCollection_WithStoreSpecificID_m2495952872(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Product_t3244410059 * L_3 = V_0;
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_4 = ___id0;
		ProductDefinition_t339727138 * L_5 = (ProductDefinition_t339727138 *)il2cpp_codegen_object_new(ProductDefinition_t339727138_il2cpp_TypeInfo_var);
		ProductDefinition__ctor_m3534107177(L_5, L_4, 1, /*hidden argument*/NULL);
		V_1 = L_5;
		ProductDefinition_t339727138 * L_6 = V_1;
		ProductMetadata_t3417118930 * L_7 = (ProductMetadata_t3417118930 *)il2cpp_codegen_object_new(ProductMetadata_t3417118930_il2cpp_TypeInfo_var);
		ProductMetadata__ctor_m3530766301(L_7, /*hidden argument*/NULL);
		Product_t3244410059 * L_8 = (Product_t3244410059 *)il2cpp_codegen_object_new(Product_t3244410059_il2cpp_TypeInfo_var);
		Product__ctor_m3347204444(L_8, L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_002a:
	{
		String_t* L_9 = ___receipt1;
		String_t* L_10 = ___transactionId2;
		String_t* L_11 = PurchasingManager_FormatUnifiedReceipt_m3708085126(__this, L_9, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		Product_t3244410059 * L_12 = V_0;
		String_t* L_13 = V_2;
		NullCheck(L_12);
		Product_set_receipt_m3483172683(L_12, L_13, /*hidden argument*/NULL);
		Product_t3244410059 * L_14 = V_0;
		String_t* L_15 = ___transactionId2;
		NullCheck(L_14);
		Product_set_transactionID_m2290527171(L_14, L_15, /*hidden argument*/NULL);
		Product_t3244410059 * L_16 = V_0;
		PurchasingManager_ProcessPurchaseIfNew_m546795524(__this, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.PurchasingManager::OnSetupFailed(UnityEngine.Purchasing.InitializationFailureReason)
extern "C"  void PurchasingManager_OnSetupFailed_m3099873275 (PurchasingManager_t2174502701 * __this, int32_t ___reason0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchasingManager_OnSetupFailed_m3099873275_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_initialized_9();
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		Action_1_t2913035299 * L_1 = __this->get_m_AdditionalProductsFailCallback_6();
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		Action_1_t2913035299 * L_2 = __this->get_m_AdditionalProductsFailCallback_6();
		int32_t L_3 = ___reason0;
		NullCheck(L_2);
		Action_1_Invoke_m4084811606(L_2, L_3, /*hidden argument*/Action_1_Invoke_m4084811606_RuntimeMethod_var);
	}

IL_0024:
	{
		goto IL_0036;
	}

IL_002a:
	{
		RuntimeObject* L_4 = __this->get_m_Listener_1();
		int32_t L_5 = ___reason0;
		NullCheck(L_4);
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void UnityEngine.Purchasing.IInternalStoreListener::OnInitializeFailed(UnityEngine.Purchasing.InitializationFailureReason) */, IInternalStoreListener_t3516020022_il2cpp_TypeInfo_var, L_4, L_5);
	}

IL_0036:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.PurchasingManager::OnPurchaseFailed(UnityEngine.Purchasing.Extension.PurchaseFailureDescription)
extern "C"  void PurchasingManager_OnPurchaseFailed_m3597833702 (PurchasingManager_t2174502701 * __this, PurchaseFailureDescription_t437632294 * ___description0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchasingManager_OnPurchaseFailed_m3597833702_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Product_t3244410059 * V_0 = NULL;
	{
		ProductCollection_t2671956229 * L_0 = PurchasingManager_get_products_m4284742285(__this, /*hidden argument*/NULL);
		PurchaseFailureDescription_t437632294 * L_1 = ___description0;
		NullCheck(L_1);
		String_t* L_2 = PurchaseFailureDescription_get_productId_m1501924961(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Product_t3244410059 * L_3 = ProductCollection_WithStoreSpecificID_m2495952872(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Product_t3244410059 * L_4 = V_0;
		if (L_4)
		{
			goto IL_0035;
		}
	}
	{
		RuntimeObject* L_5 = __this->get_m_Logger_2();
		PurchaseFailureDescription_t437632294 * L_6 = ___description0;
		NullCheck(L_6);
		String_t* L_7 = PurchaseFailureDescription_get_productId_m1501924961(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(5 /* System.Void UnityEngine.ILogger::LogError(System.String,System.Object) */, ILogger_t2607134790_il2cpp_TypeInfo_var, L_5, _stringLiteral583922, L_7);
		goto IL_0062;
	}

IL_0035:
	{
		RuntimeObject* L_8 = __this->get_m_Logger_2();
		Product_t3244410059 * L_9 = V_0;
		NullCheck(L_9);
		ProductDefinition_t339727138 * L_10 = Product_get_definition_m3366103520(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_11 = ProductDefinition_get_id_m1593385231(L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(3 /* System.Void UnityEngine.ILogger::Log(System.String,System.Object) */, ILogger_t2607134790_il2cpp_TypeInfo_var, L_8, _stringLiteral4214330368, L_11);
		RuntimeObject* L_12 = __this->get_m_Listener_1();
		Product_t3244410059 * L_13 = V_0;
		PurchaseFailureDescription_t437632294 * L_14 = ___description0;
		NullCheck(L_14);
		int32_t L_15 = PurchaseFailureDescription_get_reason_m4151118165(L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		InterfaceActionInvoker2< Product_t3244410059 *, int32_t >::Invoke(2 /* System.Void UnityEngine.Purchasing.IInternalStoreListener::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason) */, IInternalStoreListener_t3516020022_il2cpp_TypeInfo_var, L_12, L_13, L_15);
	}

IL_0062:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.PurchasingManager::OnProductsRetrieved(System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>)
extern "C"  void PurchasingManager_OnProductsRetrieved_m2601533332 (PurchasingManager_t2174502701 * __this, List_1_t2186087874 * ___products0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchasingManager_OnProductsRetrieved_m2601533332_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t1809359533 * V_0 = NULL;
	ProductDescription_t714013132 * V_1 = NULL;
	Enumerator_t4075331751  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Product_t3244410059 * V_3 = NULL;
	ProductDefinition_t339727138 * V_4 = NULL;
	Product_t3244410059 * V_5 = NULL;
	Enumerator_t3514536804  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		HashSet_1_t1809359533 * L_0 = (HashSet_1_t1809359533 *)il2cpp_codegen_object_new(HashSet_1_t1809359533_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m1526724929(L_0, /*hidden argument*/HashSet_1__ctor_m1526724929_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t2186087874 * L_1 = ___products0;
		NullCheck(L_1);
		Enumerator_t4075331751  L_2 = List_1_GetEnumerator_m3948724805(L_1, /*hidden argument*/List_1_GetEnumerator_m3948724805_RuntimeMethod_var);
		V_2 = L_2;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b0;
		}

IL_0014:
		{
			ProductDescription_t714013132 * L_3 = Enumerator_get_Current_m3883874576((&V_2), /*hidden argument*/Enumerator_get_Current_m3883874576_RuntimeMethod_var);
			V_1 = L_3;
			ProductCollection_t2671956229 * L_4 = PurchasingManager_get_products_m4284742285(__this, /*hidden argument*/NULL);
			ProductDescription_t714013132 * L_5 = V_1;
			NullCheck(L_5);
			String_t* L_6 = ProductDescription_get_storeSpecificId_m3233843041(L_5, /*hidden argument*/NULL);
			NullCheck(L_4);
			Product_t3244410059 * L_7 = ProductCollection_WithStoreSpecificID_m2495952872(L_4, L_6, /*hidden argument*/NULL);
			V_3 = L_7;
			Product_t3244410059 * L_8 = V_3;
			if (L_8)
			{
				goto IL_0066;
			}
		}

IL_0035:
		{
			ProductDescription_t714013132 * L_9 = V_1;
			NullCheck(L_9);
			String_t* L_10 = ProductDescription_get_storeSpecificId_m3233843041(L_9, /*hidden argument*/NULL);
			ProductDescription_t714013132 * L_11 = V_1;
			NullCheck(L_11);
			String_t* L_12 = ProductDescription_get_storeSpecificId_m3233843041(L_11, /*hidden argument*/NULL);
			ProductDescription_t714013132 * L_13 = V_1;
			NullCheck(L_13);
			int32_t L_14 = L_13->get_type_1();
			ProductDefinition_t339727138 * L_15 = (ProductDefinition_t339727138 *)il2cpp_codegen_object_new(ProductDefinition_t339727138_il2cpp_TypeInfo_var);
			ProductDefinition__ctor_m2889571019(L_15, L_10, L_12, L_14, /*hidden argument*/NULL);
			V_4 = L_15;
			ProductDefinition_t339727138 * L_16 = V_4;
			ProductDescription_t714013132 * L_17 = V_1;
			NullCheck(L_17);
			ProductMetadata_t3417118930 * L_18 = ProductDescription_get_metadata_m1434964289(L_17, /*hidden argument*/NULL);
			Product_t3244410059 * L_19 = (Product_t3244410059 *)il2cpp_codegen_object_new(Product_t3244410059_il2cpp_TypeInfo_var);
			Product__ctor_m3347204444(L_19, L_16, L_18, /*hidden argument*/NULL);
			V_3 = L_19;
			HashSet_1_t1809359533 * L_20 = V_0;
			Product_t3244410059 * L_21 = V_3;
			NullCheck(L_20);
			HashSet_1_Add_m3481334688(L_20, L_21, /*hidden argument*/HashSet_1_Add_m3481334688_RuntimeMethod_var);
		}

IL_0066:
		{
			Product_t3244410059 * L_22 = V_3;
			NullCheck(L_22);
			Product_set_availableToPurchase_m2601648514(L_22, (bool)1, /*hidden argument*/NULL);
			Product_t3244410059 * L_23 = V_3;
			ProductDescription_t714013132 * L_24 = V_1;
			NullCheck(L_24);
			ProductMetadata_t3417118930 * L_25 = ProductDescription_get_metadata_m1434964289(L_24, /*hidden argument*/NULL);
			NullCheck(L_23);
			Product_set_metadata_m686315527(L_23, L_25, /*hidden argument*/NULL);
			Product_t3244410059 * L_26 = V_3;
			ProductDescription_t714013132 * L_27 = V_1;
			NullCheck(L_27);
			String_t* L_28 = ProductDescription_get_transactionId_m3101010494(L_27, /*hidden argument*/NULL);
			NullCheck(L_26);
			Product_set_transactionID_m2290527171(L_26, L_28, /*hidden argument*/NULL);
			ProductDescription_t714013132 * L_29 = V_1;
			NullCheck(L_29);
			String_t* L_30 = ProductDescription_get_receipt_m2155648733(L_29, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_31 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
			if (L_31)
			{
				goto IL_00af;
			}
		}

IL_0095:
		{
			Product_t3244410059 * L_32 = V_3;
			ProductDescription_t714013132 * L_33 = V_1;
			NullCheck(L_33);
			String_t* L_34 = ProductDescription_get_receipt_m2155648733(L_33, /*hidden argument*/NULL);
			ProductDescription_t714013132 * L_35 = V_1;
			NullCheck(L_35);
			String_t* L_36 = ProductDescription_get_transactionId_m3101010494(L_35, /*hidden argument*/NULL);
			String_t* L_37 = PurchasingManager_FormatUnifiedReceipt_m3708085126(__this, L_34, L_36, /*hidden argument*/NULL);
			NullCheck(L_32);
			Product_set_receipt_m3483172683(L_32, L_37, /*hidden argument*/NULL);
		}

IL_00af:
		{
		}

IL_00b0:
		{
			bool L_38 = Enumerator_MoveNext_m2234378541((&V_2), /*hidden argument*/Enumerator_MoveNext_m2234378541_RuntimeMethod_var);
			if (L_38)
			{
				goto IL_0014;
			}
		}

IL_00bc:
		{
			IL2CPP_LEAVE(0xCF, FINALLY_00c1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c1;
	}

FINALLY_00c1:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m855450366((&V_2), /*hidden argument*/Enumerator_Dispose_m855450366_RuntimeMethod_var);
		IL2CPP_END_FINALLY(193)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(193)
	{
		IL2CPP_JUMP_TBL(0xCF, IL_00cf)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00cf:
	{
		HashSet_1_t1809359533 * L_39 = V_0;
		NullCheck(L_39);
		int32_t L_40 = HashSet_1_get_Count_m2156088054(L_39, /*hidden argument*/HashSet_1_get_Count_m2156088054_RuntimeMethod_var);
		if ((((int32_t)L_40) <= ((int32_t)0)))
		{
			goto IL_00e9;
		}
	}
	{
		ProductCollection_t2671956229 * L_41 = PurchasingManager_get_products_m4284742285(__this, /*hidden argument*/NULL);
		HashSet_1_t1809359533 * L_42 = V_0;
		NullCheck(L_41);
		ProductCollection_AddProducts_m3516972499(L_41, L_42, /*hidden argument*/NULL);
	}

IL_00e9:
	{
		PurchasingManager_CheckForInitialization_m3081620621(__this, /*hidden argument*/NULL);
		ProductCollection_t2671956229 * L_43 = PurchasingManager_get_products_m4284742285(__this, /*hidden argument*/NULL);
		NullCheck(L_43);
		HashSet_1_t1809359533 * L_44 = ProductCollection_get_set_m194937982(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		Enumerator_t3514536804  L_45 = HashSet_1_GetEnumerator_m2404254953(L_44, /*hidden argument*/HashSet_1_GetEnumerator_m2404254953_RuntimeMethod_var);
		V_6 = L_45;
	}

IL_0102:
	try
	{ // begin try (depth: 1)
		{
			goto IL_013c;
		}

IL_0107:
		{
			Product_t3244410059 * L_46 = Enumerator_get_Current_m419305491((&V_6), /*hidden argument*/Enumerator_get_Current_m419305491_RuntimeMethod_var);
			V_5 = L_46;
			Product_t3244410059 * L_47 = V_5;
			NullCheck(L_47);
			String_t* L_48 = Product_get_receipt_m117487645(L_47, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_49 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_48, /*hidden argument*/NULL);
			if (L_49)
			{
				goto IL_013b;
			}
		}

IL_0122:
		{
			Product_t3244410059 * L_50 = V_5;
			NullCheck(L_50);
			String_t* L_51 = Product_get_transactionID_m2196298596(L_50, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_52 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_51, /*hidden argument*/NULL);
			if (L_52)
			{
				goto IL_013b;
			}
		}

IL_0133:
		{
			Product_t3244410059 * L_53 = V_5;
			PurchasingManager_ProcessPurchaseIfNew_m546795524(__this, L_53, /*hidden argument*/NULL);
		}

IL_013b:
		{
		}

IL_013c:
		{
			bool L_54 = Enumerator_MoveNext_m2112519677((&V_6), /*hidden argument*/Enumerator_MoveNext_m2112519677_RuntimeMethod_var);
			if (L_54)
			{
				goto IL_0107;
			}
		}

IL_0148:
		{
			IL2CPP_LEAVE(0x15B, FINALLY_014d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_014d;
	}

FINALLY_014d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2764701031((&V_6), /*hidden argument*/Enumerator_Dispose_m2764701031_RuntimeMethod_var);
		IL2CPP_END_FINALLY(333)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(333)
	{
		IL2CPP_JUMP_TBL(0x15B, IL_015b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_015b:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.PurchasingManager::ProcessPurchaseIfNew(UnityEngine.Purchasing.Product)
extern "C"  void PurchasingManager_ProcessPurchaseIfNew_m546795524 (PurchasingManager_t2174502701 * __this, Product_t3244410059 * ___product0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchasingManager_ProcessPurchaseIfNew_m546795524_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PurchaseEventArgs_t3033159582 * V_0 = NULL;
	{
		bool L_0 = PurchasingManager_get_useTransactionLog_m3269492081(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_005a;
		}
	}
	{
		TransactionLog_t937968217 * L_1 = __this->get_m_TransactionLog_3();
		Product_t3244410059 * L_2 = ___product0;
		NullCheck(L_2);
		String_t* L_3 = Product_get_transactionID_m2196298596(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_4 = TransactionLog_HasRecordOf_m709540537(L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_5 = __this->get_m_Logger_2();
		Product_t3244410059 * L_6 = ___product0;
		NullCheck(L_6);
		String_t* L_7 = Product_get_transactionID_m2196298596(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2567552709, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(2 /* System.Void UnityEngine.ILogger::Log(System.Object) */, ILogger_t2607134790_il2cpp_TypeInfo_var, L_5, L_8);
		RuntimeObject* L_9 = __this->get_m_Store_0();
		Product_t3244410059 * L_10 = ___product0;
		NullCheck(L_10);
		ProductDefinition_t339727138 * L_11 = Product_get_definition_m3366103520(L_10, /*hidden argument*/NULL);
		Product_t3244410059 * L_12 = ___product0;
		NullCheck(L_12);
		String_t* L_13 = Product_get_transactionID_m2196298596(L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		InterfaceActionInvoker2< ProductDefinition_t339727138 *, String_t* >::Invoke(3 /* System.Void UnityEngine.Purchasing.Extension.IStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String) */, IStore_t2324734081_il2cpp_TypeInfo_var, L_9, L_11, L_13);
		goto IL_0079;
	}

IL_005a:
	{
		Product_t3244410059 * L_14 = ___product0;
		PurchaseEventArgs_t3033159582 * L_15 = (PurchaseEventArgs_t3033159582 *)il2cpp_codegen_object_new(PurchaseEventArgs_t3033159582_il2cpp_TypeInfo_var);
		PurchaseEventArgs__ctor_m2534870112(L_15, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		RuntimeObject* L_16 = __this->get_m_Listener_1();
		PurchaseEventArgs_t3033159582 * L_17 = V_0;
		NullCheck(L_16);
		int32_t L_18 = InterfaceFuncInvoker1< int32_t, PurchaseEventArgs_t3033159582 * >::Invoke(1 /* UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.IInternalStoreListener::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs) */, IInternalStoreListener_t3516020022_il2cpp_TypeInfo_var, L_16, L_17);
		if (L_18)
		{
			goto IL_0079;
		}
	}
	{
		Product_t3244410059 * L_19 = ___product0;
		PurchasingManager_ConfirmPendingPurchase_m1662894679(__this, L_19, /*hidden argument*/NULL);
	}

IL_0079:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.PurchasingManager::CheckForInitialization()
extern "C"  void PurchasingManager_CheckForInitialization_m3081620621 (PurchasingManager_t2174502701 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchasingManager_CheckForInitialization_m3081620621_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Product_t3244410059 * V_1 = NULL;
	Enumerator_t3514536804  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = __this->get_initialized_9();
		if (L_0)
		{
			goto IL_00bf;
		}
	}
	{
		V_0 = (bool)0;
		ProductCollection_t2671956229 * L_1 = PurchasingManager_get_products_m4284742285(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		HashSet_1_t1809359533 * L_2 = ProductCollection_get_set_m194937982(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Enumerator_t3514536804  L_3 = HashSet_1_GetEnumerator_m2404254953(L_2, /*hidden argument*/HashSet_1_GetEnumerator_m2404254953_RuntimeMethod_var);
		V_2 = L_3;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0075;
		}

IL_0026:
		{
			Product_t3244410059 * L_4 = Enumerator_get_Current_m419305491((&V_2), /*hidden argument*/Enumerator_get_Current_m419305491_RuntimeMethod_var);
			V_1 = L_4;
			Product_t3244410059 * L_5 = V_1;
			NullCheck(L_5);
			bool L_6 = Product_get_availableToPurchase_m3282912434(L_5, /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_0072;
			}
		}

IL_003a:
		{
			RuntimeObject* L_7 = __this->get_m_Logger_2();
			ObjectU5BU5D_t2843939325* L_8 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
			Product_t3244410059 * L_9 = V_1;
			NullCheck(L_9);
			ProductDefinition_t339727138 * L_10 = Product_get_definition_m3366103520(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			String_t* L_11 = ProductDefinition_get_id_m1593385231(L_10, /*hidden argument*/NULL);
			NullCheck(L_8);
			ArrayElementTypeCheck (L_8, L_11);
			(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_11);
			ObjectU5BU5D_t2843939325* L_12 = L_8;
			Product_t3244410059 * L_13 = V_1;
			NullCheck(L_13);
			ProductDefinition_t339727138 * L_14 = Product_get_definition_m3366103520(L_13, /*hidden argument*/NULL);
			NullCheck(L_14);
			String_t* L_15 = ProductDefinition_get_storeSpecificId_m2520532185(L_14, /*hidden argument*/NULL);
			NullCheck(L_12);
			ArrayElementTypeCheck (L_12, L_15);
			(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_15);
			NullCheck(L_7);
			InterfaceActionInvoker3< int32_t, String_t*, ObjectU5BU5D_t2843939325* >::Invoke(6 /* System.Void UnityEngine.ILogger::LogFormat(UnityEngine.LogType,System.String,System.Object[]) */, ILogger_t2607134790_il2cpp_TypeInfo_var, L_7, 2, _stringLiteral3189976310, L_12);
			goto IL_0074;
		}

IL_0072:
		{
			V_0 = (bool)1;
		}

IL_0074:
		{
		}

IL_0075:
		{
			bool L_16 = Enumerator_MoveNext_m2112519677((&V_2), /*hidden argument*/Enumerator_MoveNext_m2112519677_RuntimeMethod_var);
			if (L_16)
			{
				goto IL_0026;
			}
		}

IL_0081:
		{
			IL2CPP_LEAVE(0x94, FINALLY_0086);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0086;
	}

FINALLY_0086:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2764701031((&V_2), /*hidden argument*/Enumerator_Dispose_m2764701031_RuntimeMethod_var);
		IL2CPP_END_FINALLY(134)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(134)
	{
		IL2CPP_JUMP_TBL(0x94, IL_0094)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0094:
	{
		bool L_17 = V_0;
		if (!L_17)
		{
			goto IL_00ab;
		}
	}
	{
		RuntimeObject* L_18 = __this->get_m_Listener_1();
		NullCheck(L_18);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3 /* System.Void UnityEngine.Purchasing.IInternalStoreListener::OnInitialized(UnityEngine.Purchasing.IStoreController) */, IInternalStoreListener_t3516020022_il2cpp_TypeInfo_var, L_18, __this);
		goto IL_00b2;
	}

IL_00ab:
	{
		PurchasingManager_OnSetupFailed_m3099873275(__this, 1, /*hidden argument*/NULL);
	}

IL_00b2:
	{
		__this->set_initialized_9((bool)1);
		goto IL_00d7;
	}

IL_00bf:
	{
		Action_t1264377477 * L_19 = __this->get_m_AdditionalProductsCallback_5();
		if (!L_19)
		{
			goto IL_00d6;
		}
	}
	{
		Action_t1264377477 * L_20 = __this->get_m_AdditionalProductsCallback_5();
		NullCheck(L_20);
		Action_Invoke_m937035532(L_20, /*hidden argument*/NULL);
	}

IL_00d6:
	{
	}

IL_00d7:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.PurchasingManager::Initialize(UnityEngine.Purchasing.IInternalStoreListener,System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>)
extern "C"  void PurchasingManager_Initialize_m774274131 (PurchasingManager_t2174502701 * __this, RuntimeObject* ___listener0, HashSet_1_t3199643908 * ___products1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchasingManager_Initialize_m774274131_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProductU5BU5D_t2942947242* V_0 = NULL;
	ReadOnlyCollection_1_t1552303425 * V_1 = NULL;
	HashSet_1_t3199643908 * G_B2_0 = NULL;
	HashSet_1_t3199643908 * G_B1_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		__this->set_m_Listener_1(L_0);
		RuntimeObject* L_1 = __this->get_m_Store_0();
		NullCheck(L_1);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void UnityEngine.Purchasing.Extension.IStore::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback) */, IStore_t2324734081_il2cpp_TypeInfo_var, L_1, __this);
		HashSet_1_t3199643908 * L_2 = ___products1;
		Func_2_t2408407863 * L_3 = ((PurchasingManager_t2174502701_StaticFields*)il2cpp_codegen_static_fields_for(PurchasingManager_t2174502701_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_10();
		G_B1_0 = L_2;
		if (L_3)
		{
			G_B2_0 = L_2;
			goto IL_002d;
		}
	}
	{
		intptr_t L_4 = (intptr_t)PurchasingManager_U3CInitializeU3Em__1_m2926205295_RuntimeMethod_var;
		Func_2_t2408407863 * L_5 = (Func_2_t2408407863 *)il2cpp_codegen_object_new(Func_2_t2408407863_il2cpp_TypeInfo_var);
		Func_2__ctor_m1822220331(L_5, NULL, L_4, /*hidden argument*/Func_2__ctor_m1822220331_RuntimeMethod_var);
		((PurchasingManager_t2174502701_StaticFields*)il2cpp_codegen_static_fields_for(PurchasingManager_t2174502701_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1_10(L_5);
		G_B2_0 = G_B1_0;
	}

IL_002d:
	{
		Func_2_t2408407863 * L_6 = ((PurchasingManager_t2174502701_StaticFields*)il2cpp_codegen_static_fields_for(PurchasingManager_t2174502701_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_10();
		RuntimeObject* L_7 = Enumerable_Select_TisProductDefinition_t339727138_TisProduct_t3244410059_m1482655603(NULL /*static, unused*/, G_B2_0, L_6, /*hidden argument*/Enumerable_Select_TisProductDefinition_t339727138_TisProduct_t3244410059_m1482655603_RuntimeMethod_var);
		ProductU5BU5D_t2942947242* L_8 = Enumerable_ToArray_TisProduct_t3244410059_m1600507615(NULL /*static, unused*/, L_7, /*hidden argument*/Enumerable_ToArray_TisProduct_t3244410059_m1600507615_RuntimeMethod_var);
		V_0 = L_8;
		ProductU5BU5D_t2942947242* L_9 = V_0;
		ProductCollection_t2671956229 * L_10 = (ProductCollection_t2671956229 *)il2cpp_codegen_object_new(ProductCollection_t2671956229_il2cpp_TypeInfo_var);
		ProductCollection__ctor_m1333293406(L_10, L_9, /*hidden argument*/NULL);
		PurchasingManager_set_products_m2244506063(__this, L_10, /*hidden argument*/NULL);
		HashSet_1_t3199643908 * L_11 = ___products1;
		List_1_t1811801880 * L_12 = Enumerable_ToList_TisProductDefinition_t339727138_m3266869506(NULL /*static, unused*/, L_11, /*hidden argument*/Enumerable_ToList_TisProductDefinition_t339727138_m3266869506_RuntimeMethod_var);
		ReadOnlyCollection_1_t1552303425 * L_13 = (ReadOnlyCollection_1_t1552303425 *)il2cpp_codegen_object_new(ReadOnlyCollection_1_t1552303425_il2cpp_TypeInfo_var);
		ReadOnlyCollection_1__ctor_m1366470084(L_13, L_12, /*hidden argument*/ReadOnlyCollection_1__ctor_m1366470084_RuntimeMethod_var);
		V_1 = L_13;
		RuntimeObject* L_14 = __this->get_m_Store_0();
		ReadOnlyCollection_1_t1552303425 * L_15 = V_1;
		NullCheck(L_14);
		InterfaceActionInvoker1< ReadOnlyCollection_1_t1552303425 * >::Invoke(1 /* System.Void UnityEngine.Purchasing.Extension.IStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>) */, IStore_t2324734081_il2cpp_TypeInfo_var, L_14, L_15);
		return;
	}
}
// System.String UnityEngine.Purchasing.PurchasingManager::FormatUnifiedReceipt(System.String,System.String)
extern "C"  String_t* PurchasingManager_FormatUnifiedReceipt_m3708085126 (PurchasingManager_t2174502701 * __this, String_t* ___platformReceipt0, String_t* ___transactionId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchasingManager_FormatUnifiedReceipt_m3708085126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t2865362463 * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	Dictionary_2_t2865362463 * G_B2_2 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	Dictionary_2_t2865362463 * G_B1_2 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Dictionary_2_t2865362463 * G_B4_2 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	Dictionary_2_t2865362463 * G_B3_2 = NULL;
	{
		Dictionary_2_t2865362463 * L_0 = (Dictionary_2_t2865362463 *)il2cpp_codegen_object_new(Dictionary_2_t2865362463_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2606011945(L_0, /*hidden argument*/Dictionary_2__ctor_m2606011945_RuntimeMethod_var);
		V_0 = L_0;
		Dictionary_2_t2865362463 * L_1 = V_0;
		String_t* L_2 = __this->get_m_StoreName_4();
		NullCheck(L_1);
		Dictionary_2_set_Item_m3454039676(L_1, _stringLiteral1544471543, L_2, /*hidden argument*/Dictionary_2_set_Item_m3454039676_RuntimeMethod_var);
		Dictionary_2_t2865362463 * L_3 = V_0;
		String_t* L_4 = ___transactionId1;
		String_t* L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = _stringLiteral1632276064;
		G_B1_2 = L_3;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = _stringLiteral1632276064;
			G_B2_2 = L_3;
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_002b:
	{
		NullCheck(G_B2_2);
		Dictionary_2_set_Item_m3454039676(G_B2_2, G_B2_1, G_B2_0, /*hidden argument*/Dictionary_2_set_Item_m3454039676_RuntimeMethod_var);
		Dictionary_2_t2865362463 * L_7 = V_0;
		String_t* L_8 = ___platformReceipt0;
		String_t* L_9 = L_8;
		G_B3_0 = L_9;
		G_B3_1 = _stringLiteral3264264274;
		G_B3_2 = L_7;
		if (L_9)
		{
			G_B4_0 = L_9;
			G_B4_1 = _stringLiteral3264264274;
			G_B4_2 = L_7;
			goto IL_0043;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B4_0 = L_10;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0043:
	{
		NullCheck(G_B4_2);
		Dictionary_2_set_Item_m3454039676(G_B4_2, G_B4_1, G_B4_0, /*hidden argument*/Dictionary_2_set_Item_m3454039676_RuntimeMethod_var);
		Dictionary_2_t2865362463 * L_11 = V_0;
		String_t* L_12 = SimpleJson_SerializeObject_m3082180887(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		goto IL_0054;
	}

IL_0054:
	{
		String_t* L_13 = V_1;
		return L_13;
	}
}
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.PurchasingManager::<Initialize>m__1(UnityEngine.Purchasing.ProductDefinition)
extern "C"  Product_t3244410059 * PurchasingManager_U3CInitializeU3Em__1_m2926205295 (RuntimeObject * __this /* static, unused */, ProductDefinition_t339727138 * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchasingManager_U3CInitializeU3Em__1_m2926205295_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Product_t3244410059 * V_0 = NULL;
	{
		ProductDefinition_t339727138 * L_0 = ___x0;
		ProductMetadata_t3417118930 * L_1 = (ProductMetadata_t3417118930 *)il2cpp_codegen_object_new(ProductMetadata_t3417118930_il2cpp_TypeInfo_var);
		ProductMetadata__ctor_m3530766301(L_1, /*hidden argument*/NULL);
		Product_t3244410059 * L_2 = (Product_t3244410059 *)il2cpp_codegen_object_new(Product_t3244410059_il2cpp_TypeInfo_var);
		Product__ctor_m3347204444(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		Product_t3244410059 * L_3 = V_0;
		return L_3;
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
// System.Void UnityEngine.Purchasing.SimpleCatalogProvider::.ctor(System.Action`1<System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>>)
extern "C"  void SimpleCatalogProvider__ctor_m3985646308 (SimpleCatalogProvider_t2437048597 * __this, Action_1_t3544579098 * ___func0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Action_1_t3544579098 * L_0 = ___func0;
		__this->set_m_Func_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.SimpleCatalogProvider::FetchProducts(System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>)
extern "C"  void SimpleCatalogProvider_FetchProducts_m3199640622 (SimpleCatalogProvider_t2437048597 * __this, Action_1_t3372111503 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleCatalogProvider_FetchProducts_m3199640622_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t3544579098 * L_0 = __this->get_m_Func_0();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t3544579098 * L_1 = __this->get_m_Func_0();
		Action_1_t3372111503 * L_2 = ___callback0;
		NullCheck(L_1);
		Action_1_Invoke_m3970742127(L_1, L_2, /*hidden argument*/Action_1_Invoke_m3970742127_RuntimeMethod_var);
	}

IL_001a:
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
// System.Void UnityEngine.Purchasing.StoreListenerProxy::.ctor(UnityEngine.Purchasing.IStoreListener,UnityEngine.Purchasing.AnalyticsReporter,UnityEngine.Purchasing.IExtensionProvider)
extern "C"  void StoreListenerProxy__ctor_m3577065163 (StoreListenerProxy_t3004682744 * __this, RuntimeObject* ___forwardTo0, AnalyticsReporter_t2806096347 * ___analytics1, RuntimeObject* ___extensions2, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___forwardTo0;
		__this->set_m_ForwardTo_1(L_0);
		AnalyticsReporter_t2806096347 * L_1 = ___analytics1;
		__this->set_m_Analytics_0(L_1);
		RuntimeObject* L_2 = ___extensions2;
		__this->set_m_Extensions_2(L_2);
		return;
	}
}
// System.Void UnityEngine.Purchasing.StoreListenerProxy::OnInitialized(UnityEngine.Purchasing.IStoreController)
extern "C"  void StoreListenerProxy_OnInitialized_m1679091803 (StoreListenerProxy_t3004682744 * __this, RuntimeObject* ___controller0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StoreListenerProxy_OnInitialized_m1679091803_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_m_ForwardTo_1();
		RuntimeObject* L_1 = ___controller0;
		RuntimeObject* L_2 = __this->get_m_Extensions_2();
		NullCheck(L_0);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(3 /* System.Void UnityEngine.Purchasing.IStoreListener::OnInitialized(UnityEngine.Purchasing.IStoreController,UnityEngine.Purchasing.IExtensionProvider) */, IStoreListener_t2917505531_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void UnityEngine.Purchasing.StoreListenerProxy::OnInitializeFailed(UnityEngine.Purchasing.InitializationFailureReason)
extern "C"  void StoreListenerProxy_OnInitializeFailed_m1457808528 (StoreListenerProxy_t3004682744 * __this, int32_t ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StoreListenerProxy_OnInitializeFailed_m1457808528_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_m_ForwardTo_1();
		int32_t L_1 = ___error0;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void UnityEngine.Purchasing.IStoreListener::OnInitializeFailed(UnityEngine.Purchasing.InitializationFailureReason) */, IStoreListener_t2917505531_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.StoreListenerProxy::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
extern "C"  int32_t StoreListenerProxy_ProcessPurchase_m759558423 (StoreListenerProxy_t3004682744 * __this, PurchaseEventArgs_t3033159582 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StoreListenerProxy_ProcessPurchase_m759558423_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		AnalyticsReporter_t2806096347 * L_0 = __this->get_m_Analytics_0();
		PurchaseEventArgs_t3033159582 * L_1 = ___e0;
		NullCheck(L_1);
		Product_t3244410059 * L_2 = PurchaseEventArgs_get_purchasedProduct_m3472521060(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		AnalyticsReporter_OnPurchaseSucceeded_m2686746169(L_0, L_2, /*hidden argument*/NULL);
		RuntimeObject* L_3 = __this->get_m_ForwardTo_1();
		PurchaseEventArgs_t3033159582 * L_4 = ___e0;
		NullCheck(L_3);
		int32_t L_5 = InterfaceFuncInvoker1< int32_t, PurchaseEventArgs_t3033159582 * >::Invoke(1 /* UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.IStoreListener::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs) */, IStoreListener_t2917505531_il2cpp_TypeInfo_var, L_3, L_4);
		V_0 = L_5;
		goto IL_0024;
	}

IL_0024:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Void UnityEngine.Purchasing.StoreListenerProxy::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
extern "C"  void StoreListenerProxy_OnPurchaseFailed_m1474736034 (StoreListenerProxy_t3004682744 * __this, Product_t3244410059 * ___i0, int32_t ___p1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StoreListenerProxy_OnPurchaseFailed_m1474736034_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AnalyticsReporter_t2806096347 * L_0 = __this->get_m_Analytics_0();
		Product_t3244410059 * L_1 = ___i0;
		int32_t L_2 = ___p1;
		NullCheck(L_0);
		AnalyticsReporter_OnPurchaseFailed_m4151707250(L_0, L_1, L_2, /*hidden argument*/NULL);
		RuntimeObject* L_3 = __this->get_m_ForwardTo_1();
		Product_t3244410059 * L_4 = ___i0;
		int32_t L_5 = ___p1;
		NullCheck(L_3);
		InterfaceActionInvoker2< Product_t3244410059 *, int32_t >::Invoke(2 /* System.Void UnityEngine.Purchasing.IStoreListener::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason) */, IStoreListener_t2917505531_il2cpp_TypeInfo_var, L_3, L_4, L_5);
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
// System.Void UnityEngine.Purchasing.TransactionLog::.ctor(UnityEngine.ILogger,System.String)
extern "C"  void TransactionLog__ctor_m1598720892 (TransactionLog_t937968217 * __this, RuntimeObject* ___logger0, String_t* ___persistentDataPath1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransactionLog__ctor_m1598720892_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___logger0;
		__this->set_logger_0(L_0);
		String_t* L_1 = ___persistentDataPath1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_3 = ___persistentDataPath1;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_4 = Path_Combine_m3389272516(NULL /*static, unused*/, L_3, _stringLiteral1947076759, /*hidden argument*/NULL);
		String_t* L_5 = Path_Combine_m3389272516(NULL /*static, unused*/, L_4, _stringLiteral3953762712, /*hidden argument*/NULL);
		__this->set_persistentDataPath_1(L_5);
	}

IL_0036:
	{
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.TransactionLog::HasRecordOf(System.String)
extern "C"  bool TransactionLog_HasRecordOf_m709540537 (TransactionLog_t937968217 * __this, String_t* ___transactionID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransactionLog_HasRecordOf_m709540537_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		String_t* L_0 = ___transactionID0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = __this->get_persistentDataPath_1();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}

IL_001c:
	{
		V_0 = (bool)0;
		goto IL_0035;
	}

IL_0023:
	{
		String_t* L_4 = ___transactionID0;
		String_t* L_5 = TransactionLog_GetRecordPath_m4193031146(__this, L_4, /*hidden argument*/NULL);
		bool L_6 = Directory_Exists_m1484791558(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0035;
	}

IL_0035:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Void UnityEngine.Purchasing.TransactionLog::Record(System.String)
extern "C"  void TransactionLog_Record_m1959187216 (TransactionLog_t937968217 * __this, String_t* ___transactionID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransactionLog_Record_m1959187216_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Exception_t * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___transactionID0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_004d;
		}
	}
	{
		String_t* L_2 = __this->get_persistentDataPath_1();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_004d;
		}
	}
	{
		String_t* L_4 = ___transactionID0;
		String_t* L_5 = TransactionLog_GetRecordPath_m4193031146(__this, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		String_t* L_6 = V_0;
		Directory_CreateDirectory_m751642867(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		goto IL_004c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0033;
		throw e;
	}

CATCH_0033:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t *)__exception_local);
		RuntimeObject* L_7 = __this->get_logger_0();
		Exception_t * L_8 = V_1;
		NullCheck(L_8);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_8);
		NullCheck(L_7);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(2 /* System.Void UnityEngine.ILogger::Log(System.Object) */, ILogger_t2607134790_il2cpp_TypeInfo_var, L_7, L_9);
		goto IL_004c;
	} // end catch (depth: 1)

IL_004c:
	{
	}

IL_004d:
	{
		return;
	}
}
// System.String UnityEngine.Purchasing.TransactionLog::GetRecordPath(System.String)
extern "C"  String_t* TransactionLog_GetRecordPath_m4193031146 (TransactionLog_t937968217 * __this, String_t* ___transactionID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransactionLog_GetRecordPath_m4193031146_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_persistentDataPath_1();
		String_t* L_1 = ___transactionID0;
		String_t* L_2 = TransactionLog_ComputeHash_m480528600(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_3 = Path_Combine_m3389272516(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String UnityEngine.Purchasing.TransactionLog::ComputeHash(System.String)
extern "C"  String_t* TransactionLog_ComputeHash_m480528600 (RuntimeObject * __this /* static, unused */, String_t* ___transactionID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransactionLog_ComputeHash_m480528600_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	int32_t V_1 = 0;
	StringBuilder_t * V_2 = NULL;
	uint8_t V_3 = 0x0;
	ByteU5BU5D_t4116647657* V_4 = NULL;
	int32_t V_5 = 0;
	String_t* V_6 = NULL;
	{
		V_0 = ((int64_t)3074457345618258791LL);
		V_1 = 0;
		goto IL_002f;
	}

IL_0012:
	{
		uint64_t L_0 = V_0;
		String_t* L_1 = ___transactionID0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3 = String_get_Chars_m2986988803(L_1, L_2, /*hidden argument*/NULL);
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, (int64_t)(((int64_t)((uint64_t)L_3)))));
		uint64_t L_4 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_4, (int64_t)((int64_t)3074457345618258799LL)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_002f:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___transactionID0;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m3847582255(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0012;
		}
	}
	{
		StringBuilder_t * L_9 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2367297767(L_9, ((int32_t)16), /*hidden argument*/NULL);
		V_2 = L_9;
		uint64_t L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_11 = BitConverter_GetBytes_m2889955588(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		V_4 = L_11;
		V_5 = 0;
		goto IL_0074;
	}

IL_0054:
	{
		ByteU5BU5D_t4116647657* L_12 = V_4;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_3 = L_15;
		StringBuilder_t * L_16 = V_2;
		uint8_t L_17 = V_3;
		uint8_t L_18 = L_17;
		RuntimeObject * L_19 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		StringBuilder_AppendFormat_m3016532472(L_16, _stringLiteral2238338897, L_19, /*hidden argument*/NULL);
		int32_t L_20 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0074:
	{
		int32_t L_21 = V_5;
		ByteU5BU5D_t4116647657* L_22 = V_4;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))))))
		{
			goto IL_0054;
		}
	}
	{
		StringBuilder_t * L_23 = V_2;
		NullCheck(L_23);
		String_t* L_24 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
		V_6 = L_24;
		goto IL_008c;
	}

IL_008c:
	{
		String_t* L_25 = V_6;
		return L_25;
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
// System.Void UnityEngine.Purchasing.UnityAnalytics::.ctor()
extern "C"  void UnityAnalytics__ctor_m3398157862 (UnityAnalytics_t1988537891 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityAnalytics::Transaction(System.String,System.Decimal,System.String,System.String,System.String)
extern "C"  void UnityAnalytics_Transaction_m2067512240 (UnityAnalytics_t1988537891 * __this, String_t* ___productId0, Decimal_t2948259380  ___price1, String_t* ___currency2, String_t* ___receipt3, String_t* ___signature4, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___productId0;
		Decimal_t2948259380  L_1 = ___price1;
		String_t* L_2 = ___currency2;
		String_t* L_3 = ___receipt3;
		String_t* L_4 = ___signature4;
		Analytics_Transaction_m1370258750(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityAnalytics::CustomEvent(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void UnityAnalytics_CustomEvent_m1282768783 (UnityAnalytics_t1988537891 * __this, String_t* ___name0, Dictionary_2_t2865362463 * ___data1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		Dictionary_2_t2865362463 * L_1 = ___data1;
		Analytics_CustomEvent_m3835919949(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.UnityPurchasing::Initialize(UnityEngine.Purchasing.IStoreListener,UnityEngine.Purchasing.ConfigurationBuilder)
extern "C"  void UnityPurchasing_Initialize_m1836262307 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___listener0, ConfigurationBuilder_t1618671084 * ___builder1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityPurchasing_Initialize_m1836262307_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___listener0;
		ConfigurationBuilder_t1618671084 * L_1 = ___builder1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = Debug_get_unityLogger_m2239795986(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_3 = Application_get_persistentDataPath_m1428108154(NULL /*static, unused*/, /*hidden argument*/NULL);
		UnityAnalytics_t1988537891 * L_4 = (UnityAnalytics_t1988537891 *)il2cpp_codegen_object_new(UnityAnalytics_t1988537891_il2cpp_TypeInfo_var);
		UnityAnalytics__ctor_m3398157862(L_4, /*hidden argument*/NULL);
		ConfigurationBuilder_t1618671084 * L_5 = ___builder1;
		NullCheck(L_5);
		PurchasingFactory_t4012818695 * L_6 = ConfigurationBuilder_get_factory_m4264938587(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject* L_7 = PurchasingFactory_GetCatalogProvider_m3183986021(L_6, /*hidden argument*/NULL);
		UnityPurchasing_Initialize_m2554911097(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityPurchasing::Initialize(UnityEngine.Purchasing.IStoreListener,UnityEngine.Purchasing.ConfigurationBuilder,UnityEngine.ILogger,System.String,UnityEngine.Purchasing.IUnityAnalytics,UnityEngine.Purchasing.Extension.ICatalogProvider)
extern "C"  void UnityPurchasing_Initialize_m2554911097 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___listener0, ConfigurationBuilder_t1618671084 * ___builder1, RuntimeObject* ___logger2, String_t* ___persistentDatapath3, RuntimeObject* ___analytics4, RuntimeObject* ___catalog5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityPurchasing_Initialize_m2554911097_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeU3Ec__AnonStorey0_t1727991359 * V_0 = NULL;
	TransactionLog_t937968217 * V_1 = NULL;
	AnalyticsReporter_t2806096347 * V_2 = NULL;
	{
		U3CInitializeU3Ec__AnonStorey0_t1727991359 * L_0 = (U3CInitializeU3Ec__AnonStorey0_t1727991359 *)il2cpp_codegen_object_new(U3CInitializeU3Ec__AnonStorey0_t1727991359_il2cpp_TypeInfo_var);
		U3CInitializeU3Ec__AnonStorey0__ctor_m867459580(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___logger2;
		String_t* L_2 = ___persistentDatapath3;
		TransactionLog_t937968217 * L_3 = (TransactionLog_t937968217 *)il2cpp_codegen_object_new(TransactionLog_t937968217_il2cpp_TypeInfo_var);
		TransactionLog__ctor_m1598720892(L_3, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		U3CInitializeU3Ec__AnonStorey0_t1727991359 * L_4 = V_0;
		TransactionLog_t937968217 * L_5 = V_1;
		RuntimeObject* L_6 = ___logger2;
		ConfigurationBuilder_t1618671084 * L_7 = ___builder1;
		NullCheck(L_7);
		PurchasingFactory_t4012818695 * L_8 = ConfigurationBuilder_get_factory_m4264938587(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		RuntimeObject* L_9 = PurchasingFactory_get_service_m1834406598(L_8, /*hidden argument*/NULL);
		ConfigurationBuilder_t1618671084 * L_10 = ___builder1;
		NullCheck(L_10);
		PurchasingFactory_t4012818695 * L_11 = ConfigurationBuilder_get_factory_m4264938587(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = PurchasingFactory_get_storeName_m2469232669(L_11, /*hidden argument*/NULL);
		PurchasingManager_t2174502701 * L_13 = (PurchasingManager_t2174502701 *)il2cpp_codegen_object_new(PurchasingManager_t2174502701_il2cpp_TypeInfo_var);
		PurchasingManager__ctor_m615616940(L_13, L_5, L_6, L_9, L_12, /*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_manager_0(L_13);
		RuntimeObject* L_14 = ___analytics4;
		AnalyticsReporter_t2806096347 * L_15 = (AnalyticsReporter_t2806096347 *)il2cpp_codegen_object_new(AnalyticsReporter_t2806096347_il2cpp_TypeInfo_var);
		AnalyticsReporter__ctor_m1242352561(L_15, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		U3CInitializeU3Ec__AnonStorey0_t1727991359 * L_16 = V_0;
		RuntimeObject* L_17 = ___listener0;
		AnalyticsReporter_t2806096347 * L_18 = V_2;
		ConfigurationBuilder_t1618671084 * L_19 = ___builder1;
		NullCheck(L_19);
		PurchasingFactory_t4012818695 * L_20 = ConfigurationBuilder_get_factory_m4264938587(L_19, /*hidden argument*/NULL);
		StoreListenerProxy_t3004682744 * L_21 = (StoreListenerProxy_t3004682744 *)il2cpp_codegen_object_new(StoreListenerProxy_t3004682744_il2cpp_TypeInfo_var);
		StoreListenerProxy__ctor_m3577065163(L_21, L_17, L_18, L_20, /*hidden argument*/NULL);
		NullCheck(L_16);
		L_16->set_proxy_1(L_21);
		ConfigurationBuilder_t1618671084 * L_22 = ___builder1;
		NullCheck(L_22);
		bool L_23 = ConfigurationBuilder_get_useCatalogProvider_m110834416(L_22, /*hidden argument*/NULL);
		ConfigurationBuilder_t1618671084 * L_24 = ___builder1;
		NullCheck(L_24);
		HashSet_1_t3199643908 * L_25 = ConfigurationBuilder_get_products_m513767079(L_24, /*hidden argument*/NULL);
		RuntimeObject* L_26 = ___catalog5;
		U3CInitializeU3Ec__AnonStorey0_t1727991359 * L_27 = V_0;
		intptr_t L_28 = (intptr_t)U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m144825785_RuntimeMethod_var;
		Action_1_t3372111503 * L_29 = (Action_1_t3372111503 *)il2cpp_codegen_object_new(Action_1_t3372111503_il2cpp_TypeInfo_var);
		Action_1__ctor_m2299265044(L_29, L_27, L_28, /*hidden argument*/Action_1__ctor_m2299265044_RuntimeMethod_var);
		UnityPurchasing_FetchAndMergeProducts_m1882435942(NULL /*static, unused*/, L_23, L_25, L_26, L_29, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityPurchasing::FetchAndMergeProducts(System.Boolean,System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>,UnityEngine.Purchasing.Extension.ICatalogProvider,System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>)
extern "C"  void UnityPurchasing_FetchAndMergeProducts_m1882435942 (RuntimeObject * __this /* static, unused */, bool ___useCatalog0, HashSet_1_t3199643908 * ___localProductSet1, RuntimeObject* ___catalog2, Action_1_t3372111503 * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityPurchasing_FetchAndMergeProducts_m1882435942_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CFetchAndMergeProductsU3Ec__AnonStorey1_t3610355129 * V_0 = NULL;
	{
		U3CFetchAndMergeProductsU3Ec__AnonStorey1_t3610355129 * L_0 = (U3CFetchAndMergeProductsU3Ec__AnonStorey1_t3610355129 *)il2cpp_codegen_object_new(U3CFetchAndMergeProductsU3Ec__AnonStorey1_t3610355129_il2cpp_TypeInfo_var);
		U3CFetchAndMergeProductsU3Ec__AnonStorey1__ctor_m3292554412(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CFetchAndMergeProductsU3Ec__AnonStorey1_t3610355129 * L_1 = V_0;
		HashSet_1_t3199643908 * L_2 = ___localProductSet1;
		NullCheck(L_1);
		L_1->set_localProductSet_0(L_2);
		U3CFetchAndMergeProductsU3Ec__AnonStorey1_t3610355129 * L_3 = V_0;
		Action_1_t3372111503 * L_4 = ___callback3;
		NullCheck(L_3);
		L_3->set_callback_1(L_4);
		bool L_5 = ___useCatalog0;
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		RuntimeObject* L_6 = ___catalog2;
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		RuntimeObject* L_7 = ___catalog2;
		U3CFetchAndMergeProductsU3Ec__AnonStorey1_t3610355129 * L_8 = V_0;
		intptr_t L_9 = (intptr_t)U3CFetchAndMergeProductsU3Ec__AnonStorey1_U3CU3Em__0_m1422934616_RuntimeMethod_var;
		Action_1_t3372111503 * L_10 = (Action_1_t3372111503 *)il2cpp_codegen_object_new(Action_1_t3372111503_il2cpp_TypeInfo_var);
		Action_1__ctor_m2299265044(L_10, L_8, L_9, /*hidden argument*/Action_1__ctor_m2299265044_RuntimeMethod_var);
		NullCheck(L_7);
		InterfaceActionInvoker1< Action_1_t3372111503 * >::Invoke(0 /* System.Void UnityEngine.Purchasing.Extension.ICatalogProvider::FetchProducts(System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>) */, ICatalogProvider_t574371958_il2cpp_TypeInfo_var, L_7, L_10);
		goto IL_004d;
	}

IL_003a:
	{
		U3CFetchAndMergeProductsU3Ec__AnonStorey1_t3610355129 * L_11 = V_0;
		NullCheck(L_11);
		Action_1_t3372111503 * L_12 = L_11->get_callback_1();
		U3CFetchAndMergeProductsU3Ec__AnonStorey1_t3610355129 * L_13 = V_0;
		NullCheck(L_13);
		HashSet_1_t3199643908 * L_14 = L_13->get_localProductSet_0();
		NullCheck(L_12);
		Action_1_Invoke_m1665236704(L_12, L_14, /*hidden argument*/Action_1_Invoke_m1665236704_RuntimeMethod_var);
	}

IL_004d:
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
// System.Void UnityEngine.Purchasing.UnityPurchasing/<FetchAndMergeProducts>c__AnonStorey1::.ctor()
extern "C"  void U3CFetchAndMergeProductsU3Ec__AnonStorey1__ctor_m3292554412 (U3CFetchAndMergeProductsU3Ec__AnonStorey1_t3610355129 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityPurchasing/<FetchAndMergeProducts>c__AnonStorey1::<>m__0(System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>)
extern "C"  void U3CFetchAndMergeProductsU3Ec__AnonStorey1_U3CU3Em__0_m1422934616 (U3CFetchAndMergeProductsU3Ec__AnonStorey1_t3610355129 * __this, HashSet_1_t3199643908 * ___cloudProducts0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFetchAndMergeProductsU3Ec__AnonStorey1_U3CU3Em__0_m1422934616_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t3199643908 * V_0 = NULL;
	ProductDefinition_t339727138 * V_1 = NULL;
	Enumerator_t609853883  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		HashSet_1_t3199643908 * L_0 = __this->get_localProductSet_0();
		HashSet_1_t3199643908 * L_1 = (HashSet_1_t3199643908 *)il2cpp_codegen_object_new(HashSet_1_t3199643908_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m2810352290(L_1, L_0, /*hidden argument*/HashSet_1__ctor_m2810352290_RuntimeMethod_var);
		V_0 = L_1;
		HashSet_1_t3199643908 * L_2 = ___cloudProducts0;
		NullCheck(L_2);
		Enumerator_t609853883  L_3 = HashSet_1_GetEnumerator_m3437090163(L_2, /*hidden argument*/HashSet_1_GetEnumerator_m3437090163_RuntimeMethod_var);
		V_2 = L_3;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0034;
		}

IL_001a:
		{
			ProductDefinition_t339727138 * L_4 = Enumerator_get_Current_m585826552((&V_2), /*hidden argument*/Enumerator_get_Current_m585826552_RuntimeMethod_var);
			V_1 = L_4;
			HashSet_1_t3199643908 * L_5 = V_0;
			ProductDefinition_t339727138 * L_6 = V_1;
			NullCheck(L_5);
			HashSet_1_Remove_m2854925952(L_5, L_6, /*hidden argument*/HashSet_1_Remove_m2854925952_RuntimeMethod_var);
			HashSet_1_t3199643908 * L_7 = V_0;
			ProductDefinition_t339727138 * L_8 = V_1;
			NullCheck(L_7);
			HashSet_1_Add_m2871625864(L_7, L_8, /*hidden argument*/HashSet_1_Add_m2871625864_RuntimeMethod_var);
		}

IL_0034:
		{
			bool L_9 = Enumerator_MoveNext_m32644322((&V_2), /*hidden argument*/Enumerator_MoveNext_m32644322_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_001a;
			}
		}

IL_0040:
		{
			IL2CPP_LEAVE(0x53, FINALLY_0045);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m969545434((&V_2), /*hidden argument*/Enumerator_Dispose_m969545434_RuntimeMethod_var);
		IL2CPP_END_FINALLY(69)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_JUMP_TBL(0x53, IL_0053)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0053:
	{
		Action_1_t3372111503 * L_10 = __this->get_callback_1();
		HashSet_1_t3199643908 * L_11 = V_0;
		NullCheck(L_10);
		Action_1_Invoke_m1665236704(L_10, L_11, /*hidden argument*/Action_1_Invoke_m1665236704_RuntimeMethod_var);
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
// System.Void UnityEngine.Purchasing.UnityPurchasing/<Initialize>c__AnonStorey0::.ctor()
extern "C"  void U3CInitializeU3Ec__AnonStorey0__ctor_m867459580 (U3CInitializeU3Ec__AnonStorey0_t1727991359 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityPurchasing/<Initialize>c__AnonStorey0::<>m__0(System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>)
extern "C"  void U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m144825785 (U3CInitializeU3Ec__AnonStorey0_t1727991359 * __this, HashSet_1_t3199643908 * ___response0, const RuntimeMethod* method)
{
	{
		PurchasingManager_t2174502701 * L_0 = __this->get_manager_0();
		StoreListenerProxy_t3004682744 * L_1 = __this->get_proxy_1();
		HashSet_1_t3199643908 * L_2 = ___response0;
		NullCheck(L_0);
		PurchasingManager_Initialize_m774274131(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
