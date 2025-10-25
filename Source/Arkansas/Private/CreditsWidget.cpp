#include "CreditsWidget.h"

UCreditsWidget::UCreditsWidget() {
    this->WidgetsPerSecond = 100;
    this->StartDelay = 1.50f;
    this->bPausedBlocksWidgetCreation = false;
    this->CreditOrganizationAssets.AddDefaulted(1);
    this->CreditsFormattingData = NULL;
    this->MusicCreditClass = NULL;
    this->ActiveVisibility = ESlateVisibility::Visible;
    this->InactiveVisibility = ESlateVisibility::Collapsed;
    this->OnCreditsStartGlobalVariableValue = 0;
    this->OnCreditsSkippedGlobalVariableValue = 0;
    this->OnCreditsEndedGlobalVariableValue = 0;
    this->CreditsScrollBox = NULL;
    this->CreditsVerticalBox = NULL;
    this->SkipAnimationWidget = NULL;
    this->LeftAnchorImage = NULL;
    this->RightAnchorImage = NULL;
}

void UCreditsWidget::TickCredits_BP(float DeltaTime) {
}

void UCreditsWidget::StartCredits_BP() {
}

void UCreditsWidget::PauseCredits(bool bIsPaused) {
}

void UCreditsWidget::BackSelected() {
}


