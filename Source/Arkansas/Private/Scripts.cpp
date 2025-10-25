#include "Scripts.h"
#include "Templates/SubclassOf.h"

UScripts::UScripts() {
}

void UScripts::WireTogglePower(const FGuid& WireID) {
}

void UScripts::WireSetPower(const FGuid& WireID, bool bEnabled) {
}

void UScripts::UpdateFogForVolume(const FGuid& FogOfWarVolumeID) {
}

void UScripts::UpdateArchiveScreenPersonality(EScreenPersonalityType PersonalityType, bool bEnableScreen) {
}

void UScripts::UnsealOCL(const FGuid& OCLObjectID) {
}

void UScripts::UnlockOCL(const FGuid& OCLObjectID) {
}

void UScripts::UnlockComputer(const FGuid& ComputerObjectID) {
}

void UScripts::UnlockCompanion(ESpecialObsidianID CompanionID) {
}

void UScripts::UnjamOCL(const FGuid& OCLObjectID) {
}

void UScripts::UnbarOCL(const FGuid& OCLObjectID) {
}

void UScripts::TreatPartyViaDoctor(bool bIsFreeTreatment) {
}

void UScripts::TravelToDestination(UPointOfInterestData* TravelDestination, bool bTriggerAutosave) {
}

void UScripts::TransferBountyToNPC(TSubclassOf<UFactionData> Faction, const FGuid& SpeakerID) {
}

void UScripts::StopLoudspeaker(const FString& StationTag, bool bPreventRestart) {
}

void UScripts::StartLoudspeaker(const FString& StationTag, bool bForceStart, int32 StartNode) {
}

void UScripts::SpeechAttackAction(ESpeechAttackType BuffDebuffType, const FGuid& CharacterID, FString& OtherTeam, bool bMutual) {
}

void UScripts::ShowWorkbench() {
}

void UScripts::ShowBeacon(const FGuid& BeaconObjectID) {
}

void UScripts::SetVisitedTravelDestination(UPointOfInterestData* TravelDestination) {
}

void UScripts::SetVisitedRegion(UTravelRegionData* TravelRegion) {
}

void UScripts::SetTravelDestinationLocked(UPointOfInterestData* TravelDestination, bool bLocked) {
}

void UScripts::SetTravelDestinationHidden(UPointOfInterestData* TravelDestination, bool bHidden) {
}

void UScripts::SetTrackedQuest(FGuid QuestID) {
}

void UScripts::SetTeamRelationship(TSubclassOf<UBaseTeamData> SourceTeam, TSubclassOf<UBaseTeamData> OtherTeam, TEnumAsByte<ETeamAttitude::Type> Relationship, bool bMutual) {
}

void UScripts::SetTalkIdleOverrideGameplayTag(FGuid Actor, FGameplayTag TalkIdleOverrideGameplayTag, FGameplayTag EmotionGameplayTag, float Delay, float Duration, bool Persist) {
}

void UScripts::SetTalkIdleOverride(FGuid Actor, FName TalkIdleOverrideName, EEmotion Emotion, float Delay, float Duration, bool Persist) {
}

void UScripts::SetSpeakersTalkIdleOverrideGameplayTag(FGameplayTag TalkIdleOverrideGameplayTag, FGameplayTag EmotionGameplayTag, float Delay, float Duration, bool Persist) {
}

void UScripts::SetSpeakersTalkIdleOverride(FName TalkIdleOverrideName, EEmotion Emotion, float Delay, float Duration, bool Persist) {
}

void UScripts::SetSpeakersEmotionFull(EEmotion Emotion, float Delay, float Duration, float HeadStrength, bool Persist, bool AffectHead, bool AffectBody) {
}

void UScripts::SetSpeakersDefaultEmotion(EEmotion Emotion) {
}

void UScripts::SetSlideshowImageKey(FString& ImageKey) {
}

void UScripts::SetShouldDisplayOverrideName(const FGuid& CharacterID, bool bUseOverrideName) {
}

void UScripts::SetShipLocation(UShipDestinationData* ShipDestination) {
}

void UScripts::SetRestrictedAreaState(const FGuid& RestrictedAreaIdID, ERestrictedAreaState RestrictedAreaState) {
}

