#pragma once
#include "CoreMinimal.h"
#include "ComboBoxSelectedOptionBase.h"
#include "ColorPickerSelectedOptionWidget.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UColorPickerSelectedOptionWidget : public UComboBoxSelectedOptionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ColorImage;
    
public:
    UColorPickerSelectedOptionWidget();

};

