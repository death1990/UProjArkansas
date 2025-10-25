#include "AIMeleeActionSettings.h"

FAIMeleeActionSettings::FAIMeleeActionSettings() {
    this->MeleePatternIndex = 0;
    this->MeleeAttackPatternIndex = 0;
    this->RecoveryTime = 0.00f;
    this->bContinuousAction = false;
    this->bResumePreviousAction = false;
    this->bAddaptiveRootMotion = false;
    this->bUseAddaptiveRootMotionStopDistance = false;
    this->bCalledShot = false;
}

