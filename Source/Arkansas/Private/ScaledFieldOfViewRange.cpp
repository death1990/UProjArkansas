#include "ScaledFieldOfViewRange.h"

FScaledFieldOfViewRange::FScaledFieldOfViewRange() {
    this->bEnforceMinFOV = false;
    this->MinFOV = 0.00f;
    this->bEnforceMaxFOV = false;
    this->MaxFOV = 0.00f;
    this->Axis = EOEIFieldOfViewAxis::Horizontal;
}

