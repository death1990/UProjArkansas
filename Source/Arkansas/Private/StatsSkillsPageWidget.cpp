#include "StatsSkillsPageWidget.h"

UStatsSkillsPageWidget::UStatsSkillsPageWidget() {
    this->SkillsHeaderTextBlock = NULL;
    this->SkillPointsTitle = NULL;
    this->InputLabelGroup = NULL;
    this->SkillPointDisplayHorizontalBox = NULL;
    this->FlavorTextWidget = NULL;
    this->EasilyDistractedPanel = NULL;
    this->EasilyDistractedThresholdText = NULL;
    this->PointsAvailable = NULL;
    this->GamepadZoomMultiplier = 0.00f;
}

void UStatsSkillsPageWidget::OnSkillUpdated(UCharacterInfoComponent* InCharacterInfoComponent, ESkill Skill, int32 Value) {
}

void UStatsSkillsPageWidget::OnResetAllAllocations() {
}

void UStatsSkillsPageWidget::OnPlayerLevelUp(int32 NewLevel) {
}

void UStatsSkillsPageWidget::OnLedgerToggle() {
}

void UStatsSkillsPageWidget::OnInputBack() {
}

void UStatsSkillsPageWidget::OnAllocation() {
}


