#include "HoverbotAnimInstance.h"

UHoverbotAnimInstance::UHoverbotAnimInstance() {
    this->SlowingSpeed = 100.00f;
    this->StoredVelocityNormalX = 0.00f;
    this->StoredVelocityNormalY = 0.00f;
    this->bSpeedIsSlowingDown = false;
    this->HeightSmoothSpeed = 6.00f;
    this->IKStrength = 0.00f;
    this->ElevationOffsetMax = 400.00f;
    this->ElevationOffsetCurrent = 0.00f;
    this->ElevationOffsetDesired = 0.00f;
    this->ElevationOffsetVelocity = 0.00f;
    this->ElevationOffsetVelocityFactor = 4.00f;
    this->ElevationOffsetVelocityMax = 400.00f;
    this->ElevationOffsetVelocityBlend = 0.05f;
}


