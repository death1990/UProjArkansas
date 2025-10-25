#include "MinimapNPCWidget.h"

UMinimapNPCWidget::UMinimapNPCWidget() {
    this->InterrogateCheckGateCycleCount = 2;
    this->NPCTypeImage = NULL;
    this->EntryBacker = NULL;
    this->NPCFacingIndicator = NULL;
    this->OnSpotted = NULL;
    this->DefaultIcon = NULL;
    this->BountyIcon = NULL;
}

void UMinimapNPCWidget::OnLootAnimFinished() {
}

void UMinimapNPCWidget::OnDeathAnimFinished() {
}

void UMinimapNPCWidget::OnActorLooted(UInventoryComponent* InInventoryComponent, const FItemStack& ItemStack) {
}


