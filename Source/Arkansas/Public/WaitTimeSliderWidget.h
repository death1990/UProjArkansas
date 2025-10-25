#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "SliderEvent.h"
#include "WaitTimeSliderWidget.generated.h"

class UAkAudioEvent;
class UButtonBase;
class USliderBase;

UCLASS(Blueprintable, EditInlineNew)
class UWaitTimeSliderWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* LeftButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* RightButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USliderBase* Slider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* GamepadNextAudio;
    
public:
    UWaitTimeSliderWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnValueChanged(const FSliderEvent& Event);
    
};

