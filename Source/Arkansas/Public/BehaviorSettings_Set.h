#pragma once
#include "CoreMinimal.h"
#include "BehaviorSettings_Set.generated.h"

class UAISettings_Behavior;

USTRUCT(BlueprintType)
struct FBehaviorSettings_Set {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    UAISettings_Behavior* DefaultBehavior;
    
    ARKANSAS_API FBehaviorSettings_Set();
};

