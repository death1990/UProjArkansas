#pragma once
#include "CoreMinimal.h"
#include "DynamicEffectProperties.h"
#include "EventTriggeredParams.generated.h"

USTRUCT(BlueprintType)
struct FEventTriggeredParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynamicEffectProperties DynamicEffectProperties;
    
    ARKANSAS_API FEventTriggeredParams();
};

