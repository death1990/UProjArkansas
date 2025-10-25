#pragma once
#include "CoreMinimal.h"
#include "Gadget.h"
#include "GadgetShield.generated.h"

class UHealthComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API UGadgetShield : public UGadget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingShieldValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldBurnPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrapDR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HazardShieldBurnPerSecond;
    
public:
    UGadgetShield();

protected:
    UFUNCTION(BlueprintCallable)
    void OnShieldHealthChanged(UHealthComponent* HealthComponentIn, float PrevNormShieldHealth, float CurrNormShieldHealth);
    
};

