#include "IndianaAvoidanceManager.h"

UIndianaAvoidanceManager::UIndianaAvoidanceManager() {
    this->AvoidanceSweepMaxSampleCount = 5;
    this->AvoidanceSweepDeltaAngle = 10.00f;
    this->AvoidanceSweepMinDeltaAngleFromDesiredVelocity = 5.00f;
}


