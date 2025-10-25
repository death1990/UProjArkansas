#include "AnimNotifyState_AbstractProp.h"

UAnimNotifyState_AbstractProp::UAnimNotifyState_AbstractProp() {
    this->LoadedPropDataToSpawn = NULL;
    this->PropDespawnTime = 0.10f;
    this->bProjectile = false;
    this->PropAnimToPlay = NULL;
}

void UAnimNotifyState_AbstractProp::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted, USkeletalMeshComponent* MeshComp) const {
}


