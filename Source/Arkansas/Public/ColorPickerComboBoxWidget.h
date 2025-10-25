#pragma once
#include "CoreMinimal.h"
#include "ComboBoxBaseWidget.h"
#include "Templates/SubclassOf.h"
#include "ColorPickerComboBoxWidget.generated.h"

class UColorPickerContainerWidget;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UColorPickerComboBoxWidget : public UComboBoxBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UColorPickerContainerWidget> ContainerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UColorPickerContainerWidget* ColorPickerContainer;
    
public:
    UColorPickerComboBoxWidget();

protected:
    UFUNCTION(BlueprintCallable)
    UUserWidget* GetContents();
    
};

