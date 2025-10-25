#include "ProjectileArcVisuals.h"

UProjectileArcVisuals::UProjectileArcVisuals() {
    this->CameraModifier = NULL;
    this->NiagaraBeamSystem = NULL;
    this->StopLocationNiagaraSystem = NULL;
    this->bStopLocationPulse = true;
    this->MinLocations = 20;
    this->SimulatedProjectileClass = NULL;
    this->FakedTrajectorySimFrequency = 10.00f;
    this->SimilarNormalHalfAngle = 5.00f;
}


void UProjectileArcVisuals::OnSimulatedProjectileStop(const FHitResult& ImpactResult) {
}


