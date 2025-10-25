#pragma once
#include "CoreMinimal.h"
#include "OEICinematicScalarSpringInterpolation.generated.h"

USTRUCT(BlueprintType)
struct OEICINEMATICS_API FOEICinematicScalarSpringInterpolation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpringConstant;
    
    FOEICinematicScalarSpringInterpolation();
};

