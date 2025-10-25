#include "SpellEffectByEvent.h"

FSpellEffectByEvent::FSpellEffectByEvent() {
    this->ApplyEvent = NULL;
    this->RemoveEvent = NULL;
    this->bRemoveSingleStack = false;
}

