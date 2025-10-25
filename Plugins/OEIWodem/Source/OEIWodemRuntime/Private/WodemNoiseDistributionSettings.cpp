#include "WodemNoiseDistributionSettings.h"

FWodemNoiseDistributionSettings::FWodemNoiseDistributionSettings() {
    this->bUseNoiseDistribution = false;
    this->bShowDebugPoints = false;
    this->NoiseMID = NULL;
    this->NoiseRT = NULL;
    this->NoiseType = Simplex;
    this->RTSize = 0;
    this->NoiseSize = 0.00f;
    this->Contrast = 0.00f;
}

