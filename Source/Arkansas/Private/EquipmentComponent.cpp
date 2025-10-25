#include "EquipmentComponent.h"
#include "Templates/SubclassOf.h"

UEquipmentComponent::UEquipmentComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->bAutoActivate = true;
    this->WeaponAttachSocket = TEXT("WeaponPoint");
    this->WeaponAttachSocketFPV = TEXT("WeaponPoint");
    this->PendingWeaponToEquip = NULL;
    this->EquippedWeapon = NULL;
    this->bAutoSlotEquipment = true;
    this->NewArmorSlots[0] = NULL;
    this->NewArmorSlots[1] = NULL;
    this->NewArmorSlots[2] = NULL;
    this->NewArmorSlots[3] = NULL;
    this->NewArmorSlots[4] = NULL;
    this->NewArmorSlots[5] = NULL;
    this->NewArmorSlots[6] = NULL;
    this->NewArmorSlots[7] = NULL;
    this->NewArmorSlots[8] = NULL;
    this->NewArmorSlots[9] = NULL;
    this->NewArmorSlots[10] = NULL;
    this->NewArmorSlots[11] = NULL;
    this->MedKitConsumableSlots.AddDefaulted(4);
    this->DefaultMedKitConsumable = NULL;
    this->FirstMedKitSlotConsumable = NULL;
    this->GadgetSlots.AddDefaulted(6);
    this->EquippedGadget = NULL;
    this->PendingGadgetToEquip = NULL;
    this->ThrowableTrajectoryAdjustModeFPV = EThrowableTrajectoryAdjustMode::NoAdjustments;
    this->ThrowableSlots.AddDefaulted(4);
    this->EquippedThrowable = NULL;
    this->OverrideThrowable = NULL;
    this->CurrentThrowable = NULL;
}

void UEquipmentComponent::WeaponAdvanceLevelDebug(int32 NumLevels, bool bIgnoreCost) {
}

void UEquipmentComponent::UnlockWeaponSlotsDebug(int32 NumSlots) {
}

void UEquipmentComponent::UnequipAllModsDebug() {
}

void UEquipmentComponent::ToggleGadgetActivation() {
}

void UEquipmentComponent::SlotWeaponDebug(FName WeaponName) {
}

void UEquipmentComponent::SetWeaponLevel(int32 Level, bool bOverrideWeaponLevels) {
}

void UEquipmentComponent::SetSkipDetachOnUnequip(bool bSkip) {
}

void UEquipmentComponent::SetCalledShotWeaponLevel(int32 Level) {
}

void UEquipmentComponent::SetArmorLevel(int32 Level, bool bOverrideArmorLevels) {
}

void UEquipmentComponent::RemoveWeapon_BP(TSubclassOf<UWeapon> WeaponClass) {
}

void UEquipmentComponent::RemoveConsumableAmmoDebug() {
}

void UEquipmentComponent::RemoveArmor_BP(EArmorSlot ArmorSlot) {
}

void UEquipmentComponent::OnUnlockAbilityChanged(EUnlockAbility Ability) {
}

void UEquipmentComponent::OnUnholsterWeaponInstant(UWeapon* Weapon) {
}

void UEquipmentComponent::OnStopFineAim(UWeapon* Weapon) {
}

void UEquipmentComponent::OnStopClimb() {
}

void UEquipmentComponent::OnStartUnholsterWeapon(UWeapon* Weapon) {
}

void UEquipmentComponent::OnStartUnequipWeapon(UWeapon* Weapon) {
}

void UEquipmentComponent::OnStartReloadWeapon(UWeapon* Weapon) {
}

void UEquipmentComponent::OnStartHolsterWeapon(UWeapon* Weapon) {
}

void UEquipmentComponent::OnStartFineAim(UWeapon* Weapon) {
}

void UEquipmentComponent::OnStartEquipWeapon(UWeapon* Weapon) {
}

void UEquipmentComponent::OnStartClimb() {
}

void UEquipmentComponent::OnMedKitUsed(bool bDoubleDose) {
}

void UEquipmentComponent::OnItemRemovedFromInventory(UInventoryComponent* InInventoryComponent, const FItemStack& ItemStack) {
}

void UEquipmentComponent::OnItemCountChangedInInventory(UInventoryComponent* InInventoryComponent, const FItemStack& ItemStack) {
}

void UEquipmentComponent::OnItemAddedToInventory(UInventoryComponent* InInventoryComponent, const FItemStack& ItemStack) {
}

