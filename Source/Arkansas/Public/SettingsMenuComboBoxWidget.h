#pragma once
#include "CoreMinimal.h"
#include "SettingsMenuSlotEntryBase.h"
#include "SettingsMenuComboBoxWidget.generated.h"

class UComboBoxWidget;
class USettingsMenuWidget;
class UTextOnlyDropdownWidget;
class UUserSetting;

UCLASS(Abstract, Blueprintable, Deprecated, EditInlineNew, NotPlaceable)
class UDEPRECATED_SettingsMenuComboBoxWidget : public USettingsMenuSlotEntryBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UComboBoxWidget* ComboBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UUserSetting* UserSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USettingsMenuWidget* SettingsMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextOnlyDropdownWidget* DropdownBox;
    
public:
    UDEPRECATED_SettingsMenuComboBoxWidget();

};

