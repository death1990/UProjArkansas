#include "PerksListEntry.h"

UPerksListEntry::UPerksListEntry() {
    this->PerkParamName = TEXT("Perk Icon");
    this->HighlightImage = NULL;
    this->PerkIconImage = NULL;
    this->Button = NULL;
    this->FadePendingIn = NULL;
    this->ButtonHighlightFocused = NULL;
    this->ButtonHighlightSelected = NULL;
    this->ButtonHighlightHovered = NULL;
}



UTexture2D* UPerksListEntry::GetUnaquiredIcon() const {
    return NULL;
}

UTexture2D* UPerksListEntry::GetAquiredIcon() const {
    return NULL;
}


