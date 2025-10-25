#include "OnSpellRemoved.h"
#include "Templates/SubclassOf.h"

UOnSpellRemoved::UOnSpellRemoved() {
    this->Spell = NULL;
}

void UOnSpellRemoved::OnSpellRemoved(AActor* Caster, TSubclassOf<USpell> RemovedSpell) const {
}


