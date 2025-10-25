#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "Templates/SubclassOf.h"
#include "ResetSpellCooldownStatusEffect.generated.h"

class USpell;

UCLASS(Blueprintable, EditInlineNew)
class UResetSpellCooldownStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USpell> Spell;
    
public:
    UResetSpellCooldownStatusEffect();

};

