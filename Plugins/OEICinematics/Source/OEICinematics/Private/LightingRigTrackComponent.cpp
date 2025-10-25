#include "LightingRigTrackComponent.h"

ULightingRigTrackComponent::ULightingRigTrackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Radius = 100.00f;
    this->HorizontalAngle = 0.00f;
    this->VerticalAngle = 45.00f;
}


