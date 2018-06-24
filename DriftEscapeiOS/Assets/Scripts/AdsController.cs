using UnityEngine;
using TMPro;
#if UNITY_ADS
using UnityEngine.Advertisements; // only compile Ads code on supported platforms
#endif

public class AdsController : MonoBehaviour
{

    public int rewardCoinsAmount;
    public TextMeshProUGUI coinText; 
    

    public void ShowDefaultAd(string placementId)
    {
    #if UNITY_ADS
        if (!Advertisement.IsReady())
        {
            Debug.Log("Ads not ready for default placement");
            return;
        }

        Advertisement.Show(placementId);
    #endif
    }

    public void ShowRewardedAd()
    {
        const string RewardedPlacementId = "rewardedVideo";
        Debug.Log("Running1");
    #if UNITY_ADS
        if (!Advertisement.IsReady(RewardedPlacementId))
        {
            Debug.Log(string.Format("Ads not ready for placement '{0}'", RewardedPlacementId));
            return;
        }
        Debug.Log("Running");
        var options = new ShowOptions { resultCallback = HandleShowResult };
        Advertisement.Show(RewardedPlacementId, options);
    #endif
    }

    #if UNITY_ADS
    private void HandleShowResult(ShowResult result)
    {
        switch (result)
        {
            case ShowResult.Finished:
                Debug.Log("The ad was successfully shown.");
                //
                // YOUR CODE TO REWARD THE GAMER

                // Give coins etc.

                //Retrieve Player's current coins 
                //Increase 200
                int currentCoins = PlayerPrefs.GetInt("Coins");
                PlayerPrefs.SetInt("Coins", currentCoins + rewardCoinsAmount);

                //Update Coins Text 
                coinText.SetText(PlayerPrefs.GetInt("Coins").ToString());
                Debug.Log("Showned");
                break;
            case ShowResult.Skipped:
                Debug.Log("The ad was skipped before reaching the end.");
                break;
            case ShowResult.Failed:
                Debug.LogError("The ad failed to be shown.");
                break;
        }
    }

    #endif
}