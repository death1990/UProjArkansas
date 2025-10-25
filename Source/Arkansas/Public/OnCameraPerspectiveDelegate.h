#pragma once
#include "CoreMinimal.h"
#include "ECameraPerspective.h"
#include "OnCameraPerspectiveDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCameraPerspective, ECameraPerspective, Perspective);

