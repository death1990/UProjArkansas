#include "CompanionPositionComponent.h"

UCompanionPositionComponent::UCompanionPositionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CompanionMovementDistanceThreshold = 700.00f;
    this->PlayerLineOfSightRepositionSightTime = 3.00f;
    this->PlayerLineOfSightRepositionCooldownTime = 10.00f;
    this->PostFallMovementDistanceThreshold = 10.00f;
}

void UCompanionPositionComponent::RequestForceTeleportCompanions(const FVector& Position1, const FVector& Position2) {
}

void UCompanionPositionComponent::RequestForceTeleportCompanion(const AIndianaAiCharacter* InCompanion, const FVector& position) {
}

void UCompanionPositionComponent::OnStealthChange(bool bStealthed) {
}

void UCompanionPositionComponent::OnPlayerConversationChange(AActor* Participant, const FGuid& NavigatorID, bool bEntered) {
}

void UCompanionPositionComponent::OnOccupiedElevatorStop(UEnvironmentInteractionComponent* InEnvironmentComponent, AElevator* Elevator) {
}

void UCompanionPositionComponent::OnOccupiedElevatorMove(UEnvironmentInteractionComponent* InEnvironmentComponent, AElevator* Elevator) {
}

void UCompanionPositionComponent::OnOccupiedElevatorChange(AElevator* Elevator, bool bOccupied) {
}


