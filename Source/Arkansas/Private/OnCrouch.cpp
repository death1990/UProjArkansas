#include "OnCrouch.h"

UOnCrouch::UOnCrouch() {
    this->CrouchEventType = ECrouchEventType::Start;
    this->bOnPlayerToggle = false;
}

void UOnCrouch::OnCrouch(UIndianaCharMovementComponent* MovementComponent, bool bPlayerToggled) {
}


