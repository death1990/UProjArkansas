#pragma once
#include "CoreMinimal.h"
#include "OnResurrectedDelegate.generated.h"

class UHealthComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnResurrected, UHealthComponent*, HealthComponent);

