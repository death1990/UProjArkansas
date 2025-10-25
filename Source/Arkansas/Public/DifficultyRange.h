#pragma once
#include "CoreMinimal.h"
#include "DifficultyRange.generated.h"

USTRUCT(BlueprintType)
struct FDifficultyRange {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RangeMinimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RangeMaximum;
    
public:
    ARKANSAS_API FDifficultyRange();
};

