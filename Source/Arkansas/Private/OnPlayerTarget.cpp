#include "OnPlayerTarget.h"

UOnPlayerTarget::UOnPlayerTarget() {
    this->PlayerTargetEventType = EPlayerTargetEventType::TargetStart;
}

void UOnPlayerTarget::OnPlayerTarget(AActor* Target) {
}


