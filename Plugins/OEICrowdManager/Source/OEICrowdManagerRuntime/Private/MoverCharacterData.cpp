#include "MoverCharacterData.h"

FMoverCharacterData::FMoverCharacterData() {
    this->MoverState = EOEIMoverState::Invalid;
    this->AIController = NULL;
    this->DestinationAnimationProxyData = NULL;
}

