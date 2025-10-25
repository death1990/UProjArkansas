#include "SkillButtonEntryWidget.h"

USkillButtonEntryWidget::USkillButtonEntryWidget() {
    this->SkillUnlockedAnim = NULL;
    this->DumbSkillPanel = NULL;
    this->TaggedSkillPanel = NULL;
    this->LockedSkillPanel = NULL;
    this->SkillTextDefaultColor = EIndianaUIColorType::IndianaNotQuiteYellow;
    this->SkillTextHighlightColor = EIndianaUIColorType::IndianaYellow;
    this->SkillTextUnavailableColor = EIndianaUIColorType::IndianaGrey;
    this->SkillTextPendingUpdateColor = EIndianaUIColorType::SkillTextColor;
    this->SkillTextDecreasedColor = EIndianaUIColorType::IndianaRed;
    this->SkillParamName = TEXT("Texture");
}


