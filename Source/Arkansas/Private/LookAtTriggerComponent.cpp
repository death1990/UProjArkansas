#include "LookAtTriggerComponent.h"
#include "ETargetingVisibilityMethod.h"

ULookAtTriggerComponent::ULookAtTriggerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VisibilityMethod = ETargetingVisibilityMethod::LookingAtSurface;
    this->bRequiresRecentRenderingForSelection = false;
    this->bRequiresLineOfSightForSelection = true;
    this->RequiresLoS = true;
    this->MaximumTriggerDistance = 0.00f;
    this->HoldTimeToActivate = 0.00f;
    this->bShowProgressBar = false;
}

void ULookAtTriggerComponent::SetObservationEnabled(bool bNewObservationEnabled) {
}

void ULookAtTriggerComponent::ActivateTrigger_BP(AActor* Actor) {
}


