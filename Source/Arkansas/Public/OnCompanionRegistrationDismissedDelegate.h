#pragma once
#include "CoreMinimal.h"
#include "ESpecialObsidianID.h"
#include "OnCompanionRegistrationDismissedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCompanionRegistrationDismissed, ESpecialObsidianID, SpecialObsidianID);

