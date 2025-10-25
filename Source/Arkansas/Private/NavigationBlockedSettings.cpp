#include "NavigationBlockedSettings.h"

FNavigationBlockedSettings::FNavigationBlockedSettings() {
    this->BlockDistance = 0.00f;
    this->BlockHeadingCosineAngle = 0.00f;
    this->BlockDeltaCosineAngle = 0.00f;
    this->MinBlockTime = 0.00f;
    this->MaxBlockTime = 0.00f;
    this->NoBlockerTime = 0.00f;
}

