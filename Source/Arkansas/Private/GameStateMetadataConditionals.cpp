#include "GameStateMetadataConditionals.h"
#include "Templates/SubclassOf.h"

UGameStateMetadataConditionals::UGameStateMetadataConditionals() {
}

bool UGameStateMetadataConditionals::LatestSaveGameHasWeaponEquipped(TSoftClassPtr<UWeapon> Weapon) {
    return false;
}

bool UGameStateMetadataConditionals::LatestSaveGameHasWeaponCategoryEquipped(FGameplayTag CategoryTag) {
    return false;
}

bool UGameStateMetadataConditionals::LatestSaveGameHasTrait(TSubclassOf<UTrait> Trait) {
    return false;
}

bool UGameStateMetadataConditionals::LatestSaveGameHasSkillTagged(ESkill Skill) {
    return false;
}

bool UGameStateMetadataConditionals::LatestSaveGameHasSkillOrPerkPoints() {
    return false;
}

bool UGameStateMetadataConditionals::LatestSaveGameHasSkill(ESkill Skill, EComparisonOperator Operator, ESkillDifficultyRange DifficultyRange, int32 TierOverride, int32 SkillValueOverride) {
    return false;
}

bool UGameStateMetadataConditionals::LatestSaveGameHasPerk(TSubclassOf<UPerk> Perk) {
    return false;
}

bool UGameStateMetadataConditionals::LatestSaveGameHasMakeshiftArmorerDamageThresholdBonus() {
    return false;
}

bool UGameStateMetadataConditionals::LatestSaveGameHasItem(TSoftClassPtr<UItem> Item, EComparisonOperator Operator, int32 Quantity) {
    return false;
}

bool UGameStateMetadataConditionals::LatestSaveGameHasGadgetEquipped(TSoftClassPtr<UGadget> Gadget) {
    return false;
}

bool UGameStateMetadataConditionals::LatestSaveGameHasFlaw(TSubclassOf<UFlaw> Flaw) {
    return false;
}

bool UGameStateMetadataConditionals::LatestSaveGameHasFactionStanding(TSoftClassPtr<UFactionData> Faction, EStandingType StandingType, EStandingLevel StandingLevel, EComparisonOperator Operator) {
    return false;
}

bool UGameStateMetadataConditionals::LatestSaveGameHasFactionRank(TSoftClassPtr<UFactionData> Faction, EComparisonOperator Operator, ERankLevel RankLevel) {
    return false;
}

bool UGameStateMetadataConditionals::LatestSaveGameHasDifficulty(EGameDifficulty Difficulty) {
    return false;
}

bool UGameStateMetadataConditionals::LatestSaveGameHasCompanionUnlocked(ESpecialObsidianID Companion) {
    return false;
}

bool UGameStateMetadataConditionals::LatestSaveGameHasCompanionInParty(ESpecialObsidianID Companion) {
    return false;
}

bool UGameStateMetadataConditionals::LatestSaveGameHasCompanionDismissed(ESpecialObsidianID Companion) {
    return false;
}

bool UGameStateMetadataConditionals::LatestSaveGameHasBonusArmorModSlotFilled(EArmorSlot ArmorSlot) {
    return false;
}

bool UGameStateMetadataConditionals::LatestSaveGameHasBackground(TSubclassOf<UAptitude> Background) {
    return false;
}

bool UGameStateMetadataConditionals::LatestSaveGameHasArmorEquipped(TSoftClassPtr<UArmorItem> ArmorItem) {
    return false;
}

bool UGameStateMetadataConditionals::LatestSaveGameHasAllWeaponSlotsFilled() {
    return false;
}

bool UGameStateMetadataConditionals::LatestSaveGameHasAllThrowableSlotsFilled() {
    return false;
}

bool UGameStateMetadataConditionals::LatestSaveGameHasAllInhalerSlotsFilled() {
    return false;
}

bool UGameStateMetadataConditionals::LatestSaveGameHasActiveCompanionAmount(EComparisonOperator Operator, int32 Quantity) {
    return false;
}

bool UGameStateMetadataConditionals::LatestSaveGameEquipmentHasBrandSynergy(TSoftObjectPtr<UBrandDataAsset> BrandDataAsset) {
    return false;
}

bool UGameStateMetadataConditionals::IsQuestTrackedForLatestSave(FGuid QuestID) {
    return false;
}

bool UGameStateMetadataConditionals::IsQuestCompleteForLatestSave(FGuid QuestID) {
    return false;
}

bool UGameStateMetadataConditionals::IsQuestActiveForLatestSave(FGuid QuestID) {
    return false;
}

bool UGameStateMetadataConditionals::IsLatestSaveInRegion(TSoftObjectPtr<UTravelRegionData> TravelRegion) {
    return false;
}

bool UGameStateMetadataConditionals::IsGlobalVariable(FGuid Variable, EComparisonOperator Operator, int32 Value) {
    return false;
}

bool UGameStateMetadataConditionals::HasQuestFailedForLatestSave(FGuid QuestID) {
    return false;
}

bool UGameStateMetadataConditionals::HasLatestSaveGame() {
    return false;
}


