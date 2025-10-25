#pragma once
#include "CoreMinimal.h"
#include "OnMachinegunDeployedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMachinegunDeployed, bool, bDeployed);

