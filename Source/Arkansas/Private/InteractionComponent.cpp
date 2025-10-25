#include "InteractionComponent.h"

UInteractionComponent::UInteractionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->MaxInteractRange = 250.00f;
}

float UInteractionComponent::GetMaxInteractRange(EInteractionType InteractionType) const {
    return 0.0f;
}


