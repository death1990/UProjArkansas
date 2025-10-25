#include "OnInteractableSelectionChanged.h"

UOnInteractableSelectionChanged::UOnInteractableSelectionChanged() {
    this->Interaction = EInteractionType::None;
}

void UOnInteractableSelectionChanged::OnInteractableSelectionChanged(const FInteractionDescription& Description) const {
}


