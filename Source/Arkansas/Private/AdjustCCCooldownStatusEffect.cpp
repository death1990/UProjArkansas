#include "AdjustCCCooldownStatusEffect.h"

UAdjustCCCooldownStatusEffect::UAdjustCCCooldownStatusEffect() {
    this->Command = ECompanionCommand::Invalid;
    this->CooldownScalar = -1.00f;
    this->bUsePassThroughValue = false;
    this->PassThroughValuePercentageMultiplier = 1.00f;
}


