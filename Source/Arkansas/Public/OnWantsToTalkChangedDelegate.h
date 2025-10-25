#pragma once
#include "CoreMinimal.h"
#include "ESpecialObsidianID.h"
#include "OnWantsToTalkChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWantsToTalkChanged, ESpecialObsidianID, SpecialObsidianID);

