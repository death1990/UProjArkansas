#include "CompanionMoraleEvent.h"

UCompanionMoraleEvent::UCompanionMoraleEvent() {
    this->Contribution = EMoraleContribution::Low;
    this->MoraleAmount = 0.00f;
    this->bPositiveMoral = true;
    this->bTriggerOnPlayer = true;
    this->EventListener = NULL;
}


