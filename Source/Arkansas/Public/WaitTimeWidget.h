#pragma once
#include "CoreMinimal.h"
#include "ERestType.h"
#include "IndianaInterfaceUserWidget.h"
#include "SliderEvent.h"
#include "WaitData.h"
#include "WaitTimeWidget.generated.h"

class UButtonBase;
class UInputLabelGroupWidget;
class UTextBlockBase;
class UWaitTimeSliderWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UWaitTimeWidget : public UIndianaInterfaceUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* WaitDurationTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* WaitTimeResultTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* ConfirmButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* CancelButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputLabelGroupWidget* LabelGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWaitTimeSliderWidget* RestSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* MinTimeTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* MaxTimeTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERestType, FWaitData> WaitTypeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultStartingTime;
    
public:
    UWaitTimeWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSliderValueChanged(const FSliderEvent& Event);
    
    UFUNCTION(BlueprintCallable)
    void OnInputConfirm();
    
    UFUNCTION(BlueprintCallable)
    void OnInputBack();
    
};

