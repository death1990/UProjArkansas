#include "AISettings_MeleeRecovery.h"

UAISettings_MeleeRecovery::UAISettings_MeleeRecovery() {
    this->RecoveryType = EMeleeRecoveryType::Move;
    this->RecoveryProbability = 0.00f;
    this->MinMoveDistance = 50.00f;
    this->MaxMoveDistance = 200.00f;
    this->DodgeDirection = EDodgeDirection::Back;
    this->bDodgeRequiresClearPath = true;
}


