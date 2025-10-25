#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PointDamageEvent -FallbackName=PointDamageEvent
#include "IndianaPointDamageEvent.generated.h"

USTRUCT(BlueprintType)
struct FIndianaPointDamageEvent : public FPointDamageEvent {
    GENERATED_BODY()
public:
    ARKANSAS_API FIndianaPointDamageEvent();
};

