#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "CrowdAnimProxyVisibilityAsyncTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FCrowdAnimProxyVisibilityAsyncTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    OEICROWDMANAGERRUNTIME_API FCrowdAnimProxyVisibilityAsyncTickFunction();
};

template<>
struct TStructOpsTypeTraits<FCrowdAnimProxyVisibilityAsyncTickFunction> : public TStructOpsTypeTraitsBase2<FCrowdAnimProxyVisibilityAsyncTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

