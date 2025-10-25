#include "AnimationProxyTask.h"

FAnimationProxyTask::FAnimationProxyTask() {
    this->ServerAnimationProxyState = EProxyTaskState::PlayingEnterMontage;
    this->CharacterMovementComponent = NULL;
    this->AnimationProxyData = NULL;
    this->Index = 0;
    this->StateTransitionTime = 0.00f;
    this->bAlwaysWarpToExit = false;
}

