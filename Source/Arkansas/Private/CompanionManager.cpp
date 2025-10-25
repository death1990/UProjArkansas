#include "CompanionManager.h"
#include "Templates/SubclassOf.h"

UCompanionManager::UCompanionManager() {
}

void UCompanionManager::UnlockCompanionBP(ESpecialObsidianID Companion) {
}

void UCompanionManager::SetRequestedCompanionsBP(ESpecialObsidianID LeftCompanion, ESpecialObsidianID RightCompanion) {
}

void UCompanionManager::SetCompanionWantsToTalk(ESpecialObsidianID Companion, bool bWantsToTalk) {
}

void UCompanionManager::SetCompanionAccessory_BP(ESpecialObsidianID CompanionID, TSubclassOf<UAccessory> ItemType, int32 SlotIndex) {
}

void UCompanionManager::SetCompanionAccessory(FName CompanionName, FName AccessoryName, int32 SlotIndex) {
}

void UCompanionManager::ReplaceCompanionInSlot(ESpecialObsidianID CompanionID, ECompanionSlot CommpanionSlot) {
}

bool UCompanionManager::IsCompanionUnlocked(ESpecialObsidianID Companion, EBoolResult& OutResult) {
    return false;
}

bool UCompanionManager::IsCompanionInRequestedParty(ESpecialObsidianID Companion, EBoolResult& OutResult) {
    return false;
}

bool UCompanionManager::IsCompanionInActiveParty(ESpecialObsidianID Companion, EBoolResult& OutResult) {
    return false;
}

bool UCompanionManager::IsCompanionDismissed(ESpecialObsidianID Companion, EBoolResult& OutResult) {
    return false;
}

bool UCompanionManager::HasPlayerUnlockedCompanions(EBoolResult& OutResult) {
    return false;
}

bool UCompanionManager::GetCompanionWantsToTalk(ESpecialObsidianID Companion) {
    return false;
}

FGuid UCompanionManager::GetCompanionGuid(ESpecialObsidianID SpecialID) {
    return FGuid{};
}


