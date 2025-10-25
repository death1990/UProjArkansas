#include "WodemSplineInstance.h"

FWodemSplineInstance::FWodemSplineInstance() {
    this->InstanceMode = AtEachPoint;
    this->StartSplinePosition = 0.00f;
    this->EndSplinePosition = 0.00f;
    this->SegmentLength = 0.00f;
    this->NumberOfScatterPoints = 0;
    this->ScatterWidth = 0.00f;
}

