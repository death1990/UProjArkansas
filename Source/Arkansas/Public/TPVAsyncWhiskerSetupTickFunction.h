#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "TPVAsyncWhiskerSetupTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FTPVAsyncWhiskerSetupTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    ARKANSAS_API FTPVAsyncWhiskerSetupTickFunction();
};

template<>
struct TStructOpsTypeTraits<FTPVAsyncWhiskerSetupTickFunction> : public TStructOpsTypeTraitsBase2<FTPVAsyncWhiskerSetupTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

