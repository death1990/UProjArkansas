#pragma once
#include "CoreMinimal.h"
#include "SettingsMenuSlotEntryBase.h"
#include "SettingsMenuCheckBoxWidget.generated.h"

class UButtonBase;
class UCheckBoxWidget;
class USettingsMenuWidget;
class UUserSetting;

UCLASS(Abstract, Blueprintable, Deprecated, EditInlineNew, NotPlaceable)
class UDEPRECATED_SettingsMenuCheckBoxWidget : public USettingsMenuSlotEntryBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCheckBoxWidget* CheckBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UUserSetting* UserSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USettingsMenuWidget* SettingsMenu;
    
public:
    UDEPRECATED_SettingsMenuCheckBoxWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnValueChanged(const UButtonBase* Button);
    
};

