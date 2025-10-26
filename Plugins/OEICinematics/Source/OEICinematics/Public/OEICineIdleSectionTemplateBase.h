#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "OEICineIdleSectionTemplateBase.generated.h"

USTRUCT(BlueprintType)
struct FOEICineIdleSectionTemplateBase : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    OEICINEMATICS_API FOEICineIdleSectionTemplateBase();
};

