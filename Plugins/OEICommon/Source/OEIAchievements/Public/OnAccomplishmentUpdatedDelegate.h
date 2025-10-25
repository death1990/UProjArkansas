#pragma once
#include "CoreMinimal.h"
#include "AccomplishmentData.h"
#include "OnAccomplishmentUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAccomplishmentUpdated, const FName&, AccomplishmentID, const FAccomplishmentData&, AccomplishmentData);

