#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIFlowCharts -ObjectName=ECompletionStatus -FallbackName=ECompletionStatus
#include "IndianaUserWidget.h"
#include "QuestAddendumWidget.generated.h"

class UOWRichTextBlockBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UQuestAddendumWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOWRichTextBlockBase* AddendumTextBlock;
    
public:
    UQuestAddendumWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectiveStatusChange(ECompletionStatus ObjectiveCompletion);
    
};

