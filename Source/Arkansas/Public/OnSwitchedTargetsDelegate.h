#pragma once
#include "CoreMinimal.h"
#include "OnSwitchedTargetsDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSwitchedTargets, AActor*, OldTarget, AActor*, NewTarget, bool, bRestoring);

