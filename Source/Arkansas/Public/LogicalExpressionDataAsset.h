#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=EBoolResult -FallbackName=EBoolResult
#include "LogicalExpression.h"
#include "LogicalExpressionDataAsset.generated.h"

class ULogicalExpressionDataAsset;

UCLASS(Blueprintable)
class ULogicalExpressionDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLogicalExpression LogicalExpression;
    
    ULogicalExpressionDataAsset();

    UFUNCTION(BlueprintCallable)
    static void EvaluateLogicalExpressionDataAsset(ULogicalExpressionDataAsset* LogicalExpressionDataAsset, EBoolResult& OutResult);
    
};

