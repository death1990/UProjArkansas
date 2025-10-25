#include "OnMedKitUsed.h"

UOnMedKitUsed::UOnMedKitUsed() {
    this->bDoubleDose = false;
    this->bRequireMatchingDoubleDose = true;
}

void UOnMedKitUsed::OnMedKitUsed(UEquipmentComponent* EquipmentComponent, bool InDoubleDose) {
}


