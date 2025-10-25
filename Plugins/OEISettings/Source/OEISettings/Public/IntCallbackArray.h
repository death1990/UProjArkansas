#pragma once
#include "CoreMinimal.h"
#include "CallbackArrayBase.h"
#include "IntCallbackArray.generated.h"

USTRUCT(BlueprintType)
struct FIntCallbackArray : public FCallbackArrayBase {
    GENERATED_BODY()
public:
    OEISETTINGS_API FIntCallbackArray();
};

