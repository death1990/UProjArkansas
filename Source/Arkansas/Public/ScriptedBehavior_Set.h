#pragma once
#include "CoreMinimal.h"
#include "BehaviorSettings_Set.h"
#include "LogicalExpression.h"
#include "ScriptedBehavior_Set.generated.h"

USTRUCT(BlueprintType)
struct FScriptedBehavior_Set : public FBehaviorSettings_Set {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLogicalExpression GlobalVariableExpression;
    
    ARKANSAS_API FScriptedBehavior_Set();
};

