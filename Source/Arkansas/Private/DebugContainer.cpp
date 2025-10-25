#include "DebugContainer.h"

ADebugContainer::ADebugContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ItemCount = 1;
    this->bSkipItemsWithoutDescriptions = true;
}

void ADebugContainer::AddDebugItems() {
}


