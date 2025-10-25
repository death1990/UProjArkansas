#pragma once
#include "CoreMinimal.h"
#include "EventTriggeredParams.h"
#include "CastingParams.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FCastingParams : public FEventTriggeredParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationOverride;
    
    ARKANSAS_API FCastingParams();
};

