#pragma once
#include "CoreMinimal.h"
#include "OnReceivedFriendlyFireDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceivedFriendlyFire, AActor*, Attacker);

