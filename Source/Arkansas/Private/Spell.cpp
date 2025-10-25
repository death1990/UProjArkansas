#include "Spell.h"

USpell::USpell() {
    this->bCheckMiscID = false;
    this->bForcePersistant = false;
    this->bRemoveOnDowned = false;
    this->Cooldown = 0.00f;
    this->CooldownRpgStat = NULL;
    this->EventCooldown = 0.00f;
    this->bApplyToEveryTargetOfEventInstance = false;
    this->EventCooldownRpgStat = NULL;
    this->ApplyChanceRpgStat = NULL;
    this->ReceiveChanceRpgStat = NULL;
}


