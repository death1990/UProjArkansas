#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "OEICineShotTrackTemplate.generated.h"

USTRUCT(BlueprintType)
struct FOEICineShotTrackTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    OEICINEMATICS_API FOEICineShotTrackTemplate();
};

