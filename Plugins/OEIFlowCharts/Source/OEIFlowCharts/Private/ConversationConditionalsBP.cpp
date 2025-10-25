#include "ConversationConditionalsBP.h"

UConversationConditionalsBP::UConversationConditionalsBP() {
}

bool UConversationConditionalsBP::IsSpeakerDead(FGuid Speaker, EBoolResult& OutResult) {
    return false;
}

bool UConversationConditionalsBP::IsInstanceDead(FGuid Instance, EBoolResult& OutResult) {
    return false;
}

bool UConversationConditionalsBP::HasConversationNodeBeenVisited(FGuid ConversationID, int32 NodeID, EBoolResult& OutResult) {
    return false;
}


