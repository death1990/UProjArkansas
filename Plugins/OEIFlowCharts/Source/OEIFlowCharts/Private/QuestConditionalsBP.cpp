#include "QuestConditionalsBP.h"

UQuestConditionalsBP::UQuestConditionalsBP() {
}

bool UQuestConditionalsBP::IsQuestSucceeded(FGuid QuestID, EBoolResult& OutResult) {
    return false;
}

bool UQuestConditionalsBP::IsQuestStatus(FGuid QuestID, bool bFailed, bool bActive, bool bComplete, bool bMentioned, bool bStarted, EBoolResult& OutResult) {
    return false;
}

bool UQuestConditionalsBP::IsQuestStateVisited(FGuid QuestID, int32 NodeID, EBoolResult& OutResult) {
    return false;
}

bool UQuestConditionalsBP::IsQuestStateIrrelevant(FGuid QuestID, int32 NodeID, EBoolResult& OutResult) {
    return false;
}

bool UQuestConditionalsBP::IsQuestStateActive(FGuid QuestID, int32 NodeID, EBoolResult& OutResult) {
    return false;
}

bool UQuestConditionalsBP::IsQuestStarted(FGuid QuestID, EBoolResult& OutResult) {
    return false;
}

bool UQuestConditionalsBP::IsQuestMentioned(FGuid QuestID, EBoolResult& OutResult) {
    return false;
}

bool UQuestConditionalsBP::IsQuestEndStateTriggered(FGuid QuestID, int32 EndStateID, EBoolResult& OutResult) {
    return false;
}

bool UQuestConditionalsBP::IsQuestComplete(FGuid QuestID, EBoolResult& OutResult) {
    return false;
}

bool UQuestConditionalsBP::IsQuestAddendumTriggered(FGuid QuestID, int32 AddendumID, EBoolResult& OutResult) {
    return false;
}

bool UQuestConditionalsBP::HasQuestSucceeded(FGuid QuestID, EBoolResult& OutResult) {
    return false;
}

bool UQuestConditionalsBP::HasQuestStateSucceeded(FGuid QuestID, int32 NodeID, EBoolResult& OutResult) {
    return false;
}

bool UQuestConditionalsBP::HasQuestStateFailedOrIsIrrelevant(FGuid QuestID, int32 NodeID, EBoolResult& OutResult) {
    return false;
}

bool UQuestConditionalsBP::HasQuestStateFailed(FGuid QuestID, int32 NodeID, EBoolResult& OutResult) {
    return false;
}

bool UQuestConditionalsBP::HasQuestFailed(FGuid QuestID, EBoolResult& OutResult) {
    return false;
}

bool UQuestConditionalsBP::HasQuestEnded(FGuid QuestID, EBoolResult& OutResult) {
    return false;
}


