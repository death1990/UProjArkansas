#include "SpellManagerComponent.h"
#include "Templates/SubclassOf.h"

USpellManagerComponent::USpellManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HealthComponent = NULL;
}

bool USpellManagerComponent::HasSpell(const TSubclassOf<USpell>& SpellType) const {
    return false;
}

ESpellCastResult USpellManagerComponent::CastSpellWithTarget_BP(const TSubclassOf<USpell>& SpellType, AActor* Target) {
    return ESpellCastResult::Success;
}

ESpellCastResult USpellManagerComponent::CastSpell(const TSubclassOf<USpell>& SpellType, const FCastingParams& CastingParams) {
    return ESpellCastResult::Success;
}


