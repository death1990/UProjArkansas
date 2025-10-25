#include "GlobalItemData.h"

UGlobalItemData::UGlobalItemData() {
    this->PlayerItemLevelDelta = 0;
    this->MaxItemLevelGreaterThanPlayer = 5;
    this->WeaponPart = NULL;
    this->ArmorPart = NULL;
    this->HackedVendorPriceAdjustment = -0.10f;
    this->SuaveVendorPricAdjustment = -0.10f;
    this->ScienceAdvancementCostCap = 2000;
    this->UnspecifiedPickupOverhangAllowance = 0.20f;
    this->UnspecifiedAllowedAngle = 45.00f;
    this->LootDirectory = NULL;
    this->DoctorPriceScalar = 0.50f;
    this->NumCraftingMaterialsToGive = 100;
    this->ScrapperLootTable = NULL;
    this->TreasureHunterLootTable = NULL;
    this->TreasureHunterChance = 0.00f;
    this->SurvivalistLootTable = NULL;
    this->ScrapEngineeringLootTable = NULL;
    this->ScrapEngineeringChance = 0.00f;
    this->AutomechScrapperLootTable = NULL;
    this->AutomechScrapperChance = 0.00f;
    this->WastefulLootTable = NULL;
}


