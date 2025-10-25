#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyle -FallbackName=SlateWidgetStyle
#include "IndianaComboButtonStyle.h"
#include "IndianaComboBoxStyle.generated.h"

USTRUCT(BlueprintType)
struct FIndianaComboBoxStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIndianaComboButtonStyle ComboButtonStyle;
    
    ARKANSAS_API FIndianaComboBoxStyle();
};

