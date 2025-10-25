#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIFlowCharts -ObjectName=EQuestState -FallbackName=EQuestState
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIFlowCharts -ObjectName=QuestReference -FallbackName=QuestReference
#include "EEqualityComparison.h"
#include "QuestStateConditional.generated.h"

USTRUCT(BlueprintType)
struct FQuestStateConditional {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestReference QuestReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEqualityComparison Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestState ComparisonState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefault;
    
    ARKANSAS_API FQuestStateConditional();
};

