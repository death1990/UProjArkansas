#pragma once
#include "CoreMinimal.h"
#include "EOEIPlatformServiceProvider.h"
#include "PlatformServiceLoginStatusChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FPlatformServiceLoginStatusChangedDelegate, bool, OldAvailability, bool, NewAvailability, EOEIPlatformServiceProvider, Provider);

