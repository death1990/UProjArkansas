#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "GadgetDisplayWidget.generated.h"

class UInputWidget;
class UOverlay;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API UGadgetDisplayWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* CycleOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputWidget* InputWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisabledIconOpacity;
    
public:
    UGadgetDisplayWidget();

};

