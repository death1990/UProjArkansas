#include "FamilyAITokenSettings.h"

FFamilyAITokenSettings::FFamilyAITokenSettings() {
    this->MaximumTimeBetween = 0.00f;
    this->bMaximumTimeBetween = false;
    this->ImmobilityWaitTime = EMobilityWaitTime::VeryShort;
    this->bImmobileProc = false;
    this->MobilityWaitTime = EMobilityWaitTime::VeryShort;
    this->bMobileProc = false;
    this->UnseenWaitTime = 0.00f;
    this->bUnseenProc = false;
    this->SearchImpossibleWaitTime = 0.00f;
    this->bSearchImpossibleProc = false;
    this->bTriggerOnSearch = false;
}

