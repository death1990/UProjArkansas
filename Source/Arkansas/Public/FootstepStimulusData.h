#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ESpecialMovementEvent.h"
#include "FootstepStimulus.h"
#include "FootstepStimulusOverride.h"
#include "SpecialMovementStimulusProperties.h"
#include "FootstepStimulusData.generated.h"

UCLASS(Blueprintable)
class UFootstepStimulusData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFootstepStimulus DefaultFootstepStimulus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFootstepStimulusOverride> FootstepStimulusOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESpecialMovementEvent, FSpecialMovementStimulusProperties> SpecialEventStimulus;
    
public:
    UFootstepStimulusData();

};

