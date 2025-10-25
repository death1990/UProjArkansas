#include "AmbientRetriggerSplineEmitterComponent.h"

UAmbientRetriggerSplineEmitterComponent::UAmbientRetriggerSplineEmitterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AmbientAudioEvents.AddDefaulted(1);
    this->bHandleLifetimeAutomatically = false;
    this->SplineComponent = NULL;
}


