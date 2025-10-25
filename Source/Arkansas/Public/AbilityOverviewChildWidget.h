#pragma once
#include "CoreMinimal.h"
#include "EAbilityPosition.h"
#include "IndianaUserWidget.h"
#include "AbilityOverviewChildWidget.generated.h"

class UOverlay;
class UProgressBar;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAbilityOverviewChildWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* AbilityProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* AbilityContainerOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PulseDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PulseInterpExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAbilityPosition AbilityPosition;
    
public:
    UAbilityOverviewChildWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAbilityCooldownComplete();
    
};

