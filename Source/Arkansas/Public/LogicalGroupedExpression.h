#pragma once
#include "CoreMinimal.h"
#include "LogicalExpression.h"
#include "LogicalExpressionGroup.h"
#include "LogicalGroupedExpression.generated.h"

USTRUCT(BlueprintType)
struct FLogicalGroupedExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLogicalExpression BaseExpression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLogicalExpressionGroup> AdditionalExpressions;
    
    ARKANSAS_API FLogicalGroupedExpression();
};

