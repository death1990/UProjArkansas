#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "TPVAsyncWhiskerTraceTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FTPVAsyncWhiskerTraceTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    ARKANSAS_API FTPVAsyncWhiskerTraceTickFunction();
};

template<>
struct TStructOpsTypeTraits<FTPVAsyncWhiskerTraceTickFunction> : public TStructOpsTypeTraitsBase2<FTPVAsyncWhiskerTraceTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

