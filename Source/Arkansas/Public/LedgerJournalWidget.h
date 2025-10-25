#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "LedgerJournalWidget.generated.h"

class UCodexJournal;
class UHeaderFlavorTextWidget;
class ULedgerRadioWidget;
class UNavigationGroupWidget;
class UQuestJournalWidget;
class UScrollBox;
class UScrollingWidgetGroup;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ULedgerJournalWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavigationGroupWidget* NavigationBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* PageScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UScrollingWidgetGroup* ScrollingWidgetGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestJournalWidget* QuestJournal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULedgerRadioWidget* RadioJournal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCodexJournal* CodexJournal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHeaderFlavorTextWidget* HeaderFlavorTextWidget;
    
public:
    ULedgerJournalWidget();

};

