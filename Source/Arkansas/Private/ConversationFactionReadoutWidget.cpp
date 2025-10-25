#include "ConversationFactionReadoutWidget.h"

UConversationFactionReadoutWidget::UConversationFactionReadoutWidget() {
    this->FactionNameTextBlock = NULL;
    this->FactionMoodTextBlock = NULL;
    this->PositiveRepReadout = NULL;
    this->NegativeRepReadout = NULL;
    this->NotificationDisplayTime = 2.35f;
}


void UConversationFactionReadoutWidget::OnHideWidget() {
}



