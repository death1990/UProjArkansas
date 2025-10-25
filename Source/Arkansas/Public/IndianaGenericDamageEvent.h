#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageEvent -FallbackName=DamageEvent
#include "IndianaGenericDamageEvent.generated.h"

USTRUCT(BlueprintType)
struct FIndianaGenericDamageEvent : public FDamageEvent {
    GENERATED_BODY()
public:
    ARKANSAS_API FIndianaGenericDamageEvent();
};

