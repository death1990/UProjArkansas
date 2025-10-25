#pragma once
#include "CoreMinimal.h"
#include "LogicalExpression.h"
#include "TerminalExitJumpToNodeEvent.generated.h"

USTRUCT(BlueprintType)
struct FTerminalExitJumpToNodeEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLogicalExpression EventCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 JumpToNode;
    
    ARKANSAS_API FTerminalExitJumpToNodeEvent();
};

