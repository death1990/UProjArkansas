#pragma once
#include "CoreMinimal.h"
#include "LogicalExpression.h"
#include "TutorialTipData.h"
#include "ConditionalizedLoadingTips.generated.h"

USTRUCT(BlueprintType)
struct FConditionalizedLoadingTips {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialTipData Tip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLogicalExpression Conditional;
    
public:
    ARKANSAS_API FConditionalizedLoadingTips();
};

