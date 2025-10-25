#include "Item.h"
#include "Templates/SubclassOf.h"

UItem::UItem() {
    this->bHideFromUI = false;
    this->UIImage = NULL;
    this->bForceItemGainedNotification = false;
    this->bIsExaminable = false;
    this->bRequiresUIPromptOnAcquire = false;
    this->BrandData = NULL;
    this->ItemRarity = EItemRarity::Common;
    this->bUnique = false;
    this->bIsScience = false;
    this->bCanBeScavenged = true;
    this->bAutoJunk = false;
    this->bPreventResellingStolenItem = true;
    this->ItemLevel = 1;
    this->BaseValue = 0;
    this->Weight = 0.00f;
    this->bIsLootable = true;
    this->OnUseEvent = NULL;
    this->ItemAddedSpell = NULL;
    this->ItemEquippedSpell = NULL;
    this->OwningFaction = NULL;
    this->bPlayerOwned = false;
    this->ItemCraftingRecipe = NULL;
    this->RenderScaleModifier = EItemRenderScaleModifier::NoChange;
    this->ItemFlags = 1;
    this->AmountOfSaleByPlayer = 0;
    this->RequiredRankLevelForPurchase = ERankLevel::Zero;
}

void UItem::SetPlayerOwnership(bool bRemoveNonPlayerOwnership) {
}

void UItem::SetOwnership(TSubclassOf<UFactionData> Faction, TSoftObjectPtr<AActor> Actor, bool bInPlayerOwned) {
}

void UItem::SetNonPlayerOwnership(TSubclassOf<UFactionData> Faction, TSoftObjectPtr<AActor> Actor, bool bRemovePlayerOwnership) {
}

void UItem::OnStatUpdated(URpgStatComponent* InStatComponent, const URpgStat* Stat) {
}

bool UItem::IsPlayerOwned() const {
    return false;
}

TSubclassOf<UFactionData> UItem::GetOwningFaction() const {
    return NULL;
}

TSoftObjectPtr<AActor> UItem::GetOwningActor() const {
    return NULL;
}

void UItem::ClearPlayerOwnership() {
}

void UItem::ClearNonPlayerOwnership() {
}

void UItem::ClearAllOwnership() {
}

bool UItem::CanPlayerSafelyTakeBranching(EBoolResult& OutResult) {
    return false;
}

bool UItem::CanPlayerSafelyTake() const {
    return false;
}


