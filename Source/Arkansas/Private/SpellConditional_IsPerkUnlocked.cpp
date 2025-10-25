#include "SpellConditional_IsPerkUnlocked.h"

USpellConditional_IsPerkUnlocked::USpellConditional_IsPerkUnlocked() {
    this->PerkClass = NULL;
    this->bCheckOnCompanion = false;
    this->CompanionID = ESpecialObsidianID::None;
}


