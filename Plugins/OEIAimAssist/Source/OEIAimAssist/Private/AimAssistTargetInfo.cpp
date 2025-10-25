#include "AimAssistTargetInfo.h"

FAimAssistTargetInfo::FAimAssistTargetInfo() {
    this->Actor = NULL;
    this->DistanceSquared = 0.00f;
    this->bFoundFromCapsule = false;
}