void UScripts::SetRestrictedAreaAccess(const FGuid& RestrictedAreaIdID, bool bIsAccessible) {
}

void UScripts::SetPresentationMode(TSubclassOf<UOEICinePresentationMode> PresentationMode) {
}

void UScripts::SetPosture(EPosture Posture, float Delay, float Duration, bool Persist) {
}

void UScripts::SetPointOfInterestDiscovered(UPointOfInterestData* PointOfInterestData, bool bCanAwardXP) {
}

void UScripts::SetPlayerRelationship(const FGuid& CharacterID, TEnumAsByte<ETeamAttitude::Type> InRelationship) {
}

void UScripts::SetPlayerOwnershipOfItemTypeInContainer(const FGuid& ContainerID, TSubclassOf<UItem> Item, bool bPlayerOwned, bool bClearNonPlayerOwnership) {
}

void UScripts::SetPlayerOwnershipOfItemsInContainer(const FGuid& ContainerID, bool bPlayerOwned, bool bClearNonPlayerOwnership) {
}

void UScripts::SetPickupPlayerOwnership(const FGuid& PickupID, bool bPlayerOwned, bool bClearNonPlayerOwnership) {
}

void UScripts::SetPickupNonPlayerOwnership(const FGuid& PickupID, const FGuid& Actor, bool bClearPlayerOwnership) {
}

void UScripts::SetPickupFactionOwnership(const FGuid& PickupID, TSubclassOf<UFactionData> Faction, bool bClearPlayerOwnership) {
}

void UScripts::SetNonPlayerOwnershipOfItemTypeInContainer(const FGuid& ContainerID, TSubclassOf<UItem> Item, const FGuid& Actor, bool bClearPlayerOwnership) {
}

void UScripts::SetNonPlayerOwnershipOfItemsInContainer(const FGuid& ContainerID, const FGuid& Actor, bool bClearPlayerOwnership) {
}

void UScripts::SetNodeCooldown(ECooldownLength Length, bool TrackPerVolume) {
}

void UScripts::SetMusicVolumeLerpTime(const FGuid& ActorId, bool bCombat, bool bEnter, float LerpTime) {
}

void UScripts::SetMusicVolumeIntensityLimit(const FGuid& ActorId, bool bCombat, bool bMinimum, float Value) {
}

void UScripts::SetMusicVolumeActivationDelay(const FGuid& ActorId, float Delay) {
}

void UScripts::SetKillOnSight(TSubclassOf<UFactionData> Faction) {
}

void UScripts::SetHazardEnabled(const FGuid& HazardActorID, bool bEnable) {
}

void UScripts::SetFactionOwnershipOfItemTypeInContainer(const FGuid& ContainerID, TSubclassOf<UItem> Item, TSubclassOf<UFactionData> Faction, bool bClearPlayerOwnership) {
}

void UScripts::SetFactionOwnershipOfItemsInContainer(const FGuid& ContainerID, TSubclassOf<UFactionData> Faction, bool bClearPlayerOwnership) {
}

void UScripts::SetEmotionFull(FGuid Actor, EEmotion Emotion, float Delay, float Duration, float HeadStrength, bool Persist, bool AffectHead, bool AffectBody) {
}

void UScripts::SetDefaultEmotion(FGuid Actor, EEmotion Emotion) {
}

void UScripts::SetConversationLookTarget(FGuid Actor, FGuid Target, bool bRotateBody, bool bStickyTarget, ELookTargetRegion LookTargetRegion) {
}

void UScripts::SetCompanionWantsToTalk(ESpecialObsidianID CompanionID, bool bWantsToTalk) {
}

void UScripts::SetCompanionAccessory(ESpecialObsidianID CompanionID, TSubclassOf<UItem> AccessoryClass, int32 SlotIndex) {
}

void UScripts::SetBroadcastRTPC(UBroadcastStationAsset* Station, FName RTPC, float Value, bool bShouldReset) {
}

void UScripts::SetAwareOfTravelDestination(UPointOfInterestData* TravelDestination) {
}

void UScripts::SetAwareOfRegion(UTravelRegionData* TravelRegion) {
}

