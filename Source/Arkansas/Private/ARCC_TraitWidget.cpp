#include "ARCC_TraitWidget.h"

UARCC_TraitWidget::UARCC_TraitWidget() {
    this->AvailablePosiTrait = NULL;
    this->UnavailablePosiTrait = NULL;
    this->EntryClass = NULL;
    this->bDeselectingPositiveRevertsNegative = true;
    this->bUseBasicStringEntries = false;
    this->PositiveTraitListContainer = NULL;
    this->PositiveTraitPanel = NULL;
    this->NegativeTraitListContainer = NULL;
    this->DisabledOverlay = NULL;
    this->NegativeTraitPanel = NULL;
    this->StateInstructionsTextBlock = NULL;
    this->FocusPositive = NULL;
    this->PulsePositiveText = NULL;
    this->FocusNegative = NULL;
    this->PulseNegativeText = NULL;
    this->NextPositive = NULL;
    this->TextChanged = NULL;
}


ETraitSelectPhase UARCC_TraitWidget::GetCurrentState() const {
    return ETraitSelectPhase::FirstPositive;
}


