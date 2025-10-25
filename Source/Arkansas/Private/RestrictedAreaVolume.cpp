#include "RestrictedAreaVolume.h"

ARestrictedAreaVolume::ARestrictedAreaVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->RestrictedArea = NULL;
    this->CustomDepthStencilValue = 255;
}


