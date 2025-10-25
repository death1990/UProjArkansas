#pragma once
#include "CoreMinimal.h"
#include "ImpactAIDataOverride.generated.h"

USTRUCT(BlueprintType)
struct FImpactAIDataOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AISoundRadius;
    
    ARKANSAS_API FImpactAIDataOverride();
};

