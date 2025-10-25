#pragma once
#include "CoreMinimal.h"
#include "OCLAnimateCloseDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOCLAnimateClose, AActor*, Initiator, bool, IgnoreSound, bool, InstantAnimation);

