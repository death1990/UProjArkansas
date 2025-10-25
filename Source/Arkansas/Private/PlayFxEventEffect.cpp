#include "PlayFxEventEffect.h"

UPlayFxEventEffect::UPlayFxEventEffect() {
    this->Fx = NULL;
    this->FxSystem = NULL;
    this->ScaleType = EFxScaleType::Relative;
    this->Scale = 1.00f;
    this->bAttachToMesh = true;
    this->TargetMesh = EAttachTarget::FirstMesh;
    this->AttachSocketType = EAttachSocketType::ByName;
    this->bStaticLocation = false;
    this->bHideDuringScoped = true;
    this->TargetType = EFxTargetType::All;
    this->bForceSingleInstance = false;
    this->bPersistent = false;
}


