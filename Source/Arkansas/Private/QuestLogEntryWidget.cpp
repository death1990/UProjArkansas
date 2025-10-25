#include "QuestLogEntryWidget.h"

UQuestLogEntryWidget::UQuestLogEntryWidget() {
    this->QuestComplete = NULL;
    this->QuestFail = NULL;
    this->QuestUpdated = NULL;
    this->FadeInQuestName = NULL;
    this->FadeOutQuestName = NULL;
    this->ContentBorder = NULL;
    this->QuestIcon = NULL;
    this->QuestTitleTextBlock = NULL;
    this->MentionedTextBlock = NULL;
    this->ObjectivePanel = NULL;
    this->QuestCompletedImage = NULL;
    this->QuestFailedImage = NULL;
    this->ObjectiveClass = NULL;
    this->MaxInitEntries = 5;
}

void UQuestLogEntryWidget::UpdateAnimationFinished() {
}

void UQuestLogEntryWidget::OnSelfAnimFinished() {
}

void UQuestLogEntryWidget::OnObjectiveAnimFinished() {
}







