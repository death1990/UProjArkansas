#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIScripting -ObjectName=ScriptEvent -FallbackName=ScriptEvent
#include "QuestReference.h"
#include "StartQuestEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OEIFLOWCHARTS_API UStartQuestEvent : public UScriptEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestReference Quest;
    
    UStartQuestEvent();

};

