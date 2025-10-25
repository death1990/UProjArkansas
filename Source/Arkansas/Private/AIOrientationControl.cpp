#include "AIOrientationControl.h"

FAIOrientationControl::FAIOrientationControl() {
    this->FaceTarget = ETargetInfoRelativeLocation::None;
    this->FaceTargetSubLocation = ETargetInfoSubLocation::Default;
    this->FaceActor = NULL;
}

