#include "BossBarInstance.h"

UBossBarInstance::UBossBarInstance() {
    this->FadeInTime = 1.00f;
    this->FadeOutTime = 3.00f;
    this->DamageDealtDelayTime = 1.00f;
    this->DamageDealtFadeTime = 1.00f;
    this->DamageDealtMinOffset = 0.00f;
    this->DamageDealtMaxOffset = 1.00f;
    this->HealthBarWidth = 683;
    this->HealthBarTipOffset = -1.50f;
    this->MainVerticalBox = NULL;
    this->DamageBar = NULL;
    this->HealthBar = NULL;
    this->Tip = NULL;
    this->BossNameTextBlock = NULL;
    this->StatusEffectTagWidget = NULL;
    this->DamageBarMaterial = NULL;
    this->HealthBarMaterial = NULL;
    this->ParentContainer = NULL;
    this->ParentManager = NULL;
}

void UBossBarInstance::OnHealthChanged(UHealthComponent* InHealthComponent, float PrevNormalizedHealth, float CurrNormalizedHealth, AActor* InInstigator) {
}




