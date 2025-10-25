#pragma once
#include "CoreMinimal.h"
#include "NormalizedValueBlendParameters.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FNormalizedValueBlendParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* SettleCurve;
    
    OEIANIMPROXYRUNTIME_API FNormalizedValueBlendParameters();
};

