#include "POIVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=ObsidianIDComponent -FallbackName=ObsidianIDComponent

APOIVolume::APOIVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SkillDifficultyTierOverride = ESkillDifficultyTier::Invalid;
    this->LootBudgetMultiplier = 1.00f;
    this->IDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
}


