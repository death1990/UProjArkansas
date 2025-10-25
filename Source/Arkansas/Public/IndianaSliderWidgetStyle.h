#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyleContainerBase -FallbackName=SlateWidgetStyleContainerBase
#include "IndianaSliderStyle.h"
#include "IndianaSliderWidgetStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UIndianaSliderWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIndianaSliderStyle SliderStyle;
    
    UIndianaSliderWidgetStyle();

};

