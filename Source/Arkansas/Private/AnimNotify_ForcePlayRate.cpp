#include "AnimNotify_ForcePlayRate.h"

UAnimNotify_ForcePlayRate::UAnimNotify_ForcePlayRate() {
    this->bForwardOnly = false;
    this->ForwardRate = 1.00f;
    this->bBackwardOnly = false;
    this->BackwardRate = 1.00f;
    this->PlayRate = 1.00f;
    this->bRespectTimeDilation = true;
}


