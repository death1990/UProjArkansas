#include "CompanionOverviewWidget.h"

UCompanionOverviewWidget::UCompanionOverviewWidget() {
    this->FadedAbilityButtonAlpha = 0.50f;
    this->AbilityArmorSlot = EArmorSlot::Accessory0;
    this->CompanionPortraitImage = NULL;
    this->CompanionAbilityFiligree = NULL;
    this->StatusEffectDisplay = NULL;
    this->CompanionHealthBar = NULL;
    this->CompanionBonusHealthBar = NULL;
    this->CompanionAbilityBar = NULL;
    this->CompanionAbilityBar2 = NULL;
    this->CompanionAbilityBarOverlay1 = NULL;
    this->CompanionAbilityBarOverlay2 = NULL;
    this->CompanionShieldBar = NULL;
    this->InputContainer = NULL;
    this->FadeInBonusHealthAnim = NULL;
    this->FadeOutBonusHealthAnim = NULL;
    this->FadeInRootAnim = NULL;
    this->FadeInShieldBarAnim = NULL;
    this->FadeOutShieldBarAnim = NULL;
    this->AnimateInOutStatusEffectBlock = NULL;
    this->CompanionAbilityChargeAdded_1 = NULL;
    this->CompanionAbilityChargeAdded_2 = NULL;
}

void UCompanionOverviewWidget::OnFadeOutFinished() {
}

void UCompanionOverviewWidget::OnFadeInStarted() {
}

void UCompanionOverviewWidget::OnCompanionEquipmentChanged(EArmorSlot ArmorSlotChanged) {
}

void UCompanionOverviewWidget::OnAbilityCooldownChangedSubscription(int32 CompanionIndex, float PreviousNormalizedValue, float NewNormalizedValue) {
}



