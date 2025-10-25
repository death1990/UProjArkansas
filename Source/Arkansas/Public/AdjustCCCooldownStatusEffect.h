#pragma once
#include "CoreMinimal.h"
#include "ECompanionCommand.h"
#include "StatusEffect.h"
#include "AdjustCCCooldownStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAdjustCCCooldownStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECompanionCommand Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePassThroughValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PassThroughValuePercentageMultiplier;
    
public:
    UAdjustCCCooldownStatusEffect();

};

