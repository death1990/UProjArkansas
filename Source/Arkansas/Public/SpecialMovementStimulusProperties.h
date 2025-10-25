#pragma once
#include "CoreMinimal.h"
#include "FootstepStimulus.h"
#include "SpecialEventStimulusOverride.h"
#include "SpecialMovementStimulusProperties.generated.h"

USTRUCT(BlueprintType)
struct FSpecialMovementStimulusProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFootstepStimulus DefaultEventStimulus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpecialEventStimulusOverride> EventStimulusOverrides;
    
    ARKANSAS_API FSpecialMovementStimulusProperties();
};

