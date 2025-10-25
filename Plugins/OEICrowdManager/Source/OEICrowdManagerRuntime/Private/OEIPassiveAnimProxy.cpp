#include "OEIPassiveAnimProxy.h"

AOEIPassiveAnimProxy::AOEIPassiveAnimProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsCrowdAnimProxy = false;
    this->ReserveForType = ECrowdType::Any;
    this->bPrioritizeCrowdToUse = false;
    this->bIsForcedFleeLocation = false;
    this->Weight = 1.00f;
    this->bIgnoreVisibilityTest = false;
    this->bIsNonRendered = false;
    this->bIsDisabled = false;
    this->bIsNearZoneGraph = false;
    this->RadiusToLookForLanes = 10000.00f;
}

void AOEIPassiveAnimProxy::SetCrowdProxyDisabled(bool bEnabled) {
}


