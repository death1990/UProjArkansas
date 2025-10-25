#pragma once
#include "CoreMinimal.h"
#include "FootstepVisuals.h"
#include "SpecialEventVisualsOverride.h"
#include "SpecialMovementVisualProperties.generated.h"

USTRUCT(BlueprintType)
struct FSpecialMovementVisualProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFootstepVisuals DefaultEventVisual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpecialEventVisualsOverride> EventVisualsOverrides;
    
    ARKANSAS_API FSpecialMovementVisualProperties();
};

