#include "InteractPromptEntryWidget.h"

UInteractPromptEntryWidget::UInteractPromptEntryWidget() {
    this->InteractInputWidget = NULL;
    this->InputTextBlock = NULL;
    this->HoldTimeContainer = NULL;
    this->HoldTimeTextBlock = NULL;
    this->CrimeDisplay = NULL;
    this->OptionalTextBlock = NULL;
    this->AddendumTextBlock = NULL;
    this->RPGInteraction = NULL;
    this->PerkIcon = NULL;
    this->FoodiePerkIcon = NULL;
    this->InteractionPromptSwitcher = NULL;
    this->LockedImage = NULL;
}

void UInteractPromptEntryWidget::OnInteractionModified(const FInteractionDescription& ModifiedDescription) {
}


