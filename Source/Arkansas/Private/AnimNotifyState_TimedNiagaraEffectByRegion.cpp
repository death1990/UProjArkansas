#include "AnimNotifyState_TimedNiagaraEffectByRegion.h"

UAnimNotifyState_TimedNiagaraEffectByRegion::UAnimNotifyState_TimedNiagaraEffectByRegion() {
    this->DefaultNiagaraSystem = NULL;
    this->bApplyRateScaleAsTimeDilation = false;
    this->bDestroyAtEnd = false;
}

UFXSystemComponent* UAnimNotifyState_TimedNiagaraEffectByRegion::GetSpawnedEffect(UMeshComponent* MeshComp) const {
    return NULL;
}


