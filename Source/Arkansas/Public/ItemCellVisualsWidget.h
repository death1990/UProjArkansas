#pragma once
#include "CoreMinimal.h"
#include "DragVisualsWidget.h"
#include "ItemCellVisualsWidget.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UItemCellVisualsWidget : public UDragVisualsWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image;
    
public:
    UItemCellVisualsWidget();

};

