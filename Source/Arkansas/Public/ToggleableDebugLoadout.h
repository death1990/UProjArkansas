#pragma once
#include "CoreMinimal.h"
#include "ToggleableDebugLoadout.generated.h"

class UDebugCharacterLoadout;

USTRUCT(BlueprintType)
struct FToggleableDebugLoadout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UDebugCharacterLoadout> LoadoutToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    ARKANSAS_API FToggleableDebugLoadout();
};

