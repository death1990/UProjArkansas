#include "PlayAnimationAction.h"

UPlayAnimationAction::UPlayAnimationAction() {
    this->Animation = NULL;
    this->bIsLooping = false;
    this->LoopTime = 0.00f;
}

void UPlayAnimationAction::OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted) {
}


