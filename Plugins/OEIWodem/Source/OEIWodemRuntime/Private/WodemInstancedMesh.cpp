#include "WodemInstancedMesh.h"

FWodemInstancedMesh::FWodemInstancedMesh() {
    this->Probability = 0.00f;
    this->NoiseValue = 0.00f;
    this->bUseSlopeMask = false;
    this->bUseHeightMask = false;
    this->ScaleMultplier = 0.00f;
    this->MinMaxZRotation = 0.00f;
    this->NormalBlend = 0.00f;
    this->PlantingDepth = 0.00f;
    this->bEnableCollision = false;
    this->Instancer = NULL;
}

