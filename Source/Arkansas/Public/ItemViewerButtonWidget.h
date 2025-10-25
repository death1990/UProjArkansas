#pragma once
#include "CoreMinimal.h"
#include "ButtonBase.h"
#include "DraggableInterface.h"
#include "ItemViewerButtonWidget.generated.h"

UCLASS(Abstract, Blueprintable)
class UItemViewerButtonWidget : public UButtonBase, public IDraggableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTooltip;
    
public:
    UItemViewerButtonWidget();


    // Fix for true pure virtual functions not being implemented
};

