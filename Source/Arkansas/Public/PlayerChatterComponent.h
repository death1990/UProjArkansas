#pragma once
#include "CoreMinimal.h"
#include "ChatterComponent.h"
#include "PlayerChatterComponent.generated.h"

class UIndianaCharMovementComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayerChatterComponent : public UChatterComponent {
    GENERATED_BODY()
public:
    UPlayerChatterComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnSprintStarted(UIndianaCharMovementComponent* InMovementComponent);
    
};

