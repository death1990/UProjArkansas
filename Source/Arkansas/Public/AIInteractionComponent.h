#pragma once
#include "CoreMinimal.h"
#include "AIPossessable.h"
#include "EAnimNotify.h"
#include "InteractionComponent.h"
#include "RelevanceOptimizationInterface.h"
#include "AIInteractionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAIInteractionComponent : public UInteractionComponent, public IAIPossessable, public IRelevanceOptimizationInterface {
    GENERATED_BODY()
public:
    UAIInteractionComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnNavigationPathUpdate();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAnimNotifyEvent(EAnimNotify AnimNotifyEvent, FName OptionalSocket);
    

    // Fix for true pure virtual functions not being implemented
};

