#pragma once
#include "CoreMinimal.h"
#include "Evaluation\MovieSceneTrackImplementation.h"

#include "OEICineShotTrackImplementation.generated.h"

USTRUCT(BlueprintType)
struct FOEICineShotTrackImplementation : public FMovieSceneTrackImplementation {
    GENERATED_BODY()
public:
    OEICINEMATICS_API FOEICineShotTrackImplementation();
};

