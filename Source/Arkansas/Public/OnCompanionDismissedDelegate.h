#pragma once
#include "CoreMinimal.h"
#include "OnCompanionDismissedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCompanionDismissed, bool, bCompanionDied);

