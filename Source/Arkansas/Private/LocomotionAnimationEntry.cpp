#include "LocomotionAnimationEntry.h"

FLocomotionAnimationEntry::FLocomotionAnimationEntry() {
    this->Source = NULL;
    this->State = ELocomotionStateEnum::Idle;
    this->EndingPoseMatchPosition = 0.00f;
    this->AnimationState = 0;
    this->TotalTranslateLength = 0.00f;
    this->YawRotation = 0.00f;
    this->YawDirection = 0.00f;
}

