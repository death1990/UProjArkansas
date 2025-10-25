#pragma once
#include "CoreMinimal.h"
#include "MotionWarpAnimationSetData.h"
#include "ParkourTypeAnimations.generated.h"

USTRUCT(BlueprintType)
struct FParkourTypeAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMotionWarpAnimationSetData ClimbUpStandingAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMotionWarpAnimationSetData ClimbUpCrouchingAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMotionWarpAnimationSetData ClimbOverAnimations;
    
    ARKANSAS_API FParkourTypeAnimations();
};

