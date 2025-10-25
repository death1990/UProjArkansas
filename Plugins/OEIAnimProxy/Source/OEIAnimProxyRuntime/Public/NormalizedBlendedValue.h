#pragma once
#include "CoreMinimal.h"
#include "NormalizedBlendedValue.generated.h"

USTRUCT(BlueprintType)
struct FNormalizedBlendedValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float NormalizedValue;
    
    OEIANIMPROXYRUNTIME_API FNormalizedBlendedValue();
};

