#pragma once
#include "CoreMinimal.h"
#include "OnEnterVolumeBeginOverlapDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEnterVolumeBeginOverlap, AActor*, Actor, AActor*, OtherActor);

