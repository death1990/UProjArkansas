#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LogicalExpressionBaseDataAsset -FallbackName=LogicalExpressionBaseDataAsset
#include "LogicalGroupedExpression.h"
#include "GenericLogicDataAsset.generated.h"

UCLASS(Blueprintable)
class UGenericLogicDataAsset : public ULogicalExpressionBaseDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLogicalGroupedExpression Conditions;
    
    UGenericLogicDataAsset();

};

