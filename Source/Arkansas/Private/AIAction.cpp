#include "AIAction.h"

UAIAction::UAIAction() {
}

bool UAIAction::Tick(AIndianaAiController* InController, float DeltaSeconds) {
    return false;
}

void UAIAction::SetStateLocked(AIndianaAiController* InController, const bool bLocked) {
}

bool UAIAction::IsComplete(bool& bSuccess) const {
    return false;
}

EAIActionResult UAIAction::GetState() const {
    return EAIActionResult::NotStarted;
}

EAIActionResult UAIAction::Execute(AIndianaAiController* InController) {
    return EAIActionResult::NotStarted;
}

void UAIAction::Abort(AIndianaAiController* InController) {
}


