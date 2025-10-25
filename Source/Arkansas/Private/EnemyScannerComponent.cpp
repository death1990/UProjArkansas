#include "EnemyScannerComponent.h"

UEnemyScannerComponent::UEnemyScannerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ScanTime = 0.00f;
    this->ScanNotTargetingTime = 1.00f;
    this->MaxRange = 5000.00f;
    this->MaxScannedTargets = 8;
}

void UEnemyScannerComponent::TimeDilationStart() {
}

void UEnemyScannerComponent::TimeDilationEnd(float Duration) {
}

void UEnemyScannerComponent::HandleOnCompanionRegistered(AIndianaAiCharacter* CompanionIn, bool bIsRegistering) {
}


