#include "PropEntry.h"

FPropEntry::FPropEntry() {
    this->SkeletalMeshToSpawn = NULL;
    this->StaticMeshToSpawn = NULL;
    this->NiagaraParticleSystemToSpawn = NULL;
    this->bAttachParticleToProp = false;
    this->DespawnRule = EDespawnRules::Idle;
    this->bSkeletalMeshUsesParentPose = false;
}

