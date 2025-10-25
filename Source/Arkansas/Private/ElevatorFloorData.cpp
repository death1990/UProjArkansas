#include "ElevatorFloorData.h"

FElevatorFloorData::FElevatorFloorData() {
    this->ElevatorDoor = NULL;
    this->CarriageWallDir = ECarriageWallDir::Front;
    this->TravelDestinationData = NULL;
    this->bGroundFloor = false;
    this->bShowInUI = false;
}

