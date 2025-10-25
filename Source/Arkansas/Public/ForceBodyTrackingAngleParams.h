#pragma once
#include "CoreMinimal.h"
#include "ForceBodyTrackingAngleParams.generated.h"

USTRUCT(BlueprintType)
struct FForceBodyTrackingAngleParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceExactAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    ARKANSAS_API FForceBodyTrackingAngleParams();
};

