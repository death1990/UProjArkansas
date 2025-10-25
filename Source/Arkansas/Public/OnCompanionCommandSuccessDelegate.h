#pragma once
#include "CoreMinimal.h"
#include "ECompanionCommand.h"
#include "OnCompanionCommandSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCompanionCommandSuccess, ECompanionCommand, CompanionCommand, int32, CompanionIndex);

