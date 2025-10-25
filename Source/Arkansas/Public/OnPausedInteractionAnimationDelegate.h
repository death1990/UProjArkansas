#pragma once
#include "CoreMinimal.h"
#include "OnPausedInteractionAnimationDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPausedInteractionAnimation, bool, bIsInteractionPaused);

