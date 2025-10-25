#include "RPGExaminableWidget.h"

URPGExaminableWidget::URPGExaminableWidget() {
    this->MaxImageSize = 1000.00f;
    this->SizeBoxPadding = 32.00f;
    this->TitleTextBlock = NULL;
    this->ExaminableImage = NULL;
    this->ContentSizeBox = NULL;
    this->ItemTooltip = NULL;
    this->ItemTooltipContainer = NULL;
    this->DescriptionSizeBox = NULL;
    this->DescriptionRTB = NULL;
    this->OptionsScrollBox = NULL;
    this->InvisibleButton = NULL;
    this->DescScrollBox = NULL;
    this->CircularThrobber = NULL;
    this->ExtraDataPanel = NULL;
    this->ExtraDataContainer = NULL;
    this->ExaminableImageContainer = NULL;
    this->ExaminableSwitcher = NULL;
    this->ExtraDataTextBlock = NULL;
    this->ChoicesVerticalBox = NULL;
    this->OptionsInputLabelGroup = NULL;
    this->ExaminableInputLabelGroup = NULL;
    this->ExitLabelPrimary = NULL;
    this->ExitLabelSecondary = NULL;
    this->ExaminableEntry1 = NULL;
    this->ExaminableEntry2 = NULL;
    this->ExaminableEntry3 = NULL;
    this->ExaminableEntry4 = NULL;
    this->ExaminableEntry5 = NULL;
    this->AltRequirementContainer = NULL;
    this->FadeIn = NULL;
    this->FadeOut = NULL;
    this->ShowExtraData = NULL;
    this->HideExtraData = NULL;
    this->GamepadScrollMultiplier = 9.00f;
    this->FadeOutPlaybackSpeed = 1.00f;
    this->bForceCloseOnRepeatedInput = true;
    this->bShowSelectForKeyboard = false;
    this->bResizeRpgExaminablesWhenTextOnly = true;
    this->HoveredEntry = NULL;
}

void URPGExaminableWidget::OnSelectEmptyHandler() {
}

void URPGExaminableWidget::OnResponse6InputAction() {
}

void URPGExaminableWidget::OnResponse5InputAction() {
}

void URPGExaminableWidget::OnResponse4InputAction() {
}

void URPGExaminableWidget::OnResponse3InputAction() {
}

void URPGExaminableWidget::OnResponse2InputAction() {
}

void URPGExaminableWidget::OnResponse1InputAction() {
}

void URPGExaminableWidget::OnFadeOutFinished() {
}


