#pragma once
#include "CoreMinimal.h"
#include "LedgerDescriptionPanel.h"
#include "JournalDescriptionPanel.generated.h"

class UGenericCollapsableListEntry;
class UInputLabelGroupWidget;
class UMoviePlayerBase;
class UOWRichTextBlockBase;
class UPanelWidget;
class USizeBox;

UCLASS(Blueprintable, EditInlineNew)
class UJournalDescriptionPanel : public ULedgerDescriptionPanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOWRichTextBlockBase* HeaderBodyRichText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputLabelGroupWidget* InputLabelGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* DescriptionSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* SymbolPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* MoviePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMoviePlayerBase* MoviePlayer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGenericCollapsableListEntry* FocusedEntry;
    
public:
    UJournalDescriptionPanel();

};

