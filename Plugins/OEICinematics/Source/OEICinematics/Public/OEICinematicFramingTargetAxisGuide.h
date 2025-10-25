#pragma once
#include "CoreMinimal.h"
#include "EOEICinematicFramingTargetAxisGuideMode.h"
#include "OEICinematicFramingTargetAxisGuide.generated.h"

USTRUCT(BlueprintType)
struct OEICINEMATICS_API FOEICinematicFramingTargetAxisGuide {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EOEICinematicFramingTargetAxisGuideMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float ScreenAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BoxAlignment;
    
    FOEICinematicFramingTargetAxisGuide();
};

