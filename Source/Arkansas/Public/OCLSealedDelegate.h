#pragma once
#include "CoreMinimal.h"
#include "OCLSealedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOCLSealed, AActor*, Initiator, bool, IgnoreSound, bool, InstantAnimation);

