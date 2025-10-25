#include "QuestObjectiveEntryWidget.h"

UQuestObjectiveEntryWidget::UQuestObjectiveEntryWidget() {
    this->OnObjectiveCompleted = NULL;
    this->OnObjectiveFailed = NULL;
    this->OnObjectiveUpdated = NULL;
    this->IntroAnim = NULL;
    this->OutroAnim = NULL;
    this->ContentContainer = NULL;
    this->ObjectiveStatusOverlay = NULL;
    this->ObjectiveIcon = NULL;
    this->OptionalTextBlock = NULL;
    this->TitleTextBlock = NULL;
    this->AddendumEntryPanel = NULL;
    this->DefaultAddendumNum = 3;
    this->AddendumDisplayTime = 5;
    this->AddendumFadeControllerTickRate = 0.05f;
    this->AddendumWrapLength = 0.00f;
    this->bCullOptionalString = false;
    this->bOverrideColors = false;
    this->FinishedColor = EIndianaUIColorType::Invalid;
    this->InProgressColor = EIndianaUIColorType::Invalid;
    this->InvalidColor = EIndianaUIColorType::Invalid;
    this->AddendumColor = EIndianaUIColorType::Invalid;
}

void UQuestObjectiveEntryWidget::UpdateAnimationFinished() {
}

void UQuestObjectiveEntryWidget::OnObjectiveUpdateAnimComplete() {
}







void UQuestObjectiveEntryWidget::FinalAnimationFinished() {
}

void UQuestObjectiveEntryWidget::AnimationFinished() {
}


