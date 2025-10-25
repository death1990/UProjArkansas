#pragma once
#include "CoreMinimal.h"
#include "SpeakerPlaybackStoppedDynamicDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FSpeakerPlaybackStoppedDynamicDelegate, bool, bFinished);

