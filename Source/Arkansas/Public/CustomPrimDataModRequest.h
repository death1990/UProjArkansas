#pragma once
#include "CoreMinimal.h"
#include "CustomPrimDataModRequest.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FCustomPrimDataModRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BlendCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BlendOutCurve;
    
    ARKANSAS_API FCustomPrimDataModRequest();
};

