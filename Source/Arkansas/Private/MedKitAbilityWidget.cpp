#include "MedKitAbilityWidget.h"

UMedKitAbilityWidget::UMedKitAbilityWidget() {
    this->MedkitHoldRatioThreshold = 0.25f;
    this->DrugSlotOne = NULL;
    this->DrugSlotTwo = NULL;
    this->DrugSlotThree = NULL;
    this->DrugSlotFour = NULL;
    this->DrugSlotContainer = NULL;
}

void UMedKitAbilityWidget::UpdateDrugSlots(UEquipmentComponent* InEquipmentComponent, bool bDoubleDose) {
}


