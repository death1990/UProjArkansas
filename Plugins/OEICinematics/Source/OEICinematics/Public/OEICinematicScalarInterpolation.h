#pragma once
#include "CoreMinimal.h"
#include "EOEICinematicScalarInterpolationMode.h"
#include "OEICinematicScalarAccelerationInterpolation.h"
#include "OEICinematicScalarSpringInterpolation.h"
#include "OEICinematicScalarInterpolation.generated.h"

USTRUCT(BlueprintType)
struct OEICINEMATICS_API FOEICinematicScalarInterpolation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOEICinematicScalarInterpolationMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOEICinematicScalarAccelerationInterpolation AccelerationParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOEICinematicScalarSpringInterpolation SpringParameters;
    
    FOEICinematicScalarInterpolation();
};

