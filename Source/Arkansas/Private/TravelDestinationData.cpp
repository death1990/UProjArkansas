#include "TravelDestinationData.h"

UTravelDestinationData::UTravelDestinationData() {
    this->ParentRegion = NULL;
    this->InitialDiscoveryFlags = 0;
    this->PointOfInterestType = EPointOfInterestLocationType::DEPRECATED;
    this->PointOfInterestXP = EPointOfInterestXPType::None;
    this->bFakeShipLocation = false;
    this->AvailablityDurationDays = 0.00f;
}

FString UTravelDestinationData::GetDebugString() const {
    return TEXT("");
}


