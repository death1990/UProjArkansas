#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "OEICineShotParametersSectionParams.h"
#include "OEICineShotParametersSectionTemplateParameters.generated.h"

USTRUCT(BlueprintType)
struct FOEICineShotParametersSectionTemplateParameters : public FOEICineShotParametersSectionParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber SectionStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber SectionEndTime;
    
    OEICINEMATICS_API FOEICineShotParametersSectionTemplateParameters();
};

