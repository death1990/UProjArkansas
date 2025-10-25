#pragma once
#include "CoreMinimal.h"
#include "AnimatingProgressBarWidget.h"
#include "EFlashAnimType.h"
#include "EFlashTriggerEvents.h"
#include "FlashingProgressBarWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API UFlashingProgressBarWidget : public UAnimatingProgressBarWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFlashTriggerEvents, EFlashAnimType> FlashingMap;
    
    UFlashingProgressBarWidget();

    UFUNCTION(BlueprintCallable)
    void SetPulsingStatus(bool FlashOn);
    
};

