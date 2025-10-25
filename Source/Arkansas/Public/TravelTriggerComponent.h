#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "InteractionDescription.h"
#include "TravelInitiatedDelegate.h"
#include "TravelTriggerComponent.generated.h"

class AActor;
class UPointOfInterestData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ARKANSAS_API UTravelTriggerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPointOfInterestData* TravelDestinationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideTransition;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTravelInitiated OnTravelInitiated;
    
    UTravelTriggerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnOverlapActor(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnOpen(AActor* OpeningActor);
    
    UFUNCTION(BlueprintCallable)
    void OnInteract(const FInteractionDescription& Description);
    
    UFUNCTION(BlueprintCallable)
    FString GetDebugString() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetAreaName() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetAreaDescription() const;
    
};

