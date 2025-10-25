#include "AnimNotify_FootStep_Legacy.h"

UAnimNotify_FootStep_Legacy::UAnimNotify_FootStep_Legacy() {
    this->FootID = EFootID::LeftFoot;
    this->bIsSpecialEvent = false;
    this->SpecialEvent = ESpecialMovementEvent::None;
    this->bIsLadder = false;
}


