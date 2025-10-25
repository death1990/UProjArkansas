#include "ImpactParticle.h"

FImpactParticle::FImpactParticle() {
    this->Fx = NULL;
    this->FxSystem = NULL;
    this->FxScale = 0.00f;
    this->bCombinedImpactEffect = false;
    this->bUseRotation = false;
    this->bAttach = false;
}

