#pragma once
#include "CoreMinimal.h"
#include "BodyRotationProperties.generated.h"

USTRUCT(BlueprintType)
struct FBodyRotationProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationInitiateThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationCompleteTolerance;
    
    ARKANSAS_API FBodyRotationProperties();
};

