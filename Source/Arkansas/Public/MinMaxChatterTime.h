#pragma once
#include "CoreMinimal.h"
#include "MinMaxChatterTime.generated.h"

USTRUCT(BlueprintType)
struct FMinMaxChatterTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float max;
    
    ARKANSAS_API FMinMaxChatterTime();
};

