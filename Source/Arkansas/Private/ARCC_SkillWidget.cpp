#include "ARCC_SkillWidget.h"

UARCC_SkillWidget::UARCC_SkillWidget() {
    this->EntryClass = NULL;
    this->bPauseMovieWhenSkillUnhovered = false;
    this->GamepadScrollMultiplier = 1.00f;
    this->SkillIconParamName = TEXT("Texture");
    this->DefaultSelectableSkillsCount = 2;
    this->DumbTraitSelectableSkillsCount = 2;
    this->ExtraSkillTrait = NULL;
    this->DumbSkillTrait = NULL;
    this->bClearTraitsOnBrilliantRemoved = false;
    this->StateDescTextBlock = NULL;
    this->StateDescTextBlockPulse = NULL;
    this->SkillFlavorTextBlock = NULL;
    this->SkillTypeMeaningSwitcher = NULL;
    this->SkillTypeSpecializedDisplay = NULL;
    this->DumbTraitActiveDisplay = NULL;
    this->SkillTypeLockedDisplay = NULL;
    this->BrilliantTraitActiveDisplay = NULL;
    this->SkillListPanel = NULL;
    this->MoviePlayer = NULL;
    this->SkillInfoDisplayPanel = NULL;
    this->SkillInfoContainer = NULL;
    this->SkillNameTextBlock = NULL;
    this->SkillsIcon = NULL;
    this->SpecializedPanel = NULL;
    this->LockedPanel = NULL;
    this->SkillDescTextblock = NULL;
    this->SkillScrollBox = NULL;
    this->ForEachLevelVBox = NULL;
    this->ForEachLevelHeaderTextBlock = NULL;
    this->ForEachLevelEffectTextBlock = NULL;
    this->FocusHeader = NULL;
}



