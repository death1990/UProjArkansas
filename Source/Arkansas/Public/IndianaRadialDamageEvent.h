#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RadialDamageEvent -FallbackName=RadialDamageEvent
#include "IndianaRadialDamageEvent.generated.h"

USTRUCT(BlueprintType)
struct FIndianaRadialDamageEvent : public FRadialDamageEvent {
    GENERATED_BODY()
public:
    ARKANSAS_API FIndianaRadialDamageEvent();
};

