#include "AmmoReadoutWidget.h"

UAmmoReadoutWidget::UAmmoReadoutWidget() {
    this->HolsterTexture = NULL;
    this->UnholsterTexture = NULL;
    this->CrouchTexture = NULL;
    this->UnCrouchTexture = NULL;
    this->bIsAmmoNotifEnabled = false;
    this->LowAmmoWarningPercent = 0.25f;
    this->AmmoEntryDisplayTime = 1.50f;
    this->LowEnergyOpacity = 0.45f;
    this->WidgetWrapper = NULL;
    this->CycleOverlay = NULL;
    this->AmmoNotificationBorder = NULL;
    this->RemainingReloadThreshold = 2;
    this->AmmoReadout = NULL;
    this->LoadedAmmoTextBlock = NULL;
    this->RemainingAmmoPanel = NULL;
    this->RemainingAmmoTextBlock = NULL;
    this->PickupAmmoTextBlock = NULL;
    this->AmmoTypeImage = NULL;
    this->AmmoValueContainer = NULL;
    this->TotalAmmoCount = NULL;
    this->RemainingAmmoOverlay = NULL;
    this->PickupAmmoOverlay = NULL;
    this->AmmoFadeAnim = NULL;
    this->PickupAmmoFadeAnim = NULL;
    this->ThrowableCountTextBlock = NULL;
    this->ThrowableContainer = NULL;
    this->ThrowableInputLabel = NULL;
    this->EquipmentWheel = NULL;
    this->HolsterImage = NULL;
    this->UnholsterHBox = NULL;
    this->CrouchImage = NULL;
    this->bShowWeaponList = false;
    this->WeaponVBox = NULL;
    this->WeaponSwapInputLabel = NULL;
    this->Weapon1 = NULL;
    this->Weapon2 = NULL;
    this->Weapon3 = NULL;
    this->Weapon4 = NULL;
    this->ReloadPerkIcon = NULL;
    this->ReloadPerkAnim = NULL;
    this->GadgetDisplay = NULL;
    this->PlayerEnergyBarImage = NULL;
    this->GadgetFullAnim = NULL;
    this->GadgetEmptyAnim = NULL;
    this->GadgetMinimumChargedAnim = NULL;
    this->GadgetBeginRechargeAnim = NULL;
    this->GadgetInsufficientAnim = NULL;
    this->GadgetInUseAnim = NULL;
    this->GadgetSegmentParamName = TEXT("Gadget Segments");
    this->SelectedGadgetParamName = TEXT("Selected Gadget Slot");
    this->ThrowSegmentParamName = TEXT("Throw Segments");
    this->SelectedThrowParamName = TEXT("Selected Throw Slot");
    this->WeaponSegmentParamName = TEXT("Weapon Segments");
    this->SelectedWeaponParamName = TEXT("Selected Weapon Slot");
    this->GadgetIconName = TEXT("GadgetIcon");
    this->ThrowableIconName = TEXT("ThrowableIcon");
    this->WeaponIconName = TEXT("WeaponIcon");
    this->GadgetSwapAnim = NULL;
    this->WeaponSwapAnim = NULL;
    this->ThrowableSwapAnim = NULL;
    this->InputWidget_BP_Cycle = NULL;
    this->InputWidget_BP = NULL;
    this->EquipmentWheelMaterial = NULL;
    this->EnergyBarMaterial = NULL;
}

void UAmmoReadoutWidget::SwapWeaponImage() {
}

void UAmmoReadoutWidget::SwapThrowableImage() {
}

void UAmmoReadoutWidget::SwapGadgetImage() {
}

void UAmmoReadoutWidget::OnTTDMeterVisibilityChanged(int32 VisibilityIn) {
}

void UAmmoReadoutWidget::OnTTDMaxChanged(float NewMaxEnergy) {
}

void UAmmoReadoutWidget::OnPreventTTDChanged(bool bPreventTTD) {
}

void UAmmoReadoutWidget::OnPerkPartialReload(int32 AmmoAdded, UTexture2D* ReloadIcon) {
}

void UAmmoReadoutWidget::OnItemRemoved(UInventoryComponent* InInventoryComponent, const FItemStack& ItemStack) {
}

void UAmmoReadoutWidget::OnItemCountChanged(UInventoryComponent* InInventoryComponent, const FItemStack& ItemStack) {
}


