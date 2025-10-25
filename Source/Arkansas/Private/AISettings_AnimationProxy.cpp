#include "AISettings_AnimationProxy.h"

UAISettings_AnimationProxy::UAISettings_AnimationProxy() {
    this->AnimationProxy = NULL;
    this->bTeleport = false;
    this->MovementState = EAIMovementState::Walk;
    this->NavigationFlags = 0;
    this->bInfiniteDuration = false;
}


