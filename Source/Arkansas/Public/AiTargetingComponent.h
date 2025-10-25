#pragma once
#include "CoreMinimal.h"
#include "TargetingComponent.h"
#include "AiTargetingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAiTargetingComponent : public UTargetingComponent {
    GENERATED_BODY()
public:
    UAiTargetingComponent(const FObjectInitializer& ObjectInitializer);

};

