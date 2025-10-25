#pragma once
#include "CoreMinimal.h"
#include "EAudioLogPlayState.h"
#include "OnAudioLogPlayStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAudioLogPlayStateChanged, EAudioLogPlayState, PlayStateIn);

