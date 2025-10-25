#include "VendorWidget.h"

UVendorWidget::UVendorWidget() {
    this->StackSplittingViewerOpacity = 0.50f;
    this->RestrictedLockedTexture = NULL;
    this->RestrictedUnlockedTexture = NULL;
    this->bOnlyShowEncounterFactionsIfEncountered = true;
    this->FactionDiscountIndex = 0;
    this->FactionSurchargeIndex = 1;
    this->ConsumerismFlaw = NULL;
    this->RestrictedAccessPerk = NULL;
    this->TenetTransgressorPerk = NULL;
    this->HoveredItem = NULL;
    this->ScrollingWidgetGroup = NULL;
    this->TooltipContainer = NULL;
    this->ItemToolTipWidget = NULL;
    this->CompareTooltip = NULL;
    this->CartInfoContainer = NULL;
    this->CartInfoWidget = NULL;
    this->CartDisplaySwitcher = NULL;
    this->BuyCartDisplay = NULL;
    this->CantAffordFullStackDisplay = NULL;
    this->CantAffordDisplay = NULL;
    this->BuyDiscountSurchargeTextBlock = NULL;
    this->FactionDiscountDisplay = NULL;
    this->FactionLogo = NULL;
    this->FactionDiscountTextBlock = NULL;
    this->FactionIndicatorSwitcher = NULL;
    this->WholesaleSpenderInfo_Buy = NULL;
    this->WholesaleSpenderInfo_Sell = NULL;
    this->WholesaleSpenderActiveIcon = NULL;
    this->DiscountFadeIn = NULL;
    this->ConsumerismBuyInfo = NULL;
    this->HermitFlawInfo = NULL;
    this->WastefulFlawInfo = NULL;
    this->RestrictedAccessDisplay = NULL;
    this->RestrictedAccessAvailableDisplay = NULL;
    this->RestrictedAccessPerkInfo = NULL;
    this->SellCartDisplay = NULL;
    this->SellDiscountSurchargeTextBlock = NULL;
    this->ConsumerismSellInfo = NULL;
    this->KleptomaniaFlawInfo = NULL;
    this->PalmGreaserPerkInfo = NULL;
    this->SnobbishFlawInfo = NULL;
    this->TenetTransgressorPerkInfo = NULL;
    this->NoSellCartDisplay = NULL;
    this->FinalPriceDisplay = NULL;
    this->BasePriceTextBlock = NULL;
    this->FinalPriceTextBlock = NULL;
    this->PageScrollBox = NULL;
    this->NavigationGroupWidget = NULL;
    this->AmmoDisplayWidget = NULL;
    this->PlayerStats = NULL;
    this->VendorNameTextBlock = NULL;
    this->FactionNameTextBlock = NULL;
    this->ExitLabel = NULL;
    this->LabelGroup = NULL;
    this->VendorViewer = NULL;
    this->VendorSubNavigationWidget = NULL;
    this->PlayerSellViewer = NULL;
    this->PlayerSellSubNavigationWidget = NULL;
    this->StackSplittingClass = NULL;
}

void UVendorWidget::UpdateWholesaleSpenderProgress(const int32 BitsGained) {
}

void UVendorWidget::UpdateWholesaleSpenderPreview(const int32 PreviewBits) {
}

void UVendorWidget::UpdateSubnavigationActivation() {
}

void UVendorWidget::OnStoreItemRemoved(UInventoryComponent* InventoryComponent, const FItemStack& ItemStack) {
}

void UVendorWidget::OnStoreItemAdded(UInventoryComponent* InventoryComponent, const FItemStack& ItemStack) {
}

void UVendorWidget::OnStoreCountChanged(UInventoryComponent* InventoryComponent, const FItemStack& ItemStack) {
}



void UVendorWidget::OnPlayerItemRemoved(UInventoryComponent* InventoryComponent, const FItemStack& ItemStack) {
}

void UVendorWidget::OnPlayerItemAdded(UInventoryComponent* InventoryComponent, const FItemStack& ItemStack) {
}

void UVendorWidget::OnPlayerCountChanged(UInventoryComponent* InventoryComponent, const FItemStack& ItemStack) {
}

void UVendorWidget::OnPerkAnimationComplete() {
}

void UVendorWidget::OnItemInspectorClosed(UItemInspectorWidget* ItemInspectorWidget) {
}





void UVendorWidget::CompleteWholesaleSpender() {
}


