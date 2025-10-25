#include "WeaponCameraSwayData.h"

UWeaponCameraSwayData::UWeaponCameraSwayData() {
    this->ActivationTime = 1.00f;
    this->MinTime = 0.00f;
    this->MaxTime = 1.00f;
    this->bRotationalMovement = false;
    this->ForceRotationalInverseConfidence = 0.00f;
    this->RotationalInterpolationType = EInterpolationType::Linear;
    this->RotationalExponent = 2.00f;
    this->RotationalSteps = 1;
}


