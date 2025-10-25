#include "TargetCone.h"

FTargetCone::FTargetCone() {
    this->ConeHalfAngle = 0.00f;
    this->ConeAxis = EConeAxis::None;
    this->bInvertAxis = false;
    this->Radius = 0.00f;
    this->SourceType = ESpellEffectTarget::Self;
    this->bPenetratesWalls = false;
    this->MeshTarget = EMeshTarget::FirstMesh;
}

