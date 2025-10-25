#include "QuestConditionals.h"

UQuestConditionals::UQuestConditionals() {
}

bool UQuestConditionals::IsQuestSucceeded(FGuid QuestID) {
    return false;
}

bool UQuestConditionals::IsQuestStatus(FGuid QuestID, bool bFailed, bool bActive, bool bComplete, bool bMentioned, bool bStarted) {
    return false;
}

bool UQuestConditionals::IsQuestStateVisited(FGuid QuestID, int32 NodeID) {
    return false;
}

bool UQuestConditionals::IsQuestStateIrrelevant(FGuid QuestID, int32 NodeID) {
    return false;
}

bool UQuestConditionals::IsQuestStateActive(FGuid QuestID, int32 NodeID) {
    return false;
}

bool UQuestConditionals::IsQuestStarted(FGuid QuestID) {
    return false;
}

bool UQuestConditionals::IsQuestMentioned(FGuid QuestID) {
    return false;
}

bool UQuestConditionals::IsQuestEventTriggered(FGuid QuestID, int32 QuestEventID) {
    return false;
}

bool UQuestConditionals::IsQuestEndStateTriggered(FGuid QuestID, int32 EndStateID) {
    return false;
}

bool UQuestConditionals::IsQuestComplete(FGuid QuestID) {
    return false;
}

bool UQuestConditionals::IsQuestAddendumTriggered(FGuid QuestID, int32 AddendumID) {
    return false;
}

bool UQuestConditionals::IsQuestActive(FGuid QuestID) {
    return false;
}

bool UQuestConditionals::HasQuestSucceeded(FGuid QuestID) {
    return false;
}

bool UQuestConditionals::HasQuestStateSucceeded(FGuid QuestID, int32 NodeID) {
    return false;
}

bool UQuestConditionals::HasQuestStateFailedOrIsIrrelevant(FGuid QuestID, int32 NodeID) {
    return false;
}

bool UQuestConditionals::HasQuestStateFailed(FGuid QuestID, int32 NodeID) {
    return false;
}

bool UQuestConditionals::HasQuestFailed(FGuid QuestID) {
    return false;
}

bool UQuestConditionals::HasQuestEnded(FGuid QuestID) {
    return false;
}


