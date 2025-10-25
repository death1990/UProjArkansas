#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ESpecialMovementEvent.h"
#include "FootstepVisuals.h"
#include "FootstepVisualsOverride.h"
#include "SpecialMovementVisualProperties.h"
#include "FootstepVisualData.generated.h"

UCLASS(Blueprintable)
class UFootstepVisualData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFootstepVisuals DefaultFootstepVisuals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFootstepVisualsOverride> FootstepVisualOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESpecialMovementEvent, FSpecialMovementVisualProperties> SpecialEventVisuals;
    
public:
    UFootstepVisualData();

};

