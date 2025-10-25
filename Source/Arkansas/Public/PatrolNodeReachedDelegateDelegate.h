#pragma once
#include "CoreMinimal.h"
#include "PatrolNodeReachedDelegateDelegate.generated.h"

class AIndianaCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPatrolNodeReachedDelegate, AIndianaCharacter*, Character);

