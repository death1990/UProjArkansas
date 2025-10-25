#include "AIHazardAvoidanceComponent.h"

UAIHazardAvoidanceComponent::UAIHazardAvoidanceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDebug = false;
    this->HazardAvoidanceEqsQuery = NULL;
}

void UAIHazardAvoidanceComponent::OnProjectileStopped(AProjectile* StoppedProjectile) {
}

void UAIHazardAvoidanceComponent::OnProjectileDestroyed(AProjectile* DestroyedProjectile) {
}

TArray<AActor*> UAIHazardAvoidanceComponent::GetActiveHazards() const {
    return TArray<AActor*>();
}


