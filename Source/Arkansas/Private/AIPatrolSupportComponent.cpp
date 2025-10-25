#include "AIPatrolSupportComponent.h"

UAIPatrolSupportComponent::UAIPatrolSupportComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UAIPatrolSupportComponent::SetCurrentPatrolNodeIndex(APatrolNode* Node, int32 Index) {
}

void UAIPatrolSupportComponent::NotifyPatrolNodeTeleportCompleted(APatrolNode* PatrolNode) {
}

int32 UAIPatrolSupportComponent::GetCurrentPatrolNodeIndex(APatrolNode* Node) {
    return 0;
}

APatrolNode* UAIPatrolSupportComponent::GetCurrentPatrolNode() {
    return NULL;
}

bool UAIPatrolSupportComponent::CanTeleportToPatrolNode(const APatrolNode* PatrolNode) const {
    return false;
}


