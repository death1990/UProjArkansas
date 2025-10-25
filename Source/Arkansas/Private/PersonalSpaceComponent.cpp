#include "PersonalSpaceComponent.h"

UPersonalSpaceComponent::UPersonalSpaceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->AcknowledgementRadius = 800.00f;
    this->InteractionRadius = 400.00f;
    this->ViolationRadius = 100.00f;
    this->RoboDetectionRadius = 900.00f;
    this->ChatterPersonalSpaceZone = EPersonalSpaceZone::Acknowledgement;
}


