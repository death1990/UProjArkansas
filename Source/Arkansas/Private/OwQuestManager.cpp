#include "OwQuestManager.h"

UOwQuestManager::UOwQuestManager() {
}

void UOwQuestManager::QuestTriggerAddendum(const FString& QuestName, int32 AddendumNode) {
}

void UOwQuestManager::QuestStartX(int32 StartCount) {
}

void UOwQuestManager::QuestStart(const FString& QuestName) {
}

void UOwQuestManager::QuestMentioned(const FString& QuestName) {
}

void UOwQuestManager::QuestListAll() {
}

void UOwQuestManager::QuestFail(const FString& QuestName) {
}

void UOwQuestManager::QuestComplete(const FString& QuestName) {
}

EQuestState UOwQuestManager::GetQuestState_BP(const FGuid& QuestID) const {
    return EQuestState::Invalid;
}


