#pragma once
#include "CoreMinimal.h"
#include "AISettings_RangedOptions.generated.h"

USTRUCT(BlueprintType)
struct FAISettings_RangedOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StationaryWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuickRangeWeight;
    
    ARKANSAS_API FAISettings_RangedOptions();
};

