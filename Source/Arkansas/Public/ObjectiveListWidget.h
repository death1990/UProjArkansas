#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "Templates/SubclassOf.h"
#include "ObjectiveListWidget.generated.h"

class UPanelWidget;
class UQuestObjectiveTitleWidget;
class UScrollBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UObjectiveListWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ObjectiveList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ObjectiveEntryPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UQuestObjectiveTitleWidget> ObjectiveListEntry;
    
public:
    UObjectiveListWidget();

};

