#pragma once
#include "CoreMinimal.h"
#include "EExpressionComponentType.h"
#include "ELogicalOperator.h"
#include "ExpressionComponent.h"
#include "ConditionalExpression.generated.h"

USTRUCT(BlueprintType)
struct OEISCRIPTING_API FConditionalExpression : public FExpressionComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EExpressionComponentType> ComponentTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ComponentIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELogicalOperator ChildOperator;
    
public:
    FConditionalExpression();
};

