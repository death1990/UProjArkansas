#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "Templates/SubclassOf.h"
#include "SpellRemoveStatusEffect.generated.h"

class USpell;

UCLASS(Blueprintable, EditInlineNew)
class USpellRemoveStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USpell> Spell;
    
public:
    USpellRemoveStatusEffect();

};

