#include "OnPlayerConversationChange.h"

UOnPlayerConversationChange::UOnPlayerConversationChange() {
    this->bEntered = true;
    this->bIgnoreTerminals = false;
}

void UOnPlayerConversationChange::OnPlayerConversationChange(AActor* Participant, const FGuid& NavigatorID, bool bInEntered) {
}


