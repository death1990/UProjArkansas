#include "ConversationConditionals.h"

UConversationConditionals::UConversationConditionals() {
}

bool UConversationConditionals::IsSpeakerDead(FGuid Speaker) {
    return false;
}

bool UConversationConditionals::IsInstanceDead(FGuid Instance) {
    return false;
}

bool UConversationConditionals::HasConversationNodeBeenVisited(FGuid ConversationID, int32 NodeID) {
    return false;
}


