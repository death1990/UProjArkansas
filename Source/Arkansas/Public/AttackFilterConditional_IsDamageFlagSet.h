#pragma once
#include "CoreMinimal.h"
#include "AttackFilterConditional.h"
#include "EDamageFlags.h"
#include "AttackFilterConditional_IsDamageFlagSet.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAttackFilterConditional_IsDamageFlagSet : public UAttackFilterConditional {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageFlags DamageFlag;
    
public:
    UAttackFilterConditional_IsDamageFlagSet();

};

