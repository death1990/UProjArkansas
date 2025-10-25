#pragma once
#include "CoreMinimal.h"
#include "EAptitudeType.h"
#include "OnNewAptitudeSelectedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNewAptitudeSelected, EAptitudeType, Aptitude);

