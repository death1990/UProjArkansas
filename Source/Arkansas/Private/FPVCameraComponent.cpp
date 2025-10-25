#include "FPVCameraComponent.h"

UFPVCameraComponent::UFPVCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CrouchedCameraHeightOffset = -50.00f;
    this->WeaponFOVPlugin = NULL;
}

void UFPVCameraComponent::OnFieldOfViewSettingChanged(float NewFOV) {
}

void UFPVCameraComponent::OffsetReticleChanged(bool bOffsetReticle) {
}


