#include "ElevatorSwitch.h"

AElevatorSwitch::AElevatorSwitch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool AElevatorSwitch::PassesRPGRequirements(uint8 InteractionIndex) {
    return false;
}

void AElevatorSwitch::OwningElevatorMoveStart_Implementation(int32 NewFloor, bool bFromStationary) {
}

void AElevatorSwitch::OwningElevatorMoveEnd_Implementation(int32 NewFloor) {
}

FRPGInteractableRequirements AElevatorSwitch::GetRPGRequirements(EInteractionType InteractionType) {
    return FRPGInteractableRequirements{};
}


