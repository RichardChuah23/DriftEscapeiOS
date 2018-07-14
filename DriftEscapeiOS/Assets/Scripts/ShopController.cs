using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Purchasing; 

public class ShopController : MonoBehaviour, IStoreListener {

    void Awake()
    {
        ConfigurationBuilder builder = ConfigurationBuilder.Instance(StandardPurchasingModule.Instance());
        //builder.AddProduct("levelpackfoo", ProductType.NonConsumable);
        UnityPurchasing.Initialize(this, builder);

    }

    public void OnInitialized(IStoreController controller, IExtensionProvider extensions) {
        Debug.Log("Manually Initializing");
    }
    public void OnInitializeFailed(InitializationFailureReason error) {

        Debug.Log("Manual Initialize Failed ! "); 
    }
    public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs e) { 
        return PurchaseProcessingResult.Complete; }
    public void OnPurchaseFailed(Product item, PurchaseFailureReason r) {
    }
}
