#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "OEICineIdleSectionTemplateBase.generated.h"

USTRUCT(BlueprintType)
struct FOEICineIdleSectionTemplateBase : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    OEICINEMATICS_API FOEICineIdleSectionTemplateBase();
};

