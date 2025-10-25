#include "ConsumableItem.h"

UConsumableItem::UConsumableItem() {
    this->StatusEffect = NULL;
    this->MedPrimerVisuals = NULL;
    this->bCanBeUsedAsAmmo = false;
    this->NumShotsAsAmmo = 20;
    this->bCanBeUsedInMedKit = false;
    this->NumChargesInMedKit = 10;
    this->ItemDuration = -1.00f;
    this->HungerGained = 0.00f;
    this->ThirstGained = 0.00f;
    this->ExhaustionGained = 0.00f;
    this->MedKitDurationStat = NULL;
    this->Toxicity = 50.00f;
}


