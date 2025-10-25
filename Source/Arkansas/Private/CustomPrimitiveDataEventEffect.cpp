#include "CustomPrimitiveDataEventEffect.h"

UCustomPrimitiveDataEventEffect::UCustomPrimitiveDataEventEffect() {
    this->TargetMesh = EMeshTarget::CurrentCharacterMesh;
    this->PrimitiveDataIndex = -1;
    this->TargetValue = 0.00f;
    this->BlendDuration = 0.00f;
    this->BlendCurve = NULL;
    this->bUseBlendOutTime = false;
    this->BlendOutDuration = 0.00f;
    this->BlendOutCurve = NULL;
    this->Priority = 0;
    this->bAllowSamePriorityOverride = false;
    this->bPersistAfterCharacterDeath = false;
    this->bScaleWithStackCount = false;
}


