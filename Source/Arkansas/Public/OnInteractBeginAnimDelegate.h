#pragma once
#include "CoreMinimal.h"
#include "OnInteractBeginAnimDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractBeginAnim, AActor*, AnimatingActor);

