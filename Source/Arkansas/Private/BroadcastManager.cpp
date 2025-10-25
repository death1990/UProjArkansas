#include "BroadcastManager.h"

UBroadcastManager::UBroadcastManager() {
    this->StationPreForced = NULL;
    this->PlayerStation = NULL;
}

void UBroadcastManager::SetRadioVolume(float NewVolume) {
}

void UBroadcastManager::RadioToggle(bool bPauseGameMusic) {
}

void UBroadcastManager::RadioSongOverride(const FString& Name) {
}

void UBroadcastManager::RadioSkipToNode(int32 StationIndex, int32 NodeID) {
}

void UBroadcastManager::RadioSkipSong() {
}

void UBroadcastManager::RadioSkipNode() {
}

void UBroadcastManager::RadioRestartSong() {
}

void UBroadcastManager::RadioPlayerSetStation(int32 Index) {
}

void UBroadcastManager::RadioPlayerEnable(bool bEnable) {
}

void UBroadcastManager::RadioDisplayInfo() {
}

void UBroadcastManager::RadioAllStations() {
}

void UBroadcastManager::OnWorldCleanup(UWorld* World, bool bSessionEnded, bool bCleanupResources) {
}

void UBroadcastManager::OnPostMapLoad(UWorld* World) {
}

UBroadcastManager* UBroadcastManager::GetBroadcastManager() {
    return NULL;
}


