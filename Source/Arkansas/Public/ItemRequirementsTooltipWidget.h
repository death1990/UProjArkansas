#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "ItemRequirementsTooltipWidget.generated.h"

class UItemToolTipWidget;
class UWBRequirementPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UItemRequirementsTooltipWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemToolTipWidget* TooltipPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWBRequirementPanelWidget* RequirementPanel;
    
    UItemRequirementsTooltipWidget();

};

