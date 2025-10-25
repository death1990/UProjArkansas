#include "WireComponent.h"

UWireComponent::UWireComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UWireComponent::WireSetPower(const FGuid& WireGuid, bool bWireEnabled) {
}

bool UWireComponent::IsWireEnabled(const FGuid& WireGuid) const {
    return false;
}

void UWireComponent::DisconnectWire(const FGuid& WireGuid) {
}

void UWireComponent::ConnectWire(const FGuid& WireGuid, bool bWireEnabled) {
}

bool UWireComponent::AreAllWiresEnabled() const {
    return false;
}


