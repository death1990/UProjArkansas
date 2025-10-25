#include "WBCompanionUpgradeWidget.h"

UWBCompanionUpgradeWidget::UWBCompanionUpgradeWidget() {
    this->bTestAsShip = false;
    this->UpgradeStateParamName = TEXT("Number of Upgrades Unlocked");
    this->EnablePairingParamName = TEXT("Enabled");
    this->FocusPairingParamName = TEXT("Focused");
    this->TopFocusedPairingParamName = TEXT("Top Focused");
    this->UpgradeAvailableParamName = TEXT("ShowUpgradeAvailableNotification");
    this->CompanionNavBar = NULL;
    this->ItemTooltip = NULL;
    this->InputLabelGroup = NULL;
    this->CompanionRender = NULL;
    this->CurrentWeaponItem = NULL;
    this->CommonWeaponItems = NULL;
    this->EliteWeaponItems = NULL;
    this->CommonWeaponLockBorder = NULL;
    this->CommonWeaponPairingBorder = NULL;
    this->EliteWeaponLockBorder = NULL;
    this->EliteWeaponPairingBorder = NULL;
    this->WeaponProgressBar = NULL;
    this->CurrentArmorItem = NULL;
    this->CommonArmorItems = NULL;
    this->EliteArmorItems = NULL;
    this->CommonArmorLockBorder = NULL;
    this->CommonArmorPairingBorder = NULL;
    this->EliteArmorLockBorder = NULL;
    this->EliteArmorPairingBorder = NULL;
    this->ArmorProgressBar = NULL;
}



void UWBCompanionUpgradeWidget::HandleOnModItemUnhighlighted(UItemViewerButtonWidget* ItemViewerButton) {
}

void UWBCompanionUpgradeWidget::HandleOnModItemHighlighted(UItemViewerButtonWidget* ItemViewerButton) {
}

void UWBCompanionUpgradeWidget::HandleOnModClicked(UItemViewerButtonWidget* ItemViewerButton) {
}

void UWBCompanionUpgradeWidget::HandleOnEquipmentUnhighlighted() {
}

void UWBCompanionUpgradeWidget::HandleOnCurrentWeaponHighlighted() {
}

void UWBCompanionUpgradeWidget::HandleOnCurrentArmorHighlighted() {
}

void UWBCompanionUpgradeWidget::HandleOnCompanionRegistrationChanged(ESpecialObsidianID SpecialObsidianID) {
}

void UWBCompanionUpgradeWidget::HandleOnCompanionRegistered(AIndianaAiCharacter* CompanionIn, bool bIsRegistering) {
}


