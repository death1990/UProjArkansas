#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackImplementation -FallbackName=MovieSceneTrackImplementation
#include "OEICineShotTrackImplementation.generated.h"

USTRUCT(BlueprintType)
struct FOEICineShotTrackImplementation : public FMovieSceneTrackImplementation {
    GENERATED_BODY()
public:
    OEICINEMATICS_API FOEICineShotTrackImplementation();
};

