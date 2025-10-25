#include "VendorComponent.h"

UVendorComponent::UVendorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReputationBreaksRestriction = true;
    this->bHackingBreaksRestriction = false;
    this->bPurchaseOnly = false;
    this->bIsVendingMachine = false;
    this->bIgnorePlayerMerchantSkill = false;
    this->bCanRepair = true;
    this->OwningFaction = NULL;
    this->TransactionCompleteAudioEvent = NULL;
    this->VendorCloseAudioEvent = NULL;
    this->ImpactDataSet = NULL;
    this->TrapTriggeredAudioEvent = NULL;
    this->TrapTriggeredDataSet = NULL;
    this->RestrictedStockSpell = NULL;
}

void UVendorComponent::SetVendorContainer(AContainer* Container) {
}

void UVendorComponent::SetRestrictedStockAvailable(bool bAvailable) {
}

void UVendorComponent::SetReducedHackingPrices(bool bHacked) {
}

void UVendorComponent::SetBoobyTrapped(bool bTrapped) {
}

void UVendorComponent::Restock(bool bOnlyDescriptorsThatIgnoreRestockDelay) {
}


