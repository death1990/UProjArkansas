#pragma once
#include "CoreMinimal.h"
#include "EncounterActivatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEncounterActivated, bool, bAlreadyComplete);

