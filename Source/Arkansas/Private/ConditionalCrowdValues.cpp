#include "ConditionalCrowdValues.h"

FConditionalCrowdValues::FConditionalCrowdValues() {
    this->Density = ECrowdDensity::Heavy;
    this->MinimumMoverPercentage = 0.00f;
    this->MaximumMoverPercentage = 0.00f;
    this->MaximumCrowdSize = 0;
    this->ExpectedNumberOfCrowdNPCs = 0;
}

