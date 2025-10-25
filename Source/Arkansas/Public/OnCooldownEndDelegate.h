#pragma once
#include "CoreMinimal.h"
#include "ECompanionCommand.h"
#include "OnCooldownEndDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCooldownEnd, ECompanionCommand, Command, int32, CompanionIndex);

