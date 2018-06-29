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
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// AppStoresSupport.AppStoreSetting
struct AppStoreSetting_t1592337179;
// AppStoresSupport.AppStoreSettings
struct AppStoreSettings_t2325796953;
// UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522;
// UnityEngine.Store.AppInfo
struct AppInfo_t2433711276;
// System.String
struct String_t;
// IAPDemo
struct IAPDemo_t3681080565;
// System.Collections.Generic.Dictionary`2<System.String,IAPDemoProductUI>
struct Dictionary_2_t708210053;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Purchasing.IStoreController
struct IStoreController_t2579314702;
// UnityEngine.Purchasing.IExtensionProvider
struct IExtensionProvider_t3180538779;
// UnityEngine.Purchasing.ProductCollection
struct ProductCollection_t2671956229;
// UnityEngine.Purchasing.Product[]
struct ProductU5BU5D_t2942947242;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Product>
struct IEnumerable_1_t2224262948;
// System.Action`1<UnityEngine.Purchasing.Product>
struct Action_1_t3416877654;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// UnityEngine.Purchasing.Product
struct Product_t3244410059;
// UnityEngine.Purchasing.ProductMetadata
struct ProductMetadata_t3417118930;
// System.String[]
struct StringU5BU5D_t1281789340;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t339727138;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1632706988;
// UnityEngine.Purchasing.SubscriptionManager
struct SubscriptionManager_t2975887760;
// UnityEngine.Purchasing.SubscriptionInfo
struct SubscriptionInfo_t2350244624;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2865362463;
// UnityEngine.Purchasing.PurchaseEventArgs
struct PurchaseEventArgs_t3033159582;
// UnityEngine.Purchasing.UnifiedReceipt
struct UnifiedReceipt_t1348780434;
// UnityEngine.Purchasing.UnityChannelPurchaseReceipt
struct UnityChannelPurchaseReceipt_t3342804115;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// UnityEngine.Purchasing.Extension.PurchaseFailureDescription
struct PurchaseFailureDescription_t437632294;
// IAPDemo/UnityChannelPurchaseError
struct UnityChannelPurchaseError_t2306817818;
// IAPDemo/<Awake>c__AnonStorey0
struct U3CAwakeU3Ec__AnonStorey0_t2364586269;
// UnityEngine.Purchasing.StandardPurchasingModule
struct StandardPurchasingModule_t2580735509;
// UnityEngine.Purchasing.ConfigurationBuilder
struct ConfigurationBuilder_t1618671084;
// UnityEngine.Purchasing.Extension.IPurchasingModule
struct IPurchasingModule_t960499109;
// UnityEngine.Purchasing.Extension.IPurchasingModule[]
struct IPurchasingModuleU5BU5D_t3784316456;
// UnityEngine.Purchasing.IMicrosoftConfiguration
struct IMicrosoftConfiguration_t981669916;
// UnityEngine.Purchasing.IMoolahConfiguration
struct IMoolahConfiguration_t131838389;
// UnityEngine.Purchasing.IUnityChannelConfiguration
struct IUnityChannelConfiguration_t528450575;
// UnityEngine.Purchasing.ProductCatalog
struct ProductCatalog_t3178009003;
// System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.ProductCatalogItem>
struct ICollection_1_t674602572;
// UnityEngine.Purchasing.ProductCatalogItem
struct ProductCatalogItem_t2141417634;
// System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.StoreID>
struct ICollection_1_t3522908863;
// UnityEngine.Purchasing.IDs
struct IDs_t697119909;
// UnityEngine.Purchasing.IAmazonConfiguration
struct IAmazonConfiguration_t4078561526;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>
struct HashSet_1_t3199643908;
// UnityEngine.Purchasing.ISamsungAppsConfiguration
struct ISamsungAppsConfiguration_t2882465226;
// UnityEngine.Purchasing.ITizenStoreConfiguration
struct ITizenStoreConfiguration_t2207403094;
// System.Action
struct Action_t1264377477;
// IAPDemo/UnityChannelLoginHandler
struct UnityChannelLoginHandler_t2949829254;
// System.Action`1<System.String>
struct Action_1_t2019918284;
// UnityEngine.Store.ILoginListener
struct ILoginListener_t828010398;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.UI.Button
struct Button_t4055032469;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t48803504;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t2581268647;
// System.Action`1<UnityEngine.Purchasing.RestoreTransactionIDState>
struct Action_1_t1412811613;
// System.Action`1<System.Boolean>
struct Action_1_t269755560;
// System.Action`1<UnityEngine.Store.UserInfo>
struct Action_1_t3058893588;
// IAPDemo/<ValidateButtonClick>c__AnonStorey1
struct U3CValidateButtonClickU3Ec__AnonStorey1_t541528072;
// System.Action`3<System.Boolean,System.String,System.String>
struct Action_3_t331451502;
// System.Action`3<System.Boolean,System.Object,System.Object>
struct Action_3_t3126256962;
// IAPDemoProductUI
struct IAPDemoProductUI_t922953754;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Store.UserInfo
struct UserInfo_t2886425993;
// UnityEngine.Purchasing.IStoreListener
struct IStoreListener_t2917505531;
// IAPDemo/UnityChannelPurchaseInfo
struct UnityChannelPurchaseInfo_t74063925;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// UnityEngine.Purchasing.CodelessIAPStoreListener
struct CodelessIAPStoreListener_t3553337218;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton>
struct List_1_t3820967359;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener>
struct List_1_t3473867730;
// UnityEngine.Purchasing.IAPButton
struct IAPButton_t2348892617;
// UnityEngine.Purchasing.IAPListener
struct IAPListener_t2001792988;
// UnityEngine.Purchasing.DemoInventory
struct DemoInventory_t843047770;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Purchasing.Product>
struct UnityEvent_1_t4126069563;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3961765668;
// UnityEngine.Events.UnityEvent`2<UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason>
struct UnityEvent_2_t1877158062;
// UnityEngine.Events.UnityEvent`2<System.Object,UnityEngine.Purchasing.PurchaseFailureReason>
struct UnityEvent_2_t1778150145;
// UnityEngine.Purchasing.IAPButton/OnPurchaseCompletedEvent
struct OnPurchaseCompletedEvent_t3721407765;
// UnityEngine.Purchasing.IAPButton/OnPurchaseFailedEvent
struct OnPurchaseFailedEvent_t1729542224;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>
struct List_1_t748791510;
// System.Collections.Generic.IList`1<UnityEngine.Purchasing.ProductCatalogPayout>
struct IList_1_t2739671321;
// UnityEngine.Purchasing.ProductCatalogPayout
struct ProductCatalogPayout_t924351538;
// UnityEngine.Purchasing.PayoutDefinition
struct PayoutDefinition_t3571684064;
// UnityEngine.Purchasing.PayoutDefinition[]
struct PayoutDefinitionU5BU5D_t274752929;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.PayoutDefinition>
struct IEnumerable_1_t2551536953;
// UnityEngine.Purchasing.IAPListener/OnPurchaseCompletedEvent
struct OnPurchaseCompletedEvent_t1675809258;
// UnityEngine.Purchasing.IAPListener/OnPurchaseFailedEvent
struct OnPurchaseFailedEvent_t800864861;
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
// UnityEngine.Purchasing.IAPButton[]
struct IAPButtonU5BU5D_t3405674740;
// UnityEngine.Purchasing.IAPListener[]
struct IAPListenerU5BU5D_t2531158325;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Purchasing.Product>
struct Dictionary_2_t3029666358;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product>
struct HashSet_1_t1809359533;
// System.Func`2<UnityEngine.Purchasing.Product,System.String>
struct Func_2_t1313482816;
// UnityEngine.Purchasing.PurchasingFactory
struct PurchasingFactory_t4012818695;
// UnityEngine.Purchasing.IProductCatalogImpl
struct IProductCatalogImpl_t4135604393;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogItem>
struct List_1_t3613492376;
// System.Collections.Generic.HashSet`1/Link<UnityEngine.Purchasing.ProductDefinition>[]
struct LinkU5BU5D_t1033830378;
// UnityEngine.Purchasing.ProductDefinition[]
struct ProductDefinitionU5BU5D_t2640912919;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Purchasing.ProductDefinition>
struct IEqualityComparer_1_t2447059156;
// IAPDemoProductUI[]
struct IAPDemoProductUIU5BU5D_t276283967;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,IAPDemoProductUI,System.Collections.DictionaryEntry>
struct Transform_1_t3421662979;
// UnityEngine.Purchasing.Extension.IPurchasingBinder
struct IPurchasingBinder_t3569785493;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>
struct Transform_1_t132201056;
// UnityEngine.Sprite
struct Sprite_t280657092;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.StoreID>
struct List_1_t2166831371;
// UnityEngine.Purchasing.LocalizedProductDescription
struct LocalizedProductDescription_t1808411718;
// UnityEngine.Purchasing.Price
struct Price_t1857690312;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.LocalizedProductDescription>
struct List_1_t3280486460;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogPayout>
struct List_1_t2396426280;
// UnityEngine.Purchasing.INativeStoreProvider
struct INativeStoreProvider_t2882146526;
// Uniject.IUtil
struct IUtil_t1069285358;
// UnityEngine.ILogger
struct ILogger_t2607134790;
// UnityEngine.Purchasing.IAsyncWebUtil
struct IAsyncWebUtil_t965808653;
// UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance
struct StoreInstance_t2416643455;
// System.Collections.Generic.Dictionary`2<UnityEngine.Purchasing.AppStore,System.String>
struct Dictionary_2_t2070795836;
// UnityEngine.Purchasing.CloudCatalogImpl
struct CloudCatalogImpl_t1580312503;
// UnityEngine.Purchasing.WinRTStore
struct WinRTStore_t2015085940;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1258266594;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.Purchasing.IAppleExtensions
struct IAppleExtensions_t4146644616;
// UnityEngine.Purchasing.IMoolahExtension
struct IMoolahExtension_t955300474;
// UnityEngine.Purchasing.ISamsungAppsExtensions
struct ISamsungAppsExtensions_t2712620151;
// UnityEngine.Purchasing.IMicrosoftExtensions
struct IMicrosoftExtensions_t4020186927;
// UnityEngine.Purchasing.IUnityChannelExtensions
struct IUnityChannelExtensions_t3299991497;
// UnityEngine.Purchasing.ITransactionHistoryExtensions
struct ITransactionHistoryExtensions_t1575111476;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;

extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t AppStoreSetting__ctor_m1040304863_MetadataUsageId;
extern RuntimeClass* AppStoreSetting_t1592337179_il2cpp_TypeInfo_var;
extern const uint32_t AppStoreSettings__ctor_m2778803367_MetadataUsageId;
extern RuntimeClass* AppInfo_t2433711276_il2cpp_TypeInfo_var;
extern const uint32_t AppStoreSettings_getAppInfo_m2124579387_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t708210053_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3039867741_RuntimeMethod_var;
extern const uint32_t IAPDemo__ctor_m4004975889_MetadataUsageId;
extern RuntimeClass* IStoreController_t2579314702_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t3416877654_il2cpp_TypeInfo_var;
extern RuntimeClass* IAppleExtensions_t4146644616_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* SubscriptionManager_t2975887760_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern RuntimeClass* Result_t1621722260_il2cpp_TypeInfo_var;
extern RuntimeClass* TimeSpan_t881159249_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t3736567304_il2cpp_TypeInfo_var;
extern const RuntimeMethod* IExtensionProvider_GetExtension_TisIAppleExtensions_t4146644616_m504093785_RuntimeMethod_var;
extern const RuntimeMethod* IExtensionProvider_GetExtension_TisISamsungAppsExtensions_t2712620151_m3179222989_RuntimeMethod_var;
extern const RuntimeMethod* IExtensionProvider_GetExtension_TisIMoolahExtension_t955300474_m531513961_RuntimeMethod_var;
extern const RuntimeMethod* IExtensionProvider_GetExtension_TisIMicrosoftExtensions_t4020186927_m325367026_RuntimeMethod_var;
extern const RuntimeMethod* IExtensionProvider_GetExtension_TisIUnityChannelExtensions_t3299991497_m1021587148_RuntimeMethod_var;
extern const RuntimeMethod* IExtensionProvider_GetExtension_TisITransactionHistoryExtensions_t1575111476_m1573233908_RuntimeMethod_var;
extern const RuntimeMethod* IAPDemo_OnDeferred_m1172906547_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m3094878739_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m131312521_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m2543911734_RuntimeMethod_var;
extern String_t* _stringLiteral2331215771;
extern String_t* _stringLiteral3786252490;
extern String_t* _stringLiteral3397410596;
extern String_t* _stringLiteral595808399;
extern String_t* _stringLiteral148283325;
extern String_t* _stringLiteral3256441211;
extern String_t* _stringLiteral2593462821;
extern String_t* _stringLiteral1355814968;
extern String_t* _stringLiteral3283110880;
extern String_t* _stringLiteral4256494885;
extern String_t* _stringLiteral1536436376;
extern String_t* _stringLiteral3319087000;
extern String_t* _stringLiteral3757744486;
extern String_t* _stringLiteral3108316854;
extern String_t* _stringLiteral57962479;
extern String_t* _stringLiteral542481671;
extern String_t* _stringLiteral840895148;
extern String_t* _stringLiteral1409169469;
extern const uint32_t IAPDemo_OnInitialized_m334520219_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t2865362463_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m87616083_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m3008302402_RuntimeMethod_var;
extern String_t* _stringLiteral1544471543;
extern String_t* _stringLiteral3264264274;
extern String_t* _stringLiteral3656700627;
extern String_t* _stringLiteral4000294732;
extern String_t* _stringLiteral4264431066;
extern String_t* _stringLiteral2284906924;
extern String_t* _stringLiteral417138101;
extern String_t* _stringLiteral1463486031;
extern String_t* _stringLiteral3920973500;
extern String_t* _stringLiteral701303090;
extern String_t* _stringLiteral701444615;
extern String_t* _stringLiteral2310334392;
extern String_t* _stringLiteral261946630;
extern const uint32_t IAPDemo_checkIfProductIsAvailableForSubscriptionManager_m2252612912_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern const RuntimeMethod* JsonUtility_FromJson_TisUnifiedReceipt_t1348780434_m2808270756_RuntimeMethod_var;
extern const RuntimeMethod* JsonUtility_FromJson_TisUnityChannelPurchaseReceipt_t3342804115_m179166322_RuntimeMethod_var;
extern String_t* _stringLiteral873561128;
extern String_t* _stringLiteral759623637;
extern String_t* _stringLiteral3595830757;
extern const uint32_t IAPDemo_ProcessPurchase_m1025265100_MetadataUsageId;
extern RuntimeClass* PurchaseFailureReason_t4243987912_il2cpp_TypeInfo_var;
extern RuntimeClass* ITransactionHistoryExtensions_t1575111476_il2cpp_TypeInfo_var;
extern RuntimeClass* StoreSpecificPurchaseErrorCode_t2338830946_il2cpp_TypeInfo_var;
extern RuntimeClass* IUnityChannelExtensions_t3299991497_il2cpp_TypeInfo_var;
extern const RuntimeMethod* JsonUtility_FromJson_TisUnityChannelPurchaseError_t2306817818_m3180240101_RuntimeMethod_var;
extern String_t* _stringLiteral968445703;
extern String_t* _stringLiteral2120516444;
extern String_t* _stringLiteral3428236755;
extern String_t* _stringLiteral2843555271;
extern String_t* _stringLiteral377345206;
extern const uint32_t IAPDemo_OnPurchaseFailed_m3292362954_MetadataUsageId;
extern String_t* _stringLiteral3828846158;
extern String_t* _stringLiteral3258212029;
extern String_t* _stringLiteral1924515939;
extern String_t* _stringLiteral1416590052;
extern const uint32_t IAPDemo_OnInitializeFailed_m2858599101_MetadataUsageId;
extern RuntimeClass* U3CAwakeU3Ec__AnonStorey0_t2364586269_il2cpp_TypeInfo_var;
extern RuntimeClass* StandardPurchasingModule_t2580735509_il2cpp_TypeInfo_var;
extern RuntimeClass* IPurchasingModuleU5BU5D_t3784316456_il2cpp_TypeInfo_var;
extern RuntimeClass* IMicrosoftConfiguration_t981669916_il2cpp_TypeInfo_var;
extern RuntimeClass* IMoolahConfiguration_t131838389_il2cpp_TypeInfo_var;
extern RuntimeClass* IUnityChannelConfiguration_t528450575_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t1121270523_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t2573988102_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t3522908863_il2cpp_TypeInfo_var;
extern RuntimeClass* IDs_t697119909_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t3969576814_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t1127327097_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* IAmazonConfiguration_t4078561526_il2cpp_TypeInfo_var;
extern RuntimeClass* ISamsungAppsConfiguration_t2882465226_il2cpp_TypeInfo_var;
extern RuntimeClass* ITizenStoreConfiguration_t2207403094_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_t1264377477_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityChannelLoginHandler_t2949829254_il2cpp_TypeInfo_var;
extern RuntimeClass* IAPDemo_t3681080565_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t2019918284_il2cpp_TypeInfo_var;
extern RuntimeClass* StoreService_t295887430_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ConfigurationBuilder_Configure_TisIMicrosoftConfiguration_t981669916_m1554999342_RuntimeMethod_var;
extern const RuntimeMethod* ConfigurationBuilder_Configure_TisIMoolahConfiguration_t131838389_m2841568386_RuntimeMethod_var;
extern const RuntimeMethod* ConfigurationBuilder_Configure_TisIUnityChannelConfiguration_t528450575_m1055773883_RuntimeMethod_var;
extern const RuntimeMethod* ConfigurationBuilder_Configure_TisIAmazonConfiguration_t4078561526_m1671488555_RuntimeMethod_var;
extern const RuntimeMethod* ConfigurationBuilder_Configure_TisISamsungAppsConfiguration_t2882465226_m1047328256_RuntimeMethod_var;
extern const RuntimeMethod* ConfigurationBuilder_Configure_TisITizenStoreConfiguration_t2207403094_m462687615_RuntimeMethod_var;
extern const RuntimeMethod* U3CAwakeU3Ec__AnonStorey0_U3CU3Em__0_m1899898258_RuntimeMethod_var;
extern const RuntimeMethod* IAPDemo_U3CAwakeU3Em__0_m4121386249_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m4251216884_RuntimeMethod_var;
extern const RuntimeMethod* U3CAwakeU3Ec__AnonStorey0_U3CU3Em__1_m3465982199_RuntimeMethod_var;
extern String_t* _stringLiteral1306434072;
extern String_t* _stringLiteral3454515133;
extern String_t* _stringLiteral1855265810;
extern String_t* _stringLiteral452379730;
extern String_t* _stringLiteral3407967981;
extern String_t* _stringLiteral3089325609;
extern String_t* _stringLiteral3006453006;
extern String_t* _stringLiteral403556492;
extern String_t* _stringLiteral1855392662;
extern String_t* _stringLiteral464954454;
extern String_t* _stringLiteral1833989869;
extern String_t* _stringLiteral3006518545;
extern String_t* _stringLiteral1537982486;
extern String_t* _stringLiteral2706948055;
extern String_t* _stringLiteral2216326893;
extern String_t* _stringLiteral2530894733;
extern String_t* _stringLiteral2575524749;
extern String_t* _stringLiteral1745396871;
extern String_t* _stringLiteral3434634371;
extern String_t* _stringLiteral1729256775;
extern String_t* _stringLiteral102996367;
extern String_t* _stringLiteral246042480;
extern String_t* _stringLiteral3596997650;
extern const uint32_t IAPDemo_Awake_m3175081473_MetadataUsageId;
extern String_t* _stringLiteral3509261071;
extern const uint32_t IAPDemo_OnTransactionsRestored_m3770337668_MetadataUsageId;
extern String_t* _stringLiteral2039047074;
extern const uint32_t IAPDemo_OnDeferred_m1172906547_MetadataUsageId;
extern RuntimeClass* UnityAction_t3245792599_il2cpp_TypeInfo_var;
extern const RuntimeMethod* IAPDemo_RestoreButtonClick_m3405629354_RuntimeMethod_var;
extern const RuntimeMethod* IAPDemo_LoginButtonClick_m922043656_RuntimeMethod_var;
extern const RuntimeMethod* IAPDemo_ValidateButtonClick_m3286037932_RuntimeMethod_var;
extern String_t* _stringLiteral651537131;
extern String_t* _stringLiteral695039966;
extern const uint32_t IAPDemo_InitUI_m164977490_MetadataUsageId;
extern String_t* _stringLiteral2732670492;
extern String_t* _stringLiteral1721179166;
extern String_t* _stringLiteral3720034263;
extern String_t* _stringLiteral106636276;
extern String_t* _stringLiteral429128857;
extern const uint32_t IAPDemo_PurchaseButtonClick_m2111771248_MetadataUsageId;
extern RuntimeClass* Action_1_t1412811613_il2cpp_TypeInfo_var;
extern RuntimeClass* IMoolahExtension_t955300474_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t269755560_il2cpp_TypeInfo_var;
extern RuntimeClass* ISamsungAppsExtensions_t2712620151_il2cpp_TypeInfo_var;
extern RuntimeClass* IMicrosoftExtensions_t4020186927_il2cpp_TypeInfo_var;
extern const RuntimeMethod* IAPDemo_U3CRestoreButtonClickU3Em__1_m981863705_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m2866643322_RuntimeMethod_var;
extern const RuntimeMethod* IAPDemo_OnTransactionsRestored_m3770337668_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m981112613_RuntimeMethod_var;
extern String_t* _stringLiteral2440287328;
extern const uint32_t IAPDemo_RestoreButtonClick_m3405629354_MetadataUsageId;
extern RuntimeClass* Action_1_t3058893588_il2cpp_TypeInfo_var;
extern const RuntimeMethod* IAPDemo_U3CLoginButtonClickU3Em__2_m1060723597_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m2345809161_RuntimeMethod_var;
extern const RuntimeMethod* IAPDemo_U3CLoginButtonClickU3Em__3_m305405626_RuntimeMethod_var;
extern String_t* _stringLiteral1833979193;
extern const uint32_t IAPDemo_LoginButtonClick_m922043656_MetadataUsageId;
extern RuntimeClass* U3CValidateButtonClickU3Ec__AnonStorey1_t541528072_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_3_t331451502_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CValidateButtonClickU3Ec__AnonStorey1_U3CU3Em__0_m1858270915_RuntimeMethod_var;
extern const RuntimeMethod* Action_3__ctor_m3635124332_RuntimeMethod_var;
extern String_t* _stringLiteral19748442;
extern const uint32_t IAPDemo_ValidateButtonClick_m3286037932_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_GetEnumerator_m1212213977_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2612823951_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m3043167188_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m421504343_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m1653159561_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Clear_m2652860274_RuntimeMethod_var;
extern const uint32_t IAPDemo_ClearProductUIs_m1509731126_MetadataUsageId;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisIAPDemoProductUI_t922953754_m357023114_RuntimeMethod_var;
extern const RuntimeMethod* IAPDemo_PurchaseButtonClick_m2111771248_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m4009054908_RuntimeMethod_var;
extern const uint32_t IAPDemo_AddProductUIs_m3325452711_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m1691599079_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m2894824968_RuntimeMethod_var;
extern const uint32_t IAPDemo_UpdateProductUI_m3067243867_MetadataUsageId;
extern const uint32_t IAPDemo_UpdateProductPendingUI_m815689020_MetadataUsageId;
extern RuntimeClass* ProductType_t1868976581_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3456056139;
extern String_t* _stringLiteral646178060;
extern String_t* _stringLiteral1262761478;
extern const uint32_t IAPDemo_LogProductDefinitions_m1832835333_MetadataUsageId;
extern String_t* _stringLiteral589146054;
extern const uint32_t IAPDemo_U3CAwakeU3Em__0_m4121386249_MetadataUsageId;
extern RuntimeClass* RestoreTransactionIDState_t1240344018_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral626829109;
extern const uint32_t IAPDemo_U3CRestoreButtonClickU3Em__1_m981863705_MetadataUsageId;
extern String_t* _stringLiteral2232640341;
extern const uint32_t IAPDemo_U3CLoginButtonClickU3Em__2_m1060723597_MetadataUsageId;
extern String_t* _stringLiteral1098625566;
extern const uint32_t IAPDemo_U3CLoginButtonClickU3Em__3_m305405626_MetadataUsageId;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3660040476;
extern const uint32_t U3CValidateButtonClickU3Ec__AnonStorey1_U3CU3Em__0_m1858270915_MetadataUsageId;
extern const RuntimeMethod* Action_1_Invoke_m888793725_RuntimeMethod_var;
extern const uint32_t UnityChannelLoginHandler_OnInitializeFailed_m1407566223_MetadataUsageId;
extern const RuntimeMethod* Action_1_Invoke_m3514176011_RuntimeMethod_var;
extern const uint32_t UnityChannelLoginHandler_OnLogin_m469067565_MetadataUsageId;
extern const uint32_t UnityChannelLoginHandler_OnLoginFailed_m4074641833_MetadataUsageId;
extern String_t* _stringLiteral3073018993;
extern String_t* _stringLiteral1513940635;
extern const uint32_t IAPDemoProductUI_SetProduct_m1416471812_MetadataUsageId;
extern String_t* _stringLiteral541264700;
extern const uint32_t IAPDemoProductUI_SetPendingTime_m907117440_MetadataUsageId;
extern const uint32_t IAPDemoProductUI_PurchaseButtonClick_m3315873808_MetadataUsageId;
extern String_t* _stringLiteral1976128950;
extern String_t* _stringLiteral3450517398;
extern const uint32_t IAPDemoProductUI_ReceiptButtonClick_m2915488774_MetadataUsageId;
extern RuntimeClass* List_1_t3820967359_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3473867730_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2463266095_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1649537636_RuntimeMethod_var;
extern const uint32_t CodelessIAPStoreListener__ctor_m4057698661_MetadataUsageId;
extern RuntimeClass* CodelessIAPStoreListener_t3553337218_il2cpp_TypeInfo_var;
extern const uint32_t CodelessIAPStoreListener_InitializeCodelessPurchasingOnLoad_m3874893303_MetadataUsageId;
extern const uint32_t CodelessIAPStoreListener_InitializePurchasing_m1015531517_MetadataUsageId;
extern const uint32_t CodelessIAPStoreListener_get_Instance_m3072254248_MetadataUsageId;
extern String_t* _stringLiteral1063918814;
extern const uint32_t CodelessIAPStoreListener_CreateCodelessIAPStoreListenerInstance_m1343785826_MetadataUsageId;
extern const uint32_t CodelessIAPStoreListener_HasProductInCatalog_m3373328566_MetadataUsageId;
extern String_t* _stringLiteral2515816788;
extern const uint32_t CodelessIAPStoreListener_GetProduct_m2762398532_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m1783141595_RuntimeMethod_var;
extern const uint32_t CodelessIAPStoreListener_AddButton_m3372830185_MetadataUsageId;
extern const RuntimeMethod* List_1_Remove_m3261290539_RuntimeMethod_var;
extern const uint32_t CodelessIAPStoreListener_RemoveButton_m3944861536_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m3263351746_RuntimeMethod_var;
extern const uint32_t CodelessIAPStoreListener_AddListener_m1184156019_MetadataUsageId;
extern const RuntimeMethod* List_1_Remove_m1956914710_RuntimeMethod_var;
extern const uint32_t CodelessIAPStoreListener_RemoveListener_m1699040040_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m3867390102_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2512686566_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1263452849_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m1282679402_RuntimeMethod_var;
extern String_t* _stringLiteral475512004;
extern const uint32_t CodelessIAPStoreListener_InitiatePurchase_m520296817_MetadataUsageId;
extern const uint32_t CodelessIAPStoreListener_OnInitialized_m1429099854_MetadataUsageId;
extern RuntimeClass* InitializationFailureReason_t2740567704_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3506202795;
extern const uint32_t CodelessIAPStoreListener_OnInitializeFailed_m2116155506_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m2016754886_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2005020076_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1661977231_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3008095435_RuntimeMethod_var;
extern String_t* _stringLiteral2818345065;
extern String_t* _stringLiteral2066259647;
extern const uint32_t CodelessIAPStoreListener_ProcessPurchase_m3533788235_MetadataUsageId;
extern String_t* _stringLiteral1608353848;
extern String_t* _stringLiteral3176408653;
extern const uint32_t CodelessIAPStoreListener_OnPurchaseFailed_m764420626_MetadataUsageId;
extern String_t* _stringLiteral3485385706;
extern String_t* _stringLiteral1254475834;
extern const uint32_t DemoInventory_Fulfill_m706429843_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisButton_t4055032469_m3901478567_RuntimeMethod_var;
extern const RuntimeMethod* IAPButton_PurchaseProduct_m875862864_RuntimeMethod_var;
extern const RuntimeMethod* IAPButton_Restore_m2955366781_RuntimeMethod_var;
extern String_t* _stringLiteral690358107;
extern String_t* _stringLiteral256443729;
extern String_t* _stringLiteral3452614526;
extern const uint32_t IAPButton_Start_m1145871523_MetadataUsageId;
extern const uint32_t IAPButton_OnEnable_m584573390_MetadataUsageId;
extern String_t* _stringLiteral3847444373;
extern const uint32_t IAPButton_PurchaseProduct_m875862864_MetadataUsageId;
extern RuntimeClass* RuntimePlatform_t4159857903_il2cpp_TypeInfo_var;
extern const RuntimeMethod* IAPButton_OnTransactionsRestored_m3850310722_RuntimeMethod_var;
extern const RuntimeMethod* IAPButton_U3CRestoreU3Em__0_m1310047832_RuntimeMethod_var;
extern String_t* _stringLiteral3174583417;
extern const uint32_t IAPButton_Restore_m2955366781_MetadataUsageId;
extern String_t* _stringLiteral1399266124;
extern const uint32_t IAPButton_OnTransactionsRestored_m3850310722_MetadataUsageId;
extern const RuntimeMethod* UnityEvent_1_Invoke_m3876822971_RuntimeMethod_var;
extern String_t* _stringLiteral566216089;
extern const uint32_t IAPButton_ProcessPurchase_m2399959099_MetadataUsageId;
extern const RuntimeMethod* UnityEvent_2_Invoke_m1220352153_RuntimeMethod_var;
extern String_t* _stringLiteral1869384512;
extern const uint32_t IAPButton_OnPurchaseFailed_m2987162176_MetadataUsageId;
extern const uint32_t IAPButton_UpdateText_m735950863_MetadataUsageId;
extern const RuntimeMethod* UnityEvent_1__ctor_m1100375389_RuntimeMethod_var;
extern const uint32_t OnPurchaseCompletedEvent__ctor_m1414630499_MetadataUsageId;
extern const RuntimeMethod* UnityEvent_2__ctor_m1193818750_RuntimeMethod_var;
extern const uint32_t OnPurchaseFailedEvent__ctor_m1072846695_MetadataUsageId;
extern RuntimeClass* List_1_t748791510_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t4199171723_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t1356922006_il2cpp_TypeInfo_var;
extern RuntimeClass* PayoutDefinition_t3571684064_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2305681321_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1667627229_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m566969820_RuntimeMethod_var;
extern const uint32_t IAPConfigurationHelper_PopulateConfigurationBuilder_m499335247_MetadataUsageId;
extern const uint32_t IAPListener_OnEnable_m1345961561_MetadataUsageId;
extern String_t* _stringLiteral1573936324;
extern const uint32_t IAPListener_ProcessPurchase_m1466356441_MetadataUsageId;
extern String_t* _stringLiteral1932203019;
extern const uint32_t IAPListener_OnPurchaseFailed_m2281361415_MetadataUsageId;
extern const uint32_t OnPurchaseCompletedEvent__ctor_m1839664264_MetadataUsageId;
extern const uint32_t OnPurchaseFailedEvent__ctor_m2200691269_MetadataUsageId;

struct ProductU5BU5D_t2942947242;
struct StringU5BU5D_t1281789340;
struct ObjectU5BU5D_t2843939325;
struct IPurchasingModuleU5BU5D_t3784316456;
struct PayoutDefinitionU5BU5D_t274752929;


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
#ifndef U3CMODULEU3E_T692745567_H
#define U3CMODULEU3E_T692745567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745567 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745567_H
#ifndef UNITYCHANNELPURCHASERECEIPT_T3342804115_H
#define UNITYCHANNELPURCHASERECEIPT_T3342804115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.UnityChannelPurchaseReceipt
struct  UnityChannelPurchaseReceipt_t3342804115  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.UnityChannelPurchaseReceipt::storeSpecificId
	String_t* ___storeSpecificId_0;
	// System.String UnityEngine.Purchasing.UnityChannelPurchaseReceipt::transactionId
	String_t* ___transactionId_1;
	// System.String UnityEngine.Purchasing.UnityChannelPurchaseReceipt::orderQueryToken
	String_t* ___orderQueryToken_2;

public:
	inline static int32_t get_offset_of_storeSpecificId_0() { return static_cast<int32_t>(offsetof(UnityChannelPurchaseReceipt_t3342804115, ___storeSpecificId_0)); }
	inline String_t* get_storeSpecificId_0() const { return ___storeSpecificId_0; }
	inline String_t** get_address_of_storeSpecificId_0() { return &___storeSpecificId_0; }
	inline void set_storeSpecificId_0(String_t* value)
	{
		___storeSpecificId_0 = value;
		Il2CppCodeGenWriteBarrier((&___storeSpecificId_0), value);
	}

	inline static int32_t get_offset_of_transactionId_1() { return static_cast<int32_t>(offsetof(UnityChannelPurchaseReceipt_t3342804115, ___transactionId_1)); }
	inline String_t* get_transactionId_1() const { return ___transactionId_1; }
	inline String_t** get_address_of_transactionId_1() { return &___transactionId_1; }
	inline void set_transactionId_1(String_t* value)
	{
		___transactionId_1 = value;
		Il2CppCodeGenWriteBarrier((&___transactionId_1), value);
	}

	inline static int32_t get_offset_of_orderQueryToken_2() { return static_cast<int32_t>(offsetof(UnityChannelPurchaseReceipt_t3342804115, ___orderQueryToken_2)); }
	inline String_t* get_orderQueryToken_2() const { return ___orderQueryToken_2; }
	inline String_t** get_address_of_orderQueryToken_2() { return &___orderQueryToken_2; }
	inline void set_orderQueryToken_2(String_t* value)
	{
		___orderQueryToken_2 = value;
		Il2CppCodeGenWriteBarrier((&___orderQueryToken_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYCHANNELPURCHASERECEIPT_T3342804115_H
#ifndef UNIFIEDRECEIPT_T1348780434_H
#define UNIFIEDRECEIPT_T1348780434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.UnifiedReceipt
struct  UnifiedReceipt_t1348780434  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.UnifiedReceipt::Payload
	String_t* ___Payload_0;

public:
	inline static int32_t get_offset_of_Payload_0() { return static_cast<int32_t>(offsetof(UnifiedReceipt_t1348780434, ___Payload_0)); }
	inline String_t* get_Payload_0() const { return ___Payload_0; }
	inline String_t** get_address_of_Payload_0() { return &___Payload_0; }
	inline void set_Payload_0(String_t* value)
	{
		___Payload_0 = value;
		Il2CppCodeGenWriteBarrier((&___Payload_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFIEDRECEIPT_T1348780434_H
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
#ifndef CODELESSIAPSTORELISTENER_T3553337218_H
#define CODELESSIAPSTORELISTENER_T3553337218_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.CodelessIAPStoreListener
struct  CodelessIAPStoreListener_t3553337218  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton> UnityEngine.Purchasing.CodelessIAPStoreListener::activeButtons
	List_1_t3820967359 * ___activeButtons_1;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener> UnityEngine.Purchasing.CodelessIAPStoreListener::activeListeners
	List_1_t3473867730 * ___activeListeners_2;
	// UnityEngine.Purchasing.IStoreController UnityEngine.Purchasing.CodelessIAPStoreListener::controller
	RuntimeObject* ___controller_4;
	// UnityEngine.Purchasing.IExtensionProvider UnityEngine.Purchasing.CodelessIAPStoreListener::extensions
	RuntimeObject* ___extensions_5;
	// UnityEngine.Purchasing.ProductCatalog UnityEngine.Purchasing.CodelessIAPStoreListener::catalog
	ProductCatalog_t3178009003 * ___catalog_6;

public:
	inline static int32_t get_offset_of_activeButtons_1() { return static_cast<int32_t>(offsetof(CodelessIAPStoreListener_t3553337218, ___activeButtons_1)); }
	inline List_1_t3820967359 * get_activeButtons_1() const { return ___activeButtons_1; }
	inline List_1_t3820967359 ** get_address_of_activeButtons_1() { return &___activeButtons_1; }
	inline void set_activeButtons_1(List_1_t3820967359 * value)
	{
		___activeButtons_1 = value;
		Il2CppCodeGenWriteBarrier((&___activeButtons_1), value);
	}

	inline static int32_t get_offset_of_activeListeners_2() { return static_cast<int32_t>(offsetof(CodelessIAPStoreListener_t3553337218, ___activeListeners_2)); }
	inline List_1_t3473867730 * get_activeListeners_2() const { return ___activeListeners_2; }
	inline List_1_t3473867730 ** get_address_of_activeListeners_2() { return &___activeListeners_2; }
	inline void set_activeListeners_2(List_1_t3473867730 * value)
	{
		___activeListeners_2 = value;
		Il2CppCodeGenWriteBarrier((&___activeListeners_2), value);
	}

	inline static int32_t get_offset_of_controller_4() { return static_cast<int32_t>(offsetof(CodelessIAPStoreListener_t3553337218, ___controller_4)); }
	inline RuntimeObject* get_controller_4() const { return ___controller_4; }
	inline RuntimeObject** get_address_of_controller_4() { return &___controller_4; }
	inline void set_controller_4(RuntimeObject* value)
	{
		___controller_4 = value;
		Il2CppCodeGenWriteBarrier((&___controller_4), value);
	}

	inline static int32_t get_offset_of_extensions_5() { return static_cast<int32_t>(offsetof(CodelessIAPStoreListener_t3553337218, ___extensions_5)); }
	inline RuntimeObject* get_extensions_5() const { return ___extensions_5; }
	inline RuntimeObject** get_address_of_extensions_5() { return &___extensions_5; }
	inline void set_extensions_5(RuntimeObject* value)
	{
		___extensions_5 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_5), value);
	}

	inline static int32_t get_offset_of_catalog_6() { return static_cast<int32_t>(offsetof(CodelessIAPStoreListener_t3553337218, ___catalog_6)); }
	inline ProductCatalog_t3178009003 * get_catalog_6() const { return ___catalog_6; }
	inline ProductCatalog_t3178009003 ** get_address_of_catalog_6() { return &___catalog_6; }
	inline void set_catalog_6(ProductCatalog_t3178009003 * value)
	{
		___catalog_6 = value;
		Il2CppCodeGenWriteBarrier((&___catalog_6), value);
	}
};

struct CodelessIAPStoreListener_t3553337218_StaticFields
{
public:
	// UnityEngine.Purchasing.CodelessIAPStoreListener UnityEngine.Purchasing.CodelessIAPStoreListener::instance
	CodelessIAPStoreListener_t3553337218 * ___instance_0;
	// System.Boolean UnityEngine.Purchasing.CodelessIAPStoreListener::unityPurchasingInitialized
	bool ___unityPurchasingInitialized_3;
	// System.Boolean UnityEngine.Purchasing.CodelessIAPStoreListener::initializationComplete
	bool ___initializationComplete_7;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(CodelessIAPStoreListener_t3553337218_StaticFields, ___instance_0)); }
	inline CodelessIAPStoreListener_t3553337218 * get_instance_0() const { return ___instance_0; }
	inline CodelessIAPStoreListener_t3553337218 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(CodelessIAPStoreListener_t3553337218 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___instance_0), value);
	}

	inline static int32_t get_offset_of_unityPurchasingInitialized_3() { return static_cast<int32_t>(offsetof(CodelessIAPStoreListener_t3553337218_StaticFields, ___unityPurchasingInitialized_3)); }
	inline bool get_unityPurchasingInitialized_3() const { return ___unityPurchasingInitialized_3; }
	inline bool* get_address_of_unityPurchasingInitialized_3() { return &___unityPurchasingInitialized_3; }
	inline void set_unityPurchasingInitialized_3(bool value)
	{
		___unityPurchasingInitialized_3 = value;
	}

	inline static int32_t get_offset_of_initializationComplete_7() { return static_cast<int32_t>(offsetof(CodelessIAPStoreListener_t3553337218_StaticFields, ___initializationComplete_7)); }
	inline bool get_initializationComplete_7() const { return ___initializationComplete_7; }
	inline bool* get_address_of_initializationComplete_7() { return &___initializationComplete_7; }
	inline void set_initializationComplete_7(bool value)
	{
		___initializationComplete_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODELESSIAPSTORELISTENER_T3553337218_H
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
#ifndef LIST_1_T3820967359_H
#define LIST_1_T3820967359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton>
struct  List_1_t3820967359  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IAPButtonU5BU5D_t3405674740* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3820967359, ____items_1)); }
	inline IAPButtonU5BU5D_t3405674740* get__items_1() const { return ____items_1; }
	inline IAPButtonU5BU5D_t3405674740** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IAPButtonU5BU5D_t3405674740* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3820967359, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3820967359, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3820967359_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	IAPButtonU5BU5D_t3405674740* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3820967359_StaticFields, ___EmptyArray_4)); }
	inline IAPButtonU5BU5D_t3405674740* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline IAPButtonU5BU5D_t3405674740** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(IAPButtonU5BU5D_t3405674740* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3820967359_H
#ifndef LIST_1_T3473867730_H
#define LIST_1_T3473867730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener>
struct  List_1_t3473867730  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IAPListenerU5BU5D_t2531158325* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3473867730, ____items_1)); }
	inline IAPListenerU5BU5D_t2531158325* get__items_1() const { return ____items_1; }
	inline IAPListenerU5BU5D_t2531158325** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IAPListenerU5BU5D_t2531158325* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3473867730, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3473867730, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3473867730_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	IAPListenerU5BU5D_t2531158325* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3473867730_StaticFields, ___EmptyArray_4)); }
	inline IAPListenerU5BU5D_t2531158325* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline IAPListenerU5BU5D_t2531158325** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(IAPListenerU5BU5D_t2531158325* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3473867730_H
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
#ifndef UNITYCHANNELPURCHASEERROR_T2306817818_H
#define UNITYCHANNELPURCHASEERROR_T2306817818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IAPDemo/UnityChannelPurchaseError
struct  UnityChannelPurchaseError_t2306817818  : public RuntimeObject
{
public:
	// System.String IAPDemo/UnityChannelPurchaseError::error
	String_t* ___error_0;
	// IAPDemo/UnityChannelPurchaseInfo IAPDemo/UnityChannelPurchaseError::purchaseInfo
	UnityChannelPurchaseInfo_t74063925 * ___purchaseInfo_1;

public:
	inline static int32_t get_offset_of_error_0() { return static_cast<int32_t>(offsetof(UnityChannelPurchaseError_t2306817818, ___error_0)); }
	inline String_t* get_error_0() const { return ___error_0; }
	inline String_t** get_address_of_error_0() { return &___error_0; }
	inline void set_error_0(String_t* value)
	{
		___error_0 = value;
		Il2CppCodeGenWriteBarrier((&___error_0), value);
	}

	inline static int32_t get_offset_of_purchaseInfo_1() { return static_cast<int32_t>(offsetof(UnityChannelPurchaseError_t2306817818, ___purchaseInfo_1)); }
	inline UnityChannelPurchaseInfo_t74063925 * get_purchaseInfo_1() const { return ___purchaseInfo_1; }
	inline UnityChannelPurchaseInfo_t74063925 ** get_address_of_purchaseInfo_1() { return &___purchaseInfo_1; }
	inline void set_purchaseInfo_1(UnityChannelPurchaseInfo_t74063925 * value)
	{
		___purchaseInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___purchaseInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYCHANNELPURCHASEERROR_T2306817818_H
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
#ifndef PRODUCTCATALOG_T3178009003_H
#define PRODUCTCATALOG_T3178009003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.ProductCatalog
struct  ProductCatalog_t3178009003  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Purchasing.ProductCatalog::enableCodelessAutoInitialization
	bool ___enableCodelessAutoInitialization_1;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogItem> UnityEngine.Purchasing.ProductCatalog::products
	List_1_t3613492376 * ___products_2;

public:
	inline static int32_t get_offset_of_enableCodelessAutoInitialization_1() { return static_cast<int32_t>(offsetof(ProductCatalog_t3178009003, ___enableCodelessAutoInitialization_1)); }
	inline bool get_enableCodelessAutoInitialization_1() const { return ___enableCodelessAutoInitialization_1; }
	inline bool* get_address_of_enableCodelessAutoInitialization_1() { return &___enableCodelessAutoInitialization_1; }
	inline void set_enableCodelessAutoInitialization_1(bool value)
	{
		___enableCodelessAutoInitialization_1 = value;
	}

	inline static int32_t get_offset_of_products_2() { return static_cast<int32_t>(offsetof(ProductCatalog_t3178009003, ___products_2)); }
	inline List_1_t3613492376 * get_products_2() const { return ___products_2; }
	inline List_1_t3613492376 ** get_address_of_products_2() { return &___products_2; }
	inline void set_products_2(List_1_t3613492376 * value)
	{
		___products_2 = value;
		Il2CppCodeGenWriteBarrier((&___products_2), value);
	}
};

struct ProductCatalog_t3178009003_StaticFields
{
public:
	// UnityEngine.Purchasing.IProductCatalogImpl UnityEngine.Purchasing.ProductCatalog::instance
	RuntimeObject* ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(ProductCatalog_t3178009003_StaticFields, ___instance_0)); }
	inline RuntimeObject* get_instance_0() const { return ___instance_0; }
	inline RuntimeObject** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(RuntimeObject* value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRODUCTCATALOG_T3178009003_H
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
#ifndef U3CAWAKEU3EC__ANONSTOREY0_T2364586269_H
#define U3CAWAKEU3EC__ANONSTOREY0_T2364586269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IAPDemo/<Awake>c__AnonStorey0
struct  U3CAwakeU3Ec__AnonStorey0_t2364586269  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ConfigurationBuilder IAPDemo/<Awake>c__AnonStorey0::builder
	ConfigurationBuilder_t1618671084 * ___builder_0;
	// System.Action IAPDemo/<Awake>c__AnonStorey0::initializeUnityIap
	Action_t1264377477 * ___initializeUnityIap_1;
	// IAPDemo IAPDemo/<Awake>c__AnonStorey0::$this
	IAPDemo_t3681080565 * ___U24this_2;

public:
	inline static int32_t get_offset_of_builder_0() { return static_cast<int32_t>(offsetof(U3CAwakeU3Ec__AnonStorey0_t2364586269, ___builder_0)); }
	inline ConfigurationBuilder_t1618671084 * get_builder_0() const { return ___builder_0; }
	inline ConfigurationBuilder_t1618671084 ** get_address_of_builder_0() { return &___builder_0; }
	inline void set_builder_0(ConfigurationBuilder_t1618671084 * value)
	{
		___builder_0 = value;
		Il2CppCodeGenWriteBarrier((&___builder_0), value);
	}

	inline static int32_t get_offset_of_initializeUnityIap_1() { return static_cast<int32_t>(offsetof(U3CAwakeU3Ec__AnonStorey0_t2364586269, ___initializeUnityIap_1)); }
	inline Action_t1264377477 * get_initializeUnityIap_1() const { return ___initializeUnityIap_1; }
	inline Action_t1264377477 ** get_address_of_initializeUnityIap_1() { return &___initializeUnityIap_1; }
	inline void set_initializeUnityIap_1(Action_t1264377477 * value)
	{
		___initializeUnityIap_1 = value;
		Il2CppCodeGenWriteBarrier((&___initializeUnityIap_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CAwakeU3Ec__AnonStorey0_t2364586269, ___U24this_2)); }
	inline IAPDemo_t3681080565 * get_U24this_2() const { return ___U24this_2; }
	inline IAPDemo_t3681080565 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(IAPDemo_t3681080565 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CAWAKEU3EC__ANONSTOREY0_T2364586269_H
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
#ifndef UNITYCHANNELLOGINHANDLER_T2949829254_H
#define UNITYCHANNELLOGINHANDLER_T2949829254_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IAPDemo/UnityChannelLoginHandler
struct  UnityChannelLoginHandler_t2949829254  : public RuntimeObject
{
public:
	// System.Action IAPDemo/UnityChannelLoginHandler::initializeSucceededAction
	Action_t1264377477 * ___initializeSucceededAction_0;
	// System.Action`1<System.String> IAPDemo/UnityChannelLoginHandler::initializeFailedAction
	Action_1_t2019918284 * ___initializeFailedAction_1;
	// System.Action`1<UnityEngine.Store.UserInfo> IAPDemo/UnityChannelLoginHandler::loginSucceededAction
	Action_1_t3058893588 * ___loginSucceededAction_2;
	// System.Action`1<System.String> IAPDemo/UnityChannelLoginHandler::loginFailedAction
	Action_1_t2019918284 * ___loginFailedAction_3;

public:
	inline static int32_t get_offset_of_initializeSucceededAction_0() { return static_cast<int32_t>(offsetof(UnityChannelLoginHandler_t2949829254, ___initializeSucceededAction_0)); }
	inline Action_t1264377477 * get_initializeSucceededAction_0() const { return ___initializeSucceededAction_0; }
	inline Action_t1264377477 ** get_address_of_initializeSucceededAction_0() { return &___initializeSucceededAction_0; }
	inline void set_initializeSucceededAction_0(Action_t1264377477 * value)
	{
		___initializeSucceededAction_0 = value;
		Il2CppCodeGenWriteBarrier((&___initializeSucceededAction_0), value);
	}

	inline static int32_t get_offset_of_initializeFailedAction_1() { return static_cast<int32_t>(offsetof(UnityChannelLoginHandler_t2949829254, ___initializeFailedAction_1)); }
	inline Action_1_t2019918284 * get_initializeFailedAction_1() const { return ___initializeFailedAction_1; }
	inline Action_1_t2019918284 ** get_address_of_initializeFailedAction_1() { return &___initializeFailedAction_1; }
	inline void set_initializeFailedAction_1(Action_1_t2019918284 * value)
	{
		___initializeFailedAction_1 = value;
		Il2CppCodeGenWriteBarrier((&___initializeFailedAction_1), value);
	}

	inline static int32_t get_offset_of_loginSucceededAction_2() { return static_cast<int32_t>(offsetof(UnityChannelLoginHandler_t2949829254, ___loginSucceededAction_2)); }
	inline Action_1_t3058893588 * get_loginSucceededAction_2() const { return ___loginSucceededAction_2; }
	inline Action_1_t3058893588 ** get_address_of_loginSucceededAction_2() { return &___loginSucceededAction_2; }
	inline void set_loginSucceededAction_2(Action_1_t3058893588 * value)
	{
		___loginSucceededAction_2 = value;
		Il2CppCodeGenWriteBarrier((&___loginSucceededAction_2), value);
	}

	inline static int32_t get_offset_of_loginFailedAction_3() { return static_cast<int32_t>(offsetof(UnityChannelLoginHandler_t2949829254, ___loginFailedAction_3)); }
	inline Action_1_t2019918284 * get_loginFailedAction_3() const { return ___loginFailedAction_3; }
	inline Action_1_t2019918284 ** get_address_of_loginFailedAction_3() { return &___loginFailedAction_3; }
	inline void set_loginFailedAction_3(Action_1_t2019918284 * value)
	{
		___loginFailedAction_3 = value;
		Il2CppCodeGenWriteBarrier((&___loginFailedAction_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYCHANNELLOGINHANDLER_T2949829254_H
#ifndef USERINFO_T2886425993_H
#define USERINFO_T2886425993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Store.UserInfo
struct  UserInfo_t2886425993  : public RuntimeObject
{
public:
	// System.String UnityEngine.Store.UserInfo::<channel>k__BackingField
	String_t* ___U3CchannelU3Ek__BackingField_0;
	// System.String UnityEngine.Store.UserInfo::<userId>k__BackingField
	String_t* ___U3CuserIdU3Ek__BackingField_1;
	// System.String UnityEngine.Store.UserInfo::<userLoginToken>k__BackingField
	String_t* ___U3CuserLoginTokenU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CchannelU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UserInfo_t2886425993, ___U3CchannelU3Ek__BackingField_0)); }
	inline String_t* get_U3CchannelU3Ek__BackingField_0() const { return ___U3CchannelU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CchannelU3Ek__BackingField_0() { return &___U3CchannelU3Ek__BackingField_0; }
	inline void set_U3CchannelU3Ek__BackingField_0(String_t* value)
	{
		___U3CchannelU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CchannelU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CuserIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(UserInfo_t2886425993, ___U3CuserIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CuserIdU3Ek__BackingField_1() const { return ___U3CuserIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CuserIdU3Ek__BackingField_1() { return &___U3CuserIdU3Ek__BackingField_1; }
	inline void set_U3CuserIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CuserIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CuserIdU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CuserLoginTokenU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UserInfo_t2886425993, ___U3CuserLoginTokenU3Ek__BackingField_2)); }
	inline String_t* get_U3CuserLoginTokenU3Ek__BackingField_2() const { return ___U3CuserLoginTokenU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CuserLoginTokenU3Ek__BackingField_2() { return &___U3CuserLoginTokenU3Ek__BackingField_2; }
	inline void set_U3CuserLoginTokenU3Ek__BackingField_2(String_t* value)
	{
		___U3CuserLoginTokenU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CuserLoginTokenU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERINFO_T2886425993_H
#ifndef U3CVALIDATEBUTTONCLICKU3EC__ANONSTOREY1_T541528072_H
#define U3CVALIDATEBUTTONCLICKU3EC__ANONSTOREY1_T541528072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IAPDemo/<ValidateButtonClick>c__AnonStorey1
struct  U3CValidateButtonClickU3Ec__AnonStorey1_t541528072  : public RuntimeObject
{
public:
	// System.String IAPDemo/<ValidateButtonClick>c__AnonStorey1::txId
	String_t* ___txId_0;

public:
	inline static int32_t get_offset_of_txId_0() { return static_cast<int32_t>(offsetof(U3CValidateButtonClickU3Ec__AnonStorey1_t541528072, ___txId_0)); }
	inline String_t* get_txId_0() const { return ___txId_0; }
	inline String_t** get_address_of_txId_0() { return &___txId_0; }
	inline void set_txId_0(String_t* value)
	{
		___txId_0 = value;
		Il2CppCodeGenWriteBarrier((&___txId_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CVALIDATEBUTTONCLICKU3EC__ANONSTOREY1_T541528072_H
#ifndef UNITYCHANNELPURCHASEINFO_T74063925_H
#define UNITYCHANNELPURCHASEINFO_T74063925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IAPDemo/UnityChannelPurchaseInfo
struct  UnityChannelPurchaseInfo_t74063925  : public RuntimeObject
{
public:
	// System.String IAPDemo/UnityChannelPurchaseInfo::productCode
	String_t* ___productCode_0;
	// System.String IAPDemo/UnityChannelPurchaseInfo::gameOrderId
	String_t* ___gameOrderId_1;
	// System.String IAPDemo/UnityChannelPurchaseInfo::orderQueryToken
	String_t* ___orderQueryToken_2;

public:
	inline static int32_t get_offset_of_productCode_0() { return static_cast<int32_t>(offsetof(UnityChannelPurchaseInfo_t74063925, ___productCode_0)); }
	inline String_t* get_productCode_0() const { return ___productCode_0; }
	inline String_t** get_address_of_productCode_0() { return &___productCode_0; }
	inline void set_productCode_0(String_t* value)
	{
		___productCode_0 = value;
		Il2CppCodeGenWriteBarrier((&___productCode_0), value);
	}

	inline static int32_t get_offset_of_gameOrderId_1() { return static_cast<int32_t>(offsetof(UnityChannelPurchaseInfo_t74063925, ___gameOrderId_1)); }
	inline String_t* get_gameOrderId_1() const { return ___gameOrderId_1; }
	inline String_t** get_address_of_gameOrderId_1() { return &___gameOrderId_1; }
	inline void set_gameOrderId_1(String_t* value)
	{
		___gameOrderId_1 = value;
		Il2CppCodeGenWriteBarrier((&___gameOrderId_1), value);
	}

	inline static int32_t get_offset_of_orderQueryToken_2() { return static_cast<int32_t>(offsetof(UnityChannelPurchaseInfo_t74063925, ___orderQueryToken_2)); }
	inline String_t* get_orderQueryToken_2() const { return ___orderQueryToken_2; }
	inline String_t** get_address_of_orderQueryToken_2() { return &___orderQueryToken_2; }
	inline void set_orderQueryToken_2(String_t* value)
	{
		___orderQueryToken_2 = value;
		Il2CppCodeGenWriteBarrier((&___orderQueryToken_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYCHANNELPURCHASEINFO_T74063925_H
#ifndef SUBSCRIPTIONMANAGER_T2975887760_H
#define SUBSCRIPTIONMANAGER_T2975887760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.SubscriptionManager
struct  SubscriptionManager_t2975887760  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.SubscriptionManager::receipt
	String_t* ___receipt_0;
	// System.String UnityEngine.Purchasing.SubscriptionManager::productId
	String_t* ___productId_1;
	// System.String UnityEngine.Purchasing.SubscriptionManager::intro_json
	String_t* ___intro_json_2;

public:
	inline static int32_t get_offset_of_receipt_0() { return static_cast<int32_t>(offsetof(SubscriptionManager_t2975887760, ___receipt_0)); }
	inline String_t* get_receipt_0() const { return ___receipt_0; }
	inline String_t** get_address_of_receipt_0() { return &___receipt_0; }
	inline void set_receipt_0(String_t* value)
	{
		___receipt_0 = value;
		Il2CppCodeGenWriteBarrier((&___receipt_0), value);
	}

	inline static int32_t get_offset_of_productId_1() { return static_cast<int32_t>(offsetof(SubscriptionManager_t2975887760, ___productId_1)); }
	inline String_t* get_productId_1() const { return ___productId_1; }
	inline String_t** get_address_of_productId_1() { return &___productId_1; }
	inline void set_productId_1(String_t* value)
	{
		___productId_1 = value;
		Il2CppCodeGenWriteBarrier((&___productId_1), value);
	}

	inline static int32_t get_offset_of_intro_json_2() { return static_cast<int32_t>(offsetof(SubscriptionManager_t2975887760, ___intro_json_2)); }
	inline String_t* get_intro_json_2() const { return ___intro_json_2; }
	inline String_t** get_address_of_intro_json_2() { return &___intro_json_2; }
	inline void set_intro_json_2(String_t* value)
	{
		___intro_json_2 = value;
		Il2CppCodeGenWriteBarrier((&___intro_json_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSCRIPTIONMANAGER_T2975887760_H
#ifndef PRODUCTCATALOGPAYOUT_T924351538_H
#define PRODUCTCATALOGPAYOUT_T924351538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.ProductCatalogPayout
struct  ProductCatalogPayout_t924351538  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.ProductCatalogPayout::t
	String_t* ___t_0;
	// System.String UnityEngine.Purchasing.ProductCatalogPayout::st
	String_t* ___st_1;
	// System.Double UnityEngine.Purchasing.ProductCatalogPayout::q
	double ___q_2;
	// System.String UnityEngine.Purchasing.ProductCatalogPayout::d
	String_t* ___d_3;

public:
	inline static int32_t get_offset_of_t_0() { return static_cast<int32_t>(offsetof(ProductCatalogPayout_t924351538, ___t_0)); }
	inline String_t* get_t_0() const { return ___t_0; }
	inline String_t** get_address_of_t_0() { return &___t_0; }
	inline void set_t_0(String_t* value)
	{
		___t_0 = value;
		Il2CppCodeGenWriteBarrier((&___t_0), value);
	}

	inline static int32_t get_offset_of_st_1() { return static_cast<int32_t>(offsetof(ProductCatalogPayout_t924351538, ___st_1)); }
	inline String_t* get_st_1() const { return ___st_1; }
	inline String_t** get_address_of_st_1() { return &___st_1; }
	inline void set_st_1(String_t* value)
	{
		___st_1 = value;
		Il2CppCodeGenWriteBarrier((&___st_1), value);
	}

	inline static int32_t get_offset_of_q_2() { return static_cast<int32_t>(offsetof(ProductCatalogPayout_t924351538, ___q_2)); }
	inline double get_q_2() const { return ___q_2; }
	inline double* get_address_of_q_2() { return &___q_2; }
	inline void set_q_2(double value)
	{
		___q_2 = value;
	}

	inline static int32_t get_offset_of_d_3() { return static_cast<int32_t>(offsetof(ProductCatalogPayout_t924351538, ___d_3)); }
	inline String_t* get_d_3() const { return ___d_3; }
	inline String_t** get_address_of_d_3() { return &___d_3; }
	inline void set_d_3(String_t* value)
	{
		___d_3 = value;
		Il2CppCodeGenWriteBarrier((&___d_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRODUCTCATALOGPAYOUT_T924351538_H
#ifndef STOREID_T694756629_H
#define STOREID_T694756629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.StoreID
struct  StoreID_t694756629  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.StoreID::store
	String_t* ___store_0;
	// System.String UnityEngine.Purchasing.StoreID::id
	String_t* ___id_1;

public:
	inline static int32_t get_offset_of_store_0() { return static_cast<int32_t>(offsetof(StoreID_t694756629, ___store_0)); }
	inline String_t* get_store_0() const { return ___store_0; }
	inline String_t** get_address_of_store_0() { return &___store_0; }
	inline void set_store_0(String_t* value)
	{
		___store_0 = value;
		Il2CppCodeGenWriteBarrier((&___store_0), value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(StoreID_t694756629, ___id_1)); }
	inline String_t* get_id_1() const { return ___id_1; }
	inline String_t** get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(String_t* value)
	{
		___id_1 = value;
		Il2CppCodeGenWriteBarrier((&___id_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STOREID_T694756629_H
#ifndef DICTIONARY_2_T708210053_H
#define DICTIONARY_2_T708210053_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,IAPDemoProductUI>
struct  Dictionary_2_t708210053  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	IAPDemoProductUIU5BU5D_t276283967* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t708210053, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t708210053, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t708210053, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t708210053, ___valueSlots_7)); }
	inline IAPDemoProductUIU5BU5D_t276283967* get_valueSlots_7() const { return ___valueSlots_7; }
	inline IAPDemoProductUIU5BU5D_t276283967** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(IAPDemoProductUIU5BU5D_t276283967* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t708210053, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t708210053, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t708210053, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t708210053, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t708210053, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t708210053, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t708210053, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t708210053_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3421662979 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t708210053_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3421662979 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3421662979 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3421662979 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T708210053_H
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
#ifndef APPINFO_T2433711276_H
#define APPINFO_T2433711276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Store.AppInfo
struct  AppInfo_t2433711276  : public RuntimeObject
{
public:
	// System.String UnityEngine.Store.AppInfo::<appId>k__BackingField
	String_t* ___U3CappIdU3Ek__BackingField_0;
	// System.String UnityEngine.Store.AppInfo::<appKey>k__BackingField
	String_t* ___U3CappKeyU3Ek__BackingField_1;
	// System.String UnityEngine.Store.AppInfo::<clientId>k__BackingField
	String_t* ___U3CclientIdU3Ek__BackingField_2;
	// System.String UnityEngine.Store.AppInfo::<clientKey>k__BackingField
	String_t* ___U3CclientKeyU3Ek__BackingField_3;
	// System.Boolean UnityEngine.Store.AppInfo::<debug>k__BackingField
	bool ___U3CdebugU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CappIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AppInfo_t2433711276, ___U3CappIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CappIdU3Ek__BackingField_0() const { return ___U3CappIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CappIdU3Ek__BackingField_0() { return &___U3CappIdU3Ek__BackingField_0; }
	inline void set_U3CappIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CappIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CappIdU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CappKeyU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AppInfo_t2433711276, ___U3CappKeyU3Ek__BackingField_1)); }
	inline String_t* get_U3CappKeyU3Ek__BackingField_1() const { return ___U3CappKeyU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CappKeyU3Ek__BackingField_1() { return &___U3CappKeyU3Ek__BackingField_1; }
	inline void set_U3CappKeyU3Ek__BackingField_1(String_t* value)
	{
		___U3CappKeyU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CappKeyU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CclientIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AppInfo_t2433711276, ___U3CclientIdU3Ek__BackingField_2)); }
	inline String_t* get_U3CclientIdU3Ek__BackingField_2() const { return ___U3CclientIdU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CclientIdU3Ek__BackingField_2() { return &___U3CclientIdU3Ek__BackingField_2; }
	inline void set_U3CclientIdU3Ek__BackingField_2(String_t* value)
	{
		___U3CclientIdU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CclientIdU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CclientKeyU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AppInfo_t2433711276, ___U3CclientKeyU3Ek__BackingField_3)); }
	inline String_t* get_U3CclientKeyU3Ek__BackingField_3() const { return ___U3CclientKeyU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CclientKeyU3Ek__BackingField_3() { return &___U3CclientKeyU3Ek__BackingField_3; }
	inline void set_U3CclientKeyU3Ek__BackingField_3(String_t* value)
	{
		___U3CclientKeyU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CclientKeyU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CdebugU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AppInfo_t2433711276, ___U3CdebugU3Ek__BackingField_4)); }
	inline bool get_U3CdebugU3Ek__BackingField_4() const { return ___U3CdebugU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CdebugU3Ek__BackingField_4() { return &___U3CdebugU3Ek__BackingField_4; }
	inline void set_U3CdebugU3Ek__BackingField_4(bool value)
	{
		___U3CdebugU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPINFO_T2433711276_H
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
#ifndef UNITYEVENTBASE_T3960448221_H
#define UNITYEVENTBASE_T3960448221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3960448221  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t2498835369 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3050769227 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_Calls_0)); }
	inline InvokableCallList_t2498835369 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t2498835369 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t2498835369 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3050769227 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3050769227 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3050769227 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3960448221_H
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
#ifndef APPSTORESETTING_T1592337179_H
#define APPSTORESETTING_T1592337179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AppStoresSupport.AppStoreSetting
struct  AppStoreSetting_t1592337179  : public RuntimeObject
{
public:
	// System.String AppStoresSupport.AppStoreSetting::AppID
	String_t* ___AppID_0;
	// System.String AppStoresSupport.AppStoreSetting::AppKey
	String_t* ___AppKey_1;
	// System.Boolean AppStoresSupport.AppStoreSetting::IsTestMode
	bool ___IsTestMode_2;

public:
	inline static int32_t get_offset_of_AppID_0() { return static_cast<int32_t>(offsetof(AppStoreSetting_t1592337179, ___AppID_0)); }
	inline String_t* get_AppID_0() const { return ___AppID_0; }
	inline String_t** get_address_of_AppID_0() { return &___AppID_0; }
	inline void set_AppID_0(String_t* value)
	{
		___AppID_0 = value;
		Il2CppCodeGenWriteBarrier((&___AppID_0), value);
	}

	inline static int32_t get_offset_of_AppKey_1() { return static_cast<int32_t>(offsetof(AppStoreSetting_t1592337179, ___AppKey_1)); }
	inline String_t* get_AppKey_1() const { return ___AppKey_1; }
	inline String_t** get_address_of_AppKey_1() { return &___AppKey_1; }
	inline void set_AppKey_1(String_t* value)
	{
		___AppKey_1 = value;
		Il2CppCodeGenWriteBarrier((&___AppKey_1), value);
	}

	inline static int32_t get_offset_of_IsTestMode_2() { return static_cast<int32_t>(offsetof(AppStoreSetting_t1592337179, ___IsTestMode_2)); }
	inline bool get_IsTestMode_2() const { return ___IsTestMode_2; }
	inline bool* get_address_of_IsTestMode_2() { return &___IsTestMode_2; }
	inline void set_IsTestMode_2(bool value)
	{
		___IsTestMode_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPSTORESETTING_T1592337179_H
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
#ifndef IAPCONFIGURATIONHELPER_T2483224394_H
#define IAPCONFIGURATIONHELPER_T2483224394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.IAPConfigurationHelper
struct  IAPConfigurationHelper_t2483224394  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IAPCONFIGURATIONHELPER_T2483224394_H
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
#ifndef UNITYEVENT_1_T4126069563_H
#define UNITYEVENT_1_T4126069563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<UnityEngine.Purchasing.Product>
struct  UnityEvent_1_t4126069563  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t4126069563, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T4126069563_H
#ifndef ENUMERATOR_T1068144311_H
#define ENUMERATOR_T1068144311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPListener>
struct  Enumerator_t1068144311 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3473867730 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	IAPListener_t2001792988 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1068144311, ___l_0)); }
	inline List_1_t3473867730 * get_l_0() const { return ___l_0; }
	inline List_1_t3473867730 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3473867730 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1068144311, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1068144311, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1068144311, ___current_3)); }
	inline IAPListener_t2001792988 * get_current_3() const { return ___current_3; }
	inline IAPListener_t2001792988 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(IAPListener_t2001792988 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1068144311_H
#ifndef ENUMERATOR_T1415243940_H
#define ENUMERATOR_T1415243940_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPButton>
struct  Enumerator_t1415243940 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3820967359 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	IAPButton_t2348892617 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1415243940, ___l_0)); }
	inline List_1_t3820967359 * get_l_0() const { return ___l_0; }
	inline List_1_t3820967359 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3820967359 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1415243940, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1415243940, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1415243940, ___current_3)); }
	inline IAPButton_t2348892617 * get_current_3() const { return ___current_3; }
	inline IAPButton_t2348892617 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(IAPButton_t2348892617 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1415243940_H
#ifndef SPRITESTATE_T1362986479_H
#define SPRITESTATE_T1362986479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1362986479 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t280657092 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t280657092 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_HighlightedSprite_0)); }
	inline Sprite_t280657092 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t280657092 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_PressedSprite_1)); }
	inline Sprite_t280657092 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t280657092 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t280657092 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_DisabledSprite_2)); }
	inline Sprite_t280657092 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t280657092 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t280657092 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_com
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1362986479_H
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
#ifndef UNITYEVENT_T2581268647_H
#define UNITYEVENT_T2581268647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent
struct  UnityEvent_t2581268647  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t2581268647, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_T2581268647_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
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
#ifndef KEYVALUEPAIR_2_T3105882220_H
#define KEYVALUEPAIR_2_T3105882220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,IAPDemoProductUI>
struct  KeyValuePair_2_t3105882220 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	IAPDemoProductUI_t922953754 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3105882220, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3105882220, ___value_1)); }
	inline IAPDemoProductUI_t922953754 * get_value_1() const { return ___value_1; }
	inline IAPDemoProductUI_t922953754 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(IAPDemoProductUI_t922953754 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3105882220_H
#ifndef UNITYEVENT_2_T1877158062_H
#define UNITYEVENT_2_T1877158062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`2<UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason>
struct  UnityEvent_2_t1877158062  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_2_t1877158062, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_2_T1877158062_H
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
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
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
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t881159249  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t881159249  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t881159249  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t881159249  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_2)); }
	inline TimeSpan_t881159249  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t881159249 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t881159249  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
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
#ifndef APPSTORE_T355301105_H
#define APPSTORE_T355301105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.AppStore
struct  AppStore_t355301105 
{
public:
	// System.Int32 UnityEngine.Purchasing.AppStore::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AppStore_t355301105, ___value___1)); }
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
#endif // APPSTORE_T355301105_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
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
#endif // DATETIMEKIND_T3468814247_H
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
#ifndef TRANSITION_T1769908631_H
#define TRANSITION_T1769908631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t1769908631 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Transition_t1769908631, ___value___1)); }
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
#endif // TRANSITION_T1769908631_H
#ifndef AXIS_T1856666072_H
#define AXIS_T1856666072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform/Axis
struct  Axis_t1856666072 
{
public:
	// System.Int32 UnityEngine.RectTransform/Axis::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Axis_t1856666072, ___value___1)); }
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
#endif // AXIS_T1856666072_H
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
#ifndef COLORBLOCK_T2139031574_H
#define COLORBLOCK_T2139031574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2139031574 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2555686324  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2555686324  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2555686324  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2555686324  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_NormalColor_0)); }
	inline Color_t2555686324  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2555686324 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2555686324  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_HighlightedColor_1)); }
	inline Color_t2555686324  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2555686324 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2555686324  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_PressedColor_2)); }
	inline Color_t2555686324  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2555686324 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2555686324  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_DisabledColor_3)); }
	inline Color_t2555686324  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2555686324 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2555686324  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2139031574_H
#ifndef CLOUDMOOLAHMODE_T3412107490_H
#define CLOUDMOOLAHMODE_T3412107490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.CloudMoolahMode
struct  CloudMoolahMode_t3412107490 
{
public:
	// System.Int32 UnityEngine.Purchasing.CloudMoolahMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CloudMoolahMode_t3412107490, ___value___1)); }
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
#endif // CLOUDMOOLAHMODE_T3412107490_H
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
#ifndef ONPURCHASEFAILEDEVENT_T1729542224_H
#define ONPURCHASEFAILEDEVENT_T1729542224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.IAPButton/OnPurchaseFailedEvent
struct  OnPurchaseFailedEvent_t1729542224  : public UnityEvent_2_t1877158062
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONPURCHASEFAILEDEVENT_T1729542224_H
#ifndef RESULT_T1621722260_H
#define RESULT_T1621722260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Result
struct  Result_t1621722260 
{
public:
	// System.Int32 UnityEngine.Purchasing.Result::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Result_t1621722260, ___value___1)); }
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
#endif // RESULT_T1621722260_H
#ifndef ONPURCHASECOMPLETEDEVENT_T3721407765_H
#define ONPURCHASECOMPLETEDEVENT_T3721407765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.IAPButton/OnPurchaseCompletedEvent
struct  OnPurchaseCompletedEvent_t3721407765  : public UnityEvent_1_t4126069563
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONPURCHASECOMPLETEDEVENT_T3721407765_H
#ifndef BUTTONTYPE_T908070482_H
#define BUTTONTYPE_T908070482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.IAPButton/ButtonType
struct  ButtonType_t908070482 
{
public:
	// System.Int32 UnityEngine.Purchasing.IAPButton/ButtonType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ButtonType_t908070482, ___value___1)); }
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
#endif // BUTTONTYPE_T908070482_H
#ifndef ONPURCHASECOMPLETEDEVENT_T1675809258_H
#define ONPURCHASECOMPLETEDEVENT_T1675809258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.IAPListener/OnPurchaseCompletedEvent
struct  OnPurchaseCompletedEvent_t1675809258  : public UnityEvent_1_t4126069563
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONPURCHASECOMPLETEDEVENT_T1675809258_H
#ifndef ONPURCHASEFAILEDEVENT_T800864861_H
#define ONPURCHASEFAILEDEVENT_T800864861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.IAPListener/OnPurchaseFailedEvent
struct  OnPurchaseFailedEvent_t800864861  : public UnityEvent_2_t1877158062
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONPURCHASEFAILEDEVENT_T800864861_H
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
#ifndef SELECTIONSTATE_T2656606514_H
#define SELECTIONSTATE_T2656606514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t2656606514 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectionState_t2656606514, ___value___1)); }
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
#endif // SELECTIONSTATE_T2656606514_H
#ifndef FAKESTOREUIMODE_T680685637_H
#define FAKESTOREUIMODE_T680685637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.FakeStoreUIMode
struct  FakeStoreUIMode_t680685637 
{
public:
	// System.Int32 UnityEngine.Purchasing.FakeStoreUIMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FakeStoreUIMode_t680685637, ___value___1)); }
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
#endif // FAKESTOREUIMODE_T680685637_H
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
#ifndef RESTORETRANSACTIONIDSTATE_T1240344018_H
#define RESTORETRANSACTIONIDSTATE_T1240344018_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.RestoreTransactionIDState
struct  RestoreTransactionIDState_t1240344018 
{
public:
	// System.Int32 UnityEngine.Purchasing.RestoreTransactionIDState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RestoreTransactionIDState_t1240344018, ___value___1)); }
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
#endif // RESTORETRANSACTIONIDSTATE_T1240344018_H
#ifndef MODE_T1066900953_H
#define MODE_T1066900953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1066900953 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t1066900953, ___value___1)); }
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
#endif // MODE_T1066900953_H
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
#ifndef BUTTONCLICKEDEVENT_T48803504_H
#define BUTTONCLICKEDEVENT_T48803504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button/ButtonClickedEvent
struct  ButtonClickedEvent_t48803504  : public UnityEvent_t2581268647
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTONCLICKEDEVENT_T48803504_H
#ifndef ENUMERATOR_T2662392828_H
#define ENUMERATOR_T2662392828_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,IAPDemoProductUI>
struct  Enumerator_t2662392828 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t708210053 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t3105882220  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t2662392828, ___dictionary_0)); }
	inline Dictionary_2_t708210053 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t708210053 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t708210053 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2662392828, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t2662392828, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2662392828, ___current_3)); }
	inline KeyValuePair_2_t3105882220  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t3105882220 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t3105882220  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2662392828_H
#ifndef STORESPECIFICPURCHASEERRORCODE_T2338830946_H
#define STORESPECIFICPURCHASEERRORCODE_T2338830946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.StoreSpecificPurchaseErrorCode
struct  StoreSpecificPurchaseErrorCode_t2338830946 
{
public:
	// System.Int32 UnityEngine.Purchasing.StoreSpecificPurchaseErrorCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StoreSpecificPurchaseErrorCode_t2338830946, ___value___1)); }
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
#endif // STORESPECIFICPURCHASEERRORCODE_T2338830946_H
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
#ifndef SAMSUNGAPPSMODE_T3466750770_H
#define SAMSUNGAPPSMODE_T3466750770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.SamsungAppsMode
struct  SamsungAppsMode_t3466750770 
{
public:
	// System.Int32 UnityEngine.Purchasing.SamsungAppsMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SamsungAppsMode_t3466750770, ___value___1)); }
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
#endif // SAMSUNGAPPSMODE_T3466750770_H
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
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_0)); }
	inline TimeSpan_t881159249  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t881159249 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t881159249  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_2)); }
	inline DateTime_t3738529785  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t3738529785  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_3)); }
	inline DateTime_t3738529785  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t3738529785 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t3738529785  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
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
#ifndef NAVIGATION_T3049316579_H
#define NAVIGATION_T3049316579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3049316579 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3250028441 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnUp_1)); }
	inline Selectable_t3250028441 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3250028441 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnDown_2)); }
	inline Selectable_t3250028441 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3250028441 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnLeft_3)); }
	inline Selectable_t3250028441 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3250028441 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnRight_4)); }
	inline Selectable_t3250028441 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3250028441 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3049316579_H
#ifndef PRODUCTCATALOGITEM_T2141417634_H
#define PRODUCTCATALOGITEM_T2141417634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.ProductCatalogItem
struct  ProductCatalogItem_t2141417634  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.ProductCatalogItem::id
	String_t* ___id_0;
	// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.ProductCatalogItem::type
	int32_t ___type_1;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.StoreID> UnityEngine.Purchasing.ProductCatalogItem::storeIDs
	List_1_t2166831371 * ___storeIDs_2;
	// UnityEngine.Purchasing.LocalizedProductDescription UnityEngine.Purchasing.ProductCatalogItem::defaultDescription
	LocalizedProductDescription_t1808411718 * ___defaultDescription_3;
	// System.Int32 UnityEngine.Purchasing.ProductCatalogItem::applePriceTier
	int32_t ___applePriceTier_4;
	// System.Int32 UnityEngine.Purchasing.ProductCatalogItem::xiaomiPriceTier
	int32_t ___xiaomiPriceTier_5;
	// UnityEngine.Purchasing.Price UnityEngine.Purchasing.ProductCatalogItem::googlePrice
	Price_t1857690312 * ___googlePrice_6;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.LocalizedProductDescription> UnityEngine.Purchasing.ProductCatalogItem::descriptions
	List_1_t3280486460 * ___descriptions_7;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogPayout> UnityEngine.Purchasing.ProductCatalogItem::payouts
	List_1_t2396426280 * ___payouts_8;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t2141417634, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((&___id_0), value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t2141417634, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_storeIDs_2() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t2141417634, ___storeIDs_2)); }
	inline List_1_t2166831371 * get_storeIDs_2() const { return ___storeIDs_2; }
	inline List_1_t2166831371 ** get_address_of_storeIDs_2() { return &___storeIDs_2; }
	inline void set_storeIDs_2(List_1_t2166831371 * value)
	{
		___storeIDs_2 = value;
		Il2CppCodeGenWriteBarrier((&___storeIDs_2), value);
	}

	inline static int32_t get_offset_of_defaultDescription_3() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t2141417634, ___defaultDescription_3)); }
	inline LocalizedProductDescription_t1808411718 * get_defaultDescription_3() const { return ___defaultDescription_3; }
	inline LocalizedProductDescription_t1808411718 ** get_address_of_defaultDescription_3() { return &___defaultDescription_3; }
	inline void set_defaultDescription_3(LocalizedProductDescription_t1808411718 * value)
	{
		___defaultDescription_3 = value;
		Il2CppCodeGenWriteBarrier((&___defaultDescription_3), value);
	}

	inline static int32_t get_offset_of_applePriceTier_4() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t2141417634, ___applePriceTier_4)); }
	inline int32_t get_applePriceTier_4() const { return ___applePriceTier_4; }
	inline int32_t* get_address_of_applePriceTier_4() { return &___applePriceTier_4; }
	inline void set_applePriceTier_4(int32_t value)
	{
		___applePriceTier_4 = value;
	}

	inline static int32_t get_offset_of_xiaomiPriceTier_5() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t2141417634, ___xiaomiPriceTier_5)); }
	inline int32_t get_xiaomiPriceTier_5() const { return ___xiaomiPriceTier_5; }
	inline int32_t* get_address_of_xiaomiPriceTier_5() { return &___xiaomiPriceTier_5; }
	inline void set_xiaomiPriceTier_5(int32_t value)
	{
		___xiaomiPriceTier_5 = value;
	}

	inline static int32_t get_offset_of_googlePrice_6() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t2141417634, ___googlePrice_6)); }
	inline Price_t1857690312 * get_googlePrice_6() const { return ___googlePrice_6; }
	inline Price_t1857690312 ** get_address_of_googlePrice_6() { return &___googlePrice_6; }
	inline void set_googlePrice_6(Price_t1857690312 * value)
	{
		___googlePrice_6 = value;
		Il2CppCodeGenWriteBarrier((&___googlePrice_6), value);
	}

	inline static int32_t get_offset_of_descriptions_7() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t2141417634, ___descriptions_7)); }
	inline List_1_t3280486460 * get_descriptions_7() const { return ___descriptions_7; }
	inline List_1_t3280486460 ** get_address_of_descriptions_7() { return &___descriptions_7; }
	inline void set_descriptions_7(List_1_t3280486460 * value)
	{
		___descriptions_7 = value;
		Il2CppCodeGenWriteBarrier((&___descriptions_7), value);
	}

	inline static int32_t get_offset_of_payouts_8() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t2141417634, ___payouts_8)); }
	inline List_1_t2396426280 * get_payouts_8() const { return ___payouts_8; }
	inline List_1_t2396426280 ** get_address_of_payouts_8() { return &___payouts_8; }
	inline void set_payouts_8(List_1_t2396426280 * value)
	{
		___payouts_8 = value;
		Il2CppCodeGenWriteBarrier((&___payouts_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRODUCTCATALOGITEM_T2141417634_H
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
#ifndef STANDARDPURCHASINGMODULE_T2580735509_H
#define STANDARDPURCHASINGMODULE_T2580735509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.StandardPurchasingModule
struct  StandardPurchasingModule_t2580735509  : public AbstractPurchasingModule_t2882497868
{
public:
	// UnityEngine.Purchasing.AppStore UnityEngine.Purchasing.StandardPurchasingModule::m_AppStorePlatform
	int32_t ___m_AppStorePlatform_1;
	// UnityEngine.Purchasing.INativeStoreProvider UnityEngine.Purchasing.StandardPurchasingModule::m_NativeStoreProvider
	RuntimeObject* ___m_NativeStoreProvider_2;
	// UnityEngine.RuntimePlatform UnityEngine.Purchasing.StandardPurchasingModule::m_RuntimePlatform
	int32_t ___m_RuntimePlatform_3;
	// System.Boolean UnityEngine.Purchasing.StandardPurchasingModule::m_UseCloudCatalog
	bool ___m_UseCloudCatalog_4;
	// Uniject.IUtil UnityEngine.Purchasing.StandardPurchasingModule::<util>k__BackingField
	RuntimeObject* ___U3CutilU3Ek__BackingField_6;
	// UnityEngine.ILogger UnityEngine.Purchasing.StandardPurchasingModule::<logger>k__BackingField
	RuntimeObject* ___U3CloggerU3Ek__BackingField_7;
	// UnityEngine.Purchasing.IAsyncWebUtil UnityEngine.Purchasing.StandardPurchasingModule::<webUtil>k__BackingField
	RuntimeObject* ___U3CwebUtilU3Ek__BackingField_8;
	// UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance UnityEngine.Purchasing.StandardPurchasingModule::<storeInstance>k__BackingField
	StoreInstance_t2416643455 * ___U3CstoreInstanceU3Ek__BackingField_9;
	// UnityEngine.Purchasing.CloudCatalogImpl UnityEngine.Purchasing.StandardPurchasingModule::m_CloudCatalog
	CloudCatalogImpl_t1580312503 * ___m_CloudCatalog_11;
	// UnityEngine.Purchasing.FakeStoreUIMode UnityEngine.Purchasing.StandardPurchasingModule::<useFakeStoreUIMode>k__BackingField
	int32_t ___U3CuseFakeStoreUIModeU3Ek__BackingField_12;
	// System.Boolean UnityEngine.Purchasing.StandardPurchasingModule::<useFakeStoreAlways>k__BackingField
	bool ___U3CuseFakeStoreAlwaysU3Ek__BackingField_13;
	// UnityEngine.Purchasing.WinRTStore UnityEngine.Purchasing.StandardPurchasingModule::windowsStore
	WinRTStore_t2015085940 * ___windowsStore_14;

public:
	inline static int32_t get_offset_of_m_AppStorePlatform_1() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t2580735509, ___m_AppStorePlatform_1)); }
	inline int32_t get_m_AppStorePlatform_1() const { return ___m_AppStorePlatform_1; }
	inline int32_t* get_address_of_m_AppStorePlatform_1() { return &___m_AppStorePlatform_1; }
	inline void set_m_AppStorePlatform_1(int32_t value)
	{
		___m_AppStorePlatform_1 = value;
	}

	inline static int32_t get_offset_of_m_NativeStoreProvider_2() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t2580735509, ___m_NativeStoreProvider_2)); }
	inline RuntimeObject* get_m_NativeStoreProvider_2() const { return ___m_NativeStoreProvider_2; }
	inline RuntimeObject** get_address_of_m_NativeStoreProvider_2() { return &___m_NativeStoreProvider_2; }
	inline void set_m_NativeStoreProvider_2(RuntimeObject* value)
	{
		___m_NativeStoreProvider_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_NativeStoreProvider_2), value);
	}

	inline static int32_t get_offset_of_m_RuntimePlatform_3() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t2580735509, ___m_RuntimePlatform_3)); }
	inline int32_t get_m_RuntimePlatform_3() const { return ___m_RuntimePlatform_3; }
	inline int32_t* get_address_of_m_RuntimePlatform_3() { return &___m_RuntimePlatform_3; }
	inline void set_m_RuntimePlatform_3(int32_t value)
	{
		___m_RuntimePlatform_3 = value;
	}

	inline static int32_t get_offset_of_m_UseCloudCatalog_4() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t2580735509, ___m_UseCloudCatalog_4)); }
	inline bool get_m_UseCloudCatalog_4() const { return ___m_UseCloudCatalog_4; }
	inline bool* get_address_of_m_UseCloudCatalog_4() { return &___m_UseCloudCatalog_4; }
	inline void set_m_UseCloudCatalog_4(bool value)
	{
		___m_UseCloudCatalog_4 = value;
	}

	inline static int32_t get_offset_of_U3CutilU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t2580735509, ___U3CutilU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CutilU3Ek__BackingField_6() const { return ___U3CutilU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CutilU3Ek__BackingField_6() { return &___U3CutilU3Ek__BackingField_6; }
	inline void set_U3CutilU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CutilU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CutilU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CloggerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t2580735509, ___U3CloggerU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CloggerU3Ek__BackingField_7() const { return ___U3CloggerU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CloggerU3Ek__BackingField_7() { return &___U3CloggerU3Ek__BackingField_7; }
	inline void set_U3CloggerU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CloggerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CloggerU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CwebUtilU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t2580735509, ___U3CwebUtilU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CwebUtilU3Ek__BackingField_8() const { return ___U3CwebUtilU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CwebUtilU3Ek__BackingField_8() { return &___U3CwebUtilU3Ek__BackingField_8; }
	inline void set_U3CwebUtilU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CwebUtilU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwebUtilU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_U3CstoreInstanceU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t2580735509, ___U3CstoreInstanceU3Ek__BackingField_9)); }
	inline StoreInstance_t2416643455 * get_U3CstoreInstanceU3Ek__BackingField_9() const { return ___U3CstoreInstanceU3Ek__BackingField_9; }
	inline StoreInstance_t2416643455 ** get_address_of_U3CstoreInstanceU3Ek__BackingField_9() { return &___U3CstoreInstanceU3Ek__BackingField_9; }
	inline void set_U3CstoreInstanceU3Ek__BackingField_9(StoreInstance_t2416643455 * value)
	{
		___U3CstoreInstanceU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CstoreInstanceU3Ek__BackingField_9), value);
	}

	inline static int32_t get_offset_of_m_CloudCatalog_11() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t2580735509, ___m_CloudCatalog_11)); }
	inline CloudCatalogImpl_t1580312503 * get_m_CloudCatalog_11() const { return ___m_CloudCatalog_11; }
	inline CloudCatalogImpl_t1580312503 ** get_address_of_m_CloudCatalog_11() { return &___m_CloudCatalog_11; }
	inline void set_m_CloudCatalog_11(CloudCatalogImpl_t1580312503 * value)
	{
		___m_CloudCatalog_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_CloudCatalog_11), value);
	}

	inline static int32_t get_offset_of_U3CuseFakeStoreUIModeU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t2580735509, ___U3CuseFakeStoreUIModeU3Ek__BackingField_12)); }
	inline int32_t get_U3CuseFakeStoreUIModeU3Ek__BackingField_12() const { return ___U3CuseFakeStoreUIModeU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CuseFakeStoreUIModeU3Ek__BackingField_12() { return &___U3CuseFakeStoreUIModeU3Ek__BackingField_12; }
	inline void set_U3CuseFakeStoreUIModeU3Ek__BackingField_12(int32_t value)
	{
		___U3CuseFakeStoreUIModeU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CuseFakeStoreAlwaysU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t2580735509, ___U3CuseFakeStoreAlwaysU3Ek__BackingField_13)); }
	inline bool get_U3CuseFakeStoreAlwaysU3Ek__BackingField_13() const { return ___U3CuseFakeStoreAlwaysU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CuseFakeStoreAlwaysU3Ek__BackingField_13() { return &___U3CuseFakeStoreAlwaysU3Ek__BackingField_13; }
	inline void set_U3CuseFakeStoreAlwaysU3Ek__BackingField_13(bool value)
	{
		___U3CuseFakeStoreAlwaysU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_windowsStore_14() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t2580735509, ___windowsStore_14)); }
	inline WinRTStore_t2015085940 * get_windowsStore_14() const { return ___windowsStore_14; }
	inline WinRTStore_t2015085940 ** get_address_of_windowsStore_14() { return &___windowsStore_14; }
	inline void set_windowsStore_14(WinRTStore_t2015085940 * value)
	{
		___windowsStore_14 = value;
		Il2CppCodeGenWriteBarrier((&___windowsStore_14), value);
	}
};

struct StandardPurchasingModule_t2580735509_StaticFields
{
public:
	// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule::ModuleInstance
	StandardPurchasingModule_t2580735509 * ___ModuleInstance_5;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Purchasing.AppStore,System.String> UnityEngine.Purchasing.StandardPurchasingModule::AndroidStoreNameMap
	Dictionary_2_t2070795836 * ___AndroidStoreNameMap_10;

public:
	inline static int32_t get_offset_of_ModuleInstance_5() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t2580735509_StaticFields, ___ModuleInstance_5)); }
	inline StandardPurchasingModule_t2580735509 * get_ModuleInstance_5() const { return ___ModuleInstance_5; }
	inline StandardPurchasingModule_t2580735509 ** get_address_of_ModuleInstance_5() { return &___ModuleInstance_5; }
	inline void set_ModuleInstance_5(StandardPurchasingModule_t2580735509 * value)
	{
		___ModuleInstance_5 = value;
		Il2CppCodeGenWriteBarrier((&___ModuleInstance_5), value);
	}

	inline static int32_t get_offset_of_AndroidStoreNameMap_10() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t2580735509_StaticFields, ___AndroidStoreNameMap_10)); }
	inline Dictionary_2_t2070795836 * get_AndroidStoreNameMap_10() const { return ___AndroidStoreNameMap_10; }
	inline Dictionary_2_t2070795836 ** get_address_of_AndroidStoreNameMap_10() { return &___AndroidStoreNameMap_10; }
	inline void set_AndroidStoreNameMap_10(Dictionary_2_t2070795836 * value)
	{
		___AndroidStoreNameMap_10 = value;
		Il2CppCodeGenWriteBarrier((&___AndroidStoreNameMap_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STANDARDPURCHASINGMODULE_T2580735509_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
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
#ifndef APPSTORESETTINGS_T2325796953_H
#define APPSTORESETTINGS_T2325796953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AppStoresSupport.AppStoreSettings
struct  AppStoreSettings_t2325796953  : public ScriptableObject_t2528358522
{
public:
	// System.String AppStoresSupport.AppStoreSettings::UnityClientID
	String_t* ___UnityClientID_2;
	// System.String AppStoresSupport.AppStoreSettings::UnityClientKey
	String_t* ___UnityClientKey_3;
	// System.String AppStoresSupport.AppStoreSettings::UnityClientRSAPublicKey
	String_t* ___UnityClientRSAPublicKey_4;
	// AppStoresSupport.AppStoreSetting AppStoresSupport.AppStoreSettings::XiaomiAppStoreSetting
	AppStoreSetting_t1592337179 * ___XiaomiAppStoreSetting_5;

public:
	inline static int32_t get_offset_of_UnityClientID_2() { return static_cast<int32_t>(offsetof(AppStoreSettings_t2325796953, ___UnityClientID_2)); }
	inline String_t* get_UnityClientID_2() const { return ___UnityClientID_2; }
	inline String_t** get_address_of_UnityClientID_2() { return &___UnityClientID_2; }
	inline void set_UnityClientID_2(String_t* value)
	{
		___UnityClientID_2 = value;
		Il2CppCodeGenWriteBarrier((&___UnityClientID_2), value);
	}

	inline static int32_t get_offset_of_UnityClientKey_3() { return static_cast<int32_t>(offsetof(AppStoreSettings_t2325796953, ___UnityClientKey_3)); }
	inline String_t* get_UnityClientKey_3() const { return ___UnityClientKey_3; }
	inline String_t** get_address_of_UnityClientKey_3() { return &___UnityClientKey_3; }
	inline void set_UnityClientKey_3(String_t* value)
	{
		___UnityClientKey_3 = value;
		Il2CppCodeGenWriteBarrier((&___UnityClientKey_3), value);
	}

	inline static int32_t get_offset_of_UnityClientRSAPublicKey_4() { return static_cast<int32_t>(offsetof(AppStoreSettings_t2325796953, ___UnityClientRSAPublicKey_4)); }
	inline String_t* get_UnityClientRSAPublicKey_4() const { return ___UnityClientRSAPublicKey_4; }
	inline String_t** get_address_of_UnityClientRSAPublicKey_4() { return &___UnityClientRSAPublicKey_4; }
	inline void set_UnityClientRSAPublicKey_4(String_t* value)
	{
		___UnityClientRSAPublicKey_4 = value;
		Il2CppCodeGenWriteBarrier((&___UnityClientRSAPublicKey_4), value);
	}

	inline static int32_t get_offset_of_XiaomiAppStoreSetting_5() { return static_cast<int32_t>(offsetof(AppStoreSettings_t2325796953, ___XiaomiAppStoreSetting_5)); }
	inline AppStoreSetting_t1592337179 * get_XiaomiAppStoreSetting_5() const { return ___XiaomiAppStoreSetting_5; }
	inline AppStoreSetting_t1592337179 ** get_address_of_XiaomiAppStoreSetting_5() { return &___XiaomiAppStoreSetting_5; }
	inline void set_XiaomiAppStoreSetting_5(AppStoreSetting_t1592337179 * value)
	{
		___XiaomiAppStoreSetting_5 = value;
		Il2CppCodeGenWriteBarrier((&___XiaomiAppStoreSetting_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPSTORESETTINGS_T2325796953_H
#ifndef ACTION_1_T2019918284_H
#define ACTION_1_T2019918284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.String>
struct  Action_1_t2019918284  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T2019918284_H
#ifndef UNITYACTION_T3245792599_H
#define UNITYACTION_T3245792599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction
struct  UnityAction_t3245792599  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_T3245792599_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef ACTION_3_T331451502_H
#define ACTION_3_T331451502_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`3<System.Boolean,System.String,System.String>
struct  Action_3_t331451502  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_3_T331451502_H
#ifndef ACTION_1_T3058893588_H
#define ACTION_1_T3058893588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.Store.UserInfo>
struct  Action_1_t3058893588  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3058893588_H
#ifndef ACTION_1_T269755560_H
#define ACTION_1_T269755560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Boolean>
struct  Action_1_t269755560  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T269755560_H
#ifndef ACTION_1_T1412811613_H
#define ACTION_1_T1412811613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.Purchasing.RestoreTransactionIDState>
struct  Action_1_t1412811613  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T1412811613_H
#ifndef SUBSCRIPTIONINFO_T2350244624_H
#define SUBSCRIPTIONINFO_T2350244624_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.SubscriptionInfo
struct  SubscriptionInfo_t2350244624  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.Result UnityEngine.Purchasing.SubscriptionInfo::is_subscribed
	int32_t ___is_subscribed_0;
	// UnityEngine.Purchasing.Result UnityEngine.Purchasing.SubscriptionInfo::is_expired
	int32_t ___is_expired_1;
	// UnityEngine.Purchasing.Result UnityEngine.Purchasing.SubscriptionInfo::is_cancelled
	int32_t ___is_cancelled_2;
	// UnityEngine.Purchasing.Result UnityEngine.Purchasing.SubscriptionInfo::is_free_trial
	int32_t ___is_free_trial_3;
	// UnityEngine.Purchasing.Result UnityEngine.Purchasing.SubscriptionInfo::is_auto_renewing
	int32_t ___is_auto_renewing_4;
	// UnityEngine.Purchasing.Result UnityEngine.Purchasing.SubscriptionInfo::is_introductory_price_period
	int32_t ___is_introductory_price_period_5;
	// System.String UnityEngine.Purchasing.SubscriptionInfo::productId
	String_t* ___productId_6;
	// System.DateTime UnityEngine.Purchasing.SubscriptionInfo::purchaseDate
	DateTime_t3738529785  ___purchaseDate_7;
	// System.DateTime UnityEngine.Purchasing.SubscriptionInfo::subscriptionExpireDate
	DateTime_t3738529785  ___subscriptionExpireDate_8;
	// System.DateTime UnityEngine.Purchasing.SubscriptionInfo::subscriptionCancelDate
	DateTime_t3738529785  ___subscriptionCancelDate_9;
	// System.TimeSpan UnityEngine.Purchasing.SubscriptionInfo::remainedTime
	TimeSpan_t881159249  ___remainedTime_10;
	// System.String UnityEngine.Purchasing.SubscriptionInfo::introductory_price
	String_t* ___introductory_price_11;
	// System.TimeSpan UnityEngine.Purchasing.SubscriptionInfo::introductory_price_period
	TimeSpan_t881159249  ___introductory_price_period_12;
	// System.Int64 UnityEngine.Purchasing.SubscriptionInfo::introductory_price_cycles
	int64_t ___introductory_price_cycles_13;
	// System.TimeSpan UnityEngine.Purchasing.SubscriptionInfo::freeTrialPeriod
	TimeSpan_t881159249  ___freeTrialPeriod_14;
	// System.TimeSpan UnityEngine.Purchasing.SubscriptionInfo::subscriptionPeriod
	TimeSpan_t881159249  ___subscriptionPeriod_15;
	// System.String UnityEngine.Purchasing.SubscriptionInfo::free_trial_period_string
	String_t* ___free_trial_period_string_16;
	// System.String UnityEngine.Purchasing.SubscriptionInfo::sku_details
	String_t* ___sku_details_17;

public:
	inline static int32_t get_offset_of_is_subscribed_0() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t2350244624, ___is_subscribed_0)); }
	inline int32_t get_is_subscribed_0() const { return ___is_subscribed_0; }
	inline int32_t* get_address_of_is_subscribed_0() { return &___is_subscribed_0; }
	inline void set_is_subscribed_0(int32_t value)
	{
		___is_subscribed_0 = value;
	}

	inline static int32_t get_offset_of_is_expired_1() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t2350244624, ___is_expired_1)); }
	inline int32_t get_is_expired_1() const { return ___is_expired_1; }
	inline int32_t* get_address_of_is_expired_1() { return &___is_expired_1; }
	inline void set_is_expired_1(int32_t value)
	{
		___is_expired_1 = value;
	}

	inline static int32_t get_offset_of_is_cancelled_2() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t2350244624, ___is_cancelled_2)); }
	inline int32_t get_is_cancelled_2() const { return ___is_cancelled_2; }
	inline int32_t* get_address_of_is_cancelled_2() { return &___is_cancelled_2; }
	inline void set_is_cancelled_2(int32_t value)
	{
		___is_cancelled_2 = value;
	}

	inline static int32_t get_offset_of_is_free_trial_3() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t2350244624, ___is_free_trial_3)); }
	inline int32_t get_is_free_trial_3() const { return ___is_free_trial_3; }
	inline int32_t* get_address_of_is_free_trial_3() { return &___is_free_trial_3; }
	inline void set_is_free_trial_3(int32_t value)
	{
		___is_free_trial_3 = value;
	}

	inline static int32_t get_offset_of_is_auto_renewing_4() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t2350244624, ___is_auto_renewing_4)); }
	inline int32_t get_is_auto_renewing_4() const { return ___is_auto_renewing_4; }
	inline int32_t* get_address_of_is_auto_renewing_4() { return &___is_auto_renewing_4; }
	inline void set_is_auto_renewing_4(int32_t value)
	{
		___is_auto_renewing_4 = value;
	}

	inline static int32_t get_offset_of_is_introductory_price_period_5() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t2350244624, ___is_introductory_price_period_5)); }
	inline int32_t get_is_introductory_price_period_5() const { return ___is_introductory_price_period_5; }
	inline int32_t* get_address_of_is_introductory_price_period_5() { return &___is_introductory_price_period_5; }
	inline void set_is_introductory_price_period_5(int32_t value)
	{
		___is_introductory_price_period_5 = value;
	}

	inline static int32_t get_offset_of_productId_6() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t2350244624, ___productId_6)); }
	inline String_t* get_productId_6() const { return ___productId_6; }
	inline String_t** get_address_of_productId_6() { return &___productId_6; }
	inline void set_productId_6(String_t* value)
	{
		___productId_6 = value;
		Il2CppCodeGenWriteBarrier((&___productId_6), value);
	}

	inline static int32_t get_offset_of_purchaseDate_7() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t2350244624, ___purchaseDate_7)); }
	inline DateTime_t3738529785  get_purchaseDate_7() const { return ___purchaseDate_7; }
	inline DateTime_t3738529785 * get_address_of_purchaseDate_7() { return &___purchaseDate_7; }
	inline void set_purchaseDate_7(DateTime_t3738529785  value)
	{
		___purchaseDate_7 = value;
	}

	inline static int32_t get_offset_of_subscriptionExpireDate_8() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t2350244624, ___subscriptionExpireDate_8)); }
	inline DateTime_t3738529785  get_subscriptionExpireDate_8() const { return ___subscriptionExpireDate_8; }
	inline DateTime_t3738529785 * get_address_of_subscriptionExpireDate_8() { return &___subscriptionExpireDate_8; }
	inline void set_subscriptionExpireDate_8(DateTime_t3738529785  value)
	{
		___subscriptionExpireDate_8 = value;
	}

	inline static int32_t get_offset_of_subscriptionCancelDate_9() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t2350244624, ___subscriptionCancelDate_9)); }
	inline DateTime_t3738529785  get_subscriptionCancelDate_9() const { return ___subscriptionCancelDate_9; }
	inline DateTime_t3738529785 * get_address_of_subscriptionCancelDate_9() { return &___subscriptionCancelDate_9; }
	inline void set_subscriptionCancelDate_9(DateTime_t3738529785  value)
	{
		___subscriptionCancelDate_9 = value;
	}

	inline static int32_t get_offset_of_remainedTime_10() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t2350244624, ___remainedTime_10)); }
	inline TimeSpan_t881159249  get_remainedTime_10() const { return ___remainedTime_10; }
	inline TimeSpan_t881159249 * get_address_of_remainedTime_10() { return &___remainedTime_10; }
	inline void set_remainedTime_10(TimeSpan_t881159249  value)
	{
		___remainedTime_10 = value;
	}

	inline static int32_t get_offset_of_introductory_price_11() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t2350244624, ___introductory_price_11)); }
	inline String_t* get_introductory_price_11() const { return ___introductory_price_11; }
	inline String_t** get_address_of_introductory_price_11() { return &___introductory_price_11; }
	inline void set_introductory_price_11(String_t* value)
	{
		___introductory_price_11 = value;
		Il2CppCodeGenWriteBarrier((&___introductory_price_11), value);
	}

	inline static int32_t get_offset_of_introductory_price_period_12() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t2350244624, ___introductory_price_period_12)); }
	inline TimeSpan_t881159249  get_introductory_price_period_12() const { return ___introductory_price_period_12; }
	inline TimeSpan_t881159249 * get_address_of_introductory_price_period_12() { return &___introductory_price_period_12; }
	inline void set_introductory_price_period_12(TimeSpan_t881159249  value)
	{
		___introductory_price_period_12 = value;
	}

	inline static int32_t get_offset_of_introductory_price_cycles_13() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t2350244624, ___introductory_price_cycles_13)); }
	inline int64_t get_introductory_price_cycles_13() const { return ___introductory_price_cycles_13; }
	inline int64_t* get_address_of_introductory_price_cycles_13() { return &___introductory_price_cycles_13; }
	inline void set_introductory_price_cycles_13(int64_t value)
	{
		___introductory_price_cycles_13 = value;
	}

	inline static int32_t get_offset_of_freeTrialPeriod_14() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t2350244624, ___freeTrialPeriod_14)); }
	inline TimeSpan_t881159249  get_freeTrialPeriod_14() const { return ___freeTrialPeriod_14; }
	inline TimeSpan_t881159249 * get_address_of_freeTrialPeriod_14() { return &___freeTrialPeriod_14; }
	inline void set_freeTrialPeriod_14(TimeSpan_t881159249  value)
	{
		___freeTrialPeriod_14 = value;
	}

	inline static int32_t get_offset_of_subscriptionPeriod_15() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t2350244624, ___subscriptionPeriod_15)); }
	inline TimeSpan_t881159249  get_subscriptionPeriod_15() const { return ___subscriptionPeriod_15; }
	inline TimeSpan_t881159249 * get_address_of_subscriptionPeriod_15() { return &___subscriptionPeriod_15; }
	inline void set_subscriptionPeriod_15(TimeSpan_t881159249  value)
	{
		___subscriptionPeriod_15 = value;
	}

	inline static int32_t get_offset_of_free_trial_period_string_16() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t2350244624, ___free_trial_period_string_16)); }
	inline String_t* get_free_trial_period_string_16() const { return ___free_trial_period_string_16; }
	inline String_t** get_address_of_free_trial_period_string_16() { return &___free_trial_period_string_16; }
	inline void set_free_trial_period_string_16(String_t* value)
	{
		___free_trial_period_string_16 = value;
		Il2CppCodeGenWriteBarrier((&___free_trial_period_string_16), value);
	}

	inline static int32_t get_offset_of_sku_details_17() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t2350244624, ___sku_details_17)); }
	inline String_t* get_sku_details_17() const { return ___sku_details_17; }
	inline String_t** get_address_of_sku_details_17() { return &___sku_details_17; }
	inline void set_sku_details_17(String_t* value)
	{
		___sku_details_17 = value;
		Il2CppCodeGenWriteBarrier((&___sku_details_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSCRIPTIONINFO_T2350244624_H
#ifndef ACTION_1_T3416877654_H
#define ACTION_1_T3416877654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.Purchasing.Product>
struct  Action_1_t3416877654  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3416877654_H
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
#ifndef RECTTRANSFORM_T3704657025_H
#define RECTTRANSFORM_T3704657025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t3704657025  : public Transform_t3600365921
{
public:

public:
};

struct RectTransform_t3704657025_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1258266594 * ___reapplyDrivenProperties_2;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_2() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025_StaticFields, ___reapplyDrivenProperties_2)); }
	inline ReapplyDrivenProperties_t1258266594 * get_reapplyDrivenProperties_2() const { return ___reapplyDrivenProperties_2; }
	inline ReapplyDrivenProperties_t1258266594 ** get_address_of_reapplyDrivenProperties_2() { return &___reapplyDrivenProperties_2; }
	inline void set_reapplyDrivenProperties_2(ReapplyDrivenProperties_t1258266594 * value)
	{
		___reapplyDrivenProperties_2 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T3704657025_H
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
#ifndef IAPBUTTON_T2348892617_H
#define IAPBUTTON_T2348892617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.IAPButton
struct  IAPButton_t2348892617  : public MonoBehaviour_t3962482529
{
public:
	// System.String UnityEngine.Purchasing.IAPButton::productId
	String_t* ___productId_2;
	// UnityEngine.Purchasing.IAPButton/ButtonType UnityEngine.Purchasing.IAPButton::buttonType
	int32_t ___buttonType_3;
	// System.Boolean UnityEngine.Purchasing.IAPButton::consumePurchase
	bool ___consumePurchase_4;
	// UnityEngine.Purchasing.IAPButton/OnPurchaseCompletedEvent UnityEngine.Purchasing.IAPButton::onPurchaseComplete
	OnPurchaseCompletedEvent_t3721407765 * ___onPurchaseComplete_5;
	// UnityEngine.Purchasing.IAPButton/OnPurchaseFailedEvent UnityEngine.Purchasing.IAPButton::onPurchaseFailed
	OnPurchaseFailedEvent_t1729542224 * ___onPurchaseFailed_6;
	// UnityEngine.UI.Text UnityEngine.Purchasing.IAPButton::titleText
	Text_t1901882714 * ___titleText_7;
	// UnityEngine.UI.Text UnityEngine.Purchasing.IAPButton::descriptionText
	Text_t1901882714 * ___descriptionText_8;
	// UnityEngine.UI.Text UnityEngine.Purchasing.IAPButton::priceText
	Text_t1901882714 * ___priceText_9;

public:
	inline static int32_t get_offset_of_productId_2() { return static_cast<int32_t>(offsetof(IAPButton_t2348892617, ___productId_2)); }
	inline String_t* get_productId_2() const { return ___productId_2; }
	inline String_t** get_address_of_productId_2() { return &___productId_2; }
	inline void set_productId_2(String_t* value)
	{
		___productId_2 = value;
		Il2CppCodeGenWriteBarrier((&___productId_2), value);
	}

	inline static int32_t get_offset_of_buttonType_3() { return static_cast<int32_t>(offsetof(IAPButton_t2348892617, ___buttonType_3)); }
	inline int32_t get_buttonType_3() const { return ___buttonType_3; }
	inline int32_t* get_address_of_buttonType_3() { return &___buttonType_3; }
	inline void set_buttonType_3(int32_t value)
	{
		___buttonType_3 = value;
	}

	inline static int32_t get_offset_of_consumePurchase_4() { return static_cast<int32_t>(offsetof(IAPButton_t2348892617, ___consumePurchase_4)); }
	inline bool get_consumePurchase_4() const { return ___consumePurchase_4; }
	inline bool* get_address_of_consumePurchase_4() { return &___consumePurchase_4; }
	inline void set_consumePurchase_4(bool value)
	{
		___consumePurchase_4 = value;
	}

	inline static int32_t get_offset_of_onPurchaseComplete_5() { return static_cast<int32_t>(offsetof(IAPButton_t2348892617, ___onPurchaseComplete_5)); }
	inline OnPurchaseCompletedEvent_t3721407765 * get_onPurchaseComplete_5() const { return ___onPurchaseComplete_5; }
	inline OnPurchaseCompletedEvent_t3721407765 ** get_address_of_onPurchaseComplete_5() { return &___onPurchaseComplete_5; }
	inline void set_onPurchaseComplete_5(OnPurchaseCompletedEvent_t3721407765 * value)
	{
		___onPurchaseComplete_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPurchaseComplete_5), value);
	}

	inline static int32_t get_offset_of_onPurchaseFailed_6() { return static_cast<int32_t>(offsetof(IAPButton_t2348892617, ___onPurchaseFailed_6)); }
	inline OnPurchaseFailedEvent_t1729542224 * get_onPurchaseFailed_6() const { return ___onPurchaseFailed_6; }
	inline OnPurchaseFailedEvent_t1729542224 ** get_address_of_onPurchaseFailed_6() { return &___onPurchaseFailed_6; }
	inline void set_onPurchaseFailed_6(OnPurchaseFailedEvent_t1729542224 * value)
	{
		___onPurchaseFailed_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPurchaseFailed_6), value);
	}

	inline static int32_t get_offset_of_titleText_7() { return static_cast<int32_t>(offsetof(IAPButton_t2348892617, ___titleText_7)); }
	inline Text_t1901882714 * get_titleText_7() const { return ___titleText_7; }
	inline Text_t1901882714 ** get_address_of_titleText_7() { return &___titleText_7; }
	inline void set_titleText_7(Text_t1901882714 * value)
	{
		___titleText_7 = value;
		Il2CppCodeGenWriteBarrier((&___titleText_7), value);
	}

	inline static int32_t get_offset_of_descriptionText_8() { return static_cast<int32_t>(offsetof(IAPButton_t2348892617, ___descriptionText_8)); }
	inline Text_t1901882714 * get_descriptionText_8() const { return ___descriptionText_8; }
	inline Text_t1901882714 ** get_address_of_descriptionText_8() { return &___descriptionText_8; }
	inline void set_descriptionText_8(Text_t1901882714 * value)
	{
		___descriptionText_8 = value;
		Il2CppCodeGenWriteBarrier((&___descriptionText_8), value);
	}

	inline static int32_t get_offset_of_priceText_9() { return static_cast<int32_t>(offsetof(IAPButton_t2348892617, ___priceText_9)); }
	inline Text_t1901882714 * get_priceText_9() const { return ___priceText_9; }
	inline Text_t1901882714 ** get_address_of_priceText_9() { return &___priceText_9; }
	inline void set_priceText_9(Text_t1901882714 * value)
	{
		___priceText_9 = value;
		Il2CppCodeGenWriteBarrier((&___priceText_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IAPBUTTON_T2348892617_H
#ifndef DEMOINVENTORY_T843047770_H
#define DEMOINVENTORY_T843047770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.DemoInventory
struct  DemoInventory_t843047770  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEMOINVENTORY_T843047770_H
#ifndef IAPDEMOPRODUCTUI_T922953754_H
#define IAPDEMOPRODUCTUI_T922953754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IAPDemoProductUI
struct  IAPDemoProductUI_t922953754  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Button IAPDemoProductUI::purchaseButton
	Button_t4055032469 * ___purchaseButton_2;
	// UnityEngine.UI.Button IAPDemoProductUI::receiptButton
	Button_t4055032469 * ___receiptButton_3;
	// UnityEngine.UI.Text IAPDemoProductUI::titleText
	Text_t1901882714 * ___titleText_4;
	// UnityEngine.UI.Text IAPDemoProductUI::descriptionText
	Text_t1901882714 * ___descriptionText_5;
	// UnityEngine.UI.Text IAPDemoProductUI::priceText
	Text_t1901882714 * ___priceText_6;
	// UnityEngine.UI.Text IAPDemoProductUI::statusText
	Text_t1901882714 * ___statusText_7;
	// System.String IAPDemoProductUI::m_ProductID
	String_t* ___m_ProductID_8;
	// System.Action`1<System.String> IAPDemoProductUI::m_PurchaseCallback
	Action_1_t2019918284 * ___m_PurchaseCallback_9;
	// System.String IAPDemoProductUI::m_Receipt
	String_t* ___m_Receipt_10;

public:
	inline static int32_t get_offset_of_purchaseButton_2() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t922953754, ___purchaseButton_2)); }
	inline Button_t4055032469 * get_purchaseButton_2() const { return ___purchaseButton_2; }
	inline Button_t4055032469 ** get_address_of_purchaseButton_2() { return &___purchaseButton_2; }
	inline void set_purchaseButton_2(Button_t4055032469 * value)
	{
		___purchaseButton_2 = value;
		Il2CppCodeGenWriteBarrier((&___purchaseButton_2), value);
	}

	inline static int32_t get_offset_of_receiptButton_3() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t922953754, ___receiptButton_3)); }
	inline Button_t4055032469 * get_receiptButton_3() const { return ___receiptButton_3; }
	inline Button_t4055032469 ** get_address_of_receiptButton_3() { return &___receiptButton_3; }
	inline void set_receiptButton_3(Button_t4055032469 * value)
	{
		___receiptButton_3 = value;
		Il2CppCodeGenWriteBarrier((&___receiptButton_3), value);
	}

	inline static int32_t get_offset_of_titleText_4() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t922953754, ___titleText_4)); }
	inline Text_t1901882714 * get_titleText_4() const { return ___titleText_4; }
	inline Text_t1901882714 ** get_address_of_titleText_4() { return &___titleText_4; }
	inline void set_titleText_4(Text_t1901882714 * value)
	{
		___titleText_4 = value;
		Il2CppCodeGenWriteBarrier((&___titleText_4), value);
	}

	inline static int32_t get_offset_of_descriptionText_5() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t922953754, ___descriptionText_5)); }
	inline Text_t1901882714 * get_descriptionText_5() const { return ___descriptionText_5; }
	inline Text_t1901882714 ** get_address_of_descriptionText_5() { return &___descriptionText_5; }
	inline void set_descriptionText_5(Text_t1901882714 * value)
	{
		___descriptionText_5 = value;
		Il2CppCodeGenWriteBarrier((&___descriptionText_5), value);
	}

	inline static int32_t get_offset_of_priceText_6() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t922953754, ___priceText_6)); }
	inline Text_t1901882714 * get_priceText_6() const { return ___priceText_6; }
	inline Text_t1901882714 ** get_address_of_priceText_6() { return &___priceText_6; }
	inline void set_priceText_6(Text_t1901882714 * value)
	{
		___priceText_6 = value;
		Il2CppCodeGenWriteBarrier((&___priceText_6), value);
	}

	inline static int32_t get_offset_of_statusText_7() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t922953754, ___statusText_7)); }
	inline Text_t1901882714 * get_statusText_7() const { return ___statusText_7; }
	inline Text_t1901882714 ** get_address_of_statusText_7() { return &___statusText_7; }
	inline void set_statusText_7(Text_t1901882714 * value)
	{
		___statusText_7 = value;
		Il2CppCodeGenWriteBarrier((&___statusText_7), value);
	}

	inline static int32_t get_offset_of_m_ProductID_8() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t922953754, ___m_ProductID_8)); }
	inline String_t* get_m_ProductID_8() const { return ___m_ProductID_8; }
	inline String_t** get_address_of_m_ProductID_8() { return &___m_ProductID_8; }
	inline void set_m_ProductID_8(String_t* value)
	{
		___m_ProductID_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_ProductID_8), value);
	}

	inline static int32_t get_offset_of_m_PurchaseCallback_9() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t922953754, ___m_PurchaseCallback_9)); }
	inline Action_1_t2019918284 * get_m_PurchaseCallback_9() const { return ___m_PurchaseCallback_9; }
	inline Action_1_t2019918284 ** get_address_of_m_PurchaseCallback_9() { return &___m_PurchaseCallback_9; }
	inline void set_m_PurchaseCallback_9(Action_1_t2019918284 * value)
	{
		___m_PurchaseCallback_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_PurchaseCallback_9), value);
	}

	inline static int32_t get_offset_of_m_Receipt_10() { return static_cast<int32_t>(offsetof(IAPDemoProductUI_t922953754, ___m_Receipt_10)); }
	inline String_t* get_m_Receipt_10() const { return ___m_Receipt_10; }
	inline String_t** get_address_of_m_Receipt_10() { return &___m_Receipt_10; }
	inline void set_m_Receipt_10(String_t* value)
	{
		___m_Receipt_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Receipt_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IAPDEMOPRODUCTUI_T922953754_H
#ifndef IAPDEMO_T3681080565_H
#define IAPDEMO_T3681080565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IAPDemo
struct  IAPDemo_t3681080565  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Purchasing.IStoreController IAPDemo::m_Controller
	RuntimeObject* ___m_Controller_2;
	// UnityEngine.Purchasing.IAppleExtensions IAPDemo::m_AppleExtensions
	RuntimeObject* ___m_AppleExtensions_3;
	// UnityEngine.Purchasing.IMoolahExtension IAPDemo::m_MoolahExtensions
	RuntimeObject* ___m_MoolahExtensions_4;
	// UnityEngine.Purchasing.ISamsungAppsExtensions IAPDemo::m_SamsungExtensions
	RuntimeObject* ___m_SamsungExtensions_5;
	// UnityEngine.Purchasing.IMicrosoftExtensions IAPDemo::m_MicrosoftExtensions
	RuntimeObject* ___m_MicrosoftExtensions_6;
	// UnityEngine.Purchasing.IUnityChannelExtensions IAPDemo::m_UnityChannelExtensions
	RuntimeObject* ___m_UnityChannelExtensions_7;
	// UnityEngine.Purchasing.ITransactionHistoryExtensions IAPDemo::m_TransactionHistoryExtensions
	RuntimeObject* ___m_TransactionHistoryExtensions_8;
	// System.Boolean IAPDemo::m_IsGooglePlayStoreSelected
	bool ___m_IsGooglePlayStoreSelected_9;
	// System.Boolean IAPDemo::m_IsSamsungAppsStoreSelected
	bool ___m_IsSamsungAppsStoreSelected_10;
	// System.Boolean IAPDemo::m_IsCloudMoolahStoreSelected
	bool ___m_IsCloudMoolahStoreSelected_11;
	// System.Boolean IAPDemo::m_IsUnityChannelSelected
	bool ___m_IsUnityChannelSelected_12;
	// System.String IAPDemo::m_LastTransactionID
	String_t* ___m_LastTransactionID_13;
	// System.Boolean IAPDemo::m_IsLoggedIn
	bool ___m_IsLoggedIn_14;
	// IAPDemo/UnityChannelLoginHandler IAPDemo::unityChannelLoginHandler
	UnityChannelLoginHandler_t2949829254 * ___unityChannelLoginHandler_15;
	// System.Boolean IAPDemo::m_FetchReceiptPayloadOnPurchase
	bool ___m_FetchReceiptPayloadOnPurchase_16;
	// System.Boolean IAPDemo::m_PurchaseInProgress
	bool ___m_PurchaseInProgress_17;
	// System.Collections.Generic.Dictionary`2<System.String,IAPDemoProductUI> IAPDemo::m_ProductUIs
	Dictionary_2_t708210053 * ___m_ProductUIs_18;
	// UnityEngine.GameObject IAPDemo::productUITemplate
	GameObject_t1113636619 * ___productUITemplate_19;
	// UnityEngine.RectTransform IAPDemo::contentRect
	RectTransform_t3704657025 * ___contentRect_20;
	// UnityEngine.UI.Button IAPDemo::restoreButton
	Button_t4055032469 * ___restoreButton_21;
	// UnityEngine.UI.Button IAPDemo::loginButton
	Button_t4055032469 * ___loginButton_22;
	// UnityEngine.UI.Button IAPDemo::validateButton
	Button_t4055032469 * ___validateButton_23;
	// UnityEngine.UI.Text IAPDemo::versionText
	Text_t1901882714 * ___versionText_24;

public:
	inline static int32_t get_offset_of_m_Controller_2() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___m_Controller_2)); }
	inline RuntimeObject* get_m_Controller_2() const { return ___m_Controller_2; }
	inline RuntimeObject** get_address_of_m_Controller_2() { return &___m_Controller_2; }
	inline void set_m_Controller_2(RuntimeObject* value)
	{
		___m_Controller_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Controller_2), value);
	}

	inline static int32_t get_offset_of_m_AppleExtensions_3() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___m_AppleExtensions_3)); }
	inline RuntimeObject* get_m_AppleExtensions_3() const { return ___m_AppleExtensions_3; }
	inline RuntimeObject** get_address_of_m_AppleExtensions_3() { return &___m_AppleExtensions_3; }
	inline void set_m_AppleExtensions_3(RuntimeObject* value)
	{
		___m_AppleExtensions_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_AppleExtensions_3), value);
	}

	inline static int32_t get_offset_of_m_MoolahExtensions_4() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___m_MoolahExtensions_4)); }
	inline RuntimeObject* get_m_MoolahExtensions_4() const { return ___m_MoolahExtensions_4; }
	inline RuntimeObject** get_address_of_m_MoolahExtensions_4() { return &___m_MoolahExtensions_4; }
	inline void set_m_MoolahExtensions_4(RuntimeObject* value)
	{
		___m_MoolahExtensions_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_MoolahExtensions_4), value);
	}

	inline static int32_t get_offset_of_m_SamsungExtensions_5() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___m_SamsungExtensions_5)); }
	inline RuntimeObject* get_m_SamsungExtensions_5() const { return ___m_SamsungExtensions_5; }
	inline RuntimeObject** get_address_of_m_SamsungExtensions_5() { return &___m_SamsungExtensions_5; }
	inline void set_m_SamsungExtensions_5(RuntimeObject* value)
	{
		___m_SamsungExtensions_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_SamsungExtensions_5), value);
	}

	inline static int32_t get_offset_of_m_MicrosoftExtensions_6() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___m_MicrosoftExtensions_6)); }
	inline RuntimeObject* get_m_MicrosoftExtensions_6() const { return ___m_MicrosoftExtensions_6; }
	inline RuntimeObject** get_address_of_m_MicrosoftExtensions_6() { return &___m_MicrosoftExtensions_6; }
	inline void set_m_MicrosoftExtensions_6(RuntimeObject* value)
	{
		___m_MicrosoftExtensions_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_MicrosoftExtensions_6), value);
	}

	inline static int32_t get_offset_of_m_UnityChannelExtensions_7() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___m_UnityChannelExtensions_7)); }
	inline RuntimeObject* get_m_UnityChannelExtensions_7() const { return ___m_UnityChannelExtensions_7; }
	inline RuntimeObject** get_address_of_m_UnityChannelExtensions_7() { return &___m_UnityChannelExtensions_7; }
	inline void set_m_UnityChannelExtensions_7(RuntimeObject* value)
	{
		___m_UnityChannelExtensions_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_UnityChannelExtensions_7), value);
	}

	inline static int32_t get_offset_of_m_TransactionHistoryExtensions_8() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___m_TransactionHistoryExtensions_8)); }
	inline RuntimeObject* get_m_TransactionHistoryExtensions_8() const { return ___m_TransactionHistoryExtensions_8; }
	inline RuntimeObject** get_address_of_m_TransactionHistoryExtensions_8() { return &___m_TransactionHistoryExtensions_8; }
	inline void set_m_TransactionHistoryExtensions_8(RuntimeObject* value)
	{
		___m_TransactionHistoryExtensions_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_TransactionHistoryExtensions_8), value);
	}

	inline static int32_t get_offset_of_m_IsGooglePlayStoreSelected_9() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___m_IsGooglePlayStoreSelected_9)); }
	inline bool get_m_IsGooglePlayStoreSelected_9() const { return ___m_IsGooglePlayStoreSelected_9; }
	inline bool* get_address_of_m_IsGooglePlayStoreSelected_9() { return &___m_IsGooglePlayStoreSelected_9; }
	inline void set_m_IsGooglePlayStoreSelected_9(bool value)
	{
		___m_IsGooglePlayStoreSelected_9 = value;
	}

	inline static int32_t get_offset_of_m_IsSamsungAppsStoreSelected_10() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___m_IsSamsungAppsStoreSelected_10)); }
	inline bool get_m_IsSamsungAppsStoreSelected_10() const { return ___m_IsSamsungAppsStoreSelected_10; }
	inline bool* get_address_of_m_IsSamsungAppsStoreSelected_10() { return &___m_IsSamsungAppsStoreSelected_10; }
	inline void set_m_IsSamsungAppsStoreSelected_10(bool value)
	{
		___m_IsSamsungAppsStoreSelected_10 = value;
	}

	inline static int32_t get_offset_of_m_IsCloudMoolahStoreSelected_11() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___m_IsCloudMoolahStoreSelected_11)); }
	inline bool get_m_IsCloudMoolahStoreSelected_11() const { return ___m_IsCloudMoolahStoreSelected_11; }
	inline bool* get_address_of_m_IsCloudMoolahStoreSelected_11() { return &___m_IsCloudMoolahStoreSelected_11; }
	inline void set_m_IsCloudMoolahStoreSelected_11(bool value)
	{
		___m_IsCloudMoolahStoreSelected_11 = value;
	}

	inline static int32_t get_offset_of_m_IsUnityChannelSelected_12() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___m_IsUnityChannelSelected_12)); }
	inline bool get_m_IsUnityChannelSelected_12() const { return ___m_IsUnityChannelSelected_12; }
	inline bool* get_address_of_m_IsUnityChannelSelected_12() { return &___m_IsUnityChannelSelected_12; }
	inline void set_m_IsUnityChannelSelected_12(bool value)
	{
		___m_IsUnityChannelSelected_12 = value;
	}

	inline static int32_t get_offset_of_m_LastTransactionID_13() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___m_LastTransactionID_13)); }
	inline String_t* get_m_LastTransactionID_13() const { return ___m_LastTransactionID_13; }
	inline String_t** get_address_of_m_LastTransactionID_13() { return &___m_LastTransactionID_13; }
	inline void set_m_LastTransactionID_13(String_t* value)
	{
		___m_LastTransactionID_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastTransactionID_13), value);
	}

	inline static int32_t get_offset_of_m_IsLoggedIn_14() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___m_IsLoggedIn_14)); }
	inline bool get_m_IsLoggedIn_14() const { return ___m_IsLoggedIn_14; }
	inline bool* get_address_of_m_IsLoggedIn_14() { return &___m_IsLoggedIn_14; }
	inline void set_m_IsLoggedIn_14(bool value)
	{
		___m_IsLoggedIn_14 = value;
	}

	inline static int32_t get_offset_of_unityChannelLoginHandler_15() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___unityChannelLoginHandler_15)); }
	inline UnityChannelLoginHandler_t2949829254 * get_unityChannelLoginHandler_15() const { return ___unityChannelLoginHandler_15; }
	inline UnityChannelLoginHandler_t2949829254 ** get_address_of_unityChannelLoginHandler_15() { return &___unityChannelLoginHandler_15; }
	inline void set_unityChannelLoginHandler_15(UnityChannelLoginHandler_t2949829254 * value)
	{
		___unityChannelLoginHandler_15 = value;
		Il2CppCodeGenWriteBarrier((&___unityChannelLoginHandler_15), value);
	}

	inline static int32_t get_offset_of_m_FetchReceiptPayloadOnPurchase_16() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___m_FetchReceiptPayloadOnPurchase_16)); }
	inline bool get_m_FetchReceiptPayloadOnPurchase_16() const { return ___m_FetchReceiptPayloadOnPurchase_16; }
	inline bool* get_address_of_m_FetchReceiptPayloadOnPurchase_16() { return &___m_FetchReceiptPayloadOnPurchase_16; }
	inline void set_m_FetchReceiptPayloadOnPurchase_16(bool value)
	{
		___m_FetchReceiptPayloadOnPurchase_16 = value;
	}

	inline static int32_t get_offset_of_m_PurchaseInProgress_17() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___m_PurchaseInProgress_17)); }
	inline bool get_m_PurchaseInProgress_17() const { return ___m_PurchaseInProgress_17; }
	inline bool* get_address_of_m_PurchaseInProgress_17() { return &___m_PurchaseInProgress_17; }
	inline void set_m_PurchaseInProgress_17(bool value)
	{
		___m_PurchaseInProgress_17 = value;
	}

	inline static int32_t get_offset_of_m_ProductUIs_18() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___m_ProductUIs_18)); }
	inline Dictionary_2_t708210053 * get_m_ProductUIs_18() const { return ___m_ProductUIs_18; }
	inline Dictionary_2_t708210053 ** get_address_of_m_ProductUIs_18() { return &___m_ProductUIs_18; }
	inline void set_m_ProductUIs_18(Dictionary_2_t708210053 * value)
	{
		___m_ProductUIs_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_ProductUIs_18), value);
	}

	inline static int32_t get_offset_of_productUITemplate_19() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___productUITemplate_19)); }
	inline GameObject_t1113636619 * get_productUITemplate_19() const { return ___productUITemplate_19; }
	inline GameObject_t1113636619 ** get_address_of_productUITemplate_19() { return &___productUITemplate_19; }
	inline void set_productUITemplate_19(GameObject_t1113636619 * value)
	{
		___productUITemplate_19 = value;
		Il2CppCodeGenWriteBarrier((&___productUITemplate_19), value);
	}

	inline static int32_t get_offset_of_contentRect_20() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___contentRect_20)); }
	inline RectTransform_t3704657025 * get_contentRect_20() const { return ___contentRect_20; }
	inline RectTransform_t3704657025 ** get_address_of_contentRect_20() { return &___contentRect_20; }
	inline void set_contentRect_20(RectTransform_t3704657025 * value)
	{
		___contentRect_20 = value;
		Il2CppCodeGenWriteBarrier((&___contentRect_20), value);
	}

	inline static int32_t get_offset_of_restoreButton_21() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___restoreButton_21)); }
	inline Button_t4055032469 * get_restoreButton_21() const { return ___restoreButton_21; }
	inline Button_t4055032469 ** get_address_of_restoreButton_21() { return &___restoreButton_21; }
	inline void set_restoreButton_21(Button_t4055032469 * value)
	{
		___restoreButton_21 = value;
		Il2CppCodeGenWriteBarrier((&___restoreButton_21), value);
	}

	inline static int32_t get_offset_of_loginButton_22() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___loginButton_22)); }
	inline Button_t4055032469 * get_loginButton_22() const { return ___loginButton_22; }
	inline Button_t4055032469 ** get_address_of_loginButton_22() { return &___loginButton_22; }
	inline void set_loginButton_22(Button_t4055032469 * value)
	{
		___loginButton_22 = value;
		Il2CppCodeGenWriteBarrier((&___loginButton_22), value);
	}

	inline static int32_t get_offset_of_validateButton_23() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___validateButton_23)); }
	inline Button_t4055032469 * get_validateButton_23() const { return ___validateButton_23; }
	inline Button_t4055032469 ** get_address_of_validateButton_23() { return &___validateButton_23; }
	inline void set_validateButton_23(Button_t4055032469 * value)
	{
		___validateButton_23 = value;
		Il2CppCodeGenWriteBarrier((&___validateButton_23), value);
	}

	inline static int32_t get_offset_of_versionText_24() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565, ___versionText_24)); }
	inline Text_t1901882714 * get_versionText_24() const { return ___versionText_24; }
	inline Text_t1901882714 ** get_address_of_versionText_24() { return &___versionText_24; }
	inline void set_versionText_24(Text_t1901882714 * value)
	{
		___versionText_24 = value;
		Il2CppCodeGenWriteBarrier((&___versionText_24), value);
	}
};

struct IAPDemo_t3681080565_StaticFields
{
public:
	// System.Action`1<System.String> IAPDemo::<>f__am$cache0
	Action_1_t2019918284 * ___U3CU3Ef__amU24cache0_25;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_25() { return static_cast<int32_t>(offsetof(IAPDemo_t3681080565_StaticFields, ___U3CU3Ef__amU24cache0_25)); }
	inline Action_1_t2019918284 * get_U3CU3Ef__amU24cache0_25() const { return ___U3CU3Ef__amU24cache0_25; }
	inline Action_1_t2019918284 ** get_address_of_U3CU3Ef__amU24cache0_25() { return &___U3CU3Ef__amU24cache0_25; }
	inline void set_U3CU3Ef__amU24cache0_25(Action_1_t2019918284 * value)
	{
		___U3CU3Ef__amU24cache0_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IAPDEMO_T3681080565_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef IAPLISTENER_T2001792988_H
#define IAPLISTENER_T2001792988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.IAPListener
struct  IAPListener_t2001792988  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean UnityEngine.Purchasing.IAPListener::consumePurchase
	bool ___consumePurchase_2;
	// System.Boolean UnityEngine.Purchasing.IAPListener::dontDestroyOnLoad
	bool ___dontDestroyOnLoad_3;
	// UnityEngine.Purchasing.IAPListener/OnPurchaseCompletedEvent UnityEngine.Purchasing.IAPListener::onPurchaseComplete
	OnPurchaseCompletedEvent_t1675809258 * ___onPurchaseComplete_4;
	// UnityEngine.Purchasing.IAPListener/OnPurchaseFailedEvent UnityEngine.Purchasing.IAPListener::onPurchaseFailed
	OnPurchaseFailedEvent_t800864861 * ___onPurchaseFailed_5;

public:
	inline static int32_t get_offset_of_consumePurchase_2() { return static_cast<int32_t>(offsetof(IAPListener_t2001792988, ___consumePurchase_2)); }
	inline bool get_consumePurchase_2() const { return ___consumePurchase_2; }
	inline bool* get_address_of_consumePurchase_2() { return &___consumePurchase_2; }
	inline void set_consumePurchase_2(bool value)
	{
		___consumePurchase_2 = value;
	}

	inline static int32_t get_offset_of_dontDestroyOnLoad_3() { return static_cast<int32_t>(offsetof(IAPListener_t2001792988, ___dontDestroyOnLoad_3)); }
	inline bool get_dontDestroyOnLoad_3() const { return ___dontDestroyOnLoad_3; }
	inline bool* get_address_of_dontDestroyOnLoad_3() { return &___dontDestroyOnLoad_3; }
	inline void set_dontDestroyOnLoad_3(bool value)
	{
		___dontDestroyOnLoad_3 = value;
	}

	inline static int32_t get_offset_of_onPurchaseComplete_4() { return static_cast<int32_t>(offsetof(IAPListener_t2001792988, ___onPurchaseComplete_4)); }
	inline OnPurchaseCompletedEvent_t1675809258 * get_onPurchaseComplete_4() const { return ___onPurchaseComplete_4; }
	inline OnPurchaseCompletedEvent_t1675809258 ** get_address_of_onPurchaseComplete_4() { return &___onPurchaseComplete_4; }
	inline void set_onPurchaseComplete_4(OnPurchaseCompletedEvent_t1675809258 * value)
	{
		___onPurchaseComplete_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPurchaseComplete_4), value);
	}

	inline static int32_t get_offset_of_onPurchaseFailed_5() { return static_cast<int32_t>(offsetof(IAPListener_t2001792988, ___onPurchaseFailed_5)); }
	inline OnPurchaseFailedEvent_t800864861 * get_onPurchaseFailed_5() const { return ___onPurchaseFailed_5; }
	inline OnPurchaseFailedEvent_t800864861 ** get_address_of_onPurchaseFailed_5() { return &___onPurchaseFailed_5; }
	inline void set_onPurchaseFailed_5(OnPurchaseFailedEvent_t800864861 * value)
	{
		___onPurchaseFailed_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPurchaseFailed_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IAPLISTENER_T2001792988_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t2598313366 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRender_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef SELECTABLE_T3250028441_H
#define SELECTABLE_T3250028441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3250028441  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3049316579  ___m_Navigation_3;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_4;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2139031574  ___m_Colors_5;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1362986479  ___m_SpriteState_6;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t2532145056 * ___m_AnimationTriggers_7;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_8;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1660335611 * ___m_TargetGraphic_9;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_10;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_11;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_12;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_13;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_14;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1260619206 * ___m_CanvasGroupCache_15;

public:
	inline static int32_t get_offset_of_m_Navigation_3() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Navigation_3)); }
	inline Navigation_t3049316579  get_m_Navigation_3() const { return ___m_Navigation_3; }
	inline Navigation_t3049316579 * get_address_of_m_Navigation_3() { return &___m_Navigation_3; }
	inline void set_m_Navigation_3(Navigation_t3049316579  value)
	{
		___m_Navigation_3 = value;
	}

	inline static int32_t get_offset_of_m_Transition_4() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Transition_4)); }
	inline int32_t get_m_Transition_4() const { return ___m_Transition_4; }
	inline int32_t* get_address_of_m_Transition_4() { return &___m_Transition_4; }
	inline void set_m_Transition_4(int32_t value)
	{
		___m_Transition_4 = value;
	}

	inline static int32_t get_offset_of_m_Colors_5() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Colors_5)); }
	inline ColorBlock_t2139031574  get_m_Colors_5() const { return ___m_Colors_5; }
	inline ColorBlock_t2139031574 * get_address_of_m_Colors_5() { return &___m_Colors_5; }
	inline void set_m_Colors_5(ColorBlock_t2139031574  value)
	{
		___m_Colors_5 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_6() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_SpriteState_6)); }
	inline SpriteState_t1362986479  get_m_SpriteState_6() const { return ___m_SpriteState_6; }
	inline SpriteState_t1362986479 * get_address_of_m_SpriteState_6() { return &___m_SpriteState_6; }
	inline void set_m_SpriteState_6(SpriteState_t1362986479  value)
	{
		___m_SpriteState_6 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_7() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_AnimationTriggers_7)); }
	inline AnimationTriggers_t2532145056 * get_m_AnimationTriggers_7() const { return ___m_AnimationTriggers_7; }
	inline AnimationTriggers_t2532145056 ** get_address_of_m_AnimationTriggers_7() { return &___m_AnimationTriggers_7; }
	inline void set_m_AnimationTriggers_7(AnimationTriggers_t2532145056 * value)
	{
		___m_AnimationTriggers_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_7), value);
	}

	inline static int32_t get_offset_of_m_Interactable_8() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Interactable_8)); }
	inline bool get_m_Interactable_8() const { return ___m_Interactable_8; }
	inline bool* get_address_of_m_Interactable_8() { return &___m_Interactable_8; }
	inline void set_m_Interactable_8(bool value)
	{
		___m_Interactable_8 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_9() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_TargetGraphic_9)); }
	inline Graphic_t1660335611 * get_m_TargetGraphic_9() const { return ___m_TargetGraphic_9; }
	inline Graphic_t1660335611 ** get_address_of_m_TargetGraphic_9() { return &___m_TargetGraphic_9; }
	inline void set_m_TargetGraphic_9(Graphic_t1660335611 * value)
	{
		___m_TargetGraphic_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_9), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_10() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_GroupsAllowInteraction_10)); }
	inline bool get_m_GroupsAllowInteraction_10() const { return ___m_GroupsAllowInteraction_10; }
	inline bool* get_address_of_m_GroupsAllowInteraction_10() { return &___m_GroupsAllowInteraction_10; }
	inline void set_m_GroupsAllowInteraction_10(bool value)
	{
		___m_GroupsAllowInteraction_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_11() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CurrentSelectionState_11)); }
	inline int32_t get_m_CurrentSelectionState_11() const { return ___m_CurrentSelectionState_11; }
	inline int32_t* get_address_of_m_CurrentSelectionState_11() { return &___m_CurrentSelectionState_11; }
	inline void set_m_CurrentSelectionState_11(int32_t value)
	{
		___m_CurrentSelectionState_11 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerInsideU3Ek__BackingField_12)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_12() const { return ___U3CisPointerInsideU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_12() { return &___U3CisPointerInsideU3Ek__BackingField_12; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_12(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerDownU3Ek__BackingField_13)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_13() const { return ___U3CisPointerDownU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_13() { return &___U3CisPointerDownU3Ek__BackingField_13; }
	inline void set_U3CisPointerDownU3Ek__BackingField_13(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3ChasSelectionU3Ek__BackingField_14)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_14() const { return ___U3ChasSelectionU3Ek__BackingField_14; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_14() { return &___U3ChasSelectionU3Ek__BackingField_14; }
	inline void set_U3ChasSelectionU3Ek__BackingField_14(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_15() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CanvasGroupCache_15)); }
	inline List_1_t1260619206 * get_m_CanvasGroupCache_15() const { return ___m_CanvasGroupCache_15; }
	inline List_1_t1260619206 ** get_address_of_m_CanvasGroupCache_15() { return &___m_CanvasGroupCache_15; }
	inline void set_m_CanvasGroupCache_15(List_1_t1260619206 * value)
	{
		___m_CanvasGroupCache_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_15), value);
	}
};

struct Selectable_t3250028441_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t427135887 * ___s_List_2;

public:
	inline static int32_t get_offset_of_s_List_2() { return static_cast<int32_t>(offsetof(Selectable_t3250028441_StaticFields, ___s_List_2)); }
	inline List_1_t427135887 * get_s_List_2() const { return ___s_List_2; }
	inline List_1_t427135887 ** get_address_of_s_List_2() { return &___s_List_2; }
	inline void set_s_List_2(List_1_t427135887 * value)
	{
		___s_List_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3250028441_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef BUTTON_T4055032469_H
#define BUTTON_T4055032469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button
struct  Button_t4055032469  : public Selectable_t3250028441
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t48803504 * ___m_OnClick_16;

public:
	inline static int32_t get_offset_of_m_OnClick_16() { return static_cast<int32_t>(offsetof(Button_t4055032469, ___m_OnClick_16)); }
	inline ButtonClickedEvent_t48803504 * get_m_OnClick_16() const { return ___m_OnClick_16; }
	inline ButtonClickedEvent_t48803504 ** get_address_of_m_OnClick_16() { return &___m_OnClick_16; }
	inline void set_m_OnClick_16(ButtonClickedEvent_t48803504 * value)
	{
		___m_OnClick_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnClick_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTON_T4055032469_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_28)); }
	inline FontData_t746620069 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t746620069 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t746620069 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_30)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_32)); }
	inline Material_t340375123 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t340375123 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
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
// UnityEngine.Purchasing.PayoutDefinition[]
struct PayoutDefinitionU5BU5D_t274752929  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PayoutDefinition_t3571684064 * m_Items[1];

public:
	inline PayoutDefinition_t3571684064 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PayoutDefinition_t3571684064 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PayoutDefinition_t3571684064 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline PayoutDefinition_t3571684064 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PayoutDefinition_t3571684064 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PayoutDefinition_t3571684064 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m118522912_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C"  bool Dictionary_2_ContainsKey_m2278349286_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C"  RuntimeObject * Dictionary_2_get_Item_m2714930061_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
extern "C"  RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m2645751381_gshared (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Purchasing.ConfigurationBuilder::Configure<System.Object>()
extern "C"  RuntimeObject * ConfigurationBuilder_Configure_TisRuntimeObject_m1211836600_gshared (ConfigurationBuilder_t1618671084 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Purchasing.RestoreTransactionIDState>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m2866643322_gshared (Action_1_t1412811613 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m981112613_gshared (Action_1_t269755560 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`3<System.Boolean,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_3__ctor_m462219898_gshared (Action_3_t3126256962 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C"  Enumerator_t2086727927  Dictionary_2_GetEnumerator_m3278257048_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C"  KeyValuePair_2_t2530217319  Enumerator_get_Current_m2655181939_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3464904234_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m1107569389_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3885012575_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m1938428402_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m2446893047_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C"  void Dictionary_2_set_Item_m3474379962_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
extern "C"  void Action_1_Invoke_m2461023210_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
extern "C"  bool List_1_Remove_m1416767016_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(!0)
extern "C"  void UnityEvent_1_Invoke_m2734859485_gshared (UnityEvent_1_t3961765668 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,UnityEngine.Purchasing.PurchaseFailureReason>::Invoke(!0,!1)
extern "C"  void UnityEvent_2_Invoke_m3069255356_gshared (UnityEvent_2_t1778150145 * __this, RuntimeObject * p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C"  void UnityEvent_1__ctor_m1789019280_gshared (UnityEvent_1_t3961765668 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,UnityEngine.Purchasing.PurchaseFailureReason>::.ctor()
extern "C"  void UnityEvent_2__ctor_m1022790274_gshared (UnityEvent_2_t1778150145 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C"  ObjectU5BU5D_t2843939325* List_1_ToArray_m4168020446_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void AppStoresSupport.AppStoreSetting::.ctor()
extern "C"  void AppStoreSetting__ctor_m1040304863 (AppStoreSetting_t1592337179 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C"  void ScriptableObject__ctor_m1310743131 (ScriptableObject_t2528358522 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Store.AppInfo::.ctor()
extern "C"  void AppInfo__ctor_m2735043516 (AppInfo_t2433711276 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Store.AppInfo::set_clientId(System.String)
extern "C"  void AppInfo_set_clientId_m1938777246 (AppInfo_t2433711276 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Store.AppInfo::set_clientKey(System.String)
extern "C"  void AppInfo_set_clientKey_m2324748463 (AppInfo_t2433711276 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Store.AppInfo::set_appId(System.String)
extern "C"  void AppInfo_set_appId_m2055658561 (AppInfo_t2433711276 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Store.AppInfo::set_appKey(System.String)
extern "C"  void AppInfo_set_appKey_m3602781371 (AppInfo_t2433711276 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Store.AppInfo::set_debug(System.Boolean)
extern "C"  void AppInfo_set_debug_m3225992108 (AppInfo_t2433711276 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,IAPDemoProductUI>::.ctor()
#define Dictionary_2__ctor_m3039867741(__this, method) ((  void (*) (Dictionary_2_t708210053 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Product[] UnityEngine.Purchasing.ProductCollection::get_all()
extern "C"  ProductU5BU5D_t2942947242* ProductCollection_get_all_m2286843352 (ProductCollection_t2671956229 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::InitUI(System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Product>)
extern "C"  void IAPDemo_InitUI_m164977490 (IAPDemo_t3681080565 * __this, RuntimeObject* ___items0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<UnityEngine.Purchasing.Product>::.ctor(System.Object,System.IntPtr)
#define Action_1__ctor_m3094878739(__this, p0, p1, method) ((  void (*) (Action_1_t3416877654 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.Product::get_availableToPurchase()
extern "C"  bool Product_get_availableToPurchase_m3282912434 (Product_t3244410059 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Product::get_metadata()
extern "C"  ProductMetadata_t3417118930 * Product_get_metadata_m3202120155 (Product_t3244410059 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.ProductMetadata::get_localizedTitle()
extern "C"  String_t* ProductMetadata_get_localizedTitle_m1221956283 (ProductMetadata_t3417118930 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.ProductMetadata::get_localizedDescription()
extern "C"  String_t* ProductMetadata_get_localizedDescription_m2896855065 (ProductMetadata_t3417118930 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.ProductMetadata::get_isoCurrencyCode()
extern "C"  String_t* ProductMetadata_get_isoCurrencyCode_m1144927692 (ProductMetadata_t3417118930 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Decimal UnityEngine.Purchasing.ProductMetadata::get_localizedPrice()
extern "C"  Decimal_t2948259380  ProductMetadata_get_localizedPrice_m3688706107 (ProductMetadata_t3417118930 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString()
extern "C"  String_t* Decimal_ToString_m4018746482 (Decimal_t2948259380 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.ProductMetadata::get_localizedPriceString()
extern "C"  String_t* ProductMetadata_get_localizedPriceString_m3339862584 (ProductMetadata_t3417118930 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.Product::get_transactionID()
extern "C"  String_t* Product_get_transactionID_m2196298596 (Product_t3244410059 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.Product::get_receipt()
extern "C"  String_t* Product_get_receipt_m117487645 (Product_t3244410059 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Join(System.String,System.String[])
extern "C"  String_t* String_Join_m2050845953 (RuntimeObject * __this /* static, unused */, String_t* p0, StringU5BU5D_t1281789340* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.Product::get_definition()
extern "C"  ProductDefinition_t339727138 * Product_get_definition_m3366103520 (Product_t3244410059 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.ProductDefinition::get_type()
extern "C"  int32_t ProductDefinition_get_type_m1651363521 (ProductDefinition_t339727138 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean IAPDemo::checkIfProductIsAvailableForSubscriptionManager(System.String)
extern "C"  bool IAPDemo_checkIfProductIsAvailableForSubscriptionManager_m2252612912 (IAPDemo_t3681080565 * __this, String_t* ___receipt0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.ProductDefinition::get_storeSpecificId()
extern "C"  String_t* ProductDefinition_get_storeSpecificId_m2520532185 (ProductDefinition_t339727138 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m131312521(__this, p0, method) ((  bool (*) (Dictionary_2_t1632706988 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// !1 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(!0)
#define Dictionary_2_get_Item_m2543911734(__this, p0, method) ((  String_t* (*) (Dictionary_2_t1632706988 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// System.Void UnityEngine.Purchasing.SubscriptionManager::.ctor(UnityEngine.Purchasing.Product,System.String)
extern "C"  void SubscriptionManager__ctor_m4283984330 (SubscriptionManager_t2975887760 * __this, Product_t3244410059 * p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.SubscriptionInfo UnityEngine.Purchasing.SubscriptionManager::getSubscriptionInfo()
extern "C"  SubscriptionInfo_t2350244624 * SubscriptionManager_getSubscriptionInfo_m654722531 (SubscriptionManager_t2975887760 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.SubscriptionInfo::getProductId()
extern "C"  String_t* SubscriptionInfo_getProductId_m3847966677 (SubscriptionInfo_t2350244624 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime UnityEngine.Purchasing.SubscriptionInfo::getPurchaseDate()
extern "C"  DateTime_t3738529785  SubscriptionInfo_getPurchaseDate_m4055618457 (SubscriptionInfo_t2350244624 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime UnityEngine.Purchasing.SubscriptionInfo::getExpireDate()
extern "C"  DateTime_t3738529785  SubscriptionInfo_getExpireDate_m301883269 (SubscriptionInfo_t2350244624 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Result UnityEngine.Purchasing.SubscriptionInfo::isSubscribed()
extern "C"  int32_t SubscriptionInfo_isSubscribed_m212322656 (SubscriptionInfo_t2350244624 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Result UnityEngine.Purchasing.SubscriptionInfo::isExpired()
extern "C"  int32_t SubscriptionInfo_isExpired_m1561457985 (SubscriptionInfo_t2350244624 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Result UnityEngine.Purchasing.SubscriptionInfo::isCancelled()
extern "C"  int32_t SubscriptionInfo_isCancelled_m3823839797 (SubscriptionInfo_t2350244624 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Result UnityEngine.Purchasing.SubscriptionInfo::isFreeTrial()
extern "C"  int32_t SubscriptionInfo_isFreeTrial_m3750515233 (SubscriptionInfo_t2350244624 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Result UnityEngine.Purchasing.SubscriptionInfo::isAutoRenewing()
extern "C"  int32_t SubscriptionInfo_isAutoRenewing_m2031216831 (SubscriptionInfo_t2350244624 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan UnityEngine.Purchasing.SubscriptionInfo::getRemainingTime()
extern "C"  TimeSpan_t881159249  SubscriptionInfo_getRemainingTime_m3420553336 (SubscriptionInfo_t2350244624 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Result UnityEngine.Purchasing.SubscriptionInfo::isIntroductoryPricePeriod()
extern "C"  int32_t SubscriptionInfo_isIntroductoryPricePeriod_m2004921712 (SubscriptionInfo_t2350244624 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.SubscriptionInfo::getIntroductoryPrice()
extern "C"  String_t* SubscriptionInfo_getIntroductoryPrice_m2940371587 (SubscriptionInfo_t2350244624 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan UnityEngine.Purchasing.SubscriptionInfo::getIntroductoryPricePeriod()
extern "C"  TimeSpan_t881159249  SubscriptionInfo_getIntroductoryPricePeriod_m2470593750 (SubscriptionInfo_t2350244624 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.Purchasing.SubscriptionInfo::getIntroductoryPricePeriodCycles()
extern "C"  int64_t SubscriptionInfo_getIntroductoryPricePeriodCycles_m1583001944 (SubscriptionInfo_t2350244624 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::AddProductUIs(UnityEngine.Purchasing.Product[])
extern "C"  void IAPDemo_AddProductUIs_m3325452711 (IAPDemo_t3681080565 * __this, ProductU5BU5D_t2942947242* ___products0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::LogProductDefinitions()
extern "C"  void IAPDemo_LogProductDefinitions_m1832835333 (IAPDemo_t3681080565 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.Purchasing.MiniJson::JsonDecode(System.String)
extern "C"  RuntimeObject * MiniJson_JsonDecode_m1204021123 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m87616083(__this, p0, method) ((  bool (*) (Dictionary_2_t2865362463 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0)
#define Dictionary_2_get_Item_m3008302402(__this, p0, method) ((  RuntimeObject * (*) (Dictionary_2_t2865362463 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.PurchaseEventArgs::get_purchasedProduct()
extern "C"  Product_t3244410059 * PurchaseEventArgs_get_purchasedProduct_m3472521060 (PurchaseEventArgs_t3033159582 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.ProductDefinition::get_id()
extern "C"  String_t* ProductDefinition_get_id_m1593385231 (ProductDefinition_t339727138 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.JsonUtility::FromJson<UnityEngine.Purchasing.UnifiedReceipt>(System.String)
#define JsonUtility_FromJson_TisUnifiedReceipt_t1348780434_m2808270756(__this /* static, unused */, p0, method) ((  UnifiedReceipt_t1348780434 * (*) (RuntimeObject * /* static, unused */, String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m2645751381_gshared)(__this /* static, unused */, p0, method)
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C"  bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.JsonUtility::FromJson<UnityEngine.Purchasing.UnityChannelPurchaseReceipt>(System.String)
#define JsonUtility_FromJson_TisUnityChannelPurchaseReceipt_t3342804115_m179166322(__this /* static, unused */, p0, method) ((  UnityChannelPurchaseReceipt_t3342804115 * (*) (RuntimeObject * /* static, unused */, String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m2645751381_gshared)(__this /* static, unused */, p0, method)
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
extern "C"  void Debug_LogFormat_m309087137 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::UpdateProductUI(UnityEngine.Purchasing.Product)
extern "C"  void IAPDemo_UpdateProductUI_m3067243867 (IAPDemo_t3681080565 * __this, Product_t3244410059 * ___p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.Extension.PurchaseFailureDescription::get_message()
extern "C"  String_t* PurchaseFailureDescription_get_message_m3489497373 (PurchaseFailureDescription_t437632294 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.JsonUtility::FromJson<IAPDemo/UnityChannelPurchaseError>(System.String)
#define JsonUtility_FromJson_TisUnityChannelPurchaseError_t2306817818_m3180240101(__this /* static, unused */, p0, method) ((  UnityChannelPurchaseError_t2306817818 * (*) (RuntimeObject * /* static, unused */, String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m2645751381_gshared)(__this /* static, unused */, p0, method)
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo/<Awake>c__AnonStorey0::.ctor()
extern "C"  void U3CAwakeU3Ec__AnonStorey0__ctor_m4083696123 (U3CAwakeU3Ec__AnonStorey0_t2364586269 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule::Instance()
extern "C"  StandardPurchasingModule_t2580735509 * StandardPurchasingModule_Instance_m2991111855 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.StandardPurchasingModule::set_useFakeStoreUIMode(UnityEngine.Purchasing.FakeStoreUIMode)
extern "C"  void StandardPurchasingModule_set_useFakeStoreUIMode_m2028643116 (StandardPurchasingModule_t2580735509 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::Instance(UnityEngine.Purchasing.Extension.IPurchasingModule,UnityEngine.Purchasing.Extension.IPurchasingModule[])
extern "C"  ConfigurationBuilder_t1618671084 * ConfigurationBuilder_Instance_m2204111312 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, IPurchasingModuleU5BU5D_t3784316456* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Purchasing.ConfigurationBuilder::Configure<UnityEngine.Purchasing.IMicrosoftConfiguration>()
#define ConfigurationBuilder_Configure_TisIMicrosoftConfiguration_t981669916_m1554999342(__this, method) ((  RuntimeObject* (*) (ConfigurationBuilder_t1618671084 *, const RuntimeMethod*))ConfigurationBuilder_Configure_TisRuntimeObject_m1211836600_gshared)(__this, method)
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C"  int32_t Application_get_platform_m2150679437 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.AppStore UnityEngine.Purchasing.StandardPurchasingModule::get_appStore()
extern "C"  int32_t StandardPurchasingModule_get_appStore_m3542603452 (StandardPurchasingModule_t2580735509 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Purchasing.ConfigurationBuilder::Configure<UnityEngine.Purchasing.IMoolahConfiguration>()
#define ConfigurationBuilder_Configure_TisIMoolahConfiguration_t131838389_m2841568386(__this, method) ((  RuntimeObject* (*) (ConfigurationBuilder_t1618671084 *, const RuntimeMethod*))ConfigurationBuilder_Configure_TisRuntimeObject_m1211836600_gshared)(__this, method)
// !!0 UnityEngine.Purchasing.ConfigurationBuilder::Configure<UnityEngine.Purchasing.IUnityChannelConfiguration>()
#define ConfigurationBuilder_Configure_TisIUnityChannelConfiguration_t528450575_m1055773883(__this, method) ((  RuntimeObject* (*) (ConfigurationBuilder_t1618671084 *, const RuntimeMethod*))ConfigurationBuilder_Configure_TisRuntimeObject_m1211836600_gshared)(__this, method)
// UnityEngine.Purchasing.ProductCatalog UnityEngine.Purchasing.ProductCatalog::LoadDefaultCatalog()
extern "C"  ProductCatalog_t3178009003 * ProductCatalog_LoadDefaultCatalog_m2858771357 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.ProductCatalogItem> UnityEngine.Purchasing.ProductCatalog::get_allValidProducts()
extern "C"  RuntimeObject* ProductCatalog_get_allValidProducts_m4098778243 (ProductCatalog_t3178009003 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.StoreID> UnityEngine.Purchasing.ProductCatalogItem::get_allStoreIDs()
extern "C"  RuntimeObject* ProductCatalogItem_get_allStoreIDs_m1117403521 (ProductCatalogItem_t2141417634 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IDs::.ctor()
extern "C"  void IDs__ctor_m3084577891 (IDs_t697119909 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IDs::Add(System.String,System.String[])
extern "C"  void IDs_Add_m701658157 (IDs_t697119909 * __this, String_t* p0, StringU5BU5D_t1281789340* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::AddProduct(System.String,UnityEngine.Purchasing.ProductType,UnityEngine.Purchasing.IDs)
extern "C"  ConfigurationBuilder_t1618671084 * ConfigurationBuilder_AddProduct_m3410369666 (ConfigurationBuilder_t1618671084 * __this, String_t* p0, int32_t p1, IDs_t697119909 * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::AddProduct(System.String,UnityEngine.Purchasing.ProductType)
extern "C"  ConfigurationBuilder_t1618671084 * ConfigurationBuilder_AddProduct_m788979654 (ConfigurationBuilder_t1618671084 * __this, String_t* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Purchasing.ConfigurationBuilder::Configure<UnityEngine.Purchasing.IAmazonConfiguration>()
#define ConfigurationBuilder_Configure_TisIAmazonConfiguration_t4078561526_m1671488555(__this, method) ((  RuntimeObject* (*) (ConfigurationBuilder_t1618671084 *, const RuntimeMethod*))ConfigurationBuilder_Configure_TisRuntimeObject_m1211836600_gshared)(__this, method)
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.ConfigurationBuilder::get_products()
extern "C"  HashSet_1_t3199643908 * ConfigurationBuilder_get_products_m513767079 (ConfigurationBuilder_t1618671084 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Purchasing.ConfigurationBuilder::Configure<UnityEngine.Purchasing.ISamsungAppsConfiguration>()
#define ConfigurationBuilder_Configure_TisISamsungAppsConfiguration_t2882465226_m1047328256(__this, method) ((  RuntimeObject* (*) (ConfigurationBuilder_t1618671084 *, const RuntimeMethod*))ConfigurationBuilder_Configure_TisRuntimeObject_m1211836600_gshared)(__this, method)
// !!0 UnityEngine.Purchasing.ConfigurationBuilder::Configure<UnityEngine.Purchasing.ITizenStoreConfiguration>()
#define ConfigurationBuilder_Configure_TisITizenStoreConfiguration_t2207403094_m462687615(__this, method) ((  RuntimeObject* (*) (ConfigurationBuilder_t1618671084 *, const RuntimeMethod*))ConfigurationBuilder_Configure_TisRuntimeObject_m1211836600_gshared)(__this, method)
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern "C"  void Action__ctor_m2994342681 (Action_t1264377477 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action::Invoke()
extern "C"  void Action_Invoke_m937035532 (Action_t1264377477 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo/UnityChannelLoginHandler::.ctor()
extern "C"  void UnityChannelLoginHandler__ctor_m3458817249 (UnityChannelLoginHandler_t2949829254 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
#define Action_1__ctor_m4251216884(__this, p0, p1, method) ((  void (*) (Action_1_t2019918284 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.Store.StoreService::Initialize(UnityEngine.Store.AppInfo,UnityEngine.Store.ILoginListener)
extern "C"  void StoreService_Initialize_m2398808236 (RuntimeObject * __this /* static, unused */, AppInfo_t2433711276 * p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean IAPDemo::NeedRestoreButton()
extern "C"  bool IAPDemo_NeedRestoreButton_m845752709 (IAPDemo_t3681080565 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean IAPDemo::NeedLoginButton()
extern "C"  bool IAPDemo_NeedLoginButton_m2506353612 (IAPDemo_t3681080565 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean IAPDemo::NeedValidateButton()
extern "C"  bool IAPDemo_NeedValidateButton_m2876569025 (IAPDemo_t3681080565 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::ClearProductUIs()
extern "C"  void IAPDemo_ClearProductUIs_m1509731126 (IAPDemo_t3681080565 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C"  ButtonClickedEvent_t48803504 * Button_get_onClick_m2332132945 (Button_t4055032469 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction__ctor_m772160306 (UnityAction_t3245792599 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
extern "C"  void UnityEvent_AddListener_m2276267359 (UnityEvent_t2581268647 * __this, UnityAction_t3245792599 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_unityVersion()
extern "C"  String_t* Application_get_unityVersion_m1068543125 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.ProductCollection::WithID(System.String)
extern "C"  Product_t3244410059 * ProductCollection_WithID_m2597694943 (ProductCollection_t2671956229 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C"  void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<UnityEngine.Purchasing.RestoreTransactionIDState>::.ctor(System.Object,System.IntPtr)
#define Action_1__ctor_m2866643322(__this, p0, p1, method) ((  void (*) (Action_1_t1412811613 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m2866643322_gshared)(__this, p0, p1, method)
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
#define Action_1__ctor_m981112613(__this, p0, p1, method) ((  void (*) (Action_1_t269755560 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m981112613_gshared)(__this, p0, p1, method)
// System.Void System.Action`1<UnityEngine.Store.UserInfo>::.ctor(System.Object,System.IntPtr)
#define Action_1__ctor_m2345809161(__this, p0, p1, method) ((  void (*) (Action_1_t3058893588 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.Store.StoreService::Login(UnityEngine.Store.ILoginListener)
extern "C"  void StoreService_Login_m3447758900 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo/<ValidateButtonClick>c__AnonStorey1::.ctor()
extern "C"  void U3CValidateButtonClickU3Ec__AnonStorey1__ctor_m3498591618 (U3CValidateButtonClickU3Ec__AnonStorey1_t541528072 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`3<System.Boolean,System.String,System.String>::.ctor(System.Object,System.IntPtr)
#define Action_3__ctor_m3635124332(__this, p0, p1, method) ((  void (*) (Action_3_t331451502 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_3__ctor_m462219898_gshared)(__this, p0, p1, method)
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,IAPDemoProductUI>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m1212213977(__this, method) ((  Enumerator_t2662392828  (*) (Dictionary_2_t708210053 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m3278257048_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,IAPDemoProductUI>::get_Current()
#define Enumerator_get_Current_m2612823951(__this, method) ((  KeyValuePair_2_t3105882220  (*) (Enumerator_t2662392828 *, const RuntimeMethod*))Enumerator_get_Current_m2655181939_gshared)(__this, method)
// !1 System.Collections.Generic.KeyValuePair`2<System.String,IAPDemoProductUI>::get_Value()
#define KeyValuePair_2_get_Value_m3043167188(__this, method) ((  IAPDemoProductUI_t922953754 * (*) (KeyValuePair_2_t3105882220 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3464904234_gshared)(__this, method)
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,IAPDemoProductUI>::MoveNext()
#define Enumerator_MoveNext_m421504343(__this, method) ((  bool (*) (Enumerator_t2662392828 *, const RuntimeMethod*))Enumerator_MoveNext_m1107569389_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,IAPDemoProductUI>::Dispose()
#define Enumerator_Dispose_m1653159561(__this, method) ((  void (*) (Enumerator_t2662392828 *, const RuntimeMethod*))Enumerator_Dispose_m3885012575_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,IAPDemoProductUI>::Clear()
#define Dictionary_2_Clear_m2652860274(__this, method) ((  void (*) (Dictionary_2_t708210053 *, const RuntimeMethod*))Dictionary_2_Clear_m1938428402_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
#define GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(__this, method) ((  RectTransform_t3704657025 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
extern "C"  Rect_t2360479859  RectTransform_get_rect_m574169965 (RectTransform_t3704657025 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_height()
extern "C"  float Rect_get_height_m1358425599 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C"  Vector3_t3722313464  Transform_get_localPosition_m4234289348 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransform::SetSizeWithCurrentAnchors(UnityEngine.RectTransform/Axis,System.Single)
extern "C"  void RectTransform_SetSizeWithCurrentAnchors_m1274467307 (RectTransform_t3704657025 * __this, int32_t p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
extern "C"  GameObject_t1113636619 * GameObject_get_gameObject_m3693461266 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
#define Object_Instantiate_TisGameObject_t1113636619_m4070250708(__this /* static, unused */, p0, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method)
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C"  Transform_t3600365921 * Transform_get_parent_m835071599 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C"  void Transform_SetParent_m273471670 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, bool p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C"  void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
extern "C"  Vector3_t3722313464  Vector3_get_down_m3781355428 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<IAPDemoProductUI>()
#define GameObject_GetComponent_TisIAPDemoProductUI_t922953754_m357023114(__this, method) ((  IAPDemoProductUI_t922953754 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void IAPDemoProductUI::SetProduct(UnityEngine.Purchasing.Product,System.Action`1<System.String>)
extern "C"  void IAPDemoProductUI_SetProduct_m1416471812 (IAPDemoProductUI_t922953754 * __this, Product_t3244410059 * ___p0, Action_1_t2019918284 * ___purchaseCallback1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,IAPDemoProductUI>::set_Item(!0,!1)
#define Dictionary_2_set_Item_m4009054908(__this, p0, p1, method) ((  void (*) (Dictionary_2_t708210053 *, String_t*, IAPDemoProductUI_t922953754 *, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,IAPDemoProductUI>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m1691599079(__this, p0, method) ((  bool (*) (Dictionary_2_t708210053 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// !1 System.Collections.Generic.Dictionary`2<System.String,IAPDemoProductUI>::get_Item(!0)
#define Dictionary_2_get_Item_m2894824968(__this, p0, method) ((  IAPDemoProductUI_t922953754 * (*) (Dictionary_2_t708210053 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// System.Void IAPDemoProductUI::SetPendingTime(System.Int32)
extern "C"  void IAPDemoProductUI_SetPendingTime_m907117440 (IAPDemoProductUI_t922953754 * __this, int32_t ___secondsRemaining0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.ProductDefinition::get_enabled()
extern "C"  bool ProductDefinition_get_enabled_m3337637214 (ProductDefinition_t339727138 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object[])
extern "C"  String_t* String_Format_m630303134 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::OnTransactionsRestored(System.Boolean)
extern "C"  void IAPDemo_OnTransactionsRestored_m3770337668 (IAPDemo_t3681080565 * __this, bool ___success0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Store.UserInfo::get_channel()
extern "C"  String_t* UserInfo_get_channel_m347330040 (UserInfo_t2886425993 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Store.UserInfo::get_userId()
extern "C"  String_t* UserInfo_get_userId_m2274633782 (UserInfo_t2886425993 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Store.UserInfo::get_userLoginToken()
extern "C"  String_t* UserInfo_get_userLoginToken_m844253205 (UserInfo_t2886425993 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UnityPurchasing::Initialize(UnityEngine.Purchasing.IStoreListener,UnityEngine.Purchasing.ConfigurationBuilder)
extern "C"  void UnityPurchasing_Initialize_m1836262307 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, ConfigurationBuilder_t1618671084 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<System.String>::Invoke(!0)
#define Action_1_Invoke_m888793725(__this, p0, method) ((  void (*) (Action_1_t2019918284 *, String_t*, const RuntimeMethod*))Action_1_Invoke_m2461023210_gshared)(__this, p0, method)
// System.Void System.Action`1<UnityEngine.Store.UserInfo>::Invoke(!0)
#define Action_1_Invoke_m3514176011(__this, p0, method) ((  void (*) (Action_1_t3058893588 *, UserInfo_t2886425993 *, const RuntimeMethod*))Action_1_Invoke_m2461023210_gshared)(__this, p0, method)
// System.Boolean UnityEngine.Purchasing.Product::get_hasReceipt()
extern "C"  bool Product_get_hasReceipt_m2449951182 (Product_t3244410059 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
extern "C"  void Selectable_set_interactable_m3105888815 (Selectable_t3250028441 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton>::.ctor()
#define List_1__ctor_m2463266095(__this, method) ((  void (*) (List_1_t3820967359 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener>::.ctor()
#define List_1__ctor_m1649537636(__this, method) ((  void (*) (List_1_t3473867730 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Boolean UnityEngine.Purchasing.ProductCatalog::IsEmpty()
extern "C"  bool ProductCatalog_IsEmpty_m951513312 (ProductCatalog_t3178009003 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::CreateCodelessIAPStoreListenerInstance()
extern "C"  void CodelessIAPStoreListener_CreateCodelessIAPStoreListenerInstance_m1343785826 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IAPConfigurationHelper::PopulateConfigurationBuilder(UnityEngine.Purchasing.ConfigurationBuilder&,UnityEngine.Purchasing.ProductCatalog)
extern "C"  void IAPConfigurationHelper_PopulateConfigurationBuilder_m499335247 (RuntimeObject * __this /* static, unused */, ConfigurationBuilder_t1618671084 ** ___builder0, ProductCatalog_t3178009003 * ___catalog1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::.ctor()
extern "C"  void CodelessIAPStoreListener__ctor_m4057698661 (CodelessIAPStoreListener_t3553337218 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::InitializePurchasing()
extern "C"  void CodelessIAPStoreListener_InitializePurchasing_m1015531517 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.ProductCatalogItem> UnityEngine.Purchasing.ProductCatalog::get_allProducts()
extern "C"  RuntimeObject* ProductCatalog_get_allProducts_m3823510912 (ProductCatalog_t3178009003 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton>::Add(!0)
#define List_1_Add_m1783141595(__this, p0, method) ((  void (*) (List_1_t3820967359 *, IAPButton_t2348892617 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton>::Remove(!0)
#define List_1_Remove_m3261290539(__this, p0, method) ((  bool (*) (List_1_t3820967359 *, IAPButton_t2348892617 *, const RuntimeMethod*))List_1_Remove_m1416767016_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener>::Add(!0)
#define List_1_Add_m3263351746(__this, p0, method) ((  void (*) (List_1_t3473867730 *, IAPListener_t2001792988 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener>::Remove(!0)
#define List_1_Remove_m1956914710(__this, p0, method) ((  bool (*) (List_1_t3473867730 *, IAPListener_t2001792988 *, const RuntimeMethod*))List_1_Remove_m1416767016_gshared)(__this, p0, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton>::GetEnumerator()
#define List_1_GetEnumerator_m3867390102(__this, method) ((  Enumerator_t1415243940  (*) (List_1_t3820967359 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPButton>::get_Current()
#define Enumerator_get_Current_m2512686566(__this, method) ((  IAPButton_t2348892617 * (*) (Enumerator_t1415243940 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Void UnityEngine.Purchasing.IAPButton::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
extern "C"  void IAPButton_OnPurchaseFailed_m2987162176 (IAPButton_t2348892617 * __this, Product_t3244410059 * ___product0, int32_t ___reason1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPButton>::MoveNext()
#define Enumerator_MoveNext_m1263452849(__this, method) ((  bool (*) (Enumerator_t1415243940 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPButton>::Dispose()
#define Enumerator_Dispose_m1282679402(__this, method) ((  void (*) (Enumerator_t1415243940 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void UnityEngine.Purchasing.IAPButton::UpdateText()
extern "C"  void IAPButton_UpdateText_m735950863 (IAPButton_t2348892617 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object)
extern "C"  String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.IAPButton::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
extern "C"  int32_t IAPButton_ProcessPurchase_m2399959099 (IAPButton_t2348892617 * __this, PurchaseEventArgs_t3033159582 * ___e0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPListener>::GetEnumerator()
#define List_1_GetEnumerator_m2016754886(__this, method) ((  Enumerator_t1068144311  (*) (List_1_t3473867730 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPListener>::get_Current()
#define Enumerator_get_Current_m2005020076(__this, method) ((  IAPListener_t2001792988 * (*) (Enumerator_t1068144311 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.IAPListener::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
extern "C"  int32_t IAPListener_ProcessPurchase_m1466356441 (IAPListener_t2001792988 * __this, PurchaseEventArgs_t3033159582 * ___e0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPListener>::MoveNext()
#define Enumerator_MoveNext_m1661977231(__this, method) ((  bool (*) (Enumerator_t1068144311 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Purchasing.IAPListener>::Dispose()
#define Enumerator_Dispose_m3008095435(__this, method) ((  void (*) (Enumerator_t1068144311 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void UnityEngine.Purchasing.IAPListener::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
extern "C"  void IAPListener_OnPurchaseFailed_m2281361415 (IAPListener_t2001792988 * __this, Product_t3244410059 * ___product0, int32_t ___reason1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
#define Component_GetComponent_TisButton_t4055032469_m3901478567(__this, method) ((  Button_t4055032469 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.CodelessIAPStoreListener UnityEngine.Purchasing.CodelessIAPStoreListener::get_Instance()
extern "C"  CodelessIAPStoreListener_t3553337218 * CodelessIAPStoreListener_get_Instance_m3072254248 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.CodelessIAPStoreListener::HasProductInCatalog(System.String)
extern "C"  bool CodelessIAPStoreListener_HasProductInCatalog_m3373328566 (CodelessIAPStoreListener_t3553337218 * __this, String_t* ___productID0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::AddButton(UnityEngine.Purchasing.IAPButton)
extern "C"  void CodelessIAPStoreListener_AddButton_m3372830185 (CodelessIAPStoreListener_t3553337218 * __this, IAPButton_t2348892617 * ___button0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::RemoveButton(UnityEngine.Purchasing.IAPButton)
extern "C"  void CodelessIAPStoreListener_RemoveButton_m3944861536 (CodelessIAPStoreListener_t3553337218 * __this, IAPButton_t2348892617 * ___button0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::InitiatePurchase(System.String)
extern "C"  void CodelessIAPStoreListener_InitiatePurchase_m520296817 (CodelessIAPStoreListener_t3553337218 * __this, String_t* ___productID0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.IExtensionProvider UnityEngine.Purchasing.CodelessIAPStoreListener::get_ExtensionProvider()
extern "C"  RuntimeObject* CodelessIAPStoreListener_get_ExtensionProvider_m1851144105 (CodelessIAPStoreListener_t3553337218 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C"  String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Purchasing.Product>::Invoke(!0)
#define UnityEvent_1_Invoke_m3876822971(__this, p0, method) ((  void (*) (UnityEvent_1_t4126069563 *, Product_t3244410059 *, const RuntimeMethod*))UnityEvent_1_Invoke_m2734859485_gshared)(__this, p0, method)
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason>::Invoke(!0,!1)
#define UnityEvent_2_Invoke_m1220352153(__this, p0, p1, method) ((  void (*) (UnityEvent_2_t1877158062 *, Product_t3244410059 *, int32_t, const RuntimeMethod*))UnityEvent_2_Invoke_m3069255356_gshared)(__this, p0, p1, method)
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.CodelessIAPStoreListener::GetProduct(System.String)
extern "C"  Product_t3244410059 * CodelessIAPStoreListener_GetProduct_m2762398532 (CodelessIAPStoreListener_t3553337218 * __this, String_t* ___productID0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IAPButton::OnTransactionsRestored(System.Boolean)
extern "C"  void IAPButton_OnTransactionsRestored_m3850310722 (IAPButton_t2348892617 * __this, bool ___success0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Purchasing.Product>::.ctor()
#define UnityEvent_1__ctor_m1100375389(__this, method) ((  void (*) (UnityEvent_1_t4126069563 *, const RuntimeMethod*))UnityEvent_1__ctor_m1789019280_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason>::.ctor()
#define UnityEvent_2__ctor_m1193818750(__this, method) ((  void (*) (UnityEvent_2_t1877158062 *, const RuntimeMethod*))UnityEvent_2__ctor_m1022790274_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>::.ctor()
#define List_1__ctor_m2305681321(__this, method) ((  void (*) (List_1_t748791510 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Collections.Generic.IList`1<UnityEngine.Purchasing.ProductCatalogPayout> UnityEngine.Purchasing.ProductCatalogItem::get_Payouts()
extern "C"  RuntimeObject* ProductCatalogItem_get_Payouts_m2797682776 (ProductCatalogItem_t2141417634 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.ProductCatalogPayout::get_typeString()
extern "C"  String_t* ProductCatalogPayout_get_typeString_m1592615968 (ProductCatalogPayout_t924351538 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.ProductCatalogPayout::get_subtype()
extern "C"  String_t* ProductCatalogPayout_get_subtype_m14551717 (ProductCatalogPayout_t924351538 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Purchasing.ProductCatalogPayout::get_quantity()
extern "C"  double ProductCatalogPayout_get_quantity_m4150851878 (ProductCatalogPayout_t924351538 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.ProductCatalogPayout::get_data()
extern "C"  String_t* ProductCatalogPayout_get_data_m3404911945 (ProductCatalogPayout_t924351538 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.PayoutDefinition::.ctor(System.String,System.String,System.Double,System.String)
extern "C"  void PayoutDefinition__ctor_m2238149198 (PayoutDefinition_t3571684064 * __this, String_t* p0, String_t* p1, double p2, String_t* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>::Add(!0)
#define List_1_Add_m1667627229(__this, p0, method) ((  void (*) (List_1_t748791510 *, PayoutDefinition_t3571684064 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// !0[] System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>::ToArray()
#define List_1_ToArray_m566969820(__this, method) ((  PayoutDefinitionU5BU5D_t274752929* (*) (List_1_t748791510 *, const RuntimeMethod*))List_1_ToArray_m4168020446_gshared)(__this, method)
// UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::AddProduct(System.String,UnityEngine.Purchasing.ProductType,UnityEngine.Purchasing.IDs,System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.PayoutDefinition>)
extern "C"  ConfigurationBuilder_t1618671084 * ConfigurationBuilder_AddProduct_m2562156830 (ConfigurationBuilder_t1618671084 * __this, String_t* p0, int32_t p1, IDs_t697119909 * p2, RuntimeObject* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C"  void Object_DontDestroyOnLoad_m166252750 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::AddListener(UnityEngine.Purchasing.IAPListener)
extern "C"  void CodelessIAPStoreListener_AddListener_m1184156019 (CodelessIAPStoreListener_t3553337218 * __this, IAPListener_t2001792988 * ___listener0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::RemoveListener(UnityEngine.Purchasing.IAPListener)
extern "C"  void CodelessIAPStoreListener_RemoveListener_m1699040040 (CodelessIAPStoreListener_t3553337218 * __this, IAPListener_t2001792988 * ___listener0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void AppStoresSupport.AppStoreSetting::.ctor()
extern "C"  void AppStoreSetting__ctor_m1040304863 (AppStoreSetting_t1592337179 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppStoreSetting__ctor_m1040304863_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_AppID_0(L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_AppKey_1(L_1);
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
// System.Void AppStoresSupport.AppStoreSettings::.ctor()
extern "C"  void AppStoreSettings__ctor_m2778803367 (AppStoreSettings_t2325796953 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppStoreSettings__ctor_m2778803367_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_UnityClientID_2(L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_UnityClientKey_3(L_1);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_UnityClientRSAPublicKey_4(L_2);
		AppStoreSetting_t1592337179 * L_3 = (AppStoreSetting_t1592337179 *)il2cpp_codegen_object_new(AppStoreSetting_t1592337179_il2cpp_TypeInfo_var);
		AppStoreSetting__ctor_m1040304863(L_3, /*hidden argument*/NULL);
		__this->set_XiaomiAppStoreSetting_5(L_3);
		ScriptableObject__ctor_m1310743131(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Store.AppInfo AppStoresSupport.AppStoreSettings::getAppInfo()
extern "C"  AppInfo_t2433711276 * AppStoreSettings_getAppInfo_m2124579387 (AppStoreSettings_t2325796953 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppStoreSettings_getAppInfo_m2124579387_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AppInfo_t2433711276 * V_0 = NULL;
	{
		AppInfo_t2433711276 * L_0 = (AppInfo_t2433711276 *)il2cpp_codegen_object_new(AppInfo_t2433711276_il2cpp_TypeInfo_var);
		AppInfo__ctor_m2735043516(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		AppInfo_t2433711276 * L_1 = V_0;
		String_t* L_2 = __this->get_UnityClientID_2();
		NullCheck(L_1);
		AppInfo_set_clientId_m1938777246(L_1, L_2, /*hidden argument*/NULL);
		AppInfo_t2433711276 * L_3 = V_0;
		String_t* L_4 = __this->get_UnityClientKey_3();
		NullCheck(L_3);
		AppInfo_set_clientKey_m2324748463(L_3, L_4, /*hidden argument*/NULL);
		AppInfo_t2433711276 * L_5 = V_0;
		AppStoreSetting_t1592337179 * L_6 = __this->get_XiaomiAppStoreSetting_5();
		NullCheck(L_6);
		String_t* L_7 = L_6->get_AppID_0();
		NullCheck(L_5);
		AppInfo_set_appId_m2055658561(L_5, L_7, /*hidden argument*/NULL);
		AppInfo_t2433711276 * L_8 = V_0;
		AppStoreSetting_t1592337179 * L_9 = __this->get_XiaomiAppStoreSetting_5();
		NullCheck(L_9);
		String_t* L_10 = L_9->get_AppKey_1();
		NullCheck(L_8);
		AppInfo_set_appKey_m3602781371(L_8, L_10, /*hidden argument*/NULL);
		AppInfo_t2433711276 * L_11 = V_0;
		AppStoreSetting_t1592337179 * L_12 = __this->get_XiaomiAppStoreSetting_5();
		NullCheck(L_12);
		bool L_13 = L_12->get_IsTestMode_2();
		NullCheck(L_11);
		AppInfo_set_debug_m3225992108(L_11, L_13, /*hidden argument*/NULL);
		AppInfo_t2433711276 * L_14 = V_0;
		return L_14;
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
// System.Void IAPDemo::.ctor()
extern "C"  void IAPDemo__ctor_m4004975889 (IAPDemo_t3681080565 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPDemo__ctor_m4004975889_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t708210053 * L_0 = (Dictionary_2_t708210053 *)il2cpp_codegen_object_new(Dictionary_2_t708210053_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3039867741(L_0, /*hidden argument*/Dictionary_2__ctor_m3039867741_RuntimeMethod_var);
		__this->set_m_ProductUIs_18(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IAPDemo::OnInitialized(UnityEngine.Purchasing.IStoreController,UnityEngine.Purchasing.IExtensionProvider)
extern "C"  void IAPDemo_OnInitialized_m334520219 (IAPDemo_t3681080565 * __this, RuntimeObject* ___controller0, RuntimeObject* ___extensions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPDemo_OnInitialized_m334520219_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t1632706988 * V_0 = NULL;
	Product_t3244410059 * V_1 = NULL;
	ProductU5BU5D_t2942947242* V_2 = NULL;
	int32_t V_3 = 0;
	Decimal_t2948259380  V_4;
	memset(&V_4, 0, sizeof(V_4));
	String_t* V_5 = NULL;
	SubscriptionManager_t2975887760 * V_6 = NULL;
	SubscriptionInfo_t2350244624 * V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	String_t* G_B9_0 = NULL;
	{
		RuntimeObject* L_0 = ___controller0;
		__this->set_m_Controller_2(L_0);
		RuntimeObject* L_1 = ___extensions1;
		NullCheck(L_1);
		RuntimeObject* L_2 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IExtensionProvider_GetExtension_TisIAppleExtensions_t4146644616_m504093785_RuntimeMethod_var, L_1);
		__this->set_m_AppleExtensions_3(L_2);
		RuntimeObject* L_3 = ___extensions1;
		NullCheck(L_3);
		RuntimeObject* L_4 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IExtensionProvider_GetExtension_TisISamsungAppsExtensions_t2712620151_m3179222989_RuntimeMethod_var, L_3);
		__this->set_m_SamsungExtensions_5(L_4);
		RuntimeObject* L_5 = ___extensions1;
		NullCheck(L_5);
		RuntimeObject* L_6 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IExtensionProvider_GetExtension_TisIMoolahExtension_t955300474_m531513961_RuntimeMethod_var, L_5);
		__this->set_m_MoolahExtensions_4(L_6);
		RuntimeObject* L_7 = ___extensions1;
		NullCheck(L_7);
		RuntimeObject* L_8 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IExtensionProvider_GetExtension_TisIMicrosoftExtensions_t4020186927_m325367026_RuntimeMethod_var, L_7);
		__this->set_m_MicrosoftExtensions_6(L_8);
		RuntimeObject* L_9 = ___extensions1;
		NullCheck(L_9);
		RuntimeObject* L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IExtensionProvider_GetExtension_TisIUnityChannelExtensions_t3299991497_m1021587148_RuntimeMethod_var, L_9);
		__this->set_m_UnityChannelExtensions_7(L_10);
		RuntimeObject* L_11 = ___extensions1;
		NullCheck(L_11);
		RuntimeObject* L_12 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IExtensionProvider_GetExtension_TisITransactionHistoryExtensions_t1575111476_m1573233908_RuntimeMethod_var, L_11);
		__this->set_m_TransactionHistoryExtensions_8(L_12);
		RuntimeObject* L_13 = ___controller0;
		NullCheck(L_13);
		ProductCollection_t2671956229 * L_14 = InterfaceFuncInvoker0< ProductCollection_t2671956229 * >::Invoke(0 /* UnityEngine.Purchasing.ProductCollection UnityEngine.Purchasing.IStoreController::get_products() */, IStoreController_t2579314702_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		ProductU5BU5D_t2942947242* L_15 = ProductCollection_get_all_m2286843352(L_14, /*hidden argument*/NULL);
		IAPDemo_InitUI_m164977490(__this, (RuntimeObject*)(RuntimeObject*)L_15, /*hidden argument*/NULL);
		RuntimeObject* L_16 = __this->get_m_AppleExtensions_3();
		intptr_t L_17 = (intptr_t)IAPDemo_OnDeferred_m1172906547_RuntimeMethod_var;
		Action_1_t3416877654 * L_18 = (Action_1_t3416877654 *)il2cpp_codegen_object_new(Action_1_t3416877654_il2cpp_TypeInfo_var);
		Action_1__ctor_m3094878739(L_18, __this, L_17, /*hidden argument*/Action_1__ctor_m3094878739_RuntimeMethod_var);
		NullCheck(L_16);
		InterfaceActionInvoker1< Action_1_t3416877654 * >::Invoke(1 /* System.Void UnityEngine.Purchasing.IAppleExtensions::RegisterPurchaseDeferredListener(System.Action`1<UnityEngine.Purchasing.Product>) */, IAppleExtensions_t4146644616_il2cpp_TypeInfo_var, L_16, L_18);
		RuntimeObject* L_19 = __this->get_m_AppleExtensions_3();
		NullCheck(L_19);
		Dictionary_2_t1632706988 * L_20 = InterfaceFuncInvoker0< Dictionary_2_t1632706988 * >::Invoke(2 /* System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.Purchasing.IAppleExtensions::GetIntroductoryPriceDictionary() */, IAppleExtensions_t4146644616_il2cpp_TypeInfo_var, L_19);
		V_0 = L_20;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2331215771, /*hidden argument*/NULL);
		RuntimeObject* L_21 = ___controller0;
		NullCheck(L_21);
		ProductCollection_t2671956229 * L_22 = InterfaceFuncInvoker0< ProductCollection_t2671956229 * >::Invoke(0 /* UnityEngine.Purchasing.ProductCollection UnityEngine.Purchasing.IStoreController::get_products() */, IStoreController_t2579314702_il2cpp_TypeInfo_var, L_21);
		NullCheck(L_22);
		ProductU5BU5D_t2942947242* L_23 = ProductCollection_get_all_m2286843352(L_22, /*hidden argument*/NULL);
		V_2 = L_23;
		V_3 = 0;
		goto IL_033a;
	}

IL_00a0:
	{
		ProductU5BU5D_t2942947242* L_24 = V_2;
		int32_t L_25 = V_3;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Product_t3244410059 * L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_1 = L_27;
		Product_t3244410059 * L_28 = V_1;
		NullCheck(L_28);
		bool L_29 = Product_get_availableToPurchase_m3282912434(L_28, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_0336;
		}
	}
	{
		StringU5BU5D_t1281789340* L_30 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)7));
		Product_t3244410059 * L_31 = V_1;
		NullCheck(L_31);
		ProductMetadata_t3417118930 * L_32 = Product_get_metadata_m3202120155(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		String_t* L_33 = ProductMetadata_get_localizedTitle_m1221956283(L_32, /*hidden argument*/NULL);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_33);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_33);
		StringU5BU5D_t1281789340* L_34 = L_30;
		Product_t3244410059 * L_35 = V_1;
		NullCheck(L_35);
		ProductMetadata_t3417118930 * L_36 = Product_get_metadata_m3202120155(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		String_t* L_37 = ProductMetadata_get_localizedDescription_m2896855065(L_36, /*hidden argument*/NULL);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_37);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_37);
		StringU5BU5D_t1281789340* L_38 = L_34;
		Product_t3244410059 * L_39 = V_1;
		NullCheck(L_39);
		ProductMetadata_t3417118930 * L_40 = Product_get_metadata_m3202120155(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		String_t* L_41 = ProductMetadata_get_isoCurrencyCode_m1144927692(L_40, /*hidden argument*/NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_41);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_41);
		StringU5BU5D_t1281789340* L_42 = L_38;
		Product_t3244410059 * L_43 = V_1;
		NullCheck(L_43);
		ProductMetadata_t3417118930 * L_44 = Product_get_metadata_m3202120155(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		Decimal_t2948259380  L_45 = ProductMetadata_get_localizedPrice_m3688706107(L_44, /*hidden argument*/NULL);
		V_4 = L_45;
		String_t* L_46 = Decimal_ToString_m4018746482((&V_4), /*hidden argument*/NULL);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_46);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_46);
		StringU5BU5D_t1281789340* L_47 = L_42;
		Product_t3244410059 * L_48 = V_1;
		NullCheck(L_48);
		ProductMetadata_t3417118930 * L_49 = Product_get_metadata_m3202120155(L_48, /*hidden argument*/NULL);
		NullCheck(L_49);
		String_t* L_50 = ProductMetadata_get_localizedPriceString_m3339862584(L_49, /*hidden argument*/NULL);
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_50);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_50);
		StringU5BU5D_t1281789340* L_51 = L_47;
		Product_t3244410059 * L_52 = V_1;
		NullCheck(L_52);
		String_t* L_53 = Product_get_transactionID_m2196298596(L_52, /*hidden argument*/NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_53);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_53);
		StringU5BU5D_t1281789340* L_54 = L_51;
		Product_t3244410059 * L_55 = V_1;
		NullCheck(L_55);
		String_t* L_56 = Product_get_receipt_m117487645(L_55, /*hidden argument*/NULL);
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_56);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_56);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_57 = String_Join_m2050845953(NULL /*static, unused*/, _stringLiteral3786252490, L_54, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_57, /*hidden argument*/NULL);
		Product_t3244410059 * L_58 = V_1;
		NullCheck(L_58);
		String_t* L_59 = Product_get_receipt_m117487645(L_58, /*hidden argument*/NULL);
		if (!L_59)
		{
			goto IL_032c;
		}
	}
	{
		Product_t3244410059 * L_60 = V_1;
		NullCheck(L_60);
		ProductDefinition_t339727138 * L_61 = Product_get_definition_m3366103520(L_60, /*hidden argument*/NULL);
		NullCheck(L_61);
		int32_t L_62 = ProductDefinition_get_type_m1651363521(L_61, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_62) == ((uint32_t)2))))
		{
			goto IL_031d;
		}
	}
	{
		Product_t3244410059 * L_63 = V_1;
		NullCheck(L_63);
		String_t* L_64 = Product_get_receipt_m117487645(L_63, /*hidden argument*/NULL);
		bool L_65 = IAPDemo_checkIfProductIsAvailableForSubscriptionManager_m2252612912(__this, L_64, /*hidden argument*/NULL);
		if (!L_65)
		{
			goto IL_030e;
		}
	}
	{
		Dictionary_2_t1632706988 * L_66 = V_0;
		if (!L_66)
		{
			goto IL_0174;
		}
	}
	{
		Dictionary_2_t1632706988 * L_67 = V_0;
		Product_t3244410059 * L_68 = V_1;
		NullCheck(L_68);
		ProductDefinition_t339727138 * L_69 = Product_get_definition_m3366103520(L_68, /*hidden argument*/NULL);
		NullCheck(L_69);
		String_t* L_70 = ProductDefinition_get_storeSpecificId_m2520532185(L_69, /*hidden argument*/NULL);
		NullCheck(L_67);
		bool L_71 = Dictionary_2_ContainsKey_m131312521(L_67, L_70, /*hidden argument*/Dictionary_2_ContainsKey_m131312521_RuntimeMethod_var);
		if (L_71)
		{
			goto IL_017a;
		}
	}

IL_0174:
	{
		G_B9_0 = ((String_t*)(NULL));
		goto IL_018b;
	}

IL_017a:
	{
		Dictionary_2_t1632706988 * L_72 = V_0;
		Product_t3244410059 * L_73 = V_1;
		NullCheck(L_73);
		ProductDefinition_t339727138 * L_74 = Product_get_definition_m3366103520(L_73, /*hidden argument*/NULL);
		NullCheck(L_74);
		String_t* L_75 = ProductDefinition_get_storeSpecificId_m2520532185(L_74, /*hidden argument*/NULL);
		NullCheck(L_72);
		String_t* L_76 = Dictionary_2_get_Item_m2543911734(L_72, L_75, /*hidden argument*/Dictionary_2_get_Item_m2543911734_RuntimeMethod_var);
		G_B9_0 = L_76;
	}

IL_018b:
	{
		V_5 = G_B9_0;
		Product_t3244410059 * L_77 = V_1;
		String_t* L_78 = V_5;
		SubscriptionManager_t2975887760 * L_79 = (SubscriptionManager_t2975887760 *)il2cpp_codegen_object_new(SubscriptionManager_t2975887760_il2cpp_TypeInfo_var);
		SubscriptionManager__ctor_m4283984330(L_79, L_77, L_78, /*hidden argument*/NULL);
		V_6 = L_79;
		SubscriptionManager_t2975887760 * L_80 = V_6;
		NullCheck(L_80);
		SubscriptionInfo_t2350244624 * L_81 = SubscriptionManager_getSubscriptionInfo_m654722531(L_80, /*hidden argument*/NULL);
		V_7 = L_81;
		SubscriptionInfo_t2350244624 * L_82 = V_7;
		NullCheck(L_82);
		String_t* L_83 = SubscriptionInfo_getProductId_m3847966677(L_82, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_84 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3397410596, L_83, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_84, /*hidden argument*/NULL);
		SubscriptionInfo_t2350244624 * L_85 = V_7;
		NullCheck(L_85);
		DateTime_t3738529785  L_86 = SubscriptionInfo_getPurchaseDate_m4055618457(L_85, /*hidden argument*/NULL);
		DateTime_t3738529785  L_87 = L_86;
		RuntimeObject * L_88 = Box(DateTime_t3738529785_il2cpp_TypeInfo_var, &L_87);
		String_t* L_89 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral595808399, L_88, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_89, /*hidden argument*/NULL);
		SubscriptionInfo_t2350244624 * L_90 = V_7;
		NullCheck(L_90);
		DateTime_t3738529785  L_91 = SubscriptionInfo_getExpireDate_m301883269(L_90, /*hidden argument*/NULL);
		DateTime_t3738529785  L_92 = L_91;
		RuntimeObject * L_93 = Box(DateTime_t3738529785_il2cpp_TypeInfo_var, &L_92);
		String_t* L_94 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral148283325, L_93, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_94, /*hidden argument*/NULL);
		SubscriptionInfo_t2350244624 * L_95 = V_7;
		NullCheck(L_95);
		int32_t L_96 = SubscriptionInfo_isSubscribed_m212322656(L_95, /*hidden argument*/NULL);
		V_8 = L_96;
		RuntimeObject * L_97 = Box(Result_t1621722260_il2cpp_TypeInfo_var, (&V_8));
		NullCheck(L_97);
		String_t* L_98 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_97);
		V_8 = *(int32_t*)UnBox(L_97);
		String_t* L_99 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3256441211, L_98, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_99, /*hidden argument*/NULL);
		SubscriptionInfo_t2350244624 * L_100 = V_7;
		NullCheck(L_100);
		int32_t L_101 = SubscriptionInfo_isExpired_m1561457985(L_100, /*hidden argument*/NULL);
		V_9 = L_101;
		RuntimeObject * L_102 = Box(Result_t1621722260_il2cpp_TypeInfo_var, (&V_9));
		NullCheck(L_102);
		String_t* L_103 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_102);
		V_9 = *(int32_t*)UnBox(L_102);
		String_t* L_104 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2593462821, L_103, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_104, /*hidden argument*/NULL);
		SubscriptionInfo_t2350244624 * L_105 = V_7;
		NullCheck(L_105);
		int32_t L_106 = SubscriptionInfo_isCancelled_m3823839797(L_105, /*hidden argument*/NULL);
		int32_t L_107 = L_106;
		RuntimeObject * L_108 = Box(Result_t1621722260_il2cpp_TypeInfo_var, &L_107);
		String_t* L_109 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral1355814968, L_108, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_109, /*hidden argument*/NULL);
		SubscriptionInfo_t2350244624 * L_110 = V_7;
		NullCheck(L_110);
		int32_t L_111 = SubscriptionInfo_isFreeTrial_m3750515233(L_110, /*hidden argument*/NULL);
		int32_t L_112 = L_111;
		RuntimeObject * L_113 = Box(Result_t1621722260_il2cpp_TypeInfo_var, &L_112);
		String_t* L_114 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3283110880, L_113, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_114, /*hidden argument*/NULL);
		SubscriptionInfo_t2350244624 * L_115 = V_7;
		NullCheck(L_115);
		int32_t L_116 = SubscriptionInfo_isAutoRenewing_m2031216831(L_115, /*hidden argument*/NULL);
		int32_t L_117 = L_116;
		RuntimeObject * L_118 = Box(Result_t1621722260_il2cpp_TypeInfo_var, &L_117);
		String_t* L_119 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral4256494885, L_118, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_119, /*hidden argument*/NULL);
		SubscriptionInfo_t2350244624 * L_120 = V_7;
		NullCheck(L_120);
		TimeSpan_t881159249  L_121 = SubscriptionInfo_getRemainingTime_m3420553336(L_120, /*hidden argument*/NULL);
		TimeSpan_t881159249  L_122 = L_121;
		RuntimeObject * L_123 = Box(TimeSpan_t881159249_il2cpp_TypeInfo_var, &L_122);
		String_t* L_124 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral1536436376, L_123, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_124, /*hidden argument*/NULL);
		SubscriptionInfo_t2350244624 * L_125 = V_7;
		NullCheck(L_125);
		int32_t L_126 = SubscriptionInfo_isIntroductoryPricePeriod_m2004921712(L_125, /*hidden argument*/NULL);
		int32_t L_127 = L_126;
		RuntimeObject * L_128 = Box(Result_t1621722260_il2cpp_TypeInfo_var, &L_127);
		String_t* L_129 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3319087000, L_128, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_129, /*hidden argument*/NULL);
		SubscriptionInfo_t2350244624 * L_130 = V_7;
		NullCheck(L_130);
		String_t* L_131 = SubscriptionInfo_getIntroductoryPrice_m2940371587(L_130, /*hidden argument*/NULL);
		String_t* L_132 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3757744486, L_131, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_132, /*hidden argument*/NULL);
		SubscriptionInfo_t2350244624 * L_133 = V_7;
		NullCheck(L_133);
		TimeSpan_t881159249  L_134 = SubscriptionInfo_getIntroductoryPricePeriod_m2470593750(L_133, /*hidden argument*/NULL);
		TimeSpan_t881159249  L_135 = L_134;
		RuntimeObject * L_136 = Box(TimeSpan_t881159249_il2cpp_TypeInfo_var, &L_135);
		String_t* L_137 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3108316854, L_136, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_137, /*hidden argument*/NULL);
		SubscriptionInfo_t2350244624 * L_138 = V_7;
		NullCheck(L_138);
		int64_t L_139 = SubscriptionInfo_getIntroductoryPricePeriodCycles_m1583001944(L_138, /*hidden argument*/NULL);
		int64_t L_140 = L_139;
		RuntimeObject * L_141 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_140);
		String_t* L_142 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral57962479, L_141, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_142, /*hidden argument*/NULL);
		goto IL_0318;
	}

IL_030e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral542481671, /*hidden argument*/NULL);
	}

IL_0318:
	{
		goto IL_0327;
	}

IL_031d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral840895148, /*hidden argument*/NULL);
	}

IL_0327:
	{
		goto IL_0336;
	}

IL_032c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1409169469, /*hidden argument*/NULL);
	}

IL_0336:
	{
		int32_t L_143 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_143, (int32_t)1));
	}

IL_033a:
	{
		int32_t L_144 = V_3;
		ProductU5BU5D_t2942947242* L_145 = V_2;
		NullCheck(L_145);
		if ((((int32_t)L_144) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_145)->max_length)))))))
		{
			goto IL_00a0;
		}
	}
	{
		RuntimeObject* L_146 = __this->get_m_Controller_2();
		NullCheck(L_146);
		ProductCollection_t2671956229 * L_147 = InterfaceFuncInvoker0< ProductCollection_t2671956229 * >::Invoke(0 /* UnityEngine.Purchasing.ProductCollection UnityEngine.Purchasing.IStoreController::get_products() */, IStoreController_t2579314702_il2cpp_TypeInfo_var, L_146);
		NullCheck(L_147);
		ProductU5BU5D_t2942947242* L_148 = ProductCollection_get_all_m2286843352(L_147, /*hidden argument*/NULL);
		IAPDemo_AddProductUIs_m3325452711(__this, L_148, /*hidden argument*/NULL);
		IAPDemo_LogProductDefinitions_m1832835333(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean IAPDemo::checkIfProductIsAvailableForSubscriptionManager(System.String)
extern "C"  bool IAPDemo_checkIfProductIsAvailableForSubscriptionManager_m2252612912 (IAPDemo_t3681080565 * __this, String_t* ___receipt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPDemo_checkIfProductIsAvailableForSubscriptionManager_m2252612912_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t2865362463 * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	Dictionary_2_t2865362463 * V_3 = NULL;
	Dictionary_2_t2865362463 * V_4 = NULL;
	String_t* V_5 = NULL;
	Dictionary_2_t2865362463 * V_6 = NULL;
	{
		String_t* L_0 = ___receipt0;
		RuntimeObject * L_1 = MiniJson_JsonDecode_m1204021123(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t2865362463 *)CastclassClass((RuntimeObject*)L_1, Dictionary_2_t2865362463_il2cpp_TypeInfo_var));
		Dictionary_2_t2865362463 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = Dictionary_2_ContainsKey_m87616083(L_2, _stringLiteral1544471543, /*hidden argument*/Dictionary_2_ContainsKey_m87616083_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		Dictionary_2_t2865362463 * L_4 = V_0;
		NullCheck(L_4);
		bool L_5 = Dictionary_2_ContainsKey_m87616083(L_4, _stringLiteral3264264274, /*hidden argument*/Dictionary_2_ContainsKey_m87616083_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0038;
		}
	}

IL_002c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3656700627, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0038:
	{
		Dictionary_2_t2865362463 * L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject * L_7 = Dictionary_2_get_Item_m3008302402(L_6, _stringLiteral1544471543, /*hidden argument*/Dictionary_2_get_Item_m3008302402_RuntimeMethod_var);
		V_1 = ((String_t*)CastclassSealed((RuntimeObject*)L_7, String_t_il2cpp_TypeInfo_var));
		Dictionary_2_t2865362463 * L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject * L_9 = Dictionary_2_get_Item_m3008302402(L_8, _stringLiteral3264264274, /*hidden argument*/Dictionary_2_get_Item_m3008302402_RuntimeMethod_var);
		V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_9, String_t_il2cpp_TypeInfo_var));
		String_t* L_10 = V_2;
		if (!L_10)
		{
			goto IL_015f;
		}
	}
	{
		String_t* L_11 = V_1;
		if (!L_11)
		{
			goto IL_015d;
		}
	}
	{
		String_t* L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_op_Equality_m920492651(NULL /*static, unused*/, L_12, _stringLiteral4000294732, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_009b;
		}
	}
	{
		String_t* L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_15 = String_op_Equality_m920492651(NULL /*static, unused*/, L_14, _stringLiteral4264431066, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_015b;
		}
	}
	{
		String_t* L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_17 = String_op_Equality_m920492651(NULL /*static, unused*/, L_16, _stringLiteral2284906924, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_015b;
		}
	}
	{
		goto IL_015d;
	}

IL_009b:
	{
		String_t* L_18 = V_2;
		RuntimeObject * L_19 = MiniJson_JsonDecode_m1204021123(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		V_3 = ((Dictionary_2_t2865362463 *)CastclassClass((RuntimeObject*)L_19, Dictionary_2_t2865362463_il2cpp_TypeInfo_var));
		Dictionary_2_t2865362463 * L_20 = V_3;
		NullCheck(L_20);
		bool L_21 = Dictionary_2_ContainsKey_m87616083(L_20, _stringLiteral417138101, /*hidden argument*/Dictionary_2_ContainsKey_m87616083_RuntimeMethod_var);
		if (L_21)
		{
			goto IL_00c3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1463486031, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_00c3:
	{
		Dictionary_2_t2865362463 * L_22 = V_3;
		NullCheck(L_22);
		RuntimeObject * L_23 = Dictionary_2_get_Item_m3008302402(L_22, _stringLiteral417138101, /*hidden argument*/Dictionary_2_get_Item_m3008302402_RuntimeMethod_var);
		RuntimeObject * L_24 = MiniJson_JsonDecode_m1204021123(NULL /*static, unused*/, ((String_t*)CastclassSealed((RuntimeObject*)L_23, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_4 = ((Dictionary_2_t2865362463 *)CastclassClass((RuntimeObject*)L_24, Dictionary_2_t2865362463_il2cpp_TypeInfo_var));
		Dictionary_2_t2865362463 * L_25 = V_4;
		if (!L_25)
		{
			goto IL_0103;
		}
	}
	{
		Dictionary_2_t2865362463 * L_26 = V_4;
		NullCheck(L_26);
		bool L_27 = Dictionary_2_ContainsKey_m87616083(L_26, _stringLiteral3920973500, /*hidden argument*/Dictionary_2_ContainsKey_m87616083_RuntimeMethod_var);
		if (L_27)
		{
			goto IL_0103;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral701303090, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0103:
	{
		Dictionary_2_t2865362463 * L_28 = V_4;
		NullCheck(L_28);
		RuntimeObject * L_29 = Dictionary_2_get_Item_m3008302402(L_28, _stringLiteral3920973500, /*hidden argument*/Dictionary_2_get_Item_m3008302402_RuntimeMethod_var);
		V_5 = ((String_t*)CastclassSealed((RuntimeObject*)L_29, String_t_il2cpp_TypeInfo_var));
		String_t* L_30 = V_5;
		RuntimeObject * L_31 = MiniJson_JsonDecode_m1204021123(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		V_6 = ((Dictionary_2_t2865362463 *)CastclassClass((RuntimeObject*)L_31, Dictionary_2_t2865362463_il2cpp_TypeInfo_var));
		Dictionary_2_t2865362463 * L_32 = V_6;
		if (!L_32)
		{
			goto IL_014d;
		}
	}
	{
		Dictionary_2_t2865362463 * L_33 = V_6;
		NullCheck(L_33);
		bool L_34 = Dictionary_2_ContainsKey_m87616083(L_33, _stringLiteral701444615, /*hidden argument*/Dictionary_2_ContainsKey_m87616083_RuntimeMethod_var);
		if (!L_34)
		{
			goto IL_014d;
		}
	}
	{
		Dictionary_2_t2865362463 * L_35 = V_6;
		NullCheck(L_35);
		bool L_36 = Dictionary_2_ContainsKey_m87616083(L_35, _stringLiteral2310334392, /*hidden argument*/Dictionary_2_ContainsKey_m87616083_RuntimeMethod_var);
		if (L_36)
		{
			goto IL_0159;
		}
	}

IL_014d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral261946630, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0159:
	{
		return (bool)1;
	}

IL_015b:
	{
		return (bool)1;
	}

IL_015d:
	{
		return (bool)0;
	}

IL_015f:
	{
		return (bool)0;
	}
}
// UnityEngine.Purchasing.PurchaseProcessingResult IAPDemo::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
extern "C"  int32_t IAPDemo_ProcessPurchase_m1025265100 (IAPDemo_t3681080565 * __this, PurchaseEventArgs_t3033159582 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPDemo_ProcessPurchase_m1025265100_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnifiedReceipt_t1348780434 * V_0 = NULL;
	UnityChannelPurchaseReceipt_t3342804115 * V_1 = NULL;
	{
		PurchaseEventArgs_t3033159582 * L_0 = ___e0;
		NullCheck(L_0);
		Product_t3244410059 * L_1 = PurchaseEventArgs_get_purchasedProduct_m3472521060(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ProductDefinition_t339727138 * L_2 = Product_get_definition_m3366103520(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = ProductDefinition_get_id_m1593385231(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral873561128, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		PurchaseEventArgs_t3033159582 * L_5 = ___e0;
		NullCheck(L_5);
		Product_t3244410059 * L_6 = PurchaseEventArgs_get_purchasedProduct_m3472521060(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = Product_get_receipt_m117487645(L_6, /*hidden argument*/NULL);
		String_t* L_8 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral759623637, L_7, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		PurchaseEventArgs_t3033159582 * L_9 = ___e0;
		NullCheck(L_9);
		Product_t3244410059 * L_10 = PurchaseEventArgs_get_purchasedProduct_m3472521060(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_11 = Product_get_transactionID_m2196298596(L_10, /*hidden argument*/NULL);
		__this->set_m_LastTransactionID_13(L_11);
		__this->set_m_PurchaseInProgress_17((bool)0);
		bool L_12 = __this->get_m_IsUnityChannelSelected_12();
		if (!L_12)
		{
			goto IL_00ba;
		}
	}
	{
		PurchaseEventArgs_t3033159582 * L_13 = ___e0;
		NullCheck(L_13);
		Product_t3244410059 * L_14 = PurchaseEventArgs_get_purchasedProduct_m3472521060(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		String_t* L_15 = Product_get_receipt_m117487645(L_14, /*hidden argument*/NULL);
		UnifiedReceipt_t1348780434 * L_16 = JsonUtility_FromJson_TisUnifiedReceipt_t1348780434_m2808270756(NULL /*static, unused*/, L_15, /*hidden argument*/JsonUtility_FromJson_TisUnifiedReceipt_t1348780434_m2808270756_RuntimeMethod_var);
		V_0 = L_16;
		UnifiedReceipt_t1348780434 * L_17 = V_0;
		if (!L_17)
		{
			goto IL_00ba;
		}
	}
	{
		UnifiedReceipt_t1348780434 * L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = L_18->get_Payload_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_20 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_00ba;
		}
	}
	{
		UnifiedReceipt_t1348780434 * L_21 = V_0;
		NullCheck(L_21);
		String_t* L_22 = L_21->get_Payload_0();
		UnityChannelPurchaseReceipt_t3342804115 * L_23 = JsonUtility_FromJson_TisUnityChannelPurchaseReceipt_t3342804115_m179166322(NULL /*static, unused*/, L_22, /*hidden argument*/JsonUtility_FromJson_TisUnityChannelPurchaseReceipt_t3342804115_m179166322_RuntimeMethod_var);
		V_1 = L_23;
		ObjectU5BU5D_t2843939325* L_24 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)3));
		UnityChannelPurchaseReceipt_t3342804115 * L_25 = V_1;
		NullCheck(L_25);
		String_t* L_26 = L_25->get_storeSpecificId_0();
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_26);
		ObjectU5BU5D_t2843939325* L_27 = L_24;
		UnityChannelPurchaseReceipt_t3342804115 * L_28 = V_1;
		NullCheck(L_28);
		String_t* L_29 = L_28->get_transactionId_1();
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_29);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_29);
		ObjectU5BU5D_t2843939325* L_30 = L_27;
		UnityChannelPurchaseReceipt_t3342804115 * L_31 = V_1;
		NullCheck(L_31);
		String_t* L_32 = L_31->get_orderQueryToken_2();
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_32);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_32);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogFormat_m309087137(NULL /*static, unused*/, _stringLiteral3595830757, L_30, /*hidden argument*/NULL);
	}

IL_00ba:
	{
		PurchaseEventArgs_t3033159582 * L_33 = ___e0;
		NullCheck(L_33);
		Product_t3244410059 * L_34 = PurchaseEventArgs_get_purchasedProduct_m3472521060(L_33, /*hidden argument*/NULL);
		IAPDemo_UpdateProductUI_m3067243867(__this, L_34, /*hidden argument*/NULL);
		return (int32_t)(0);
	}
}
// System.Void IAPDemo::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
extern "C"  void IAPDemo_OnPurchaseFailed_m3292362954 (IAPDemo_t3681080565 * __this, Product_t3244410059 * ___item0, int32_t ___r1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPDemo_OnPurchaseFailed_m3292362954_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	UnityChannelPurchaseError_t2306817818 * V_1 = NULL;
	UnityChannelPurchaseInfo_t74063925 * V_2 = NULL;
	{
		Product_t3244410059 * L_0 = ___item0;
		NullCheck(L_0);
		ProductDefinition_t339727138 * L_1 = Product_get_definition_m3366103520(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = ProductDefinition_get_id_m1593385231(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral968445703, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		int32_t L_4 = ___r1;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(PurchaseFailureReason_t4243987912_il2cpp_TypeInfo_var, &L_5);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		RuntimeObject* L_7 = __this->get_m_TransactionHistoryExtensions_8();
		NullCheck(L_7);
		int32_t L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* UnityEngine.Purchasing.StoreSpecificPurchaseErrorCode UnityEngine.Purchasing.ITransactionHistoryExtensions::GetLastStoreSpecificPurchaseErrorCode() */, ITransactionHistoryExtensions_t1575111476_il2cpp_TypeInfo_var, L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(StoreSpecificPurchaseErrorCode_t2338830946_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2120516444, L_10, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		RuntimeObject* L_12 = __this->get_m_TransactionHistoryExtensions_8();
		NullCheck(L_12);
		PurchaseFailureDescription_t437632294 * L_13 = InterfaceFuncInvoker0< PurchaseFailureDescription_t437632294 * >::Invoke(0 /* UnityEngine.Purchasing.Extension.PurchaseFailureDescription UnityEngine.Purchasing.ITransactionHistoryExtensions::GetLastPurchaseFailureDescription() */, ITransactionHistoryExtensions_t1575111476_il2cpp_TypeInfo_var, L_12);
		if (!L_13)
		{
			goto IL_0073;
		}
	}
	{
		RuntimeObject* L_14 = __this->get_m_TransactionHistoryExtensions_8();
		NullCheck(L_14);
		PurchaseFailureDescription_t437632294 * L_15 = InterfaceFuncInvoker0< PurchaseFailureDescription_t437632294 * >::Invoke(0 /* UnityEngine.Purchasing.Extension.PurchaseFailureDescription UnityEngine.Purchasing.ITransactionHistoryExtensions::GetLastPurchaseFailureDescription() */, ITransactionHistoryExtensions_t1575111476_il2cpp_TypeInfo_var, L_14);
		NullCheck(L_15);
		String_t* L_16 = PurchaseFailureDescription_get_message_m3489497373(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3428236755, L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
	}

IL_0073:
	{
		bool L_18 = __this->get_m_IsUnityChannelSelected_12();
		if (!L_18)
		{
			goto IL_00e5;
		}
	}
	{
		RuntimeObject* L_19 = __this->get_m_UnityChannelExtensions_7();
		NullCheck(L_19);
		String_t* L_20 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String UnityEngine.Purchasing.IUnityChannelExtensions::GetLastPurchaseError() */, IUnityChannelExtensions_t3299991497_il2cpp_TypeInfo_var, L_19);
		V_0 = L_20;
		String_t* L_21 = V_0;
		UnityChannelPurchaseError_t2306817818 * L_22 = JsonUtility_FromJson_TisUnityChannelPurchaseError_t2306817818_m3180240101(NULL /*static, unused*/, L_21, /*hidden argument*/JsonUtility_FromJson_TisUnityChannelPurchaseError_t2306817818_m3180240101_RuntimeMethod_var);
		V_1 = L_22;
		UnityChannelPurchaseError_t2306817818 * L_23 = V_1;
		if (!L_23)
		{
			goto IL_00d4;
		}
	}
	{
		UnityChannelPurchaseError_t2306817818 * L_24 = V_1;
		NullCheck(L_24);
		UnityChannelPurchaseInfo_t74063925 * L_25 = L_24->get_purchaseInfo_1();
		if (!L_25)
		{
			goto IL_00d4;
		}
	}
	{
		UnityChannelPurchaseError_t2306817818 * L_26 = V_1;
		NullCheck(L_26);
		UnityChannelPurchaseInfo_t74063925 * L_27 = L_26->get_purchaseInfo_1();
		V_2 = L_27;
		ObjectU5BU5D_t2843939325* L_28 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)3));
		UnityChannelPurchaseInfo_t74063925 * L_29 = V_2;
		NullCheck(L_29);
		String_t* L_30 = L_29->get_productCode_0();
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_30);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_30);
		ObjectU5BU5D_t2843939325* L_31 = L_28;
		UnityChannelPurchaseInfo_t74063925 * L_32 = V_2;
		NullCheck(L_32);
		String_t* L_33 = L_32->get_gameOrderId_1();
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_33);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_33);
		ObjectU5BU5D_t2843939325* L_34 = L_31;
		UnityChannelPurchaseInfo_t74063925 * L_35 = V_2;
		NullCheck(L_35);
		String_t* L_36 = L_35->get_orderQueryToken_2();
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_36);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_36);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogFormat_m309087137(NULL /*static, unused*/, _stringLiteral2843555271, L_34, /*hidden argument*/NULL);
	}

IL_00d4:
	{
		int32_t L_37 = ___r1;
		if ((!(((uint32_t)L_37) == ((uint32_t)6))))
		{
			goto IL_00e5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral377345206, /*hidden argument*/NULL);
	}

IL_00e5:
	{
		__this->set_m_PurchaseInProgress_17((bool)0);
		return;
	}
}
// System.Void IAPDemo::OnInitializeFailed(UnityEngine.Purchasing.InitializationFailureReason)
extern "C"  void IAPDemo_OnInitializeFailed_m2858599101 (IAPDemo_t3681080565 * __this, int32_t ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPDemo_OnInitializeFailed_m2858599101_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3828846158, /*hidden argument*/NULL);
		int32_t L_0 = ___error0;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_1 = ___error0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_2 = ___error0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0041;
		}
	}
	{
		goto IL_0050;
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral3258212029, /*hidden argument*/NULL);
		goto IL_0050;
	}

IL_0032:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1924515939, /*hidden argument*/NULL);
		goto IL_0050;
	}

IL_0041:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1416590052, /*hidden argument*/NULL);
		goto IL_0050;
	}

IL_0050:
	{
		return;
	}
}
// System.Void IAPDemo::Awake()
extern "C"  void IAPDemo_Awake_m3175081473 (IAPDemo_t3681080565 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPDemo_Awake_m3175081473_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CAwakeU3Ec__AnonStorey0_t2364586269 * V_0 = NULL;
	StandardPurchasingModule_t2580735509 * V_1 = NULL;
	ProductCatalog_t3178009003 * V_2 = NULL;
	ProductCatalogItem_t2141417634 * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	IDs_t697119909 * V_5 = NULL;
	StoreID_t694756629 * V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	IDs_t697119909 * V_8 = NULL;
	bool V_9 = false;
	AppInfo_t2433711276 * V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	IAPDemo_t3681080565 * G_B2_0 = NULL;
	IAPDemo_t3681080565 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	IAPDemo_t3681080565 * G_B3_1 = NULL;
	IAPDemo_t3681080565 * G_B5_0 = NULL;
	IAPDemo_t3681080565 * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	IAPDemo_t3681080565 * G_B6_1 = NULL;
	IAPDemo_t3681080565 * G_B8_0 = NULL;
	IAPDemo_t3681080565 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	IAPDemo_t3681080565 * G_B9_1 = NULL;
	IAPDemo_t3681080565 * G_B29_0 = NULL;
	IAPDemo_t3681080565 * G_B28_0 = NULL;
	int32_t G_B30_0 = 0;
	IAPDemo_t3681080565 * G_B30_1 = NULL;
	UnityChannelLoginHandler_t2949829254 * G_B34_0 = NULL;
	UnityChannelLoginHandler_t2949829254 * G_B33_0 = NULL;
	{
		U3CAwakeU3Ec__AnonStorey0_t2364586269 * L_0 = (U3CAwakeU3Ec__AnonStorey0_t2364586269 *)il2cpp_codegen_object_new(U3CAwakeU3Ec__AnonStorey0_t2364586269_il2cpp_TypeInfo_var);
		U3CAwakeU3Ec__AnonStorey0__ctor_m4083696123(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CAwakeU3Ec__AnonStorey0_t2364586269 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_2(__this);
		IL2CPP_RUNTIME_CLASS_INIT(StandardPurchasingModule_t2580735509_il2cpp_TypeInfo_var);
		StandardPurchasingModule_t2580735509 * L_2 = StandardPurchasingModule_Instance_m2991111855(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_2;
		StandardPurchasingModule_t2580735509 * L_3 = V_1;
		NullCheck(L_3);
		StandardPurchasingModule_set_useFakeStoreUIMode_m2028643116(L_3, 1, /*hidden argument*/NULL);
		U3CAwakeU3Ec__AnonStorey0_t2364586269 * L_4 = V_0;
		StandardPurchasingModule_t2580735509 * L_5 = V_1;
		ConfigurationBuilder_t1618671084 * L_6 = ConfigurationBuilder_Instance_m2204111312(NULL /*static, unused*/, L_5, ((IPurchasingModuleU5BU5D_t3784316456*)SZArrayNew(IPurchasingModuleU5BU5D_t3784316456_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_builder_0(L_6);
		U3CAwakeU3Ec__AnonStorey0_t2364586269 * L_7 = V_0;
		NullCheck(L_7);
		ConfigurationBuilder_t1618671084 * L_8 = L_7->get_builder_0();
		NullCheck(L_8);
		RuntimeObject* L_9 = ConfigurationBuilder_Configure_TisIMicrosoftConfiguration_t981669916_m1554999342(L_8, /*hidden argument*/ConfigurationBuilder_Configure_TisIMicrosoftConfiguration_t981669916_m1554999342_RuntimeMethod_var);
		NullCheck(L_9);
		InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void UnityEngine.Purchasing.IMicrosoftConfiguration::set_useMockBillingSystem(System.Boolean) */, IMicrosoftConfiguration_t981669916_il2cpp_TypeInfo_var, L_9, (bool)0);
		int32_t L_10 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)11)))))
		{
			G_B2_0 = __this;
			goto IL_0055;
		}
	}
	{
		StandardPurchasingModule_t2580735509 * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = StandardPurchasingModule_get_appStore_m3542603452(L_11, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_12) == ((int32_t)1))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0056:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_m_IsGooglePlayStoreSelected_9((bool)G_B3_0);
		U3CAwakeU3Ec__AnonStorey0_t2364586269 * L_13 = V_0;
		NullCheck(L_13);
		ConfigurationBuilder_t1618671084 * L_14 = L_13->get_builder_0();
		NullCheck(L_14);
		RuntimeObject* L_15 = ConfigurationBuilder_Configure_TisIMoolahConfiguration_t131838389_m2841568386(L_14, /*hidden argument*/ConfigurationBuilder_Configure_TisIMoolahConfiguration_t131838389_m2841568386_RuntimeMethod_var);
		NullCheck(L_15);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void UnityEngine.Purchasing.IMoolahConfiguration::set_appKey(System.String) */, IMoolahConfiguration_t131838389_il2cpp_TypeInfo_var, L_15, _stringLiteral1306434072);
		U3CAwakeU3Ec__AnonStorey0_t2364586269 * L_16 = V_0;
		NullCheck(L_16);
		ConfigurationBuilder_t1618671084 * L_17 = L_16->get_builder_0();
		NullCheck(L_17);
		RuntimeObject* L_18 = ConfigurationBuilder_Configure_TisIMoolahConfiguration_t131838389_m2841568386(L_17, /*hidden argument*/ConfigurationBuilder_Configure_TisIMoolahConfiguration_t131838389_m2841568386_RuntimeMethod_var);
		NullCheck(L_18);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void UnityEngine.Purchasing.IMoolahConfiguration::set_hashKey(System.String) */, IMoolahConfiguration_t131838389_il2cpp_TypeInfo_var, L_18, _stringLiteral3454515133);
		U3CAwakeU3Ec__AnonStorey0_t2364586269 * L_19 = V_0;
		NullCheck(L_19);
		ConfigurationBuilder_t1618671084 * L_20 = L_19->get_builder_0();
		NullCheck(L_20);
		RuntimeObject* L_21 = ConfigurationBuilder_Configure_TisIMoolahConfiguration_t131838389_m2841568386(L_20, /*hidden argument*/ConfigurationBuilder_Configure_TisIMoolahConfiguration_t131838389_m2841568386_RuntimeMethod_var);
		NullCheck(L_21);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void UnityEngine.Purchasing.IMoolahConfiguration::SetMode(UnityEngine.Purchasing.CloudMoolahMode) */, IMoolahConfiguration_t131838389_il2cpp_TypeInfo_var, L_21, 1);
		int32_t L_22 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B4_0 = __this;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)11)))))
		{
			G_B5_0 = __this;
			goto IL_00ae;
		}
	}
	{
		StandardPurchasingModule_t2580735509 * L_23 = V_1;
		NullCheck(L_23);
		int32_t L_24 = StandardPurchasingModule_get_appStore_m3542603452(L_23, /*hidden argument*/NULL);
		G_B6_0 = ((((int32_t)L_24) == ((int32_t)3))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_00af;
	}

IL_00ae:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_00af:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_m_IsCloudMoolahStoreSelected_11((bool)G_B6_0);
		int32_t L_25 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B7_0 = __this;
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)11)))))
		{
			G_B8_0 = __this;
			goto IL_00cc;
		}
	}
	{
		StandardPurchasingModule_t2580735509 * L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27 = StandardPurchasingModule_get_appStore_m3542603452(L_26, /*hidden argument*/NULL);
		G_B9_0 = ((((int32_t)L_27) == ((int32_t)5))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_00cd;
	}

IL_00cc:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_00cd:
	{
		NullCheck(G_B9_1);
		G_B9_1->set_m_IsUnityChannelSelected_12((bool)G_B9_0);
		U3CAwakeU3Ec__AnonStorey0_t2364586269 * L_28 = V_0;
		NullCheck(L_28);
		ConfigurationBuilder_t1618671084 * L_29 = L_28->get_builder_0();
		NullCheck(L_29);
		RuntimeObject* L_30 = ConfigurationBuilder_Configure_TisIUnityChannelConfiguration_t528450575_m1055773883(L_29, /*hidden argument*/ConfigurationBuilder_Configure_TisIUnityChannelConfiguration_t528450575_m1055773883_RuntimeMethod_var);
		bool L_31 = __this->get_m_FetchReceiptPayloadOnPurchase_16();
		NullCheck(L_30);
		InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void UnityEngine.Purchasing.IUnityChannelConfiguration::set_fetchReceiptPayloadOnPurchase(System.Boolean) */, IUnityChannelConfiguration_t528450575_il2cpp_TypeInfo_var, L_30, L_31);
		ProductCatalog_t3178009003 * L_32 = ProductCatalog_LoadDefaultCatalog_m2858771357(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_32;
		ProductCatalog_t3178009003 * L_33 = V_2;
		NullCheck(L_33);
		RuntimeObject* L_34 = ProductCatalog_get_allValidProducts_m4098778243(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		RuntimeObject* L_35 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.ProductCatalogItem>::GetEnumerator() */, IEnumerable_1_t1121270523_il2cpp_TypeInfo_var, L_34);
		V_4 = L_35;
	}

IL_00fb:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01b0;
		}

IL_0100:
		{
			RuntimeObject* L_36 = V_4;
			NullCheck(L_36);
			ProductCatalogItem_t2141417634 * L_37 = InterfaceFuncInvoker0< ProductCatalogItem_t2141417634 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Purchasing.ProductCatalogItem>::get_Current() */, IEnumerator_1_t2573988102_il2cpp_TypeInfo_var, L_36);
			V_3 = L_37;
			ProductCatalogItem_t2141417634 * L_38 = V_3;
			NullCheck(L_38);
			RuntimeObject* L_39 = ProductCatalogItem_get_allStoreIDs_m1117403521(L_38, /*hidden argument*/NULL);
			NullCheck(L_39);
			int32_t L_40 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.StoreID>::get_Count() */, ICollection_1_t3522908863_il2cpp_TypeInfo_var, L_39);
			if ((((int32_t)L_40) <= ((int32_t)0)))
			{
				goto IL_0198;
			}
		}

IL_0119:
		{
			IDs_t697119909 * L_41 = (IDs_t697119909 *)il2cpp_codegen_object_new(IDs_t697119909_il2cpp_TypeInfo_var);
			IDs__ctor_m3084577891(L_41, /*hidden argument*/NULL);
			V_5 = L_41;
			ProductCatalogItem_t2141417634 * L_42 = V_3;
			NullCheck(L_42);
			RuntimeObject* L_43 = ProductCatalogItem_get_allStoreIDs_m1117403521(L_42, /*hidden argument*/NULL);
			NullCheck(L_43);
			RuntimeObject* L_44 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.StoreID>::GetEnumerator() */, IEnumerable_1_t3969576814_il2cpp_TypeInfo_var, L_43);
			V_7 = L_44;
		}

IL_012d:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0159;
			}

IL_0132:
			{
				RuntimeObject* L_45 = V_7;
				NullCheck(L_45);
				StoreID_t694756629 * L_46 = InterfaceFuncInvoker0< StoreID_t694756629 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Purchasing.StoreID>::get_Current() */, IEnumerator_1_t1127327097_il2cpp_TypeInfo_var, L_45);
				V_6 = L_46;
				IDs_t697119909 * L_47 = V_5;
				StoreID_t694756629 * L_48 = V_6;
				NullCheck(L_48);
				String_t* L_49 = L_48->get_id_1();
				StringU5BU5D_t1281789340* L_50 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)1));
				StoreID_t694756629 * L_51 = V_6;
				NullCheck(L_51);
				String_t* L_52 = L_51->get_store_0();
				NullCheck(L_50);
				ArrayElementTypeCheck (L_50, L_52);
				(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_52);
				NullCheck(L_47);
				IDs_Add_m701658157(L_47, L_49, L_50, /*hidden argument*/NULL);
			}

IL_0159:
			{
				RuntimeObject* L_53 = V_7;
				NullCheck(L_53);
				bool L_54 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_53);
				if (L_54)
				{
					goto IL_0132;
				}
			}

IL_0165:
			{
				IL2CPP_LEAVE(0x179, FINALLY_016a);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_016a;
		}

FINALLY_016a:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_55 = V_7;
				if (!L_55)
				{
					goto IL_0178;
				}
			}

IL_0171:
			{
				RuntimeObject* L_56 = V_7;
				NullCheck(L_56);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_56);
			}

IL_0178:
			{
				IL2CPP_END_FINALLY(362)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(362)
		{
			IL2CPP_JUMP_TBL(0x179, IL_0179)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0179:
		{
			U3CAwakeU3Ec__AnonStorey0_t2364586269 * L_57 = V_0;
			NullCheck(L_57);
			ConfigurationBuilder_t1618671084 * L_58 = L_57->get_builder_0();
			ProductCatalogItem_t2141417634 * L_59 = V_3;
			NullCheck(L_59);
			String_t* L_60 = L_59->get_id_0();
			ProductCatalogItem_t2141417634 * L_61 = V_3;
			NullCheck(L_61);
			int32_t L_62 = L_61->get_type_1();
			IDs_t697119909 * L_63 = V_5;
			NullCheck(L_58);
			ConfigurationBuilder_AddProduct_m3410369666(L_58, L_60, L_62, L_63, /*hidden argument*/NULL);
			goto IL_01b0;
		}

IL_0198:
		{
			U3CAwakeU3Ec__AnonStorey0_t2364586269 * L_64 = V_0;
			NullCheck(L_64);
			ConfigurationBuilder_t1618671084 * L_65 = L_64->get_builder_0();
			ProductCatalogItem_t2141417634 * L_66 = V_3;
			NullCheck(L_66);
			String_t* L_67 = L_66->get_id_0();
			ProductCatalogItem_t2141417634 * L_68 = V_3;
			NullCheck(L_68);
			int32_t L_69 = L_68->get_type_1();
			NullCheck(L_65);
			ConfigurationBuilder_AddProduct_m788979654(L_65, L_67, L_69, /*hidden argument*/NULL);
		}

IL_01b0:
		{
			RuntimeObject* L_70 = V_4;
			NullCheck(L_70);
			bool L_71 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_70);
			if (L_71)
			{
				goto IL_0100;
			}
		}

IL_01bc:
		{
			IL2CPP_LEAVE(0x1D0, FINALLY_01c1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01c1;
	}

FINALLY_01c1:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_72 = V_4;
			if (!L_72)
			{
				goto IL_01cf;
			}
		}

IL_01c8:
		{
			RuntimeObject* L_73 = V_4;
			NullCheck(L_73);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_73);
		}

IL_01cf:
		{
			IL2CPP_END_FINALLY(449)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(449)
	{
		IL2CPP_JUMP_TBL(0x1D0, IL_01d0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01d0:
	{
		U3CAwakeU3Ec__AnonStorey0_t2364586269 * L_74 = V_0;
		NullCheck(L_74);
		ConfigurationBuilder_t1618671084 * L_75 = L_74->get_builder_0();
		IDs_t697119909 * L_76 = (IDs_t697119909 *)il2cpp_codegen_object_new(IDs_t697119909_il2cpp_TypeInfo_var);
		IDs__ctor_m3084577891(L_76, /*hidden argument*/NULL);
		V_8 = L_76;
		IDs_t697119909 * L_77 = V_8;
		StringU5BU5D_t1281789340* L_78 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_78);
		ArrayElementTypeCheck (L_78, _stringLiteral2284906924);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2284906924);
		NullCheck(L_77);
		IDs_Add_m701658157(L_77, _stringLiteral452379730, L_78, /*hidden argument*/NULL);
		IDs_t697119909 * L_79 = V_8;
		StringU5BU5D_t1281789340* L_80 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_80);
		ArrayElementTypeCheck (L_80, _stringLiteral3089325609);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3089325609);
		NullCheck(L_79);
		IDs_Add_m701658157(L_79, _stringLiteral3407967981, L_80, /*hidden argument*/NULL);
		IDs_t697119909 * L_81 = V_8;
		StringU5BU5D_t1281789340* L_82 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_82);
		ArrayElementTypeCheck (L_82, _stringLiteral403556492);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral403556492);
		NullCheck(L_81);
		IDs_Add_m701658157(L_81, _stringLiteral3006453006, L_82, /*hidden argument*/NULL);
		IDs_t697119909 * L_83 = V_8;
		NullCheck(L_75);
		ConfigurationBuilder_AddProduct_m3410369666(L_75, _stringLiteral1855265810, 0, L_83, /*hidden argument*/NULL);
		U3CAwakeU3Ec__AnonStorey0_t2364586269 * L_84 = V_0;
		NullCheck(L_84);
		ConfigurationBuilder_t1618671084 * L_85 = L_84->get_builder_0();
		IDs_t697119909 * L_86 = (IDs_t697119909 *)il2cpp_codegen_object_new(IDs_t697119909_il2cpp_TypeInfo_var);
		IDs__ctor_m3084577891(L_86, /*hidden argument*/NULL);
		V_8 = L_86;
		IDs_t697119909 * L_87 = V_8;
		StringU5BU5D_t1281789340* L_88 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_88);
		ArrayElementTypeCheck (L_88, _stringLiteral2284906924);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2284906924);
		NullCheck(L_87);
		IDs_Add_m701658157(L_87, _stringLiteral464954454, L_88, /*hidden argument*/NULL);
		IDs_t697119909 * L_89 = V_8;
		StringU5BU5D_t1281789340* L_90 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_90);
		ArrayElementTypeCheck (L_90, _stringLiteral3089325609);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3089325609);
		NullCheck(L_89);
		IDs_Add_m701658157(L_89, _stringLiteral1833989869, L_90, /*hidden argument*/NULL);
		IDs_t697119909 * L_91 = V_8;
		StringU5BU5D_t1281789340* L_92 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, _stringLiteral403556492);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral403556492);
		NullCheck(L_91);
		IDs_Add_m701658157(L_91, _stringLiteral3006518545, L_92, /*hidden argument*/NULL);
		IDs_t697119909 * L_93 = V_8;
		NullCheck(L_85);
		ConfigurationBuilder_AddProduct_m3410369666(L_85, _stringLiteral1855392662, 0, L_93, /*hidden argument*/NULL);
		U3CAwakeU3Ec__AnonStorey0_t2364586269 * L_94 = V_0;
		NullCheck(L_94);
		ConfigurationBuilder_t1618671084 * L_95 = L_94->get_builder_0();
		IDs_t697119909 * L_96 = (IDs_t697119909 *)il2cpp_codegen_object_new(IDs_t697119909_il2cpp_TypeInfo_var);
		IDs__ctor_m3084577891(L_96, /*hidden argument*/NULL);
		V_8 = L_96;
		IDs_t697119909 * L_97 = V_8;
		StringU5BU5D_t1281789340* L_98 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_98);
		ArrayElementTypeCheck (L_98, _stringLiteral2284906924);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2284906924);
		NullCheck(L_97);
		IDs_Add_m701658157(L_97, _stringLiteral2706948055, L_98, /*hidden argument*/NULL);
		IDs_t697119909 * L_99 = V_8;
		StringU5BU5D_t1281789340* L_100 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_100);
		ArrayElementTypeCheck (L_100, _stringLiteral3089325609);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3089325609);
		NullCheck(L_99);
		IDs_Add_m701658157(L_99, _stringLiteral2216326893, L_100, /*hidden argument*/NULL);
		IDs_t697119909 * L_101 = V_8;
		NullCheck(L_95);
		ConfigurationBuilder_AddProduct_m3410369666(L_95, _stringLiteral1537982486, 1, L_101, /*hidden argument*/NULL);
		U3CAwakeU3Ec__AnonStorey0_t2364586269 * L_102 = V_0;
		NullCheck(L_102);
		ConfigurationBuilder_t1618671084 * L_103 = L_102->get_builder_0();
		IDs_t697119909 * L_104 = (IDs_t697119909 *)il2cpp_codegen_object_new(IDs_t697119909_il2cpp_TypeInfo_var);
		IDs__ctor_m3084577891(L_104, /*hidden argument*/NULL);
		V_8 = L_104;
		IDs_t697119909 * L_105 = V_8;
		StringU5BU5D_t1281789340* L_106 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_106);
		ArrayElementTypeCheck (L_106, _stringLiteral2284906924);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2284906924);
		NullCheck(L_105);
		IDs_Add_m701658157(L_105, _stringLiteral2530894733, L_106, /*hidden argument*/NULL);
		IDs_t697119909 * L_107 = V_8;
		NullCheck(L_103);
		ConfigurationBuilder_AddProduct_m3410369666(L_103, _stringLiteral2530894733, 2, L_107, /*hidden argument*/NULL);
		U3CAwakeU3Ec__AnonStorey0_t2364586269 * L_108 = V_0;
		NullCheck(L_108);
		ConfigurationBuilder_t1618671084 * L_109 = L_108->get_builder_0();
		IDs_t697119909 * L_110 = (IDs_t697119909 *)il2cpp_codegen_object_new(IDs_t697119909_il2cpp_TypeInfo_var);
		IDs__ctor_m3084577891(L_110, /*hidden argument*/NULL);
		V_8 = L_110;
		IDs_t697119909 * L_111 = V_8;
		StringU5BU5D_t1281789340* L_112 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_112);
		ArrayElementTypeCheck (L_112, _stringLiteral2284906924);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2284906924);
		NullCheck(L_111);
		IDs_Add_m701658157(L_111, _stringLiteral1745396871, L_112, /*hidden argument*/NULL);
		IDs_t697119909 * L_113 = V_8;
		NullCheck(L_109);
		ConfigurationBuilder_AddProduct_m3410369666(L_109, _stringLiteral2575524749, 2, L_113, /*hidden argument*/NULL);
		U3CAwakeU3Ec__AnonStorey0_t2364586269 * L_114 = V_0;
		NullCheck(L_114);
		ConfigurationBuilder_t1618671084 * L_115 = L_114->get_builder_0();
		NullCheck(L_115);
		RuntimeObject* L_116 = ConfigurationBuilder_Configure_TisIAmazonConfiguration_t4078561526_m1671488555(L_115, /*hidden argument*/ConfigurationBuilder_Configure_TisIAmazonConfiguration_t4078561526_m1671488555_RuntimeMethod_var);
		U3CAwakeU3Ec__AnonStorey0_t2364586269 * L_117 = V_0;
		NullCheck(L_117);
		ConfigurationBuilder_t1618671084 * L_118 = L_117->get_builder_0();
		NullCheck(L_118);
		HashSet_1_t3199643908 * L_119 = ConfigurationBuilder_get_products_m513767079(L_118, /*hidden argument*/NULL);
		NullCheck(L_116);
		InterfaceActionInvoker1< HashSet_1_t3199643908 * >::Invoke(0 /* System.Void UnityEngine.Purchasing.IAmazonConfiguration::WriteSandboxJSON(System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>) */, IAmazonConfiguration_t4078561526_il2cpp_TypeInfo_var, L_116, L_119);
		U3CAwakeU3Ec__AnonStorey0_t2364586269 * L_120 = V_0;
		NullCheck(L_120);
		ConfigurationBuilder_t1618671084 * L_121 = L_120->get_builder_0();
		NullCheck(L_121);
		RuntimeObject* L_122 = ConfigurationBuilder_Configure_TisISamsungAppsConfiguration_t2882465226_m1047328256(L_121, /*hidden argument*/ConfigurationBuilder_Configure_TisISamsungAppsConfiguration_t2882465226_m1047328256_RuntimeMethod_var);
		NullCheck(L_122);
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void UnityEngine.Purchasing.ISamsungAppsConfiguration::SetMode(UnityEngine.Purchasing.SamsungAppsMode) */, ISamsungAppsConfiguration_t2882465226_il2cpp_TypeInfo_var, L_122, 1);
		int32_t L_123 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B28_0 = __this;
		if ((!(((uint32_t)L_123) == ((uint32_t)((int32_t)11)))))
		{
			G_B29_0 = __this;
			goto IL_039f;
		}
	}
	{
		StandardPurchasingModule_t2580735509 * L_124 = V_1;
		NullCheck(L_124);
		int32_t L_125 = StandardPurchasingModule_get_appStore_m3542603452(L_124, /*hidden argument*/NULL);
		G_B30_0 = ((((int32_t)L_125) == ((int32_t)4))? 1 : 0);
		G_B30_1 = G_B28_0;
		goto IL_03a0;
	}

IL_039f:
	{
		G_B30_0 = 0;
		G_B30_1 = G_B29_0;
	}

IL_03a0:
	{
		NullCheck(G_B30_1);
		G_B30_1->set_m_IsSamsungAppsStoreSelected_10((bool)G_B30_0);
		U3CAwakeU3Ec__AnonStorey0_t2364586269 * L_126 = V_0;
		NullCheck(L_126);
		ConfigurationBuilder_t1618671084 * L_127 = L_126->get_builder_0();
		NullCheck(L_127);
		RuntimeObject* L_128 = ConfigurationBuilder_Configure_TisITizenStoreConfiguration_t2207403094_m462687615(L_127, /*hidden argument*/ConfigurationBuilder_Configure_TisITizenStoreConfiguration_t2207403094_m462687615_RuntimeMethod_var);
		NullCheck(L_128);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void UnityEngine.Purchasing.ITizenStoreConfiguration::SetGroupId(System.String) */, ITizenStoreConfiguration_t2207403094_il2cpp_TypeInfo_var, L_128, _stringLiteral3434634371);
		U3CAwakeU3Ec__AnonStorey0_t2364586269 * L_129 = V_0;
		U3CAwakeU3Ec__AnonStorey0_t2364586269 * L_130 = V_0;
		intptr_t L_131 = (intptr_t)U3CAwakeU3Ec__AnonStorey0_U3CU3Em__0_m1899898258_RuntimeMethod_var;
		Action_t1264377477 * L_132 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_132, L_130, L_131, /*hidden argument*/NULL);
		NullCheck(L_129);
		L_129->set_initializeUnityIap_1(L_132);
		bool L_133 = __this->get_m_IsUnityChannelSelected_12();
		V_9 = L_133;
		bool L_134 = V_9;
		if (L_134)
		{
			goto IL_03eb;
		}
	}
	{
		U3CAwakeU3Ec__AnonStorey0_t2364586269 * L_135 = V_0;
		NullCheck(L_135);
		Action_t1264377477 * L_136 = L_135->get_initializeUnityIap_1();
		NullCheck(L_136);
		Action_Invoke_m937035532(L_136, /*hidden argument*/NULL);
		goto IL_0481;
	}

IL_03eb:
	{
		AppInfo_t2433711276 * L_137 = (AppInfo_t2433711276 *)il2cpp_codegen_object_new(AppInfo_t2433711276_il2cpp_TypeInfo_var);
		AppInfo__ctor_m2735043516(L_137, /*hidden argument*/NULL);
		V_10 = L_137;
		AppInfo_t2433711276 * L_138 = V_10;
		NullCheck(L_138);
		AppInfo_set_appId_m2055658561(L_138, _stringLiteral1729256775, /*hidden argument*/NULL);
		AppInfo_t2433711276 * L_139 = V_10;
		NullCheck(L_139);
		AppInfo_set_appKey_m3602781371(L_139, _stringLiteral102996367, /*hidden argument*/NULL);
		AppInfo_t2433711276 * L_140 = V_10;
		NullCheck(L_140);
		AppInfo_set_clientId_m1938777246(L_140, _stringLiteral246042480, /*hidden argument*/NULL);
		AppInfo_t2433711276 * L_141 = V_10;
		NullCheck(L_141);
		AppInfo_set_clientKey_m2324748463(L_141, _stringLiteral3596997650, /*hidden argument*/NULL);
		AppInfo_t2433711276 * L_142 = V_10;
		NullCheck(L_142);
		AppInfo_set_debug_m3225992108(L_142, (bool)0, /*hidden argument*/NULL);
		UnityChannelLoginHandler_t2949829254 * L_143 = (UnityChannelLoginHandler_t2949829254 *)il2cpp_codegen_object_new(UnityChannelLoginHandler_t2949829254_il2cpp_TypeInfo_var);
		UnityChannelLoginHandler__ctor_m3458817249(L_143, /*hidden argument*/NULL);
		__this->set_unityChannelLoginHandler_15(L_143);
		UnityChannelLoginHandler_t2949829254 * L_144 = __this->get_unityChannelLoginHandler_15();
		Action_1_t2019918284 * L_145 = ((IAPDemo_t3681080565_StaticFields*)il2cpp_codegen_static_fields_for(IAPDemo_t3681080565_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_25();
		G_B33_0 = L_144;
		if (L_145)
		{
			G_B34_0 = L_144;
			goto IL_0453;
		}
	}
	{
		intptr_t L_146 = (intptr_t)IAPDemo_U3CAwakeU3Em__0_m4121386249_RuntimeMethod_var;
		Action_1_t2019918284 * L_147 = (Action_1_t2019918284 *)il2cpp_codegen_object_new(Action_1_t2019918284_il2cpp_TypeInfo_var);
		Action_1__ctor_m4251216884(L_147, NULL, L_146, /*hidden argument*/Action_1__ctor_m4251216884_RuntimeMethod_var);
		((IAPDemo_t3681080565_StaticFields*)il2cpp_codegen_static_fields_for(IAPDemo_t3681080565_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_25(L_147);
		G_B34_0 = G_B33_0;
	}

IL_0453:
	{
		Action_1_t2019918284 * L_148 = ((IAPDemo_t3681080565_StaticFields*)il2cpp_codegen_static_fields_for(IAPDemo_t3681080565_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_25();
		NullCheck(G_B34_0);
		G_B34_0->set_initializeFailedAction_1(L_148);
		UnityChannelLoginHandler_t2949829254 * L_149 = __this->get_unityChannelLoginHandler_15();
		U3CAwakeU3Ec__AnonStorey0_t2364586269 * L_150 = V_0;
		intptr_t L_151 = (intptr_t)U3CAwakeU3Ec__AnonStorey0_U3CU3Em__1_m3465982199_RuntimeMethod_var;
		Action_t1264377477 * L_152 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_152, L_150, L_151, /*hidden argument*/NULL);
		NullCheck(L_149);
		L_149->set_initializeSucceededAction_0(L_152);
		AppInfo_t2433711276 * L_153 = V_10;
		UnityChannelLoginHandler_t2949829254 * L_154 = __this->get_unityChannelLoginHandler_15();
		IL2CPP_RUNTIME_CLASS_INIT(StoreService_t295887430_il2cpp_TypeInfo_var);
		StoreService_Initialize_m2398808236(NULL /*static, unused*/, L_153, L_154, /*hidden argument*/NULL);
	}

IL_0481:
	{
		return;
	}
}
// System.Void IAPDemo::OnTransactionsRestored(System.Boolean)
extern "C"  void IAPDemo_OnTransactionsRestored_m3770337668 (IAPDemo_t3681080565 * __this, bool ___success0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPDemo_OnTransactionsRestored_m3770337668_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3509261071, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IAPDemo::OnDeferred(UnityEngine.Purchasing.Product)
extern "C"  void IAPDemo_OnDeferred_m1172906547 (IAPDemo_t3681080565 * __this, Product_t3244410059 * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPDemo_OnDeferred_m1172906547_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Product_t3244410059 * L_0 = ___item0;
		NullCheck(L_0);
		ProductDefinition_t339727138 * L_1 = Product_get_definition_m3366103520(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = ProductDefinition_get_id_m1593385231(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2039047074, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IAPDemo::InitUI(System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Product>)
extern "C"  void IAPDemo_InitUI_m164977490 (IAPDemo_t3681080565 * __this, RuntimeObject* ___items0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPDemo_InitUI_m164977490_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Button_t4055032469 * L_0 = __this->get_restoreButton_21();
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		bool L_2 = IAPDemo_NeedRestoreButton_m845752709(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, L_2, /*hidden argument*/NULL);
		Button_t4055032469 * L_3 = __this->get_loginButton_22();
		NullCheck(L_3);
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(L_3, /*hidden argument*/NULL);
		bool L_5 = IAPDemo_NeedLoginButton_m2506353612(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_m796801857(L_4, L_5, /*hidden argument*/NULL);
		Button_t4055032469 * L_6 = __this->get_validateButton_23();
		NullCheck(L_6);
		GameObject_t1113636619 * L_7 = Component_get_gameObject_m442555142(L_6, /*hidden argument*/NULL);
		bool L_8 = IAPDemo_NeedValidateButton_m2876569025(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_m796801857(L_7, L_8, /*hidden argument*/NULL);
		IAPDemo_ClearProductUIs_m1509731126(__this, /*hidden argument*/NULL);
		Button_t4055032469 * L_9 = __this->get_restoreButton_21();
		NullCheck(L_9);
		ButtonClickedEvent_t48803504 * L_10 = Button_get_onClick_m2332132945(L_9, /*hidden argument*/NULL);
		intptr_t L_11 = (intptr_t)IAPDemo_RestoreButtonClick_m3405629354_RuntimeMethod_var;
		UnityAction_t3245792599 * L_12 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_12, __this, L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		UnityEvent_AddListener_m2276267359(L_10, L_12, /*hidden argument*/NULL);
		Button_t4055032469 * L_13 = __this->get_loginButton_22();
		NullCheck(L_13);
		ButtonClickedEvent_t48803504 * L_14 = Button_get_onClick_m2332132945(L_13, /*hidden argument*/NULL);
		intptr_t L_15 = (intptr_t)IAPDemo_LoginButtonClick_m922043656_RuntimeMethod_var;
		UnityAction_t3245792599 * L_16 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_16, __this, L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		UnityEvent_AddListener_m2276267359(L_14, L_16, /*hidden argument*/NULL);
		Button_t4055032469 * L_17 = __this->get_validateButton_23();
		NullCheck(L_17);
		ButtonClickedEvent_t48803504 * L_18 = Button_get_onClick_m2332132945(L_17, /*hidden argument*/NULL);
		intptr_t L_19 = (intptr_t)IAPDemo_ValidateButtonClick_m3286037932_RuntimeMethod_var;
		UnityAction_t3245792599 * L_20 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_20, __this, L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		UnityEvent_AddListener_m2276267359(L_18, L_20, /*hidden argument*/NULL);
		Text_t1901882714 * L_21 = __this->get_versionText_24();
		String_t* L_22 = Application_get_unityVersion_m1068543125(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral651537131, L_22, _stringLiteral695039966, /*hidden argument*/NULL);
		NullCheck(L_21);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, L_23);
		return;
	}
}
// System.Void IAPDemo::PurchaseButtonClick(System.String)
extern "C"  void IAPDemo_PurchaseButtonClick_m2111771248 (IAPDemo_t3681080565 * __this, String_t* ___productID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPDemo_PurchaseButtonClick_m2111771248_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_m_PurchaseInProgress_17();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2732670492, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		RuntimeObject* L_1 = __this->get_m_Controller_2();
		if (L_1)
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral1721179166, /*hidden argument*/NULL);
		return;
	}

IL_002c:
	{
		RuntimeObject* L_2 = __this->get_m_Controller_2();
		NullCheck(L_2);
		ProductCollection_t2671956229 * L_3 = InterfaceFuncInvoker0< ProductCollection_t2671956229 * >::Invoke(0 /* UnityEngine.Purchasing.ProductCollection UnityEngine.Purchasing.IStoreController::get_products() */, IStoreController_t2579314702_il2cpp_TypeInfo_var, L_2);
		String_t* L_4 = ___productID0;
		NullCheck(L_3);
		Product_t3244410059 * L_5 = ProductCollection_WithID_m2597694943(L_3, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0053;
		}
	}
	{
		String_t* L_6 = ___productID0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3720034263, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		return;
	}

IL_0053:
	{
		bool L_8 = IAPDemo_NeedLoginButton_m2506353612(__this, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0073;
		}
	}
	{
		bool L_9 = __this->get_m_IsLoggedIn_14();
		if (L_9)
		{
			goto IL_0073;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral106636276, /*hidden argument*/NULL);
	}

IL_0073:
	{
		__this->set_m_PurchaseInProgress_17((bool)1);
		RuntimeObject* L_10 = __this->get_m_Controller_2();
		RuntimeObject* L_11 = __this->get_m_Controller_2();
		NullCheck(L_11);
		ProductCollection_t2671956229 * L_12 = InterfaceFuncInvoker0< ProductCollection_t2671956229 * >::Invoke(0 /* UnityEngine.Purchasing.ProductCollection UnityEngine.Purchasing.IStoreController::get_products() */, IStoreController_t2579314702_il2cpp_TypeInfo_var, L_11);
		String_t* L_13 = ___productID0;
		NullCheck(L_12);
		Product_t3244410059 * L_14 = ProductCollection_WithID_m2597694943(L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_10);
		InterfaceActionInvoker2< Product_t3244410059 *, String_t* >::Invoke(1 /* System.Void UnityEngine.Purchasing.IStoreController::InitiatePurchase(UnityEngine.Purchasing.Product,System.String) */, IStoreController_t2579314702_il2cpp_TypeInfo_var, L_10, L_14, _stringLiteral429128857);
		return;
	}
}
// System.Void IAPDemo::RestoreButtonClick()
extern "C"  void IAPDemo_RestoreButtonClick_m3405629354 (IAPDemo_t3681080565 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPDemo_RestoreButtonClick_m3405629354_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_m_IsCloudMoolahStoreSelected_11();
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		bool L_1 = __this->get_m_IsLoggedIn_14();
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral2440287328, /*hidden argument*/NULL);
		goto IL_003c;
	}

IL_0025:
	{
		RuntimeObject* L_2 = __this->get_m_MoolahExtensions_4();
		intptr_t L_3 = (intptr_t)IAPDemo_U3CRestoreButtonClickU3Em__1_m981863705_RuntimeMethod_var;
		Action_1_t1412811613 * L_4 = (Action_1_t1412811613 *)il2cpp_codegen_object_new(Action_1_t1412811613_il2cpp_TypeInfo_var);
		Action_1__ctor_m2866643322(L_4, __this, L_3, /*hidden argument*/Action_1__ctor_m2866643322_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker1< Action_1_t1412811613 * >::Invoke(0 /* System.Void UnityEngine.Purchasing.IMoolahExtension::RestoreTransactionID(System.Action`1<UnityEngine.Purchasing.RestoreTransactionIDState>) */, IMoolahExtension_t955300474_il2cpp_TypeInfo_var, L_2, L_4);
	}

IL_003c:
	{
		goto IL_00b3;
	}

IL_0041:
	{
		bool L_5 = __this->get_m_IsSamsungAppsStoreSelected_10();
		if (!L_5)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_6 = __this->get_m_SamsungExtensions_5();
		intptr_t L_7 = (intptr_t)IAPDemo_OnTransactionsRestored_m3770337668_RuntimeMethod_var;
		Action_1_t269755560 * L_8 = (Action_1_t269755560 *)il2cpp_codegen_object_new(Action_1_t269755560_il2cpp_TypeInfo_var);
		Action_1__ctor_m981112613(L_8, __this, L_7, /*hidden argument*/Action_1__ctor_m981112613_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker1< Action_1_t269755560 * >::Invoke(0 /* System.Void UnityEngine.Purchasing.ISamsungAppsExtensions::RestoreTransactions(System.Action`1<System.Boolean>) */, ISamsungAppsExtensions_t2712620151_il2cpp_TypeInfo_var, L_6, L_8);
		goto IL_00b3;
	}

IL_0068:
	{
		int32_t L_9 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_9) == ((int32_t)((int32_t)18))))
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_10 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_10) == ((int32_t)((int32_t)19))))
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_11 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_009c;
		}
	}

IL_008c:
	{
		RuntimeObject* L_12 = __this->get_m_MicrosoftExtensions_6();
		NullCheck(L_12);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UnityEngine.Purchasing.IMicrosoftExtensions::RestoreTransactions() */, IMicrosoftExtensions_t4020186927_il2cpp_TypeInfo_var, L_12);
		goto IL_00b3;
	}

IL_009c:
	{
		RuntimeObject* L_13 = __this->get_m_AppleExtensions_3();
		intptr_t L_14 = (intptr_t)IAPDemo_OnTransactionsRestored_m3770337668_RuntimeMethod_var;
		Action_1_t269755560 * L_15 = (Action_1_t269755560 *)il2cpp_codegen_object_new(Action_1_t269755560_il2cpp_TypeInfo_var);
		Action_1__ctor_m981112613(L_15, __this, L_14, /*hidden argument*/Action_1__ctor_m981112613_RuntimeMethod_var);
		NullCheck(L_13);
		InterfaceActionInvoker1< Action_1_t269755560 * >::Invoke(0 /* System.Void UnityEngine.Purchasing.IAppleExtensions::RestoreTransactions(System.Action`1<System.Boolean>) */, IAppleExtensions_t4146644616_il2cpp_TypeInfo_var, L_13, L_15);
	}

IL_00b3:
	{
		return;
	}
}
// System.Void IAPDemo::LoginButtonClick()
extern "C"  void IAPDemo_LoginButtonClick_m922043656 (IAPDemo_t3681080565 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPDemo_LoginButtonClick_m922043656_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_m_IsUnityChannelSelected_12();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1833979193, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		UnityChannelLoginHandler_t2949829254 * L_1 = __this->get_unityChannelLoginHandler_15();
		intptr_t L_2 = (intptr_t)IAPDemo_U3CLoginButtonClickU3Em__2_m1060723597_RuntimeMethod_var;
		Action_1_t3058893588 * L_3 = (Action_1_t3058893588 *)il2cpp_codegen_object_new(Action_1_t3058893588_il2cpp_TypeInfo_var);
		Action_1__ctor_m2345809161(L_3, __this, L_2, /*hidden argument*/Action_1__ctor_m2345809161_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->set_loginSucceededAction_2(L_3);
		UnityChannelLoginHandler_t2949829254 * L_4 = __this->get_unityChannelLoginHandler_15();
		intptr_t L_5 = (intptr_t)IAPDemo_U3CLoginButtonClickU3Em__3_m305405626_RuntimeMethod_var;
		Action_1_t2019918284 * L_6 = (Action_1_t2019918284 *)il2cpp_codegen_object_new(Action_1_t2019918284_il2cpp_TypeInfo_var);
		Action_1__ctor_m4251216884(L_6, __this, L_5, /*hidden argument*/Action_1__ctor_m4251216884_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->set_loginFailedAction_3(L_6);
		UnityChannelLoginHandler_t2949829254 * L_7 = __this->get_unityChannelLoginHandler_15();
		IL2CPP_RUNTIME_CLASS_INIT(StoreService_t295887430_il2cpp_TypeInfo_var);
		StoreService_Login_m3447758900(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IAPDemo::ValidateButtonClick()
extern "C"  void IAPDemo_ValidateButtonClick_m3286037932 (IAPDemo_t3681080565 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPDemo_ValidateButtonClick_m3286037932_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CValidateButtonClickU3Ec__AnonStorey1_t541528072 * V_0 = NULL;
	{
		U3CValidateButtonClickU3Ec__AnonStorey1_t541528072 * L_0 = (U3CValidateButtonClickU3Ec__AnonStorey1_t541528072 *)il2cpp_codegen_object_new(U3CValidateButtonClickU3Ec__AnonStorey1_t541528072_il2cpp_TypeInfo_var);
		U3CValidateButtonClickU3Ec__AnonStorey1__ctor_m3498591618(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = __this->get_m_IsUnityChannelSelected_12();
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral19748442, /*hidden argument*/NULL);
		return;
	}

IL_001c:
	{
		U3CValidateButtonClickU3Ec__AnonStorey1_t541528072 * L_2 = V_0;
		String_t* L_3 = __this->get_m_LastTransactionID_13();
		NullCheck(L_2);
		L_2->set_txId_0(L_3);
		RuntimeObject* L_4 = __this->get_m_UnityChannelExtensions_7();
		U3CValidateButtonClickU3Ec__AnonStorey1_t541528072 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = L_5->get_txId_0();
		U3CValidateButtonClickU3Ec__AnonStorey1_t541528072 * L_7 = V_0;
		intptr_t L_8 = (intptr_t)U3CValidateButtonClickU3Ec__AnonStorey1_U3CU3Em__0_m1858270915_RuntimeMethod_var;
		Action_3_t331451502 * L_9 = (Action_3_t331451502 *)il2cpp_codegen_object_new(Action_3_t331451502_il2cpp_TypeInfo_var);
		Action_3__ctor_m3635124332(L_9, L_7, L_8, /*hidden argument*/Action_3__ctor_m3635124332_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker2< String_t*, Action_3_t331451502 * >::Invoke(0 /* System.Void UnityEngine.Purchasing.IUnityChannelExtensions::ValidateReceipt(System.String,System.Action`3<System.Boolean,System.String,System.String>) */, IUnityChannelExtensions_t3299991497_il2cpp_TypeInfo_var, L_4, L_6, L_9);
		return;
	}
}
// System.Void IAPDemo::ClearProductUIs()
extern "C"  void IAPDemo_ClearProductUIs_m1509731126 (IAPDemo_t3681080565 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPDemo_ClearProductUIs_m1509731126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t3105882220  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Enumerator_t2662392828  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t708210053 * L_0 = __this->get_m_ProductUIs_18();
		NullCheck(L_0);
		Enumerator_t2662392828  L_1 = Dictionary_2_GetEnumerator_m1212213977(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m1212213977_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002a;
		}

IL_0011:
		{
			KeyValuePair_2_t3105882220  L_2 = Enumerator_get_Current_m2612823951((&V_1), /*hidden argument*/Enumerator_get_Current_m2612823951_RuntimeMethod_var);
			V_0 = L_2;
			IAPDemoProductUI_t922953754 * L_3 = KeyValuePair_2_get_Value_m3043167188((&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m3043167188_RuntimeMethod_var);
			NullCheck(L_3);
			GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(L_3, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			Object_Destroy_m565254235(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		}

IL_002a:
		{
			bool L_5 = Enumerator_MoveNext_m421504343((&V_1), /*hidden argument*/Enumerator_MoveNext_m421504343_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0011;
			}
		}

IL_0036:
		{
			IL2CPP_LEAVE(0x49, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1653159561((&V_1), /*hidden argument*/Enumerator_Dispose_m1653159561_RuntimeMethod_var);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_JUMP_TBL(0x49, IL_0049)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0049:
	{
		Dictionary_2_t708210053 * L_6 = __this->get_m_ProductUIs_18();
		NullCheck(L_6);
		Dictionary_2_Clear_m2652860274(L_6, /*hidden argument*/Dictionary_2_Clear_m2652860274_RuntimeMethod_var);
		return;
	}
}
// System.Void IAPDemo::AddProductUIs(UnityEngine.Purchasing.Product[])
extern "C"  void IAPDemo_AddProductUIs_m3325452711 (IAPDemo_t3681080565 * __this, ProductU5BU5D_t2942947242* ___products0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPDemo_AddProductUIs_m3325452711_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t3704657025 * V_0 = NULL;
	float V_1 = 0.0f;
	Rect_t2360479859  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Product_t3244410059 * V_4 = NULL;
	ProductU5BU5D_t2942947242* V_5 = NULL;
	int32_t V_6 = 0;
	GameObject_t1113636619 * V_7 = NULL;
	RectTransform_t3704657025 * V_8 = NULL;
	IAPDemoProductUI_t922953754 * V_9 = NULL;
	{
		IAPDemo_ClearProductUIs_m1509731126(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = __this->get_productUITemplate_19();
		NullCheck(L_0);
		RectTransform_t3704657025 * L_1 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_0, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		V_0 = L_1;
		RectTransform_t3704657025 * L_2 = V_0;
		NullCheck(L_2);
		Rect_t2360479859  L_3 = RectTransform_get_rect_m574169965(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		float L_4 = Rect_get_height_m1358425599((&V_2), /*hidden argument*/NULL);
		V_1 = L_4;
		RectTransform_t3704657025 * L_5 = V_0;
		NullCheck(L_5);
		Vector3_t3722313464  L_6 = Transform_get_localPosition_m4234289348(L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		RectTransform_t3704657025 * L_7 = __this->get_contentRect_20();
		ProductU5BU5D_t2942947242* L_8 = ___products0;
		NullCheck(L_8);
		float L_9 = V_1;
		NullCheck(L_7);
		RectTransform_SetSizeWithCurrentAnchors_m1274467307(L_7, 1, ((float)il2cpp_codegen_multiply((float)(((float)((float)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length))))))), (float)L_9)), /*hidden argument*/NULL);
		ProductU5BU5D_t2942947242* L_10 = ___products0;
		V_5 = L_10;
		V_6 = 0;
		goto IL_00e3;
	}

IL_0045:
	{
		ProductU5BU5D_t2942947242* L_11 = V_5;
		int32_t L_12 = V_6;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Product_t3244410059 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		GameObject_t1113636619 * L_15 = __this->get_productUITemplate_19();
		NullCheck(L_15);
		GameObject_t1113636619 * L_16 = GameObject_get_gameObject_m3693461266(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_17 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_16, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		V_7 = L_17;
		GameObject_t1113636619 * L_18 = V_7;
		NullCheck(L_18);
		Transform_t3600365921 * L_19 = GameObject_get_transform_m1369836730(L_18, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_20 = __this->get_productUITemplate_19();
		NullCheck(L_20);
		Transform_t3600365921 * L_21 = GameObject_get_transform_m1369836730(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_t3600365921 * L_22 = Transform_get_parent_m835071599(L_21, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_SetParent_m273471670(L_19, L_22, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_23 = V_7;
		NullCheck(L_23);
		RectTransform_t3704657025 * L_24 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_23, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		V_8 = L_24;
		RectTransform_t3704657025 * L_25 = V_8;
		Vector3_t3722313464  L_26 = V_3;
		NullCheck(L_25);
		Transform_set_localPosition_m4128471975(L_25, L_26, /*hidden argument*/NULL);
		Vector3_t3722313464  L_27 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_28 = Vector3_get_down_m3781355428(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_29 = V_1;
		Vector3_t3722313464  L_30 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		Vector3_t3722313464  L_31 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_27, L_30, /*hidden argument*/NULL);
		V_3 = L_31;
		GameObject_t1113636619 * L_32 = V_7;
		NullCheck(L_32);
		GameObject_SetActive_m796801857(L_32, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_33 = V_7;
		NullCheck(L_33);
		IAPDemoProductUI_t922953754 * L_34 = GameObject_GetComponent_TisIAPDemoProductUI_t922953754_m357023114(L_33, /*hidden argument*/GameObject_GetComponent_TisIAPDemoProductUI_t922953754_m357023114_RuntimeMethod_var);
		V_9 = L_34;
		IAPDemoProductUI_t922953754 * L_35 = V_9;
		Product_t3244410059 * L_36 = V_4;
		intptr_t L_37 = (intptr_t)IAPDemo_PurchaseButtonClick_m2111771248_RuntimeMethod_var;
		Action_1_t2019918284 * L_38 = (Action_1_t2019918284 *)il2cpp_codegen_object_new(Action_1_t2019918284_il2cpp_TypeInfo_var);
		Action_1__ctor_m4251216884(L_38, __this, L_37, /*hidden argument*/Action_1__ctor_m4251216884_RuntimeMethod_var);
		NullCheck(L_35);
		IAPDemoProductUI_SetProduct_m1416471812(L_35, L_36, L_38, /*hidden argument*/NULL);
		Dictionary_2_t708210053 * L_39 = __this->get_m_ProductUIs_18();
		Product_t3244410059 * L_40 = V_4;
		NullCheck(L_40);
		ProductDefinition_t339727138 * L_41 = Product_get_definition_m3366103520(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		String_t* L_42 = ProductDefinition_get_id_m1593385231(L_41, /*hidden argument*/NULL);
		IAPDemoProductUI_t922953754 * L_43 = V_9;
		NullCheck(L_39);
		Dictionary_2_set_Item_m4009054908(L_39, L_42, L_43, /*hidden argument*/Dictionary_2_set_Item_m4009054908_RuntimeMethod_var);
		int32_t L_44 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_00e3:
	{
		int32_t L_45 = V_6;
		ProductU5BU5D_t2942947242* L_46 = V_5;
		NullCheck(L_46);
		if ((((int32_t)L_45) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_46)->max_length)))))))
		{
			goto IL_0045;
		}
	}
	{
		return;
	}
}
// System.Void IAPDemo::UpdateProductUI(UnityEngine.Purchasing.Product)
extern "C"  void IAPDemo_UpdateProductUI_m3067243867 (IAPDemo_t3681080565 * __this, Product_t3244410059 * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPDemo_UpdateProductUI_m3067243867_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t708210053 * L_0 = __this->get_m_ProductUIs_18();
		Product_t3244410059 * L_1 = ___p0;
		NullCheck(L_1);
		ProductDefinition_t339727138 * L_2 = Product_get_definition_m3366103520(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = ProductDefinition_get_id_m1593385231(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_4 = Dictionary_2_ContainsKey_m1691599079(L_0, L_3, /*hidden argument*/Dictionary_2_ContainsKey_m1691599079_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		Dictionary_2_t708210053 * L_5 = __this->get_m_ProductUIs_18();
		Product_t3244410059 * L_6 = ___p0;
		NullCheck(L_6);
		ProductDefinition_t339727138 * L_7 = Product_get_definition_m3366103520(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = ProductDefinition_get_id_m1593385231(L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		IAPDemoProductUI_t922953754 * L_9 = Dictionary_2_get_Item_m2894824968(L_5, L_8, /*hidden argument*/Dictionary_2_get_Item_m2894824968_RuntimeMethod_var);
		Product_t3244410059 * L_10 = ___p0;
		intptr_t L_11 = (intptr_t)IAPDemo_PurchaseButtonClick_m2111771248_RuntimeMethod_var;
		Action_1_t2019918284 * L_12 = (Action_1_t2019918284 *)il2cpp_codegen_object_new(Action_1_t2019918284_il2cpp_TypeInfo_var);
		Action_1__ctor_m4251216884(L_12, __this, L_11, /*hidden argument*/Action_1__ctor_m4251216884_RuntimeMethod_var);
		NullCheck(L_9);
		IAPDemoProductUI_SetProduct_m1416471812(L_9, L_10, L_12, /*hidden argument*/NULL);
	}

IL_0043:
	{
		return;
	}
}
// System.Void IAPDemo::UpdateProductPendingUI(UnityEngine.Purchasing.Product,System.Int32)
extern "C"  void IAPDemo_UpdateProductPendingUI_m815689020 (IAPDemo_t3681080565 * __this, Product_t3244410059 * ___p0, int32_t ___secondsRemaining1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPDemo_UpdateProductPendingUI_m815689020_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t708210053 * L_0 = __this->get_m_ProductUIs_18();
		Product_t3244410059 * L_1 = ___p0;
		NullCheck(L_1);
		ProductDefinition_t339727138 * L_2 = Product_get_definition_m3366103520(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = ProductDefinition_get_id_m1593385231(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_4 = Dictionary_2_ContainsKey_m1691599079(L_0, L_3, /*hidden argument*/Dictionary_2_ContainsKey_m1691599079_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		Dictionary_2_t708210053 * L_5 = __this->get_m_ProductUIs_18();
		Product_t3244410059 * L_6 = ___p0;
		NullCheck(L_6);
		ProductDefinition_t339727138 * L_7 = Product_get_definition_m3366103520(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = ProductDefinition_get_id_m1593385231(L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		IAPDemoProductUI_t922953754 * L_9 = Dictionary_2_get_Item_m2894824968(L_5, L_8, /*hidden argument*/Dictionary_2_get_Item_m2894824968_RuntimeMethod_var);
		int32_t L_10 = ___secondsRemaining1;
		NullCheck(L_9);
		IAPDemoProductUI_SetPendingTime_m907117440(L_9, L_10, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Boolean IAPDemo::NeedRestoreButton()
extern "C"  bool IAPDemo_NeedRestoreButton_m845752709 (IAPDemo_t3681080565 * __this, const RuntimeMethod* method)
{
	int32_t G_B9_0 = 0;
	{
		int32_t L_0 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_1 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_2 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)31))))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_3 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)18))))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_4 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)19))))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_5 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)20))))
		{
			goto IL_0059;
		}
	}
	{
		bool L_6 = __this->get_m_IsSamsungAppsStoreSelected_10();
		if (L_6)
		{
			goto IL_0059;
		}
	}
	{
		bool L_7 = __this->get_m_IsCloudMoolahStoreSelected_11();
		G_B9_0 = ((int32_t)(L_7));
		goto IL_005a;
	}

IL_0059:
	{
		G_B9_0 = 1;
	}

IL_005a:
	{
		return (bool)G_B9_0;
	}
}
// System.Boolean IAPDemo::NeedLoginButton()
extern "C"  bool IAPDemo_NeedLoginButton_m2506353612 (IAPDemo_t3681080565 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_IsUnityChannelSelected_12();
		return L_0;
	}
}
// System.Boolean IAPDemo::NeedValidateButton()
extern "C"  bool IAPDemo_NeedValidateButton_m2876569025 (IAPDemo_t3681080565 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_IsUnityChannelSelected_12();
		return L_0;
	}
}
// System.Void IAPDemo::LogProductDefinitions()
extern "C"  void IAPDemo_LogProductDefinitions_m1832835333 (IAPDemo_t3681080565 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPDemo_LogProductDefinitions_m1832835333_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProductU5BU5D_t2942947242* V_0 = NULL;
	Product_t3244410059 * V_1 = NULL;
	ProductU5BU5D_t2942947242* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_t2843939325* G_B3_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B3_2 = NULL;
	String_t* G_B3_3 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t2843939325* G_B2_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_t2843939325* G_B4_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B4_3 = NULL;
	String_t* G_B4_4 = NULL;
	{
		RuntimeObject* L_0 = __this->get_m_Controller_2();
		NullCheck(L_0);
		ProductCollection_t2671956229 * L_1 = InterfaceFuncInvoker0< ProductCollection_t2671956229 * >::Invoke(0 /* UnityEngine.Purchasing.ProductCollection UnityEngine.Purchasing.IStoreController::get_products() */, IStoreController_t2579314702_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		ProductU5BU5D_t2942947242* L_2 = ProductCollection_get_all_m2286843352(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ProductU5BU5D_t2942947242* L_3 = V_0;
		V_2 = L_3;
		V_3 = 0;
		goto IL_0092;
	}

IL_001a:
	{
		ProductU5BU5D_t2942947242* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Product_t3244410059 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		ObjectU5BU5D_t2843939325* L_8 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
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
		ObjectU5BU5D_t2843939325* L_16 = L_12;
		Product_t3244410059 * L_17 = V_1;
		NullCheck(L_17);
		ProductDefinition_t339727138 * L_18 = Product_get_definition_m3366103520(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_19 = ProductDefinition_get_type_m1651363521(L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		RuntimeObject * L_20 = Box(ProductType_t1868976581_il2cpp_TypeInfo_var, (&V_4));
		NullCheck(L_20);
		String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		V_4 = *(int32_t*)UnBox(L_20);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_21);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_21);
		ObjectU5BU5D_t2843939325* L_22 = L_16;
		Product_t3244410059 * L_23 = V_1;
		NullCheck(L_23);
		ProductDefinition_t339727138 * L_24 = Product_get_definition_m3366103520(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		bool L_25 = ProductDefinition_get_enabled_m3337637214(L_24, /*hidden argument*/NULL);
		G_B2_0 = 3;
		G_B2_1 = L_22;
		G_B2_2 = L_22;
		G_B2_3 = _stringLiteral3456056139;
		if (!L_25)
		{
			G_B3_0 = 3;
			G_B3_1 = L_22;
			G_B3_2 = L_22;
			G_B3_3 = _stringLiteral3456056139;
			goto IL_007e;
		}
	}
	{
		G_B4_0 = _stringLiteral646178060;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		G_B4_3 = G_B2_2;
		G_B4_4 = G_B2_3;
		goto IL_0083;
	}

IL_007e:
	{
		G_B4_0 = _stringLiteral1262761478;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
		G_B4_3 = G_B3_2;
		G_B4_4 = G_B3_3;
	}

IL_0083:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Format_m630303134(NULL /*static, unused*/, G_B4_4, G_B4_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0092:
	{
		int32_t L_28 = V_3;
		ProductU5BU5D_t2942947242* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		return;
	}
}
// System.Void IAPDemo::<Awake>m__0(System.String)
extern "C"  void IAPDemo_U3CAwakeU3Em__0_m4121386249 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPDemo_U3CAwakeU3Em__0_m4121386249_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral589146054, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IAPDemo::<RestoreButtonClick>m__1(UnityEngine.Purchasing.RestoreTransactionIDState)
extern "C"  void IAPDemo_U3CRestoreButtonClickU3Em__1_m981863705 (IAPDemo_t3681080565 * __this, int32_t ___restoreTransactionIDState0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPDemo_U3CRestoreButtonClickU3Em__1_m981863705_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject * L_0 = Box(RestoreTransactionIDState_t1240344018_il2cpp_TypeInfo_var, (&___restoreTransactionIDState0));
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___restoreTransactionIDState0 = *(int32_t*)UnBox(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral626829109, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		int32_t L_3 = ___restoreTransactionIDState0;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_4 = ___restoreTransactionIDState0;
		G_B3_0 = ((((int32_t)((((int32_t)L_4) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002d;
	}

IL_002c:
	{
		G_B3_0 = 0;
	}

IL_002d:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		IAPDemo_OnTransactionsRestored_m3770337668(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IAPDemo::<LoginButtonClick>m__2(UnityEngine.Store.UserInfo)
extern "C"  void IAPDemo_U3CLoginButtonClickU3Em__2_m1060723597 (IAPDemo_t3681080565 * __this, UserInfo_t2886425993 * ___userInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPDemo_U3CLoginButtonClickU3Em__2_m1060723597_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_IsLoggedIn_14((bool)1);
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)3));
		UserInfo_t2886425993 * L_1 = ___userInfo0;
		NullCheck(L_1);
		String_t* L_2 = UserInfo_get_channel_m347330040(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_2);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t2843939325* L_3 = L_0;
		UserInfo_t2886425993 * L_4 = ___userInfo0;
		NullCheck(L_4);
		String_t* L_5 = UserInfo_get_userId_m2274633782(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_3;
		UserInfo_t2886425993 * L_7 = ___userInfo0;
		NullCheck(L_7);
		String_t* L_8 = UserInfo_get_userLoginToken_m844253205(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogFormat_m309087137(NULL /*static, unused*/, _stringLiteral2232640341, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IAPDemo::<LoginButtonClick>m__3(System.String)
extern "C"  void IAPDemo_U3CLoginButtonClickU3Em__3_m305405626 (IAPDemo_t3681080565 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPDemo_U3CLoginButtonClickU3Em__3_m305405626_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_IsLoggedIn_14((bool)0);
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1098625566, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
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
// System.Void IAPDemo/<Awake>c__AnonStorey0::.ctor()
extern "C"  void U3CAwakeU3Ec__AnonStorey0__ctor_m4083696123 (U3CAwakeU3Ec__AnonStorey0_t2364586269 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IAPDemo/<Awake>c__AnonStorey0::<>m__0()
extern "C"  void U3CAwakeU3Ec__AnonStorey0_U3CU3Em__0_m1899898258 (U3CAwakeU3Ec__AnonStorey0_t2364586269 * __this, const RuntimeMethod* method)
{
	{
		IAPDemo_t3681080565 * L_0 = __this->get_U24this_2();
		ConfigurationBuilder_t1618671084 * L_1 = __this->get_builder_0();
		UnityPurchasing_Initialize_m1836262307(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IAPDemo/<Awake>c__AnonStorey0::<>m__1()
extern "C"  void U3CAwakeU3Ec__AnonStorey0_U3CU3Em__1_m3465982199 (U3CAwakeU3Ec__AnonStorey0_t2364586269 * __this, const RuntimeMethod* method)
{
	{
		Action_t1264377477 * L_0 = __this->get_initializeUnityIap_1();
		NullCheck(L_0);
		Action_Invoke_m937035532(L_0, /*hidden argument*/NULL);
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
// System.Void IAPDemo/<ValidateButtonClick>c__AnonStorey1::.ctor()
extern "C"  void U3CValidateButtonClickU3Ec__AnonStorey1__ctor_m3498591618 (U3CValidateButtonClickU3Ec__AnonStorey1_t541528072 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IAPDemo/<ValidateButtonClick>c__AnonStorey1::<>m__0(System.Boolean,System.String,System.String)
extern "C"  void U3CValidateButtonClickU3Ec__AnonStorey1_U3CU3Em__0_m1858270915 (U3CValidateButtonClickU3Ec__AnonStorey1_t541528072 * __this, bool ___success0, String_t* ___signData1, String_t* ___signature2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CValidateButtonClickU3Ec__AnonStorey1_U3CU3Em__0_m1858270915_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		String_t* L_1 = __this->get_txId_0();
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		ObjectU5BU5D_t2843939325* L_2 = L_0;
		bool L_3 = ___success0;
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_2;
		String_t* L_7 = ___signData1;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_6;
		String_t* L_9 = ___signature2;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_9);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogFormat_m309087137(NULL /*static, unused*/, _stringLiteral3660040476, L_8, /*hidden argument*/NULL);
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
// System.Void IAPDemo/UnityChannelLoginHandler::.ctor()
extern "C"  void UnityChannelLoginHandler__ctor_m3458817249 (UnityChannelLoginHandler_t2949829254 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IAPDemo/UnityChannelLoginHandler::OnInitialized()
extern "C"  void UnityChannelLoginHandler_OnInitialized_m3735081678 (UnityChannelLoginHandler_t2949829254 * __this, const RuntimeMethod* method)
{
	{
		Action_t1264377477 * L_0 = __this->get_initializeSucceededAction_0();
		NullCheck(L_0);
		Action_Invoke_m937035532(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IAPDemo/UnityChannelLoginHandler::OnInitializeFailed(System.String)
extern "C"  void UnityChannelLoginHandler_OnInitializeFailed_m1407566223 (UnityChannelLoginHandler_t2949829254 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelLoginHandler_OnInitializeFailed_m1407566223_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t2019918284 * L_0 = __this->get_initializeFailedAction_1();
		String_t* L_1 = ___message0;
		NullCheck(L_0);
		Action_1_Invoke_m888793725(L_0, L_1, /*hidden argument*/Action_1_Invoke_m888793725_RuntimeMethod_var);
		return;
	}
}
// System.Void IAPDemo/UnityChannelLoginHandler::OnLogin(UnityEngine.Store.UserInfo)
extern "C"  void UnityChannelLoginHandler_OnLogin_m469067565 (UnityChannelLoginHandler_t2949829254 * __this, UserInfo_t2886425993 * ___userInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelLoginHandler_OnLogin_m469067565_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t3058893588 * L_0 = __this->get_loginSucceededAction_2();
		UserInfo_t2886425993 * L_1 = ___userInfo0;
		NullCheck(L_0);
		Action_1_Invoke_m3514176011(L_0, L_1, /*hidden argument*/Action_1_Invoke_m3514176011_RuntimeMethod_var);
		return;
	}
}
// System.Void IAPDemo/UnityChannelLoginHandler::OnLoginFailed(System.String)
extern "C"  void UnityChannelLoginHandler_OnLoginFailed_m4074641833 (UnityChannelLoginHandler_t2949829254 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelLoginHandler_OnLoginFailed_m4074641833_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t2019918284 * L_0 = __this->get_loginFailedAction_3();
		String_t* L_1 = ___message0;
		NullCheck(L_0);
		Action_1_Invoke_m888793725(L_0, L_1, /*hidden argument*/Action_1_Invoke_m888793725_RuntimeMethod_var);
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
// System.Void IAPDemo/UnityChannelPurchaseError::.ctor()
extern "C"  void UnityChannelPurchaseError__ctor_m3153415953 (UnityChannelPurchaseError_t2306817818 * __this, const RuntimeMethod* method)
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
// System.Void IAPDemo/UnityChannelPurchaseInfo::.ctor()
extern "C"  void UnityChannelPurchaseInfo__ctor_m2904558829 (UnityChannelPurchaseInfo_t74063925 * __this, const RuntimeMethod* method)
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
// System.Void IAPDemoProductUI::.ctor()
extern "C"  void IAPDemoProductUI__ctor_m1193845317 (IAPDemoProductUI_t922953754 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IAPDemoProductUI::SetProduct(UnityEngine.Purchasing.Product,System.Action`1<System.String>)
extern "C"  void IAPDemoProductUI_SetProduct_m1416471812 (IAPDemoProductUI_t922953754 * __this, Product_t3244410059 * ___p0, Action_1_t2019918284 * ___purchaseCallback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPDemoProductUI_SetProduct_m1416471812_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Text_t1901882714 * G_B2_0 = NULL;
	Text_t1901882714 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	Text_t1901882714 * G_B3_1 = NULL;
	{
		Text_t1901882714 * L_0 = __this->get_titleText_4();
		Product_t3244410059 * L_1 = ___p0;
		NullCheck(L_1);
		ProductMetadata_t3417118930 * L_2 = Product_get_metadata_m3202120155(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = ProductMetadata_get_localizedTitle_m1221956283(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		Text_t1901882714 * L_4 = __this->get_descriptionText_5();
		Product_t3244410059 * L_5 = ___p0;
		NullCheck(L_5);
		ProductMetadata_t3417118930 * L_6 = Product_get_metadata_m3202120155(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = ProductMetadata_get_localizedDescription_m2896855065(L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		Text_t1901882714 * L_8 = __this->get_priceText_6();
		Product_t3244410059 * L_9 = ___p0;
		NullCheck(L_9);
		ProductMetadata_t3417118930 * L_10 = Product_get_metadata_m3202120155(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_11 = ProductMetadata_get_localizedPriceString_m3339862584(L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_11);
		Button_t4055032469 * L_12 = __this->get_receiptButton_3();
		Product_t3244410059 * L_13 = ___p0;
		NullCheck(L_13);
		bool L_14 = Product_get_hasReceipt_m2449951182(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		Selectable_set_interactable_m3105888815(L_12, L_14, /*hidden argument*/NULL);
		Product_t3244410059 * L_15 = ___p0;
		NullCheck(L_15);
		String_t* L_16 = Product_get_receipt_m117487645(L_15, /*hidden argument*/NULL);
		__this->set_m_Receipt_10(L_16);
		Product_t3244410059 * L_17 = ___p0;
		NullCheck(L_17);
		ProductDefinition_t339727138 * L_18 = Product_get_definition_m3366103520(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_19 = ProductDefinition_get_id_m1593385231(L_18, /*hidden argument*/NULL);
		__this->set_m_ProductID_8(L_19);
		Action_1_t2019918284 * L_20 = ___purchaseCallback1;
		__this->set_m_PurchaseCallback_9(L_20);
		Text_t1901882714 * L_21 = __this->get_statusText_7();
		Product_t3244410059 * L_22 = ___p0;
		NullCheck(L_22);
		bool L_23 = Product_get_availableToPurchase_m3282912434(L_22, /*hidden argument*/NULL);
		G_B1_0 = L_21;
		if (!L_23)
		{
			G_B2_0 = L_21;
			goto IL_0092;
		}
	}
	{
		G_B3_0 = _stringLiteral3073018993;
		G_B3_1 = G_B1_0;
		goto IL_0097;
	}

IL_0092:
	{
		G_B3_0 = _stringLiteral1513940635;
		G_B3_1 = G_B2_0;
	}

IL_0097:
	{
		NullCheck(G_B3_1);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B3_1, G_B3_0);
		return;
	}
}
// System.Void IAPDemoProductUI::SetPendingTime(System.Int32)
extern "C"  void IAPDemoProductUI_SetPendingTime_m907117440 (IAPDemoProductUI_t922953754 * __this, int32_t ___secondsRemaining0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPDemoProductUI_SetPendingTime_m907117440_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t1901882714 * L_0 = __this->get_statusText_7();
		String_t* L_1 = Int32_ToString_m141394615((&___secondsRemaining0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral541264700, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		return;
	}
}
// System.Void IAPDemoProductUI::PurchaseButtonClick()
extern "C"  void IAPDemoProductUI_PurchaseButtonClick_m3315873808 (IAPDemoProductUI_t922953754 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPDemoProductUI_PurchaseButtonClick_m3315873808_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t2019918284 * L_0 = __this->get_m_PurchaseCallback_9();
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_1 = __this->get_m_ProductID_8();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		Action_1_t2019918284 * L_3 = __this->get_m_PurchaseCallback_9();
		String_t* L_4 = __this->get_m_ProductID_8();
		NullCheck(L_3);
		Action_1_Invoke_m888793725(L_3, L_4, /*hidden argument*/Action_1_Invoke_m888793725_RuntimeMethod_var);
	}

IL_002c:
	{
		return;
	}
}
// System.Void IAPDemoProductUI::ReceiptButtonClick()
extern "C"  void IAPDemoProductUI_ReceiptButtonClick_m2915488774 (IAPDemoProductUI_t922953754 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPDemoProductUI_ReceiptButtonClick_m2915488774_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_m_Receipt_10();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_2 = __this->get_m_ProductID_8();
		String_t* L_3 = __this->get_m_Receipt_10();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral1976128950, L_2, _stringLiteral3450517398, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0030:
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
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::.ctor()
extern "C"  void CodelessIAPStoreListener__ctor_m4057698661 (CodelessIAPStoreListener_t3553337218 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener__ctor_m4057698661_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3820967359 * L_0 = (List_1_t3820967359 *)il2cpp_codegen_object_new(List_1_t3820967359_il2cpp_TypeInfo_var);
		List_1__ctor_m2463266095(L_0, /*hidden argument*/List_1__ctor_m2463266095_RuntimeMethod_var);
		__this->set_activeButtons_1(L_0);
		List_1_t3473867730 * L_1 = (List_1_t3473867730 *)il2cpp_codegen_object_new(List_1_t3473867730_il2cpp_TypeInfo_var);
		List_1__ctor_m1649537636(L_1, /*hidden argument*/List_1__ctor_m1649537636_RuntimeMethod_var);
		__this->set_activeListeners_2(L_1);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ProductCatalog_t3178009003 * L_2 = ProductCatalog_LoadDefaultCatalog_m2858771357(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_catalog_6(L_2);
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::InitializeCodelessPurchasingOnLoad()
extern "C"  void CodelessIAPStoreListener_InitializeCodelessPurchasingOnLoad_m3874893303 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_InitializeCodelessPurchasingOnLoad_m3874893303_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProductCatalog_t3178009003 * V_0 = NULL;
	{
		ProductCatalog_t3178009003 * L_0 = ProductCatalog_LoadDefaultCatalog_m2858771357(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		ProductCatalog_t3178009003 * L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = L_1->get_enableCodelessAutoInitialization_1();
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		ProductCatalog_t3178009003 * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = ProductCatalog_IsEmpty_m951513312(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002b;
		}
	}
	{
		CodelessIAPStoreListener_t3553337218 * L_5 = ((CodelessIAPStoreListener_t3553337218_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_t3553337218_il2cpp_TypeInfo_var))->get_instance_0();
		if (L_5)
		{
			goto IL_002b;
		}
	}
	{
		CodelessIAPStoreListener_CreateCodelessIAPStoreListenerInstance_m1343785826(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::InitializePurchasing()
extern "C"  void CodelessIAPStoreListener_InitializePurchasing_m1015531517 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_InitializePurchasing_m1015531517_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StandardPurchasingModule_t2580735509 * V_0 = NULL;
	ConfigurationBuilder_t1618671084 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(StandardPurchasingModule_t2580735509_il2cpp_TypeInfo_var);
		StandardPurchasingModule_t2580735509 * L_0 = StandardPurchasingModule_Instance_m2991111855(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		StandardPurchasingModule_t2580735509 * L_1 = V_0;
		NullCheck(L_1);
		StandardPurchasingModule_set_useFakeStoreUIMode_m2028643116(L_1, 1, /*hidden argument*/NULL);
		StandardPurchasingModule_t2580735509 * L_2 = V_0;
		ConfigurationBuilder_t1618671084 * L_3 = ConfigurationBuilder_Instance_m2204111312(NULL /*static, unused*/, L_2, ((IPurchasingModuleU5BU5D_t3784316456*)SZArrayNew(IPurchasingModuleU5BU5D_t3784316456_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		V_1 = L_3;
		CodelessIAPStoreListener_t3553337218 * L_4 = ((CodelessIAPStoreListener_t3553337218_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_t3553337218_il2cpp_TypeInfo_var))->get_instance_0();
		NullCheck(L_4);
		ProductCatalog_t3178009003 * L_5 = L_4->get_catalog_6();
		IAPConfigurationHelper_PopulateConfigurationBuilder_m499335247(NULL /*static, unused*/, (&V_1), L_5, /*hidden argument*/NULL);
		CodelessIAPStoreListener_t3553337218 * L_6 = ((CodelessIAPStoreListener_t3553337218_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_t3553337218_il2cpp_TypeInfo_var))->get_instance_0();
		ConfigurationBuilder_t1618671084 * L_7 = V_1;
		UnityPurchasing_Initialize_m1836262307(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		((CodelessIAPStoreListener_t3553337218_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_t3553337218_il2cpp_TypeInfo_var))->set_unityPurchasingInitialized_3((bool)1);
		return;
	}
}
// UnityEngine.Purchasing.CodelessIAPStoreListener UnityEngine.Purchasing.CodelessIAPStoreListener::get_Instance()
extern "C"  CodelessIAPStoreListener_t3553337218 * CodelessIAPStoreListener_get_Instance_m3072254248 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_get_Instance_m3072254248_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CodelessIAPStoreListener_t3553337218 * L_0 = ((CodelessIAPStoreListener_t3553337218_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_t3553337218_il2cpp_TypeInfo_var))->get_instance_0();
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		CodelessIAPStoreListener_CreateCodelessIAPStoreListenerInstance_m1343785826(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_000f:
	{
		CodelessIAPStoreListener_t3553337218 * L_1 = ((CodelessIAPStoreListener_t3553337218_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_t3553337218_il2cpp_TypeInfo_var))->get_instance_0();
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::CreateCodelessIAPStoreListenerInstance()
extern "C"  void CodelessIAPStoreListener_CreateCodelessIAPStoreListenerInstance_m1343785826 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_CreateCodelessIAPStoreListenerInstance_m1343785826_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CodelessIAPStoreListener_t3553337218 * L_0 = (CodelessIAPStoreListener_t3553337218 *)il2cpp_codegen_object_new(CodelessIAPStoreListener_t3553337218_il2cpp_TypeInfo_var);
		CodelessIAPStoreListener__ctor_m4057698661(L_0, /*hidden argument*/NULL);
		((CodelessIAPStoreListener_t3553337218_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_t3553337218_il2cpp_TypeInfo_var))->set_instance_0(L_0);
		bool L_1 = ((CodelessIAPStoreListener_t3553337218_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_t3553337218_il2cpp_TypeInfo_var))->get_unityPurchasingInitialized_3();
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1063918814, /*hidden argument*/NULL);
		CodelessIAPStoreListener_InitializePurchasing_m1015531517(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// UnityEngine.Purchasing.IStoreController UnityEngine.Purchasing.CodelessIAPStoreListener::get_StoreController()
extern "C"  RuntimeObject* CodelessIAPStoreListener_get_StoreController_m111456333 (CodelessIAPStoreListener_t3553337218 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_controller_4();
		return L_0;
	}
}
// UnityEngine.Purchasing.IExtensionProvider UnityEngine.Purchasing.CodelessIAPStoreListener::get_ExtensionProvider()
extern "C"  RuntimeObject* CodelessIAPStoreListener_get_ExtensionProvider_m1851144105 (CodelessIAPStoreListener_t3553337218 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_extensions_5();
		return L_0;
	}
}
// System.Boolean UnityEngine.Purchasing.CodelessIAPStoreListener::HasProductInCatalog(System.String)
extern "C"  bool CodelessIAPStoreListener_HasProductInCatalog_m3373328566 (CodelessIAPStoreListener_t3553337218 * __this, String_t* ___productID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_HasProductInCatalog_m3373328566_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProductCatalogItem_t2141417634 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ProductCatalog_t3178009003 * L_0 = __this->get_catalog_6();
		NullCheck(L_0);
		RuntimeObject* L_1 = ProductCatalog_get_allProducts_m3823510912(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.ProductCatalogItem>::GetEnumerator() */, IEnumerable_1_t1121270523_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0035;
		}

IL_0016:
		{
			RuntimeObject* L_3 = V_1;
			NullCheck(L_3);
			ProductCatalogItem_t2141417634 * L_4 = InterfaceFuncInvoker0< ProductCatalogItem_t2141417634 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Purchasing.ProductCatalogItem>::get_Current() */, IEnumerator_1_t2573988102_il2cpp_TypeInfo_var, L_3);
			V_0 = L_4;
			ProductCatalogItem_t2141417634 * L_5 = V_0;
			NullCheck(L_5);
			String_t* L_6 = L_5->get_id_0();
			String_t* L_7 = ___productID0;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_8 = String_op_Equality_m920492651(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0035;
			}
		}

IL_002e:
		{
			V_2 = (bool)1;
			IL2CPP_LEAVE(0x54, FINALLY_0045);
		}

IL_0035:
		{
			RuntimeObject* L_9 = V_1;
			NullCheck(L_9);
			bool L_10 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_9);
			if (L_10)
			{
				goto IL_0016;
			}
		}

IL_0040:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0045);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_11 = V_1;
			if (!L_11)
			{
				goto IL_0051;
			}
		}

IL_004b:
		{
			RuntimeObject* L_12 = V_1;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_12);
		}

IL_0051:
		{
			IL2CPP_END_FINALLY(69)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_JUMP_TBL(0x54, IL_0054)
		IL2CPP_JUMP_TBL(0x52, IL_0052)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0052:
	{
		return (bool)0;
	}

IL_0054:
	{
		bool L_13 = V_2;
		return L_13;
	}
}
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.CodelessIAPStoreListener::GetProduct(System.String)
extern "C"  Product_t3244410059 * CodelessIAPStoreListener_GetProduct_m2762398532 (CodelessIAPStoreListener_t3553337218 * __this, String_t* ___productID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_GetProduct_m2762398532_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_controller_4();
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_controller_4();
		NullCheck(L_1);
		ProductCollection_t2671956229 * L_2 = InterfaceFuncInvoker0< ProductCollection_t2671956229 * >::Invoke(0 /* UnityEngine.Purchasing.ProductCollection UnityEngine.Purchasing.IStoreController::get_products() */, IStoreController_t2579314702_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		String_t* L_3 = ___productID0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0038;
		}
	}
	{
		RuntimeObject* L_5 = __this->get_controller_4();
		NullCheck(L_5);
		ProductCollection_t2671956229 * L_6 = InterfaceFuncInvoker0< ProductCollection_t2671956229 * >::Invoke(0 /* UnityEngine.Purchasing.ProductCollection UnityEngine.Purchasing.IStoreController::get_products() */, IStoreController_t2579314702_il2cpp_TypeInfo_var, L_5);
		String_t* L_7 = ___productID0;
		NullCheck(L_6);
		Product_t3244410059 * L_8 = ProductCollection_WithID_m2597694943(L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0038:
	{
		String_t* L_9 = ___productID0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2515816788, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		return (Product_t3244410059 *)NULL;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::AddButton(UnityEngine.Purchasing.IAPButton)
extern "C"  void CodelessIAPStoreListener_AddButton_m3372830185 (CodelessIAPStoreListener_t3553337218 * __this, IAPButton_t2348892617 * ___button0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_AddButton_m3372830185_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3820967359 * L_0 = __this->get_activeButtons_1();
		IAPButton_t2348892617 * L_1 = ___button0;
		NullCheck(L_0);
		List_1_Add_m1783141595(L_0, L_1, /*hidden argument*/List_1_Add_m1783141595_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::RemoveButton(UnityEngine.Purchasing.IAPButton)
extern "C"  void CodelessIAPStoreListener_RemoveButton_m3944861536 (CodelessIAPStoreListener_t3553337218 * __this, IAPButton_t2348892617 * ___button0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_RemoveButton_m3944861536_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3820967359 * L_0 = __this->get_activeButtons_1();
		IAPButton_t2348892617 * L_1 = ___button0;
		NullCheck(L_0);
		List_1_Remove_m3261290539(L_0, L_1, /*hidden argument*/List_1_Remove_m3261290539_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::AddListener(UnityEngine.Purchasing.IAPListener)
extern "C"  void CodelessIAPStoreListener_AddListener_m1184156019 (CodelessIAPStoreListener_t3553337218 * __this, IAPListener_t2001792988 * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_AddListener_m1184156019_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3473867730 * L_0 = __this->get_activeListeners_2();
		IAPListener_t2001792988 * L_1 = ___listener0;
		NullCheck(L_0);
		List_1_Add_m3263351746(L_0, L_1, /*hidden argument*/List_1_Add_m3263351746_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::RemoveListener(UnityEngine.Purchasing.IAPListener)
extern "C"  void CodelessIAPStoreListener_RemoveListener_m1699040040 (CodelessIAPStoreListener_t3553337218 * __this, IAPListener_t2001792988 * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_RemoveListener_m1699040040_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3473867730 * L_0 = __this->get_activeListeners_2();
		IAPListener_t2001792988 * L_1 = ___listener0;
		NullCheck(L_0);
		List_1_Remove_m1956914710(L_0, L_1, /*hidden argument*/List_1_Remove_m1956914710_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::InitiatePurchase(System.String)
extern "C"  void CodelessIAPStoreListener_InitiatePurchase_m520296817 (CodelessIAPStoreListener_t3553337218 * __this, String_t* ___productID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_InitiatePurchase_m520296817_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAPButton_t2348892617 * V_0 = NULL;
	Enumerator_t1415243940  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = __this->get_controller_4();
		if (L_0)
		{
			goto IL_0067;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral475512004, /*hidden argument*/NULL);
		List_1_t3820967359 * L_1 = __this->get_activeButtons_1();
		NullCheck(L_1);
		Enumerator_t1415243940  L_2 = List_1_GetEnumerator_m3867390102(L_1, /*hidden argument*/List_1_GetEnumerator_m3867390102_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0047;
		}

IL_0026:
		{
			IAPButton_t2348892617 * L_3 = Enumerator_get_Current_m2512686566((&V_1), /*hidden argument*/Enumerator_get_Current_m2512686566_RuntimeMethod_var);
			V_0 = L_3;
			IAPButton_t2348892617 * L_4 = V_0;
			NullCheck(L_4);
			String_t* L_5 = L_4->get_productId_2();
			String_t* L_6 = ___productID0;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_7 = String_op_Equality_m920492651(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_0047;
			}
		}

IL_003f:
		{
			IAPButton_t2348892617 * L_8 = V_0;
			NullCheck(L_8);
			IAPButton_OnPurchaseFailed_m2987162176(L_8, (Product_t3244410059 *)NULL, 0, /*hidden argument*/NULL);
		}

IL_0047:
		{
			bool L_9 = Enumerator_MoveNext_m1263452849((&V_1), /*hidden argument*/Enumerator_MoveNext_m1263452849_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_0026;
			}
		}

IL_0053:
		{
			IL2CPP_LEAVE(0x66, FINALLY_0058);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0058;
	}

FINALLY_0058:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1282679402((&V_1), /*hidden argument*/Enumerator_Dispose_m1282679402_RuntimeMethod_var);
		IL2CPP_END_FINALLY(88)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(88)
	{
		IL2CPP_JUMP_TBL(0x66, IL_0066)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0066:
	{
		return;
	}

IL_0067:
	{
		RuntimeObject* L_10 = __this->get_controller_4();
		String_t* L_11 = ___productID0;
		NullCheck(L_10);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void UnityEngine.Purchasing.IStoreController::InitiatePurchase(System.String) */, IStoreController_t2579314702_il2cpp_TypeInfo_var, L_10, L_11);
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::OnInitialized(UnityEngine.Purchasing.IStoreController,UnityEngine.Purchasing.IExtensionProvider)
extern "C"  void CodelessIAPStoreListener_OnInitialized_m1429099854 (CodelessIAPStoreListener_t3553337218 * __this, RuntimeObject* ___controller0, RuntimeObject* ___extensions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_OnInitialized_m1429099854_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAPButton_t2348892617 * V_0 = NULL;
	Enumerator_t1415243940  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		((CodelessIAPStoreListener_t3553337218_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_t3553337218_il2cpp_TypeInfo_var))->set_initializationComplete_7((bool)1);
		RuntimeObject* L_0 = ___controller0;
		__this->set_controller_4(L_0);
		RuntimeObject* L_1 = ___extensions1;
		__this->set_extensions_5(L_1);
		List_1_t3820967359 * L_2 = __this->get_activeButtons_1();
		NullCheck(L_2);
		Enumerator_t1415243940  L_3 = List_1_GetEnumerator_m3867390102(L_2, /*hidden argument*/List_1_GetEnumerator_m3867390102_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0033;
		}

IL_0025:
		{
			IAPButton_t2348892617 * L_4 = Enumerator_get_Current_m2512686566((&V_1), /*hidden argument*/Enumerator_get_Current_m2512686566_RuntimeMethod_var);
			V_0 = L_4;
			IAPButton_t2348892617 * L_5 = V_0;
			NullCheck(L_5);
			IAPButton_UpdateText_m735950863(L_5, /*hidden argument*/NULL);
		}

IL_0033:
		{
			bool L_6 = Enumerator_MoveNext_m1263452849((&V_1), /*hidden argument*/Enumerator_MoveNext_m1263452849_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0025;
			}
		}

IL_003f:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0044);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1282679402((&V_1), /*hidden argument*/Enumerator_Dispose_m1282679402_RuntimeMethod_var);
		IL2CPP_END_FINALLY(68)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_JUMP_TBL(0x52, IL_0052)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0052:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::OnInitializeFailed(UnityEngine.Purchasing.InitializationFailureReason)
extern "C"  void CodelessIAPStoreListener_OnInitializeFailed_m2116155506 (CodelessIAPStoreListener_t3553337218 * __this, int32_t ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_OnInitializeFailed_m2116155506_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = Box(InitializationFailureReason_t2740567704_il2cpp_TypeInfo_var, (&___error0));
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___error0 = *(int32_t*)UnBox(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3506202795, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.CodelessIAPStoreListener::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
extern "C"  int32_t CodelessIAPStoreListener_ProcessPurchase_m3533788235 (CodelessIAPStoreListener_t3553337218 * __this, PurchaseEventArgs_t3033159582 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_ProcessPurchase_m3533788235_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	IAPButton_t2348892617 * V_3 = NULL;
	Enumerator_t1415243940  V_4;
	memset(&V_4, 0, sizeof(V_4));
	IAPListener_t2001792988 * V_5 = NULL;
	Enumerator_t1068144311  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B22_0 = 0;
	{
		V_1 = (bool)0;
		V_2 = (bool)0;
		List_1_t3820967359 * L_0 = __this->get_activeButtons_1();
		NullCheck(L_0);
		Enumerator_t1415243940  L_1 = List_1_GetEnumerator_m3867390102(L_0, /*hidden argument*/List_1_GetEnumerator_m3867390102_RuntimeMethod_var);
		V_4 = L_1;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0050;
		}

IL_0016:
		{
			IAPButton_t2348892617 * L_2 = Enumerator_get_Current_m2512686566((&V_4), /*hidden argument*/Enumerator_get_Current_m2512686566_RuntimeMethod_var);
			V_3 = L_2;
			IAPButton_t2348892617 * L_3 = V_3;
			NullCheck(L_3);
			String_t* L_4 = L_3->get_productId_2();
			PurchaseEventArgs_t3033159582 * L_5 = ___e0;
			NullCheck(L_5);
			Product_t3244410059 * L_6 = PurchaseEventArgs_get_purchasedProduct_m3472521060(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			ProductDefinition_t339727138 * L_7 = Product_get_definition_m3366103520(L_6, /*hidden argument*/NULL);
			NullCheck(L_7);
			String_t* L_8 = ProductDefinition_get_id_m1593385231(L_7, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_9 = String_op_Equality_m920492651(NULL /*static, unused*/, L_4, L_8, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_0050;
			}
		}

IL_003e:
		{
			IAPButton_t2348892617 * L_10 = V_3;
			PurchaseEventArgs_t3033159582 * L_11 = ___e0;
			NullCheck(L_10);
			int32_t L_12 = IAPButton_ProcessPurchase_m2399959099(L_10, L_11, /*hidden argument*/NULL);
			V_0 = L_12;
			int32_t L_13 = V_0;
			if (L_13)
			{
				goto IL_004e;
			}
		}

IL_004c:
		{
			V_1 = (bool)1;
		}

IL_004e:
		{
			V_2 = (bool)1;
		}

IL_0050:
		{
			bool L_14 = Enumerator_MoveNext_m1263452849((&V_4), /*hidden argument*/Enumerator_MoveNext_m1263452849_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0016;
			}
		}

IL_005c:
		{
			IL2CPP_LEAVE(0x6F, FINALLY_0061);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0061;
	}

FINALLY_0061:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1282679402((&V_4), /*hidden argument*/Enumerator_Dispose_m1282679402_RuntimeMethod_var);
		IL2CPP_END_FINALLY(97)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(97)
	{
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006f:
	{
		List_1_t3473867730 * L_15 = __this->get_activeListeners_2();
		NullCheck(L_15);
		Enumerator_t1068144311  L_16 = List_1_GetEnumerator_m2016754886(L_15, /*hidden argument*/List_1_GetEnumerator_m2016754886_RuntimeMethod_var);
		V_6 = L_16;
	}

IL_007c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009d;
		}

IL_0081:
		{
			IAPListener_t2001792988 * L_17 = Enumerator_get_Current_m2005020076((&V_6), /*hidden argument*/Enumerator_get_Current_m2005020076_RuntimeMethod_var);
			V_5 = L_17;
			IAPListener_t2001792988 * L_18 = V_5;
			PurchaseEventArgs_t3033159582 * L_19 = ___e0;
			NullCheck(L_18);
			int32_t L_20 = IAPListener_ProcessPurchase_m1466356441(L_18, L_19, /*hidden argument*/NULL);
			V_0 = L_20;
			int32_t L_21 = V_0;
			if (L_21)
			{
				goto IL_009b;
			}
		}

IL_0099:
		{
			V_1 = (bool)1;
		}

IL_009b:
		{
			V_2 = (bool)1;
		}

IL_009d:
		{
			bool L_22 = Enumerator_MoveNext_m1661977231((&V_6), /*hidden argument*/Enumerator_MoveNext_m1661977231_RuntimeMethod_var);
			if (L_22)
			{
				goto IL_0081;
			}
		}

IL_00a9:
		{
			IL2CPP_LEAVE(0xBC, FINALLY_00ae);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ae;
	}

FINALLY_00ae:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3008095435((&V_6), /*hidden argument*/Enumerator_Dispose_m3008095435_RuntimeMethod_var);
		IL2CPP_END_FINALLY(174)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(174)
	{
		IL2CPP_JUMP_TBL(0xBC, IL_00bc)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00bc:
	{
		bool L_23 = V_2;
		if (L_23)
		{
			goto IL_00e6;
		}
	}
	{
		PurchaseEventArgs_t3033159582 * L_24 = ___e0;
		NullCheck(L_24);
		Product_t3244410059 * L_25 = PurchaseEventArgs_get_purchasedProduct_m3472521060(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		ProductDefinition_t339727138 * L_26 = Product_get_definition_m3366103520(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		String_t* L_27 = ProductDefinition_get_id_m1593385231(L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral2818345065, L_27, _stringLiteral2066259647, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
	}

IL_00e6:
	{
		bool L_29 = V_1;
		if (!L_29)
		{
			goto IL_00f2;
		}
	}
	{
		G_B22_0 = 0;
		goto IL_00f3;
	}

IL_00f2:
	{
		G_B22_0 = 1;
	}

IL_00f3:
	{
		return (int32_t)(G_B22_0);
	}
}
// System.Void UnityEngine.Purchasing.CodelessIAPStoreListener::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
extern "C"  void CodelessIAPStoreListener_OnPurchaseFailed_m764420626 (CodelessIAPStoreListener_t3553337218 * __this, Product_t3244410059 * ___product0, int32_t ___reason1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodelessIAPStoreListener_OnPurchaseFailed_m764420626_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	IAPButton_t2348892617 * V_1 = NULL;
	Enumerator_t1415243940  V_2;
	memset(&V_2, 0, sizeof(V_2));
	IAPListener_t2001792988 * V_3 = NULL;
	Enumerator_t1068144311  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)0;
		List_1_t3820967359 * L_0 = __this->get_activeButtons_1();
		NullCheck(L_0);
		Enumerator_t1415243940  L_1 = List_1_GetEnumerator_m3867390102(L_0, /*hidden argument*/List_1_GetEnumerator_m3867390102_RuntimeMethod_var);
		V_2 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0040;
		}

IL_0013:
		{
			IAPButton_t2348892617 * L_2 = Enumerator_get_Current_m2512686566((&V_2), /*hidden argument*/Enumerator_get_Current_m2512686566_RuntimeMethod_var);
			V_1 = L_2;
			IAPButton_t2348892617 * L_3 = V_1;
			NullCheck(L_3);
			String_t* L_4 = L_3->get_productId_2();
			Product_t3244410059 * L_5 = ___product0;
			NullCheck(L_5);
			ProductDefinition_t339727138 * L_6 = Product_get_definition_m3366103520(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			String_t* L_7 = ProductDefinition_get_id_m1593385231(L_6, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_8 = String_op_Equality_m920492651(NULL /*static, unused*/, L_4, L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0040;
			}
		}

IL_0036:
		{
			IAPButton_t2348892617 * L_9 = V_1;
			Product_t3244410059 * L_10 = ___product0;
			int32_t L_11 = ___reason1;
			NullCheck(L_9);
			IAPButton_OnPurchaseFailed_m2987162176(L_9, L_10, L_11, /*hidden argument*/NULL);
			V_0 = (bool)1;
		}

IL_0040:
		{
			bool L_12 = Enumerator_MoveNext_m1263452849((&V_2), /*hidden argument*/Enumerator_MoveNext_m1263452849_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0013;
			}
		}

IL_004c:
		{
			IL2CPP_LEAVE(0x5F, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1282679402((&V_2), /*hidden argument*/Enumerator_Dispose_m1282679402_RuntimeMethod_var);
		IL2CPP_END_FINALLY(81)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x5F, IL_005f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005f:
	{
		List_1_t3473867730 * L_13 = __this->get_activeListeners_2();
		NullCheck(L_13);
		Enumerator_t1068144311  L_14 = List_1_GetEnumerator_m2016754886(L_13, /*hidden argument*/List_1_GetEnumerator_m2016754886_RuntimeMethod_var);
		V_4 = L_14;
	}

IL_006c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0083;
		}

IL_0071:
		{
			IAPListener_t2001792988 * L_15 = Enumerator_get_Current_m2005020076((&V_4), /*hidden argument*/Enumerator_get_Current_m2005020076_RuntimeMethod_var);
			V_3 = L_15;
			IAPListener_t2001792988 * L_16 = V_3;
			Product_t3244410059 * L_17 = ___product0;
			int32_t L_18 = ___reason1;
			NullCheck(L_16);
			IAPListener_OnPurchaseFailed_m2281361415(L_16, L_17, L_18, /*hidden argument*/NULL);
			V_0 = (bool)1;
		}

IL_0083:
		{
			bool L_19 = Enumerator_MoveNext_m1661977231((&V_4), /*hidden argument*/Enumerator_MoveNext_m1661977231_RuntimeMethod_var);
			if (L_19)
			{
				goto IL_0071;
			}
		}

IL_008f:
		{
			IL2CPP_LEAVE(0xA2, FINALLY_0094);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0094;
	}

FINALLY_0094:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3008095435((&V_4), /*hidden argument*/Enumerator_Dispose_m3008095435_RuntimeMethod_var);
		IL2CPP_END_FINALLY(148)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(148)
	{
		IL2CPP_JUMP_TBL(0xA2, IL_00a2)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a2:
	{
		bool L_20 = V_0;
		if (L_20)
		{
			goto IL_00c7;
		}
	}
	{
		Product_t3244410059 * L_21 = ___product0;
		NullCheck(L_21);
		ProductDefinition_t339727138 * L_22 = Product_get_definition_m3366103520(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		String_t* L_23 = ProductDefinition_get_id_m1593385231(L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral1608353848, L_23, _stringLiteral3176408653, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
	}

IL_00c7:
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
// System.Void UnityEngine.Purchasing.DemoInventory::.ctor()
extern "C"  void DemoInventory__ctor_m3564380989 (DemoInventory_t843047770 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.DemoInventory::Fulfill(System.String)
extern "C"  void DemoInventory_Fulfill_m706429843 (DemoInventory_t843047770 * __this, String_t* ___productId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DemoInventory_Fulfill_m706429843_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___productId0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_1 = ___productId0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, _stringLiteral1855265810, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		goto IL_002a;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3485385706, /*hidden argument*/NULL);
		goto IL_003f;
	}

IL_002a:
	{
		String_t* L_3 = ___productId0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral1254475834, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		goto IL_003f;
	}

IL_003f:
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
// System.Void UnityEngine.Purchasing.IAPButton::.ctor()
extern "C"  void IAPButton__ctor_m347011403 (IAPButton_t2348892617 * __this, const RuntimeMethod* method)
{
	{
		__this->set_consumePurchase_4((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::Start()
extern "C"  void IAPButton_Start_m1145871523 (IAPButton_t2348892617 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPButton_Start_m1145871523_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Button_t4055032469 * V_0 = NULL;
	{
		Button_t4055032469 * L_0 = Component_GetComponent_TisButton_t4055032469_m3901478567(__this, /*hidden argument*/Component_GetComponent_TisButton_t4055032469_m3901478567_RuntimeMethod_var);
		V_0 = L_0;
		int32_t L_1 = __this->get_buttonType_3();
		if (L_1)
		{
			goto IL_0082;
		}
	}
	{
		Button_t4055032469 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		Button_t4055032469 * L_4 = V_0;
		NullCheck(L_4);
		ButtonClickedEvent_t48803504 * L_5 = Button_get_onClick_m2332132945(L_4, /*hidden argument*/NULL);
		intptr_t L_6 = (intptr_t)IAPButton_PurchaseProduct_m875862864_RuntimeMethod_var;
		UnityAction_t3245792599 * L_7 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_7, __this, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		UnityEvent_AddListener_m2276267359(L_5, L_7, /*hidden argument*/NULL);
	}

IL_0034:
	{
		String_t* L_8 = __this->get_productId_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral690358107, /*hidden argument*/NULL);
	}

IL_004e:
	{
		CodelessIAPStoreListener_t3553337218 * L_10 = CodelessIAPStoreListener_get_Instance_m3072254248(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_11 = __this->get_productId_2();
		NullCheck(L_10);
		bool L_12 = CodelessIAPStoreListener_HasProductInCatalog_m3373328566(L_10, L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_007d;
		}
	}
	{
		String_t* L_13 = __this->get_productId_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral256443729, L_13, _stringLiteral3452614526, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
	}

IL_007d:
	{
		goto IL_00b0;
	}

IL_0082:
	{
		int32_t L_15 = __this->get_buttonType_3();
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_00b0;
		}
	}
	{
		Button_t4055032469 * L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_17 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00b0;
		}
	}
	{
		Button_t4055032469 * L_18 = V_0;
		NullCheck(L_18);
		ButtonClickedEvent_t48803504 * L_19 = Button_get_onClick_m2332132945(L_18, /*hidden argument*/NULL);
		intptr_t L_20 = (intptr_t)IAPButton_Restore_m2955366781_RuntimeMethod_var;
		UnityAction_t3245792599 * L_21 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_21, __this, L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		UnityEvent_AddListener_m2276267359(L_19, L_21, /*hidden argument*/NULL);
	}

IL_00b0:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::OnEnable()
extern "C"  void IAPButton_OnEnable_m584573390 (IAPButton_t2348892617 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPButton_OnEnable_m584573390_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_buttonType_3();
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		CodelessIAPStoreListener_t3553337218 * L_1 = CodelessIAPStoreListener_get_Instance_m3072254248(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		CodelessIAPStoreListener_AddButton_m3372830185(L_1, __this, /*hidden argument*/NULL);
		bool L_2 = ((CodelessIAPStoreListener_t3553337218_StaticFields*)il2cpp_codegen_static_fields_for(CodelessIAPStoreListener_t3553337218_il2cpp_TypeInfo_var))->get_initializationComplete_7();
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		IAPButton_UpdateText_m735950863(__this, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::OnDisable()
extern "C"  void IAPButton_OnDisable_m1063835828 (IAPButton_t2348892617 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_buttonType_3();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		CodelessIAPStoreListener_t3553337218 * L_1 = CodelessIAPStoreListener_get_Instance_m3072254248(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		CodelessIAPStoreListener_RemoveButton_m3944861536(L_1, __this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::PurchaseProduct()
extern "C"  void IAPButton_PurchaseProduct_m875862864 (IAPButton_t2348892617 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPButton_PurchaseProduct_m875862864_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_buttonType_3();
		if (L_0)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_1 = __this->get_productId_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3847444373, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		CodelessIAPStoreListener_t3553337218 * L_3 = CodelessIAPStoreListener_get_Instance_m3072254248(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_4 = __this->get_productId_2();
		NullCheck(L_3);
		CodelessIAPStoreListener_InitiatePurchase_m520296817(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::Restore()
extern "C"  void IAPButton_Restore_m2955366781 (IAPButton_t2348892617 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPButton_Restore_m2955366781_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_buttonType_3();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0134;
		}
	}
	{
		int32_t L_1 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)18))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_2 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)19))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_3 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_0049;
		}
	}

IL_0030:
	{
		CodelessIAPStoreListener_t3553337218 * L_4 = CodelessIAPStoreListener_get_Instance_m3072254248(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_5 = CodelessIAPStoreListener_get_ExtensionProvider_m1851144105(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		RuntimeObject* L_6 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IExtensionProvider_GetExtension_TisIMicrosoftExtensions_t4020186927_m325367026_RuntimeMethod_var, L_5);
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UnityEngine.Purchasing.IMicrosoftExtensions::RestoreTransactions() */, IMicrosoftExtensions_t4020186927_il2cpp_TypeInfo_var, L_6);
		goto IL_0134;
	}

IL_0049:
	{
		int32_t L_7 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)8)))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_8 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_9 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)31)))))
		{
			goto IL_0090;
		}
	}

IL_006b:
	{
		CodelessIAPStoreListener_t3553337218 * L_10 = CodelessIAPStoreListener_get_Instance_m3072254248(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject* L_11 = CodelessIAPStoreListener_get_ExtensionProvider_m1851144105(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		RuntimeObject* L_12 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IExtensionProvider_GetExtension_TisIAppleExtensions_t4146644616_m504093785_RuntimeMethod_var, L_11);
		intptr_t L_13 = (intptr_t)IAPButton_OnTransactionsRestored_m3850310722_RuntimeMethod_var;
		Action_1_t269755560 * L_14 = (Action_1_t269755560 *)il2cpp_codegen_object_new(Action_1_t269755560_il2cpp_TypeInfo_var);
		Action_1__ctor_m981112613(L_14, __this, L_13, /*hidden argument*/Action_1__ctor_m981112613_RuntimeMethod_var);
		NullCheck(L_12);
		InterfaceActionInvoker1< Action_1_t269755560 * >::Invoke(0 /* System.Void UnityEngine.Purchasing.IAppleExtensions::RestoreTransactions(System.Action`1<System.Boolean>) */, IAppleExtensions_t4146644616_il2cpp_TypeInfo_var, L_12, L_14);
		goto IL_0134;
	}

IL_0090:
	{
		int32_t L_15 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_00d1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StandardPurchasingModule_t2580735509_il2cpp_TypeInfo_var);
		StandardPurchasingModule_t2580735509 * L_16 = StandardPurchasingModule_Instance_m2991111855(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_16);
		int32_t L_17 = StandardPurchasingModule_get_appStore_m3542603452(L_16, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_17) == ((uint32_t)4))))
		{
			goto IL_00d1;
		}
	}
	{
		CodelessIAPStoreListener_t3553337218 * L_18 = CodelessIAPStoreListener_get_Instance_m3072254248(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_18);
		RuntimeObject* L_19 = CodelessIAPStoreListener_get_ExtensionProvider_m1851144105(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		RuntimeObject* L_20 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IExtensionProvider_GetExtension_TisISamsungAppsExtensions_t2712620151_m3179222989_RuntimeMethod_var, L_19);
		intptr_t L_21 = (intptr_t)IAPButton_OnTransactionsRestored_m3850310722_RuntimeMethod_var;
		Action_1_t269755560 * L_22 = (Action_1_t269755560 *)il2cpp_codegen_object_new(Action_1_t269755560_il2cpp_TypeInfo_var);
		Action_1__ctor_m981112613(L_22, __this, L_21, /*hidden argument*/Action_1__ctor_m981112613_RuntimeMethod_var);
		NullCheck(L_20);
		InterfaceActionInvoker1< Action_1_t269755560 * >::Invoke(0 /* System.Void UnityEngine.Purchasing.ISamsungAppsExtensions::RestoreTransactions(System.Action`1<System.Boolean>) */, ISamsungAppsExtensions_t2712620151_il2cpp_TypeInfo_var, L_20, L_22);
		goto IL_0134;
	}

IL_00d1:
	{
		int32_t L_23 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0112;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StandardPurchasingModule_t2580735509_il2cpp_TypeInfo_var);
		StandardPurchasingModule_t2580735509 * L_24 = StandardPurchasingModule_Instance_m2991111855(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_24);
		int32_t L_25 = StandardPurchasingModule_get_appStore_m3542603452(L_24, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)3))))
		{
			goto IL_0112;
		}
	}
	{
		CodelessIAPStoreListener_t3553337218 * L_26 = CodelessIAPStoreListener_get_Instance_m3072254248(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_26);
		RuntimeObject* L_27 = CodelessIAPStoreListener_get_ExtensionProvider_m1851144105(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		RuntimeObject* L_28 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IExtensionProvider_GetExtension_TisIMoolahExtension_t955300474_m531513961_RuntimeMethod_var, L_27);
		intptr_t L_29 = (intptr_t)IAPButton_U3CRestoreU3Em__0_m1310047832_RuntimeMethod_var;
		Action_1_t1412811613 * L_30 = (Action_1_t1412811613 *)il2cpp_codegen_object_new(Action_1_t1412811613_il2cpp_TypeInfo_var);
		Action_1__ctor_m2866643322(L_30, __this, L_29, /*hidden argument*/Action_1__ctor_m2866643322_RuntimeMethod_var);
		NullCheck(L_28);
		InterfaceActionInvoker1< Action_1_t1412811613 * >::Invoke(0 /* System.Void UnityEngine.Purchasing.IMoolahExtension::RestoreTransactionID(System.Action`1<UnityEngine.Purchasing.RestoreTransactionIDState>) */, IMoolahExtension_t955300474_il2cpp_TypeInfo_var, L_28, L_30);
		goto IL_0134;
	}

IL_0112:
	{
		int32_t L_31 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_31;
		RuntimeObject * L_32 = Box(RuntimePlatform_t4159857903_il2cpp_TypeInfo_var, (&V_0));
		NullCheck(L_32);
		String_t* L_33 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_32);
		V_0 = *(int32_t*)UnBox(L_32);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = String_Concat_m3937257545(NULL /*static, unused*/, L_33, _stringLiteral3174583417, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
	}

IL_0134:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::OnTransactionsRestored(System.Boolean)
extern "C"  void IAPButton_OnTransactionsRestored_m3850310722 (IAPButton_t2348892617 * __this, bool ___success0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPButton_OnTransactionsRestored_m3850310722_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___success0;
		bool L_1 = L_0;
		RuntimeObject * L_2 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral1399266124, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.IAPButton::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
extern "C"  int32_t IAPButton_ProcessPurchase_m2399959099 (IAPButton_t2348892617 * __this, PurchaseEventArgs_t3033159582 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPButton_ProcessPurchase_m2399959099_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		PurchaseEventArgs_t3033159582 * L_0 = ___e0;
		PurchaseEventArgs_t3033159582 * L_1 = ___e0;
		NullCheck(L_1);
		Product_t3244410059 * L_2 = PurchaseEventArgs_get_purchasedProduct_m3472521060(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		ProductDefinition_t339727138 * L_3 = Product_get_definition_m3366103520(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4 = ProductDefinition_get_id_m1593385231(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral566216089, L_0, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		OnPurchaseCompletedEvent_t3721407765 * L_6 = __this->get_onPurchaseComplete_5();
		PurchaseEventArgs_t3033159582 * L_7 = ___e0;
		NullCheck(L_7);
		Product_t3244410059 * L_8 = PurchaseEventArgs_get_purchasedProduct_m3472521060(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		UnityEvent_1_Invoke_m3876822971(L_6, L_8, /*hidden argument*/UnityEvent_1_Invoke_m3876822971_RuntimeMethod_var);
		bool L_9 = __this->get_consumePurchase_4();
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0043;
	}

IL_0042:
	{
		G_B3_0 = 1;
	}

IL_0043:
	{
		return (int32_t)(G_B3_0);
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
extern "C"  void IAPButton_OnPurchaseFailed_m2987162176 (IAPButton_t2348892617 * __this, Product_t3244410059 * ___product0, int32_t ___reason1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPButton_OnPurchaseFailed_m2987162176_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Product_t3244410059 * L_0 = ___product0;
		int32_t L_1 = ___reason1;
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(PurchaseFailureReason_t4243987912_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral1869384512, L_0, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		OnPurchaseFailedEvent_t1729542224 * L_5 = __this->get_onPurchaseFailed_6();
		Product_t3244410059 * L_6 = ___product0;
		int32_t L_7 = ___reason1;
		NullCheck(L_5);
		UnityEvent_2_Invoke_m1220352153(L_5, L_6, L_7, /*hidden argument*/UnityEvent_2_Invoke_m1220352153_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::UpdateText()
extern "C"  void IAPButton_UpdateText_m735950863 (IAPButton_t2348892617 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPButton_UpdateText_m735950863_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Product_t3244410059 * V_0 = NULL;
	{
		CodelessIAPStoreListener_t3553337218 * L_0 = CodelessIAPStoreListener_get_Instance_m3072254248(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = __this->get_productId_2();
		NullCheck(L_0);
		Product_t3244410059 * L_2 = CodelessIAPStoreListener_GetProduct_m2762398532(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Product_t3244410059 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_008c;
		}
	}
	{
		Text_t1901882714 * L_4 = __this->get_titleText_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		Text_t1901882714 * L_6 = __this->get_titleText_7();
		Product_t3244410059 * L_7 = V_0;
		NullCheck(L_7);
		ProductMetadata_t3417118930 * L_8 = Product_get_metadata_m3202120155(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9 = ProductMetadata_get_localizedTitle_m1221956283(L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_9);
	}

IL_003e:
	{
		Text_t1901882714 * L_10 = __this->get_descriptionText_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_10, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		Text_t1901882714 * L_12 = __this->get_descriptionText_8();
		Product_t3244410059 * L_13 = V_0;
		NullCheck(L_13);
		ProductMetadata_t3417118930 * L_14 = Product_get_metadata_m3202120155(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		String_t* L_15 = ProductMetadata_get_localizedDescription_m2896855065(L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_15);
	}

IL_0065:
	{
		Text_t1901882714 * L_16 = __this->get_priceText_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_17 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_16, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_008c;
		}
	}
	{
		Text_t1901882714 * L_18 = __this->get_priceText_9();
		Product_t3244410059 * L_19 = V_0;
		NullCheck(L_19);
		ProductMetadata_t3417118930 * L_20 = Product_get_metadata_m3202120155(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_21 = ProductMetadata_get_localizedPriceString_m3339862584(L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, L_21);
	}

IL_008c:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPButton::<Restore>m__0(UnityEngine.Purchasing.RestoreTransactionIDState)
extern "C"  void IAPButton_U3CRestoreU3Em__0_m1310047832 (IAPButton_t2348892617 * __this, int32_t ___restoreTransactionIDState0, const RuntimeMethod* method)
{
	IAPButton_t2348892617 * G_B2_0 = NULL;
	IAPButton_t2348892617 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	IAPButton_t2348892617 * G_B3_1 = NULL;
	{
		int32_t L_0 = ___restoreTransactionIDState0;
		G_B1_0 = __this;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = ___restoreTransactionIDState0;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		NullCheck(G_B3_1);
		IAPButton_OnTransactionsRestored_m3850310722(G_B3_1, (bool)G_B3_0, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Purchasing.IAPButton/OnPurchaseCompletedEvent::.ctor()
extern "C"  void OnPurchaseCompletedEvent__ctor_m1414630499 (OnPurchaseCompletedEvent_t3721407765 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnPurchaseCompletedEvent__ctor_m1414630499_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m1100375389(__this, /*hidden argument*/UnityEvent_1__ctor_m1100375389_RuntimeMethod_var);
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
// System.Void UnityEngine.Purchasing.IAPButton/OnPurchaseFailedEvent::.ctor()
extern "C"  void OnPurchaseFailedEvent__ctor_m1072846695 (OnPurchaseFailedEvent_t1729542224 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnPurchaseFailedEvent__ctor_m1072846695_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m1193818750(__this, /*hidden argument*/UnityEvent_2__ctor_m1193818750_RuntimeMethod_var);
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
// System.Void UnityEngine.Purchasing.IAPConfigurationHelper::PopulateConfigurationBuilder(UnityEngine.Purchasing.ConfigurationBuilder&,UnityEngine.Purchasing.ProductCatalog)
extern "C"  void IAPConfigurationHelper_PopulateConfigurationBuilder_m499335247 (RuntimeObject * __this /* static, unused */, ConfigurationBuilder_t1618671084 ** ___builder0, ProductCatalog_t3178009003 * ___catalog1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPConfigurationHelper_PopulateConfigurationBuilder_m499335247_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProductCatalogItem_t2141417634 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	IDs_t697119909 * V_2 = NULL;
	StoreID_t694756629 * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	List_1_t748791510 * V_5 = NULL;
	ProductCatalogPayout_t924351538 * V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ProductCatalog_t3178009003 * L_0 = ___catalog1;
		NullCheck(L_0);
		RuntimeObject* L_1 = ProductCatalog_get_allValidProducts_m4098778243(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.ProductCatalogItem>::GetEnumerator() */, IEnumerable_1_t1121270523_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_010c;
		}

IL_0011:
		{
			RuntimeObject* L_3 = V_1;
			NullCheck(L_3);
			ProductCatalogItem_t2141417634 * L_4 = InterfaceFuncInvoker0< ProductCatalogItem_t2141417634 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Purchasing.ProductCatalogItem>::get_Current() */, IEnumerator_1_t2573988102_il2cpp_TypeInfo_var, L_3);
			V_0 = L_4;
			V_2 = (IDs_t697119909 *)NULL;
			ProductCatalogItem_t2141417634 * L_5 = V_0;
			NullCheck(L_5);
			RuntimeObject* L_6 = ProductCatalogItem_get_allStoreIDs_m1117403521(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			int32_t L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.StoreID>::get_Count() */, ICollection_1_t3522908863_il2cpp_TypeInfo_var, L_6);
			if ((((int32_t)L_7) <= ((int32_t)0)))
			{
				goto IL_0086;
			}
		}

IL_002b:
		{
			IDs_t697119909 * L_8 = (IDs_t697119909 *)il2cpp_codegen_object_new(IDs_t697119909_il2cpp_TypeInfo_var);
			IDs__ctor_m3084577891(L_8, /*hidden argument*/NULL);
			V_2 = L_8;
			ProductCatalogItem_t2141417634 * L_9 = V_0;
			NullCheck(L_9);
			RuntimeObject* L_10 = ProductCatalogItem_get_allStoreIDs_m1117403521(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			RuntimeObject* L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.StoreID>::GetEnumerator() */, IEnumerable_1_t3969576814_il2cpp_TypeInfo_var, L_10);
			V_4 = L_11;
		}

IL_003e:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0066;
			}

IL_0043:
			{
				RuntimeObject* L_12 = V_4;
				NullCheck(L_12);
				StoreID_t694756629 * L_13 = InterfaceFuncInvoker0< StoreID_t694756629 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Purchasing.StoreID>::get_Current() */, IEnumerator_1_t1127327097_il2cpp_TypeInfo_var, L_12);
				V_3 = L_13;
				IDs_t697119909 * L_14 = V_2;
				StoreID_t694756629 * L_15 = V_3;
				NullCheck(L_15);
				String_t* L_16 = L_15->get_id_1();
				StringU5BU5D_t1281789340* L_17 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)1));
				StoreID_t694756629 * L_18 = V_3;
				NullCheck(L_18);
				String_t* L_19 = L_18->get_store_0();
				NullCheck(L_17);
				ArrayElementTypeCheck (L_17, L_19);
				(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_19);
				NullCheck(L_14);
				IDs_Add_m701658157(L_14, L_16, L_17, /*hidden argument*/NULL);
			}

IL_0066:
			{
				RuntimeObject* L_20 = V_4;
				NullCheck(L_20);
				bool L_21 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_0043;
				}
			}

IL_0072:
			{
				IL2CPP_LEAVE(0x86, FINALLY_0077);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0077;
		}

FINALLY_0077:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_22 = V_4;
				if (!L_22)
				{
					goto IL_0085;
				}
			}

IL_007e:
			{
				RuntimeObject* L_23 = V_4;
				NullCheck(L_23);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_23);
			}

IL_0085:
			{
				IL2CPP_END_FINALLY(119)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(119)
		{
			IL2CPP_JUMP_TBL(0x86, IL_0086)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0086:
		{
			List_1_t748791510 * L_24 = (List_1_t748791510 *)il2cpp_codegen_object_new(List_1_t748791510_il2cpp_TypeInfo_var);
			List_1__ctor_m2305681321(L_24, /*hidden argument*/List_1__ctor_m2305681321_RuntimeMethod_var);
			V_5 = L_24;
			ProductCatalogItem_t2141417634 * L_25 = V_0;
			NullCheck(L_25);
			RuntimeObject* L_26 = ProductCatalogItem_get_Payouts_m2797682776(L_25, /*hidden argument*/NULL);
			NullCheck(L_26);
			RuntimeObject* L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.ProductCatalogPayout>::GetEnumerator() */, IEnumerable_1_t4199171723_il2cpp_TypeInfo_var, L_26);
			V_7 = L_27;
		}

IL_009a:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00d0;
			}

IL_009f:
			{
				RuntimeObject* L_28 = V_7;
				NullCheck(L_28);
				ProductCatalogPayout_t924351538 * L_29 = InterfaceFuncInvoker0< ProductCatalogPayout_t924351538 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Purchasing.ProductCatalogPayout>::get_Current() */, IEnumerator_1_t1356922006_il2cpp_TypeInfo_var, L_28);
				V_6 = L_29;
				List_1_t748791510 * L_30 = V_5;
				ProductCatalogPayout_t924351538 * L_31 = V_6;
				NullCheck(L_31);
				String_t* L_32 = ProductCatalogPayout_get_typeString_m1592615968(L_31, /*hidden argument*/NULL);
				ProductCatalogPayout_t924351538 * L_33 = V_6;
				NullCheck(L_33);
				String_t* L_34 = ProductCatalogPayout_get_subtype_m14551717(L_33, /*hidden argument*/NULL);
				ProductCatalogPayout_t924351538 * L_35 = V_6;
				NullCheck(L_35);
				double L_36 = ProductCatalogPayout_get_quantity_m4150851878(L_35, /*hidden argument*/NULL);
				ProductCatalogPayout_t924351538 * L_37 = V_6;
				NullCheck(L_37);
				String_t* L_38 = ProductCatalogPayout_get_data_m3404911945(L_37, /*hidden argument*/NULL);
				PayoutDefinition_t3571684064 * L_39 = (PayoutDefinition_t3571684064 *)il2cpp_codegen_object_new(PayoutDefinition_t3571684064_il2cpp_TypeInfo_var);
				PayoutDefinition__ctor_m2238149198(L_39, L_32, L_34, L_36, L_38, /*hidden argument*/NULL);
				NullCheck(L_30);
				List_1_Add_m1667627229(L_30, L_39, /*hidden argument*/List_1_Add_m1667627229_RuntimeMethod_var);
			}

IL_00d0:
			{
				RuntimeObject* L_40 = V_7;
				NullCheck(L_40);
				bool L_41 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_40);
				if (L_41)
				{
					goto IL_009f;
				}
			}

IL_00dc:
			{
				IL2CPP_LEAVE(0xF0, FINALLY_00e1);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00e1;
		}

FINALLY_00e1:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_42 = V_7;
				if (!L_42)
				{
					goto IL_00ef;
				}
			}

IL_00e8:
			{
				RuntimeObject* L_43 = V_7;
				NullCheck(L_43);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_43);
			}

IL_00ef:
			{
				IL2CPP_END_FINALLY(225)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(225)
		{
			IL2CPP_JUMP_TBL(0xF0, IL_00f0)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_00f0:
		{
			ConfigurationBuilder_t1618671084 ** L_44 = ___builder0;
			ProductCatalogItem_t2141417634 * L_45 = V_0;
			NullCheck(L_45);
			String_t* L_46 = L_45->get_id_0();
			ProductCatalogItem_t2141417634 * L_47 = V_0;
			NullCheck(L_47);
			int32_t L_48 = L_47->get_type_1();
			IDs_t697119909 * L_49 = V_2;
			List_1_t748791510 * L_50 = V_5;
			NullCheck(L_50);
			PayoutDefinitionU5BU5D_t274752929* L_51 = List_1_ToArray_m566969820(L_50, /*hidden argument*/List_1_ToArray_m566969820_RuntimeMethod_var);
			NullCheck((*((ConfigurationBuilder_t1618671084 **)L_44)));
			ConfigurationBuilder_AddProduct_m2562156830((*((ConfigurationBuilder_t1618671084 **)L_44)), L_46, L_48, L_49, (RuntimeObject*)(RuntimeObject*)L_51, /*hidden argument*/NULL);
		}

IL_010c:
		{
			RuntimeObject* L_52 = V_1;
			NullCheck(L_52);
			bool L_53 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_52);
			if (L_53)
			{
				goto IL_0011;
			}
		}

IL_0117:
		{
			IL2CPP_LEAVE(0x129, FINALLY_011c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_011c;
	}

FINALLY_011c:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_54 = V_1;
			if (!L_54)
			{
				goto IL_0128;
			}
		}

IL_0122:
		{
			RuntimeObject* L_55 = V_1;
			NullCheck(L_55);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_55);
		}

IL_0128:
		{
			IL2CPP_END_FINALLY(284)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(284)
	{
		IL2CPP_JUMP_TBL(0x129, IL_0129)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0129:
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
// System.Void UnityEngine.Purchasing.IAPListener::.ctor()
extern "C"  void IAPListener__ctor_m3021671227 (IAPListener_t2001792988 * __this, const RuntimeMethod* method)
{
	{
		__this->set_consumePurchase_2((bool)1);
		__this->set_dontDestroyOnLoad_3((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPListener::OnEnable()
extern "C"  void IAPListener_OnEnable_m1345961561 (IAPListener_t2001792988 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPListener_OnEnable_m1345961561_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_dontDestroyOnLoad_3();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		CodelessIAPStoreListener_t3553337218 * L_2 = CodelessIAPStoreListener_get_Instance_m3072254248(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		CodelessIAPStoreListener_AddListener_m1184156019(L_2, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.IAPListener::OnDisable()
extern "C"  void IAPListener_OnDisable_m3790782379 (IAPListener_t2001792988 * __this, const RuntimeMethod* method)
{
	{
		CodelessIAPStoreListener_t3553337218 * L_0 = CodelessIAPStoreListener_get_Instance_m3072254248(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		CodelessIAPStoreListener_RemoveListener_m1699040040(L_0, __this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.IAPListener::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
extern "C"  int32_t IAPListener_ProcessPurchase_m1466356441 (IAPListener_t2001792988 * __this, PurchaseEventArgs_t3033159582 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPListener_ProcessPurchase_m1466356441_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		PurchaseEventArgs_t3033159582 * L_0 = ___e0;
		PurchaseEventArgs_t3033159582 * L_1 = ___e0;
		NullCheck(L_1);
		Product_t3244410059 * L_2 = PurchaseEventArgs_get_purchasedProduct_m3472521060(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		ProductDefinition_t339727138 * L_3 = Product_get_definition_m3366103520(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4 = ProductDefinition_get_id_m1593385231(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral1573936324, L_0, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		OnPurchaseCompletedEvent_t1675809258 * L_6 = __this->get_onPurchaseComplete_4();
		PurchaseEventArgs_t3033159582 * L_7 = ___e0;
		NullCheck(L_7);
		Product_t3244410059 * L_8 = PurchaseEventArgs_get_purchasedProduct_m3472521060(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		UnityEvent_1_Invoke_m3876822971(L_6, L_8, /*hidden argument*/UnityEvent_1_Invoke_m3876822971_RuntimeMethod_var);
		bool L_9 = __this->get_consumePurchase_2();
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0043;
	}

IL_0042:
	{
		G_B3_0 = 1;
	}

IL_0043:
	{
		return (int32_t)(G_B3_0);
	}
}
// System.Void UnityEngine.Purchasing.IAPListener::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
extern "C"  void IAPListener_OnPurchaseFailed_m2281361415 (IAPListener_t2001792988 * __this, Product_t3244410059 * ___product0, int32_t ___reason1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAPListener_OnPurchaseFailed_m2281361415_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Product_t3244410059 * L_0 = ___product0;
		int32_t L_1 = ___reason1;
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(PurchaseFailureReason_t4243987912_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral1932203019, L_0, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		OnPurchaseFailedEvent_t800864861 * L_5 = __this->get_onPurchaseFailed_5();
		Product_t3244410059 * L_6 = ___product0;
		int32_t L_7 = ___reason1;
		NullCheck(L_5);
		UnityEvent_2_Invoke_m1220352153(L_5, L_6, L_7, /*hidden argument*/UnityEvent_2_Invoke_m1220352153_RuntimeMethod_var);
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
// System.Void UnityEngine.Purchasing.IAPListener/OnPurchaseCompletedEvent::.ctor()
extern "C"  void OnPurchaseCompletedEvent__ctor_m1839664264 (OnPurchaseCompletedEvent_t1675809258 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnPurchaseCompletedEvent__ctor_m1839664264_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m1100375389(__this, /*hidden argument*/UnityEvent_1__ctor_m1100375389_RuntimeMethod_var);
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
// System.Void UnityEngine.Purchasing.IAPListener/OnPurchaseFailedEvent::.ctor()
extern "C"  void OnPurchaseFailedEvent__ctor_m2200691269 (OnPurchaseFailedEvent_t800864861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnPurchaseFailedEvent__ctor_m2200691269_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m1193818750(__this, /*hidden argument*/UnityEvent_2__ctor_m1193818750_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
