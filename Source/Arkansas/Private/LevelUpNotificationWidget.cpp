#include "LevelUpNotificationWidget.h"

ULevelUpNotificationWidget::ULevelUpNotificationWidget() {
    this->ContainerScaleBox = NULL;
    this->bHideReminderAfterPointScreenOpened = true;
    this->DefaultDisplayTime = 2.00f;
    this->InputLabelColorOverride = EIndianaUIColorType::IndianaNotQuiteYellow;
    this->MainOverlay = NULL;
    this->FadeInContainer = NULL;
    this->LevelFlowLeft = NULL;
    this->LevelFlowRight = NULL;
    this->DarkBacking = NULL;
    this->LevelUpBacking = NULL;
    this->CongratsTextBlock = NULL;
    this->NewLevelTextBlock = NULL;
    this->InputLabelOverlay = NULL;
    this->LevelUpInputLabelGroupSkills = NULL;
    this->LevelUpInputLabelGroupSkillsAndPerks = NULL;
    this->ReminderInputLabel = NULL;
    this->LevelUpReminderOverlay = NULL;
    this->PrimaryFadeIn = NULL;
    this->FadeOut = NULL;
    this->SecondaryFadeIn = NULL;
    this->FadeInLevelUpReminder = NULL;
}



void ULevelUpNotificationWidget::PlayerCombatStateChanged(AIndianaCharacter* InCharacter, bool bIsInCombat, bool bRestoring) {
}

void ULevelUpNotificationWidget::OnWaitTimerComplete() {
}

void ULevelUpNotificationWidget::OnTextAndSunFadeOutComplete() {
}

void ULevelUpNotificationWidget::OnSkillUpdated(UCharacterInfoComponent* InCharacterInfoComponent, ESkill Skill, int32 Value) {
}

void ULevelUpNotificationWidget::OnSkillOrPerkPageVisited() {
}

void ULevelUpNotificationWidget::OnScaleSettingChanged(float NewValue) {
}

void ULevelUpNotificationWidget::OnProgressToSkillsPage() {
}

void ULevelUpNotificationWidget::OnProgressToPerksPage() {
}

void ULevelUpNotificationWidget::OnPrimaryTextAndSunFadeInComplete() {
}

void ULevelUpNotificationWidget::OnPerkAdded() {
}

void ULevelUpNotificationWidget::OnLevelUpReminderVisibilityChanged(bool bVisible) {
}

void ULevelUpNotificationWidget::OnLevelUpNotificationVisibilityChanged(int32 NotificationDurationIn) {
}

void ULevelUpNotificationWidget::OnHUDVisibilityChanged(bool bVisible) {
}


