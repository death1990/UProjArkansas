#pragma once
#include "CoreMinimal.h"
#include "EPresentationModeCameraFadeType.h"
#include "FadeConversationInstanceDelegate.generated.h"

class UOwConversationInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFadeConversationInstance, UOwConversationInstance*, Instance, EPresentationModeCameraFadeType, FadeType);

