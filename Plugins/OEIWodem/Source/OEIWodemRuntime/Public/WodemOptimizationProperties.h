#pragma once
#include "CoreMinimal.h"
#include "WodemOptimizationProperties.generated.h"

USTRUCT(BlueprintType)
struct FWodemOptimizationProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCollision;
    
    OEIWODEMRUNTIME_API FWodemOptimizationProperties();
};

