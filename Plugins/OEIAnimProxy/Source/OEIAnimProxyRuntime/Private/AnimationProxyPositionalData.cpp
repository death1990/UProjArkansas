#include "AnimationProxyPositionalData.h"

FAnimationProxyPositionalData::FAnimationProxyPositionalData() {
    this->Start = NULL;
    this->Exit = NULL;
    this->CombatExit = NULL;
    this->bAlignToGroundOnBlendOut = false;
    this->bUseMontageBlendOutAsSyncEnd = false;
    this->ResponseStart = NULL;
    this->ResponseExit = NULL;
    this->ResponseCombatExit = NULL;
    this->bHidePropOnAnimComplete = false;
}

