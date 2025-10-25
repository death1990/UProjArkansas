#pragma once
#include "CoreMinimal.h"
#include "LookAtTriggerComponent.h"
#include "InteractLookAtTriggerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ARKANSAS_API UInteractLookAtTriggerComponent : public ULookAtTriggerComponent {
    GENERATED_BODY()
public:
    UInteractLookAtTriggerComponent(const FObjectInitializer& ObjectInitializer);

};

