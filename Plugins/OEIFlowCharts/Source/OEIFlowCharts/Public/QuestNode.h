#pragma once
#include "CoreMinimal.h"
#include "EExperienceType.h"
#include "FlowChartNode.h"
#include "QuestEndState.h"
#include "QuestNode.generated.h"

USTRUCT(BlueprintType)
struct OEIFLOWCHARTS_API FQuestNode : public FFlowChartNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestEndState> EndStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> AlternateDescriptionIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EExperienceType ExperienceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExperienceLevel;
    
public:
    FQuestNode();
};

