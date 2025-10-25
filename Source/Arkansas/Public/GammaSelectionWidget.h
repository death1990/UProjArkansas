#pragma once
#include "CoreMinimal.h"
#include "IndianaInterfaceUserWidget.h"
#include "OnGammaSelectFinishedDelegate.h"
#include "SliderEvent.h"
#include "Templates/SubclassOf.h"
#include "GammaSelectionWidget.generated.h"

class UButtonBase;
class UHorizontalBox;
class UInputLabelGroupWidget;
class UTextBlockBase;
class UUserSettingFloat;
class UWaitTimeSliderWidget;

UCLASS(Blueprintable, EditInlineNew)
class UGammaSelectionWidget : public UIndianaInterfaceUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGammaSelectFinished OnGammaSelectFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserSettingFloat> GammaSettingClassRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultGamma;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GammaStepSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWaitTimeSliderWidget* GammaSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* GammaValueTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* DescriptionTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputLabelGroupWidget* InputLabelGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* InputLabelsHorizontalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* AcceptButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* DefaultButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UUserSettingFloat* GammaSetting;
    
public:
    UGammaSelectionWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnRestoreDefaults();
    
    UFUNCTION(BlueprintCallable)
    void OnLocStringChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnGammaChanged(const FSliderEvent& Event);
    
    UFUNCTION(BlueprintCallable)
    void OnGammaAccepted();
    
    UFUNCTION(BlueprintCallable)
    void ApplyDefaults();
    
};

