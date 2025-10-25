#pragma once
#include "CoreMinimal.h"
#include "OnPlayerPerspectiveChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerPerspectiveChanged, bool, bIsThirdPerson);

