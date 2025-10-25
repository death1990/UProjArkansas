#include "AISettings_MeleeAttackPattern.h"

FAISettings_MeleeAttackPattern::FAISettings_MeleeAttackPattern() {
    this->Cooldown = 0.00f;
    this->UseCase = EMeleeActionUseCase::Default;
    this->UseRange = 0.00f;
    this->Weight = 0.00f;
    this->MaxValidTargetDistance = 0.00f;
    this->RecoveryDelay = 0.00f;
    this->RecoveryBehavior = NULL;
    this->RecoveryProbability = 0.00f;
}

