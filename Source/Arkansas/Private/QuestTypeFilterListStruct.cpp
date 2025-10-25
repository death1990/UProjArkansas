#include "QuestTypeFilterListStruct.h"

FQuestTypeFilterListStruct::FQuestTypeFilterListStruct() {
    this->OptionType = EQuestSortingOptions::QuestType;
    this->QuestTypeEnum = EQuestType::MajorStoryQuest;
    this->QuestLocationEnum = EQuestLocation::Eden;
}

