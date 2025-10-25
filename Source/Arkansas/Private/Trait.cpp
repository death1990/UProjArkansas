#include "Trait.h"

UTrait::UTrait() {
    this->Spell = NULL;
    this->bPlayerOnly = true;
    this->bIsPositiveTrait = true;
    this->TraitCategory = ETraitCategory::INVALID;
}


