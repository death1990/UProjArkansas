#include "OverlayMatStatusEffect.h"

UOverlayMatStatusEffect::UOverlayMatStatusEffect() {
    this->OverlayDynamicMaterial = NULL;
    this->FadeDuration = 0.00f;
    this->bUseFadeOutTime = false;
    this->FadeOutDuration = 0.00f;
    this->FadeScalar = 0.00f;
    this->Priority = 0;
    this->DamageType = EIndianaDamageType::Invalid;
}


