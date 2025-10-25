#include "BaseHUDWidget.h"

UBaseHUDWidget::UBaseHUDWidget() {
    this->ContainerScaleBox = NULL;
    this->EventSubscriptions = 0;
}

void UBaseHUDWidget::OnWidgetVisibilityChanged(int32 NewVisibility) {
}

void UBaseHUDWidget::OnTTDMeterChanged(float PrevValue, float CurrValue) {
}

void UBaseHUDWidget::OnToxicityMeterChanged(float PrevValue, float CurrValue) {
}

void UBaseHUDWidget::OnTempHealthChanged(UHealthComponent* HealthComponentIn, float PrevNormalizedHealth, float CurrNormalizedHealth, AActor* Instigator) {
}

void UBaseHUDWidget::OnShieldHealthChanged(UHealthComponent* HealthComponentIn, float PrevNormalizedHealth, float CurrNormalizedHealth) {
}

void UBaseHUDWidget::OnScaleSettingChanged(float NewValue) {
}

void UBaseHUDWidget::OnRadRangeChanged(const TArray<FRadToxicityRangeData> ToxicityRangeData) {
}

void UBaseHUDWidget::OnRadChanged(UHealthComponent* HealthComponentIn, float PrevNormalizedRad, float CurrNormalizedRad) {
}

void UBaseHUDWidget::OnPrimerToxicityMultiplierChanged(float CurrValue) {
}

void UBaseHUDWidget::OnMaxHealthChanged(UHealthComponent* HealthComponentIn, float PrevMaxHealth, float CurMaxHealth) {
}

void UBaseHUDWidget::OnHUDVisibilityChanged(bool bIsVisible) {
}

void UBaseHUDWidget::OnHudIconRequestReceived(EHudIconDisplayArea HudIconDisplayArea) {
}

void UBaseHUDWidget::OnHealthChanged(UHealthComponent* HealthComponentIn, float PrevNormalizedHealth, float CurrNormalizedHealth, AActor* Instigator) {
}

void UBaseHUDWidget::OnExitedRestrictedAreaBuffer(const ARestrictedArea* RestrictedArea) {
}

void UBaseHUDWidget::OnExitedRestrictedArea(const ARestrictedArea* RestrictedArea) {
}

void UBaseHUDWidget::OnEquippedWeaponChange(UWeapon* EquippedWeapon) {
}

void UBaseHUDWidget::OnEnterRestrictedAreaBuffer(const ARestrictedArea* RestrictedArea) {
}

void UBaseHUDWidget::OnEnterRestrictedArea(const ARestrictedArea* RestrictedArea) {
}

void UBaseHUDWidget::OnEnemyFoundBody() {
}

void UBaseHUDWidget::OnCombatStateChanged(AIndianaCharacter* InCharacter, bool bCombatIn, bool bRestoring) {
}

void UBaseHUDWidget::OnAbilityUnlocked(EUnlockAbility UnlockedAbility) {
}

void UBaseHUDWidget::OnAbilityLocked(EUnlockAbility UnlockedAbility) {
}



