#include "AIOrientationComponent.h"

UAIOrientationComponent::UAIOrientationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->SettingsPerTrackingRegion.AddDefaulted(4);
}


