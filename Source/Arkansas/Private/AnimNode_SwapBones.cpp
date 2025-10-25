#include "AnimNode_SwapBones.h"

FAnimNode_SwapBones::FAnimNode_SwapBones() {
    this->bSwapTranslation = false;
    this->bSwapRotation = false;
    this->bSwapScale = false;
    this->ControlSpace = BCS_WorldSpace;
}

