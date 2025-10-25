#include "OnHealthPercentage.h"

UOnHealthPercentage::UOnHealthPercentage() {
    this->HealthPercentage = 0.00f;
    this->Operator = EComparisonOperator::Equals;
    this->HealthTarget = EOnHealthPercentageTarget::Self;
    this->CompanionID = ESpecialObsidianID::None;
}

void UOnHealthPercentage::OnHealthChanged(UHealthComponent* InHealthComponent, float PrevNormalizedHealth, float CurrNormalizedHealth, AActor* Instigator) {
}

AIndianaCharacter* UOnHealthPercentage::GetHealthTargetActor(AActor* InActor) const {
    return NULL;
}


