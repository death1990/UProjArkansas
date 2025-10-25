#include "ConversationResponseWidget.h"

UConversationResponseWidget::UConversationResponseWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->HeaderClass = NULL;
    this->HeaderAlignment = VAlign_Center;
    this->SeperatorClass = NULL;
    this->SeparatorAlignment = VAlign_Center;
    this->bCondenseDuplicateHeaders = true;
    this->bCondenseOrHeaders = true;
    this->NormalPressedSound = NULL;
    this->SkillCheckPressedSound = NULL;
    this->ResponsePressedImage = NULL;
    this->TextHorizontalBox = NULL;
    this->HeaderHorizontalBox = NULL;
    this->Button = NULL;
    this->PrependMessageTextBlock = NULL;
    this->MessageTextBlock = NULL;
    this->ResponseNumberTextBlock = NULL;
}



bool UConversationResponseWidget::IsSelectable() const {
    return false;
}


