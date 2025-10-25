#include "OnSpellCast.h"
#include "Templates/SubclassOf.h"

UOnSpellCast::UOnSpellCast() {
    this->Spell = NULL;
}

void UOnSpellCast::OnSpellCast(AActor* Caster, TSubclassOf<USpell> NewSpell, AActor* TargetActor) const {
}


