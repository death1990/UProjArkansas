#pragma once
#include "CoreMinimal.h"
#include "CallbackArrayBase.h"
#include "FloatCallbackArray.generated.h"

USTRUCT(BlueprintType)
struct FFloatCallbackArray : public FCallbackArrayBase {
    GENERATED_BODY()
public:
    OEISETTINGS_API FFloatCallbackArray();
};

