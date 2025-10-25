#pragma once
#include "CoreMinimal.h"
#include "TrapArmStartDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTrapArmStart, AActor*, Initiator, uint8, ArmSeconds);

