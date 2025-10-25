#include "OnShieldPercentage.h"

UOnShieldPercentage::UOnShieldPercentage() {
    this->ShieldPercentage = 0.00f;
    this->Operator = EComparisonOperator::Equals;
    this->ShieldTarget = EOnShieldPercentageTarget::Self;
    this->CompanionID = ESpecialObsidianID::None;
}

void UOnShieldPercentage::OnShieldChanged(UHealthComponent* InHealthComponent, float PrevNormalizedShield, float CurrNormalizedShield) {
}

AIndianaCharacter* UOnShieldPercentage::GetShieldTargetActor(AActor* InActor) const {
    return NULL;
}


