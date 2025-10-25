#pragma once
#include "CoreMinimal.h"
#include "AIBehaviorClassUserBehaviorLoadClassDataDelegate.generated.h"

class UAIBehaviorClass;
class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FAIBehaviorClassUserBehaviorLoadClassData, UObject*, User, const FString&, BehaviorId, UAIBehaviorClass*, BehaviorClassInstance);

