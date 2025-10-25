#include "MeleeAction.h"

FMeleeAction::FMeleeAction() {
    this->Action = EMeleeAction::Invalid;
    this->WeaponEvent = EWeaponEvent::Invalid;
    this->WeaponEventTTD = EWeaponEvent::Invalid;
    this->ForceFeedbackEffectOneHand = NULL;
    this->ForceFeedbackEffectOneHandBlocked = NULL;
    this->ForceFeedbackEffectTwoHands = NULL;
    this->ForceFeedbackEffectTwoHandsBlocked = NULL;
    this->bClearInput = false;
    this->bAllowInputAtStart = false;
    this->bCanStartQueuedActionAtStart = false;
    this->bStartWhenQueued = false;
    this->bRecoilIfBlocked = false;
    this->bPlayerForceFeedbackAtStart = false;
    this->DamageMultiplier = 0.00f;
    this->AttackType = EMeleeAttackType::None;
    this->InterruptAction = EMeleeAction::Invalid;
    this->AutoQueuedAction = EMeleeAction::Invalid;
    this->StartConditions = NULL;
}

