#pragma once
#include "CoreMinimal.h"
#include "ECompanionCommand.h"
#include "StatusEffect.h"
#include "ScaleCCCooldownRateStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UScaleCCCooldownRateStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECompanionCommand Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownRateScalar;
    
public:
    UScaleCCCooldownRateStatusEffect();

};

