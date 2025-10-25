#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MapBeaconCache.h"
#include "BeaconManager.generated.h"

class AActor;
class UShipDestinationData;

UCLASS(Blueprintable)
class UBeaconManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FMapBeaconCache> BeaconCaches;
    
public:
    UBeaconManager();

protected:
    UFUNCTION(BlueprintCallable)
    void OnShipChangedLocation(const UShipDestinationData* NewShipLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnRegionAware();
    
public:
    UFUNCTION(BlueprintCallable)
    static void BP_ShowTransitionBeacon(AActor* ActorIn);
    
    UFUNCTION(BlueprintCallable)
    static void BP_ShowBeacon(const FGuid& ActorId);
    
    UFUNCTION(BlueprintCallable)
    static void BP_HideTransitionBeacon(AActor* ActorIn);
    
    UFUNCTION(BlueprintCallable)
    static void BP_HideBeacon(const FGuid& ActorId);
    
};

