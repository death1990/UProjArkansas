#include "RecoilData.h"

URecoilData::URecoilData() {
    this->FullyAimedRecoilScalar = 1.00f;
    this->FullyAimed3PRecoilScalar = 1.00f;
    this->HipFireRecoilScalar = 1.00f;
    this->HipFire3PNearRecoilScalar = 1.00f;
    this->HipFire3PFarRecoilScalar = 1.00f;
    this->bClampTotalPitchToZero = true;
    this->bShouldInterpExpoOutRandomOffset = true;
    this->PreShotDecayDuration = 0.00f;
    this->ShotDecayRate = 0.00f;
    this->bRecoilReturnToZero = false;
    this->MovedYawTolerance = 5.00f;
    this->MovedPitchTolerance = 5.00f;
    this->bResetFromCrossTolerance = false;
    this->bAllowEarlyOutForReturnToZero = false;
    this->EarlyOutThreshold = 1.00f;
    this->SpeedMultiplier = 3.00f;
    this->bUseReturnToZeroCurve = false;
}


