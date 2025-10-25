#include "OEICineShotTargetSettings.h"

UOEICineShotTargetSettings::UOEICineShotTargetSettings() {
    this->SortOrder = 10.00f;
    this->bOverrideTier = false;
    this->Tier = 1;
    this->bOverrideWeight = false;
    this->Weight = 1.00f;
    this->bOverrideTargetComponent = false;
    this->bOverrideTargetSocket = false;
    this->bOverrideTargetOffset = false;
    this->bOverrideBoxTransform = false;
    this->bOverrideCameraOffset = false;
    this->bOverrideHorizontalAlignment = false;
    this->bOverrideVerticalAlignment = false;
    this->bOverrideHorizontalRange = false;
    this->bOverrideVerticalRange = false;
    this->bOverrideDistanceSmoothingInterval = false;
    this->bOverrideAngleSmoothingInterval = false;
    this->bOverrideMaxSmoothingWeight = false;
    this->MaxSmoothingWeight = 1.00f;
    this->bOverrideSmoothWeightExponent = false;
    this->SmoothWeightExponent = 1.00f;
}


