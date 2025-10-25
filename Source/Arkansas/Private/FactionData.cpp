#include "FactionData.h"

UFactionData::UFactionData() {
    this->Visibility = EFactionVisibility::Never;
    this->FactionEnum = EFactionHardEnum::Count;
    this->StandingAdjustmentScale = 1.00f;
    this->VendorPriceStat = NULL;
    this->SkillCheckStat = NULL;
    this->bAlwaysVisibleInVendorWidget = false;
}

bool UFactionData::HasFactionStanding(EStandingType StandingType, EStandingLevel StandingLevel, EComparisonOperator Operator) const {
    return false;
}

ERankLevel UFactionData::GetRankLevel() const {
    return ERankLevel::Zero;
}


