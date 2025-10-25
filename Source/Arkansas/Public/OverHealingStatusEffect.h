#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "OverHealingStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UOverHealingStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverHealToTempHealthPercent;
    
public:
    UOverHealingStatusEffect();

};

