#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EInteractionType.h"
#include "InteractPayload.h"
#include "InteractionDescription.h"
#include "MapFloorTrackedActor.h"
#include "Templates/SubclassOf.h"
#include "ShipDoor.generated.h"

class AIndianaCharacter;
class UAkAudioEvent;
class UBeaconComponent;
class UCompanionSelectionWidget;
class UInteractableComponent;
class UObsidianIDComponent;

UCLASS(Blueprintable)
class AShipDoor : public AActor, public IMapFloorTrackedActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCompanionSelectionWidget> CompanionSelectionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TravelSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBeaconComponent* BeaconComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* ObsidianID;
    
public:
    AShipDoor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void InitiateFastTravelFromCompanionSelect();
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<EInteractionType> GetInteractions(const FInteractionDescription& Description) const;
    
    UFUNCTION(BlueprintCallable)
    float GetInteractHoldTime(const FInteractionDescription& Description);
    
    UFUNCTION(BlueprintCallable)
    void CompleteInteract(const FInteractionDescription& Description);
    
    UFUNCTION(BlueprintCallable)
    bool CanInteract(AIndianaCharacter* Initiator, const FInteractPayload& Payload) const;
    

    // Fix for true pure virtual functions not being implemented
};

