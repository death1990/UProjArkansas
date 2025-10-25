#pragma once
#include "CoreMinimal.h"
#include "ESpecialObsidianID.h"
#include "OnCompanionRegistrationUnlockedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCompanionRegistrationUnlocked, ESpecialObsidianID, SpecialObsidianID);

