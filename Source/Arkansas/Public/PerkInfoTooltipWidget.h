#pragma once
#include "CoreMinimal.h"
#include "ToolTipContentWidget.h"
#include "PerkInfoTooltipWidget.generated.h"

class UTextBlockBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UPerkInfoTooltipWidget : public UToolTipContentWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* NameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* PerkDetailsText;
    
public:
    UPerkInfoTooltipWidget();

};

