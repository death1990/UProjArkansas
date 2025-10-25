#include "AdjustCCChargeCountStatusEffect.h"

UAdjustCCChargeCountStatusEffect::UAdjustCCChargeCountStatusEffect() {
    this->Command = ECompanionCommand::CalledShot;
    this->ChargeCountChange = EChargeCountChange::Add;
    this->Count = 1;
}


