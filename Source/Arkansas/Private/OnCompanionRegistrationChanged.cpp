#include "OnCompanionRegistrationChanged.h"

UOnCompanionRegistrationChanged::UOnCompanionRegistrationChanged() {
    this->EventType = ECompanionRegistrationEventType::Added;
    this->CompanionID = ESpecialObsidianID::None;
    this->bOnAnyCompanion = false;
}

void UOnCompanionRegistrationChanged::OnCompanionRegistrationChanged(ESpecialObsidianID SpecialObsidianID) {
}


