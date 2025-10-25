#include "QuestJournalWidget.h"

UQuestJournalWidget::UQuestJournalWidget() {
    this->ButtonGroup = NULL;
    this->SortLabel = NULL;
    this->ChangeSortLabel = NULL;
    this->QuestNameTextBlock = NULL;
    this->QuestResolutionTextBlock = NULL;
    this->QuestListScrollBox = NULL;
    this->FlavorTextWidget = NULL;
    this->QuestListVerticalBox = NULL;
    this->AvailableQuestList = NULL;
    this->CompletedQuestList = NULL;
    this->BotchedQuestList = NULL;
    this->MentionedQuestList = NULL;
    this->QuestDescriptionTextBlock = NULL;
    this->ObjectiveList = NULL;
    this->QuestTypeImage = NULL;
    this->InputLabelGroup = NULL;
    this->InvisibleButton = NULL;
    this->HeaderBG = NULL;
    this->QuestListWidgetClass = NULL;
    this->GamepadZoomMultiplier = 0.00f;
    this->SortingData = NULL;
    this->bDynamicSetActiveQuest = false;
    this->bDynamicQuestSelectOnAcquired = false;
    this->DynamicPriorityOption = EQuestSortingOptions::QuestType;
}



