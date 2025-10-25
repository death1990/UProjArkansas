#include "ConversationMessageWidget.h"

UConversationMessageWidget::UConversationMessageWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->SpeakerTextColor = EIndianaUIColorType::Invalid;
    this->DialogueTextColor = EIndianaUIColorType::Invalid;
    this->bShouldLerpSizing = false;
    this->LerpTime = 0.50f;
    this->bShouldSplitLeadingActionString = true;
    this->AppendedSeparatorString = TEXT("\n\n");
    this->SpeakerTextBlock = NULL;
    this->PrependMessageTextBlock = NULL;
    this->MessageTextBlock = NULL;
    this->ContentSizeBox = NULL;
    this->ContentVerticalBox = NULL;
    this->BackingImage = NULL;
    this->MinimalResponseNode = NULL;
}

void UConversationMessageWidget::ContentLerpTick(float DeltaTime) {
}


