#include "OEIWwiseEmitterComponent.h"

UOEIWwiseEmitterComponent::UOEIWwiseEmitterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->WwiseObjectPoolWrapper = NULL;
    this->bUpdateEmitterPosition = false;
    this->bEnableAcoustics = true;
    this->bDisableOcclusion = false;
    this->bEnableDynamicOpenings = true;
    this->bEnableAcousticsVolumes = true;
    this->InterpolationResolver = OEIAcousticsInterpolationDisambiguationMode::Default;
    this->bDrawAcousticsDebugInfo = false;
    this->bHasListenerAudio = false;
    this->bUseOwnLocation = false;
}

void UOEIWwiseEmitterComponent::SetAttenuationScalingFactor(float Value) {
}



float UOEIWwiseEmitterComponent::GetAttenuationScalingFactor() const {
    return 0.0f;
}


