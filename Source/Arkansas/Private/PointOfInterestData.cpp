#include "PointOfInterestData.h"

UPointOfInterestData::UPointOfInterestData() {
    this->XPType = EPointOfInterestXPType::None;
    this->InitialState = EPointOfInterestState::Hidden;
    this->ParentRegion = NULL;
    this->InitialDiscoveryFlags = 0;
    this->AvailablityDurationDays = 0.00f;
    this->bIsPlayerShip = false;
}

FString UPointOfInterestData::GetDebugString() const {
    return TEXT("");
}