void UScripts::SealOCL(const FGuid& OCLObjectID) {
}

void UScripts::ReplaceCompanionInSlot(ESpecialObsidianID CompanionID, ECompanionSlot CommpanionSlot) {
}

void UScripts::RemovePlayerBounty(TSubclassOf<UFactionData> Faction) {
}

void UScripts::RemovePerkFromActor(const FGuid& ActorId, const TSubclassOf<UPerk> Perk) {
}

void UScripts::RemoveItemFromPlayer(TSubclassOf<UItem> Item, int32 Count) {
}

void UScripts::RemoveItemFromActor(const FGuid& ActorId, TSubclassOf<UItem> Item, int32 Count) {
}

void UScripts::RemoveCurrency(const FGuid& ActorId, int32 Count) {
}

void UScripts::RemoveCompanionFromParty(ESpecialObsidianID CompanionID, bool bDespawn) {
}

void UScripts::RemoteEvent(const FString& EventName) {
}

void UScripts::RegisterNamedTimestamp(const FString& TimestampName) {
}

void UScripts::ReducePlayerBounty(TSubclassOf<UFactionData> Faction, EBountyAdjustment BountySize, int32 OverrideBountySize) {
}

void UScripts::PlayRadioSong(const FString& StationTag, bool bPlayRandom, int32 SongIndex, const FString& SongTag) {
}

void UScripts::PlayBroadcastRadioSong(UBroadcastStationAsset* Station, int32 SongIndex) {
}

void UScripts::PlayBroadcastAudioEvent(UBroadcastStationAsset* Station, UAudioEvent* Event) {
}

void UScripts::PlayAudioEvent(UAudioEvent* Event) {
}

void UScripts::PayOffBounty(TSubclassOf<UFactionData> Faction) {
}

void UScripts::OpenOCL(const FGuid& OCLObjectID) {
}

void UScripts::OfferQuest(FGuid QuestID, int32 StartAlternateDescriptionIndex, int32 MentionAlternateDescriptionIndex) {
}

void UScripts::ObservationSkillFeedback(ESkillDifficultyRange DifficultyRange, int32 FeedbackStringID, ESkillDifficultyTier SkillDifficultyTierOverride, int32 SkillValueOverride) {
}

void UScripts::MentionPointOfInterest(UPointOfInterestData* PointOfInterestData) {
}

void UScripts::MakePointOfInterestDiscoverable(UPointOfInterestData* PointOfInterestData, bool bStillHidden) {
}

void UScripts::MainMenuSettings() {
}

void UScripts::MainMenuNewGame() {
}

void UScripts::MainMenuLoadGame() {
}

void UScripts::MainMenuExtras() {
}

void UScripts::MainMenuExitGame() {
}

void UScripts::MainMenuDeliverables() {
}

void UScripts::MainMenuContinueGame() {
}

void UScripts::LockOCL(const FGuid& OCLObjectID) {
}

void UScripts::LockComputer(const FGuid& ComputerObjectID) {
}

void UScripts::KillNPC(const FGuid& Character) {
}

void UScripts::JamOCL(const FGuid& OCLObjectID) {
}

void UScripts::InterrogationBribe() {
}

void UScripts::IncrementInstanceCount(const FString& Conversation, int32 IncrementAmount) {
}

void UScripts::IncrementAchievement(UAchievementDataAsset* Achievement, int32 Count) {
}

void UScripts::HidePointOfInterest(UPointOfInterestData* PointOfInterestData) {
}

void UScripts::HideBeacon(const FGuid& BeaconObjectID) {
}

void UScripts::GiveTrait(TSubclassOf<UTrait>& Trait) {
}

void UScripts::GivePerkToCompanion(ESpecialObsidianID CompanionID, const TSubclassOf<UPerk> Perk) {
}

void UScripts::GivePerkToActor(const FGuid& ActorId, const TSubclassOf<UPerk> Perk) {
}

void UScripts::GiveLootToPlayer(UStaticLootList* StaticLootList) {
}

void UScripts::GiveLootToActor(const FGuid& ActorId, UStaticLootList* StaticLootList) {
}

void UScripts::GiveItemToPlayer(TSubclassOf<UItem> Item, int32 Count) {
}

