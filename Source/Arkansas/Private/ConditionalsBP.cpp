#include "ConditionalsBP.h"
#include "Templates/SubclassOf.h"

UConditionalsBP::UConditionalsBP() {
}

bool UConditionalsBP::PlayerHasSkillOrPerkPoints(EBoolResult& OutResult) {
    return false;
}

bool UConditionalsBP::PlayerHasPerk(TSoftClassPtr<UPerk> Perk, EBoolResult& OutResult) {
    return false;
}

bool UConditionalsBP::PlayerHasFlaw(TSoftClassPtr<UFlaw> Flaw, EBoolResult& OutResult) {
    return false;
}

bool UConditionalsBP::IsWireEnabled(const AWire* Wire, EBoolResult& OutResult) {
    return false;
}

bool UConditionalsBP::IsTrapStateEqual(FGuid TrapObjectID, ETrapTriggerState State, EBoolResult& OutResult) {
    return false;
}

bool UConditionalsBP::IsRestrictedAreaEnabled(FGuid RestrictedAreaID, EBoolResult& OutResult) {
    return false;
}

bool UConditionalsBP::IsPlayerWounded(EBoolResult& OutResult) {
    return false;
}

bool UConditionalsBP::IsPlayerWithinVolume(FGameplayTag Type, FGameplayTag Flavor, EBoolResult& OutResult) {
    return false;
}

bool UConditionalsBP::IsPlayerSkill(ESkill Skill, EBoolResult& OutResult, EComparisonOperator Operator, ESkillDifficultyRange DifficultyRange, int32 TierOverride, int32 SkillValueOverride, bool bUseCompanionInterjection) {
    return false;
}

bool UConditionalsBP::IsPlayerShipLocation(TSoftObjectPtr<UShipDestinationData> ShipDestination, EBoolResult& OutResult) {
    return false;
}

bool UConditionalsBP::IsPlayerInStealth(EBoolResult& OutResult) {
    return false;
}

bool UConditionalsBP::IsPlayerInCombat(EBoolResult& OutResult) {
    return false;
}

bool UConditionalsBP::IsPartyFull(EBoolResult& OutResult) {
    return false;
}

bool UConditionalsBP::IsPackagedBuild(EBuildType BuildType, EBoolResult& OutResult) {
    return false;
}

bool UConditionalsBP::IsOCLStateEqual(FGuid OCLObjectID, EOCLState State, EBoolResult& OutResult) {
    return false;
}

bool UConditionalsBP::IsFactionRelationship(TSubclassOf<UFactionData> Faction, TEnumAsByte<ETeamAttitude::Type> AttitudeType, EBoolResult& OutResult) {
    return false;
}

bool UConditionalsBP::IsCurrentActiveCompanionAmount(EComparisonOperator Operator, int32 Quantity, EBoolResult& OutResult) {
    return false;
}

bool UConditionalsBP::IsCompanionInActiveParty(ESpecialObsidianID Companion, EBoolResult& OutResult) {
    return false;
}

bool UConditionalsBP::HasItem(TSoftClassPtr<UItem> Item, EBoolResult& OutResult, EComparisonOperator Operator, int32 Quantity) {
    return false;
}

bool UConditionalsBP::HasDLCTag(const FGameplayTag& DLCEntitlementTag, EBoolResult& OutResult) {
    return false;
}

bool UConditionalsBP::HasDLC(EDownLoadableContent DLC, EBoolResult& OutResult) {
    return false;
}

bool UConditionalsBP::DoesPlayerNeedDoctor(EBoolResult& OutResult) {
    return false;
}

bool UConditionalsBP::DoesConversationNodePass(UConversationAsset* Conversation, int32 NodeID, EBoolResult& OutResult) {
    return false;
}

bool UConditionalsBP::CompanionWantsToTalk(ESpecialObsidianID CompanionID, EBoolResult& OutResult) {
    return false;
}

bool UConditionalsBP::CompanionHasPerk(ESpecialObsidianID CompanionID, TSoftClassPtr<UPerk> Perk, EBoolResult& OutResult) {
    return false;
}

bool UConditionalsBP::CanPlayerAffordDoctor(EBoolResult& OutResult) {
    return false;
}


