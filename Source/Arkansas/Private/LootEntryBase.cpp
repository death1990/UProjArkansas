#include "LootEntryBase.h"

ULootEntryBase::ULootEntryBase() {
    this->MinTier = ESkillDifficultyTier::One;
    this->MaxTier = ESkillDifficultyTier::Five;
    this->Chance = 100;
    this->Count = 1;
    this->CountMax = 1;
}


