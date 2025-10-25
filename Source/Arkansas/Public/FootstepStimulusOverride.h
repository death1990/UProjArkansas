#pragma once
#include "CoreMinimal.h"
#include "FootstepMatch.h"
#include "FootstepStimulus.h"
#include "FootstepStimulusOverride.generated.h"

USTRUCT(BlueprintType)
struct FFootstepStimulusOverride : public FFootstepMatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFootstepStimulus Stimulus;
    
    ARKANSAS_API FFootstepStimulusOverride();
};

