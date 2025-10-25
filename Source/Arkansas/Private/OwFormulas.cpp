#include "OwFormulas.h"
#include "Templates/SubclassOf.h"

UOwFormulas::UOwFormulas() {
    this->OCLMinDifficulty = 0;
    this->OCLMaxDifficulty = 0;
    this->LockpickMaxDelta = 0;
    this->HackMinDifficulty = 0;
    this->HackMaxDifficulty = 0;
    this->HackMaxDelta = 0;
    this->TrapMinDifficulty = 0;
    this->TrapMaxDifficulty = 0;
    this->TrapMaxDelta = 0;
    this->InteriorSneakDetectionRange = 0.00f;
    this->ExteriorSneakDetectionRange = 0.00f;
    this->MinimumMerchantSkillForDiscount = 0;
    this->MerchantDiscountDivisor = 0.00f;
    this->PawningValueReductionModifier = 0.00f;
    this->RestockFrequencyDays = 0.00f;
    this->BuybackExpirationDays = 0.00f;
    this->SalePriceMultiplier = 1.00f;
    this->MaxDiscount = 1.00f;
    this->MinUnlockedGadgetSlots = 2;
    this->BeaconFocusAimSimilarityOn = 0.99f;
    this->BeaconFocusAimSimilarityOff = 1.00f;
    this->StandardKeyHoldTime = 0.25f;
    this->StandardDoubleClickTime = 0.25f;
    this->InterrogationSkillCheckXPLimitCount = 6;
    this->InterrogationSkillCheckXPLimitTime = 600.00f;
}

int32 UOwFormulas::WorkbenchRepairPartCost_Implementation(float Durability, int32 ItemLevel, int32 EngineerSkill) const {
    return 0;
}

int32 UOwFormulas::VendorRepairCurrencyCost_Implementation(float Durability, int32 ItemLevel) const {
    return 0;
}































int32 UOwFormulas::GetRespecCost_Implementation(int32 NumRespecs) const {
    return 0;
}

int32 UOwFormulas::GetInterrogationBribeAmount_Implementation(EBribeDifficulty BribeDifficulty, TSubclassOf<UFactionData> NpcFaction) const {
    return 0;
}

int32 UOwFormulas::GetBribeAmount_Implementation(EBribeDifficulty BribeDifficulty, ESkillDifficultyTier SkillDifficultyTier, int32 MerchantSkill) const {
    return 0;
}

int32 UOwFormulas::FieldRepairPartCost_Implementation(float Durability, int32 ItemLevel, int32 EngineerSkill) const {
    return 0;
}

















int32 UOwFormulas::CalculateTier3Count_Implementation(const int32 ScienceSkill) const {
    return 0;
}

int32 UOwFormulas::CalculateTier2Count_Implementation(const int32 ScienceSkill) const {
    return 0;
}

int32 UOwFormulas::CalculateTier1Count_Implementation(const int32 ScienceSkill) const {
    return 0;
}

int32 UOwFormulas::CalculatePartsRecoveredOnBreakdown_Implementation(float Durability, int32 ItemLevel, bool bFieldBreakdown) const {
    return 0;
}

float UOwFormulas::CalculateMoraleAdjustment_Implementation(float AddedMoral, int32 CharmAttribute, int32 TemperamentAttribute) const {
    return 0.0f;
}

float UOwFormulas::CalculateMerchantSkillDiscount_Implementation(int32 MerchantSkill) const {
    return 0.0f;
}

float UOwFormulas::CalculateItemBasePrice_Implementation(int32 BasePrice, bool bPristine, float Condition) const {
    return 0.0f;
}

float UOwFormulas::CalculateIntialMorale_Implementation(int32 TemperamentAttribute) const {
    return 0.0f;
}

float UOwFormulas::BaseRepairPartCost_Implementation(float Durability, int32 ItemLevel) const {
    return 0.0f;
}



