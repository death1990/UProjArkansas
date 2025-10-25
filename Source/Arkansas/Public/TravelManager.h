#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TravelManager.generated.h"

class APlayerShip;
class UPointOfInterestData;
class UShipDestinationData;

UCLASS(Blueprintable)
class UTravelManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UShipDestinationData* CurrentShipLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPointOfInterestData* ActiveTravelDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPointOfInterestData* LastTravelDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> PersistedWorlds;
    
public:
    UTravelManager();

protected:
    UFUNCTION(BlueprintCallable)
    static void SetTravelCinematicModeBP(bool bNewCinematicMode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetShipLocationDebug(const FName& ShipLocation);
    
    UFUNCTION(BlueprintCallable)
    static void SetCurrentShipLocationBP(UShipDestinationData* Destination);
    
    UFUNCTION(BlueprintCallable)
    static bool IsTravelingBP();
    
    UFUNCTION(BlueprintCallable)
    static bool IsSeamlessTravelWorkingBP();
    
    UFUNCTION(BlueprintCallable)
    static bool IsInSeamlessTravelBP();
    
    UFUNCTION(BlueprintCallable)
    static bool IsInBlockingTravelBP();
    
    UFUNCTION(BlueprintCallable)
    static UShipDestinationData* GetCurrentShipLocationBP();
    
    UFUNCTION(BlueprintCallable)
    static APlayerShip* GetActivePlayerShipBP();
    
    UFUNCTION(BlueprintCallable)
    static void GameplayReadyToSeamlessTransitionBP();
    
    UFUNCTION(BlueprintCallable)
    static void BeginTravelToBP(const UPointOfInterestData* Destination, bool bPassGametime, bool bTriggerAutosave, bool bForceBlocking);
    
};

