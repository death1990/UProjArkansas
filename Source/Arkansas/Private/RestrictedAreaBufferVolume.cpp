#include "RestrictedAreaBufferVolume.h"

ARestrictedAreaBufferVolume::ARestrictedAreaBufferVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->RestrictedArea = NULL;
}


