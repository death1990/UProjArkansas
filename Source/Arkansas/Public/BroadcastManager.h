#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BroadcastConversationEndedDelegate.h"
#include "BroadcastNodeChangedDelegate.h"
#include "EndBroadcastStationDelegate.h"
#include "StartBroadcastStationDelegate.h"
#include "BroadcastManager.generated.h"

class UActiveBroadcast;
class UBroadcastManager;
class UBroadcastStationAsset;
class UWorld;

UCLASS(Blueprintable)
class ARKANSAS_API UBroadcastManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartBroadcastStation OnStationStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBroadcastStation OnStationEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBroadcastConversationEnded OnStationConversationEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBroadcastNodeChanged OnBroadcastNodeChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UBroadcastStationAsset*, UActiveBroadcast*> ActiveBroadcasts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UBroadcastStationAsset*> StationsInRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UBroadcastStationAsset*> DiscoveredStations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBroadcastStationAsset* StationPreForced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBroadcastStationAsset* PlayerStation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UBroadcastStationAsset*> PendingResumingStations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UBroadcastStationAsset*, FName> PendingRTPCsToReset;
    
public:
    UBroadcastManager();

    UFUNCTION(BlueprintCallable)
    void SetRadioVolume(float NewVolume);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RadioToggle(bool bPauseGameMusic);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RadioSongOverride(const FString& Name);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RadioSkipToNode(int32 StationIndex, int32 NodeID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RadioSkipSong();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RadioSkipNode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RadioRestartSong();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RadioPlayerSetStation(int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RadioPlayerEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RadioDisplayInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RadioAllStations();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWorldCleanup(UWorld* World, bool bSessionEnded, bool bCleanupResources);
    
    UFUNCTION(BlueprintCallable)
    void OnPostMapLoad(UWorld* World);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBroadcastManager* GetBroadcastManager();
    
};

