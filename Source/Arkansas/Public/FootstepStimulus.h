#pragma once
#include "CoreMinimal.h"
#include "FootstepStimulus.generated.h"

USTRUCT(BlueprintType)
struct FFootstepStimulus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AIRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AIAwarenessGenerated;
    
    ARKANSAS_API FFootstepStimulus();
};

