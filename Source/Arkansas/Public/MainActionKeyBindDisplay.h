#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "InputLabelDescription.h"
#include "MainActionKeyBindDisplay.generated.h"

class UInputLabelWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMainActionKeyBindDisplay : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputLabelWidget* InputLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputLabelDescription LabelDescription;
    
public:
    UMainActionKeyBindDisplay();

};

