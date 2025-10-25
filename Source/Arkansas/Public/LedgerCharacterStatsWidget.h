#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "LedgerCharacterStatsWidget.generated.h"

class UScrollBox;
class UScrollingWidgetGroup;
class UStatsSummaryPageWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ULedgerCharacterStatsWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UScrollingWidgetGroup* ScrollingWidgetGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* PageScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsSummaryPageWidget* SummaryPage;
    
public:
    ULedgerCharacterStatsWidget();

};

