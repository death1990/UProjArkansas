#include "LocomotionAnimationData.h"

ULocomotionAnimationData::ULocomotionAnimationData() {
    this->WalkCycle = NULL;
    this->TranslationImportance = 0.00f;
    this->RotationImportance = 0.00f;
    this->BoneTranslationImportance = 0.00f;
    this->BoneRotationImportance = 0.00f;
    this->BoneDirectionImportance = 0.00f;
    this->BoneSpeedImportance = 0.00f;
    this->FootFallDelta = 0.10f;
    this->WalkStartMaxFacingError = 179.00f;
    this->WalkStartMaxDirectionError = 179.00f;
    this->MaxWalkStartLength = -1.00f;
    this->MaxWalkStopLength = -1.00f;
    this->MaxRunStartLength = -1.00f;
    this->MaxRunStopLength = -1.00f;
    this->MaxSprintStartLength = -1.00f;
    this->MaxSprintStopLength = -1.00f;
}


