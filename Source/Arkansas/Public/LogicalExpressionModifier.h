#pragma once
#include "CoreMinimal.h"
#include "LogicalExpression.h"
#include "LogicalExpressionModifier.generated.h"

USTRUCT(BlueprintType)
struct FLogicalExpressionModifier {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Bonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLogicalExpression LogicalExpression;
    
    ARKANSAS_API FLogicalExpressionModifier();
};

