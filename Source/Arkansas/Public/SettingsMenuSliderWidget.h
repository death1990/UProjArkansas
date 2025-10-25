#pragma once
#include "CoreMinimal.h"
#include "SettingsMenuSlotEntryBase.h"
#include "SliderEvent.h"
#include "SettingsMenuSliderWidget.generated.h"

class USettingsMenuWidget;
class UTextBlockBase;
class UUserSetting;
class UWaitTimeSliderWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USettingsMenuSliderWidget : public USettingsMenuSlotEntryBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWaitTimeSliderWidget* Slider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* ValueTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UUserSetting* UserSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USettingsMenuWidget* SettingsMenu;
    
public:
    USettingsMenuSliderWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnValueChanged(const FSliderEvent& Event);
    
};

