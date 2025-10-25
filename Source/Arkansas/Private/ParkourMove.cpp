#include "ParkourMove.h"

FParkourMove::FParkourMove() {
    this->Type = EParkourType::Default;
    this->bIsClimbOverMove = false;
    this->InitialViewYaw = 0.00f;
}

