#include "DamageTypePlayFxEventEffect.h"

UDamageTypePlayFxEventEffect::UDamageTypePlayFxEventEffect() {
    this->Spell = NULL;
    this->MPC = NULL;
    this->PlayerMaterial = NULL;
    this->NPCMaterial = NULL;
    this->FadeTime = 0.00f;
    this->bUseFadeOutTime = false;
    this->FadeOutTime = 0.00f;
    this->FadeQuickScalar = 1.00f;
    this->Priority = 0;
}


