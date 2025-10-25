#include "CharacterOverviewWidget.h"

UCharacterOverviewWidget::UCharacterOverviewWidget() {
    this->bInstantAnimateOnTempHealthZero = false;
    this->TutorialThreshold = 1.00f;
    this->VisibilityPanel = NULL;
    this->PlayerHealthBar = NULL;
    this->PlayerBonusHealthBar = NULL;
    this->PlayerShieldBar = NULL;
}

void UCharacterOverviewWidget::OnHealthItemConsumed(UInventoryComponent* InventoryComponent, const FItemStack& ItemStack) {
}


