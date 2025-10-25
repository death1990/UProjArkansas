#include "GadgetShield.h"

UGadgetShield::UGadgetShield() {
    this->StartingShieldValue = 50.00f;
    this->ShieldBurnPerSecond = 10.00f;
    this->TrapDR = 0;
    this->HazardShieldBurnPerSecond = 10.00f;
}

void UGadgetShield::OnShieldHealthChanged(UHealthComponent* HealthComponentIn, float PrevNormShieldHealth, float CurrNormShieldHealth) {
}


