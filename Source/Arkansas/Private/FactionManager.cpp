#include "FactionManager.h"
#include "Templates/SubclassOf.h"

UFactionManager::UFactionManager() {
}

void UFactionManager::UpdateLastKnownBounties_BP() {
}

void UFactionManager::TransferBountyToNPC_BP(TSubclassOf<UFactionData> FactionData, FSpeakerReference SpeakerReference) {
}

void UFactionManager::SetRandomReputations_Debug() {
}

void UFactionManager::SetPositiveReputation_Debug(const FString& FactionName, int32 Amount) {
}

void UFactionManager::SetNegativeReputation_Debug(const FString& FactionName, int32 Amount) {
}

void UFactionManager::SetKillOnSight_Debug(const FString& FactionName) {
}

void UFactionManager::SetKillOnSight_BP(TSubclassOf<UFactionData> FactionData) {
}

void UFactionManager::RemoveBounty_BP(TSubclassOf<UFactionData> FactionData, FSpeakerReference SpeakerReference, EBountyAdjustment BountySize, int32 OverrideBountySize) {
}

void UFactionManager::ReducePlayerBountyToFlatRate_BP(TSubclassOf<UFactionData> FactionData, int32 FlatRate) {
}

void UFactionManager::RankUp_BP(TSubclassOf<UFactionData> FactionData) {
}

void UFactionManager::PayOffBounty_BP(TSubclassOf<UFactionData> FactionData) {
}

bool UFactionManager::IsPlayerBountyLevel_BP(TSubclassOf<UFactionData> FactionData, EComparisonOperator Operator, EBountyLevel BountyLevel, int32 OverrideBountyAmount) {
    return false;
}

bool UFactionManager::IsFactionStandingType_BP(TSubclassOf<UFactionData> FactionData, EStandingType StandingType) {
    return false;
}

bool UFactionManager::IsFactionStanding_BP(TSubclassOf<UFactionData> FactionData, EStandingType StandingType, EStandingLevel StandingLevel, EComparisonOperator Operator) {
    return false;
}

bool UFactionManager::IsFactionRank_BP(TSubclassOf<UFactionData> FactionData, EComparisonOperator Operator, ERankLevel RankLevel, bool bRankEarned) {
    return false;
}

void UFactionManager::GetReputationDescription_Debug(const FString& FactionName) {
}

int32 UFactionManager::GetPlayerBounty_BP(TSubclassOf<UFactionData> FactionData, bool bUseLastKnownBounty) {
    return 0;
}

float UFactionManager::GetBribeScalar_BP(EBribeDifficulty BribeDifficulty) {
    return 0.0f;
}

int32 UFactionManager::GetBounty_BP(TSubclassOf<UFactionData> FactionData, FSpeakerReference SpeakerReference, bool bUseLastKnownBounty) {
    return 0;
}

void UFactionManager::GetAllReputationDescriptions_Debug() {
}

bool UFactionManager::DoesFactionAdjustBountyOrStandingForCrime_BP(const TSubclassOf<UFactionData>& FactionData) {
    return false;
}

void UFactionManager::ClearFactionRecentHostilityToPlayer_BP(TSubclassOf<UFactionData> FactionData) {
}

void UFactionManager::AdjustFactionStanding_BP(TSubclassOf<UFactionData> FactionData, EStandingAdjustment StandingAdjustment, bool bPositiveAdjustment, float CustomStandingAdjustment, bool bIgnoreFactionScalar, bool bSetEncountered) {
}

void UFactionManager::AdjustFactionRank_BP(TSubclassOf<UFactionData> FactionData, ERankAdjustment RankAdjustment, bool bPositiveAdjustment, float CustomStandingAdjustment) {
}

void UFactionManager::AddPositiveReputation_Debug(const FString& FactionName, int32 Amount) {
}

void UFactionManager::AddPlayerBounty_Debug(const FString& FactionName, EBountyAdjustment BountySize, int32 OverrideBountySize) {
}

void UFactionManager::AddPlayerBounty_BP(TSubclassOf<UFactionData> FactionData, EBountyAdjustment BountySize, int32 OverrideBountySize) {
}

void UFactionManager::AddNegativeReputation_Debug(const FString& FactionName, int32 Amount) {
}

void UFactionManager::AddBounty_BP(TSubclassOf<UFactionData> FactionData, FSpeakerReference SpeakerReference, EBountyAdjustment BountySize, int32 OverrideBountySize) {
}


