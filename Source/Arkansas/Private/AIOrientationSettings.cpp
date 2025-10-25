#include "AIOrientationSettings.h"

FAIOrientationSettings::FAIOrientationSettings() {
    this->FaceTarget = ETargetInfoRelativeLocation::None;
    this->FaceTargetSubLocation = ETargetInfoSubLocation::Default;
    this->bEnabled = false;
}

