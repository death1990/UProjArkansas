#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "CrowdTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FCrowdTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    OEICROWDMANAGERRUNTIME_API FCrowdTickFunction();
};

template<>
struct TStructOpsTypeTraits<FCrowdTickFunction> : public TStructOpsTypeTraitsBase2<FCrowdTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

