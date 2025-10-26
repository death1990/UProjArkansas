#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "OEICineShotTrackTemplate.generated.h"

USTRUCT(BlueprintType)
struct FOEICineShotTrackTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    OEICINEMATICS_API FOEICineShotTrackTemplate();
};

