#include "InventoryNourishmentPageWidget.h"

UInventoryNourishmentPageWidget::UInventoryNourishmentPageWidget() {
    this->bAnimateHealthChanges = false;
    this->PlayerHealthBar = NULL;
    this->PerkInfoWidget = NULL;
}

void UInventoryNourishmentPageWidget::OnPlayerMaxHealthChanged(UHealthComponent* HealthComponentIn, float PrevMaxHealth, float CurMaxHealth) {
}

void UInventoryNourishmentPageWidget::OnPlayerHealthChanged(UHealthComponent* HealthComponentIn, float PrevNormalizedHealth, float CurrNormalizedHealth, AActor* Instigator) {
}




