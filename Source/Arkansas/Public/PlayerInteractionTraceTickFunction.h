#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "PlayerInteractionTraceTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FPlayerInteractionTraceTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    ARKANSAS_API FPlayerInteractionTraceTickFunction();
};

template<>
struct TStructOpsTypeTraits<FPlayerInteractionTraceTickFunction> : public TStructOpsTypeTraitsBase2<FPlayerInteractionTraceTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

