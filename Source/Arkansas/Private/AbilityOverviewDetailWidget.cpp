#include "AbilityOverviewDetailWidget.h"

UAbilityOverviewDetailWidget::UAbilityOverviewDetailWidget() {
    this->bRegroupCommand = false;
    this->bGamepadAbility = false;
    this->CompanionAttackBackgroundTexture = NULL;
    this->CompanionAttackFillTexture = NULL;
    this->CompanionMoveToBackgroundTexture = NULL;
    this->CompanionMoveToFillTexture = NULL;
    this->HoldFillRatio = 0.25f;
    this->HoldPCBox = NULL;
    this->HoldRingPC = NULL;
    this->HoldGamepadBox = NULL;
    this->HoldRingGamepad = NULL;
}

void UAbilityOverviewDetailWidget::OnAbilityUnlockChange(EUnlockAbility Ability) {
}


