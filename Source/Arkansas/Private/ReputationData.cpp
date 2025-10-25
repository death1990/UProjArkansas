#include "ReputationData.h"

UReputationData::UReputationData() {
    this->RankType = EReputationRankType::Bad;
    this->Rank = 0;
    this->VendorPriceAdjustment = 0.00f;
    this->PlayerCanBuyRestrictedVendorStock = false;
}


