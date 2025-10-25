#pragma once
#include "CoreMinimal.h"
#include "ESpecialObsidianID.h"
#include "OnCompanionRegistrationChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCompanionRegistrationChange, ESpecialObsidianID, SpecialObsidianID);

