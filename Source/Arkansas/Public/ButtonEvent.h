#pragma once
#include "CoreMinimal.h"
#include "ComponentEvent.h"
#include "ButtonEvent.generated.h"

USTRUCT(BlueprintType)
struct FButtonEvent : public FComponentEvent {
    GENERATED_BODY()
public:
    ARKANSAS_API FButtonEvent();
};

