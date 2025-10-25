#pragma once
#include "CoreMinimal.h"
#include "OEICineShotSectionTemplate.h"
#include "OEICineShotTargetSectionTemplateParameters.h"
#include "OEICineShotTargetSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FOEICineShotTargetSectionTemplate : public FOEICineShotSectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOEICineShotTargetSectionTemplateParameters Params;
    
public:
    OEICINEMATICS_API FOEICineShotTargetSectionTemplate();
};

