#include "OnCompanionEquippedItemClass.h"

UOnCompanionEquippedItemClass::UOnCompanionEquippedItemClass() {
    this->ItemClass = NULL;
    this->CompanionID = ESpecialObsidianID::None;
}

void UOnCompanionEquippedItemClass::OnCompanionEquippedItemClass(UItem* Item) const {
}


