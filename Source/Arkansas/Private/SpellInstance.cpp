#include "SpellInstance.h"

FSpellInstance::FSpellInstance() {
    this->SpellType = NULL;
    this->OnApplyEvent = NULL;
    this->OnRemoveEvent = NULL;
}

