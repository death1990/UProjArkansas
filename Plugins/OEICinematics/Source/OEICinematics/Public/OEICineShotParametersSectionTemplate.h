#pragma once
#include "CoreMinimal.h"
#include "OEICineShotParametersSectionTemplateParameters.h"
#include "OEICineShotSectionTemplate.h"
#include "OEICineShotParametersSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FOEICineShotParametersSectionTemplate : public FOEICineShotSectionTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOEICineShotParametersSectionTemplateParameters Params;
    
    OEICINEMATICS_API FOEICineShotParametersSectionTemplate();
};

