#include "BTDecorator_HasSafeThrowLocation.h"

UBTDecorator_HasSafeThrowLocation::UBTDecorator_HasSafeThrowLocation() {
    this->NodeName = TEXT("Has Safe Throw Location");
    this->bCheckCurrentLocation = true;
    this->bCheckCoverLocation = true;
    this->bCheckShuffleLocation = true;
}


