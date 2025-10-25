#include "AIBehaviorClass_ProtestKill.h"

UAIBehaviorClass_ProtestKill::UAIBehaviorClass_ProtestKill() {
    this->DistanceToPlayerBeforeConversationStart = 200.00f;
    this->MovementState = EAIMovementState::Sprint;
    this->AnimationState = EAnimTreeState::Neutral;
}

void UAIBehaviorClass_ProtestKill::OnConversationShutdown(UOwConversationInstance* ConversationInstance) {
}


