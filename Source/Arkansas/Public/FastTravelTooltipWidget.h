#pragma once
#include "CoreMinimal.h"
#include "ToolTipContentWidget.h"
#include "FastTravelTooltipWidget.generated.h"

class UTextBlockBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFastTravelTooltipWidget : public UToolTipContentWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* FastTravelTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* RestrictionTextBlock;
    
public:
    UFastTravelTooltipWidget();

};

