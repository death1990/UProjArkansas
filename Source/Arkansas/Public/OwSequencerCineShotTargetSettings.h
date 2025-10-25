#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneObjectBindingID -FallbackName=MovieSceneObjectBindingID
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICinematics -ObjectName=OEICineShotTargetSettings -FallbackName=OEICineShotTargetSettings
#include "OwSequencerCineShotTargetSettings.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UOwSequencerCineShotTargetSettings : public UOEICineShotTargetSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneObjectBindingID TargetActorBinding;
    
    UOwSequencerCineShotTargetSettings();

};

