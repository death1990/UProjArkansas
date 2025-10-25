#pragma once
#include "CoreMinimal.h"
#include "ECustomSpeakerCameraTrackingTargetType.h"
#include "SpeakerCustomCameraData.generated.h"

class ACameraActor;

USTRUCT(BlueprintType)
struct FSpeakerCustomCameraData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ACameraActor> Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAsTrackingTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECustomSpeakerCameraTrackingTargetType TrackingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableCameraShake;
    
    ARKANSAS_API FSpeakerCustomCameraData();
};

