#include "TrackLightComponent.h"

UTrackLightComponent::UTrackLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseTemperature = true;
    this->ExposureIntesity = 0.50f;
}


