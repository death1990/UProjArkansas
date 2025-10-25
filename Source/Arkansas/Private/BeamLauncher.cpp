#include "BeamLauncher.h"

ABeamLauncher::ABeamLauncher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeamImpactDataSet = NULL;
    this->NiagaraFxShotOrigin = NULL;
    this->NiagaraFxShotEnd = NULL;
    this->NiagaraFxBeam = NULL;
    this->AttackFxBeamEndParam = TEXT("BeamEnd");
}


