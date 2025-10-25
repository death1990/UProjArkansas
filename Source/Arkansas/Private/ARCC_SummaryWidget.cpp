#include "ARCC_SummaryWidget.h"

UARCC_SummaryWidget::UARCC_SummaryWidget() {
    this->BackgroundImageParamName = TEXT("Texture");
    this->DumbTrait = NULL;
    this->BrilliantTrait = NULL;
    this->SummaryLockedTraitClass = NULL;
    this->bDisplayPositiveTraitsAsSelected = true;
    this->AvailablePosiTrait = NULL;
    this->UnavailablePosiTrait = NULL;
    this->bDisplaySpecializedSkillsAsSelected = true;
    this->bDisplayLockedSkillsAsLocked = true;
    this->bSkipTraitsAndSkills = false;
    this->InvisibleButton = NULL;
    this->TutorialPhaseDisplaySwitcher = NULL;
    this->PreTutorialPhasePanel = NULL;
    this->PostTutorialPhasePanel = NULL;
    this->BackgroundNameTextBlock = NULL;
    this->BackgroundDescriptionTextBlock = NULL;
    this->BackgroundFiligreeImage = NULL;
    this->BackgroundImage = NULL;
    this->PlayerNameTextBlock = NULL;
    this->TraitsDisplayPanel = NULL;
    this->SpecializedSkillDisplayPanel = NULL;
    this->LockedSkillDisplayPanel = NULL;
    this->LockedSkillsPanel = NULL;
}


