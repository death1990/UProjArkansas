#include "OnSellItem.h"

UOnSellItem::UOnSellItem() {
    this->ItemType = ESellItemType::None;
}

void UOnSellItem::OnVectorTransaction(int32 BuyingBalance, int32 SellingBalance, int32 RepairingBalance, FItemStackSplit& ItemStackSplit) {
}


