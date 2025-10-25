#pragma once
#include "CoreMinimal.h"
#include "DamageStatusEffect.h"
#include "ShockDamageStatusEffect.generated.h"

class UAkAudioEvent;
class UNiagaraSystem;
class UOEIWwiseObjectPoolWrapper;

UCLASS(Blueprintable, EditInlineNew)
class UShockDamageStatusEffect : public UDamageStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ChainLightningFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ChainLightningAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOEIWwiseObjectPoolWrapper* ChainLightningEmitterPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStackBasedDamageCalculation;
    
public:
    UShockDamageStatusEffect();

};

