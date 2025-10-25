#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ComponentDebugInterface.h"
#include "MeleeSlotManagerComponent.generated.h"

class AIndianaAiController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMeleeSlotManagerComponent : public UActorComponent, public IComponentDebugInterface {
    GENERATED_BODY()
public:
    UMeleeSlotManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnAttackerNumMeleeSlotsRequiredChanged(AIndianaAiController* AttackerController);
    

    // Fix for true pure virtual functions not being implemented
};

