#include "SelectionInfo_ReputationWidget.h"

USelectionInfo_ReputationWidget::USelectionInfo_ReputationWidget() {
    this->PassedBackingColor = EIndianaUIColorType::Invalid;
    this->FailedBackingColor = EIndianaUIColorType::Invalid;
    this->PassedTextColor = EIndianaUIColorType::Invalid;
    this->FailedTextColor = EIndianaUIColorType::Invalid;
    this->FactionLogoBackgroundPassedIndex = 0;
    this->FactionLogoBackgroundFailedIndex = 1;
    this->FactionNameText = NULL;
    this->CheckboxImage = NULL;
    this->RequirementBackingBorder = NULL;
    this->RequirementText = NULL;
    this->ReputationStandingBar = NULL;
    this->FactionLogoImage = NULL;
    this->FactionLogoBackgroundSwitcher = NULL;
}


