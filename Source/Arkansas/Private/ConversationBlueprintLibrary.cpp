#include "ConversationBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

UConversationBlueprintLibrary::UConversationBlueprintLibrary() {
}

void UConversationBlueprintLibrary::StopRadioStation(UBroadcastStationAsset* Station) {
}

void UConversationBlueprintLibrary::StartRadioStation(UBroadcastStationAsset* Station, int32 StartNode, bool bAllowRestart) {
}

UOwConversationInstance* UConversationBlueprintLibrary::StartConversationWithCompanion(ESpecialObsidianID CompanionID, UConversationAsset* Conversation, int32 StartNode, AStagePrefabActor* Stage, const FConversationInstanceBlueprintParams& InstanceBlueprintParams, EBoolResult& Result, bool bAllowBarkConversationDuringCombat) {
    return NULL;
}

UOwConversationInstance* UConversationBlueprintLibrary::StartConversationWithActor(AActor* Speaker, int32 StartNode, AStagePrefabActor* Stage, EBoolResult& Result, bool bAllowBarkConversationDuringCombat) {
    return NULL;
}

UOwConversationInstance* UConversationBlueprintLibrary::StartConversation(UConversationAsset* Conversation, AIndianaCharacter* Owner, AStagePrefabActor* Stage, TSubclassOf<UOwFPVPresentationMode> PresentationMode, int32 StartNode, const FConversationInstanceBlueprintParams& InstanceBlueprintParams, TArray<AActor*> OverrideCharacters, EBoolResult& Result, bool bAllowBarkConversationDuringCombat) {
    return NULL;
}

void UConversationBlueprintLibrary::SetRadioStation(UBroadcastStationAsset* Station) {
}

bool UConversationBlueprintLibrary::IsMatchingSpeaker(const AActor* SpeakerActor, FGuid SpeakerID) {
    return false;
}

bool UConversationBlueprintLibrary::IsMatchingConversation(const FConversationReference& InConversation, FGuid ConversationID) {
    return false;
}

FGuid UConversationBlueprintLibrary::GetConversationInstanceID(const UOwConversationInstance* Instance) {
    return FGuid{};
}

UOwConversationInstance* UConversationBlueprintLibrary::GetActivePlayerConversation() {
    return NULL;
}

void UConversationBlueprintLibrary::ForceRadioStation(UBroadcastStationAsset* Station) {
}

void UConversationBlueprintLibrary::EndRadioStation(UBroadcastStationAsset* Station) {
}

void UConversationBlueprintLibrary::EndConversationInstance(const UOwConversationInstance* Instance) {
}

void UConversationBlueprintLibrary::EndConversation(FGuid ConversationID) {
}

void UConversationBlueprintLibrary::DiscoverRadioStation(UBroadcastStationAsset* Station, bool bDiscovered) {
}

bool UConversationBlueprintLibrary::CompareSpeakerIDs(FGuid SpeakerA, FGuid SpeakerB) {
    return false;
}

bool UConversationBlueprintLibrary::CanStartConversation(const UObject* WorldContextObject, UConversationAsset* Conversation, EBoolResult& Result, bool bAllowBarkConversationDuringCombat) {
    return false;
}

void UConversationBlueprintLibrary::AdvanceConversationInstance(UOwConversationInstance* Instance) {
}


