#include "OEICrowdVolume.h"

AOEICrowdVolume::AOEICrowdVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CrowdDensity = 100.00f;
    this->Density = ECrowdDensity::Medium;
    this->MaximumCrowdSize = -1;
    this->MinimumMoverPercentage = 25.00f;
    this->MaximumMoverPercentage = 50.00f;
    this->bIgnoreVisibilityTestForAnimProxies = false;
    this->CrowdDistribution = NULL;
    this->AppearancesToUse = NULL;
    this->ActiveRangeFromPlayer = 10000.00f;
}

void AOEICrowdVolume::SetCrowdDensity(float DensityPercent) {
}


