#include "Flaw.h"

UFlaw::UFlaw() {
    this->BrandType = NULL;
    this->FlawType = EFlawType::Systemic;
    this->FlawTriggerCount = 0;
    this->FlawTimeLimit = 0.00f;
    this->FlawEventDuration = 0.00f;
    this->Spell = NULL;
    this->EventListener = NULL;
    this->ResetEventListener = NULL;
    this->bIgnoreTimer = false;
}


