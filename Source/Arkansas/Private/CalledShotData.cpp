#include "CalledShotData.h"

UCalledShotData::UCalledShotData() {
    this->WeaponClass = NULL;
    this->Spell = NULL;
    this->SocketToTarget = EThirdPersonSocket::None;
    this->DamageScalar = 1.00f;
    this->UIBackgroundAbilityIcon = NULL;
    this->UIAbilityIcon = NULL;
    this->TargetReactionTime = 2.00f;
    this->TimeDilationDuration = 1.00f;
    this->AlternativeSpell = NULL;
    this->AlternativeSocketToTarget = EThirdPersonSocket::None;
    this->AlternativeSpellProbability = 0.00f;
    this->MaxMeleeDistance = 200.00f;
    this->ShotCountBeforeCameraCut = 1;
    this->CameraCutDelay = 0.20f;
}


