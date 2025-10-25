#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AISightTargetInterface -FallbackName=AISightTargetInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SearchPoint.generated.h"

class AIndianaAiController;

UCLASS(Blueprintable, NotPlaceable)
class ASearchPoint : public AActor, public IAISightTargetInterface {
    GENERATED_BODY()
public:
    ASearchPoint(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_IsRegisteredController(AIndianaAiController* Controller) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_IsNearestRegisteredController(AIndianaAiController* Controller) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIndianaAiController* K2_GetNearestRegisteredController(float& Distance) const;
    

    // Fix for true pure virtual functions not being implemented
};

