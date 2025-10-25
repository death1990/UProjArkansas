#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIFlowCharts -ObjectName=EQuestState -FallbackName=EQuestState
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIFlowCharts -ObjectName=QuestReference -FallbackName=QuestReference
#include "EEqualityComparison.h"
#include "InteractableRequirement.h"
#include "QuestRequirement.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UQuestRequirement : public UInteractableRequirement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestReference QuestReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEqualityComparison Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestState ComparisonState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefault;
    
public:
    UQuestRequirement();

};

