#include "OwConversationManager.h"

UOwConversationManager::UOwConversationManager() {
    this->PendingConversationInstance = NULL;
}

void UOwConversationManager::OnSpeakerActorEndPlay(AActor* SpeakerActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void UOwConversationManager::OnSpeakerActorDestroyed(AActor* SpeakerActor) {
}

void UOwConversationManager::OnResumeExpirationTimerComplete() {
}

void UOwConversationManager::OnResumeDelayTimerComplete() {
}

void UOwConversationManager::OnResumeConditionsQueryTimerComplete() {
}

bool UOwConversationManager::IsPlayerInInterrogationConversation() {
    return false;
}

bool UOwConversationManager::IsConversationValid(const FConversationReference& Conversation, AActor* Owner, int32 InStartingNode) {
    return false;
}

bool UOwConversationManager::IsConversationInterruptActive() {
    return false;
}

bool UOwConversationManager::IsCharacterValidForGenericSpeaker(const FConversationReference& Conversation, AActor* Character) {
    return false;
}


