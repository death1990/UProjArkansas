#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "EHealValueType.h"
#include "SkillScalableStatusEffect.h"
#include "HealStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UHealStatusEffect : public USkillScalableStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealValuePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHealValueType HealValueType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanHealDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHealingCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve HealingCurve;
    
public:
    UHealStatusEffect();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHealValueType GetHealValueType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealValuePercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealValue() const;
    
};

