#pragma once
#include "CoreMinimal.h"
#include "EARCC_CameraPosition.h"
#include "OnCameraPositionChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCameraPositionChanged, EARCC_CameraPosition, NewCameraPosition);

