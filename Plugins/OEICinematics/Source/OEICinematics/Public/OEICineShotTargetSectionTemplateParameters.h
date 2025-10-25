#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "OEICineShotTargetSectionParams.h"
#include "OEICineShotTargetSectionTemplateParameters.generated.h"

USTRUCT(BlueprintType)
struct FOEICineShotTargetSectionTemplateParameters : public FOEICineShotTargetSectionParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber SectionStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber SectionEndTime;
    
    OEICINEMATICS_API FOEICineShotTargetSectionTemplateParameters();
};

