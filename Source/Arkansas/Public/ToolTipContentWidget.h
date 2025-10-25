#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "ToolTipContentWidget.generated.h"

class UPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UToolTipContentWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* CycleInputPanel;
    
public:
    UToolTipContentWidget();

};

