#pragma once
#include "CoreMinimal.h"
#include "AccomplishmentData.h"
#include "OnAcomplishmentCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAcomplishmentCompleted, const FName&, AccomplishmentID, const FAccomplishmentData&, AccomplishmentData);

