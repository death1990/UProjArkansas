#include "QuestLogWidget.h"

UQuestLogWidget::UQuestLogWidget() {
    this->AnimationBorder = NULL;
    this->FadeIn = NULL;
    this->FadeOut = NULL;
    this->QuestBacking = NULL;
    this->MainInvalidationBox = NULL;
    this->ContainerScaleBox = NULL;
    this->QuestEntry = NULL;
    this->MaxDisplayTime = 5.00f;
    this->AlwaysOnFadeOutStartTime = 3.00f;
    this->AnimSpeedIncreaseThreshold = 3;
    this->AnimSpeedIncreaseScale = 1.80f;
    this->AnimRatioMaxCutoff = 0.50f;
    this->bDisplayAllNotifications = false;
    this->bPauseAudioEventsDuringConversation = true;
    this->bAlwaysShowSelectedQuestOnLedgerMinimize = true;
}

void UQuestLogWidget::OnSelfAnimFinished() {
}

void UQuestLogWidget::OnScaleSettingChanged(float NewValue) {
}

void UQuestLogWidget::OnQuestUpdateModeChanged(int32 ModeIn) {
}

void UQuestLogWidget::OnHUDVisibilityChanged(bool bVisibleIn) {
}

void UQuestLogWidget::OnEntryAnimsFinished() {
}

void UQuestLogWidget::OnConversationStarted(UOwConversationInstance* Instance) {
}

void UQuestLogWidget::OnConversationEnded(UOwConversationInstance* Instance) {
}






void UQuestLogWidget::MoveToNextPhase(bool bForceNextPhase) {
}


