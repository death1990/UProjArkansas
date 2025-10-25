#include "CastSpellStatusEffect.h"

UCastSpellStatusEffect::UCastSpellStatusEffect() {
    this->Spell = NULL;
    this->bAddTarget = false;
    this->bForcePlayerCast = false;
    this->bStatusEffectOriginActorCast = false;
    this->bUseCasterAsSource = false;
    this->bRemoveSpellOnClear = true;
}


