#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyleContainerBase -FallbackName=SlateWidgetStyleContainerBase
#include "IndianaComboBoxStyle.h"
#include "IndianaComboBoxWidgetStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UIndianaComboBoxWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIndianaComboBoxStyle ComboBoxStyle;
    
    UIndianaComboBoxWidgetStyle();

};

