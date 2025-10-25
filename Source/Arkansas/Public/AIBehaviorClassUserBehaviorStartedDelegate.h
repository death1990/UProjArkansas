#pragma once
#include "CoreMinimal.h"
#include "AIBehaviorClassUserBehaviorStartedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FAIBehaviorClassUserBehaviorStarted, UObject*, User, const FString&, BehaviorId, bool, bStartResult);

