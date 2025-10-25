#pragma once
#include "CoreMinimal.h"
#include "CombatCameraStartedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCombatCameraStarted, const AActor*, FocusActor);

