#include "BTService_FocusAtBlackboard.h"

UBTService_FocusAtBlackboard::UBTService_FocusAtBlackboard() {
    this->NodeName = TEXT("Focus At Blackboard");
    this->bHeadTracking = true;
    this->bBodyTracking = true;
    this->bEyeTracking = true;
    this->bWeaponAiming = true;
}


