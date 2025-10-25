#pragma once
#include "CoreMinimal.h"
#include "CallbackArrayBase.h"
#include "BoolCallbackArray.generated.h"

USTRUCT(BlueprintType)
struct FBoolCallbackArray : public FCallbackArrayBase {
    GENERATED_BODY()
public:
    OEISETTINGS_API FBoolCallbackArray();
};

