#include "Conditionals.h"
#include "Templates/SubclassOf.h"

UConditionals::UConditionals() {
}

bool UConditionals::SpeakerHasCheckpointPendingResume(FGuid ConversationID, FGuid SpeakerID) {
    return false;
}

bool UConditionals::RequiredSkill(ESkill Skill, ESkillDifficultyRange DifficultyRange, ESkillDifficultyTier TierOverride, int32 SkillValueOverride, UDialogSpeechModifiersDataAsset* DialogSpeechModifiersDataAsset) {
    return false;
}

bool UConditionals::RequiredQuestStatus(FGuid QuestID, EQuestStatus QuestStatus) {
    return false;
}

bool UConditionals::RequiredQuestObjective(FGuid QuestID, int32 ObjectiveNodeID, EQuestObjectiveStatus ObjectiveNodeStatus) {
    return false;
}

bool UConditionals::RequiredQuestEndState(FGuid QuestID, int32 EndStateID) {
    return false;
}

bool UConditionals::RequiredQuest(FGuid QuestID, EQuestStatus QuestStatus, int32 ObjectiveNodeID, EQuestObjectiveStatus ObjectiveNodeStatus, int32 EndStateID) {
    return false;
}

bool UConditionals::RequiredPlayerTrait(TSoftClassPtr<UTrait> Trait) {
    return false;
}

bool UConditionals::RequiredPlayerPerk(TSoftClassPtr<UPerk> Perk) {
    return false;
}

bool UConditionals::RequiredPlayerBackground(TSoftClassPtr<UAptitude> Aptitude) {
    return false;
}

bool UConditionals::RequiredLuckyChance(bool bUseOverrideChance, float OverrideChance) {
    return false;
}

bool UConditionals::RequiredItemValue(TSubclassOf<UItem> Item, int32 Quantity) {
    return false;
}

bool UConditionals::RequiredItemCount(TSoftClassPtr<UItem> Item, int32 Quantity) {
    return false;
}

bool UConditionals::RequiredHack(ESkillDifficultyRange DifficultyRange, ESkillDifficultyTier TierOverride, int32 SkillValueOverride, UDialogSpeechModifiersDataAsset* DialogSpeechModifiersDataAsset) {
    return false;
}

bool UConditionals::RequiredGlobalInfo(const FGuid& Variable, EComparisonOperator Operator, int32 Value, FGuid GlobalScriptID, int32 StringID) {
    return false;
}

bool UConditionals::RequiredFlaw(TSoftClassPtr<UFlaw> Flaw) {
    return false;
}

bool UConditionals::RequiredFactionStanding(TSubclassOf<UFactionData> Faction, EStandingType StandingType, EStandingLevel StandingLevel, EComparisonOperator Operator) {
    return false;
}

bool UConditionals::RequiredFactionRank(TSubclassOf<UFactionData> Faction, EComparisonOperator Operator, ERankLevel RankLevel, bool bRankEarned) {
    return false;
}

bool UConditionals::RequiredCurrency(int32 Quantity) {
    return false;
}

bool UConditionals::RequiredCompanion(ESpecialObsidianID CompanionID) {
    return false;
}

bool UConditionals::PlayerHasTrait(TSoftClassPtr<UTrait> Trait) {
    return false;
}

bool UConditionals::PlayerHasSkillOrPerkPoints() {
    return false;
}

bool UConditionals::PlayerHasPerk(TSoftClassPtr<UPerk> Perk) {
    return false;
}

bool UConditionals::PlayerHasFlaw(TSoftClassPtr<UFlaw> Flaw) {
    return false;
}

bool UConditionals::PlayerHasBackground(TSoftClassPtr<UAptitude> Aptitude) {
    return false;
}

bool UConditionals::IsWireEnabled(const FGuid& WireID) {
    return false;
}

bool UConditionals::IsWeaponEquipped(TSoftClassPtr<UWeapon> Weapon, bool bIncludeDerivedClasses) {
    return false;
}

bool UConditionals::IsWeaponBrandEquipped(UBrandDataAsset* Brand) {
    return false;
}

bool UConditionals::IsTravelDestinationLocked(TSoftObjectPtr<UPointOfInterestData> TravelDestination) {
    return false;
}

bool UConditionals::IsTravelDestinationHidden(TSoftObjectPtr<UPointOfInterestData> TravelDestination) {
    return false;
}

bool UConditionals::IsTrapStateEqual(FGuid TrapObjectID, ETrapTriggerState State) {
    return false;
}

bool UConditionals::IsTimeSlice(int32 StartHour, int32 EndHour) {
    return false;
}

