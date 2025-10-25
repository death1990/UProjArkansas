#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "AIBehaviorClassUserInterface.h"
#include "AIPossessable.h"
#include "AIBehaviorBaseComponent.generated.h"

class AIndianaAiCharacter;
class AIndianaAiController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAIBehaviorBaseComponent : public UActorComponent, public IAIPossessable, public IAIBehaviorClassUserInterface {
    GENERATED_BODY()
public:
    UAIBehaviorBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIndianaAiController* GetOwningController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIndianaAiCharacter* GetOwningCharacter() const;
    

    // Fix for true pure virtual functions not being implemented
};

