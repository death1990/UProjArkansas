#include "IndianaNavigationSystem.h"

UIndianaNavigationSystem::UIndianaNavigationSystem() {
    this->DefaultAgentName = TEXT("Human");
    this->SupportedAgents.AddDefaulted(7);
    this->MaxNavAgentRadiusDiff = 1000.00f;
    this->MaxNavAgentHeightDiff = 1000.00f;
    this->MaxNavAgentStepDiff = 1000.00f;
    this->CompanionAgents.AddDefaulted(2);
}

void UIndianaNavigationSystem::UnregisterArea(AActor* Source, EOccupationChannel Channel) {
}

bool UIndianaNavigationSystem::TraceOccupation(AActor* Source, EOccupationChannel Channel, const FVector& Start, const FVector& End) {
    return false;
}

void UIndianaNavigationSystem::RegisterArea(AActor* Source, EOccupationChannel Channel, const FVector& Location, const FVector& Extents, const FRotator& Transform) {
}


