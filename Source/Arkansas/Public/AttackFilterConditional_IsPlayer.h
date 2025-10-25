#pragma once
#include "CoreMinimal.h"
#include "AttackFilterConditional.h"
#include "AttackFilterConditional_IsPlayer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAttackFilterConditional_IsPlayer : public UAttackFilterConditional {
    GENERATED_BODY()
public:
    UAttackFilterConditional_IsPlayer();

};

