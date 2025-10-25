#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "ItemViewerPannerWidget.generated.h"

class UButtonBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UItemViewerPannerWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* LeftButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* RightButton;
    
public:
    UItemViewerPannerWidget();

};

