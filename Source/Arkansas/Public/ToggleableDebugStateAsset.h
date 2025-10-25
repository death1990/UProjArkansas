#pragma once
#include "CoreMinimal.h"
#include "ToggleableDebugStateAsset.generated.h"

class UDebugCharacterStateAsset;

USTRUCT(BlueprintType)
struct FToggleableDebugStateAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDebugCharacterStateAsset> StateToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    ARKANSAS_API FToggleableDebugStateAsset();
};

