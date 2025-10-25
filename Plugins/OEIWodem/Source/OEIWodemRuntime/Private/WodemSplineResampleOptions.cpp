#include "WodemSplineResampleOptions.h"

FWodemSplineResampleOptions::FWodemSplineResampleOptions() {
    this->ResampleMethod = EWodemResampleMethods::SegmentLength;
    this->SegmentLength = 0.00f;
    this->NumberOfSegments = 0;
    this->bMaintainLastPoint = false;
    this->CoordinateSpace = ESplineCoordinateSpace::Local;
}

