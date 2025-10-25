#pragma once
#include "CoreMinimal.h"
#include "EOEIPlatformServiceProvider.h"
#include "OEIPlatformServiceOnLoginCompleteMulticastDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOEIPlatformServiceOnLoginCompleteMulticast, bool, bSuccess, FText, Error, EOEIPlatformServiceProvider, Provider, bool, bAutoLoginOnly);

