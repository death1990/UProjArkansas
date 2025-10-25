#include "LightingRigComponent.h"

ULightingRigComponent::ULightingRigComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDecoupleRotation = true;
}


