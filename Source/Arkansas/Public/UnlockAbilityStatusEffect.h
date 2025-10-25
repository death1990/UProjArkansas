#pragma once
#include "CoreMinimal.h"
#include "EUnlockAbility.h"
#include "StatusEffect.h"
#include "UnlockAbilityStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UUnlockAbilityStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnlockAbility UnlockedAbility;
    
public:
    UUnlockAbilityStatusEffect();

};

