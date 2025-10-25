#include "SpellConditional.h"

USpellConditional::USpellConditional() {
    this->SpellConditionTarget = ESpellConditionTarget::Target;
    this->bCheckCaster = false;
    this->bCheckPlayer = false;
    this->bNot = false;
}


