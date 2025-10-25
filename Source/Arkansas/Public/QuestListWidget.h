#pragma once
#include "CoreMinimal.h"
#include "GenericCollapsableList.h"
#include "QuestListWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UQuestListWidget : public UGenericCollapsableList {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCollapseWhenEmpty;
    
public:
    UQuestListWidget();

};

