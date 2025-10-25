#include "KillVolume.h"

AKillVolume::AKillVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPreventRevival = true;
    this->bDrowningHazard = false;
    this->WaterGravityScalar = 0.10f;
    this->WaterVelocityScalar = 0.10f;
}

void AKillVolume::Resurrected(UHealthComponent* HealthComponent) {
}


