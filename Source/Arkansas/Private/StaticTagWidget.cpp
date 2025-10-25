#include "StaticTagWidget.h"

UStaticTagWidget::UStaticTagWidget() {
    this->ContentContainer = NULL;
    this->TargetBorder = NULL;
    this->StatusEffectDisplay = NULL;
    this->RecentDamage = NULL;
    this->HealthBar = NULL;
    this->NameTextBlock = NULL;
    this->HealthOverlay = NULL;
    this->ContainerCanvas = NULL;
    this->LostHealthAnimTime = 0.25f;
    this->bFadeOutComplete = true;
    this->TargetGracePeriod = 0.50f;
    this->ComfortableDistanceOffSet = 325;
    this->MinEnemyDistance = 70.00f;
    this->MaxEnemyDistance = 3100.00f;
    this->MaxPositionOffset = 400.00f;
    this->MinPositionOffset = 220.00f;
}


void UStaticTagWidget::OnHUDVisibilityChanged(bool bVisible) {
}

void UStaticTagWidget::OnCombatStateChanged(AIndianaCharacter* InCharacter, bool bCombatIn, bool bRestoring) {
}


