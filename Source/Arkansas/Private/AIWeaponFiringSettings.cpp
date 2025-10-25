#include "AIWeaponFiringSettings.h"

FAIWeaponFiringSettings::FAIWeaponFiringSettings() {
    this->CompleteType = EFiringPatternCompleteType::FinishBehavior;
    this->FuzzPauseScalar = 0.00f;
    this->PrePauseTime = 0.00f;
    this->CalledShotFireIndex = 0;
    this->bScopeEnabled = false;
    this->bCanReloadAtEnd = false;
    this->bForceFire = false;
    this->bCalledShot = false;
    this->bAllowAutoReload = false;
    this->FiringPatternType = EFiringPatternType::Default;
}

