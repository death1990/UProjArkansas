#pragma once
#include "CoreMinimal.h"
#include "ButtonBase.h"
#include "ItemViewerHealthKitButtonWidget.generated.h"

UCLASS(Abstract, Blueprintable)
class UItemViewerHealthKitButtonWidget : public UButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTooltip;
    
    UItemViewerHealthKitButtonWidget();

};

