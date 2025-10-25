#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIFlowCharts -ObjectName=EQuestType -FallbackName=EQuestType
#include "QuestTypeGrouping.generated.h"

USTRUCT(BlueprintType)
struct FQuestTypeGrouping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EQuestType> quests;
    
    ARKANSAS_API FQuestTypeGrouping();
};

