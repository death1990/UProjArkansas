#pragma once
#include "CoreMinimal.h"
#include "FootstepStimulus.h"
#include "FootstepSurfaceMatch.h"
#include "SpecialEventStimulusOverride.generated.h"

USTRUCT(BlueprintType)
struct FSpecialEventStimulusOverride : public FFootstepSurfaceMatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFootstepStimulus Stimulus;
    
    ARKANSAS_API FSpecialEventStimulusOverride();
};

