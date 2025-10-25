#pragma once
#include "CoreMinimal.h"
#include "IndianaInterfaceUserWidget.h"
#include "SystemMapInterfaceWidget.generated.h"

class USystemMapWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USystemMapInterfaceWidget : public UIndianaInterfaceUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USystemMapWidget* SystemMapWidget;
    
public:
    USystemMapInterfaceWidget();

};

