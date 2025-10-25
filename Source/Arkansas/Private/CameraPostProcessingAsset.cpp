#include "CameraPostProcessingAsset.h"

UCameraPostProcessingAsset::UCameraPostProcessingAsset() {
    this->bApplyCameraModifier = false;
    this->ModifierClass = NULL;
    this->DelayBeforeDisable = 1.00f;
    this->bImmediateDisable = false;
    this->bApplyCameraShake = false;
    this->CameraShake = NULL;
    this->Attenuation = ECameraShakeAttenuation::Linear;
    this->InnerAttenuationRadius = 0.00f;
    this->OuterAttenuationRadius = 0.00f;
}


