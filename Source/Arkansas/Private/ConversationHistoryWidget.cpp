#include "ConversationHistoryWidget.h"

UConversationHistoryWidget::UConversationHistoryWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->SpeakerClass = NULL;
    this->SizeBox = NULL;
    this->ScrollBox = NULL;
    this->GamepadScrollMultiplier = 0.00f;
    this->bDisplayLastMessageInHistory = false;
}


