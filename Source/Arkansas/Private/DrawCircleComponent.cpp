#include "DrawCircleComponent.h"

UDrawCircleComponent::UDrawCircleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Radius = 100.00f;
    this->Thickness = 1.00f;
    this->NumSides = 64;
}


