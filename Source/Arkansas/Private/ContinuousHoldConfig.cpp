#include "ContinuousHoldConfig.h"

FContinuousHoldConfig::FContinuousHoldConfig() {
    this->bAllowContinuousHold = false;
    this->TimeDecreasePerHold = 0.00f;
    this->MinimumHoldTime = 0.00f;
    this->bAccelerateDecrease = false;
}

