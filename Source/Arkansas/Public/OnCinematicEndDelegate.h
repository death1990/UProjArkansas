#pragma once
#include "CoreMinimal.h"
#include "OnCinematicEndDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCinematicEnd, bool, bSkipped);

