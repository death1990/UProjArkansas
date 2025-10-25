#pragma once
#include "CoreMinimal.h"
#include "OnRPGExaminablePageExitDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRPGExaminablePageExit, int32, Page);

