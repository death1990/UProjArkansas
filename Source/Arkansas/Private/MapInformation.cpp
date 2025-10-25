#include "MapInformation.h"

UMapInformation::UMapInformation() {
    this->PresenceData = NULL;
    this->RegionData = NULL;
    this->TravelLayoutData = NULL;
    this->MapDefaultBeacons = NULL;
    this->MapTextData = NULL;
    this->MapPointsOfInterest = NULL;
    this->bIsShipMap = false;
    this->bIsRegionMap = false;
    this->ParentRegionMapInformation = NULL;
    this->NorthOrientationOffset = 0.00f;
    this->DefaultFloor = TEXT("DefaultFloor");
}


