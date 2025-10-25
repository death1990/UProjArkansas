#include "OEIAnimInstance.h"

UOEIAnimInstance::UOEIAnimInstance() {
    this->Character = NULL;
    this->MovementComponent = NULL;
    this->FaceFXComponent = NULL;
    this->Speed = 0.00f;
    this->bIsCrouching = false;
    this->bIsFalling = false;
    this->bIsPlayingFaceFXAnimation = false;
    this->bJustTeleported = false;
    this->bCheckIgnoreForInitialAnimFilter = false;
}

void UOEIAnimInstance::SetCheckIgnoreForInitialAnimFilter(bool bCheckFilter) {
}


