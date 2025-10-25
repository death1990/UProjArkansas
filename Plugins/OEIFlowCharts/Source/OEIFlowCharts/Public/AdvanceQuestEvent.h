#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIScripting -ObjectName=ScriptEvent -FallbackName=ScriptEvent
#include "QuestReference.h"
#include "AdvanceQuestEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OEIFLOWCHARTS_API UAdvanceQuestEvent : public UScriptEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestReference Quest;
    
    UAdvanceQuestEvent();

};

