#pragma once
#include "CoreMinimal.h"
#include "LogicalExpression.h"
#include "DecisionOption.generated.h"

USTRUCT(BlueprintType)
struct FDecisionOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLogicalExpression Conditional;
    
    ARKANSAS_API FDecisionOption();
};

