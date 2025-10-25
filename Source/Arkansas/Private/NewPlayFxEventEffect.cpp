#include "NewPlayFxEventEffect.h"

UNewPlayFxEventEffect::UNewPlayFxEventEffect() {
    this->PlayFxTarget = EPlayFxTarget::Any;
    this->ForcedPlayerPerspective = EMeshPerspective::Current;
    this->NiagaraSystem = NULL;
    this->SystemType = EFXType::OneShot;
    this->ScaleType = EFxScaleType::None;
    this->Scale = 1.00f;
    this->bAttachToTarget = false;
    this->bUseTargetsFPVCamera = false;
    this->bUseTargetsMesh = false;
    this->bAutoDestroyNiagaraSystem = true;
    this->TargetMesh = EMeshTarget::FirstMesh;
    this->AttachLocationType = EFXAttachLocationType::Root;
    this->TriggeredSystemEventParamName = TEXT("EventID");
    this->bSetNiagaraPosition = false;
    this->NiagaraZOffset = 0.00f;
    this->bAllowRenderForeground = true;
}

void UNewPlayFxEventEffect::OnPlayerShoulderSwap(const bool bUseAlternateShoulder) {
}


