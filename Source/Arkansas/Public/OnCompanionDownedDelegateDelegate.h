#pragma once
#include "CoreMinimal.h"
#include "OnCompanionDownedDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCompanionDownedDelegate, AActor*, Companion);

