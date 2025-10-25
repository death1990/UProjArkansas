#pragma once
#include "CoreMinimal.h"
#include "ESpecialObsidianID.h"
#include "OnCompanionRegistrationAddedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCompanionRegistrationAdded, ESpecialObsidianID, SpecialObsidianID);