bool UConditionals::IsSpeakerGender(EOEIGender Gender) {
    return false;
}

bool UConditionals::IsSpeakerCrowdCharacter() {
    return false;
}

bool UConditionals::IsSpeaker(const FGuid& SpeakerID) {
    return false;
}

bool UConditionals::IsRestrictedAreaEnabled(FGuid RestrictedAreaID) {
    return false;
}

bool UConditionals::IsRespondingToCrime(EConditionalCrimeType Crime) {
    return false;
}

bool UConditionals::IsQuestTracked(FGuid QuestID, EBoolResult& OutResult) {
    return false;
}

bool UConditionals::IsPlayerWounded() {
    return false;
}

bool UConditionals::IsPlayerWithinVolume(FGameplayTag Type, FGameplayTag Flavor) {
    return false;
}

bool UConditionals::IsPlayerSkillWithModifiers(ESkill Skill, EComparisonOperator Operator, ESkillDifficultyRange DifficultyRange, int32 TierOverride, int32 SkillValueOverride, bool bUseCompanionInterjection, UDialogSpeechModifiersDataAsset* DialogSpeechModifiersDataAsset) {
    return false;
}

bool UConditionals::IsPlayerSkillLevelScaled(ESkill Skill, EComparisonOperator Operator, ESkillDifficultyTier SkillDifficultyTierOverride, ESkillDifficultyRange SkillDifficultyRange, bool bUseCompanionInterjection) {
    return false;
}

bool UConditionals::IsPlayerSkill(ESkill Skill, EComparisonOperator Operator, ESkillDifficultyRange DifficultyRange, int32 TierOverride, int32 SkillValueOverride, bool bUseCompanionInterjection) {
    return false;
}

bool UConditionals::IsPlayerShipLocation(TSoftObjectPtr<UShipDestinationData> ShipDestination) {
    return false;
}

bool UConditionals::IsPlayerInStealth() {
    return false;
}

bool UConditionals::IsPlayerInCombat() {
    return false;
}

bool UConditionals::IsPlayerInActiveHazard() {
    return false;
}

bool UConditionals::IsPlayerElektrumExposure(float ExposureRatio, EComparisonOperator Operator) {
    return false;
}

bool UConditionals::IsPlayerBountyLevel(TSubclassOf<UFactionData> Faction, EComparisonOperator Operator, EBountyLevel BountyLevel, int32 OverrideBountyAmount) {
    return false;
}

bool UConditionals::IsPlayerAwareOfPointOfInterest(UPointOfInterestData* POIData) {
    return false;
}

bool UConditionals::IsPhaseOfDay(EPhaseOfDay Phase) {
    return false;
}

bool UConditionals::IsPartyFull() {
    return false;
}

bool UConditionals::IsPackagedBuild(EBuildType BuildType) {
    return false;
}

bool UConditionals::IsOCLStateEqual(FGuid OCLObjectID, EOCLState State) {
    return false;
}

bool UConditionals::IsObservationSuccess(int32 Node) {
    return false;
}

bool UConditionals::IsNodeOffCooldown(int32 NodeID) {
    return false;
}

bool UConditionals::IsNight() {
    return false;
}

bool UConditionals::IsInterrogationInRestrictedArea() {
    return false;
}

bool UConditionals::IsInterrogationCrime(EConditionalCrimeType Crime) {
    return false;
}

bool UConditionals::IsInRegion(TSoftObjectPtr<UTravelRegionData> TravelRegion) {
    return false;
}

bool UConditionals::IsInMap(TSoftObjectPtr<UMapInformation> MapID) {
    return false;
}

bool UConditionals::IsFactionStanding(TSubclassOf<UFactionData> Faction, EStandingType StandingType, EStandingLevel StandingLevel, EComparisonOperator Operator) {
    return false;
}

bool UConditionals::IsFactionRelationship(TSubclassOf<UFactionData> Faction, TEnumAsByte<ETeamAttitude::Type> AttitudeType) {
    return false;
}

bool UConditionals::IsFactionRank(TSubclassOf<UFactionData> Faction, EComparisonOperator Operator, ERankLevel RankLevel, bool bRankEarned) {
    return false;
}

bool UConditionals::IsDay() {
    return false;
}

bool UConditionals::IsCurrentActiveCompanionAmount(EComparisonOperator Operator, int32 Quantity) {
    return false;
}

bool UConditionals::IsCompanionUnlocked(ESpecialObsidianID CompanionID) {
    return false;
}

bool UConditionals::IsCompanionInActiveParty(ESpecialObsidianID Companion) {
    return false;
}

