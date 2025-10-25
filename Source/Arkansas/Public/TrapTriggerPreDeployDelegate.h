#pragma once
#include "CoreMinimal.h"
#include "TrapTriggerPreDeployDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrapTriggerPreDeploy, float, SecondsTilDeployment);

