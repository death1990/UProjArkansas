#include "ConversationDescription.h"

FConversationDescription::FConversationDescription() {
    this->StartNode = 0;
    this->StageInstance = NULL;
    this->StageAsset = NULL;
    this->Owner = NULL;
    this->bAllowBarkConversationDuringCombat = false;
}

