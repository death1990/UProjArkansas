#pragma once
#include "CoreMinimal.h"
#include "ToolTipContentWidget.h"
#include "PointOfInterestTooltipWidget.generated.h"

class UTextBlockBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UPointOfInterestTooltipWidget : public UToolTipContentWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* PointOfInterestTextBlock;
    
public:
    UPointOfInterestTooltipWidget();

};

