#include "AIGroupBehavior_CompanionCommandBase.h"

UAIGroupBehavior_CompanionCommandBase::UAIGroupBehavior_CompanionCommandBase() {
    this->DefaultBranch = TEXT("ParticipantValidation");
    this->bEnableContinuousCooking = false;
}

bool UAIGroupBehavior_CompanionCommandBase::K2_IsInCriticalSection() const {
    return false;
}

FAIGroupBehaviorBranchSelector UAIGroupBehavior_CompanionCommandBase::K2_GetPostParticipantValidationBranch() const {
    return FAIGroupBehaviorBranchSelector{};
}

ESpecialObsidianID UAIGroupBehavior_CompanionCommandBase::K2_GetCompanionID() const {
    return ESpecialObsidianID::None;
}

ECompanionCommand UAIGroupBehavior_CompanionCommandBase::K2_GetCompanionCommandType() const {
    return ECompanionCommand::Invalid;
}

void UAIGroupBehavior_CompanionCommandBase::K2_EnterCriticalSection() {
}



