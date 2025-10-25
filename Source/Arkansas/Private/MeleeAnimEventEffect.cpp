#include "MeleeAnimEventEffect.h"

UMeleeAnimEventEffect::UMeleeAnimEventEffect() {
    this->TargetMesh = EMeshTarget::CurrentCharacterMesh;
    this->MeleeAction = EMeleeAction::Invalid;
    this->CustomInterruptBlendOutTime = 0.25f;
}


