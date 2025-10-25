#include "ShockDamageStatusEffect.h"

UShockDamageStatusEffect::UShockDamageStatusEffect() {
    this->ChainLightningFX = NULL;
    this->ChainLightningAudioEvent = NULL;
    this->ChainLightningEmitterPool = NULL;
    this->bStackBasedDamageCalculation = true;
}


