#include "ScrollingPerksListEntry.h"

UScrollingPerksListEntry::UScrollingPerksListEntry() {
    this->bAnimateMultipleSkills = true;
    this->PerkParamName = TEXT("Perk Icon");
    this->SkillParamName = TEXT("Texture");
    this->UnavailableOpacity = 0.50f;
    this->PerkButton = NULL;
    this->PerkIconImage = NULL;
    this->OuterPendingIcon = NULL;
    this->SkillIconImage = NULL;
    this->SkillIconContainer = NULL;
    this->SkillIconImageExtra = NULL;
    this->SkillIconContainerExtra = NULL;
    this->PerkNameText = NULL;
    this->HighlightBorder = NULL;
    this->FadeSkillIn = NULL;
    this->FadeSkillOut = NULL;
    this->FadePendingIn = NULL;
}

void UScrollingPerksListEntry::OnFadeOutFinished() {
}

void UScrollingPerksListEntry::OnFadeInFinished() {
}


UPerk* UScrollingPerksListEntry::GetPerkRef() const {
    return NULL;
}


