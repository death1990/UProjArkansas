#pragma once
#include "CoreMinimal.h"
#include "OnActorEndOverlapDelegate.generated.h"

class AActor;
class ADynamicEmitterVolume;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActorEndOverlap, AActor*, Actor, ADynamicEmitterVolume*, Volume);

