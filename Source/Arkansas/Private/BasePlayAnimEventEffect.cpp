#include "BasePlayAnimEventEffect.h"

UBasePlayAnimEventEffect::UBasePlayAnimEventEffect() {
    this->FiringModeExclusivity = EFiringModeExclusivities::None;
    this->TargetMesh = EMeshTarget::FirstMesh;
    this->DelayTimeMin = 0.00f;
    this->DelayTimeMax = 0.00f;
    this->bComputeBlendOutTimeInDurationCalculation = false;
    this->bUseMontageSectioning = false;
    this->bSpecialStopBehavior = false;
    this->bCanPlayInCover = true;
    this->bForceVisible = true;
}


