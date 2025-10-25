#include "LocomotionAnimationState.h"

FLocomotionAnimationState::FLocomotionAnimationState() {
    this->SingleFireAnim0 = NULL;
    this->SingleFireAnim1 = NULL;
    this->SingleFireAnimPosition0 = 0.00f;
    this->SingleFireAnimPosition1 = 0.00f;
    this->SingleFireAnimSpeed0 = 0.00f;
    this->SingleFireAnimSpeed1 = 0.00f;
    this->bSingleFireSlot0Active = false;
    this->bSingleFireSlot0NoBlend = false;
    this->bSingleFireSlot1Active = false;
    this->bSingleFireSlot1NoBlend = false;
    this->bCanceledAnimation = false;
    this->bIsPlayingWalkStart = false;
    this->LoopStartPosition = 0.00f;
    this->HipOffset = 0.00f;
    this->HipOffsetWrapped = 0.00f;
}

