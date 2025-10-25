#pragma once
#include "CoreMinimal.h"
#include "ComputerHackLoopStopDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FComputerHackLoopStop, AActor*, Initiator);

