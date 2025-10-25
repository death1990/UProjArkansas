#include "VendorStockDescriptor.h"

FVendorStockDescriptor::FVendorStockDescriptor() {
    this->LootTable = NULL;
    this->bIsOneOff = false;
    this->bIgnoreRestockDelay = false;
    this->GenerationConditionsDataAsset = NULL;
    this->RequiredRankLevel = ERankLevel::Zero;
}

