#include "KillCameraComponent.h"

UKillCameraComponent::UKillCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinDistanceForCamera = 400.00f;
    this->ChanceOnLastKill = 1.00f;
    this->ChanceOnStealthKill = 0.00f;
    this->ChanceOnCritOrWeakSpotKill = 0.00f;
    this->Cooldown = 60.00f;
}

void UKillCameraComponent::OnKill(AActor* Killer, AActor* Victim, const FCauseDamageInfo& CauseDamageInfo) {
}


