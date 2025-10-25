#include "TPVCrouchTunnelComponent.h"

UTPVCrouchTunnelComponent::UTPVCrouchTunnelComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwningPlayer = NULL;
    this->TraceSettings = NULL;
}


