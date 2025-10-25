#pragma once
#include "CoreMinimal.h"
#include "SpellConditional.h"
#include "AttackFilterConditional.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAttackFilterConditional : public USpellConditional {
    GENERATED_BODY()
public:
    UAttackFilterConditional();

};

