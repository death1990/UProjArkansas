#pragma once
#include "CoreMinimal.h"
#include "EOEICinematicRotationInterpolationMode.h"
#include "OEICinematicRotationAccelerationInterpolation.h"
#include "OEICinematicRotationSpringInterpolation.h"
#include "OEICinematicRotationInterpolation.generated.h"

USTRUCT(BlueprintType)
struct OEICINEMATICS_API FOEICinematicRotationInterpolation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOEICinematicRotationInterpolationMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOEICinematicRotationAccelerationInterpolation AccelerationParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOEICinematicRotationSpringInterpolation SpringParameters;
    
    FOEICinematicRotationInterpolation();
};

