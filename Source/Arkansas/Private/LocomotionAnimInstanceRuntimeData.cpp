#include "LocomotionAnimInstanceRuntimeData.h"

FLocomotionAnimInstanceRuntimeData::FLocomotionAnimInstanceRuntimeData() {
    this->LeanAmount = 0.00f;
    this->SlopeAngle = 0.00f;
    this->HipOverlayDirection = 0.00f;
    this->HipOverlayDirectionWrapped = 0.00f;
    this->WalkStartHipOverlayDirection = 0.00f;
    this->WalkStartHipOverlayDirectionWrapped = 0.00f;
    this->WalkStartDirectionActive = EDirectionActive::DA_Neutral;
    this->WalkLean = NULL;
    this->RunLean = NULL;
    this->SprintLean = NULL;
    this->SlopeLean = NULL;
    this->WalkForward = NULL;
    this->WalkBackward = NULL;
    this->WalkLeft = NULL;
    this->WalkRight = NULL;
    this->HipOverlayBlendSpeed = 0.00f;
    this->ForwardBlendSpace = NULL;
    this->BackwardBlendSpace = NULL;
    this->LeftBlendSpace = NULL;
    this->RightBlendSpace = NULL;
    this->bForwardActive = false;
    this->bLeftActive = false;
    this->bRightActive = false;
    this->bBackwardActive = false;
    this->bIdleActive = false;
    this->DirectionActive = EDirectionActive::DA_Neutral;
}

