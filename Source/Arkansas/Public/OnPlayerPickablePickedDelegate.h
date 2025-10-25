#pragma once
#include "CoreMinimal.h"
#include "OnPlayerPickablePickedDelegate.generated.h"

class APickable;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerPickablePicked, APickable*, Pickable);

