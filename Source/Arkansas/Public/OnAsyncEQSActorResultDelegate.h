#pragma once
#include "CoreMinimal.h"
#include "OnAsyncEQSActorResultDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnAsyncEQSActorResult, bool, bSuccess, AActor*, BestActor);

