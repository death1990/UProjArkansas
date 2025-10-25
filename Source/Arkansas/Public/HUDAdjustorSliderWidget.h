#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "SliderEvent.h"
#include "HUDAdjustorSliderWidget.generated.h"

class UButtonBase;
class USliderBase;
class UTextBlockBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UHUDAdjustorSliderWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* GamepadButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* OptionTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* ValueTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USliderBase* SliderWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* RestartButton;
    
public:
    UHUDAdjustorSliderWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnValueChangedCB(const FSliderEvent& Event);
    
};

