#pragma once
#include "CoreMinimal.h"
#include "OCLAnimateOpenDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOCLAnimateOpen, AActor*, Initiator, bool, InFrontOfDoor, bool, IgnoreSound, bool, InstantAnimation);

