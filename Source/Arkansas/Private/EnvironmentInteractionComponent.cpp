#include "EnvironmentInteractionComponent.h"

UEnvironmentInteractionComponent::UEnvironmentInteractionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UEnvironmentInteractionComponent::OnCharacterMovementUpdated(UIndianaCharMovementComponent* MovementComponent) {
}

bool UEnvironmentInteractionComponent::IsInRestrictedAreaBufferVolume(ARestrictedArea* RestrictedArea) const {
    return false;
}


