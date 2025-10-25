#pragma once
#include "CoreMinimal.h"
#include "ESpecialObsidianID.h"
#include "OnCompanionRegistrationRemovedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCompanionRegistrationRemoved, ESpecialObsidianID, SpecialObsidianID);

