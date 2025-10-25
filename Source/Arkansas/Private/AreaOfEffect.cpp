#include "AreaOfEffect.h"

FAreaOfEffect::FAreaOfEffect() {
    this->CollisionSizeStat = NULL;
    this->SourceType = ESpellEffectTarget::Self;
    this->bIgnoreSources = false;
    this->bPenetratesWalls = false;
    this->MeshTarget = EMeshTarget::FirstMesh;
}

