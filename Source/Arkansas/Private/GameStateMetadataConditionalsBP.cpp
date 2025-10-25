#include "GameStateMetadataConditionalsBP.h"

UGameStateMetadataConditionalsBP::UGameStateMetadataConditionalsBP() {
}

bool UGameStateMetadataConditionalsBP::LatestSaveGameHasSkill(ESkill Skill, EBoolResult& OutResult, EComparisonOperator Operater, ESkillDifficultyRange DifficultyRange, int32 TierOverride, int32 SkillValueOverride) {
    return false;
}

bool UGameStateMetadataConditionalsBP::LatestSaveGameHasGlobalValue(FGuid Variable, EComparisonOperator Operator, int32 Value, EBoolResult& OutResult) {
    return false;
}

bool UGameStateMetadataConditionalsBP::LatestSaveGameHasFactionStanding(TSoftClassPtr<UFactionData> Faction, EStandingType StandingType, EStandingLevel StandingLevel, EComparisonOperator Operator, EBoolResult& OutResult) {
    return false;
}

bool UGameStateMetadataConditionalsBP::LatestSaveGameHasFactionRank(TSoftClassPtr<UFactionData> Faction, EComparisonOperator Operator, ERankLevel RankLevel, EBoolResult& OutResult) {
    return false;
}

bool UGameStateMetadataConditionalsBP::IsQuestCompleteForLatestSave(FGuid QuestID, EBoolResult& OutResult) {
    return false;
}

bool UGameStateMetadataConditionalsBP::IsQuestActiveForLatestSave(FGuid QuestID, EBoolResult& OutResult) {
    return false;
}

bool UGameStateMetadataConditionalsBP::IsLatestSaveInRegion(TSoftObjectPtr<UTravelRegionData> TravelRegion, EBoolResult& OutResult) {
    return false;
}


