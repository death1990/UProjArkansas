#pragma once
#include "CoreMinimal.h"
#include "OnCompanionOutlineDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCompanionOutline, bool, bEnable);

