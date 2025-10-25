#include "BodyIdle.h"

FBodyIdle::FBodyIdle() {
    this->StartSequence = NULL;
    this->EndSequence = NULL;
    this->AimOffsetBlendSpaceOverride = NULL;
    this->AllowedAppearanceTagsMatchType = EGameplayContainerMatchType::Any;
    this->DisallowedAppearanceTagsMatchType = EGameplayContainerMatchType::Any;
    this->bNeedsWeapon = false;
    this->bOverrideUpperbodyLocomotion = false;
    this->bOverrideUpperbodyTurnsOnly = false;
    this->bUnholsterWeapon = false;
    this->bLetPreviousIdleEndPlay = false;
}

