#include "ChatterComponent.h"

UChatterComponent::UChatterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HostileDetectionDistance = 1000.00f;
    this->HostileDetectionFrameCharacterProcessLimit = 1;
    this->HostileDetectionTickInterval = 10.00f;
}

void UChatterComponent::OnLanded(UIndianaCharMovementComponent* MovementComponent, float Distance) {
}

void UChatterComponent::OnJumped(UIndianaCharMovementComponent* MovementComponent) {
}

void UChatterComponent::OnDodged(UIndianaCharMovementComponent* InMovementComponent, EDodgeDirection DodgeDirection) {
}

void UChatterComponent::OnBlockHit(AActor* Blocker, AActor* Attacker, bool bIsMeleeHit) {
}


