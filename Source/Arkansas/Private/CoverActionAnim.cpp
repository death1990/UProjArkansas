#include "CoverActionAnim.h"

FCoverActionAnim::FCoverActionAnim() {
    this->bEnable = false;
    this->RandomWeight = 0.00f;
    this->CoverType = ECoverTypes::FullHeight;
    this->CoverSide = ECoverSide::None;
    this->CoverAction = ECoverActions::None;
    this->StartAnim = NULL;
    this->Anim = NULL;
    this->AimBlendSpace = NULL;
    this->EndAnim = NULL;
    this->bHasStartAnim = false;
    this->bHasAnim = false;
    this->bHasAimBlendSpace = false;
    this->bHasEndAnim = false;
    this->bIsAnimOffRoot = false;
    this->Distance = 0.00f;
    this->Angle = 0.00f;
    this->bIsFailSafeAnimation = false;
}

