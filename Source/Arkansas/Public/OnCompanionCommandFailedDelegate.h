#pragma once
#include "CoreMinimal.h"
#include "ECompanionCommand.h"
#include "OnCompanionCommandFailedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCompanionCommandFailed, ECompanionCommand, CompanionCommand, int32, CompanionIndex);