void UScripts::GiveItemToActor(const FGuid& ActorId, TSubclassOf<UItem> Item, int32 Count) {
}

void UScripts::GiveFlawToPlayer(const TSubclassOf<UFlaw> FlawSubclass) {
}

void UScripts::GiveCurrency(const FGuid& ActorId, int32 Count) {
}

void UScripts::GiveBackground(TSubclassOf<UAptitude>& Background) {
}

void UScripts::GiveAudioLogOrTransmission(TSubclassOf<UItem> AudioLogTransmission) {
}

void UScripts::ForcePlayRadioConversation(const FString& StationTag, UConversationAsset* Conversation) {
}

void UScripts::DisplayThisWillBeRemembered() {
}

void UScripts::DismissCompanion(ESpecialObsidianID CompanionID, bool bDespawn) {
}

void UScripts::DisarmTrap(const FGuid& TrapObjectID) {
}

void UScripts::CompleteAchievement(UAchievementDataAsset* Achievement) {
}

void UScripts::CloseOCL(const FGuid& OCLObjectID, bool Block, bool bSeal) {
}

void UScripts::ClearTalkIdleOverrideOnNextEmotionChange(FGuid Actor) {
}

void UScripts::ClearTalkIdleOverride(FGuid Actor, EEmotion Emotion, float Duration, bool Persist) {
}

void UScripts::ClearSpeakersTalkIdleOverrideOnNextEmotionChange() {
}

void UScripts::ClearSpeakersTalkIdleOverride(EEmotion Emotion, float Duration, bool Persist) {
}

void UScripts::ClearSpeakersDefaultEmotion() {
}

void UScripts::ClearPickupOwnerships(const FGuid& PickupID, bool bClearPlayerOwnership, bool bClearNonPlayerOwnership) {
}

void UScripts::ClearOwnershipsOfItemTypeInContainer(const FGuid& ContainerID, TSubclassOf<UItem> Item, bool bClearPlayerOwnership, bool bClearNonPlayerOwnership) {
}

void UScripts::ClearOwnershipsOfItemsInContainer(const FGuid& ContainerID, bool bClearPlayerOwnership, bool bClearNonPlayerOwnership) {
}

void UScripts::ClearNamedTimestamp(const FString& TimestampName) {
}

void UScripts::ClearInstanceCount(const FString& Conversation) {
}

void UScripts::ClearDefaultEmotion(FGuid Actor) {
}

void UScripts::ClearConversationLookTarget(FGuid Actor, bool bStickyTarget, ELookTargetRegion LookTargetRegion) {
}

void UScripts::BuyItemWithCurrency(TSubclassOf<UItem> Item, int32 Quantity) {
}

void UScripts::Bribe(EBribeDifficulty BribeDifficulty, ESkillDifficultyTier DifficultyTier) {
}

void UScripts::BeginTradeWithSpeaker() {
}

void UScripts::BarOCL(const FGuid& OCLObjectID) {
}

void UScripts::ArmTrap(const FGuid& TrapObjectID) {
}

void UScripts::AdvanceToTime(float Days, float Hours, float Minutes, float Seconds) {
}

void UScripts::AdvanceTime(float Days, float Hours, float Minutes, float Seconds) {
}

void UScripts::AdjustFactionStanding(TSubclassOf<UFactionData> Faction, EStandingAdjustment StandingAdjustment, bool bPositiveAdjustment, float CustomStandingAdjustment) {
}

void UScripts::AdjustFactionRank(TSubclassOf<UFactionData> Faction, ERankAdjustment RankAdjustment, bool bPositiveAdjustment, float CustomRankAdjustment) {
}

void UScripts::AddPlayerBounty(TSubclassOf<UFactionData> Faction, EBountyAdjustment BountySize, int32 OverrideBountySize) {
}

void UScripts::AddMusicVolumeModifier(const FGuid& ActorId, bool bCombat, EArithmeticOperation ArithmeticOperation, float Value) {
}

void UScripts::AddCraftingRecipe(TSubclassOf<UCraftingRecipe> Recipe) {
}

void UScripts::AddCompanionToParty(ESpecialObsidianID CompanionID) {
}


