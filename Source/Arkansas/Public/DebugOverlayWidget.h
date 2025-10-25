#pragma once
#include "CoreMinimal.h"
#include "IndianaInterfaceUserWidget.h"
#include "DebugOverlayWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class UDebugOverlayWidget : public UIndianaInterfaceUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* OverlayImage;
    
public:
    UDebugOverlayWidget();

};

