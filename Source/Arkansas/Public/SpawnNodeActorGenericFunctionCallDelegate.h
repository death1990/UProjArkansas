#pragma once
#include "CoreMinimal.h"
#include "SpawnNodeActorGenericFunctionCallDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FSpawnNodeActorGenericFunctionCall, AActor*, Actor);

