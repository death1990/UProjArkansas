#include "CharacterMedKitWidget.h"

UCharacterMedKitWidget::UCharacterMedKitWidget() {
    this->MainInvalidationBox = NULL;
    this->MedKitProgressBar = NULL;
    this->DrugSlotOne = NULL;
    this->DrugSlotTwo = NULL;
    this->DrugSlotThree = NULL;
    this->DrugSlotFour = NULL;
    this->DrugSlotContainer = NULL;
    this->InputLabel = NULL;
    this->MedKitUsageTextBlock = NULL;
}

void UCharacterMedKitWidget::UpdateDrugSlots(UEquipmentComponent* InEquipmentComponent, bool bDoubleDose) {
}

void UCharacterMedKitWidget::OnInventoryItemAddedRemoved(UInventoryComponent* InInventoryComponent, const FItemStack& ItemStack) {
}


