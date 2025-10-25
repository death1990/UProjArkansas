#pragma once
#include "CoreMinimal.h"
#include "SettingsMenuSlotEntryBase.h"
#include "SettingsMenuToggleWidget.generated.h"

class UButtonBase;
class USettingsMenuWidget;
class UTextBlockBase;
class UUserSetting;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USettingsMenuToggleWidget : public USettingsMenuSlotEntryBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* ToggleButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* ToggleOffText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* ToggleOnText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ToggleOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ToggleOn;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UUserSetting* UserSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USettingsMenuWidget* SettingsMenu;
    
public:
    USettingsMenuToggleWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnValueInitialized(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void OnValueChanged();
    
};

