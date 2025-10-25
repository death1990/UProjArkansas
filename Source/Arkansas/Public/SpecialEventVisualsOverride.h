#pragma once
#include "CoreMinimal.h"
#include "FootstepSurfaceMatch.h"
#include "FootstepVisuals.h"
#include "SpecialEventVisualsOverride.generated.h"

USTRUCT(BlueprintType)
struct FSpecialEventVisualsOverride : public FFootstepSurfaceMatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFootstepVisuals Visuals;
    
    ARKANSAS_API FSpecialEventVisualsOverride();
};

