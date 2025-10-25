#pragma once
#include "CoreMinimal.h"
#include "WodemBorderProperties.h"
#include "WodemLocationProperties.h"
#include "WodemOptimizationProperties.h"
#include "WodemRotationProperties.h"
#include "WodemScaleProperties.h"
#include "WodemSlopeProperties.h"
#include "WodemInstanceProperties.generated.h"

USTRUCT(BlueprintType)
struct FWodemInstanceProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWodemLocationProperties LocationProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWodemScaleProperties ScaleProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWodemRotationProperties RotationProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWodemSlopeProperties SlopeProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWodemBorderProperties BoderProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWodemOptimizationProperties OptimizationProperties;
    
    OEIWODEMRUNTIME_API FWodemInstanceProperties();
};

