#pragma once
#include "CoreMinimal.h"
#include "SettingsMenuSlotEntryBase.h"
#include "SettingsMenuColorPickerWidget.generated.h"

class UColorPickerComboBoxWidget;
class UColorPickerContainerWidget;
class USettingsMenuWidget;
class UUserSetting;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USettingsMenuColorPickerWidget : public USettingsMenuSlotEntryBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UColorPickerComboBoxWidget* ColorPicker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UUserSetting* UserSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USettingsMenuWidget* SettingsMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UColorPickerContainerWidget* ColorPickerContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumEntriesPerRow;
    
public:
    USettingsMenuColorPickerWidget();

};

