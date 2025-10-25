#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ComponentDebugInterface.h"
#include "OnPlayerConversationProximityChangeDelegate.h"
#include "EnvironmentInteractionComponent.generated.h"

class ARestrictedArea;
class UIndianaCharMovementComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEnvironmentInteractionComponent : public UActorComponent, public IComponentDebugInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerConversationProximityChange OnPlayerConversationProximityChange;
    
    UEnvironmentInteractionComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnCharacterMovementUpdated(UIndianaCharMovementComponent* MovementComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInRestrictedAreaBufferVolume(ARestrictedArea* RestrictedArea) const;
    

    // Fix for true pure virtual functions not being implemented
};

