#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIGlobalVariables -ObjectName=GlobalVariableConditional -FallbackName=GlobalVariableConditional
#include "GlobalQuestEventNode.h"
#include "GlobalQuestEventGlobalVariableNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FGlobalQuestEventGlobalVariableNode : public FGlobalQuestEventNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalVariableConditional Conditional;
    
public:
    FGlobalQuestEventGlobalVariableNode();
};

