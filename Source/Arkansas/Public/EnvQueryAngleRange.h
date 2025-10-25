#pragma once
#include "CoreMinimal.h"
#include "EnvQueryAngleRange.generated.h"

USTRUCT(BlueprintType)
struct FEnvQueryAngleRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleMinDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleMaxDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Score;
    
    ARKANSAS_API FEnvQueryAngleRange();
};

