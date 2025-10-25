#pragma once
#include "CoreMinimal.h"
#include "LevelDifferenceRangeScalar.generated.h"

USTRUCT(BlueprintType)
struct FLevelDifferenceRangeScalar {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scalar;
    
    ARKANSAS_API FLevelDifferenceRangeScalar();
};

