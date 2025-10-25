#pragma once
#include "CoreMinimal.h"
#include "SpeakerPlaybackStartedDynamicDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FSpeakerPlaybackStartedDynamicDelegate, bool, bPlaybackStarted, float, EstimatedDuration, float, EstimatedMaxRadius);

