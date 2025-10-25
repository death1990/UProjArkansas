#include "MeleeAnimEvent.h"

FMeleeAnimEvent::FMeleeAnimEvent() {
    this->Anim = NULL;
    this->OutOfCombatAnim = NULL;
    this->RecoveryLoop = NULL;
    this->RecoveryEnd = NULL;
    this->Duration = 0.00f;
    this->bLoop = false;
    this->bSkipIfHaveQueuedAction = false;
}

