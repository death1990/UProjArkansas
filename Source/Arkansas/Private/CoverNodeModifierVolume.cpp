#include "CoverNodeModifierVolume.h"

ACoverNodeModifierVolume::ACoverNodeModifierVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDisableCoverNodes = false;
}

bool ACoverNodeModifierVolume::IsCoverNodesDisabled(bool bDisable) {
    return false;
}

void ACoverNodeModifierVolume::DisableCoverNodes(bool bDisable) {
}


