#pragma once
#include "CoreMinimal.h"
#include "AIBehaviorClassUserBehaviorCompletedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FAIBehaviorClassUserBehaviorCompleted, UObject*, User, const FString&, BehaviorId, bool, bCompletedResult);

