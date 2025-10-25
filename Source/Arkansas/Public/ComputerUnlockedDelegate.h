#pragma once
#include "CoreMinimal.h"
#include "ComputerUnlockedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FComputerUnlocked, AActor*, Initiator);

