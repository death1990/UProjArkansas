#include "LocomotionController.h"

FLocomotionController::FLocomotionController() {
    this->bWalkStartAdjustPlaySpeedInsteadOfDistance = false;
    this->Owner = NULL;
    this->OWOwner = NULL;
    this->OwnerAnimInstance = NULL;
    this->OwnerHeadAndBodyTracking = NULL;
}

