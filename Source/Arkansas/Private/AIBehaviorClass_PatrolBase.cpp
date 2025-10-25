#include "AIBehaviorClass_PatrolBase.h"

UAIBehaviorClass_PatrolBase::UAIBehaviorClass_PatrolBase() {
    this->FirstPatrolNode = NULL;
    this->bArrivedAtPatrolNode = false;
    this->bAllowArrived = false;
    this->bExecutePatrolNodeRequested = false;
    this->MinAngleForStopAtPatrolPoint = 90.00f;
    this->PatrolRetryRate = 0.20f;
    this->LastMovementRequestTime = 0.00f;
    this->UpdateLocoStateDelay = 0.30f;
}

void UAIBehaviorClass_PatrolBase::UpdateLocomotionWalkStops(bool bEnable, float DelayTimer) {
}

void UAIBehaviorClass_PatrolBase::SetNextPatrolNodeIndex(int32 Index) {
}


void UAIBehaviorClass_PatrolBase::OnFinishMoveToPatrolNode(bool bSuccess) {
}

void UAIBehaviorClass_PatrolBase::OnExecutePatrolNodeArrived(bool bSuccess) {
}


UAIPatrolSupportComponent* UAIBehaviorClass_PatrolBase::GetPatrolSupportComponent() const {
    return NULL;
}

int32 UAIBehaviorClass_PatrolBase::GetNextPatrolNodeIndex() const {
    return 0;
}

APatrolNode* UAIBehaviorClass_PatrolBase::GetNextPatrolNode() const {
    return NULL;
}

APatrolNode* UAIBehaviorClass_PatrolBase::GetLastPatrolNode() const {
    return NULL;
}

int32 UAIBehaviorClass_PatrolBase::GetCurrentPatrolNodeIndex() const {
    return 0;
}

APatrolNode* UAIBehaviorClass_PatrolBase::GetCurrentPatrolNode() const {
    return NULL;
}



bool UAIBehaviorClass_PatrolBase::CanArriveEarly() const {
    return false;
}

bool UAIBehaviorClass_PatrolBase::AdvancePatrolNode() {
    return false;
}


