#pragma once
#include "CoreMinimal.h"
#include "ReticleIndicatorEntryBaseWidget.h"
#include "DamageIndicatorEntryWidget.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API UDamageIndicatorEntryWidget : public UReticleIndicatorEntryBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DamageIndicator;
    
public:
    UDamageIndicatorEntryWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnHitAnimFinished();
    
};

