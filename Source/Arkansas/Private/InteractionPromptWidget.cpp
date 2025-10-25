#include "InteractionPromptWidget.h"

UInteractionPromptWidget::UInteractionPromptWidget() {
    this->InteractionNameTextBlock = NULL;
    this->TitleTextContainer = NULL;
    this->ContentBorder = NULL;
    this->ORDivider = NULL;
    this->PromptEntry1 = NULL;
    this->PromptEntry2 = NULL;
    this->LabelGroup = NULL;
    this->IntroOutroMultiplier = 10.00f;
    this->RecheckActiveInteractionInterval = 0.50f;
    this->ThrowableThreshold = 0.75f;
    this->DefaultAlignment = 0.10f;
    this->LootPreviewAlignment = 1.10f;
    this->ComparisonOffsetX = 0.00f;
    this->ComparisonAlignmentX = 0.50f;
    this->NonComparisonOffsetX = 0.00f;
    this->NonComparisonAlignmentX = 0.50f;
    this->bShowTooltipForAmmo = true;
}

void UInteractionPromptWidget::OnInteractionSelectionChange(const FInteractionDescription& Description) {
}


