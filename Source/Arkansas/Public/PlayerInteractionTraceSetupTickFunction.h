#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "PlayerInteractionTraceSetupTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FPlayerInteractionTraceSetupTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    ARKANSAS_API FPlayerInteractionTraceSetupTickFunction();
};

template<>
struct TStructOpsTypeTraits<FPlayerInteractionTraceSetupTickFunction> : public TStructOpsTypeTraitsBase2<FPlayerInteractionTraceSetupTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

