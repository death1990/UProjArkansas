#pragma once
#include "CoreMinimal.h"
#include "ECalledShotCameraStep.h"
#include "OnCameraCutDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCameraCut, AActor*, CameraOwner, ECalledShotCameraStep, CameraStep);

