#pragma once
#include "CoreMinimal.h"
#include "OnMakeshiftArmorerCraftContributionPreviewRequestedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMakeshiftArmorerCraftContributionPreviewRequested, int32, DTBonusGained, float, ProgressToNextDTBonus);