void UEquipmentComponent::OnHolsterWeaponInstant(UWeapon* Weapon) {
}

void UEquipmentComponent::OnEndUnholsterWeapon(UWeapon* Weapon) {
}

void UEquipmentComponent::OnEndUnequipWeapon(UWeapon* Weapon) {
}

void UEquipmentComponent::OnEndUnequipGadget(UGadget* Gadget) {
}

void UEquipmentComponent::OnEndTacticalReloadWeapon(UWeapon* Weapon) {
}

void UEquipmentComponent::OnEndReloadWeapon(UWeapon* Weapon) {
}

void UEquipmentComponent::OnEndHolsterWeapon(UWeapon* Weapon) {
}

void UEquipmentComponent::OnEndEquipWeapon(UWeapon* Weapon) {
}

void UEquipmentComponent::OnEndEmptyReloadWeapon(UWeapon* Weapon) {
}

void UEquipmentComponent::OnConversationStarted(UOwConversationInstance* ConversationInstance) {
}

void UEquipmentComponent::OnCancelReloadWeapon(UWeapon* Weapon) {
}

void UEquipmentComponent::LoadConsumableAsAmmoDebug(FName ConsumableName) {
}

void UEquipmentComponent::LoadAmmoDebug(FName AmmoName) {
}

bool UEquipmentComponent::IsUsingNRayScanner() {
    return false;
}

bool UEquipmentComponent::IsItemInAnySlot(TSubclassOf<UItem> Item) const {
    return false;
}

bool UEquipmentComponent::IsGadgetActivated() const {
    return false;
}

void UEquipmentComponent::InitializeDestructibleBodyParts(bool bFromDelegate) {
}

bool UEquipmentComponent::HasEquippedAccessory(TSubclassOf<UAccessory> TargetAccessory) const {
    return false;
}

int32 UEquipmentComponent::GetMaxNumberOfAccessories() const {
    return 0;
}

UWeapon* UEquipmentComponent::GetEquippedWeapon() const {
    return NULL;
}

UHelmet* UEquipmentComponent::GetEquippedHelmet() const {
    return NULL;
}

UArmorSet* UEquipmentComponent::GetEquippedArmor() const {
    return NULL;
}

UAccessory* UEquipmentComponent::GetEquippedAccessory(int32 Slot) const {
    return NULL;
}

TArray<UAccessory*> UEquipmentComponent::GetAllAccessoriesCoveringRegion(FGameplayTag AccessoryRegion) const {
    return TArray<UAccessory*>();
}

void UEquipmentComponent::EquipWeaponModByClassDebug(EModSlot ModSlot, TSubclassOf<UWeaponMod> WeaponMod, bool bIgnoreSlotModdability) {
}

void UEquipmentComponent::EquipWeaponFromSlotDebugOnly(int32 SlotIndex, bool bInstantEquip, bool bStartingCombat) {
}

void UEquipmentComponent::EquipWeaponFromSlot(uint32 SlotIndex, bool bInstantEquip, bool bStartingCombat) {
}

void UEquipmentComponent::EquipWeaponDebug(FName WeaponName) {
}

void UEquipmentComponent::EquipWeaponBP(TSubclassOf<UWeapon> Weapon) {
}

void UEquipmentComponent::EquipWeapon_BP(TSubclassOf<UWeapon> WeaponClass, int32 SlotIndex) {
}

void UEquipmentComponent::EquipPreviousWeapon() {
}

void UEquipmentComponent::EquipModDebug(FName ModName) {
}

void UEquipmentComponent::EquipGadgetByClass(TSubclassOf<UGadget> GadgetClass) {
}

void UEquipmentComponent::EquipArmorModByClassDebug(EArmorModSlot ArmorModSlot, TSubclassOf<UArmorModItem> ArmorModItem) {
}

void UEquipmentComponent::EquipArmorDebug(FName ArmorName) {
}

void UEquipmentComponent::EquipArmorByClassDebug(EArmorSlot ArmorSlot, TSubclassOf<UArmorItem> ArmorItem) {
}

void UEquipmentComponent::EquipArmor_BP(EArmorSlot ArmorSlot, TSubclassOf<UArmorItem> ArmorItem) {
}

void UEquipmentComponent::AutoFillWeaponSlots() {
}

void UEquipmentComponent::AddMedKitCharges(float ChargesToAdd) {
}


