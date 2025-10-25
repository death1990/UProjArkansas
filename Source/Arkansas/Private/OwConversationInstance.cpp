#include "OwConversationInstance.h"

UOwConversationInstance::UOwConversationInstance() {
    this->ProximityCheckTime = 0.30f;
    this->IndividualProximityCheckDistance = 800.00f;
    this->CompanionProximityCheckDistance = 1000.00f;
    this->ProximityCheckDistanceCap = 3000.00f;
    this->StageNavModifierComponent = NULL;
    this->bShowSkipWidgetForBarkCinematic = false;
}

bool UOwConversationInstance::WasConversationInterrupted() const {
    return false;
}

bool UOwConversationInstance::RequiresSubtitles_Implementation() const {
    return false;
}

void UOwConversationInstance::QueueCameraReturnToPlayer() {
}

void UOwConversationInstance::OnTimeDilationUpdated(float Value) {
}

void UOwConversationInstance::OnPlayerTeleportedToStageMark(AIndianaCharacter* Character, AStageMarkActor* StageMark) {
}

void UOwConversationInstance::OnParticipantCineActorTargetSettingsUpdate() {
}

void UOwConversationInstance::OnCharacterDeath(AActor* Instigator, const FCauseDamageInfo& CauseDamageInfo) {
}

void UOwConversationInstance::OnCharacterCombatStateChange(AIndianaCharacter* Character, bool bIsInCombat, bool bRestoring) {
}

void UOwConversationInstance::OnBarkCinematicSkipped() {
}

bool UOwConversationInstance::IsTalkNode(int32 NodeID) const {
    return false;
}

bool UOwConversationInstance::IsConversationEnded() const {
    return false;
}

FBox UOwConversationInstance::GetStageNavModifierBounds() const {
    return FBox{};
}

UOwConversationManager* UOwConversationInstance::GetOWConversationManager() const {
    return NULL;
}

FGuid UOwConversationInstance::GetCurrentSpeakerID() const {
    return FGuid{};
}

AActor* UOwConversationInstance::GetCurrentSpeaker() const {
    return NULL;
}

void UOwConversationInstance::GamePauseChanged(bool bIsPaused) {
}








int32 UOwConversationInstance::BP_GetCurrentNodeID() const {
    return 0;
}

ENodeDisplayType UOwConversationInstance::BP_GetConversationDisplayType() const {
    return ENodeDisplayType::Hidden;
}

TArray<AActor*> UOwConversationInstance::BP_GetAllSpeakers() const {
    return TArray<AActor*>();
}


