#include "AnimInstanceDisableStatusEffect.h"

UAnimInstanceDisableStatusEffect::UAnimInstanceDisableStatusEffect() {
    this->AnimEventEffect = NULL;
}

bool UAnimInstanceDisableStatusEffect::K2_IsEffectAllowed_Implementation(AActor* Actor) const {
    return false;
}


