#include "ConversationBaseWidget.h"

UConversationBaseWidget::UConversationBaseWidget() {
    this->bStopOnlyGameInput = true;
    this->InvalidResponses = NULL;
    this->ResponsesContainer = NULL;
    this->InvalidResponsesContainer = NULL;
    this->ResponseWidgetClass = NULL;
    this->CheckPassedColor = EIndianaUIColorType::IndianaBrown;
    this->CheckFailedColor = EIndianaUIColorType::InteractionImpossible;
    this->CheckItemColor = EIndianaUIColorType::TextColorCustomization158;
    this->BribeBonusTexture = NULL;
    this->bShowBonusValue = false;
    this->bShowBonusMath = false;
    this->bAlwaysShowBonusText = true;
    this->MinSkipThreshold = 0.50f;
}

void UConversationBaseWidget::OnSkipInputAction() {
}

void UConversationBaseWidget::OnResponse9InputAction() {
}

void UConversationBaseWidget::OnResponse8InputAction() {
}

void UConversationBaseWidget::OnResponse7InputAction() {
}

void UConversationBaseWidget::OnResponse6InputAction() {
}

void UConversationBaseWidget::OnResponse5InputAction() {
}

void UConversationBaseWidget::OnResponse4InputAction() {
}

void UConversationBaseWidget::OnResponse3InputAction() {
}

void UConversationBaseWidget::OnResponse2InputAction() {
}

void UConversationBaseWidget::OnResponse1InputAction() {
}

void UConversationBaseWidget::OnPauseInputAction() {
}

void UConversationBaseWidget::OnGameplayDebuggerAction() {
}