bool UConditionals::IsCompanionDismissed(ESpecialObsidianID CompanionID) {
    return false;
}

bool UConditionals::IsAwareOfTravelDestination(TSoftObjectPtr<UPointOfInterestData> TravelDestination) {
    return false;
}

bool UConditionals::IsAwareOfRegion(TSoftObjectPtr<UTravelRegionData> TravelRegion) {
    return false;
}

bool UConditionals::IsArmorEquipped(TSoftClassPtr<UArmorItem> ArmorItem, bool bIncludeDerivedClasses) {
    return false;
}

bool UConditionals::IsArmorBrandEquipped(UBrandDataAsset* Brand) {
    return false;
}

bool UConditionals::IsAnyArmorEquipped() {
    return false;
}

bool UConditionals::HasVisitedTravelDestination(TSoftObjectPtr<UPointOfInterestData> TravelDestination) {
    return false;
}

bool UConditionals::HasVisitedRegion(TSoftObjectPtr<UTravelRegionData> TravelRegion) {
    return false;
}

bool UConditionals::HasTimeElapsedSinceNamedTimestamp(const FString& TimestampName, int32 Days, int32 Hours, int32 Minutes, float Seconds) {
    return false;
}

bool UConditionals::HasPlayerOnlyHeardAboutPointOfInterest(UPointOfInterestData* POIData) {
    return false;
}

bool UConditionals::HasPlayerDiscoveredPointOfInterest(UPointOfInterestData* POIData) {
    return false;
}

bool UConditionals::HasItemValue(const FGuid& Variable, TSubclassOf<UItem> Item) {
    return false;
}

bool UConditionals::HasItemsByTag(const FString& GameplayTag, EComparisonOperator Operator, int32 Quantity) {
    return false;
}

bool UConditionals::HasItemCountOnActor(const FGuid& ActorId, TSubclassOf<UItem> ItemType, int32 Count) {
    return false;
}

bool UConditionals::HasItem(TSoftClassPtr<UItem> Item, EComparisonOperator Operator, int32 Quantity) {
    return false;
}

bool UConditionals::HasInternetConnection() {
    return false;
}

bool UConditionals::HasInstanceBeenChecked(UConversationAsset* Conversation, EComparisonOperator Operator, int32 Quantity) {
    return false;
}

bool UConditionals::HasDLCTag(const FGameplayTag& DLCEntitlementTag) {
    return false;
}

bool UConditionals::HasDLC(EDownLoadableContent DLC) {
    return false;
}

bool UConditionals::HasCompletedAchievement(UAchievementDataAsset* Achievement) {
    return false;
}

void UConditionals::GetOCLState(FGuid OCLObjectID, EOCLState& State) {
}

bool UConditionals::DoesPlayerNeedDoctor() {
    return false;
}

bool UConditionals::DoesConversationNodePass(FGuid ConversationID, int32 NodeID) {
    return false;
}

bool UConditionals::CompanionWantsToTalk(ESpecialObsidianID CompanionID) {
    return false;
}

bool UConditionals::CompanionHasTrait(ESpecialObsidianID CompanionID, TSoftClassPtr<UTrait> Trait) {
    return false;
}

bool UConditionals::CompanionHasPerk(ESpecialObsidianID CompanionID, TSoftClassPtr<UPerk> Perk) {
    return false;
}

bool UConditionals::CanPlayerSafelyTakePickup(const FGuid& PickupID) {
    return false;
}

bool UConditionals::CanPlayerSafelyTakeItemTypeInContainer(const FGuid& ContainerID, const FString& Item) {
    return false;
}

bool UConditionals::CanPlayerPayBounty(TSubclassOf<UFactionData> Faction) {
    return false;
}

bool UConditionals::CanPlayerHearRadioStation(TSubclassOf<UBroadcastStationAsset> BroadcastStationAsset) {
    return false;
}

bool UConditionals::CanPlayerDiscoverPointOfInterest(UPointOfInterestData* POIData) {
    return false;
}

bool UConditionals::CanPlayerAffordDoctor() {
    return false;
}

bool UConditionals::CanInterrogationBribe(EBribeDifficulty BribeDifficulty) {
    return false;
}

bool UConditionals::CanExitGameViaMenu() {
    return false;
}

bool UConditionals::CanBribe(EBribeDifficulty BribeDifficulty, ESkillDifficultyTier DifficultyTier) {
    return false;
}

bool UConditionals::CanAccessTravelDestination(TSoftObjectPtr<UPointOfInterestData> TravelDestination) {
    return false;
}


