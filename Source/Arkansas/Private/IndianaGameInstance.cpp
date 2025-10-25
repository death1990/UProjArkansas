#include "IndianaGameInstance.h"

UIndianaGameInstance::UIndianaGameInstance() {
    this->SettingsSubsystemClass = NULL;
    this->ConversationManager = NULL;
    this->QuestManager = NULL;
    this->GlobalTeamManager = NULL;
    this->GlobalFactionManager = NULL;
    this->DifficultyManager = NULL;
    this->BeaconManager = NULL;
    this->TutorialManager = NULL;
    this->TutorialManagerClass = NULL;
    this->AchievementsManager = NULL;
    this->SaveGameManager = NULL;
    this->GameCalendar = NULL;
    this->CompanionManager = NULL;
    this->OverridePlayerClass = NULL;
    this->LoadingScreenManager = NULL;
    this->MusicManager = NULL;
    this->MusicSettings = NULL;
    this->CombatSubsystem = NULL;
    this->PlayerLoadoutSubsystem = NULL;
    this->TravelManager = NULL;
    this->RestrictedAreaManager = NULL;
    this->AudioLogManager = NULL;
    this->AudioLogManagerClass = NULL;
    this->RadioManager = NULL;
    this->RadioManagerClass = NULL;
    this->AkRadioController = NULL;
    this->BroadcastManager = NULL;
    this->BroadcastManagerClass = NULL;
    this->AkRadioControllerClass = NULL;
    this->AudioMixerManager = NULL;
    this->AudioMixerManagerClass = NULL;
    this->ParticlePool = NULL;
    this->AutoPlayer = NULL;
    this->DevelopmentFunctionality = NULL;
}

void UIndianaGameInstance::SetOverridePlayerClass(UClass* Override) {
}

void UIndianaGameInstance::QueueEndGameLoadingScreen(EEndGameImageType EndGameType) {
}

void UIndianaGameInstance::QueueCredits(bool bShouldQueue) {
}

bool UIndianaGameInstance::K2_IsOEISpecialIDActor(AActor* Actor, ESpecialObsidianID ID) {
    return false;
}

AActor* UIndianaGameInstance::K2_GetOEISpecialIDActor(ESpecialObsidianID ID, bool bAllowStasis, bool& IsValid) {
    return NULL;
}

bool UIndianaGameInstance::HasVisitedMainMenu() const {
    return false;
}


UOwQuestManager* UIndianaGameInstance::GetQuestManager_BP() const {
    return NULL;
}

UFactionManager* UIndianaGameInstance::GetFactionManager_BP() const {
    return NULL;
}

UOwConversationManager* UIndianaGameInstance::GetConversationManager_BP() const {
    return NULL;
}

UCompanionManager* UIndianaGameInstance::GetCompanionManager_BP() const {
    return NULL;
}

UBroadcastManager* UIndianaGameInstance::GetBroadcastManager_BP() const {
    return NULL;
}

void UIndianaGameInstance::CacheCharacterCreationDataPreLoad() {
}

bool UIndianaGameInstance::AreCreditsQueued() const {
    return false;
}

bool UIndianaGameInstance::AreCreditsPlaying() const {
    return false;
}


