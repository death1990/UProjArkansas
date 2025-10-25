#pragma once
#include "CoreMinimal.h"
#include "OnExitVolumeEndOverlapDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnExitVolumeEndOverlap, AActor*, Actor, AActor*, OtherActor);

