#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "OEICineShotSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FOEICineShotSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    OEICINEMATICS_API FOEICineShotSectionTemplate();
};

