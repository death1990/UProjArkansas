#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "DragVisualsWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UDragVisualsWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UDragVisualsWidget();

};

