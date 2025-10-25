#pragma once
#include "CoreMinimal.h"
#include "FootstepMatch.h"
#include "FootstepVisuals.h"
#include "FootstepVisualsOverride.generated.h"

USTRUCT(BlueprintType)
struct FFootstepVisualsOverride : public FFootstepMatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFootstepVisuals Visuals;
    
    ARKANSAS_API FFootstepVisualsOverride();
};

