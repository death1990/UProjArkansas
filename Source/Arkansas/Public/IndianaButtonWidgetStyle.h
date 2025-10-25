#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyleContainerBase -FallbackName=SlateWidgetStyleContainerBase
#include "IndianaButtonStyle.h"
#include "IndianaButtonWidgetStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UIndianaButtonWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIndianaButtonStyle ButtonStyle;
    
    UIndianaButtonWidgetStyle();

};

