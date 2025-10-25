#pragma once
#include "CoreMinimal.h"
#include "AIBehaviorClassUserBehaviorAbortedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FAIBehaviorClassUserBehaviorAborted, UObject*, User, const FString&, BehaviorId);

